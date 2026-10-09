#!/usr/bin/env python3
"""Test if I2C-over-AUX is dead because the DP tunnel is disabled.
Kernel DRM does this for legacy branch devices: write 0xFF to DPCD 0x00D1
(I2C_AUX_SETTUNE / tunnel enable). Both writes here are safe+reversible,
and native AUX writes are proven to ACK. Steps:
  1. read DPCD 0x00 (sanity, should be 0x12), 0x00D1, 0x00D0 (down_stream count)
  2. native write 0xFF to 0x00D1
  3. I2C addr-only write to EDID slave 0xA0, read I2C status via 0xA1 MOT
  4. restore 0x00D1 to original value
Oracle for full read: kernel EDID bytes."""
import ctypes, os, sys, fcntl, glob
sys.path.insert(0, str(__import__("pathlib").Path(__file__).resolve().parent))
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

def aux_read(ra, cnt=1):
    return txn(0x8|0x1|(cnt-1), (ra << 2)|(1<<3)|(cnt-1), n=cnt-1)
def aux_write(ra, val):
    return txn(0x8|0x0|0x0, (ra << 2)|(1<<3)|0, data=bytes([val]))

for ra in (0x00, 0x00D0, 0x00D1, 0x00D2, 0x00D3, 0x00D4, 0x00D5):
    st, ap = aux_read(ra)
    print(f"DPCD {ra:#06x} = {ap.data[0]:#04x}  ({rep(ap)})")

st0, ap0 = aux_read(0x00D1)
orig = ap0.data[0]
st, ap = aux_write(0x00D1, 0xFF)
print(f"write 0x00D1=0xFF: st={st:#x} {rep(ap)}")

st, ap = txn(0x0|0x0, (0xA0 << 12), n=0, addr_only=1)   # I2C addr-only EDID probe
print(f"I2C probe after enable: st={st:#x} reply={rep(ap)}")

# try a real read: offset-write 0x00 then MOT read 8
stw, apw = txn(0x0|0x0, (0xA0 << 12) | 0x000, data=b"\x00")
print(f"I2C offset-wr: st={stw:#x} {rep(apw)}")
if stw == 0 and apw.replyType == 0:
    str_, apr = txn(0x0|0x4|0x1, (0xA1 << 12) | 0x008, n=7)
    got = bytes(apr.data[:apr.size+1]) if str_ == 0 else b""
    print(f"I2C MOT rd: st={str_:#x} {rep(apr)} n={apr.size+1} {got[:8].hex(' ')}")

aux_write(0x00D1, orig)   # restore
print(f"restored 0x00D1={orig:#04x}")
for f in glob.glob("/sys/class/drm/card1-DP-1/edid"):
    print("kernel EDID head:", open(f,'rb').read(8).hex(' '))
