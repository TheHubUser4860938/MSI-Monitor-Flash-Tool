#!/usr/bin/env python3
"""msi-isp: native Linux firmware tool for Realtek-RTD scaler monitors
(MSI MAG/MPG "Optix" OLED family), speaking i2c-dev DDC/CI + scaler ISP over
the DisplayPort AUX tunnel the kernel already manages.

Modes, in increasing confidence order:
  info     what the monitor and a .bin file actually say        (safe, works today)
  verify   the tool's own 0x45 model-match check, done natively (safe, works today)
  probe    ISP slave-address ACK scan                           (safe: scans only)
  backup   dump the scaler SPI flash                            (needs ISP ACKs)
  write    full flash program cycle                             (--allow-write + typed confirm)

Only `write` can alter the monitor; everything else is strictly read-only.
"""
from __future__ import annotations

import argparse
import hashlib
import os
import pathlib
import re
import sys
import time

from . import Facts
from .ddc import SLAVE_DDC, RTBus, ddc_packet, ddc_parse_reply
from .isp import I2CTarget, IspError, ScalerBus
from .lane import LANE_DEFAULT, LANES
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
    --nvrm -> NVIDIA RM DP-AUX (root), else i2c-dev. --lane picks which of
    the vendor's two register lanes the NVIDIA transports speak (lane.py)."""
    lane = getattr(args, "lane", "i2c")
    if getattr(args, "auxdev", False):
        from .auxdev import AuxDevBus
        return AuxDevBus(lane=lane)
    if getattr(args, "nvrm", False):
        from .nvbus import NvRMAuxBus
        return NvRMAuxBus(lane=lane)
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
    """Extract model/version/size/sha/content-checksum from an updater .bin.

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
    # the _XXXX filename checksum (cracked 14c, Facts.BIN_CHECKSUM_EXPECTED):
    # low 16 bits of the plain byte sum, cross-checkable ONLY when the
    # filename carries the suffix -- a mismatch means corrupt/wrong file.
    fn = re.search(r"_([0-9A-Fa-f]{4})\.bin$", os.path.basename(path))
    filename_sum = int(fn.group(1), 16) if fn else None
    content_sum = Facts.bin_content_checksum(data)

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
            "sum16": content_sum, "filename_sum": filename_sum,
            "edid_offset": edid_off, "edid_exact": exact,
            "edid_models": names}


def _checksum_line(h: dict) -> tuple[str, bool]:
    """(display line, gate-pass) for the content/filename checksum."""
    if h["filename_sum"] is None:
        return (f"content cksum   : 0x{h['sum16']:04X} (no _XXXX suffix in "
                "the filename -- cannot cross-check)", True)
    if h["filename_sum"] == h["sum16"]:
        return (f"content cksum   : OK (filename _{h['filename_sum']:04X} "
                "== byte sum low16)", True)
    return (f"content cksum   : MISMATCH (filename "
            f"_{h['filename_sum']:04X} != byte sum low16 "
            f"0x{h['sum16']:04X}) -- the vendor's 'Compare checksum "
            f"fail!' -- file corrupt or mislabeled", False)


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
        line, ok = _checksum_line(h)
        print(line)
        if not ok:
            sys.exit(1)
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
    line, chk_ok = _checksum_line(h)
    print(line)
    if not chk_ok:
        sys.exit(1)


def cmd_record(args):
    """Replay the vendor's FIRST gate (16i): the UserDefinedInfo compare.

    The GUI's 12% step compares the bin's internal record against what the
    monitor answers over DDC/CI - model name first, version second. The
    number in its message ("error code: 0x45") is the ScalerType, not the
    reason; the reason is this compare.
    """
    from . import models
    from . import record as rec
    card = models.lookup(args.model) if args.model else models.X28
    if args.chip:
        # 16ac: the plugin's mode-2 read, on the wire - ISP Flash_Read of the
        # block at (block << 16) + 0xF800, ended at the first 0xff.
        with _bus(args) as bus:
            r = rec.read_chip_record(bus, block=args.block, slave7=card.slave7,
                                     bank_size=card.bank_size,
                                     verbose=args.verbose)
        if r is None:
            sys.exit("no record block answered at that address")
        print(f"# the record block on the chip, at {r.offset:#08x} "
              f"(block {r.block}, page offset {r.page_offset:#07x})")
        print(f"  version   : FW.{r.version}   code {r.code}")
        print(f"  flag      : {r.flag:#04x}")
        print(f"  model     : {r.model!r}")
        print(f"  panel     : {r.panel!r}")
        print(f"  scaler    : {r.scaler!r}")
        print(f"  wire form : Flash_Read(bank {r.offset // card.bank_size}, "
              f"page {r.offset // rec.RECORD_BLOCK % (card.bank_size // rec.RECORD_BLOCK)},"
              f" {r.offset % rec.RECORD_BLOCK:#07x}) - FUN_100383f0, 16ac")
        return
    if not args.bin:
        sys.exit("record needs --bin /path/to/firmware.bin (or --chip)")
    with open(args.bin, "rb") as fh:
        data = fh.read()
    if args.blocks:
        recs = rec.find_records(data)
        print(f"# record blocks in {args.bin}: {len(recs)}")
        for r in recs:
            print(f"  block {r.block} @ {r.offset:#08x} (page offset "
                  f"{r.page_offset:#07x})  FW.{r.version}  code {r.code}  "
                  f"flag {r.flag:#04x}")
            print(f"      model {r.model!r}  panel {r.panel!r}  scaler {r.scaler!r}")
        if not recs:
            print("  none - no 64 KiB block carries a record at page offset "
                  f"{rec.RECORD_PAGE_OFFSET:#07x}")
        return
    if args.set_version:
        recs = rec.find_records(data)
        if not recs:
            sys.exit("no record block to write in this image")
        r = recs[0]
        new = rec.with_version(r, args.set_version)
        out = rec.patch_image(data, new)
        with open(args.out or args.bin, "wb") as fh:
            fh.write(out)
        n = sum(1 for a, c in zip(data, out) if a != c)
        print(f"# record write (16ac): FW.{r.version} -> FW.{new.version} "
              f"in block {new.block} @ {new.offset:#08x}")
        print(f"  {n} byte(s) changed; the chain programs that one 64 KiB block")
        print(f"  wrote {args.out or args.bin}")
        return
    try:
        b = rec.parse_bin_record(data)
    except ValueError as exc:
        sys.exit(f"no record block in this image: {exc}")
    with _bus(args) as bus:
        # VCP 0x02 answers N=0 on this panel (10/10 tries, 16i), so the model
        # name comes from the EDID's 0xFC descriptor - the same string.
        p = rec.read_panel_record(bus, model=_edid_model_name(read_edid(bus)),
                                  verbose=args.verbose)
    ign = frozenset(x for x in (args.ignore or "").split(",") if x)
    v = rec.compare(b, p, ignore=ign)
    print("# the vendor's model-name gate (exe FUN_004119f0, progress 0xc = 12%)")
    print(f"  bin  model   : {b.model!r}")
    print(f"  panel model  : {p.model!r}")
    print(f"  bin  code    : {b.code!r}   (the .bin's own version code)")
    print(f"  panel version: {p.version!r}")
    print(f"  bin  panel   : {b.panel!r}   scaler {b.scaler!r}")
    for name, c in v.checks.items():
        tag = "ignored" if c["ignored"] else ("match" if c["ok"] else "DIFFER")
        print(f"  {name:<8}      : {tag}")
    if ign:
        print(f"  switches on  : {', '.join(sorted(ign))}")
    print(f"\ngate            : {v.summary}")
    if not v.ok:
        sys.exit(1)


def cmd_flashread(args):
    """One flash read at an address, through the vendor's ISP port ladder (16k).

    The record block is the target the vendor's own compare reads: FW.009's
    copy sits at 0x2F7AA and FW.012's at 0xF806 in the .bin files, so those
    two addresses are the defaults to try.
    """
    from .isp import flash_read_at, flash_read_script
    addrs = [int(a, 0) for a in args.addr.split(",")]
    with _bus(args) as bus:
        if hasattr(bus, "unlock"):
            bus.unlock("flashread")     # the bulk lane gates ISP-slave writes
        idx = status = None
        if args.isp:
            from .isp import enter_isp
            idx, status = enter_isp(bus, verbose=args.verbose)
            print(f"# inside ISP mode (magic candidate {idx}, status "
                  f"{status:#04x})")
        for a in addrs:
            try:
                if args.grammar == "script":
                    d = flash_read_script(bus, a, args.count, slave7=args.slave,
                                          verbose=args.verbose)
                else:
                    d = flash_read_at(bus, a, args.count, slave7=args.slave,
                                      verbose=args.verbose)
            except Exception as exc:
                print(f"  {a:#08x}: {exc}")
                continue
            txt = "".join(chr(b) for b in d if 32 <= b < 127)
            print(f"  {a:#08x}: {d.hex(' ') if d else '(no reply)'}")
            if txt:
                print(f"           as text: {txt!r}")
        if args.isp:
            from .isp import exit_isp
            exit_isp(bus)


def _probe_registers(bus):
    """Native-lane probe: native DP AUX has NO slave addressing, so the
    register index IS the address field. Reading the register file directly
    is the experiment the tunnel lane cannot run, and it is read-only: a pose
    write of a register index changes no scaler state (kernel/msi_auxch.c
    says native writes land in host-owned DPCD/MTPMT space).

    Two grammars, one per surface: Flash.dat's byte-index registers
    (0x60 CTRL arm 0x38/trigger 0x39, 0x61 OPCODE, 0x64-0x66 addr/len) and
    14i's 16-bit window (0x841 CTRL, 0x842 OPCODE, 0x845 ADDR)."""
    sb = ScalerBus(bus)
    tgt = I2CTarget("scaler register file", 0x22)
    # Measured 2026-11-01: on this sink the native lane answers with the
    # DPCD byte space (0x60 = TPS set 05, 0x61 = lane0 pattern 21, 0x64 =
    # lane-align 2b) and 0x841.. reads 00 in MTPMT1 - i.e. the Flash.dat
    # register NUMBERS address DPCD here, they are not the 0x22 register
    # file. Two names per row, because both readings are true of one byte.
    regs = [(0x60, "Flash.dat CTRL  = DPCD TPS set"),
            (0x61, "Flash.dat OPCODE = DPCD lane0"),
            (0x64, "Flash.dat ADDR   = DPCD lane-align"),
            (0x65, "Flash.dat mode   = DPCD clocks-rec"),
            (0x66, "Flash.dat LEN    = DPCD ch-eq"),
            (0x841, "14i window CTRL  = DPCD MTPMT1"),
            (0x842, "14i window OPCODE = DPCD MTPMT1+1"),
            (0x845, "14i window ADDR   = DPCD MTPMT1+4")]
    print("# native lane: register INDEX scan (no slave addressing in "
          "native AUX; one byte read per register, read-only)")
    live = False
    for reg, what in regs:
        try:
            got = sb.word_read(tgt, reg, 1)
        except Exception as e:
            print(f"  reg {reg:#05x}  {what:<30} error: {e}")
            continue
        if got:
            live = True
            print(f"  reg {reg:#05x}  {what:<30} {got.hex(' ')}")
        else:
            print(f"  reg {reg:#05x}  {what:<30} no reply")
    print(f"\nnative register lane: {'ALIVE' if live else 'silent'}")
    return live


