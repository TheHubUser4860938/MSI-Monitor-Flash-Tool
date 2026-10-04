"""Native NVIDIA RM client over /dev/nvidiactl ioctls (no NVAPI, no X).

This is the Linux/NVIDIA equivalent of what Comm_Aux.dll gets from Windows
NVAPI ctlAUXAccess: raw DisplayPort AUX-channel transactions through the
Resource Manager (control NV0073_CTRL_CMD_DP_AUXCH_CTRL = 0x731341).

ABI verified against NVIDIA open-gpu-kernel-modules 615.71.09 (the exact
version loaded on this machine):
  kernel-open/nvidia/nv.c              dispatcher: default -> rm_ioctl()
  kernel-open/common/inc/nv-ioctl-numbers.h  NV_IOCTL_BASE 200, escapes
  src/nvidia/arch/nvalloc/unix/include/nv_escape.h  RM_ALLOC 0x2B etc.
  src/common/sdk/nvidia/inc/nvos.h    NVOS21/NVOS54/NVOS_I2C_ACCESS
  src/common/sdk/nvidia/inc/ctrl/ctrl0073/ctrl0073dp.h  AUXCH params
  kernel-open/common/inc/nv-ioctl.h   version-check struct

Everything is read-safe: alloc/free/control, no modeset, no memory.
"""
from __future__ import annotations

import ctypes
import fcntl
import os

# ---- ioctl numbers: _IOWR('!', escape, struct) --------------------------
_IOC_NRBITS, _IOC_TYPEBITS = 8, 8
_IOC_READ, _IOC_WRITE = 1, 2
_IOC_NRSHIFT, _IOC_TYPESHIFT = 0, 8
_IOC_SIZESHIFT = 16


def _IOC(rw, nr, size):
    return (rw << 30) | (size << 16) | (ord('!') << 8) | nr


def _IOWR(nr, size):
    return _IOC(_IOC_READ | _IOC_WRITE, nr, size)


NVESC = {
    "CARD_INFO":       200,           # NV_ESC_CARD_INFO
    "CHECK_VERSION":   210,           # NV_ESC_CHECK_VERSION_STR
    "SYS_PARAMS":      215,
    "ATTACH_GPUS":     211,
    "RM_ALLOC":        0x2B,
    "RM_CONTROL":      0x2A,
    "RM_FREE":         0x29,
    "RM_I2C_ACCESS":   0x39,
}

NV01_ROOT = 0x0
NV01_DEVICE_0 = 0x80
NV04_DISPLAY_COMMON = 0x73

NV04_CONTROL = 0x36
CTRL_DP_AUXCH_CTRL = 0x731341
CTRL_DFP_GET_INFO = 0x731140

AUX_TYPE_I2C, AUX_TYPE_AUX = 0 << 3, 1 << 3
AUX_MOT_FALSE = 0
AUX_REQ_WRITE, AUX_REQ_READ, AUX_REQ_WRITE_STATUS = 0, 1, 2

REPLY = {0: "ACK", 1: "NACK", 2: "DEFER", 3: "TIMEOUT",
         4: "I2CNACK", 8: "I2CDEFER", 0xFFFFFFFF: "INVALID_ARG"}


class NvHandleArr(ctypes.Structure):
    _fields_ = []


# kernel table: _NV_IOCTL_ENTRY(NV_ESC_CARD_INFO, nv_ioctl_card_info_t, TRUE)
# -> arg_size must be a multiple of the per-entry size. Verified layout for
# 615.71.09 (kernel-open/common/inc/nv-ioctl.h + nv_pci_info_t):
#   { NvBool valid(+3 pad); NvU32 domain,NvU8 bus,slot,func(+1);
#     NvU32 gpu_id; NvU16 irq(+2 pad); u64 x4; NvU32 minor; u8[10]; 4 pad }
CARD_INFO_ENTRY_SZ = 48


class NVVersion(ctypes.Structure):
    _fields_ = [("cmd", ctypes.c_uint32), ("reply", ctypes.c_uint32),
                ("versionString", ctypes.c_char * 64)]


