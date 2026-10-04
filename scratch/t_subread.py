#!/usr/bin/env python3
"""Wire-accurate flash-read test (READ-ONLY; exit_isp + EDID verify after).

Recipe just decoded from vendor DLLs (ReadFlashData -> I2C2SubReadEx ->
Comm_Aux core 0x3a8e0):
    slave 0x41/8bit (=7-bit 0x20), 2-byte wire pointer, burst read <=32.
Pointer candidates for flash addr A (24-bit):
    P1 [A>>16, A&0xff]        (literal decode)
    P2 [A>>16, A>>8]          (hi-mid variant, low via auto-inc)
    P3 [A>>8 & 0xff, A&0xff]  (16-bit window model)
    P4 [A>>16, A>>8, A&0xff]  (3-byte pointer)
Oracles: 'MAG 341CQ X28' @ ~0xF806 (identical in .bin and live flash),
JEDEC-id-ish bytes @ 0x000000.
Mailbox variant: same pointers on 7-bit 0x37 (the DDC slave, 8-bit 0x6E).
"""
import sys, time
sys.path.insert(0, ".")
from msi_isp.nvbus import NvRMAuxBus
from msi_isp import isp

ORACLE = b"MAG 341CQ X28"


def ptrs(a, form):
    if form == "P1": return bytes([a >> 16, a & 0xFF])
    if form == "P2": return bytes([a >> 16, (a >> 8) & 0xFF])
    if form == "P3": return bytes([(a >> 8) & 0xFF, a & 0xFF])
    if form == "P4": return bytes([a >> 16, (a >> 8) & 0xFF, a & 0xFF])


def attempt(bus, slave7, form, addr, n=32):
    p = ptrs(addr, form)
    try:
        bus.write(slave7, p)
    except Exception as e:
        return f"wr:{type(e).__name__}"
    try:
        d = bus.read(slave7, n)
    except Exception as e:
        return f"rd:{type(e).__name__}"
    return d


def main():
    bus = NvRMAuxBus()
    print("bus up; display discovered")
    # health oracle first (proven path)
    ed = bus.read(0x50, 8)
    print("EDID head:", ed[:8].hex(" "), "OK" if ed[:3] == b"\x00\xff\xff" else "BAD")

    st = isp.enter_isp(bus, verbose=False)
    print(f"enter_isp -> {st!r}")
    alive = isp.isp_alive(bus)
    print(f"isp_alive -> {alive!r}")
    if alive is None:
        print("!! ISP not alive; aborting before any flash reads")
        bus.close(); return 2

    for slave7, sname in ((0x20, "ISP 0x20"), (0x37, "mailbox 0x37")):
        ack = bus.probe(slave7)
        print(f"\n### {sname} probe: {'ACK' if ack else 'no-ack'}")
        if not ack and slave7 == 0x20:
            continue
        for form in ("P1", "P2", "P3", "P4"):
            for addr, note in ((0xF806, "model string"), (0x000000, "vector/jedec")):
                d = attempt(bus, slave7, form, addr)
                if isinstance(d, str):
                    print(f"  {form} @{addr:#07x} {note:<13} {d}")
                    continue
                hit = ORACLE in d
                printable = sum(1 for b in d if 32 <= b < 127)
                print(f"  {form} @{addr:#07x} {note:<13} {d[:16].hex(' ')}"
                      f"{'  <== ORACLE HIT' if hit else ''}"
                      f"{'  (ascii-ish)' if printable >= 12 and not hit else ''}")
                for b in d.split(b"\xff")[0:1]:
                    pass
                time.sleep(0.01)

    rc = isp.exit_isp(bus)
    print(f"\nexit_isp -> {rc}")
    ed = bus.read(0x50, 8)
    print("EDID post-restore:", ed[:8].hex(" "), "OK" if ed[:3] == b"\x00\xff\xff" else "BAD")
    bus.close()
    return 0


if __name__ == "__main__":
    sys.exit(main())
