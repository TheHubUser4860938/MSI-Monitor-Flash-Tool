#!/usr/bin/env python3
"""Is RM's I2C-mode p.addr the NVAPI/DRM convention (slave7<<16|rw<<13)?
Oracle = read real EDID bytes from slave 0x50 via rm.aux() raw composition,
kernel-faithful 5-phase transaction. Then same encoding for dead-slave 0x20.
All reads; nothing is written to the monitor except EDID pointer (0x50) which
is standard and already done thousands of times safely."""
import sys, pathlib
sys.path.insert(0, str(pathlib.Path(__file__).resolve().parents[3]))
from msi_isp.nvbus import NvRMAuxBus

bus = NvRMAuxBus(verbose=False)
rm, DID, SUB = bus.rm, bus.display_id, bus.sub_inst

def enc16(slave7, rw):   # DRM/NVAPI convention
    return (slave7 << 16) | (rw << 13)
def enc13(slave7, rw):   # 8-bit-in-high alternative
    return ((slave7 << 1) << 13) | (rw << 12)

def edid_read(enc):
    # phase 1: write pointer 0x00 (bare addr, then data) with STOP on data
    name, got, st = rm.aux(DID, enc(0x50, 0), data=bytes([0x00]),
                           req=0, typ=0, mot=False, retries=2)  # req WRITE I2C
    if name != "ACK":
        return f"addr-write {name}/{st:#x}" if isinstance(st,int) else f"addr-write {name}"
    name, _, st = rm.aux(DID, enc(0x50, 1), req=1, typ=0, mot=False, addr_only=True, retries=2)
    if name != "ACK":
        return f"bare-read {name}"
    name, got, st = rm.aux(DID, enc(0x50, 1), data=bytes(2), req=1, typ=0,
                           mot=True, retries=2)
    got2, _ = rm.aux(DID, enc(0x50, 1), req=1, typ=0, mot=False, addr_only=True, retries=2)
    return got.hex(" ")

ker = pathlib.Path("/sys/class/drm/card1-DP-3/edid").read_bytes()
for tag, enc in (("slave7<<16|rw<<13", enc16), ("slave8<<13|rw<<12", enc13)):
    try:
        r = edid_read(enc)
        head = ker[:8].hex(" ")
        print(f"{tag:22} -> {r!r}   (kernel EDID head: {head})")
    except Exception as e:
        print(f"{tag:22} -> EXC {type(e).__name__}: {e}")
bus.close()
