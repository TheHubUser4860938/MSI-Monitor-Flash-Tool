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

Nothing below 5 words of "write" can alter the monitor.
"""
from __future__ import annotations

import argparse
import hashlib
import os
import sys
import time

from . import Facts
from .ddc import RTBus, ddc_packet, ddc_parse_reply, SLAVE_DDC
from .isp import I2CTarget, ScalerBus, IspError

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
    return RTBus(args.bus)


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
        return sorted(texts)[0][1]
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


def bin_header(path: str) -> dict:
    with open(path, "rb") as f:
        f.seek(Facts.BIN_LAYOUT["version"][0])
        ver = f.read(16)
        model_off = Facts.BIN_LAYOUT["model_name"][0]
        f.seek(model_off)
        model = f.read(64)
        f.seek(0, os.SEEK_END)
        size = f.tell()
    def _cstr(b):
        return b.split(b"\xff")[0].split(b"\x00")[0].decode(errors="replace")
    return {"version": _cstr(ver), "model": _cstr(model), "size": size,
            "sha256": hashlib.sha256(open(path, 'rb').read()).hexdigest()}


def cmd_info(args):
    with _bus(args) as bus:
        print(f"bus /dev/i2c-{args.bus}")
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
    h = bin_header(args.bin)
    with _bus(args) as bus:
        e = read_edid(bus)
        mon_name = _edid_model_name(e)
        try:
            live = vendor_fw_version(bus)
        except Exception as exc:
            live = f"unreadable ({exc})"
    print(f"bin says model  : {h['model']!r}  version {h['version']!r}")
    print(f"monitor reports : {mon_name!r}")
    print(f"live firmware   : {live!r}")
    ok = h["model"].strip().lower() in mon_name.lower() or mon_name.lower() in h["model"].lower()
    print(f"\nmodel match     : {'OK' if ok else 'MISMATCH (this is what error 0x45 means)'}")
    if not ok:
        sys.exit(1)


def cmd_probe(args):
    with _bus(args) as bus:
        print(f"# read-only ACK scan of /dev/i2c-{args.bus}")
        for t in TARGETS:
            ack = bus.probe(t.addr7)
            note = ""
            if ack and t.addr7 not in (0x30, 0x37, 0x50, 0x4a, 0x4b):
                note = "  <-- ISP slave visible!"
            print(f"  {t.name:<20} 7-bit {t.addr7:#04x} (8-bit {t.w:#04x}/{t.r:#04x})"
                  f"  {'ACK' if ack else 'no-ack'}{note}")
    isp_visible = None
    with _bus(args) as bus:
        isp_visible = any(bus.probe(t.addr7) for t in TARGETS
                          if t.addr7 in (0x20, 0x22, 0x18))
    print(f"\nISP slaves visible: {isp_visible}  "
          f"({'flash read/backup possible' if isp_visible else 'flash dump needs ISP slave access -- see STATUS.md'})")


def cmd_backup(args):
    with _bus(args) as bus:
        sb = ScalerBus(bus, verbose=args.verbose, delay_ms=1)
        t = I2CTarget("ISP flash", 0x20)
        if not bus.probe(t.addr7):
            sys.exit("backup: ISP slave 0x20 does not ACK on this link/driver yet.\n"
                     "On NVIDIA the kernel routes no AUX transactions for it; "
                     "run on Intel/AMD or extend with the RM NV0073 aux backend (STATUS.md).")
        # JEDEC-like ID read must look sane before we trust any dump
        print("reading first 256 bytes …")
        head = sb.read_burst(t, 0, 256, page=Facts.SLAVES["isp_page_len"])
        print(" head:", head[:32].hex(" "))
        if head == bytes(256):
            sys.exit("read returned all zeros -- not trusting this path, nothing saved.")
        out = args.out
        total = args.size
        print(f"dumping {total} bytes -> {out}")
        with open(out, "wb") as f:
            done = 0
            while done < total:
                n = min(4096, total - done)
                f.write(sb.read_burst(t, done, n, page=Facts.SLAVES["isp_page_len"]))
                done += n
                if done % 0x40000 == 0:
                    print(f"  {100 * done / total:.0f}%")
        print("done; verify against the .bin header you expect inside it")


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


def main(argv=None):
    p = argparse.ArgumentParser(prog="msi-isp", description=__doc__,
                                formatter_class=argparse.RawDescriptionHelpFormatter)
    p.add_argument("--bus", type=int, default=int(os.environ.get("MSI_ISP_BUS", 4)),
                   help="i2c bus number (default $MSI_ISP_BUS or 4; check `ddcutil detect`)")
    p.add_argument("-v", "--verbose", action="store_true")
    p.add_argument("--bin", help="firmware .bin for info/verify")
    sub = p.add_subparsers(dest="cmd", required=True)
    sub.add_parser("info", help="monitor + bin identity (safe)")
    sub.add_parser("verify", help="model-match check that error 0x45 does (safe)")
    sub.add_parser("probe", help="slave ACK scan incl. ISP addresses (safe)")
    b = sub.add_parser("backup", help="dump scaler SPI flash (read-only)")
    b.add_argument("--out", required=True)
    b.add_argument("--size", type=lambda s: int(s, 0), default=Facts.FW_BIN_SIZE)
    w = sub.add_parser("write", help="program flash (stub today, see STATUS.md)")
    w.add_argument("--allow-write", action="store_true",
                   help="required and acknowledged: a bad flash can brick the scaler")
    args = p.parse_args(argv)
    {"info": cmd_info, "verify": cmd_verify, "probe": cmd_probe,
     "backup": cmd_backup, "write": cmd_write}[args.cmd](args)


if __name__ == "__main__":
    main()