def cmd_flashdat(args):
    """Show the vendor's per-chip flash script (read-only, no panel needed)."""
    from . import flashdat
    recs = flashdat.parse(args.dat)
    if args.chip:
        rec = flashdat.find(args.chip, args.dat)
        print(f"{rec.name}  ({rec.manufacturer})")
        print(f"  capacity  : {rec.capacity_bytes // 1024} KiB, "
              f"{rec.banks} x 2 MiB bank(s)")
        print(f"  id opcode : {rec.id_opcode:#04x}   expect {rec.id_expect.hex(' ')}")
        print(f"  modes     : A={rec.mode_a} B={rec.mode_b}  class {rec.class_id:#04x}")
        if not rec.script:
            print("  script    : (none - this part runs on the defaults)")
            return 0
        for i, phase in enumerate(rec.phases(), 1):
            print(f"  phase {i}:")
            for st in phase:
                print(f"      {st}")
        return 0
    with_script = [r for r in recs if r.script]
    print(f"{args.dat}: {len(recs)} chip records, {len(with_script)} with a script")
    for r in recs:
        star = "*" if r.script else " "
        print(f"  {star} {r.name:<16} {r.manufacturer:<22} "
              f"{r.capacity_bytes // 1024:>6} KiB  id {r.id_opcode:#04x}"
              + (f"  {len(r.script)} stmts, {len(r.phases())} phases"
                 if r.script else ""))
    if not args.chip:
        print("\n  (a * carries a script; --chip NAME prints one part's phases)")
    return 0


