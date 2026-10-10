#!/usr/bin/env python3
"""msi-isp: native Linux firmware tool for Realtek-RTD scaler monitors
(MSI MAG/MPG "Optix" OLED family), speaking i2c-dev DDC/CI + scaler ISP over
the DisplayPort AUX tunnel the kernel already manages.

Modes, in increasing confidence order:
  info     what the monitor and a .bin file actually say        (safe, works today)
  verify   the tool's own 0x45 model-match check, done natively (safe, works today)
  probe    ISP slave-address ACK scan (+ optional enter-ISP)   (safe: reads only)
  backup   dump the scaler SPI flash                            (needs ISP ACKs)
  write    full flash program cycle                             (--allow-write + typed confirm)

Only `write` can alter the monitor; everything else is strictly read-only.
"""
from __future__ import annotations

import argparse
import hashlib
import os
import re
import sys
import time

from . import Facts
from .ddc import SLAVE_DDC, RTBus, ddc_packet, ddc_parse_reply
from .isp import I2CTarget, IspError, ScalerBus
from .progress import Bar

# ISP-relevant slaves the Windows tool uses; 8-bit forms kept in Facts.SLAVES
TARGETS = [
    I2CTarget("DP branch",        0x30),
    I2CTarget("MCCS / DDC-CI",    0x37),
    I2CTarget("EDID",             0x50),
    I2CTarget("scaler MCU regs",  0x22),
    I2CTarget("ISP ctrl (0x30)",  0x18),
    I2CTarget("ISP addr hi (31)", 0x19),
    I2CTarget("ISP addr lo (32)", 0x1A),
    I2CTarget("ISP extend (33)",  0x1B),
    I2CTarget("ISP flash rd (41)", 0x20),
]


def _bus(args) -> RTBus:
    """Transport selector: --auxdev -> kernel relay (rootless NVIDIA),
    --nvrm -> NVIDIA RM DP-AUX (root), else i2c-dev."""
    if getattr(args, "auxdev", False):
        from .auxdev import AuxDevBus
        return AuxDevBus()
    if getattr(args, "nvrm", False):
        from .nvbus import NvRMAuxBus
        return NvRMAuxBus()
    return RTBus(args.bus)


def _busname(bus, args) -> str:
    return getattr(bus, "label", f"/dev/i2c-{args.bus}")


# ---------------------------------------------------------------- info ----
def vendor_fw_version(bus: RTBus) -> str:
    """The MSI tool's own version query over vendor DDC/CC (works under Linux)."""
    pkt = ddc_packet(0x01, bytes([0xFE, 0xE1, 0xE6]))
    bus.warmup()
    bus.write(SLAVE_DDC, pkt)
    time.sleep(0.03)
    parsed = ddc_parse_reply(bus.read(SLAVE_DDC, 15))
    if not parsed:
        raise IspError("no parsable reply to the tool's vendor version query")
    payload = parsed["payload"]
    # strip the MCCS reply/result + flag header bytes, keep printable ASCII
    txt = bytes(b for b in payload if 0x20 <= b < 0x7F).decode()
    if not txt:
        raise IspError(f"version payload carried no text (payload={payload.hex(' ')})")
    return txt

def _edid_model_name(e: bytes) -> str:
    """Monitor model string. Priority: ASCII display descriptor (tag 0xFA,
    readable name at +5), then Monitor Name descriptor (0xFC, text at +4 with a
    leading NUL tag terminator). Descriptor tag is at byte +3 of each 18-byte
    descriptor slot at 54 + 18*d. 'MAG 341CQ X28' sits in block0/0xFC here."""
    texts = []
    for blk in range(1 + (e[126] if len(e) > 127 else 0)):
        for d in range(4):
            off = blk * 128 + 54 + d * 18
            if len(e) < off + 4:
                continue
            if e[off:off + 3] != b"\x00\x00\x00":
                continue
            tag = e[off + 3]
            if tag == 0xFA:
                t = e[off + 5:off + 18].split(b"\n")[0]
            elif tag == 0xFC:
                t = e[off + 4:off + 19].split(b"\n")[0]
            else:
                continue
            t = t.strip(b"\x00 \xff\r\n\x02\x03\x04\x05\x0a")
            if t:
                texts.append((0 if tag == 0xFA else 1, t.decode(errors="replace").strip()))
    if texts:
        return min(texts)[1]
    return e[54:72].decode(errors="replace").strip()


