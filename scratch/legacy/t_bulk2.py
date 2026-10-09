#!/usr/bin/env python3
"""Diagnose bulk I2C control (0x73137c) + I2C-mode variants on the WORKING
client tree from t_aux_root2 (fdg open, did=0x200, subInst from ID_INFO_V2).
Tries: bulk ctrl read EDID; native-AUX reads of DPCD tunnel caps 0x00D1-5;
AUXCH ctrl I2C offset-write MOT variants. Read-only."""
import ctypes, os, sys, glob
sys.path.insert(0, str(__import__("pathlib").Path(__file__).resolve().parents[2]))
from msi_isp import nvrm

class OS21(ctypes.Structure):
    _fields_ = [("hRoot", ctypes.c_uint32), ("hObjectParent", ctypes.c_uint32),
                ("hObjectNew", ctypes.c_uint32), ("hClass", ctypes.c_uint32),
                ("pAllocParms", ctypes.c_void_p), ("paramsSize", ctypes.c_uint32),
                ("status", ctypes.c_uint32)]
class IDINFO2(ctypes.Structure):
    _fields_ = [("gpuId", ctypes.c_uint32), ("gpuFlags", ctypes.c_uint32),
                ("deviceInstance", ctypes.c_uint32), ("subDeviceInstance", ctypes.c_uint32),
                ("nvmlIndex", ctypes.c_uint32), ("busy", ctypes.c_uint32),
                ("gpuInstance", ctypes.c_uint32), ("numaId", ctypes.c_int32)]
class AUXP(ctypes.Structure):
    _fields_ = [("subDeviceInstance", ctypes.c_uint32), ("displayId", ctypes.c_uint32),
                ("bAddrOnly", ctypes.c_uint32), ("cmd", ctypes.c_uint32),
                ("addr", ctypes.c_uint32), ("data", ctypes.c_uint8 * 16),
                ("size", ctypes.c_uint32), ("replyType", ctypes.c_uint32),
                ("retryTimeMs", ctypes.c_uint32)]

fd  = os.open("/dev/nvidiactl", os.O_RDWR)
fdg = os.open("/dev/nvidia0", os.O_RDWR)
def iod(esc, s, size=None):
    fcntl.ioctl(fd, nvrm._IOWR(esc, size or ctypes.sizeof(s)), s)
import fcntl
v = nvrm.NVVersion(); v.cmd = 1; v.versionString = b"615.71.09"
iod(nvrm.NVESC["CHECK_VERSION"], v)
hc = None
def alloc(hParent, hClass, params=None):
    a = OS21(); a.hRoot = hc or 0; a.hObjectParent = hParent; a.hClass = hClass
    if params is not None:
        a.pAllocParms = ctypes.cast(ctypes.byref(params), ctypes.c_void_p)
        a.paramsSize = ctypes.sizeof(params)
    iod(nvrm.NVESC["RM_ALLOC"], a)
    if a.status: raise SystemExit(f"alloc {hClass:#x}: {a.status:#x}")
    return a.hObjectNew
def run_ctrl(hObj, cmd, params, psize):
    c = nvrm.NVOS54(); c.hClient = hc; c.hObject = hObj; c.cmd = cmd
    if params is not None:
        c.params = ctypes.cast(ctypes.byref(params), ctypes.c_void_p)
    c.paramsSize = psize
    try:
        iod(nvrm.NVESC["RM_CONTROL"], c); return c.status
    except OSError as e:
        return 0x10000 + (e.errno or 0)

a = OS21(); a.hClass = 0
iod(nvrm.NVESC["RM_ALLOC"], a); hc = a.hObjectNew
p = IDINFO2(); p.gpuId = 0x100   # bus01 -> internal gpu id 0x100
st = run_ctrl(hc, 0x205, p, ctypes.sizeof(p))
subInst = p.subDeviceInstance
print(f"GET_ID_INFO_V2 st={st:#x} devInst={p.deviceInstance} subInst={subInst}")
p0 = nvrm.NV0080Params(); p0.deviceId = p.deviceInstance
hDevice = alloc(hc, 0x80, p0)
hDisp = alloc(hDevice, 0x73)
DID = 0x200

def aux(did, cmd, addr, data=b"", n=0, addr_only=0):
    ap = AUXP(); ap.subDeviceInstance = subInst
    ap.displayId = did; ap.bAddrOnly = addr_only; ap.cmd = cmd
    ap.addr = addr
    for i, b in enumerate(data[:16]): ap.data[i] = b
    ap.size = n
    return run_ctrl(hDisp, 0x731341, ap, ctypes.sizeof(ap)), ap

# 1) DPCD tunnel caps via native AUX reads (addr<<2|1<<3|n-1)
for ra in (0x00D1, 0x00D2, 0x00D5):
    st, ap = aux(DID, 0x8|0x1, (ra << 2) | (1 << 3) | 0, n=0)
    print(f"DPCD {ra:#06x}: st={st:#x} data0={ap.data[0]:#04x} reply={ap.replyType:#x}")

# 2) bulk I2C control variants
class BULK(ctypes.Structure):
    _fields_ = [("subDeviceInstance", ctypes.c_uint32), ("displayId", ctypes.c_uint32),
                ("addr", ctypes.c_uint32), ("bWrite", ctypes.c_uint32),
                ("data", ctypes.c_uint8 * 256), ("size", ctypes.c_uint32)]
def bulk(addr, bWrite, data=b"", size=None):
    b = BULK(); b.subDeviceInstance = subInst; b.displayId = DID
    b.addr = addr; b.bWrite = bWrite
    for i, by in enumerate(data[:256]): b.data[i] = by
    b.size = size if size is not None else len(data)
    st = run_ctrl(hDisp, 0x73137C, b, ctypes.sizeof(b))
    return st, b
# DP i2c addr word: slave8<<12 | reg<<4 | rw<<3 | (n-1)
st, b = bulk((0xA0 << 12) | (1 << 3) | 15, 0, size=16)   # 7-bit 0x50 read, 16B
print(f"BULK rd16 st={st:#x} size_ret={b.size} data={bytes(b.data[:8]).hex()}")
st, b = bulk((0xA0 << 16) | (0 << 4) | 0, 1, data=b"\x00")  # offset write forms
print(f"BULK w-off(addr12) st={st:#x}")
st, b = bulk((0xA0 << 16) | (0 << 8) | 0, 1, data=b"\x00")
print(f"BULK w-off(word) st={st:#x}")
# 3) AUXCH ctrl, I2C offset-write with data byte 0, various cmd encodings
for cmd, lbl in [(0x0|0x0, "I2C|WR"), (0x0|0x4|0x0, "I2C|MOT|WR"), (0x4|0x1, "MOT|RD")]:
    st, ap = aux(DID, cmd, (0xA0 << 16) | (0 << 8) | 0, data=bytes([0]) if "WR" in lbl else b"", n=0)
    print(f"AUXCH {lbl}: st={st:#x} reply={ap.replyType:#x} got={bytes(ap.data[:4]).hex()}")