def cmd_simulate(args):
    """Run the whole flash cycle against the emulated monitor (no hardware)."""
    from . import pipeline
    from .emul import EmulatedMonitor
    from .isp import enter_isp, flash_read_at, program_page_at, sector_erase_at
    binpath = pathlib.Path(args.bin)
    img = binpath.read_bytes() if binpath.exists() else b"\x00" * 4096
    m = EmulatedMonitor(image=b"\xff" * len(img), chip=args.chip)
    print(f"emulated monitor: {args.chip}, {m.flash.capacity // 1024} KiB, "
          f"{m.flash.banks} banks")
    print(f"image           : {binpath.name} ({len(img):,} B)\n")
    _idx, status = enter_isp(m)
    print(f"1. enter ISP        status {status:#04x}")
    rep = pipeline.run_pipeline(m, addr=args.addr, size=32, sleep=lambda _ms: None,
                                steps=pipeline.PIPELINE_WRITE, image=img)
    plan = pipeline.erase_plan(len(img))
    print(f"2. write chain      {len(rep.results)} steps, "
          f"{'all answered' if rep.reached is None else 'stalled at ' + rep.reached}"
          f"  (plan: {plan['sector_count']} sectors, {plan['pro_len']} pages)")
    # The dual-bank flow (16r, 16y): the chain above already erased and
    # programmed one page of the ACTIVE bank. Do the INACTIVE bank here, then
    # let the reset switch the boot flag. bank_select=1 -> port 0xEF -> bank 1.
    head = img[args.addr:args.addr + 32]
    sector_erase_at(m, args.addr, bank_select=1, slave7=m.slave)
    m.flash.tick(40)
    print(f"3. sector erase     bank 1 @{args.addr:#08x} -> "
          f"{m.flash_bank(1, args.addr, 4).hex(' ')}")
    n = program_page_at(m, args.addr, head, slave7=m.slave, bank=1)
    m.flash.tick(5)
    back = flash_read_at(m, args.addr, len(head), slave7=m.slave, mode=1)
    ok = "match" if back[:len(head)] == head else "MISMATCH"
    print(f"4. program page     bank 1, {n} B sent, read-back {ok}")
    print(f"5. version now      {m.version!r} (bank 0 active)")
    m.reset()
    print(f"6. reset + switch   active bank {m.active_bank}, version {m.version!r}")
    print(f"7. leave ISP        ring {m.read(m.slave, 1).hex(' ')}")
    print(f"\nmodel traffic: {m.ops} bus operations, "
          f"flash clock {m.flash.clock_ms:,.0f} ms, "
          f"{len(m.flash.log)} flash operations")
    print("note: this is our protocol model (16k/16p/16w), not a wire capture;")
    print("      the panel's flash cells are still unproven (16v).")
    return 0


