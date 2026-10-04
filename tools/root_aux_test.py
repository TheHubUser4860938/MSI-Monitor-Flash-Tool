#!/usr/bin/env python3
"""Read-only test: can a ROOT-privileged RM client use the DP AUX channel?

Run under sudo. Allocates the client -> device -> NV0073 display-common tree,
finds connected DP displays, then (a) reads DPCD 0x0000 with a native AUX
transaction and (b) probes I2C-over-AUX slave ACKs -- including the scaler
ISP slaves 0x20/0x21/0x22 that i2c-dev can never reach on NVIDIA.

Pure reads: no ISP-entry command, no erase, no write. Brick risk: zero.
"""
import sys, ctypes
sys.path.insert(0, "/home/eugene/monitor-fw")
from msi_isp import nvrm
from msi_isp.nvrm import (NvRM, AUX_TYPE_AUX, AUX_TYPE_I2C, AUX_REQ_READ,
                          AUX_REQ_WRITE, CTRL_DFP_GET_INFO)

print(f"euid={__import__('os').geteuid()}  (must be 0)")
rm = NvRM()
print("RM client:", hex(rm.alloc_client()))
print("Device   :", hex(rm.alloc_device(0)))
print("NV0073   :", hex(rm.alloc_disp_common()))

# --- enumerate displays: DFP query wants NV0073_CTRL_DFP_INFO parameters
# { subDeviceInstance, displayId } and replies with connection/status.
found = []
q = ctypes.create_string_buffer(64)
u32 = lambda off: ctypes.cast(ctypes.addressof(q) + off, ctypes.POINTER(ctypes.c_uint32))
for did in [0x01 << i for i in range(9)]:          # displayId bitmasks
    u32(0)[0] = 0                                   # subdevice
    u32(4)[0] = did
    st = rm.control(rm.hDisp, CTRL_DFP_GET_INFO, q.contents, size=64)
    if st == 0:
        b3, b4, b5 = u32(12)[0], u32(16)[0], u32(20)[0]
        print(f"  DFP displayId {did:#06x}: status {st:#x} "
              f"w{12}= {b3:#010x} w{16}= {b4:#010x} w20= {b5:#010x}")
        found.append((did, b3, b4, b5))

if not found:
    print("no DFP displays visible (odd); trying head-index ids")
    found = [(0xE0 + i, 0, 0, 0) for i in range(4)]

# --- (a) native AUX: read DPCD 0x0000 (should be 0x0..0x24 revision) ------
for did, *_ in found:
    # native-aux 4-byte request: addr(20)<<2 | command(1)bit | size(4)-1
    addr = (0x000000 << 2) | 0 << 3 | 0            # read 1 byte from DPCD 0
    r, got, st = rm.aux(did, addr, req=AUX_REQ_READ, typ=AUX_TYPE_AUX)
    print(f"AUX native read DPCD[0] disp {did:#06x}: reply={r} data={got.hex() if got else '-'} rm_status={st if isinstance(st,int) else st:#x}")

# --- (b) I2C-over-AUX probe of every slave that matters -------------------
def probe_i2c(did, slave8):
    addr = (slave8 << 16) | 0 | 0                 # 0 data bytes: pure ACK
    return rm.aux(did, addr, req=AUX_REQ_WRITE, typ=AUX_TYPE_I2C)

SLAVES = [("MCCS 0x37", 0x6E), ("EDID 0x50", 0xA0), ("ISP flash 0x20", 0x40),
          ("ISP flashR 0x21", 0x42), ("MCU regs 0x22", 0x44),
          ("ISP ctrl 0x18", 0x30), ("reg31 0x19", 0x32), ("reg32 0x1A", 0x34),
          ("reg33 0x1B", 0x36)]
for did, *_ in found[:1]:
    print(f"I2C-over-AUX probe on disp {did:#06x}:")
    for name, s8 in SLAVES:
        try:
            r, got, st = probe_i2c(did, s8)
        except Exception as e:
            r, got, st = f"exc {e}", b"", "?"
        mark = "  <<< ISP VISIBLE" if ("ACK" in str(r) and s8 not in (0x6E, 0xA0)) else ""
        print(f"  {name:<18} reply={r}{mark}")
rm.close()
