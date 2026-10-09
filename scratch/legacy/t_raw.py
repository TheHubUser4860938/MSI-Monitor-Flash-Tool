#!/usr/bin/env python3
"""KEY hypothesis: 0x731341 I2C-mode is RAW auxiliary (not DP-tunneled), so
every earlier probe failed because my addr words targeted nonexistent regs —
TIMEOUT = branch NACKs the address phase. This test:
 A) addr interpreted as reg<<2 (proven native layout): DPCD0 must read 0x12
 B) addr interpreted as raw wire byte0 (0xA0<<12|0<<4 = EDID offset write),
    then MOT read 0xA1 — if the monitor's EDID head comes back, raw aux I2C
    works from userland root and EVERY ISP slave (0x20..) is reachable too.
Oracle: kernel EDID 00 ff ff ff ff ff ff 00. Probes ISP slaves read-only."""
import ctypes, os, sys, fcntl
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

st, ap = txn(0x9, 0x00 << 2, n=0)                 # A: sanity
print(f"A native DPCD0={ap.data[0]:#04x} {rep(ap)}")

# B: EDID slave via raw aux, two addr layouts
for lbl, w_off, w_len, r_off, r_len in [
    ("<<2: off-wr (0xA0100)>>? rd (0xA1,rn15)>>? ",
     ((0xA0 << 8) | 0x00) | 0, 15, ((0xA1 << 8) | 0x00) | 15, 15),
    ("<<2  ((0xA0<<8|reg)<<4)",
     ((0xA0 << 8) | 0x00) << 4, 15, ((0xA1 << 8) | 0x00) << 4 | 15, 15),
]:
    st, ap = txn(0x0, w_off | 0, data=b"\x00\x00"[:1], n=0)
    print(f"B {lbl} wr st={st:#x} {rep(ap)}")
    st2, ap2 = txn(0x5, r_off, n=r_len)
    got = bytes(ap2.data[:r_len+1])
    print(f"   rd st={st2:#x} {rep(ap2)} n={ap2.size+1} head={got[:8].hex(' ')}")

# ISP slave probes (read-only): addr-only writes on 8-bit slaves, <<2 layout
probe = [("ISP ctrl 0x30", 0x30), ("addrhi 0x31", 0x31), ("addrlo 0x32", 0x32),
         ("ext 0x33", 0x33), ("flash 0x41", 0x41), ("mcu 0x44", 0x44),
         ("tunnel 0x37/6E", 0x6E)]
for lbl, s8 in probe:
    for albl, addr in (("<<2", (s8 << 12) << 2), ("raw-b0", s8 << 16), ("f20", s8 << 12)):
        st, ap = txn(0x0, addr, n=0, ao=1)
        if ap.replyType != 3:
            print(f"{lbl:16s} {albl:7s} st={st:#x} {rep(ap)}")
print("done")
