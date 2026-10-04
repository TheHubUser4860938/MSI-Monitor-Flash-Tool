#!/usr/bin/env python3
"""Replicate comm!AutoDetectSlaveAddr: bare-address probe over candidate
slaves, pre and post ISP entry, using ONLY the proven aux_i2c plain-7-bit
form (the one that byte-matches the kernel on 0x50). Reads/probes only."""
import sys, time, pathlib
sys.path.insert(0, str(pathlib.Path(__file__).resolve().parent.parent))
from msi_isp import Facts
from msi_isp.nvbus import NvRMAuxBus
from msi_isp.nvrm import AUX_REQ_WRITE, AUX_REQ_READ
from msi_isp.isp import enter_isp, exit_isp, isp_alive

bus = NvRMAuxBus(verbose=False)

def bare(slave7, wr=True):
    try:
        name, _ = bus.raw_txn(AUX_REQ_WRITE if wr else AUX_REQ_READ, slave7,
                              addr_only=True)
        return name
    except Exception as e:
        return type(e).__name__

CANDS = [0x37, 0x21, 0x22, 0x20, 0x19, 0x1A, 0x1B, 0x41, 0x42, 0x43, 0x44, 0x45, 0x18]
print("pre-ISP bare-address names:")
for s in CANDS:
    print(f"  {s:#04x}: W={bare(s,True):>8} R={bare(s,False):>8}")

idx, st = enter_isp(bus, verbose=False, retries=5)
print(f"\nISP alive: cand {idx} status {st:#04x}")
print("post-ISP bare-address names:")
for s in CANDS:
    print(f"  {s:#04x}: W={bare(s,True):>8} R={bare(s,False):>8}")

# 0x21 with a 0x9F (JECID-style) pointer read attempt, read-only
for s in (0x20, 0x21):
    try:
        bus.write(s, b"\x9f", warmup=True)
        d = bus.read(s, 4, warmup=False)
        print(f"slave {s:#04x} @0x9F (JECID?): {d.hex(' ')}")
    except Exception as e:
        print(f"slave {s:#04x} @0x9F: {type(e).__name__}")

exit_isp(bus)
bus.write(0x50, b"\x00", warmup=True)
ed = b""
for i in range(8):
    ed += bus.read(0x50, 16, warmup=False)
ker = pathlib.Path("/sys/class/drm/card1-DP-3/edid").read_bytes()
print("EDID restored:", "MATCH" if ed == ker[:128] else "DIFF")
bus.close()
