#!/usr/bin/env python3
"""Definitive root test of NV0073_CTRL_CMD_DP_AUXCH_CTRL (0x731341,
RMCTRL flags 0x844 = PRIVILEGED -> sudo qualifies).

Gates wired: /dev/nvidia0 open in-process (osIsGpuAccessible),
authoritative deviceInstance via NV0000_CTRL_GPU_GET_ID_INFO_V2.
Read-only: DPCD[0] native AUX read, I2C-tunnel EDID@0x50 (compare vs sysfs),
address-only ACK probes on EDID slave then ISP flash slave 0x40.
"""
import ctypes, os, sys, fcntl, glob
sys.path.insert(0, str(__import__("pathlib").Path(__file__).resolve().parents[2]))
from msi_isp import nvrm

class OS21(ctypes.Structure):
    _fields_ = [("hRoot", ctypes.c_uint32), ("hObjectParent", ctypes.c_uint32),
                ("hObjectNew", ctypes.c_uint32), ("hClass", ctypes.c_uint32),
                ("pAllocParms", ctypes.c_void_p), ("paramsSize", ctypes.c_uint32),
                ("status", ctypes.c_uint32)]
assert ctypes.sizeof(OS21) == 32

class IDINFO2(ctypes.Structure):   # V2: NO szName (that's V1)
    _fields_ = [("gpuId", ctypes.c_uint32), ("gpuFlags", ctypes.c_uint32),
                ("deviceInstance", ctypes.c_uint32),
                ("subDeviceInstance", ctypes.c_uint32),
                ("sliStatus", ctypes.c_uint32),
                ("boardId", ctypes.c_uint32), ("gpuInstance", ctypes.c_uint32),
                ("numaId", ctypes.c_int32)]
assert ctypes.sizeof(IDINFO2) == 32

class AUXP(ctypes.Structure):
    _fields_ = [("subDeviceInstance", ctypes.c_uint32), ("displayId", ctypes.c_uint32),
                ("bAddrOnly", ctypes.c_uint32), ("cmd", ctypes.c_uint32),
                ("addr", ctypes.c_uint32), ("data", ctypes.c_uint8 * 16),
                ("size", ctypes.c_uint32), ("replyType", ctypes.c_uint32),
                ("retryTimeMs", ctypes.c_uint32)]
assert ctypes.sizeof(AUXP) == 48, ctypes.sizeof(AUXP)

# AUXCH cmd field: bit3 TYPE (0=I2C 1=AUX), bit2 MOT, bits1:0 REQ (0 wr,1 rd,2 wr-status)
I2C, AUX_ = 0x0, 0x8
WR, RD, WRS = 0x0, 0x1, 0x2

fd  = os.open("/dev/nvidiactl", os.O_RDWR)
fdg = os.open("/dev/nvidia0", os.O_RDWR)   # keeps osIsGpuAccessible happy

def iod(esc, s, size=None, wr=True):
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
    if a.status:
        raise SystemExit(f"alloc class {hClass:#x} status {a.status:#x}")
    return a.hObjectNew

def run_ctrl(hObj, cmd, params, psize):
    c = nvrm.NVOS54(); c.hClient = hc; c.hObject = hObj; c.cmd = cmd
    if params is not None:
        c.params = ctypes.cast(ctypes.byref(params), ctypes.c_void_p)
    c.paramsSize = psize
    try:
        iod(nvrm.NVESC["RM_CONTROL"], c)
        return c.status
    except OSError as e:
        return 0x10000 + (e.errno or 0)

a = OS21(); a.hClass = 0
iod(nvrm.NVESC["RM_ALLOC"], a); hc = a.hObjectNew
print(f"client={hc:#x} sizeof AUXP={ctypes.sizeof(AUXP)} IDINFO2={ctypes.sizeof(IDINFO2)}")

# gpuId encoding on linux: (pci_bus << 8) | (device << 3) | function
# bus 01:00.0 -> 0x100. Probe a few, but deviceId 0 is fine for 1-GPU.
devInst = 0
found = False
for gid in (0x100, 0x0, 0x1, 0x8):
    p = IDINFO2(); p.gpuId = gid
    st = run_ctrl(hc, 0x205, p, ctypes.sizeof(p))
    print(f"GET_ID_INFO_V2(gpuId={gid:#x}) st={st:#x} devInst={p.deviceInstance}")
    if st == 0:
        devInst = p.deviceInstance
        found = True
        break
