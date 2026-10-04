#!/usr/bin/env python3
"""Root: alloc NV01_DEVICE with deviceId = (pci_bus << 16), then system
controls + DFP enumeration + AUXCH DPCD read. Read-only."""
import sys, ctypes
sys.path.insert(0, "/home/eugene/monitor-fw")
from msi_isp import nvrm

def words(buf, n):
    return list(ctypes.cast(buf, ctypes.POINTER(ctypes.c_uint32))[:n])

rm = nvrm.NvRM()
stride, cards = rm.card_info_raw()
# nv_ioctl_card_info_t: [pad u32, gpu_id u32, device_id u32, minor u32,
#                       bus:4@u32, domain, regmapsize, regmap, ...]
c = cards[0][2]
gpu_id = c[4] | (c[5] << 8) if False else 0
# print raw to be sure of layout
print("raw card words:", [hex(x & 0xffffffff) for x in c])
pci_bus = c[6] & 0xff          # bus:4 field is first u32 after reginfo per header comment
device_id = c[2]
print(f"gpu words: {c[:8]}")

rm.alloc_client(use_root=False)

for dev_id in (device_id, 0, 0x10000):
    try:
        rd = rm.alloc_device(deviceId=dev_id)
        print(f"device {dev_id:#x} -> {rd:#x}")
        rm2 = rm
        break
    except Exception as e:
        print(f"device {dev_id:#x} failed: {e}")
        sys.exit(1)

rm2.alloc_disp_common()
print(f"hDevice={rm2.hDevice:#x} hDisp={rm2.hDisp:#x}")

def ctrl_raw(hObj, cmd, wd):
    q = ctypes.create_string_buffer(4 * len(wd))
    u = ctypes.cast(q, ctypes.POINTER(ctypes.c_uint32))
    for i, w in enumerate(wd):
        u[i] = w
    st = rm2.control(hObj, cmd, q, size=4 * len(wd))
    return st, words(q, len(wd))

st, w = ctrl_raw(rm2.hDisp, 0x730102, [0, 0])
print(f"NUM_HEADS st={st:#x} heads={w[1]}")
st, w = ctrl_raw(rm2.hDisp, 0x730107, [0, 0, 0])
print(f"GET_SUPPORTED st={st:#x} mask={w[1]:#x} ddcMask={w[2]:#x}")
st, w = ctrl_raw(rm2.hDisp, 0x730108, [0, 0, 0, 0])
print(f"CONNECT_STATE st={st:#x} mask={w[2]:#x} retry={w[3]}")

mask = w[2] or 0
for i in range(32):
    if not mask >> i & 1:
        continue
    did = 1 << (i + 1) if False else (1 << i)
    # NV0073 display ids documented as head+1 bit? try both encodings
    for cand in {did, 1 << (i + 1)}:
        q = ctypes.create_string_buffer(16)
        u = ctypes.cast(q, ctypes.POINTER(ctypes.c_uint32))
        u[0] = 0; u[1] = cand
        st = rm2.control(rm2.hDisp, nvrm.CTRL_DFP_GET_INFO, q, size=16)
        flags = u[2]
        print(f"DFP cand={cand:#x} st={st:#x} flags={flags:#x} "
              f"{'DP!' if st == 0 and flags & 7 == 3 else ''}")
rm.close()
