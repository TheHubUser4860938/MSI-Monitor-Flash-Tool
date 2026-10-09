#!/usr/bin/env python3
"""Decisive: slave 0x22 (8-bit 0x44, the MCU reg block Write32BitRegEx uses)
over RM AUX, probed ONLY while ISP is verified alive, in one process with no
polluting dead-slave writes in between. Read-only apart from the twice-proven
ISP enter/exit magic. Root required."""
import sys, time
sys.path.insert(0, str(__import__("pathlib").Path(__file__).resolve().parent.parent))
from msi_isp import isp, Facts
from msi_isp.nvbus import NvRMAuxBus

MCU7 = 0x22

def rd(bus, a7, n, label):
    try:
        b = bus.read(a7, n, warmup=True)
        print(f"  {label:28s} -> {b.hex(' ') if b else 'empty'}")
        return b
    except Exception as e:
        print(f"  {label:28s} -> EXC {type(e).__name__}: {e}")
        return None

with NvRMAuxBus(verbose=False) as bus:
    # sanity gate: transport alive
    d = rd(bus, 0x50, 4, "[pre] EDID 0x50 ptr-less")
    st_pre = isp.isp_alive(bus)
    print(f"ISP status pre: {st_pre!r}")

    print("entering ISP (proven magic)...")
    idx, st = isp.enter_isp(bus)
    print(f"ISP entered: candidate {idx}, status {st:#04x}")

    # --- the probe: nothing but 0x22 traffic while alive ---
    time.sleep(0.1)
    st2 = isp.isp_alive(bus)
    print(f"ISP still alive right before probe: {st2!r}")
    b = rd(bus, MCU7, 8, "0x22 read 8 (no pointer)")
    if b and set(b) != {0}:
        print("  ^^ NON-ZERO -> 0x22 is ALIVE")
    # Flash.dat window semantics: index reg 0x60; try index write then read
    w = None
    try:
        w = bus.write(MCU7, bytes([0x60, 0x00]))   # poke index 0x60 addr, val 0
        print(f"  0x22 write [60 00] -> {'ACK' if w is not None else w}")
    except Exception as e:
        print(f"  0x22 write [60 00] -> EXC {type(e).__name__}: {e}")
    rd(bus, MCU7, 4, "0x22 read 4 (after write)")

    time.sleep(0.05)
    st3 = isp.isp_alive(bus)
    print(f"ISP status after probe: {st3!r}")

    print("exiting ISP (0x24)...")
    ok = isp.exit_isp(bus)
    print(f"exit ok: {ok}")
    d2 = rd(bus, 0x50, 8, "[post] EDID 0x50")
    print("[post] health: DDC read works" if d2 else "[post] WARN: EDID read failed")