def cmd_models(args):
    """Show the model cards - the per-monitor contract, and the vendor's INI."""
    from . import models
    if args.from_ini:
        card = models.from_ini_file(args.from_ini)
        print(f"card read from {args.from_ini}:")
        print(f"  {card.model}  panel {card.panel or '-'}  scaler {card.scaler}")
        print(f"  record    : version @{card.version_addr:#07x} "
              f"len {card.version_len}, model @{card.model_pos:#07x}")
        print(f"  gate      : model={int(card.check_model)} "
              f"version={int(card.check_version)} "
              f"checksum={int(card.check_checksum)}")
        print(f"  transport : slave {card.slave7:#04x}, page {card.page}, "
              f"type {card.device_type:#04x}, {card.banks} x "
              f"{card.bank_size // (1024 * 1024)} MiB banks")
        print(f"  timing    : {card.after_command_ms} ms/command, "
              f"{card.retry_count} retries, {card.after_reset_ms} ms after reset")
        known = models.MODELS.get(card.model)
        if known is not None:
            same = known.contract == card.contract
            print("  vs the built-in card for this model: "
                  + ("identical contract" if same else "DIFFERS - the INI is newer"))
            if not same:
                for a, b, label in ((known.version_addr, card.version_addr, "version addr"),
                                    (known.page, card.page, "page"),
                                    (known.after_command_ms, card.after_command_ms, "settle"),
                                    (known.retry_count, card.retry_count, "retries"),
                                    (known.slave7, card.slave7, "slave")):
                    if a != b:
                        print(f"      {label:12} card {a:#06x}  ini {b:#06x}")
        return 0
    if args.model:
        card = models.lookup(args.model)
    else:
        for name, card in models.MODELS.items():
            mark = "  (alias)" if card.model != name else ""
            print(f"{name:28} {card.scaler:9} slave {card.slave7:#04x} "
                  f"page {card.page:3} {card.capacity_bytes // (1024 * 1024)} MiB "
                  f"record @{card.version_addr:#07x}{mark}")
        distinct = len({id(c) for c in models.MODELS.values()})
        print(f"\n  {len(models.MODELS)} names, {distinct} distinct cards. "
              "A new monitor is a ModelCard, or a vendor IspSetting.ini "
              "(--from-ini).")
        return 0
    print(f"{card.model}  panel {card.panel or '-'}  scaler {card.scaler}")
    print(f"  record    : version @{card.version_addr:#07x} len {card.version_len}, "
          f"model @{card.model_pos:#07x}")
    print(f"  gate      : model={int(card.check_model)} "
          f"version={int(card.check_version)} checksum={int(card.check_checksum)}")
    print(f"  transport : slave {card.slave7:#04x}, page {card.page}, "
          f"type {card.device_type:#04x}, inactive bank base "
          f"{card.inactive_base:#08x}")
    print(f"  timing    : {card.after_command_ms} ms/command, "
          f"{card.retry_count} retries, {card.after_reset_ms} ms after reset, "
          f"{card.after_ddcci_ms} ms after DDCCI")
    print(f"  version   : {','.join(f'0x{b:02X}' for b in card.version_cmd)} "
          f"(string at index {card.version_index}, {card.version_read} B)")
    print("  flash chip: ask the panel - msi-isp chips (the card does not fix it)")
    if args.ini:
        print("\n" + card.ini_text().rstrip())
    return 0


