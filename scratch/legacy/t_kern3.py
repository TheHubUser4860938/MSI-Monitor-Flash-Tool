#!/usr/bin/env python3
"""Sweep 3 — NVIDIA's OWN calling convention, extracted from their DP stack.

Evidence from open-gpu-kernel-modules 615.x:
  dp_deviceimpl.cpp:560:  if (type == i2c||i2cMot) address >>= 1;  // "right
      shifted DDC Address (request identifier in spec)"  -> RM addr field's
      slave part = 7-bit slave address (0xA0>>1 = 0x50)
  dp_sst_edid.cpp:231 (sstDDCPing): transaction(read, i2c, 0xA0>>1, &offset,
      SIZE 0) — bare READ, size=0, offset passed as arg (start addr), comment
      "Don't use an I2C write. Some devices erroneously ACK on the write"
  dp_deviceimpl.cpp:3842 (HDCP BCAPS read): transaction(read, i2cMot,
      0x74>>1..., offset=HDCP_BCAPS_DDC_OFFSET, nWrite=1)

So RM I2C addr may be plain 7-bit slave WITHOUT the DP-spec [20:13] shift,
and the register/offset may ride in an implicit write-transaction the RM
composes itself (the `offset` arg in their wrapper) — possibly via the
`data[0]` byte of the READ request, or an addr field low bits.

Sweep (root, read-only): all slave placements 0/3/4/12/13 x bare-READ size=0
ping first, full read on ACK. Oracle: EDID 00 ff ff ff ff ff ff 00.
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

# cmd bits: bit3 type (0=i2c), bit2 MOT, bits1:0 req (0=wr 1=rd 2=wrstatus)
PLACEMENTS = {
    "s7+0 ": lambda s7, reg: s7,
    "s7<<3": lambda s7, reg: (s7 << 3) | (reg & 7),
    "s7<<4": lambda s7, reg: (s7 << 4) | (reg & 15),
    "s7<<12": lambda s7, reg: (s7 << 12) | ((reg & 0xff) << 4),
    "s7<<13": lambda s7, reg: (s7 << 13) | ((reg & 0xff) << 4),
}
# sstDDCPing form: READ, sizeRequested=0. RM addr-only rule triggers on
# size==0&&write per wrapper comment, but ping uses READ+size0 -> try ao both.
print("\n== ping phase: bare READ size=0 on EDID slave (NVIDIA sstDDCPing form) ==")
cands = []
for pname, f in PLACEMENTS.items():
    for ao in (0, 1):
        addr = f(0xA0 >> 1, 0)
        stt, ap = txn(0x1, addr, n=0, ao=ao)          # READ no-MOT
        print(f"ping {pname} ao={ao} addr={addr:#07x} -> {rep(ap)}")
        if ap.replyType == 0:
            cands.append((pname, ao, f))
        # also with addr-only form of READ|MOT (read phase of kernel seq)
        stt, ap = txn(0x1 | 0x4, addr, n=0, ao=ao)
        if ap.replyType == 0 and (pname, ao, f) not in cands:
            print(f"ping {pname} ao={ao} MOT -> ACK")
            cands.append((pname, ao, f))

print("\n== data read phase on ACKed addresses (read 8 bytes, expect EDID) ==")
found = None
for pname, ao, f in cands:
    for dcmd, dlbl in ((0x1, "rd"), (0x5, "rd| MOT")):
        # follow ping with data read, offset 0 in data[0]/low addr bits
        for regbit, albl in ((0, "reg=reg"), (0, "")):
            pass
        st1, ap1 = txn(dcmd, f(0xA1 >> 1, 0), n=7, ao=0)
        got = bytes(ap1.data[:ap1.size]) if ap1.replyType == 0 else b""
        ok = got[:8] == ORACLE or got[:7] == ORACLE[:7]
        print(f"data {pname} {dlbl} -> {rep(ap1)} n={ap1.size} {got[:8].hex(' ')}"
              f"{'  <== EDID MATCH' if ok else ''}")
        if ok and not found:
            found = (pname, dlbl)

# last resort: exact kernel write-then-read with 7-bit slaves, reg in low bits
print("\n== write(offset)+read with 7-bit encodings ==")
for pname, f in PLACEMENTS.items():
    st0, ap0 = txn(0x2, f(0xA0 >> 1, 0), data=b"\x00", n=0)   # WRITE|MOT-off off-byte
    if ap0.replyType != 0:
        continue
    st1, ap1 = txn(0x5, f(0xA1 >> 1, 0), n=7)                 # READ|MOT
    got = bytes(ap1.data[:ap1.size]) if ap1.replyType == 0 else b""
    ok = got[:7] == ORACLE[:7]
    print(f"{pname} wr+rd -> wr {rep(ap0)} rd {rep(ap1)} {got[:8].hex(' ')}"
          f"{'  <== EDID MATCH' if ok else ''}")
    if ok and not found:
        found = (pname, "wr+rd")

print(f"\nWINNER: {found}")
