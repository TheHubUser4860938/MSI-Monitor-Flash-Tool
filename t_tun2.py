#!/usr/bin/env python3
"""Corrected encoding: RM's 21-bit ADDR param is the 20-bit DP request field;
byte layout means effective register = word >> 2 for native AUX (proven: word
0 read DPCD[0]=0x12 earlier). Baseline restore, then I2C word sweep on 0x731341.
Read-only."""
import ctypes, os, sys, fcntl, glob
sys.path.insert(0, "/home/eugene/monitor-fw")
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
def iod(e, s): fcntl.ioctl(fd, nvrm._IOWR(e, ctypes.sizeof(s)), s)
v = nvrm.NVVersion(); v.cmd = 1; v.versionString = b"615.71.09"
iod(nvrm.NVESC["CHECK_VERSION"], v)
a = OS21(); a.hClass = 0
iod(nvrm.NVESC["RM_ALLOC"], a); hc = a.hObjectNew
p = IDINFO2(); p.gpuId = 0x100
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
def alloc(hp, hClass, params=None):
    aa = OS21(); aa.hRoot = hc; aa.hObjectParent = hp; aa.hClass = hClass
    if params is not None:
        aa.pAllocParms = ctypes.cast(ctypes.byref(params), ctypes.c_void_p)
        aa.paramsSize = ctypes.sizeof(params)
    iod(nvrm.NVESC["RM_ALLOC"], aa)
    if aa.status: raise SystemExit(f"alloc {hClass:#x}: {aa.status:#x}")
    return aa.hObjectNew
hDev = alloc(hc, 0x80, p0); hDisp = alloc(hDev, 0x73)
DID, SUB = 0x200, p.subDeviceInstance
def txn(cmd, addr, data=b"", n=0, ao=0):
    ap = AUXP(); ap.subDeviceInstance = SUB; ap.displayId = DID
    ap.bAddrOnly = ao; ap.cmd = cmd; ap.addr = addr
    for i, b in enumerate(data[:16]): ap.data[i] = b
    ap.size = n
    return run_ctrl(hDisp, 0x731341, ap), ap
REP = {0:"ACK",1:"NACK",2:"DEFER",3:"TIMEOUT",4:"I2CNACK",8:"I2CDEFER"}
rep = lambda ap: REP.get(ap.replyType, f"{ap.replyType:#x}")
AUX_RD, AUX_WR = 0x9, 0x8      # bit3=aux, bit0=read
I2C_RD, I2C_WR, I2C_MOT_RD = 0x1, 0x0, 0x5

print("baseline native (word = reg<<2):")
for ra in (0x00, 0x00D0, 0x00D1, 0x00D2, 0x00D3, 0x00D5):
    st, ap = txn(AUX_RD, ra << 2, n=0)
    print(f"  DPCD {ra:#06x} = {ap.data[0]:#04x} ({rep(ap)})")

print("I2C word sweep (EDID slave 0x50/0xA0, addr-only write probe):")
cands = {
    "byte0=slave8 (spec 0xA0<<16|reg<<8)": lambda reg: (0xA0 << 16) | (reg << 8),
    "field20=slave<<12|reg4":              lambda reg: (0xA0 << 12) | (reg << 4),
    "<<2 of same":                          lambda reg: ((0xA0 << 12) | (reg << 4)) << 2,
    "reg<<2 only (root aux to reg)":        lambda reg: reg << 2,
}
for lbl, f in cands.items():
    st, ap = txn(I2C_WR, f(0x00), n=0, ao=1)
    st2, ap2 = txn(I2C_WR, f(0x00), data=b"\x00", n=0)
    print(f"  {lbl:38s} a/o:{st:#x}/{rep(ap):7s} wr1B:{st2:#x}/{rep(ap2)}")
    if ap.replyType in (0, 2, 4) or ap2.replyType in (0, 2, 4):
        print("     ^ non-timeout reply")