def cmd_chips(args):
    """Ask the panel which flash chip is fitted, and name its Flash.dat record."""
    from . import flashdat
    from .isp import identify, rdid
    bus = _bus(args)
    try:
        if args.ladder:
            id3 = rdid(bus, slave7=args.slave)
            print(f"register probe (0x60 <- 0x46, 0x61 <- 0x9f, 0x60 <- 0x47, "
                  f"read 0x67-0x69): {' '.join(f'{b:02x}' for b in id3)}")
            try:
                rec = flashdat.find_by_id(bytes(id3))
            except KeyError as e:
                print(f"  no record: {e.args[0]} - these are window bytes "
                      f"(16t), not an ID answer")
                return 0
            print(f"  -> {rec.name}  {rec.manufacturer}  "
                  f"{rec.capacity_bytes // 1024} KiB  {rec.banks} bank(s)")
            return 0
        try:
            rec, got = identify(bus, slave7=args.slave)
        except Exception as e:
            print(f"no Flash.dat record answered the ID walk: {e}")
            return 0
        print(f"chip: {rec.name}  ({rec.manufacturer})")
        print(f"  id        : {got.hex(' ')} on opcode {rec.id_opcode:#04x}")
        print(f"  capacity  : {rec.capacity_bytes // 1024} KiB, {rec.banks} x 2 MiB bank(s)")
        print(f"  modes     : A={rec.mode_a} B={rec.mode_b}  class {rec.class_id:#04x}")
        if rec.script:
            print(f"  script    : {len(rec.script)} statements, {len(rec.phases())} phases")
            for i, ph in enumerate(rec.phases(), 1):
                cmds = [st.args[1] for st in ph if st.kind == "command"]
                print(f"      phase {i}: " + (", ".join(f"{c:#04x}" for c in cmds)
                                              or "(address/strobe only)"))
        else:
            print("  script    : (none - this part runs on the defaults)")
        return 0
    finally:
        bus.close()


def cmd_probe(args):
    with _bus(args) as bus:
        if getattr(args, "lane", "i2c") == "native":
            _probe_registers(bus)
            return
        print(f"# read-only ACK scan of {_busname(bus, args)}")
        print("#  (relay/nvrm probes are pure address-phase; the i2c-dev "
              "probe writes one 0x00 pointer byte per slave, ddcutil parity)")
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


def cmd_slaves(args):
    """The vendor's own ISP-slave detection, re-run on our transport."""
    from .isp import autodetect_isp_slave
    with _bus(args) as bus:
        print(f"# AutoDetectSlaveAddr replay on {_busname(bus, args)}: "
              f"pose reg {Facts.ISP_SLAVE_PROBE_REG:#04x}, read 1 byte")
        for i, (w8, c8, x8) in enumerate(Facts.ISP_SLAVE_TRIPLES):
            print(f"  cand{i}  isp {w8>>1:#04x} (8-bit {w8:#04x})  "
                  f"cont {c8>>1:#04x}  mailbox {x8>>1:#04x}")
        got = autodetect_isp_slave(bus)
        if not got.found:
            print("\nno candidate answered on this transport")
            return
        print(f"\nvendor picks candidate {got.index}: ISP slave "
              f"{got.slave7:#04x}, continuous {got.continuous7:#04x}, "
              f"mailbox {got.mailbox7:#04x}  (reply {got.reply.hex(' ')})")
        print("lane quality    : " + (
            "answers WITH CONTENT - a flash read can be built on it"
            if got.distinct else
            "answers ZEROS - this is the DP branch device, not the ISP "
            "register file (measured 16c: 0x4A returns 00 at 0x23/0x22/0x20/"
            "0x00, 1-16 bytes). Vendor-parity lane; content still pending."))