if not found:
    print("ID_INFO_V2 unusable; falling back to deviceId=0")

p0 = nvrm.NV0080Params(); p0.deviceId = devInst
hDevice = alloc(hc, 0x80, p0)
hDisp = alloc(hDevice, 0x73)
print(f"device={hDevice:#x} disp={hDisp:#x}")

def sysctrl(cmd, wd):
    q = (ctypes.c_uint32 * len(wd))(*wd)
    st = run_ctrl(hDisp, cmd, q, 4 * len(wd))
    return st, list(q)

st, w = sysctrl(0x730102, [0, 0]);   print(f"NUM_HEADS  st={st:#x} heads={w[1]}")
st, w = sysctrl(0x730107, [0, 0, 0]);print(f"SUPPORTED  st={st:#x} mask={w[1]:#x} ddc={w[2]:#x}")
mask_supp = w[1]
st, w = sysctrl(0x730108, [0, 0, 0, 0]); print(f"CONNECTED  st={st:#x} mask={w[2]:#x}")
mask = w[2] or mask_supp
print(f"scan mask={mask:#x}")

def dfp_sig(did):
    q = (ctypes.c_uint32 * 4)(0, did, 0, 0)
    st = run_ctrl(hDisp, 0x731140, q, 16)
    return st, q[2]

dp = []
for i in range(32):
    if mask >> i & 1:
        for did in (1 << i, 0xE0 + (i & 0xF), i):
            st, flags = dfp_sig(did)
            if st == 0:
                tag = "DP" if flags & 7 == 3 else f"sig{flags & 7}"
                print(f"DFP did={did:#05x} flags={flags:#010x} {tag}")
                if flags & 7 == 3:
                    dp.append(did)
if not dp:
    raise SystemExit("no DFP/DP display found")

k_edid = b""
for pth in sorted(glob.glob("/sys/class/drm/card*-*/edid")):
    d = open(pth, "rb").read()
    if d[:4] == b"\x00\xff\xff\xff":
        k_edid = k_edid or d
print(f"kernel EDID head: {k_edid[:16].hex()}")

def aux(did, cmd, addr, data=b"", n=0, addr_only=0):
    ap = AUXP(); ap.displayId = did; ap.bAddrOnly = addr_only; ap.cmd = cmd
    ap.addr = addr
    for i, b in enumerate(data[:16]):
        ap.data[i] = b
    ap.size = n
    st = run_ctrl(hDisp, 0x731341, ap, ctypes.sizeof(ap))
    return st, ap

for did in dp:
    print(f"--- displayId {did:#x} ---")
    st, ap = aux(did, AUX_ | RD, 0, n=0)               # DPCD 0.0
    print(f"DPCD[0] native  : st={st:#x} reply={ap.replyType} d0={ap.data[0]:#04x} n={ap.size+1}")
    stw, _ = aux(did, I2C | WR, (0xA0 << 16) | (0 << 8) | 0, data=b"\x00", n=0)
    str_, ap2 = aux(did, I2C | RD, (0xA1 << 16) | 0 | 15, n=15)
    ed = bytes(ap2.data[:ap2.size + 1]) if str_ == 0 else b""
    print(f"I2C EDID wr={stw:#x} rd={str_:#x} head={ed[:16].hex()}")
    if k_edid and ed[:16] == k_edid[:16]:
        print("  >>> MATCHED kernel EDID: I2C-over-AUX tunnel WORKS as user+sudo")
    st, ap = aux(did, I2C | WRS, (0xA0 << 16), addr_only=1)
    print(f"ACK probe EDID 0xA0: st={st:#x} reply={ap.replyType}")
    st, ap = aux(did, I2C | WRS, (0x40 << 16), addr_only=1)   # Realtek ISP flash slave
    print(f"ACK probe ISP  0x40: st={st:#x} reply={ap.replyType}")
    st, ap = aux(did, I2C | WRS, (0x41 << 16), addr_only=1)
    print(f"ACK probe ISP  0x41: st={st:#x} reply={ap.replyType}")
    break