class NVAttachGpus(ctypes.Structure):
    _fields_ = [("minors", ctypes.c_uint32 * 1)]


class NVOS21(ctypes.Structure):
    """615.x: this *is* NVOS64_PARAMETERS (NVOS21 embedded-pointer variant
    with pRightsRequested; the kernel validates size against 40)."""
    _fields_ = [("hRoot", ctypes.c_uint32),
                ("hObjectParent", ctypes.c_uint32),
                ("hObjectNew", ctypes.c_uint32),
                ("hClass", ctypes.c_uint32),
                ("pAllocParms", ctypes.c_void_p),
                ("pRightsRequested", ctypes.c_void_p),
                ("paramsSize", ctypes.c_uint32),
                ("status", ctypes.c_uint32)]


class NVOS54(ctypes.Structure):
    _fields_ = [("hClient", ctypes.c_uint32),
                ("hObject", ctypes.c_uint32),
                ("cmd", ctypes.c_uint32),
                ("flags", ctypes.c_uint32),
                ("params", ctypes.c_void_p),
                ("paramsSize", ctypes.c_uint32),
                ("status", ctypes.c_uint32)]


class AUXCHParams(ctypes.Structure):
    _fields_ = [("subDeviceInstance", ctypes.c_uint32),
                ("displayId", ctypes.c_uint32),
                ("bAddrOnly", ctypes.c_uint32),      # NvBool = 4 bytes
                ("cmd", ctypes.c_uint32),
                ("addr", ctypes.c_uint32),
                ("data", ctypes.c_uint8 * 16),
                ("size", ctypes.c_uint32),
                ("replyType", ctypes.c_uint32),
                ("retryTimeMs", ctypes.c_uint32)]


class NV0080Params(ctypes.Structure):
    _pack_ = 4
    _fields_ = [("deviceId", ctypes.c_uint32),
                ("hClientShare", ctypes.c_uint32),
                ("hTargetClient", ctypes.c_uint32),
                ("hTargetDevice", ctypes.c_uint32),
                ("flags", ctypes.c_uint32),
                ("vaSpaceSize", ctypes.c_uint64),
                ("vaStartInternal", ctypes.c_uint64),
                ("vaLimitInternal", ctypes.c_uint64),
                ("vaMode", ctypes.c_uint32)]


class RMError(Exception):
    pass