def cmd_ladder(args):
    """Replay the vendor's mailbox ladder (Flash.dat commands in the 0xCA
    frame) on this transport; --isp runs it once more inside ISP mode."""
    from .isp import enter_isp, exit_isp, mailbox_ladder
    slaves = [(Facts.ISP_MAILBOX_SLAVE7, "mailbox (triple member)"),
              (0x22, "scaler MCU window"), (0x20, "flash read burst"),
              (0x4A, "cand0 ISP slave"), (0x37, "DDC/CI")]
    with _bus(args) as bus:
        # The relay gates ISP-slave writes for 5 s at a time; the bulk lane
        # addresses 0x37 in the same band, so arm it before writing.
        if hasattr(bus, "unlock"):
            bus.unlock("ladder")
        for mode in (["plain", "isp"] if args.isp else ["plain"]):
            if mode == "isp":
                try:
                    idx, st = enter_isp(bus)
                    print(f"# inside ISP mode (magic candidate {idx}, "
                          f"status {st:#04x})")
                except Exception as e:
                    print(f"# ISP entry failed: {e}")
            for slave7, what in slaves:
                lad = mailbox_ladder(bus, slave7=slave7)
                verdict = ("VARIES" if lad.varies else
                           "constant" if lad.alive else "silent")
                print(f"  {slave7:#04x} {what:<22} {verdict:<9} "
                      f"{lad[0].reply.hex(' ') if lad[0].reply else lad[0].error}")
            if mode == "isp":
                exit_isp(bus)


def cmd_pipeline(args):
    """Walk the vendor's decoded pipeline on this transport, step by step.

    `--chain` picks which of the three decoded chains: `read` (the 8-step probe),
    `spi` (the 9-step type-8 flash write, 16y) and `background` (the 7-step VCP
    protocol type-0x1a models use, 16ab/16ac). `--simulate` runs it against the
    emulator instead of the panel - which is how the background chain gets walked
    on a box whose panel speaks the SPI chain.
    """
    import contextlib

    from .pipeline import PIPELINE, PIPELINE_BACKGROUND, PIPELINE_WRITE, run_pipeline
    chain = args.chain
    if chain == "auto":
        # the card's device type is the selector the vendor uses (16z): 8 -> the
        # SPI chain, 0x1a -> background, 0x1b -> foreground. A card is a default,
        # so the chosen chain is printed - never assumed silently.
        from . import models
        try:
            card = (models.lookup(args.model) if args.model
                    else models.card_for_panel(None))
        except KeyError as exc:
            sys.exit(f"{exc} - msi-isp models lists the registry")
        chain = card.flash_path
        print(f"# chain from the card for {card.model!r}: {chain}")
    steps = {"read": PIPELINE, "spi": PIPELINE_WRITE,
             "background": PIPELINE_BACKGROUND,
             "foreground": PIPELINE}[chain]
    if args.simulate:
        from .emul import EmulatedMonitor
        ctx = contextlib.nullcontext(EmulatedMonitor(image=b"\xff" * 0x20000))
        where = "the emulator"
    else:
        ctx = _bus(args)
        where = None
    with ctx as bus:
        if hasattr(bus, "unlock"):
            bus.unlock("pipeline")
        print(f"# vendor pipeline ({args.chain}) on {where or _busname(bus, args)}")
        rep = run_pipeline(bus, size=args.size, verbose=not args.simulate,
                           steps=steps,
                           image=b"\x5a" * 4096 if args.simulate else None)
        for r in rep.results:
            state = "ok" if r.ok else "STOP"
            detail = ((r.reply.hex(" ")[:48] + ("…" if len(r.reply) > 48 else ""))
                      if r.reply is not None else (r.error or ""))
            print(f"  {state:<5} {r.step.label}")
            if detail:
                print(f"        {detail}")
        if rep.reached is None:
            print("\nwhole pipeline answered")
        if rep.pending:
            print("wire form still pending for: " + ", ".join(rep.pending))
        if len(rep.results) < len(steps):
            print(f"reached step {len(rep.results)} of {len(steps)}")


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
        reason = flash_path_enter(bus, verbose=args.verbose)
        if reason:
            sys.exit(f"backup: {reason}.\nIntel/AMD boxes are the live "
                     "path (TEST-INTEL-AMD.md); NVIDIA measured dead on "
                     "every transport (dead-end #11).")
        try:
            sb = ScalerBus(bus, verbose=args.verbose, delay_ms=1)
            # JEDEC rides the 0x22 register file (Facts: both window maps ARE
            # 0x22; policy names 0x22 explicitly).  The 0x20 slave is the
            # ReadFlashData burst engine and is used for the dump itself.
            tw = I2CTarget("scaler MCU window", 0x22)
            t = I2CTarget("ISP flash", 0x20)
            jid = jedec_id(sb, tw, verbose=args.verbose)
            if jid is None:
                sys.exit("backup: JEDEC gate failed — 0x9F returned no sane "
                         "manufacturer ID (--verbose shows the raw pokes).")
            if jid[0] != 0x1F:
                # binding user policy: no erase/program until JEDEC answers
                # 0x1Fxxxx from 0x22 (AMIC family, Facts.FLASH_CHIP 1f4010)
                sys.exit(f"backup: JEDEC answered {jid.hex(' ')} on the 0x22 "
                         "window, but this target requires 0x1Fxxxx "
                         "(binding safety policy) — refusing to build a "
                         "backup on an unconfirmed chip.")
            print(f"JEDEC ID        : {jid.hex(' ')} (0x22 register file)")
            print("reading first 256 bytes …")
            head = sb.read_burst(t, 0, 256, page=Facts.SLAVES["isp_page_len"])
            print(" head:", head[:32].hex(" "))
            if head == bytes(256):
                sys.exit("read returned all zeros -- not trusting this "
                         "path, nothing saved.")
            out = args.out
            if os.path.exists(out) and os.path.getsize(out):
                sys.exit(f"backup: refusing to overwrite non-empty {out} — "
                         "the backup IS the artifact; pick a fresh path.")
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
                    chunk = sb.read_burst(t, done, n,
                                          page=Facts.SLAVES["isp_page_len"],
                                          progress=prog)
                    if len(chunk) != n:
                        sys.exit(f"backup: short burst at {done:#x} "
                                 f"({len(chunk)} of {n} bytes) — dump not "
                                 f"trusted, {out} is incomplete")
                    f.write(chunk)
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
              use_auxdev=getattr(args, "auxdev", False),
              lane=getattr(args, "lane", "i2c"))
    if getattr(args, "plain", False) or not sys.stdout.isatty():
        from .console import run
        run(args.bus, args.bin, **kw)
    else:
        from .tui import run_tui
        run_tui(args.bus, args.bin, **kw)


