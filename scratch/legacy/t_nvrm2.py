#!/usr/bin/env python3
"""Probe 2: attach-GPU size, then find the RM deviceId that the client may use."""
import sys, ctypes
sys.path.insert(0, str(__import__("pathlib").Path(__file__).resolve().parents[2]))
from msi_isp import nvrm

r = nvrm.NvRM()

# --- attach gpus variants (must run before alloc on this fd? no, but before NV0073 alloc)
for minors in ((0,), (1,), (0, 1)):
    arr = (ctypes.c_uint32 * len(minors))(*minors)
    try:
        r._ioctl(nvrm.NVESC["ATTACH_GPUS"], arr)
        print(f"attach {minors}: OK")
    except OSError as e:
        print(f"attach {minors}: {e}")

h = r.alloc_client()
print("client:", hex(r.hClient))

import dataclasses  # noqa
def try_dev(did):
    p0080 = nvrm.NV0080Params()
    p0080.deviceId = did
    p = nvrm.NVOS21()
    p.hRoot = r.hClient; p.hObjectParent = r.hClient; p.hObjectNew = 0
    p.hClass = nvrm.NV01_DEVICE_0
    p.pAllocParms = ctypes.cast(ctypes.byref(p0080), ctypes.c_void_p)
    p.paramsSize = ctypes.sizeof(p0080)
    r._ioctl(nvrm.NVESC["RM_ALLOC"], p)
    return p.status, p.hObjectNew

for did in (0, 1, 256, 2):
    st, hh = try_dev(did)
    print(f"alloc device deviceId={did}: status {st:#x} h={hh:#x}")
    if st == 0:
        r.hDevice = hh
        break

if r.hDevice:
    try:
        hd = r.alloc_disp_common()
        print("alloc NV0073: OK", hex(hd))
    except Exception as e:
        print("alloc NV0073 failed:", e)
