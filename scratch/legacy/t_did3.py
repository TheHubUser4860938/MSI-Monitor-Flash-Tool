import sys, ctypes
sys.path.insert(0, str(__import__("pathlib").Path(__file__).resolve().parents[2]))
from msi_isp import nvrm
rm = nvrm.NvRM()
rm.alloc_client(use_root=False); rm.alloc_device(deviceId=0); rm.alloc_disp_common()
def ctl(cmd, words, size):
    b = ctypes.create_string_buffer(size)
    u = ctypes.cast(b, ctypes.POINTER(ctypes.c_uint32))
    for i, w in enumerate(words): u[i] = w
    st = rm.control(rm.hDisp, cmd, b, size=size)
    return st, [u[i] for i in range(size//4)]
st, w = ctl(0x730102, [0, 1], 12)
print(f"NUM_HEADS st={st} numHeads={w[2]}")
st, w = ctl(0x730107, [0], 12)
print(f"SUPPORTED st={st} mask={w[1]:#x} ddc={w[2]:#x}")
mask = w[1] if st == 0 and len(w) > 1 else 0
for bit in range(40):
    if mask >> bit & 1:
        st2, w2 = ctl(0x731140, [0, 1 << bit], 16)
        print(f"  did {1<<bit:#x}: DFP st={st2} flags={w2[2] if len(w2)>2 else '?'}:#x" if False else
              f"  did {1<<bit:#x}: DFP st={st2} flags={w2[2]:#x}")
rm.close()
