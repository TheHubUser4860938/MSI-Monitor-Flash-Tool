#!/usr/bin/env python3
"""Decisive read-only probe: is the scaler a 16-bit-addressed I2C memory
device at slave 0x37 once ISP mode is entered?

Protocol model (WinIspPlugIn.dll WritePWM2SPIDev @0xa280, ReadReg/WriteReg,
Read32BitRegEx @0x8750):
  - 32-bit reg addr = [page][b2][b1][b0]; page 0xFF => version/window regs
  - PWM2SPI dev writes: addr16 = (dev*2*4) + (chan<<2)   [byte lanes]
    dev0 cmd = 0x0000, dev0 data = 0x0004, dev1 = 0x0008/0x000C...
  - version read (GetFWInfo): addr 0xFFE1E6-ish, 4 bytes
  - model string  'MAG 341CQ X28' lives at flash 0xF806
  - flash window base seen in Read32BitRegEx constant region: 0xFFFE....
All operations are register READS except the ISP magic/exit pair, which are
the exact bytes the Windows tool itself sends (proven reversible).
Oracles: FW.009 (live version), MAG 341CQ X28 (model), 0x1f/4a/1c/9f-adjacent
(JEDEC ID of A25L032 via SPI opcode 0x9F through the PWM2SPI bridge).
"""
import sys, time
sys.path.insert(0, "/home/eugene/Projects/monitor-fw")
from msi_isp.nvbus import NvRMAuxBus

SL = 0x37
MAGIC_IN, MAGIC_EXIT = b"\x94", b"\x24"
STATUS_READ_LEN = 1

OK = []

def note(tag, ok, detail=""):
    print(f"  [{'OK' if ok else '--'}] {tag}" + (f": {detail}" if detail else ""))
    if ok:
        OK.append(tag)

def status(bus):
    name, got = bus.raw_txn(0x1, SL, data=b"\x00", mot=True)   # write ptr 0
    if name != "ACK":
        name2, got = bus.raw_txn(0x5, SL, data=b"\x10", mot=True)  # read 16
        return name2, got
    name2, got = bus.raw_txn(0x5, SL, data=b"\x10", mot=True)
    return name2, got

def rd16(bus, addr16, n=4):
    """ReadReg model: write 2-byte pointer (be), then read n bytes."""
    ptr = bytes([(addr16 >> 8) & 0xFF, addr16 & 0xFF])
    try:
        bus.write(SL, ptr)
    except OSError as e:
        return None, f"write E: {e}"
    try:
        data = bus.read(SL, n)
    except OSError as e:
        return None, f"read E: {e}"
    return data, data.hex(" ")

def rd24(bus, addr24, n=4):
    """Read32BitRegEx/FE-family model: 3-byte big-endian pointer, then read."""
    ptr = bytes([(addr24 >> 16) & 0xFF, (addr24 >> 8) & 0xFF, addr24 & 0xFF])
    try:
        bus.write(SL, ptr)
    except OSError as e:
        return None, f"write E: {e}"
    try:
        data = bus.read(SL, n)
    except OSError as e:
        return None, f"read E: {e}"
    return data, data.hex(" ")

def printable(b):
    return "".join(chr(c) if 32 <= c < 127 else "." for c in b)

def main():
    bus = NvRMAuxBus()
    print(f"bus up: {bus}")

    print("\n[1] normal-mode status byte")
    n, s = status(bus)
    print(f"  status reply {n}: {s.hex(' ') if s else '-'}")

    print("\n[2] ISP entry (magic 0x94, the tool's own entry byte)")
    try:
        bus.write(SL, MAGIC_IN)
    except OSError as e:
        print(f"  magic write failed: {e}"); sys.exit(1)
    time.sleep(0.02)
    n, s = status(bus)
    isp = bool(s and (s[0] & 0x80))
    print(f"  status after: {n} {s.hex(' ') if s else '-'}  ISP={'YES' if isp else 'no'}")

    print("\n[3] register-window reads while ISP alive (read-only)")
    tests24 = [
        (0x00E1E6, 8, "version reg (expect FW.009ish)"),
        (0x00E1E0, 16, "version reg lower"),
        (0xF8E1E6, 8, "FE-window alt page F8"),
        (0xFFFEE1, 16, "window base regs FFE1"),
        (0x00F800, 32, "flash F800 direct (expect 012/MAG)"),
        (0x00F806, 32, "flash F806 direct (expect MAG 341CQ X28)"),
    ]
    for a, nlen, tag in tests24:
        d, info = rd24(bus, a, nlen)
        if d:
            okish = b"FW." in d or b"MAG" in d or (d != bytes(nlen) and any(c for c in d))
            print(f"  [{a:#08x}] {info}  |{printable(d)}|")
            if b"FW." in d or b"MAG" in d:
                OK.append(tag)
        else:
            print(f"  [{a:#08x}] FAIL {info}")

    print("\n[4] 16-bit mem-device probes")
    for a, nlen, tag in [(0xFFE6, 8, "reg FFE6 (FE E1 E6 3B/2B pair)"),
                         (0xE1E6, 8, "reg 0xE1E6"),
                         (0xFF38, 8, "ctrl 0xFF38 (33/32 pair)"),
                         (0x0000, 8, "dev0 cmd lane"),
                         (0x0004, 8, "dev0 data lane")]:
        d, info = rd16(bus, a, nlen)
        print(f"  [{a:#06x}] {info}: " + (f"{info} |{printable(d)}|" if d else "FAIL " + str(info)))
    # re-point explicitly and sanity-read the same reg twice (anti-echo check)
    d1, _ = rd16(bus, 0xE1E6, 8); time.sleep(0.05)
    d2, _ = rd16(bus, 0xE1E0, 8)
    if d1 and d2 and d1 != d2:
        note("reads are address-sensitive (NOT cached echo)", True,
             f"{d1.hex(' ')} vs {d2.hex(' ')}")

    print("\n[5] PWM2SPI JEDEC-ID attempt (opcode 0x9F -> A25L032 = 1F 4A 1C-ish)")
    try:
        bus.write(SL, bytes([0x00, 0x00, 0x9F]))   # cmd lane @0x0000
        time.sleep(0.05)
        d, info = rd16(bus, 0x0004, 4)             # data lane @0x0004
        if d:
            print(f"  flash id: {d.hex(' ')} |{printable(d)}|")
            if d and d[0] in (0x1F, 0x1f, 0xEF, 0xC8, 0x20):
                OK.append("JEDEC id sanity")
        else:
            print(f"  data lane: FAIL {info}")
    except OSError as e:
        print(f"  pwm2spi write failed: {e}")

    print("\n[6] ISP exit (0x24) and health check")
    try:
        bus.write(SL, MAGIC_EXIT)
    except OSError as e:
        print(f"  exit write failed: {e}")
    time.sleep(0.05)
    n, s = status(bus)
    print(f"  status after exit: {s.hex(' ') if s else '-'}")
    ed = bus.read(0x50, 0, warmup=True) if False else None
    # EDID sanity via normal path
    try:
        bus.write(0x50, b"\x00")
        ed = bus.read(0x50, 16)
        print(f"  EDID head: {ed.hex(' ')}")
        note("EDID intact after test", ed[:4] == b"\x00\xff\xff\xff")
    except OSError as e:
        print(f"  EDID read failed: {e}")

    print(f"\nORACLES HIT: {OK if OK else 'none'}")
    bus.close()

if __name__ == "__main__":
    main()
