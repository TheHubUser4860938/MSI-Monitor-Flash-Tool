#!/usr/bin/env python3
"""Sweep 4 — corrected slave-field placement.

Sweep-1 evidence re-analysis: A1=(s8<<13)|(rw<<12)|(reg<<4) with s8=0xA0 got
bare-WRITE ACK. Decomposed: RM addr[19:0] -> wire address field, so 0xA0<<13
put [19:13]=0x50 (correct 7-bit) + bit20=1 (ignored per "only first 20 bits
valid"). But READ phase used s8=0xA1 -> [19:13]=0x21 WRONG SLAVE -> timeout.
All sweep timeouts with A3/A4 same: passed 8-bit values where 7-bit needed.

DP spec canonical form being tested now:
    addr = (slave7 << 13) | (RW << 12) | (reg << 4)
    write phase: (0x50<<13)|0<<12|reg<<4 ; read phase: (0x50<<13)|1<<12|reg<<4

Sequence (NVIDIA sstDDCPing + kernel hybrid, read-only):
  1. bare READ ping (rw=1) alone, size=0
  2. bare WRITE (rw=0) -> wr-off(MOT) -> bare-rd -> data RD|MOT
  3. RD|MOT reg-in-addr directly
Oracle: EDID 00 ff ff ff ff ff ff 00.
"""
import ctypes, os, sys, fcntl
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
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

def iod(e, s):
    fcntl.ioctl(fd, nvrm._IOWR(e, ctypes.sizeof(s)), s)

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
    if aa.status:
        raise SystemExit(f"alloc {hClass:#x}: {aa.status:#x}")
    return aa.hObjectNew

hDev = alloc(hc, 0x80, p0)
hDisp = alloc(hDev, 0x73)
DID, SUB = 0x200, p.subDeviceInstance

def txn(cmd, addr, data=b"", n=0, ao=0):
    ap = AUXP(); ap.subDeviceInstance = SUB; ap.displayId = DID
    ap.bAddrOnly = ao; ap.cmd = cmd; ap.addr = addr
    for i, bq in enumerate(data[:16]):
        ap.data[i] = bq
    ap.size = n
    st = run_ctrl(hDisp, 0x731341, ap)
    return st, ap

REP = {0: "ACK", 1: "NACK", 2: "DEFER", 3: "TIMEOUT", 4: "I2CNACK", 8: "I2CDEFER"}
rep = lambda ap: REP.get(ap.replyType, f"{ap.replyType:#x}")
ORACLE = bytes.fromhex("00ffffffffffff00")
I2C_WR, I2C_RD, MOT, WST = 0x0, 0x1, 0x4, 0x2

def A(s7, rw, reg): return (s7 << 13) | (rw << 12) | (reg << 4)

st, ap = txn(0x9, 0x00 << 2, n=0)
print(f"baseline native DPCD0={ap.data[0]:#04x} {rep(ap)}")
if ap.replyType != 0 or ap.data[0] != 0x12:
    raise SystemExit("baseline broken")

E = 0x50   # EDID 7-bit slave

print("\n== 1) bare READ ping, rw=1 (NVIDIA sstDDCPing form) ==")
for ao in (1, 0):
    stt, ap = txn(I2C_RD, A(E, 1, 0), n=0, ao=ao)
    print(f"bare-rd ao={ao} addr={A(E,1,0):#07x} -> {rep(ap)}")

print("\n== 2) full kernel sequence, canonical form ==")
st0, ap0 = txn(I2C_WR, A(E, 0, 0), n=0, ao=1)          # bare addr write
print(f"bare-wr {rep(ap0)}")
if ap0.replyType == 0:
    st1, ap1 = txn(I2C_WR | MOT, A(E, 0, 0), data=b"\x00", n=0)
    print(f"wr-off  {rep(ap1)}")
    st2, ap2 = txn(I2C_RD | MOT, A(E, 1, 0), n=7)
    got = bytes(ap2.data[:ap2.size]) if ap2.replyType == 0 else b""
    print(f"rd      {rep(ap2)} n={ap2.size} {got[:8].hex(' ')}"
          f"{'  <== EDID MATCH' if got[:8] == ORACLE else ''}")

print("\n== 3) RD|MOT with reg inside addr field (no offset write) ==")
for reg in (0x00,):
    st3, ap3 = txn(I2C_RD | MOT, A(E, 1, reg), n=7, ao=0)
    got = bytes(ap3.data[:ap3.size]) if ap3.replyType == 0 else b""
    print(f"rd reg={reg:#04x} addr={A(E,1,reg):#07x} {rep(ap3)} n={ap3.size} "
          f"{got[:8].hex(' ')}{'  <== EDID MATCH' if got[:8] == ORACLE else ''}")

print("\n== 4) same on 0xA1-derived read addr, [20:13]=s8 form ==")
st4, ap4 = txn(I2C_RD | MOT, (0xA1 << 13) | 0, n=7, ao=0)
got = bytes(ap4.data[:ap4.size]) if ap4.replyType == 0 else b""
print(f"s8 read {rep(ap4)} n={ap4.size} {got[:8].hex(' ')}")