def read_edid(bus: RTBus) -> bytes:
    # This NVIDIA adapter caps AUX transactions (~16-18B); ddcutil segments the
    # same way. Re-pose the 0x50 pointer per chunk: verified byte-identical to
    # the kernel's /sys EDID on this monitor.
    edid = bytearray()
    for off in range(0, 256, 16):
        try:
            bus.write(0x50, bytes([off & 0xFF]))
        except OSError:
            break
        time.sleep(0.002)
        try:
            chunk = bus.read(0x50, 16)
        except OSError:
            break
        if not chunk:
            break
        edid += chunk
        if len(chunk) < 16:
            break
    return bytes(edid)


def _edid_strong(blk: bytes) -> bool:
    """Valid EDID block0: checksum + printable monitor-name descriptor.
    Plain magic+sum is weak inside FF-padded firmware images (14o: naive
    scans hit 100+ accidental windows); the name-descriptor requirement
    kills those."""
    if len(blk) != 128 or sum(blk) & 0xFF:
        return False
    name = _edid_model_name(blk)
    return bool(name) and all(0x20 <= ord(c) <= 0x7E for c in name)


def _edid_candidates(data: bytes) -> list[tuple[int, bytes]]:
    out = []
    for m in re.finditer(rb"\x00\xff\xff\xff\xff\xff\xff\x00", data):
        off = m.start()
        blk = data[off:off + 128]
        if _edid_strong(blk):
            out.append((off, blk))
    return out


def bin_header(path: str, live_edid: bytes = b"") -> dict:
    """Extract model/version/size/sha from an updater .bin.

    Version-relative by construction (14o): 'FW.NNN' is pattern-searched
    (it moved +0x7A00 between .009/.012), and model identity is content-
    based, never fixed offsets. If live_edid (the monitor's own block0) is
    given, a byte-exact copy inside the image is the strongest possible
    identity statement -- that IS the vendor's CheckModelName semantics,
    and bins carry whole EDID tables (dozens of variants), so names alone
    are weak. Fixed .012 offsets (Facts.BIN_LAYOUT) remain only as a
    last-ditch fallback."""
    with open(path, "rb") as f:
        data = f.read()
    size, sha = len(data), hashlib.sha256(data).hexdigest()

    m = re.search(rb"FW\.([0-9]{2,3})", data)
    version = m.group(1).decode() if m else ""

    model, edid_off, exact = "", None, False
    if live_edid:
        i = data.find(bytes(live_edid[:128]))
        if i != -1 and _edid_strong(data[i:i + 128]):
            model, edid_off, exact = _edid_model_name(data[i:i + 128]), i, True
    if not model:
        cands = _edid_candidates(data)
        if cands:
            edid_off, model = cands[0][0], _edid_model_name(cands[0][1])

    def _cstr(b):
        return b.split(b"\xff")[0].split(b"\x00")[0].decode(errors="replace")
    if not version:
        o, n = Facts.BIN_LAYOUT["version"]
        version = _cstr(data[o:o + n])
    if not model:
        o, n = Facts.BIN_LAYOUT["model_name"]
        model = _cstr(data[o:o + n])

    names = sorted({_edid_model_name(blk) for _, blk in _edid_candidates(data)})
    return {"version": version, "model": model, "size": size, "sha256": sha,
            "edid_offset": edid_off, "edid_exact": exact,
            "edid_models": names}


def cmd_info(args):
    with _bus(args) as bus:
        print(f"bus {_busname(bus, args)}")
        try:
            print(f"  live firmware : {vendor_fw_version(bus)!r}")
        except Exception as e:
            print(f"  live firmware : unreadable ({e})")
        try:
            e = read_edid(bus)
            if e[:8] == b"\x00\xff\xff\xff\xff\xff\xff\x00":
                name = _edid_model_name(e).encode()
                week, year = e[17], e[18]
                b8, b9 = e[8], e[9]
                mfgs = (chr(((b8 & 0x1f) >> 2) + 0x40)
                        + chr((((b8 & 3) << 3) | (b9 >> 5)) + 0x40)
                        + chr(((b9 & 0x1f)) + 0x40))
                model = (e[10] | (e[11] << 8))
                print(f"  EDID monitor  : {name.decode(errors='replace').strip()}")
                print(f"  EDID mfg      : {mfgs}, week {week}, year {1990 + year}")
                print(f"  EDID product  : {model:#06x}")
            else:
                print(f"  EDID parse    : unexpected header {e[:4].hex()}")
        except Exception as e:
            print(f"  EDID          : unreadable ({e})")
        if args.bin:
            h = bin_header(args.bin)
            print(f"  .bin file     : {args.bin}")
            print(f"    version {h['version']!r}  model {h['model']!r}")
            print(f"    size {h['size']} bytes  sha256 {h['sha256'][:16]}…")


