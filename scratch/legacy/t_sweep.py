#!/usr/bin/env python3
"""Sweep I2C-over-AUX encodings on 0x731341 (the control proven to work from
userland as root: native DPCD reads ACK). ReplyType is the oracle:
0=ACK 4=I2CNACK 2=DEFER 3=TIMEOUT. Read-only throughout (EDID slave 0x50)."""
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
a = OS21(); a.hClass = 0
iod(nvrm.NVESC["RM_ALLOC"], a); hc = a.hObjectNew
p = IDINFO2(); p.gpuId = 0x100
run = None
def run_ctrl(hObj, cmd, params):
    c = nvrm.NVOS54(); c.hClient = hc; c.hObject = hObj; c.cmd = cmd
    c.params = ctypes.cast(ctypes.byref(params), ctypes.c_void_p)
    c.paramsSize = ctypes.sizeof(params)
    try:
        iod(nvrm.NVESC["RM_CONTROL"], c); return c.status
    except OSError as e:
        return 0x10000 + (e.errno or 0)
run_ctrl(hc, 0x205, p)
p0 = nvrm.NV0080Params(); p0.deviceId = p.deviceInstance
def alloc(hParent, hClass, params=None):
    aa = OS21(); aa.hRoot = hc; aa.hObjectParent = hParent; aa.hClass = hClass
    if params is not None:
        aa.pAllocParms = ctypes.cast(ctypes.byref(params), ctypes.c_void_p)
        aa.paramsSize = ctypes.sizeof(params)
    iod(nvrm.NVESC["RM_ALLOC"], aa)
    if aa.status: raise SystemExit(f"alloc {hClass:#x}: {aa.status:#x}")
    return aa.hObjectNew
hDevice = alloc(hc, 0x80, p0)
hDisp = alloc(hDevice, 0x73)
DID, SUB = 0x200, p.subDeviceInstance

def txn(cmd, addr, data=b"", n=0, addr_only=0):
    ap = AUXP(); ap.subDeviceInstance = SUB; ap.displayId = DID
    ap.bAddrOnly = addr_only; ap.cmd = cmd; ap.addr = addr
    for i, b in enumerate(data[:16]): ap.data[i] = b
    ap.size = n
    st = run_ctrl(hDisp, 0x731341, ap)
    return st, ap

REP = {0:"ACK",1:"NACK",2:"DEFER",3:"TIMEOUT",4:"I2CNACK",8:"I2CDEFER"}
def rep(ap): return REP.get(ap.replyType, f"{ap.replyType:#x}")

print("sanity native:", end=" ")
st, ap = txn(0x8|0x1|0x0, (0<<2)|(1<<3)|0, n=0)   # aux read 1B DPCD0
print(f"DPCD0={ap.data[0]:#04x} {rep(ap)}")

I2C, WR, RD, WRS, MOT = 0x0, 0x0, 0x1, 0x2, 0x4
cands = [
    ("slave8<<12 off12",      (0xA0 << 12) | 0x000),
    ("slave7<<12 off12",      (0x50 << 12) | 0x000),
    ("slave8<<11 off11",      (0xA0 << 11) | 0x000),
    ("slave7<<11 off11",      (0x50 << 11) | 0x000),
    ("slave8<<16 off8",       (0xA0 << 16) | 0x000),
]
for lbl, addr in cands:
    st, ap = txn(I2C | WR, addr, data=b"\x00", n=0)          # 1 data byte write
    st2, ap2 = txn(I2C | WR, addr, n=0, addr_only=1)          # addr-only write
    print(f"wr 1B  {lbl:18s} st={st:#04x} {rep(ap):8s} | addr-only st={st2:#04x} {rep(ap2)}")
