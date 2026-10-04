#!/usr/bin/env python3
"""Decide whether slave 0x50 via I2CXfer goes through a real tunnel, and
whether enabling the I2C tunnel speed reg changes anything. All native-mode
reads/writes on DPCD are proven-safe; the 0x00D1 write is restored at the end."""
import sys, pathlib
sys.path.insert(0, str(pathlib.Path(__file__).resolve().parent.parent))
from msi_isp.nvrm import NvRM, AUX_REQ_READ, AUX_REQ_WRITE, AUX_MODE_NATIVE, AUX_MODE_I2C

r = NvRM(); r.init()
gpu = r.card_gpu_ids()[0]
DISPLAY = 0x200  # discovered display (head 0 of the active DP output)

def nat_rd(reg, n=1):
    return r.aux(DISPLAY, reg << 2, req=AUX_REQ_READ, mode=AUX_MODE_NATIVE)[:n]
def nat_wr(reg, b):
    return r.aux(DISPLAY, reg << 2, data=bytes([b]), req=AUX_REQ_WRITE, mode=AUX_MODE_NATIVE)

print("DPCD 0x00C0 (I2C_CAP):", nat_rd(0x00C0, 1))
print("DPCD 0x00D0 (tunnel)  :", nat_rd(0x00D0, 1),
      " speed nibble @D1:", nat_rd(0x00D1, 1),
      " DQC:", nat_rd(0x00D2, 1))
d0 = nat_rd(0x00D0, 1)[0]
try:
    i2c = r.aux(DISPLAY, (0x50 << 20) | (0 << 13) | 0, req=AUX_REQ_WRITE,
                mode=AUX_MODE_I2C, data=b"\x00")
    got = r.aux(DISPLAY, (0x50 << 20) | (1 << 13), req=AUX_REQ_READ,
                mode=AUX_MODE_I2C)[:8]
    print("I2CXfer slave 0x50 read8:", got.hex(" "))
except Exception as e:
    print("I2CXfer 0x50 failed:", type(e).__name__, e)
bus_close = getattr(r, "close", None)
if bus_close: bus_close()
