"""Native DP AUX access via DRM (the Linux equivalent of NVAPI ctlAUXAccess).

Kernel API (include/uapi/drm/drm.h):
  struct drm_dp_i2c_msg  { u16 slave_addr; u16 flags; u16 len; u16 retry; u64 buf; }  (16B)
  struct drm_dp_aux      { u32 connector_type; u8  adapt_num; u32 flags;
                           struct drm_dp_i2c_msg *msg; u32 num_msgs; u32 aux_handle; } (32B)
  DRM_IOCTL_DP_AUX = _IOWR('d', 91, struct drm_dp_aux)
                       = 0xC020645B on x86_64

Connector type 0x00 = DisplayPort. aux_handle = 0 -> master.
This is exactly the channel the Realtek Comm_Aux.dll drives through NVAPI's
ctlAUXAccess (`I2C Over Aux`), including non-standard slave addresses.
"""

import ctypes
import fcntl
import os

DRM_IOCTL_MODE_INIT = 0x000064A2          # _IO('d', 0xA2)
DRM_IOCTL_MODE_GETRESOURCES = 0xC05864A0  # _IOWR('d', 0xA0, 88B)
DRM_IOCTL_MODE_GETCONNECTOR = 0xC04864A7  # _IOWR('d', 0xA7, 72B)
DRM_IOCTL_DP_AUX = 0xC020645B             # _IOWR('d', 91, 32B)  (computed, not hardcoded)
DRM_DP_AUX_DEV_MASTER = 0x7FFFFFFF        # use the connector's master aux
DRM_IOCTL_DP_AUX_NUM = 91


def _iowr(nr, size, ch=ord("d")):
    return (3 << 30) | (size << 16) | (ch << 8) | nr


DRM_IOCTL_DP_AUX = _iowr(DRM_IOCTL_DP_AUX_NUM, 32)

DRM_MODE_CONNECTOR_DisplayPort = 0x00
DRM_MODE_CONNECTOR_HDMIA = 0x05

I2C_M_RD = 0x0001
I2C_M_STOP = 0x0002


class DpI2cMsg(ctypes.Structure):
    _pack_ = 1
    _fields_ = [("slave_addr", ctypes.c_uint16),
                ("flags", ctypes.c_uint16),
                ("len", ctypes.c_uint16),
                ("retry", ctypes.c_uint16),
                ("buf", ctypes.c_uint64)]


class DpAux(ctypes.Structure):
    _pack_ = 1
    _fields_ = [("connector_type", ctypes.c_uint32),
                ("adapt_num", ctypes.c_uint8),
                ("flags", ctypes.c_uint8 * 3),
                ("msg", ctypes.c_void_p),
                ("num_msgs", ctypes.c_uint32),
                ("aux_handle", ctypes.c_uint32)]


class ModeRes(ctypes.Structure):
    """struct _drmModeRes: 8 u32 counts + 7 u64 pointers = 88B."""
    _pack_ = 1
    _fields_ = [("count_connectors", ctypes.c_uint32),
                ("count_encoders", ctypes.c_uint32),
                ("count_crtcs", ctypes.c_uint32),
                ("count_planes", ctypes.c_uint32),
                ("count_fbs", ctypes.c_uint32),
                ("count_properties", ctypes.c_uint32),
                ("count_mode_resources", ctypes.c_uint32),
                ("count_leases", ctypes.c_uint32),
                ("conn_ptr", ctypes.c_uint64),
                ("enc_ptr", ctypes.c_uint64),
                ("crtc_ptr", ctypes.c_uint64),
                ("plane_ptr", ctypes.c_uint64),
                ("fb_ptr", ctypes.c_uint64),
                ("prop_ptr", ctypes.c_uint64),
                ("res_ptr", ctypes.c_uint64),
                ("lease_ptr", ctypes.c_uint64)]


class GetConnector(ctypes.Structure):
    """struct _drmModeGetConnector: 10 u32 + 4 u64 = 72B (kernel writes back)."""
    _pack_ = 1
    _fields_ = [("connector_id", ctypes.c_uint32),
                ("encoder_id", ctypes.c_uint32),
                ("connector_type", ctypes.c_uint32),
                ("connector_type_id", ctypes.c_uint32),
                ("connection", ctypes.c_uint32),
                ("mm_width", ctypes.c_uint32),
                ("mm_height", ctypes.c_uint32),
                ("count_modes", ctypes.c_uint32),
                ("count_encoders", ctypes.c_uint32),
                ("count_properties", ctypes.c_uint32),
                ("modes_ptr", ctypes.c_uint64),
                ("encoders_ptr", ctypes.c_uint64),
                ("props_ptr", ctypes.c_uint64),
                ("prop_values_ptr", ctypes.c_uint64)]


def open_card(card="/dev/dri/card1"):
    fd = os.open(card, os.O_RDWR | os.O_CLOEXEC)
    # DRM_IOCTL_MODE_INIT is _IO('d', 0xA2): no argument
    fcntl.ioctl(fd, DRM_IOCTL_MODE_INIT)
    return fd


def list_connectors(fd):
    """Return [(connector_id, connector_type, connector_type_id, connection)].

    DRM_IOCTL_MODE_GETCONNECTOR with connector_id=0 returns the first
    connector; passing the previous connector_id walks the list. All
    in/out pointer arrays are requested empty (counts pre-set to 0).
    """
    n = _count_connectors(fd)
    out = []
    conn_id = 0
    for _ in range(n):
        g = GetConnector()
        g.connector_id = conn_id
        fcntl.ioctl(fd, DRM_IOCTL_MODE_GETCONNECTOR, ctypes.byref(g))
        out.append((g.connector_id, g.connector_type, g.connector_type_id,
                    g.connection))
        conn_id = g.connector_id
    return out


def _count_connectors(fd):
    r = ModeRes()
    ctypes.memset(ctypes.byref(r), 0, ctypes.sizeof(r))
    fcntl.ioctl(fd, DRM_IOCTL_MODE_GETRESOURCES, ctypes.byref(r))
    return r.count_connectors


def aux_xfer(fd, slave7, out=b"", in_len=0, retry=4, adapt=0, conn_type=DRM_MODE_CONNECTOR_DisplayPort, aux_handle=0):
    """One AUX transaction to 7-bit slave address. Returns bytes or raises OSError."""
    msgs = (DpI2cMsg * 2)()
    bufs = []
    nm = 0
    if out:
        b1 = ctypes.create_string_buffer(bytes(out), len(out))
        bufs.append(b1)
        m = msgs[nm]
        m.slave_addr = slave7
        m.flags = 0
        m.len = len(out)
        m.retry = retry
        m.buf = ctypes.cast(b1, ctypes.c_uint64).value
        nm += 1
    if in_len:
        b2 = ctypes.create_string_buffer(in_len)
        bufs.append(b2)
        m = msgs[nm]
        m.slave_addr = slave7
        m.flags = I2C_M_RD
        m.len = in_len
        m.retry = retry
        m.buf = ctypes.cast(b2, ctypes.c_uint64).value
        nm += 1
    aux = DpAux()
    aux.connector_type = conn_type
    aux.adapt_num = adapt
    aux.aux_handle = aux_handle
    aux.flags = b"\0\0\0"
    aux.msg = ctypes.cast(msgs, ctypes.c_void_p)
    aux.num_msgs = nm
    fcntl.ioctl(fd, DRM_IOCTL_DP_AUX, ctypes.byref(aux))
    res = []
    k = 0
    if out:
        k += 1
    if in_len:
        return bytes(bufs[k][:in_len])
    return b""
