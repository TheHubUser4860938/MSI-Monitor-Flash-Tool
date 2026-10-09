import sys, ctypes
sys.path.insert(0, str(__import__("pathlib").Path(__file__).resolve().parents[2]))
from msi_isp import nvrm
rm = nvrm.NvRM()
rm.alloc_client(use_root=False); rm.alloc_device(deviceId=0); rm.alloc_disp_common()

def ctl(cmd, words, size=None):
    b = ctypes.create_string_buffer(max(size or 16, 4*len(words)))
    u = ctypes.cast(b, ctypes.POINTER(ctypes.c_uint32))
    for i, w in enumerate(words):
        u[i] = w
    st = rm.control(rm.hDisp, cmd, b, size=size or 4*len(words))
    return st, [u[i] for i in range(16)]

# NUM_HEADS: NV0073_CTRL_CMD_SYSTEM_GET_NUM_HEADS = 0x730102
st, w = ctl(0x730102, [0], size=16)
print(f"NUM_HEADS status={hex(st) if st is not None else None} words={[hex(x) for x in w[:4]]}")
# GET_SUPPORTED 0x730107: in subdevice, out displayMask, displayMaskDDC
st, w = ctl(0x730107, [0], size=12)
print(f"GET_SUPPORTED status={hex(st) if st is not None else None} mask={w[1]:#010x} ddc={w[2]:#010x}")
# connected state: 0x730108?
for cmd, n in ((0x730108, 24), (0x731140, 16)):
    pass
import itertools
mask = w[1] if st == 0 else 0
for bit in range(32):
    if mask >> bit & 1:
        did = 1 << bit
        st2, w2 = ctl(0x731140, [0, did], size=16)
        print(f"  DFP displayId {did:#x}: status={hex(st2) if st2 is not None else None} flags={w2[2]:#x}")
rm.close()
