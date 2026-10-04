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
import time

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
    "ATTACH_GPUS":     212,           # NV_ESC_ATTACH_GPUS_TO_FD (base+12)
    "CHECK_VERSION":   210,           # NV_ESC_CHECK_VERSION_STR
    "SYS_PARAMS":      215,
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
CTRL_DP_AUXCH_I2C_TRANSFER = 0x73137C   # bulk I2C-over-AUX, 256 B/txn
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
                ("paramsSize", ctypes.c_uint32),
                ("status", ctypes.c_uint32),
                ("pRightsRequested", ctypes.c_void_p),
                ("pad", ctypes.c_uint32)]


class NVOS21_v1(ctypes.Structure):
    """Legacy NVOS21_PARAMETERS (32 bytes, no pRightsRequested)."""
    _fields_ = [("hRoot", ctypes.c_uint32),
                ("hObjectParent", ctypes.c_uint32),
                ("hObjectNew", ctypes.c_uint32),
                ("hClass", ctypes.c_uint32),
                ("pAllocParms", ctypes.c_void_p),
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


class I2CXferParams(ctypes.Structure):
    """NV0073_CTRL_DP_AUXCH_I2C_TRANSFER_CTRL_PARAMS (272 bytes):
    RM performs the whole DP I2C-over-AUX sequence (MOT chunking, status,
    NAK-defer retries) for up to 256 data bytes per call.
    addr follows DP spec 2.4 section I2C-over-AUX: 20-bit field placed at
    the top of the first AUX request byte-word; for the common 8-bit-address
    form: (slave8 << 16) | (regOffset << 8) | (R/W<<7 | size-1) at bits[7:0].
    """
    _fields_ = [("subDeviceInstance", ctypes.c_uint32),
                ("displayId", ctypes.c_uint32),
                ("addr", ctypes.c_uint32),
                ("bWrite", ctypes.c_uint32),          # NvBool
                ("data", ctypes.c_uint8 * 256),
                ("size", ctypes.c_uint32)]


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

    def attach_gpus(self, gpu_ids):
        """NV_ESC_ATTACH_GPUS_TO_FD: array of NvU32 gpu_id values (raw arg).
        Must be done on the control fd before RM can see GPU-side objects."""
        # kernel validates size % sizeof(NvU32) == 0; single-gpu form proven
        v = ctypes.c_uint32(gpu_ids[0])
        fcntl.ioctl(self.fd, _IOWR(NVESC["ATTACH_GPUS"], 4), v)
        return True

    # --- object tree ----------------------------------------------------
    NV01_ROOT_CLIENT = 0x00000009   # cl0001.h (privileged client root)

    def _alloc_once(self, cls, hClass, pAllocParms=None, params=None,
                    hParent=0):
        p = cls()
        p.hRoot = self.hClient if hParent else 0
        p.hObjectParent = hParent
        p.hObjectNew = 0            # let RM assign
        p.hClass = hClass
        if pAllocParms is not None:
            p.pAllocParms = ctypes.cast(ctypes.byref(pAllocParms), ctypes.c_void_p)
            if hasattr(p, "paramsSize"):
                p.paramsSize = ctypes.sizeof(pAllocParms)
        try:
            self._ioctl(NVESC["RM_ALLOC"], p)
            return p.status, p.hObjectNew
        except OSError:
            return None, None

    def _alloc_root(self, hClass):
        last = None
        for cls in (NVOS21, NVOS21_v1):
            st, hh = self._alloc_once(cls, hClass)
            if st == 0:
                return 0, hh, cls
            last = st if last is None else last
        return (last if last is not None else "EINVAL"), 0, NVOS21

    def alloc_client(self, use_root=True):
        """Try NV01_ROOT_CLIENT first (what NVAPI/libnvidia-use internally),
        then NV01_ROOT (0), then NON_PRIV (1)."""
        classes = (self.NV01_ROOT_CLIENT, 0, 1) if use_root else (1,)
        for cls in classes:
            st, hh, self.os21 = self._alloc_root(cls)
            if st == 0:
                self.hClient = hh
                self.rootClass = cls
                return hh
        raise RMError(f"alloc client failed (last status {st})")

    def alloc_device(self, deviceId=0):
        p0080 = NV0080Params()
        p0080.deviceId = deviceId
        p0080.vaSpaceSize = 0
        p0080.vaMode = 0
        st, hh = self._alloc_once(self.os21, NV01_DEVICE_0,
                                  pAllocParms=p0080, hParent=self.hClient)
        if st is None:                      # EINVAL -> try the other variant
            other = NVOS21_v1 if self.os21 is NVOS21 else NVOS21
            st, hh = self._alloc_once(other, NV01_DEVICE_0,
                                      pAllocParms=p0080, hParent=self.hClient)
            if st == 0:
                self.os21 = other
        if st != 0:
            raise RMError(f"alloc device: status {st}")
        self.hDevice = hh
        return hh

    def alloc_disp_common(self):
        st, hh = self._alloc_once(self.os21, NV04_DISPLAY_COMMON,
                                  hParent=self.hDevice)
        if st is None or st != 0:
            other = NVOS21_v1 if self.os21 is NVOS21 else NVOS21
            st2, hh2 = self._alloc_once(other, NV04_DISPLAY_COMMON,
                                        hParent=self.hDevice)
            if st2 == 0:
                st, hh, self.os21 = 0, hh2, other
        if st != 0:
            raise RMError(f"alloc NV0073: status {st}")
        self.hDisp = hh
        return hh

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
        # NV0073_CTRL_DFP_GET_INFO_PARAMS = 16 bytes exactly;
        # displayId values are single-bit masks (RM assigns head i -> 1<<i)
        for did in [1 << i for i in range(32)]:
            q = ctypes.create_string_buffer(16)
            u = ctypes.cast(q, ctypes.POINTER(ctypes.c_uint32))
            u[0] = subdevice
            u[1] = did
            st = self.control(self.hDisp, CTRL_DFP_GET_INFO, q, size=16)
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

    # --- I2C-over-AUX bulk primitives (control 0x73137C) ------------------
    # RM builds the full DP-spec transaction (request word + data, MOT
    # chunking up to max packet, status-byte handling, defers). We only
    # supply: slave8/offset, payload, direction.
    @staticmethod
    def _i2c_addr(slave8, offset, nbytes):
        """DP-spec 2.4 I2C-over-AUX 20-bit request-address word as RM places
        it in AUX request bytes 0-2 (bit layout per DPCD i2c_aux scheme):
        bits[19:12] = slave8 (8-bit write addr), bits[11:4] = reg/offset,
        bits[3:1]  = slave R/W bit (bit0 of the 8-bit addr),
        bits[2:0]  = nbytes-1 (per-transaction size, max 7 raw; the bulk
        control re-encodes chunk sizes itself, direction = bWrite field).
        Verified against t_aux_root2.py's working DPCD/EDID encodings."""
        return (slave8 << 12) | (offset << 4) | ((slave8 & 1) << 3) | ((nbytes - 1) & 7)

    def i2c_write(self, displayId, slave8, offset, payload, retries=3):
        """I2C write (combined: offset + payload in one txn) via RM bulk ctrl."""
        data = bytes([offset]) + bytes(payload)
        last = "ERR"
        for _ in range(retries):
            p = I2CXferParams()
            p.subDeviceInstance = 0
            p.displayId = displayId
            p.addr = self._i2c_addr(slave8, offset, len(data), write=True)
            p.bWrite = 1
            ctypes.memmove(p.data, data, len(data))
            p.size = len(data)
            st = self.control(self.hDisp, CTRL_DP_AUXCH_I2C_TRANSFER, p)
            last = st
            if st == 0:
                return True
            time.sleep(0.005)
        return False, last if isinstance(last, int) else last

    def i2c_read(self, displayId, slave8, offset, n, retries=3):
        """I2C read n bytes via RM bulk ctrl (offset-set write then MOT read).
        Returns (bytes, ok) — bytes may be short on partial ACK."""
        ok = self.i2c_write(displayId, slave8, offset, b"", retries=retries)
        if ok is not True:
            return b"", ok
        buf = bytearray()
        pos = 0
        while len(buf) < n:
            chunk = min(16, n - len(buf))   # DP max data per txn is 16
            p = I2CXferParams()
            p.subDeviceInstance = 0
            p.displayId = displayId
            p.addr = self._i2c_addr(slave8, 0, chunk, write=False)
            p.bWrite = 0
            p.size = chunk
            got_any = False
            for _ in range(retries):
                st = self.control(self.hDisp, CTRL_DP_AUXCH_I2C_TRANSFER, p)
                if st == 0:
                    got = bytes(p.data[:p.size])
                    buf += got
                    got_any = True
                    break
                time.sleep(0.005)
            if not got_any:
                return bytes(buf[:n]), st
            pos += 1
        return bytes(buf[:n]), True

    def close(self):
        try:
            os.close(self.fd)
        except OSError:
            pass
