#!/usr/bin/env python3
"""Sweep 6 — THE WINNING FORM, verified + generalized.

Sweep 5 result: RD|MOT (cmd=0x5), addr = PLAIN 7-bit slave, size 0-based,
bAddrOnly=0  =>  ACK + real EDID bytes from slave 0x50 on NVIDIA userland
as root. NVIDIA's `address >>= 1; // right shifted DDC Address` comment is
literally it: RM composes the DP-spec wire address field from a plain 7-bit
addr. RW is carried by cmd REQ_TYPE bits, NOT addr.
Write form should mirror it: WR cmd=0x2 (+MOT 0x4), addr plain slave,
data[] payload. Address-only probe: size 0 + WR per evoadapter => bAddrOnly
auto... but plain addr writes need the offset phase for reads at offsets, so
verify wr plain addr with data first.

Now (root, READ-ONLY against monitor):
  1. repeat EDID rd 16B; then rd at offset 0x80 via plain write-phase then
     (2) address-only WR probes on ISP slaves 0x41/0x30/0x44/0x33 -- the
      pure address-phase probes cannot change anything (0 data bytes) so
      this ISP scan is safe: does NOT enter ISP mode, just ACK visibility.
  3. DDC/CI slave 0x37 read via same transport = proves generic I2C works
     (compare against getvcp bytes from ddcutil as secondary check later).
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

WR, RD, MOT = 0x0, 0x1, 0x4
REP = {0: "ACK", 1: "NACK", 2: "DEFER", 3: "TIMEOUT", 4: "I2CNACK", 8: "I2CDEFER"}
rep = lambda ap: REP.get(ap.replyType, f"{ap.replyType:#x}")
ORACLE = bytes.fromhex("00ffffffffffff00")

st, ap = txn(0x9, 0x00 << 2, n=0)
print(f"baseline native DPCD0={ap.data[0]:#04x} {rep(ap)}")
if ap.replyType != 0 or ap.data[0] != 0x12:
    raise SystemExit("baseline broken")

def rd7(s7, n=15, off=None):
    """read n bytes from 7-bit slave s7. If off given, plain-WR offset first."""
    if off is not None:
        stw, apw = txn(WR | MOT, s7, data=bytes([off]), n=0)   # size 0-based: n=0 -> 1 byte
        if apw.replyType != 0:
            return None, f"wr-off {rep(apw)}"
    st1, ap1 = txn(RD | MOT, s7, n=min(n, 16) - 1)
    return (bytes(ap1.data[:ap1.size]) if ap1.replyType == 0 else b""), rep(ap1)

# 1) EDID oracle at offset 0 and 0x80
got, how = rd7(0x50, 16, off=0x00)
print(f"EDID@0   {how} {got.hex(' ') if got else ''}"
      f"{'  <== MATCH' if got and got[:8]==ORACLE else ''}")
got2, how2 = rd7(0x50, 16, off=0x50)   # mid-block offset, tests offset write
print(f"EDID@50h {how2} {got2[:16].hex(' ') if got2 else ''}")

# DDC/CI slave read: 0x37 reply header for 'who are you' — just ACK visibility
got3, how3 = rd7(0x37, 8, off=0x00)
print(f"DDCI@0   {how3} {got3[:8].hex(' ') if got3 is not None else ''}")

# 2) ISP slave visibility, READ-ONLY address-phase probes (no data out)
print("\n== ISP slave address-phase ACK probe (0 data bytes, harmless) ==")
for lbl, s8 in [("ISP ctl 0x30", 0x30), ("addrhi 0x31", 0x31), ("addrlo 0x32", 0x32),
                ("extend 0x33", 0x33), ("flash 0x41", 0x41), ("mcu 0x44", 0x44),
                ("tun-br 0x32", 0x33)]:   # 7-bit = s8>>1
    s7 = s8 >> 1
    stp, app = txn(WR, s7, n=0, ao=1)     # bare addr write, 0 data bytes
    stq, apq = txn(RD, s7, n=0, ao=1)     # bare addr read
    print(f"{lbl:14s} 7-bit {s7:#04x}: addr-wr {rep(app)} addr-rd {rep(apq)}")

# 3) flash slave plain reads WITHOUT entering ISP (expect timeout or 0xFF,
#    any reply other than TIMEOUT proves the slave answers)
got4, how4 = rd7(0x41 >> 1, 16, off=0x00)
print(f"\nflash 0x41 (7-bit 0x20) rd {how4} {got4[:16].hex(' ') if got4 is not None else ''}")
