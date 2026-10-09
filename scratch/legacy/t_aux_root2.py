#!/usr/bin/env python3
"""Round 2 with real evidence: DPCD read worked (did=0x200). Now identify OUR
monitor via I2C-over-AUX EDID read compared to each kernel connector's EDID,
then ACK-probe the ISP flash slave. subDeviceInstance taken seriously.
Encoding: addr word = dev8<<16 | reg8<<8 | (n-1) (DP 2.4.4); write data in data[].
Read-only."""
import ctypes, os, sys, fcntl, glob, hashlib
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
                ("sliStatus", ctypes.c_uint32), ("boardId", ctypes.c_uint32),
                ("gpuInstance", ctypes.c_uint32), ("numaId", ctypes.c_int32)]
class AUXP(ctypes.Structure):
    _fields_ = [("subDeviceInstance", ctypes.c_uint32), ("displayId", ctypes.c_uint32),
                ("bAddrOnly", ctypes.c_uint32), ("cmd", ctypes.c_uint32),
                ("addr", ctypes.c_uint32), ("data", ctypes.c_uint8 * 16),
                ("size", ctypes.c_uint32), ("replyType", ctypes.c_uint32),
                ("retryTimeMs", ctypes.c_uint32)]
I2C, AUX_ = 0x0, 0x8
WR, RD, WRS = 0x0, 0x1, 0x2
MOT = 0x4
REPLY = {0:"ACK",1:"NACK",2:"DEFER",3:"TIMEOUT",4:"I2CNACK",8:"I2CDEFER",0xffffffff:"INVALID"}

fd  = os.open("/dev/nvidiactl", os.O_RDWR)
fdg = os.open("/dev/nvidia0", os.O_RDWR)
def iod(esc, s, size=None):
    fcntl.ioctl(fd, nvrm._IOWR(esc, size or ctypes.sizeof(s)), s)
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
p = IDINFO2(); p.gpuId = 0x100
run_ctrl(hc, 0x205, p, ctypes.sizeof(p))      # -> subDeviceInstance
subInst = p.subDeviceInstance
print(f"client={hc:#x} subInst={subInst}")
p0 = nvrm.NV0080Params(); p0.deviceId = p.deviceInstance
hDevice = alloc(hc, 0x80, p0)
hDisp = alloc(hDevice, 0x73)

def aux(did, cmd, addr, data=b"", n=0, addr_only=0):
    ap = AUXP(); ap.subDeviceInstance = subInst
    ap.displayId = did; ap.bAddrOnly = addr_only; ap.cmd = cmd
    ap.addr = addr
    for i, b in enumerate(data[:16]): ap.data[i] = b
    ap.size = n
    st = run_ctrl(hDisp, 0x731341, ap, ctypes.sizeof(ap))
    return st, ap

def i2c_read_block(did, dev8_w, dev8_r, off, n):
    """write offset thenMot-read n bytes; returns (status, bytes)."""
    stw, apw = aux(did, I2C | WR, (dev8_w << 16) | (off << 8) | 0, data=bytes([off & 0xff]) if False else b"", n=0, addr_only=1)
    # address-only sets offset pointer at off? no: addr word low byte = reg, encoded in addr
    # proper: write with 1 data byte = offset, then MOT read
    if True:
        stw, apw = aux(did, I2C | WR, (dev8_w << 16) | (off << 8) | 0, data=b"\x00", n=0)
    got = bytearray(); off2 = 0
    while len(got) < n:
        chunk = min(16, n - len(got))
        str_, apr = aux(did, I2C | MOT | RD,
                        (dev8_r << 16) | (off << 8) | (chunk - 1), n=chunk - 1)
        if str_ != 0:
            return (str_, bytes(got))
        k = apr.size  # returned size indexed from 1
        if k == 0:
            return (0, bytes(got))
        got += bytes(apr.data[:k])
    return (0, bytes(got))

# kernel ground-truth EDIDs per connector
conn = {}
for pth in sorted(glob.glob("/sys/class/drm/card*-*/edid")):
    name = pth.split("/")[3]
    d = open(pth, "rb").read()
    if d[:4] == b"\x00\xff\xff\xff":
        conn[name] = d
print("kernel connectors:", {k: len(v) for k, v in conn.items()})

MASK = 0xff00
for i in range(32):
    if not MASK >> i & 1:
        continue
    did = 1 << i
    st, ap = aux(did, AUX_ | RD, 0, n=0)
    dpcd = ap.data[0] if st == 0 else None
    if st != 0:
        continue
    print(f"did={did:#06x} DPCD[0]={dpcd:#04x} reply={REPLY.get(ap.replyType,ap.replyType)}")
    # try full 256B EDID
    st2, ed = i2c_read_block(did, 0xA0, 0xA1, 0x00, 256)
    match = [c for c in conn if ed and conn[c][:32] == ed[:32]]
    print(f"   EDID st={st2:#x} len={len(ed)} head={ed[:12].hex()} match={match}")
    if match:
        # ISP ACK probes
        for sl in (0x40, 0x41, 0x42, 0x43):
            stp, app = aux(did, I2C | WR, sl << 16, n=0, addr_only=1)
            print(f"   addr-only 0x{sl:02x}: st={stp:#x} reply={REPLY.get(app.replyType,app.replyType)}")
        print(f"   >>> OUR DISPLAY: did={did:#x} via {match[0]}")
        break
