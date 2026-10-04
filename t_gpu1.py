import sys, ctypes, struct
sys.path.insert(0, "/home/eugene/monitor-fw")
from msi_isp import nvrm
rm = nvrm.NvRM()
stride, cards = rm.card_info_raw()
_s,_i,e = cards[0]
gpu_id = struct.unpack("<I", e[16:20])[0]
print("real gpu_id:", gpu_id)
rm.attach_gpus([gpu_id])
rm.alloc_client(use_root=False)
hDev = rm.alloc_device(deviceId=gpu_id)
rm.alloc_disp_common()
def ctl(h, cmd, words, size):
    b = ctypes.create_string_buffer(size)
    u = ctypes.cast(b, ctypes.POINTER(ctypes.c_uint32))
    for i, w in enumerate(words): u[i] = w
    st = rm.control(h, cmd, b, size=size)
    return st, [u[i] for i in range(size//4)]
st, w = ctl(rm.hDisp, 0x730102, [0, 1], 12)
print(f"NUM_HEADS st={st} numHeads={w[2]}")
st, w = ctl(rm.hDisp, 0x730107, [0], 12)
print(f"SUPPORTED st={st} mask={w[1]:#x} ddc={w[2]:#x}")
mask = (w[1] | w[2]) if st == 0 else 0
for bit in range(40):
    if mask >> bit & 1:
        did = 1 << bit
        st2, w2 = ctl(rm.hDisp, 0x731140, [0, did], 16)
        print(f"  did {did:#010x}: DFP st={st2} flags={w2[2]:#x}")
rm.close()
