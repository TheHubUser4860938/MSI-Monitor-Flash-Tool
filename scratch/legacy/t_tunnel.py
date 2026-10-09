#!/usr/bin/env python3
"""Read-only test: reach arbitrary slaves via the DP native I2C AUX tunnel
registers (DP 1.2a §2.11.10) instead of raw NVAPI AUX.

Tunnel request (write to DPCD 0x0078 on branch slave 0x30):
  [0] port-count(0) | addr-nibble(1)
  [1] slave addr, 8-bit (with R/W bit)
  [2] 0x80 | (read length - 1)     <- for reads
       (n-1)                        <- for writes
  [3..] data (writes only)
Reply read from DPCD 0x007A on branch slave 0x32 (MST/Broadcom branch OUI).
We test BOTH plausible branch slave bases (0x30/0x32 and 0x38/0x3a).
EDID @0x50 is the validation vector: we know its bytes (00 FF FF FF 04 03 1D ..).
"""
import sys, time
sys.path.insert(0, ".")
from msi_isp.ddc import RTBus

REQ = {0x30: 0x32, 0x38: 0x3A, 0x3C: 0x3E}

def tunnel_read(bus, branch_w, slave8, n, reg=None):
    branch_r = REQ[branch_w]
    body = bytes([0x01, slave8, 0x80 | (n - 1)])
    if reg is not None:
        body = bytes([0x01, slave8 & 0xFE, 0x00, reg])  # set pointer first
        bus.select(branch_w); bus.write(branch_w, body, warmup=False)
        time.sleep(0.002)
        body = bytes([0x01, slave8, 0x80 | (n - 1)])
    bus.select(branch_w)
    bus.write(branch_w, body, warmup=False)
    time.sleep(0.005)
    bus.select(branch_r)
    try:
        return bus.read(branch_r, n + 1, warmup=False)   # +1 status/byte0
    except OSError as e:
        return f"EIO:{e.errno}".encode()

with RTBus(4) as bus:
    for bw in (0x30, 0x38, 0x3C):
        print(f"\n=== branch {bw:#04x} -> {REQ[bw]:#04x} ===")
        for name, s8 in (("EDID 0x50W", 0x50), ("EDID 0x51R", 0x51),
                         ("MCCS  0x37W", 0x37), ("ISP   0x20W", 0x20),
                         ("ISP   0x21R", 0x21), ("ISP   0x6F?", 0x6F)):
            for mode in ("bare", "reg0"):
                try:
                    r = tunnel_read(bus, bw, s8, 8,
                                    reg=0 if mode == "reg0" else None)
                    print(f"  {name} {mode:5s}: {r[:12].hex(' ')!s}")
                except Exception as e:
                    print(f"  {name} {mode:5s}: EXC {type(e).__name__}: {e}")
                time.sleep(0.02)
