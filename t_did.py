import sys, ctypes
sys.path.insert(0, "/home/eugene/monitor-fw")
from msi_isp import nvrm
rm = nvrm.NvRM()
rm.alloc_client(use_root=False); rm.alloc_device(deviceId=0); rm.alloc_disp_common()
def q(did):
    b = ctypes.create_string_buffer(16)
    u = ctypes.cast(b, ctypes.POINTER(ctypes.c_uint32))
    u[0] = 0; u[1] = did
    st = rm.control(rm.hDisp, nvrm.CTRL_DFP_GET_INFO, b, size=16)
    return st, u[2]
# probe sequentially + bit forms, print statuses
seen = {}
for did in ([0xE0+i for i in range(8)] + list(range(1, 41)) + [1<<i for i in range(16)]):
    st, flags = q(did)
    seen.setdefault(st, []).append((did, flags))
for st, v in sorted(seen.items(), key=lambda x: (x[0] is None, x[0])):
    print(f"status {st if st is None else hex(st)}: {len(v)} ids, first: {v[:4]}")
# also: NUM_HEADS sanity
rm.close()
