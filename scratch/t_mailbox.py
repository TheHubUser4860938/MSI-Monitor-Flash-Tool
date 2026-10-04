#!/usr/bin/env python3
"""Read the SPI flash through the scaler's ISP pointer window — the shape
Comm.dll!ReadFlashData uses: I2CRead(slave=0x41 8-bit => 7-bit 0x20,
[addr_hi, addr_lo], burst), chunked by AUX_I2CPageLen=32.

Sequence (all read-only wrt flash):
  1. enter ISP via the PROVEN isp.enter_isp handshake (magic-candidate loop,
     bit-0x80 poll) on slave 0x37 — same code that flipped 0x0a->0xca before.
  2. With ISP alive, try flash-pointer reads at several byte orders and two
     candidate slaves (0x20 first — the tool's 0x41 constant; 0x37 alt):
        pointer [hi,lo]          pointer [lo,hi]        pointer [F8,hi,lo]
  3. Oracles (content known with certainty):
        flash 0x00F800 len 3  -> b'009'   (live FW .009)
        flash 0x00F806 len 16 -> b'MAG 341CQ X28'
     A hit on EITHER proves the window addressing and unlocks `backup`.
  4. exit_isp(0x24), then EDID verify. Nothing ever writes flash.
"""
import sys, time
sys.path.insert(0, "/home/eugene/Projects/monitor-fw")
from msi_isp.nvbus import NvRMAuxBus
from msi_isp.isp import enter_isp, exit_isp, isp_alive, IspError

PAGE = 32
ORACLE = {
    0xF800: (3,  b"009",            "live version"),
    0xF806: (16, b"MAG 341CQ X28",  "model string"),
}
VARIANTS = [
    ("w0x20 [hi,lo]",   0x20, lambda a: bytes([(a >> 8) & 0xFF, a & 0xFF])),
    ("w0x20 [lo,hi]",   0x20, lambda a: bytes([a & 0xFF, (a >> 8) & 0xFF])),
    ("w0x20 [pg,hi,lo]",0x20, lambda a: bytes([(a >> 16) & 0xFF, (a >> 8) & 0xFF, a & 0xFF])),
    ("w0x37 [hi,lo]",   0x37, lambda a: bytes([(a >> 8) & 0xFF, a & 0xFF])),
]

def try_window(bus, addr7, mk, off, n):
    bus.write(addr7, mk(off), warmup=True)
    time.sleep(0.005)
    return bus.read(addr7, n, warmup=False)

def main():
    bus = NvRMAuxBus()
    print("RM aux bus up")
    try:
        cand, st = enter_isp(bus, verbose=True)
        print(f"ISP mode: candidate {cand} status {st:#04x}  [ALIVE]")
    except IspError as e:
        sys.exit(f"enter_isp failed: {e}")

    hits = 0
    for name, addr7, mk in VARIANTS:
        if isp_alive(bus) is None:
            print(f"  ({name} pass skipped: ISP dropped; re-entering)")
            try:
                enter_isp(bus)
            except IspError:
                print("  re-entry failed; aborting this pass")
                continue
        for off, (n, want, tag) in ORACLE.items():
            try:
                got = try_window(bus, addr7, mk, off, n + 8)
            except OSError as e:
                print(f"  {name:<20} {tag:<14} ERR {e}")
                continue
            ok = want in got
            print(f"  {name:<20} {tag:<14} {'HIT' if ok else '..'} "
                  f"got={got[:n+4].hex(' ')} |{''.join(chr(c) if 32 <= c < 127 else '.' for c in got[:n+4])}|")
            hits += ok
    print(f"\noracle hits: {hits}/8")

    print("exiting ISP (0x24)")
    exit_isp(bus)
    time.sleep(0.2)
    bus.write(0x50, b"\x00", warmup=True)
    ed = bus.read(0x50, 16)
    print(f"EDID head: {ed.hex(' ')}  intact={ed[:4] == b'\\x00\\xff\\xff\\xff'}")
    bus.close()

if __name__ == "__main__":
    main()
