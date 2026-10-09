#!/usr/bin/env python3
"""Exact header layouts of NVOS21 (32B) / NVOS64 (40B); allocation probe
printing every field, both variants."""
import ctypes, os, fcntl, sys
sys.path.insert(0, str(__import__("pathlib").Path(__file__).resolve().parent))
from msi_isp import nvrm

class OS21(ctypes.Structure):
    _fields_ = [("hRoot", ctypes.c_uint32), ("hObjectParent", ctypes.c_uint32),
                ("hObjectNew", ctypes.c_uint32), ("hClass", ctypes.c_uint32),
                ("pAllocParms", ctypes.c_void_p), ("paramsSize", ctypes.c_uint32),
                ("status", ctypes.c_uint32)]
assert ctypes.sizeof(OS21) == 32, ctypes.sizeof(OS21)

class OS64(ctypes.Structure):
    _pack_ = 4
    _fields_ = [("hRoot", ctypes.c_uint32), ("hObjectParent", ctypes.c_uint32),
                ("hObjectNew", ctypes.c_uint32), ("hClass", ctypes.c_uint32),
                ("pAllocParms", ctypes.c_void_p),
                ("pRightsRequested", ctypes.c_void_p),
                ("paramsSize", ctypes.c_uint32), ("flags", ctypes.c_uint32),
                ("status", ctypes.c_uint32)]
assert ctypes.sizeof(OS64) == 40, ctypes.sizeof(OS64)

fd = os.open("/dev/nvidiactl", os.O_RDWR)
def iod(esc, s, size=None):
    n = size or ctypes.sizeof(s)
    fcntl.ioctl(fd, nvrm._IOWR(esc, n), s)

v = nvrm.NVVersion(); v.cmd = 1; v.versionString = b"615.71.09"
iod(nvrm.NVESC["CHECK_VERSION"], v)
print("version ok")

def show(tag, a):
    print(f"  {tag}: hRoot={a.hRoot:#x} parent={a.hObjectParent:#x} "
          f"new={a.hObjectNew:#x} class={a.hClass:#x} status={a.status:#x}")

for name, CLS in (("OS21", OS21), ("OS64", OS64)):
    a = CLS(); a.hClass = 0   # NV01_ROOT -> forced ROOT_CLIENT
    try:
        iod(nvrm.NVESC["RM_ALLOC"], a)
        show(f"client/{name}", a)
        hc = a.hObjectNew
    except OSError as e:
        print(f"client/{name}: OSError {e}"); continue
    if not hc:
        continue
    p0 = nvrm.NV0080Params(); p0.deviceId = 0
    a2 = CLS(); a2.hRoot = hc; a2.hObjectParent = hc; a2.hClass = 0x80
    a2.pAllocParms = ctypes.cast(ctypes.byref(p0), ctypes.c_void_p)
    a2.paramsSize = ctypes.sizeof(p0)
    try:
        iod(nvrm.NVESC["RM_ALLOC"], a2)
        show(f"device/{name}", a2)
        hd = a2.hObjectNew
    except OSError as e:
        print(f"device/{name}: OSError {e}"); continue
    if not hd:
        continue
    a3 = CLS(); a3.hRoot = hc; a3.hObjectParent = hd; a3.hClass = 0x73
    try:
        iod(nvrm.NVESC["RM_ALLOC"], a3)
        show(f"disp/{name}", a3)
        hdisp = a3.hObjectNew
    except OSError as e:
        print(f"disp/{name}: OSError {e}"); continue
    if not hdisp:
        continue
    # NUM_HEADS as the first live control
    q = ctypes.create_string_buffer(8)
    u = ctypes.cast(q, ctypes.POINTER(ctypes.c_uint32)); u[0] = 0
    c = nvrm.NVOS54(); c.hClient = hc; c.hObject = hdisp; c.cmd = 0x730102
    c.params = ctypes.cast(ctypes.byref(q), ctypes.c_void_p); c.paramsSize = 8
    try:
        iod(nvrm.NVESC["RM_CONTROL"], c)
        print(f"  NUM_HEADS/{name}: status={c.status:#x} heads={u[1]}")
    except OSError as e:
        print(f"  NUM_HEADS/{name}: OSError {e}")