def cmd_tui(args):
    from .tui import run_tui
    run_tui(args.bus, args.bin, use_nvrm=getattr(args, "nvrm", False),
            use_auxdev=getattr(args, "auxdev", False),
            lane=getattr(args, "lane", "i2c"))


def flashdat_default() -> str:
    from . import flashdat
    return flashdat.DEFAULT_PATH


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
    p.add_argument("--lane", choices=list(LANES), default=LANE_DEFAULT,
                   help="NVIDIA transports: which of the vendor's two register "
                        "lanes to speak (default i2c = the I2C-over-AUX "
                        "tunnel, 16-bit window 0x841/0x842/0x845; native = "
                        "native DP AUX, Flash.dat byte grammar 0x60/0x61/"
                        "0x64-0x66, 16 B/txn — session 16b)")
    p.add_argument("-v", "--verbose", action="store_true")
    p.add_argument("--bin", help="firmware .bin for info/verify")
    sub = p.add_subparsers(dest="cmd", required=True)
    sub.add_parser("info", help="monitor + bin identity (safe)")
    sub.add_parser("verify", help="model-match check that error 0x45 does (safe)")
    sub.add_parser("probe", help="slave ACK scan incl. ISP addresses (safe)")
    sim = sub.add_parser("simulate", help="run the whole flash cycle against "
                                          "an emulated monitor (no hardware)")
    sim.add_argument("--bin", default="vendor/MSI_MAG_341CQP_QD-OLED_X28_FW.012_4023.bin",
                     help="the firmware image to flash")
    sim.add_argument("--chip", default="MX25L32XX",
                     help="a Flash.dat part number (sets capacity + identity)")
    sim.add_argument("--addr", type=lambda x: int(x, 0), default=0xF800,
                     help="where to erase/program (default: the record block)")
    md = sub.add_parser("models", help="the per-monitor contract: list, show, "
                                       "or read a vendor IspSetting.ini")
    md.add_argument("--model", help="one model string, e.g. 'MAG 341CQ X28'")
    md.add_argument("--from-ini", dest="from_ini",
                    help="read a vendor IspSetting.ini and show its card")
    md.add_argument("--ini", action="store_true",
                    help="print the card back out as a vendor INI")
    ch = sub.add_parser("chips", help="identify the fitted flash chip and print "
                                      "its vendor record (read-only)")
    ch.add_argument("--slave", type=lambda x: int(x, 0), default=0x22,
                    help="the ISP register-file slave (default 0x22)")
    ch.add_argument("--ladder", action="store_true",
                    help="use the register probe (0x60/0x61) instead of walking "
                         "the ID-opcode candidates")
    fd = sub.add_parser("flashdat", help="the vendor's per-chip flash script "
                                         "library (safe, no panel needed)")
    fd.add_argument("--chip", help="one part number, e.g. A25L020")
    fd.add_argument("--dat", default=flashdat_default(), help="path to Flash.dat")
    sub.add_parser("slaves", help="the vendor's ISP-slave detection, re-run "
                                  "(Comm.dll AutoDetectSlaveAddr; safe)")
    ld = sub.add_parser("ladder", help="the vendor's mailbox ladder replayed "
                                       "with Flash.dat's commands (safe)")
    ld.add_argument("--isp", action="store_true",
                    help="also run the ladder inside ISP mode (enter/exit)")
    fr = sub.add_parser("flashread", help="one flash read at an address via "
                                          "the vendor's ISP port ladder (16k)")
    fr.add_argument("--addr", default="0x2f7aa",
                    help="24-bit flash address, or a comma list (default "
                         "0x2f7aa = where FW.009 keeps its record block)")
    fr.add_argument("--slave", type=lambda s: int(s, 0), default=0x37,
                    help="7-bit slave that speaks the ISP port grammar "
                         "(default 0x37 = the INI's 0x6F; 0x22 is the other "
                         "candidate, 16f)")
    fr.add_argument("--grammar", choices=("ports", "script"), default="ports",
                    help="ports = the 0xF2/0x55/0x5E ladder (16k); script = the "
                         "Flash.dat byte-index phases 0x60/0x61/0x64-0x66 (16m)")
    fr.add_argument("--isp", action="store_true",
                    help="enter ISP mode first (the vendor reaches the port "
                         "file from inside ISP mode; 16f)")
    fr.add_argument("--count", type=lambda s: int(s, 0), default=32,
                    help="bytes to read back (default 32)")
    rg = sub.add_parser("record", help="the vendor's model-name gate replayed "
                                       "(the 12% step of 16i; safe)")
    rg.add_argument("--ignore", default="",
                    help="comma list of fields to skip, the way the INI's "
                         "Ignore* switches do: model,version")
    rg.add_argument("--chip", action="store_true",
                    help="read the record block off the chip through the ISP "
                         "ladder (the plugin's mode-2 read, 16ac)")
    rg.add_argument("--blocks", action="store_true",
                    help="list every record block in the image - each 64 KiB "
                         "block, at page offset 0xF800 (16ac)")
    rg.add_argument("--set-version", dest="set_version", metavar="NNN",
                    help="write a new version into the image's record block "
                         "(with --out; the digits, e.g. 013)")
    rg.add_argument("--block", type=lambda s: int(s, 0), default=0,
                    help="which 64 KiB block to read with --chip (default 0)")
    rg.add_argument("--model", help="model card to read/write under (default X28)")
    pl = sub.add_parser("pipeline", help="walk MSI's decoded flash pipeline "
                                         "(enter ISP -> ID -> read -> exit)")
    pl.add_argument("--size", type=lambda s: int(s, 0), default=32,
                    help="bytes to read in the flash-page step (default 32)")
    pl.add_argument("--chain", choices=("read", "spi", "background", "foreground",
                                        "auto"), default="read",
                    help="which decoded chain to walk; 'auto' asks the model card")
    pl.add_argument("--model", help="model card for --chain auto")
    pl.add_argument("--simulate", action="store_true",
                    help="run it against the emulator, not the panel")
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
     "slaves": cmd_slaves, "ladder": cmd_ladder, "flashdat": cmd_flashdat,
     "simulate": cmd_simulate,
     "record": cmd_record, "flashread": cmd_flashread, "chips": cmd_chips,
     "models": cmd_models,
     "pipeline": cmd_pipeline,
     "backup": cmd_backup, "write": cmd_write,
     "shell": cmd_shell, "tui": cmd_tui}[args.cmd](args)


if __name__ == "__main__":
    main()
