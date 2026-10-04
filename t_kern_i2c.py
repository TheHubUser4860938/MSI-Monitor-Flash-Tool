#!/usr/bin/env python3
"""Kernel-semantics I2C-over-AUX via NV0073 0x731341 I2C mode, as root.

Hypothesis from last session's analysis: every earlier I2C-mode TIMEOUT came
from (a) missing the bare-address preamble the Linux kernel always emits
(drm_dp_i2c_do_msg) so the branch's I2C state machine never saw a START, and
(b) wrong 21-bit addr-field encoding for the slave.

Sequence fidelity (drivers/gpu/drm/display/drm_dp_helper.c):
  msg0 = WRITE(reg),  MOT set   -> bAddrOnly=1 addr-write, then WRITE|MOT data
  msg1 = READ(n),     MOT set   -> bAddrOnly=1 addr-read (or inline), READ|MOT
DP spec 2.11.10.4: 20-bit request address field =
  [19:13] slave7  [12] R/W  [11:4] start-addr  -> RM exposes 21 bits, sweep.

Oracle: EDID slave 0x50/0xA0, offset 0 must return 00 ff ff ff ff ff ff 00
(kernel sysfs copy). Read-only throughout; nothing can alter the monitor.
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
fdg = os.open("/dev/nvidia0", os.O_RDWR)          # GPU fd association

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

# RM cmd encoding (nvcontroldefs.h): bit3 = AUX type; I2C: [2]=MOT [1]=W [0]=R
I2C_W, I2C_R = 0x2, 0x1
MOT = 0x4
REP = {0: "ACK", 1: "NACK", 2: "DEFER", 3: "TIMEOUT", 4: "I2CNACK", 8: "I2CDEFER"}
rep = lambda ap: REP.get(ap.replyType, f"{ap.replyType:#x}")

st, ap = txn(0x9, 0x00 << 2, n=0)                 # native baseline guard
print(f"baseline native DPCD0={ap.data[0]:#04x} {rep(ap)} (must be 0x12 ACK)")
if ap.replyType != 0 or ap.data[0] != 0x12:
    raise SystemExit("baseline broken -- not proceeding")

# Candidate 21-bit addr encodings for (slave, rw, reg).
# S = 8-bit slave byte (0xA0/0xA1) or 7-bit (0x50); reg byte in low field.
def enc_A1(s8, rw, reg): return (s8 << 13) | (rw << 12) | (reg << 4)
def enc_A2(s8, rw, reg): return (s8 << 12) | (rw << 11) | (reg << 3)
def enc_A3(s7, rw, reg): return (s7 << 13) | (rw << 12) | (reg << 4)
def enc_A4(s7, rw, reg): return (s7 << 12) | (rw << 11) | (reg << 3)
# A5/A6: RW bit NOT embedded; 8-bit slave only (RM may inject via cmd type)
def enc_A5(s8, rw, reg): return (s8 << 13) | (reg << 4)
def enc_A6(s8, rw, reg): return (s8 << 12) | (reg << 3)

ENCS = [("A1 s8<<13|rw<<12|reg<<4", enc_A1),
        ("A2 s8<<12|rw<<11|reg<<3", enc_A2),
        ("A3 s7<<13|rw<<12|reg<<4", enc_A3),
        ("A4 s7<<12|rw<<11|reg<<3", enc_A4),
        ("A5 s8<<13|reg<<4 (no rw)", enc_A5),
        ("A6 s8<<12|reg<<3 (no rw)", enc_A6)]

NBYTES = 8          # read 8 data bytes: expect 00 ff ff ff ff ff ff 00
ORACLE = bytes.fromhex("00ffffffffffff00")

def try_enc(name, enc, preamble=True):
    """Full kernel-fidelity transaction against EDID slave, offset 0."""
    wa = enc(0xA0, 0, 0x00)      # write-phase address word (0xA0)
    ra = enc(0xA1, 1, 0x00)      # read-phase address word (0xA1)
    log = []
    if preamble:                 # kernel's drm_dp_i2c_write_bare_address
        st, ap = txn(I2C_W, wa, n=0, ao=1)
        log.append(f"bare-wr {rep(ap)}")
        if ap.replyType not in (0,):
            return False, " ".join(log)
    # msg0: write offset byte, MOT
    st, ap = txn(I2C_W | MOT, wa, data=b"\x00", n=0)
    log.append(f"wr-off {rep(ap)}")
    if ap.replyType not in (0,):
        return False, " ".join(log)
    # msg1 addr phase: bare-address READ|MOT (kernel's read path)
    if preamble:
        st, ap = txn(I2C_R | MOT, ra, n=0, ao=1)
        log.append(f"bare-rd {rep(ap)}")
        if ap.replyType not in (0,):
            return False, " ".join(log)
    # msg1 data phase: READ|MOT, NBYTES
    st, ap = txn(I2C_R | MOT, ra, n=NBYTES - 1)
    got = bytes(ap.data[:ap.size + 1]) if ap.replyType == 0 else b""
    log.append(f"rd {rep(ap)} {got[:8].hex(' ')}")
    ok = got[:8] == ORACLE
    return ok, " ".join(log) + ("  <== EDID MATCH" if ok else "")

print("\n== kernel-sequence sweep on EDID slave 0x50/0xA0 offset 0 ==")
winner = None
for name, enc in ENCS:
    for pre in (True,):
        ok, log = try_enc(name, enc, preamble=pre)
        print(f"{'PASS' if ok else 'fail':4s} {name:28s} pre={int(pre)} {log}")
        if ok and not winner:
            winner = (name, enc)

# fallback: no-preamble variants for any that failed (repro old style)
if not winner:
    print("\n== without bare-address preamble ==")
    for name, enc in ENCS:
        ok, log = try_enc(name, enc, preamble=False)
        print(f"{'PASS' if ok else 'fail':4s} {name:28s} pre=0 {log}")
        if ok and not winner:
            winner = (name, enc)

print(f"\nWINNER: {winner[0] if winner else 'none — I2C mode dead raw too'}")
