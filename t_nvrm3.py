#!/usr/bin/env python3
"""Test 0x73137c (NV0073_CTRL_CMD_DP_AUXCH_I2C_TRANSFER_CTRL) from userspace.

This is the *bulk I2C-over-DP-AUX* control the open kernel module itself
uses for DRM i2c adapters (osapi.c RmDpAuxI2CTransfer). Max 256 bytes.
addr field = 20-bit DP-aux I2C address word: device8<<16 | reg8<<8 | (n-1)
(0..127 devices; for a read we do offset-write then read, like the kernel).
Validator: read EDID from 0x50 and compare to /sys EDID (256B, byte-exact).
Read-only throughout: device 0x50 (EDID) only.
"""
import ctypes, os, sys, fcntl
sys.path.insert(0, "/home/eugene/monitor-fw")
from msi_isp import nvrm

NVESC = nvrm.NVESC

class A21(ctypes.Structure):
    _fields_ = [("hRoot", ctypes.c_uint32), ("hObjectParent", ctypes.c_uint32),
                ("hObjectNew", ctypes.c_uint32), ("hClass", ctypes.c_uint32),
                ("pAllocParms", ctypes.c_void_p), ("paramsSize", ctypes.c_uint32),
                ("status", ctypes.c_uint32)]

class AUXI2CParams(ctypes.Structure):
    _fields_ = [("subDeviceInstance", ctypes.c_uint32),
                ("displayId", ctypes.c_uint32),
                ("addr", ctypes.c_uint32),
                ("bWrite", ctypes.c_uint32),          # NvBool
                ("data", ctypes.c_uint8 * 256),
                ("size", ctypes.c_uint32)]

def build_tree():
    fd  = os.open('/dev/nvidiactl', os.O_RDWR)
    fdg = os.open('/dev/nvidia0', os.O_RDWR)          # must stay open (osIsGpuAccessible)
    def iod(esc, s, size=None):
        fcntl.ioctl(fd, nvrm._IOWR(esc, size or ctypes.sizeof(s)), s)
    v = nvrm.NVVersion(); v.cmd = 1; v.versionString = b"615.71.09"
    iod(NVESC["CHECK_VERSION"], v)
    a = A21(); a.hClass = 0
    iod(NVESC["RM_ALLOC"], a); hc = a.hObjectNew
    p0 = nvrm.NV0080Params(); p0.deviceId = 0
    a2 = A21(); a2.hRoot = hc; a2.hObjectParent = hc; a2.hClass = 0x80
    a2.pAllocParms = ctypes.cast(ctypes.byref(p0), ctypes.c_void_p)
    a2.paramsSize = ctypes.sizeof(p0)
    iod(NVESC["RM_ALLOC"], a2)
    if a2.status:
        raise SystemExit(f"device alloc failed {a2.status:#x}")
    a3 = A21(); a3.hRoot = hc; a3.hObjectParent = a2.hObjectNew; a3.hClass = 0x73
    iod(NVESC["RM_ALLOC"], a3)
    if a3.status:
        raise SystemExit(f"NV0073 alloc failed {a3.status:#x}")
    return fd, hc, a3.hObjectNew

def ctrl(fd, hc, hobj, cmd, params, psize):
    c = nvrm.NVOS54(); c.hClient = hc; c.hObject = hobj; c.cmd = cmd
    c.flags = 0
    c.params = ctypes.cast(ctypes.byref(params), ctypes.c_void_p)
    c.paramsSize = psize
    try:
        fcntl.ioctl(fd, nvrm._IOWR(NVESC["RM_CONTROL"], ctypes.sizeof(c)), c)
        return c.status
    except OSError as e:
        return f"oserr:{e.errno}"

def i2c_xfer(fd, hc, hd, did, dev8, offset, n, write=False, payload=b""):
    p = AUXI2CParams()
    p.displayId = did
    p.addr = (dev8 << 16) | (offset << 8) | ((max(n, 1) - 1) & 0xF)
    p.bWrite = 1 if write else 0
    for i, b in enumerate(payload[:256]):
        p.data[i] = b
    p.size = n
    st = ctrl(fd, hc, hd, 0x73137C, p, ctypes.sizeof(p))
    return st, bytes(p.data[:p.size if isinstance(p.size, int) else 0])

fd, hc, hd = build_tree()
print(f"tree ok client={hc:#x} disp={hd:#x}")

# candidate displayIds (RM-style 0xE0+head; kernel DRM uses its own shim)
CANDS = [0xE0, 0xE1, 0xE2, 0xE3, 0x0, 0x1, 0x2, 0x3]
for did in CANDS:
    # write offset 0 to EDID device 0x50 (8-bit 0xA0), then read 16 bytes
    st_w, _ = i2c_xfer(fd, hc, hd, did, 0xA0, 0x00, 1, write=True, payload=b"\x00")
    st_r, dat = i2c_xfer(fd, hc, hd, did, 0xA1, 0x00, 16)
    print(f"did={did:#04x}: wr={st_w if isinstance(st_w,str) else hex(st_w)} "
          f"rd={st_r if isinstance(st_r,str) else hex(st_r)} "
          f"data={dat[:8].hex() if dat else ''}")

ker = open('/sys/class/drm/card1-DP-1/edid','rb').read()
print("kernel EDID head:", ker[:8].hex())
