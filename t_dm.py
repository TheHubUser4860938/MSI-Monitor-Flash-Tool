#!/usr/bin/env python3
"""Root: authoritative displayMask via NV0073 system controls, then DFP info
and a raw AUXCH DPCD read. Read-only."""
import sys, ctypes
sys.path.insert(0, str(__import__("pathlib").Path(__file__).resolve().parent))
from msi_isp import nvrm

def u32s(buf, n):
    return list(ctypes.cast(buf, ctypes.POINTER(ctypes.c_uint32))[:n])

rm = nvrm.NvRM()
stride, cards = rm.card_info_raw()
gpu_id = cards[0][2][4] | (cards[0][2][5] << 8)
rm.alloc_client(use_root=False)
rm.alloc_device(deviceId=gpu_id)
rm.alloc_disp_common()
print(f"tree ok gpu_id={gpu_id}")

def sys_ctrl(cmd, words):
    q = ctypes.create_string_buffer(4 * len(words))
    u = ctypes.cast(q, ctypes.POINTER(ctypes.c_uint32))
    for i, w in enumerate(words):
        u[i] = w
    st = rm.control(rm.hDisp, cmd, q, size=4 * len(words))
    return st, u32s(q, len(words))

st, w = sys_ctrl(0x730107, [0, 0, 0])          # GET_SUPPORTED
print(f"GET_SUPPORTED  st={st:#x} displayMask={w[1]:#x} ddcMask={w[2]:#x}")
st, w = sys_ctrl(0x730108, [0, 0, 0, 0])       # GET_CONNECT_STATE
print(f"GET_CONNECT    st={st:#x} connectedMask={w[2]:#x} retryMs={w[3]}")
st, w = sys_ctrl(0x730202, [0, 0])             # GET_NUM_HEADS
print(f"GET_NUM_HEADS  st={st:#x} heads={w[1]}")

mask = w[2] if False else None
st2, w2 = sys_ctrl(0x730107, [0, 0, 0])
mask = w2[1]
print(f"supported bits: {[hex(1<<i) for i in range(32) if mask >> i & 1]}")

# DFP info per bit
for i in range(32):
    if not mask >> i & 1:
        continue
    did = 1 << i
    q = ctypes.create_string_buffer(16)
    u = ctypes.cast(q, ctypes.POINTER(ctypes.c_uint32))
    u[0] = 0; u[1] = did
    st = rm.control(rm.hDisp, nvrm.CTRL_DFP_GET_INFO, q, size=16)
    flags = u[2]
    sig = flags & 7
    print(f"DFP did={did:#x} st={st:#x} flags={flags:#x} sig={sig} "
          f"{'DP' if sig == 3 else ''}")
    if st == 0 and sig == 3:
        # try DPCD read via AUXCH native on this displayId
        try:
            reply, data, st3 = rm.aux(did, addr=(0x000000 << 2) | 0,
                                      req=nvrm.AUX_REQ_READ,
                                      typ=nvrm.AUX_TYPE_NATIVE)
            print(f"  AUXCH DPCD[0]: reply={reply} data={data.hex() if data else '-'} st={st3:#x}")
        except Exception as e:
            print(f"  AUXCH failed: {e}")
        # I2C tunnel EDID 0x50
        try:
            ed = rm.i2c_read(did, 0xA0, 0x00, 16)
            print(f"  I2C-aux EDID[0:16]: {ed.hex()}")
        except Exception as e:
            print(f"  I2C-aux EDID failed: {e}")
rm.close()
