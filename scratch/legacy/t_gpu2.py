import sys, ctypes, struct
sys.path.insert(0, str(__import__("pathlib").Path(__file__).resolve().parents[2]))
from msi_isp import nvrm
rm = nvrm.NvRM()
stride, cards = rm.card_info_raw()
_s,_i,e = cards[0]
gpu_id = struct.unpack("<I", e[16:20])[0]
minor = struct.unpack("<I", e[56:60])[0]
print("gpu_id:", hex(gpu_id), "minor:", minor)
rm.attach_gpus([gpu_id])
rm.alloc_client(use_root=False)
hDev = rm.alloc_device(deviceId=gpu_id)
print("device alloc ok:", hex(hDev))
def ctl(h, cmd, words, size):
    b = ctypes.create_string_buffer(size)
    u = ctypes.cast(b, ctypes.POINTER(ctypes.c_uint32))
    for i, w in enumerate(words): u[i] = w
    st = rm.control(h, cmd, b, size=size)
    return st, [u[i] for i in range(size//4)]
# device-level control with EXACT struct size
st, w = ctl(hDev, 0x800280, [0], 8)     # NUM_SUBDEVICES
print(f"device NUM_SUBDEVICES st={hex(st) if st is not None else None} n={w[1] if len(w)>1 else '?'}")
rm.alloc_disp_common()
st, w = ctl(rm.hDisp, 0x730102, [0, 0], 12)
print(f"NUM_HEADS st={hex(st) if st is not None else None} n={w[2] if len(w)>2 else '?'}")
st, w = ctl(rm.hDisp, 0x73010a, [0, 0xF, 0, 1000], 16)   # CONNECT_STATE
print(f"CONNECT_STATE st={hex(st) if st is not None else None} mask={w[2]:#x}")
