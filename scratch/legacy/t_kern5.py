#!/usr/bin/env python3
"""Sweep 5 — self-contained READ|MOT probes; bAddrOnly semantics suspect.

Evidence table from sweeps 1/4 on 0x731341 I2C mode (EDID slave):
  ACKED   : WRITE-type, n=0, ao=1, addr=(0xA0<<13)|(0<<12)|(0<<4)=0xa0000
  TIMEOUT : every READ-type request ANY variant (ao 0/1, MOT 0/1; 0xa1000,
            s8<<13|0, s7<<0..)
  TIMEOUT : WRITE with data n=0 (0xa0000)          [sweep2 A0]

Hypotheses left:
  H1: RM expects the slave/register value where NVIDIA's own DP stack puts
      `address` verbatim for the DDC path: 8-bit DDC addr (0xA0) possibly
      shifted 1 -- so raw plain values 0xA0/0x50/0x51/0xA1 WITHOUT DP-spec
      [20:13] packing; RM composes the wire address field itself.
  H2: the write ACK was spurious (branch always ACKs address-only writes);
      real test = data-phase reads (NVIDIA EDID path avoids I2C writes:
      "Don't use an I2C write. Some devices erroneously ACK on the write").

Pure reads (n=8 -> 8 bytes, oracle EDID head 00 ff ff ff ff ff ff 00).
Also tests reg-in-data[0] with READ|MOT (bAddrOnly=0, size=8: data[0] unused?
kernel sends offset in first DATA write, but try it as first rd byte anyway).
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

st, ap = txn(0x9, 0x00 << 2, n=0)
print(f"baseline native DPCD0={ap.data[0]:#04x} {rep(ap)}")
if ap.replyType != 0 or ap.data[0] != 0x12:
    raise SystemExit("baseline broken")

N = 7      # size is 0-based -> 8 bytes
CASES = [
    ("plain 0xA0      rd| MOT", 0x5, 0xA0),
    ("plain 0x50      rd| MOT", 0x5, 0x50),
    ("plain 0xA1      rd| MOT", 0x5, 0xA1),
    ("plain 0x51      rd| MOT", 0x5, 0x51),
    ("0xA0<<4         rd| MOT", 0x5, 0xA0 << 4),
    ("0x50<<4         rd| MOT", 0x5, 0x50 << 4),
    ("0xA0<<12|(0<<4) rd| MOT", 0x5, 0xA0 << 12),
    ("0x50<<12|(1<<11) rd| MOT", 0x5, (0x50 << 12) | (1 << 11)),
    ("0x50<<12|(0<<11)|(0<<3) rd| MOT", 0x5, 0x50 << 12),
    ("0xA0<<13 rd| MOT (ACK'd wr form, rd bit not set)", 0x5, 0xA0 << 13),
    ("0xA0<<13|1<<12 rd MOT ao=1", 0x5 | 0, 0),   # placeholder replaced below
]
print("\n== self-contained RD|MOT addr sweep ==")
for lbl, cmd, addr in CASES[:-1]:
    stt, ap = txn(cmd, addr, n=N, ao=0)
    got = bytes(ap.data[:ap.size]) if ap.replyType == 0 else b""
    hit = got[:8] == ORACLE or got[:7] == ORACLE[:7]
    print(f"{lbl:36s} -> {rep(ap):8s} n={ap.size:2d} {got[:8].hex(' ')}"
          f"{'  <== EDID MATCH' if hit else ''}")

# write forms that might set offset WITHOUT spurious ACK issue, then immediately
# a plain-0xA0 rd|MOT (pair only if write ACKed)
print("\n== write(offset) plain forms + follow rd ==")
for addr in (0xA0, 0x50, 0x50 << 12, 0xA0 << 13):
    st0, ap0 = txn(0x2 | 0x4, addr, data=b"\x00", n=0)      # WR|MOT offset 0
    if ap0.replyType != 0:
        print(f"wr {addr:#07x} -> {rep(ap0)} (skipped follow)")
        continue
    for follow in (0xA0, 0x50 << 12, 0xA0 << 13):
        st1, ap1 = txn(0x5, follow, n=N)
        got = bytes(ap1.data[:ap1.size]) if ap1.replyType == 0 else b""
        hit = got[:7] == ORACLE[:7]
        print(f"wr {addr:#07x} ACK -> rd {follow:#07x} {rep(ap1)} n={ap1.size} "
              f"{got[:8].hex(' ')}{'  <== EDID MATCH' if hit else ''}")