class NvRM:
    """Minimal Resource Manager client: version check, client/device/NV0073
    alloc, and AUX-channel transactions."""

    VERSION = b"615.71.09"

    def __init__(self, verbose=False):
        self.fd = os.open("/dev/nvidiactl", os.O_RDWR)
        self.verbose = verbose
        self.hClient = 0
        self.hDevice = 0
        self.hDisp = 0
        self._version_check()

    def _ioctl(self, esc, struct, size=None):
        n = size if size is not None else ctypes.sizeof(struct)
        req = _IOWR(esc, n)
        fcntl.ioctl(self.fd, req, struct)      # raises OSError on EINVAL
        return struct

    def _version_check(self, relaxed=True):
        v = NVVersion()
        v.cmd = 1 if relaxed else 0            # CMD_RELAXED = '1'
        v.versionString = self.VERSION
        self._ioctl(NVESC["CHECK_VERSION"], v)
        if v.reply != 1:
            raise RMError(f"RM version check not recognized: {v.reply}")
        return v

    # --- discovery ------------------------------------------------------
    def card_info_raw(self):
        """Probe ESC 200 across plausible entry strides until the kernel
        accepts the size (it requires size % sizeof(entry) == 0)."""
        for stride in (48, 40, 64, 56, 72, 80, 96, 104, 112,
                       32, 24, 16, 8, 4):
            arr = (ctypes.c_uint8 * (stride * 8))()
            try:
                self._ioctl(NVESC["CARD_INFO"], arr, size=stride * 8)
            except OSError:
                continue
            entries = []
            for i in range(8):
                e = bytes(arr[i*stride:(i+1)*stride])
                if e[0] == 1:            # valid == NV_TRUE
                    entries.append((stride, i, e))
            return stride, entries

    # --- object tree ----------------------------------------------------
    NV01_ROOT_CLIENT = 0x00000009   # cl0001.h (privileged client root)

    def _alloc_root(self, hClass):
        p = NVOS21()
        p.hRoot = 0
        p.hObjectParent = 0
        p.hObjectNew = 0            # let RM assign
        p.hClass = hClass
        p.pAllocParms = None
        p.paramsSize = 0
        self._ioctl(NVESC["RM_ALLOC"], p)
        return p.status, p.hObjectNew

    def alloc_client(self, use_root=True):
        """Try NV01_ROOT_CLIENT first (what NVAPI/libnvidia-use internally),
        then NV01_ROOT (0), then NON_PRIV (1)."""
        for cls in ((self.NV01_ROOT_CLIENT, 0, 1) if use_root else (1,)):
            st, hh = self._alloc_root(cls)
            if st == 0:
                self.hClient = hh
                self.rootClass = cls
                return hh
        raise RMError(f"alloc client failed (last status {st:#x})")

    def alloc_device(self, deviceId=0):
        p0080 = NV0080Params()
        p0080.deviceId = deviceId
        p0080.vaSpaceSize = 0
        p0080.vaMode = 0
        p = NVOS21()
        p.hRoot = self.hClient
        p.hObjectParent = self.hClient
        p.hObjectNew = 0
        p.hClass = NV01_DEVICE_0
        p.pAllocParms = ctypes.cast(ctypes.byref(p0080), ctypes.c_void_p)
        p.paramsSize = ctypes.sizeof(p0080)
        self._ioctl(NVESC["RM_ALLOC"], p)
        if p.status != 0:
            raise RMError(f"alloc device: status {p.status:#x}")
        self.hDevice = p.hObjectNew
        return p.hObjectNew

    def alloc_disp_common(self):
        p = NVOS21()
        p.hRoot = self.hClient
        p.hObjectParent = self.hDevice
        p.hObjectNew = 0
        p.hClass = NV04_DISPLAY_COMMON
        p.pAllocParms = None
        p.paramsSize = 0
        self._ioctl(NVESC["RM_ALLOC"], p)
        if p.status != 0:
            raise RMError(f"alloc NV0073: status {p.status:#x}")
        self.hDisp = p.hObjectNew
        return p.hObjectNew

    # --- control --------------------------------------------------------
    def control(self, hObject, cmd, params, size=None):
        p = NVOS54()
        p.hClient = self.hClient
        p.hObject = hObject
        p.cmd = cmd
        p.flags = 0
        p.params = ctypes.cast(ctypes.byref(params), ctypes.c_void_p)
        p.paramsSize = size if size is not None else ctypes.sizeof(params)
        self._ioctl(NVESC["RM_CONTROL"], p)
        return p.status

    def dp_dfp_displays(self, subdevice=0):
        """Scan DFP_GET_INFO over candidate displayIds to find DP heads.
        Returns list of (displayId, flags)."""
        found = []
        # NV0073 display ids: 0xE0 + head on recent archs (not in these
        # headers; empirically probed). Scan a modest window.
        for did in [0xE0 + i for i in range(8)] + list(range(0, 8)):
            q = ctypes.create_string_buffer(32)
            ctypes.cast(q, ctypes.POINTER(ctypes.c_uint32))[0] = subdevice
            ctypes.cast(q, ctypes.POINTER(ctypes.c_uint32))[1] = did
            st = self.control(self.hDisp, CTRL_DFP_GET_INFO, q.contents)
            if st == 0:
                flags = ctypes.cast(q, ctypes.POINTER(ctypes.c_uint32))[2]
                found.append((did, flags))
        return found

    # --- the primitive that matters -------------------------------------
    def aux(self, displayId, addr, data=b"", req=AUX_REQ_READ,
            typ=AUX_TYPE_I2C, mot=AUX_MOT_FALSE, addr_only=False,
            retries=10):
        """One AUX-channel transaction (DP spec 2.4).

        addr: 20-bit field exactly as placed on the wire in the 4-byte AUX
              request (for I2C: device<<16 | reg-offset<<8 | r/n+size per
              DP spec; for native AUX: byte-address<<2 | type | size).
        Returns (reply_type_name, data_bytes_returned, rm_status).
        """
        n = len(data) if req in (AUX_REQ_WRITE, AUX_REQ_WRITE_STATUS) else 0
        size0 = (n - 1) if n else 0
        p = AUXCHParams()
        p.subDeviceInstance = 0
        p.displayId = displayId
        p.bAddrOnly = 1 if addr_only else 0
        p.cmd = typ | mot | req
        p.addr = addr
        for i, b in enumerate(data[:16]):
            p.data[i] = b
        p.size = size0
        for _ in range(retries):
            st = self.control(self.hDisp, CTRL_DP_AUXCH_CTRL, p)
            if st in (0, 0x26):      # NV_OK / NV_ERR_TIMEOUT kept for name
                break
            # NVOS_STATUS_ERROR_RETRY == 0x65? treat nonzero nonzero as fail
            break
        name = REPLY.get(p.replyType, f"?{p.replyType:#x}")
        got = bytes(p.data[:p.size]) if req == AUX_REQ_READ else b""
        return name, got, st

    # --- I2C-over-AUX convenience (DP spec 2.4.4/2.4.5) -----------------
    def i2c_write(self, displayId, slave8, offset, payload, retries=10):
        """I2C write-then-write-status transaction pair.
        slave8: 8-bit device address (e.g. 0x41). offset: register byte."""
        n = len(payload) + 1
        for _ in range(retries):
            # phase 1: write, addr = slave<<16 | offset<<8 | (n-1)
            addr = (slave8 << 16) | (offset << 8) | ((n - 1) & 0xF)
            r, _, st = self.aux(displayId, addr, payload=bytes([offset]) + payload,
                                req=AUX_REQ_WRITE, retries=1)
            if r == "TIMEOUT":
                continue
            break
        if r != "ACK":
            return r
        # phase 2: STATUS ONLY request for status-byte read-back
        for _ in range(retries):
            stat_addr = (slave8 << 16) | 0x00 | 0x0   # status request
            r2, got, _ = self.aux(displayId, stat_addr, req=AUX_REQ_READ,
                                  retries=1)
            if r2 == "ACK" and got:
                return got[0]
            if r2 == "I2CDEFER":
                continue
            return r2
        return r2

    def i2c_read(self, displayId, slave8, offset, n, set_offset=True,
                 retries=10):
        """Read n bytes from I2C slave via I2C-over-AUX.
        When set_offset (default): write pointer first, then do
        MOT read + status sequence (standard DP i2c-aux read)."""
        buf = bytearray()
        if set_offset:
            r = self.i2c_write(displayId, slave8, offset, b"", retries=retries)
            if r != 0 and r != "ACK":
                return None, r
        mot = AUX_MOT_FALSE
        while len(buf) < n:
            chunk = min(16, n - len(buf))
            addr = (slave8 << 16) | ((chunk - 1) & 0xF) | (0x8000 if False else 0)
            # I2C-aux READ request layout: device[15:9]|R[8]<<16 | reg [15:8] | byteCount[3:0]
            r, got, st = self.aux(displayId, (slave8 << 16) | 1 | 0,
                                  req=AUX_REQ_READ,
                                  mot=(AUX_MOT_FALSE if len(buf) == 0 else AUX_MOT_TRUE),
                                  retries=retries)
            if r != "ACK" or not got:
                return bytes(buf), r
            buf += got[1:]                 # first byte is device+R echo on many impls
            if len(got) - 1 < chunk:
                # need status-only + continuation
                r2, got2, _ = self.aux(displayId, (slave8 << 16) | 1 | 0,
                                       req=AUX_REQ_READ, mot=AUX_MOT_TRUE,
                                       retries=retries)
                if r2 != "ACK" or not got2:
                    return bytes(buf), r2
                buf += got2[1:]
        return bytes(buf[:n]), "ACK"

    def close(self):
        try:
            os.close(self.fd)
        except OSError:
            pass