def cmd_verify(args):
    if not args.bin:
        sys.exit("verify needs --bin /path/to/firmware.bin")
    with _bus(args) as bus:
        e = read_edid(bus)
        mon_name = _edid_model_name(e)
        try:
            live = vendor_fw_version(bus)
        except Exception as exc:
            live = f"unreadable ({exc})"
    h = bin_header(args.bin, live_edid=e)
    print(f"bin says model  : {h['model']!r}  version {h['version']!r}")
    if len(h["edid_models"]) > 1:
        print("  (bin carries several EDID variants: "
              + ", ".join(repr(n) for n in h["edid_models"]) + ")")
    print(f"monitor reports : {mon_name!r}")
    print(f"live firmware   : {live!r}")
    if not h["model"].strip() or not mon_name.strip():
        print("\nmodel match     : UNKNOWN — model unreadable from bin or "
              "monitor;\n  never flash on an unknown match.")
        sys.exit(1)
    if h["edid_exact"]:
        print(f"\nmodel match     : OK — the monitor's EXACT EDID (block0) "
              f"is in the bin @ {h['edid_offset']:#x}")
        return
    b, m = h["model"].strip().lower(), mon_name.strip().lower()
    ok = b in m or m in b
    if ok:
        print("\nmodel match     : OK by NAME only (bin has no byte-exact "
              "copy of this monitor's EDID — likely a hardware revision "
              "the image does not cover)")
    else:
        print("\nmodel match     : MISMATCH (this is what error 0x45 means)")
        sys.exit(1)


def cmd_probe(args):
    with _bus(args) as bus:
        print(f"# read-only ACK scan of {_busname(bus, args)}")
        isp_visible = False
        for t in TARGETS:
            ack = bus.probe(t.addr7)
            note = ""
            if ack and t.addr7 not in (0x30, 0x37, 0x50, 0x4a, 0x4b):
                note = "  <-- ISP slave visible!"
            if ack and t.addr7 in (0x20, 0x22, 0x18):
                isp_visible = True
            print(f"  {t.name:<20} 7-bit {t.addr7:#04x} (8-bit {t.w:#04x}/{t.r:#04x})"
                  f"  {'ACK' if ack else 'no-ack'}{note}")
    print(f"\nISP slaves visible: {isp_visible}  "
          f"({'flash read/backup possible' if isp_visible else 'flash dump needs ISP slave access -- see STATUS.md'})")


def cmd_backup(args):
    from .buslock import BusBusyError, bus_lock
    try:
        with bus_lock(args.bus):
            _backup_locked(args)
    except BusBusyError as e:
        sys.exit(str(e))


def _backup_locked(args):
    from .isp import flash_path_enter, flash_path_exit, jedec_id
    with _bus(args) as bus:
        reason = flash_path_enter(bus, 0x20, verbose=args.verbose)
        if reason:
            sys.exit(f"backup: {reason}.\nIntel/AMD boxes are the live "
                     "path (TEST-INTEL-AMD.md); NVIDIA measured dead on "
                     "every transport (dead-end #11).")
        try:
            sb = ScalerBus(bus, verbose=args.verbose, delay_ms=1)
            t = I2CTarget("ISP flash", 0x20)
            jid = jedec_id(sb, t, verbose=args.verbose)
            if jid is None:
                sys.exit("backup: JEDEC gate failed — 0x9F returned no sane "
                         "manufacturer ID (--verbose shows the raw pokes).")
            print(f"JEDEC ID        : {jid.hex(' ')}")
            print("reading first 256 bytes …")
            head = sb.read_burst(t, 0, 256, page=Facts.SLAVES["isp_page_len"])
            print(" head:", head[:32].hex(" "))
            if head == bytes(256):
                sys.exit("read returned all zeros -- not trusting this "
                         "path, nothing saved.")
            out = args.out
            total = args.size
            print(f"dumping {total} bytes -> {out}")
            bar = Bar(total, "backup")
            with open(out, "wb") as f:
                done = 0
                while done < total:
                    n = min(4096, total - done)
                    base = done

                    def prog(got, _n, _base=base):
                        bar.update(_base + got)
                    f.write(sb.read_burst(t, done, n,
                                          page=Facts.SLAVES["isp_page_len"],
                                          progress=prog))
                    done += n
                    bar.update(done)
            bar.done()
            print("compare against the flashed .bin (expect: identical image "
                  "region; every surviving diff = a runtime region)")
        finally:
            exited, edid_ok = flash_path_exit(bus, verbose=args.verbose)
            print(f"exit ISP        : {'clean' if exited else 'NOT clean — status bit still set'}")
            print(f"monitor 0x50    : {'alive (dump was non-invasive)' if edid_ok else 'UNREADABLE — check the monitor now'}")


