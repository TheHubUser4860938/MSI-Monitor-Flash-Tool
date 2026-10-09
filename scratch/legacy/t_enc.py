#!/usr/bin/env python3
"""Correct DP 2.4.4 encoding test on AUXCH ctrl 0x731341 (the root-privileged,
user-usable one). addr = 20-bit (slave8<<12)|reg12; dir/size in cmd+size.
Sequence: offset-write 0x00 to slave 0xA0, MOT-read 8 from 0xA1.
Oracle: kernel EDID card1-DP-1."""
import ctypes, os, sys, fcntl, glob
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
def iod(esc, s): fcntl.ioctl(fd, nvrm._IOWR(esc, ctypes.sizeof(s)), s)
v = nvrm.NVVersion(); v.cmd = 1; v.versionString = b"615.71.09"
iod(nvrm.NVESC["CHECK_VERSION"], v)
def alloc(hParent, hClass, params=None):
    a = OS21(); a.hRoot = hc[0] or 0; a.hObjectParent = hParent; a.hClass = hClass
    if params is not None:
        a.pAllocParms = ctypes.cast(ctypes.byref(params), ctypes.c_void_p)
        a.paramsSize = ctypes.sizeof(params)
    iod(nvrm.NVESC["RM_ALLOC"], a)
    if a.status: raise SystemExit(f"alloc {hClass:#x}: {a.status:#x}")
    return a.hObjectNew
def run_ctrl(hObj, cmd, params):
    c = nvrm.NVOS54(); c.hClient = hc[0]; c.hObject = hObj; c.cmd = cmd
    c.params = ctypes.cast(ctypes.byref(params), ctypes.c_void_p)
    c.paramsSize = ctypes.sizeof(params)
    try:
        iod(nvrm.NVESC["RM_CONTROL"], c); return c.status
    except OSError as e:
        return 0x10000 + (e.errno or 0)

a = OS21(); a.hClass = 0
iod(nvrm.NVESC["RM_ALLOC"], a); hc = [a.hObjectNew]
p = IDINFO2(); p.gpuId = 0x100
run_ctrl(hc[0], 0x205, p)
p0 = nvrm.NV0080Params(); p0.deviceId = p.deviceInstance
hDevice = alloc(hc[0], 0x80, p0)
hDisp = alloc(hDevice, 0x73)
DID, SUB = 0x200, p.subDeviceInstance

def aux(cmd, addr, data=b"", n=None, addr_only=0):
    ap = AUXP(); ap.subDeviceInstance = SUB; ap.displayId = DID
    ap.bAddrOnly = addr_only; ap.cmd = cmd; ap.addr = addr
    for i, b in enumerate(data[:16]): ap.data[i] = b
    ap.size = n if n is not None else (max(len(data), 1) - 1)
    st = run_ctrl(hDisp, 0x731341, ap)
    got = ap.size + 1 if cmd & 1 else len(data)   # size field = count-1
    return st, ap, bytes(ap.data[:got]) if cmd & 1 else data

I2C, WR, RD, MOT = 0x0, 0x0, 0x1, 0x4
# try every plausible offset-write encoding, report reply types
tests = [
    ("wr d0 addr(0xA0<<12) size0",  I2C|WR, (0xA0 << 12) | 0x000, b"\x00"),
    ("wr d0 addr(0xA0<<12) mot",    I2C|MOT|WR, (0xA0 << 12) | 0x000, b"\x00"),
    ("addr-only (0xA0<<12)",        I2C|WR, (0xA0 << 12) | 0x000, b"\x00"),
]
for lbl, cmd, addr, d in tests:
    st, ap, _ = aux(cmd, addr, data=d,
               addr_only=("addr-only" in lbl))
    print(f"{lbl:34s} st={st:#06x} reply={ap.replyType:#x} retry={ap.retryTimeMs}")

# best-guess full read: offset-write then MOT-read 8 bytes from 0xA1
st, ap, _ = aux(I2C|MOT|WR, (0xA0 << 12) | 0x000, data=b"\x00")
print(f"offset-write reply={ap.replyType:#x}")
for regmode, lbl in [(0, "MOT rd reg=0"), (1, "MOT rd reg=off")]:
    addr = (0xA1 << 12) | (0x000 if not regmode else 0x000)
    st, ap, got = aux(I2C|MOT|RD, addr, n=7)
    print(f"{lbl} st={st:#06x} reply={ap.replyType:#x} n={ap.size+1} {got[:8].hex(' ')}")

for f in glob.glob("/sys/class/drm/card1-DP-1/edid"):
    print("kernel EDID head:", open(f,'rb').read(8).hex(' '))
