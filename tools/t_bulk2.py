#!/usr/bin/env python3
"""Retry bulk I2C-over-AUX 0x73137C on the proven root tree (fixed fields)."""
import sys, pathlib
sys.path.insert(0, str(pathlib.Path(__file__).resolve().parent.parent))
from msi_isp.nvbus import NvRMAuxBus
from msi_isp.nvrm import I2CXferParams, CTRL_DP_AUXCH_I2C_TRANSFER

bus = NvRMAuxBus(verbose=False)
rm, DID = bus.rm, bus.display_id

def bulk(slave7, wdata, rsize):
    p = I2CXferParams()
    p.subDeviceInstance = bus.sub_inst
    p.displayId = DID
    p.addr = (slave7 << 1) << 16          # slave8 at bits 23:16 (doc's 8-bit form)
    if wdata is not None:
        for i, bch in enumerate(bytes(wdata)[:256]):
            p.data[i] = bch
        p.bWrite = 1
        p.size = len(bytes(wdata))
    else:
        p.bWrite = 0
        p.size = rsize
    st = rm.control(rm.hDisp, CTRL_DP_AUXCH_I2C_TRANSFER, p)
    got = bytes(p.data[:p.size]) if st == 0 and not p.bWrite else b""
    return st, got

ker = pathlib.Path("/sys/class/drm/card1-DP-3/edid").read_bytes()
# oracle: two-phase EDID — pointer write, then read
st1, _ = bulk(0x50, b"\x00", 0)
st2, d = bulk(0x50, None, 16)
print(f"bulk 0x50: wr st={st1:#x} rd st={st2:#x} data={d[:8].hex(' ')}",
      "MATCH" if d[:8] == ker[:8] else "(no-match)")
bus.close()
