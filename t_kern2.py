#!/usr/bin/env python3
"""Follow-up on sweep1: A1 (addr[20:13]=8bit-slave, [12]=RW, [11:4]=reg) got
ACKed on the WRITE phase but bare-READ timed out. A1's RW placement matches
t_raw.py's known-good wire form, so the address phase format is right and only
the read sequence/phase is in question. This script, as root, read-only:

 1. verifies the EDID data-phase read alone (addr field carries RW=1, 0xA1)
    WITHOUT the bare-address read packet;
 2. re-runs the bulk I2C control 0x73137C (RM does the whole start/address/
    data/stop + retries itself; doc: addr per DP spec 2.4, 20 bits) on the
    EDID slave as oracle, then probes ISP slaves (0x41/0x30/0x44) read-only.

If bulk 0x73137C works: flash dump/program = 256-byte chunks, NVIDIA-native.
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

class BULK(ctypes.Structure):
    _fields_ = [("subDeviceInstance", ctypes.c_uint32), ("displayId", ctypes.c_uint32),
                ("addr", ctypes.c_uint32), ("bWrite", ctypes.c_uint32),
                ("data", ctypes.c_uint8 * 256), ("size", ctypes.c_uint32)]

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

def bulk(addr, wr, data=b"", n=8):
    bp = BULK(); bp.subDeviceInstance = SUB; bp.displayId = DID
    bp.addr = addr; bp.bWrite = 1 if wr else 0
    for i, bq in enumerate(data[:n]):
        bp.data[i] = bq
    bp.size = n
    st = run_ctrl(hDisp, 0x73137C, bp)
    return st, bp

REP = {0: "ACK", 1: "NACK", 2: "DEFER", 3: "TIMEOUT", 4: "I2CNACK", 8: "I2CDEFER",
       0xffffffff: "INVAL"}
rep = lambda r: REP.get(r, f"{r:#x}")
A1 = lambda s8, rw, reg: (s8 << 13) | (rw << 12) | (reg << 4)
ORACLE = bytes.fromhex("00ffffffffffff00")

st, ap = txn(0x9, 0x00 << 2, n=0)
print(f"baseline native DPCD0={ap.data[0]:#04x} {rep(ap.replyType)}")
if ap.replyType != 0 or ap.data[0] != 0x12:
    raise SystemExit("baseline broken")

print("\n== A: 0x731341 read-phase variants (offset-write with data[0], per kernel) ==")
wa, ra = A1(0xA0, 0, 0), A1(0xA1, 1, 0)
# kernel form msg0: WRITE|MOT with buffer[0]=offset (not addr-only)
st, ap = txn(0x2 | 0x4, wa, data=b"\x00", n=0)
print(f"A0 wr-off(data) {rep(ap.replyType)} st={st:#x}")
for name, cmd, ao in [("A1 rd MOT no-preamble", 0x1 | 0x4, 0),
                      ("A2 rd no-MOT no-pre",    0x1,       0),
                      ("A3 rd MOT addr-only",    0x1 | 0x4, 1)]:
    if name.startswith("A3"):
        st, ap = txn(0x1 | 0x4, ra, n=0, ao=1)
        print(f"{name} {rep(ap.replyType)}", end="  ")
    st2, ap2 = txn(0x1 | 0x4, ra, n=7)
    got = bytes(ap2.data[:ap2.size]) if ap2.replyType == 0 else b""
    print(f"{name}: {rep(ap2.replyType)} n={ap2.size} {got[:8].hex(' ')}"
          f"{'  <== EDID MATCH' if got[:8] == ORACLE else ''}")

print("\n== B: bulk 0x73137C — EDID oracle then ISP slaves (read-only) ==")
# A1 addr: 8-bit slave [20:13], reg [11:4]
tests = [("EDID 0xA0 off0 rd8", A1(0xA0, 1, 0), 0, 8),
         ("EDID 0xA0 off0 wr1 (offset 0)", A1(0xA0, 0, 0), 1, 1),
         ]
st, bp = tests_run = None, None
# write offset first, then read (bulk may do full txn itself; try read directly too)
st, bp = bulk(A1(0xA0, 1, 0), wr=False, n=8)
print(f"B0 read directly   st={st:#x} size={bp.size} {bytes(bp.data[:8]).hex(' ')}")
st, bp = bulk(A1(0xA0, 0, 0), wr=True, data=b"\x00" + bytes(7), n=8)
print(f"B1 write-off-then? st={st:#x} size={bp.size}")
st, bp = bulk(A1(0xA0, 1, 0), wr=False, n=8)
print(f"B2 read after wr   st={st:#x} size={bp.size} {bytes(bp.data[:8]).hex(' ')}")

for lbl, s8 in [("ISP flash 0x41", 0x41), ("ISP ctrl 0x30", 0x30),
                ("MCU regs 0x44", 0x44), ("tun-branch 0x32", 0x32)]:
    st, bp = bulk(A1(s8, 1, 0), wr=False, n=8)
    print(f"{lbl:16s} st={st:#x} size={bp.size} {bytes(bp.data[:8]).hex(' ')}")
print("done")
