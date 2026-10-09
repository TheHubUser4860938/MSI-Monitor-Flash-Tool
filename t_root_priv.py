#!/usr/bin/env python3
"""Does ROOT unlock the kernel-privileged RM AUX controls?

Validates the object tree + privilege with a read-only EDID fetch via
NV0073_CTRL_CMD_DP_AUXCH_I2C_TRANSFER_CTRL (0x73137C) -- the same control
the kernel itself uses for DRM i2c-over-AUX -- comparing byte-exact against
/sys/.../edid. Then ACK-scans the ISP slaves (0x20/7-bit = 0x40/8-bit).
Tunnel read/write only: nothing is ever written to the monitor except the
EDID-device offset pointer (as ddcutil/EDID reads do).
Run under sudo to test the privilege hypothesis.
"""
import ctypes, os, sys, fcntl, hashlib
sys.path.insert(0, str(__import__("pathlib").Path(__file__).resolve().parent))
from msi_isp import nvrm

print(f"euid={os.geteuid()} uid={os.getuid()}")
fd = os.open("/dev/nvidiactl", os.O_RDWR)

def esc(num, s):
    return fcntl.ioctl(fd, nvrm._IOWR(nvrm.NVESC["RM_ESCAPE_BASE"] + num - 1, ctypes.sizeof(s)), s)

# --- version + client ---
v = nvrm.NVVersion(major=1, minor=0); v.pNetName = ctypes.cast(b"", ctypes.c_void_p)
st = esc(nvrm.NVESC["RM_API_VERSION"], v) if False else \
     fcntl.ioctl(fd, nvrm._IOWR(0x2B, ctypes.sizeof(v)), v)
print("version:", getattr(v, 'status', '?'))

a = nvrm.NVOS21(hRoot=0, hObjectParent=0, hClass=0x0000, pAllocParms=None,
               paramsSize=0)
fcntl.ioctl(fd, nvrm._IOWR(nvrm.NVESC["RM_ALLOC"], ctypes.sizeof(a)), a)
hc = a.hObjectNew
print(f"client={hc:#x} status={a.status:#x}")
if not hc:
    raise SystemExit("no client")

# --- enumerate GPUs via GPU_ATTACH_INFO on client (as before) ---
# reuse nvrm.NvRM helpers if present
try:
    rm = nvrm.NvRM(fd, hc)
    print("helpers:", [m for m in dir(rm) if not m.startswith("_")])
except Exception as e:
    print("NvRM() ctor differs:", e)