def cmd_write(args):
    print("""
write mode is intentionally NOT implemented end-to-end yet:

  1. `backup` must first succeed and produce a dump that contains the live
     firmware (proves the read path), and
  2. erase/program packet shapes still need a last confirmation pass against
     the disassembly (re/f_*.txt, WinIspPlugIn IspFlash).

Until both are true this tool refuses to touch flash, on any GPU. The Windows
tool remains the reference flasher.
""")
    sys.exit(3)


def cmd_shell(args):
    kw = dict(use_nvrm=getattr(args, "nvrm", False),
              use_auxdev=getattr(args, "auxdev", False))
    if getattr(args, "plain", False) or not sys.stdout.isatty():
        from .console import run
        run(args.bus, args.bin, **kw)
    else:
        from .tui import run_tui
        run_tui(args.bus, args.bin, **kw)


def cmd_tui(args):
    from .tui import run_tui
    run_tui(args.bus, args.bin, use_nvrm=getattr(args, "nvrm", False),
            use_auxdev=getattr(args, "auxdev", False))


def main(argv=None):
    p = argparse.ArgumentParser(prog="msi-isp", description=__doc__,
                                formatter_class=argparse.RawDescriptionHelpFormatter)
    p.add_argument("--bus", type=int, default=int(os.environ.get("MSI_ISP_BUS", "4")),
                   help="i2c bus number (default $MSI_ISP_BUS or 4; check `ddcutil detect`)")
    tg = p.add_mutually_exclusive_group()
    tg.add_argument("--nvrm", action="store_true",
                    help="NVIDIA GPU: use the RM DP-AUX transport instead of "
                         "i2c-dev (native, no Wine/NVAPI; needs sudo)")
    tg.add_argument("--auxdev", action="store_true",
                    help="NVIDIA GPU: use the kernel relay /dev/msi-auxch "
                         "(kernel/msi_auxch.ko; no sudo — see kernel/)")
    p.add_argument("-v", "--verbose", action="store_true")
    p.add_argument("--bin", help="firmware .bin for info/verify")
    sub = p.add_subparsers(dest="cmd", required=True)
    sub.add_parser("info", help="monitor + bin identity (safe)")
    sub.add_parser("verify", help="model-match check that error 0x45 does (safe)")
    sub.add_parser("probe", help="slave ACK scan incl. ISP addresses (safe)")
    b = sub.add_parser("backup", help="dump scaler SPI flash (read-only)")
    b.add_argument("--out", required=True)
    b.add_argument("--size", type=lambda s: int(s, 0),
                   default=Facts.FLASH_SIZE,
                   help="bytes to dump (default 0x400000 = the whole chip; "
                        "the regions beyond the image are the interesting "
                        "skip-list data)")
    s = sub.add_parser("shell", help="interactive console (shurectl-style "
                                     "curses menu on a TTY)")
    s.add_argument("--plain", action="store_true",
                   help="force the typed REPL instead of the curses menu")
    sub.add_parser("tui", help="curses menu (same as shell on a terminal)")
    w = sub.add_parser("write", help="program flash (stub today, see STATUS.md)")
    w.add_argument("--allow-write", action="store_true",
                   help="required and acknowledged: a bad flash can brick the scaler")
    args = p.parse_args(argv)
    {"info": cmd_info, "verify": cmd_verify, "probe": cmd_probe,
     "backup": cmd_backup, "write": cmd_write,
     "shell": cmd_shell, "tui": cmd_tui}[args.cmd](args)


if __name__ == "__main__":
    main()
