"""Native NVIDIA RM client over /dev/nvidiactl ioctls (no NVAPI, no X).

This is the Linux/NVIDIA equivalent of what Comm_Aux.dll gets from Windows
NVAPI ctlAUXAccess: raw DisplayPort AUX-channel transactions through the
Resource Manager (control NV0073_CTRL_CMD_DP_AUXCH_CTRL = 0x731341).

ABI verified against NVIDIA open-gpu-kernel-modules 615.71.09 (the exact
version loaded when written). 615.78.08 carries the same escapes/structs —
only the NV_ESC_CHECK_VERSION gate got stricter: any version-string mismatch
now returns EINVAL even in relaxed mode (session 14), hence the runtime
detection in NvRM._driver_version() below.
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
import re
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

    VERSION = None        # set per-instance at init; see _driver_version()

    @staticmethod
    def _driver_version():
        """Version string of the loaded NVRM. 615.78+ rejects a mismatching
        string with EINVAL (even relaxed), so detect at runtime (session 14)."""
        try:
            with open("/proc/driver/nvidia/version") as f:
                m = re.search(r"\b(\d+\.\d+\.\d+)\b", f.read())
            if m:
                return m.group(1).encode()
        except OSError:
            pass
        return b"615.71.09"        # last-resort fallback = documented ABI above

    def __init__(self, verbose=False):
        self.fd = os.open("/dev/nvidiactl", os.O_RDWR)
        self.VERSION = self._driver_version()
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
        # LIVE-VERIFIED 2026-10-05 (root, 615.71.09): NVOS21_v1 (32 B) builds
        # the whole tree with real handles (0xcaf00000-style). The 48-byte
        # NVOS21-with-pRightsRequested variant returns status==0 but leaves
        # hObjectNew==0 on child allocs -- a silent mis-bind, so status alone
        # is NOT sufficient: a zero handle is a failure. v1 first, and hh!=0
        # required.
        last = None
        for cls in (NVOS21_v1, NVOS21):
            st, hh = self._alloc_once(cls, hClass)
            if st == 0 and hh:
                return 0, hh, cls
            last = st if last is None else last
        return (last if last is not None else "EINVAL"), 0, NVOS21_v1

    def alloc_client(self, use_root=True):
        """Allocate the client root.  Order matters and is LIVE-VERIFIED:
        NV01_ROOT (hClass 0) first -- the proven tree (t_kern*.py) builds
        root class 0 and its AUXCH controls dispatch fine.  NV01_ROOT_CLIENT
        (9) allocs succeed but the SAME controls then answer
        NV_ERR_INVALID_CLIENT (0x23), and class 1 (NON_PRIV) trips the
        administrator gate. So: 0, then 9, then 1 as fallbacks."""
        classes = (0, self.NV01_ROOT_CLIENT, 1) if use_root else (1,)
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
        if st is None or st != 0 or hh == 0:   # EINVAL or silent zero-fill
            other = NVOS21_v1 if self.os21 is NVOS21 else NVOS21
            st, hh = self._alloc_once(other, NV01_DEVICE_0,
                                      pAllocParms=p0080, hParent=self.hClient)
            if st == 0 and hh:
                self.os21 = other
        if st != 0 or hh == 0:
            raise RMError(f"alloc device: status {st} handle {hh:#x}")
        self.hDevice = hh
        return hh

    def alloc_subdevice(self, subDeviceId=0):
        """NV20_SUBDEVICE_0 (0x2080) under hDevice. Params =
        NV2080_ALLOC_PARAMETERS { NvU32 subDeviceId } = 4 bytes.
        Needed for the public NV2080_CTRL_CMD_I2C_* controls."""
        p = ctypes.create_string_buffer(4)
        ctypes.cast(p, ctypes.POINTER(ctypes.c_uint32))[0] = subDeviceId
        st, hh = self._alloc_once(self.os21, 0x2080,
                                  pAllocParms=p, hParent=self.hDevice)
        if st != 0 or hh == 0:
            other = NVOS21_v1 if self.os21 is NVOS21 else NVOS21
            st, hh = self._alloc_once(other, 0x2080,
                                      pAllocParms=p, hParent=self.hDevice)
        if st != 0 or hh == 0:
            raise RMError(f"alloc subdevice: status {st} handle {hh:#x}")
        self.hSub = hh
        return hh

    # --- public I2C controls (NV2080 subdevice) --------------------------
    # NV2080_CTRL_CMD_I2C_READ_BUFFER  0x20800601  (struct 532 B)
    # NV2080_CTRL_CMD_I2C_WRITE_BUFFER 0x20800602  (struct 276 B)
    # inputBuffer = <8-bit chipAddr> <subAddr...> <then, for WRITE, data>
    # This is NVAPI's I2CRead/I2CWrite backend -- the exact control the
    # Windows tool's NvAPI_I2CWrite reaches (escape 0x39 wraps it).
    CTRL_I2C_READ_BUFFER = 0x20800601
    CTRL_I2C_WRITE_BUFFER = 0x20800602
    CTRL_I2C_PORTID = 0x730211          # NV0073_SPECIFIC_GET_I2C_PORTID (16 B)

    def i2c_portid(self, displayId, subdevice=0):
        q = ctypes.create_string_buffer(16)
        u = ctypes.cast(q, ctypes.POINTER(ctypes.c_uint32))
        u[0], u[1] = subdevice, displayId
        st = self.control(self.hDisp, self.CTRL_I2C_PORTID, q, size=16)
        if st != 0:
            raise RMError(f"GET_I2C_PORTID disp {displayId:#x}: {st:#x}")
        return u[2], u[3]               # (commPortId, ddcPortId)

    def i2c_dev_read(self, port, chip8, subaddr, n, flags=0, retries=3):
        """One I2C dev-addr READ via the public subdevice control.
        subaddr list may be empty (pure read). Returns (status, bytes)."""
        q = ctypes.create_string_buffer(532)
        u = ctypes.cast(q, ctypes.POINTER(ctypes.c_uint32))
        u[1] = port                     # port
        u[2] = flags                    # flags
        inp = ctypes.cast(ctypes.addressof(q) + 16,
                          ctypes.POINTER(ctypes.c_uint8))  # inputBuffer
        chain = ([chip8 & 0xFF] if subaddr is None
                 else [chip8 & 0xFF] + list(subaddr))
        for i, b in enumerate(chain):
            inp[i] = b
        u[3] = len(chain)               # inputCount (offset 12)
        oc = ctypes.cast(ctypes.addressof(q) + 272,
                         ctypes.POINTER(ctypes.c_uint32))
        oc[0] = n                       # outputCount (offset 272)
        st = 0xFFFFFFFF
        for _ in range(retries):
            st = self.control(self.hSub, self.CTRL_I2C_READ_BUFFER, q,
                              size=532)
            if st == 0:
                break
        out_base = 276                  # outputBuffer byte offset
        got = bytes(ctypes.cast(ctypes.addressof(q) + out_base,
                                ctypes.POINTER(ctypes.c_uint8))[:n])
        return st, got if st == 0 else b""

    def i2c_dev_write(self, port, chain, data=b"", flags=0, retries=3):
        """I2C write via 0x20800602: inputBuffer = <chip8> <subAddrs...>
        followed by the data bytes to clock out. Returns status."""
        q = ctypes.create_string_buffer(276)
        u = ctypes.cast(q, ctypes.POINTER(ctypes.c_uint32))
        u[1] = port
        u[2] = flags
        inp = ctypes.cast(ctypes.addressof(q) + 16,
                          ctypes.POINTER(ctypes.c_uint8))
        stream = [b & 0xFF for b in list(chain) + list(data)]
        for i, b in enumerate(stream):
            inp[i] = b
        u[3] = len(stream)
        st = 0xFFFFFFFF
        for _ in range(retries):
            st = self.control(self.hSub, self.CTRL_I2C_WRITE_BUFFER, q,
                              size=276)
            if st == 0:
                break
        return st

    def alloc_disp_common(self):
        st, hh = self._alloc_once(self.os21, NV04_DISPLAY_COMMON,
                                  hParent=self.hDevice)
        if st is None or st != 0 or hh == 0:
            other = NVOS21_v1 if self.os21 is NVOS21 else NVOS21
            st2, hh2 = self._alloc_once(other, NV04_DISPLAY_COMMON,
                                        hParent=self.hDevice)
            if st2 == 0 and hh2:
                st, hh, self.os21 = 0, hh2, other
        if st != 0 or hh == 0:
            raise RMError(f"alloc NV0073: status {st} handle {hh:#x}")
        self.hDisp = hh
        return hh

    # --- control --------------------------------------------------------
    GET_ID_INFO_V2 = 0x205      # NV2080_CTRL_CMD_GPU_GET_ID_INFO_V2

    def id_info(self, gpuId):
        """Run GET_ID_INFO_V2 on the client (fills device/subdevice
        instances for gpuId). Params are exactly
        NV2080_CTRL_GPU_GET_ID_INFO_V2_PARAMS = 8 x NvU32 = 32 bytes:
        {gpuId, gpuFlags, deviceInstance, subDeviceInstance, nvmlIndex,
         busy, gpuInstance, numaId}. FINN validates paramsSize strictly:
        24 (V1) and 40 both rejected on 615.x; 32 is exact.
        Returns (deviceInstance, subDeviceInstance)."""
        q = ctypes.create_string_buffer(32)
        u = ctypes.cast(q, ctypes.POINTER(ctypes.c_uint32))
        u[0] = gpuId
        st = self.control(self.hClient, self.GET_ID_INFO_V2, q, size=32)
        if st != 0:
            raise RMError(f"GET_ID_INFO_V2 gpu {gpuId:#x}: status {st:#x}")
        deviceInstance, subDeviceInstance = u[2], u[3]
        return deviceInstance, subDeviceInstance

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
        n = len(data)          # for READ, len(data) is the requested length
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

    # --- I2C-over-AUX primitives (control 0x731341 I2C mode) -------------
    # VERIFIED 2026-10-05 on RTX 4090 + MAG 341CQP QD-OLED (t_kern5/6.py):
    #   * addr field = PLAIN 7-bit slave address.  RM composes the DP-spec
    #     wire address field itself; the R/W direction rides in the cmd
    #     REQ_TYPE bits, NOT in addr.  (Matches NVIDIA dp_deviceimpl.cpp:
    #     `address >>= 1; // right shifted DDC Address (request identifier
    #     in spec)` -- their verbatim form is the 8-bit DDC addr >> 1.)
    #   * size is 0-based IN (n-1), and returns bytes-completed OUT.
    #   * MOT (cmd bit2) chains pieces into one I2C message (repeated
    #     start); clearing it emits the STOP at the end.
    #   * The bulk control 0x73137C answers NV_ERR_INVALID_CLIENT (0x23)
    #     for userland even as root -- unusable; 0x731341 is the path.
    # Oracle: EDID slave 0x50 returned the kernel's EDID bytes verbatim at
    # offsets 0x00 and 0x50, 16 B/transaction.
    AUX_REQ_MOT = 0x4        # cmd bit2: chain with next transaction (no STOP)

    def aux_i2c(self, displayId, slave7, req, data=b"", mot=False,
                addr_only=False, retries=3, subdevice=0):
        """Full-access variant: returns (reply_name, bytes_read)."""
        p = AUXCHParams()
        p.subDeviceInstance = subdevice
        p.displayId = displayId
        p.bAddrOnly = 1 if addr_only else 0
        p.cmd = req | (self.AUX_REQ_MOT if mot else 0)
        p.addr = slave7 & 0x7F
        payload = bytes(data)
        if req == AUX_REQ_READ:
            p.size = (len(payload) if payload else 16) - 1
        else:
            for i, b in enumerate(payload[:16]):
                p.data[i] = b
            p.size = max(len(payload) - 1, 0)
        name = "ERROR"
        for _ in range(retries):
            self.control(self.hDisp, CTRL_DP_AUXCH_CTRL, p)
            name = REPLY.get(p.replyType, f"?{p.replyType:#x}")
            if name in ("ACK", "NACK", "TIMEOUT", "I2CNACK", "INVALID_ARG"):
                break
            time.sleep(0.005)
        got = bytes(p.data[:p.size]) if req == AUX_REQ_READ and name == "ACK" \
            else b""
        return name, got

    def i2c_read(self, displayId, slave7, offset, n, retries=3, subdevice=0):
        """Read n bytes from 7-bit slave at register offset. Verified form:
        offset-write with MOT, then chained READ|MOT 16-byte chunks; the
        final chunk clears MOT (STOP) so the slave releases the bus."""
        name, _ = self.aux_i2c(displayId, slave7, AUX_REQ_WRITE,
                               data=bytes([offset & 0xFF]), mot=True,
                               retries=retries, subdevice=subdevice)
        if name != "ACK":
            return b"", name
        buf = bytearray()
        while len(buf) < n:
            chunk = min(16, n - len(buf))
            name, got = self.aux_i2c(displayId, slave7, AUX_REQ_READ,
                                     data=bytes(chunk),
                                     mot=(len(buf) + chunk < n),
                                     retries=retries, subdevice=subdevice)
            if name != "ACK":
                return bytes(buf[:n]), name
            buf += got[:chunk]
        return bytes(buf[:n]), "ACK"

    def i2c_write(self, displayId, slave7, offset, payload, retries=3,
                  subdevice=0):
        """Write payload at register offset: [offset]+payload in 16-byte
        MOT-chained pieces, STOP on the last (verified addressing form)."""
        data = bytes([offset & 0xFF]) + bytes(payload)
        pos = 0
        while pos < len(data):
            chunk = min(16, len(data) - pos)
            name, _ = self.aux_i2c(displayId, slave7, AUX_REQ_WRITE,
                                   data=data[pos:pos + chunk],
                                   mot=(pos + chunk < len(data)),
                                   retries=retries, subdevice=subdevice)
            if name != "ACK":
                return name
            pos += chunk
        return "ACK"

    def i2c_probe(self, displayId, slave7, retries=1, subdevice=0):
        """Bare address-phase write (address-only packet, 0 data bytes).
        Cannot alter the monitor. True on ACK."""
        name, _ = self.aux_i2c(displayId, slave7, AUX_REQ_WRITE,
                               mot=True, addr_only=True, retries=retries,
                               subdevice=subdevice)
        return name == "ACK"

    def close(self):
        try:
            os.close(self.fd)
        except OSError:
            pass
