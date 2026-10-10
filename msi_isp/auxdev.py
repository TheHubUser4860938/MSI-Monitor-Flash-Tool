"""Rootless NVIDIA transport over the kernel relay (/dev/msi-auxch).

The I2C-over-AUX framing here mirrors nvbus.NvRMAuxBus — the protocol was
proven live there (sessions 12-13); only the delivery differs: an ioctl to
kernel/msi_auxch.ko instead of the privileged RM escape. Consequence:
everything that works over --nvrm as root also works over --auxdev as an
ordinary member of the node's group (video, via kernel/99-msi-auxch.rules).

Kernel-side policy this transport must respect: I2C writes to the ISP
register-file slaves (7-bit 0x18..0x22) are refused with EPERM until
unlock() is called; the unlock is timed (5 s) and logged. Reads, and
pointer writes to 0x50/0x37, need no unlock.
"""
from __future__ import annotations

import ctypes
import os
import time

NODE = "/dev/msi-auxch"
MAX_DATA = 16                     # NV0073_CTRL_DP_AUXCH_MAX_DATA_SIZE
AUX_REQ_MOT, AUX_REQ_WRITE, AUX_REQ_READ = 0x4, 0, 1
REPLY = {0: "ACK", 1: "NACK", 2: "DEFER", 3: "TIMEOUT",
         4: "I2CNACK", 8: "I2CDEFER", 0xFFFFFFFF: "INVALID_ARG"}


class _Xfer(ctypes.Structure):
    """mirror of struct auxch_xfer (kernel/msi_auxch.c)"""
    _fields_ = [
        ("cmd", ctypes.c_uint32),
        ("addr", ctypes.c_uint32),
        ("bAddrOnly", ctypes.c_uint32),
        ("size", ctypes.c_uint32),          # 0-based [IN]
        ("data", ctypes.c_ubyte * 16),
        ("retryTimeMs", ctypes.c_uint32),
        ("replyType", ctypes.c_uint32),     # [OUT]
        ("sizeDone", ctypes.c_uint32),      # [OUT]
        ("rmStatus", ctypes.c_uint32),      # [OUT]
    ]


def _iowr(nr: int, struct) -> int:
    return (3 << 30) | (ctypes.sizeof(struct) << 16) | (ord("M") << 8) | nr


MSI_AUXCH_XFER = _iowr(0x41, _Xfer)
MSI_AUXCH_UNLOCK = (ord("M") << 8) | 0x42          # _IO: no size/dir bits


class AuxDevBus:
    """RTBus/NvRMAuxBus-compatible transport on /dev/msi-auxch."""

    label = "kernel relay /dev/msi-auxch"

    def __init__(self, node: str = NODE):
        import fcntl as _f
        self._fcntl = _f
        try:
            self.fd = os.open(node, os.O_RDWR)
        except FileNotFoundError:
            raise OSError(f"{node} missing — load the relay first: "
                          f"sudo insmod kernel/msi_auxch.ko") from None
        except PermissionError:
            raise OSError(f"{node} exists but this user may not open it — "
                          f"install kernel/99-msi-auxch.rules (root:video "
                          f"0660) and join the video group") from None
        self._slave = None

    def close(self):
        if self.fd is not None:
            os.close(self.fd)
            self.fd = None

    def __enter__(self):
        return self

    def __exit__(self, *exc):
        self.close()

    # ---- permission surface ------------------------------------------
    def unlock(self, purpose: str = "") -> None:
        """Arm kernel-side ISP-slave (0x18..0x22) writes for 5 s. Call it
        immediately before the write sequence, not at open() time: the
        timed window is the safety property. The authoritative timer is
        the module's (UNLOCK_MS); userspace keeps no mirror state --
        re-unlock rather than reason about expiry."""
        import fcntl
        fcntl.ioctl(self.fd, MSI_AUXCH_UNLOCK)

    # ---- RTBus parity --------------------------------------------------
    def select(self, addr7):
        self._slave = addr7              # no state to hold; bookkeeping only

    def warmup(self, addr7=0x37):
        # AUX is not warm-up sensitive; the bare-address probe is the
        # equivalent and cannot change device state (nvbus parity).
        try:
            return self.probe(addr7)
        except OSError:
            return False

    def probe(self, addr7):
        try:
            name, _ = self._txn(addr7, AUX_REQ_WRITE, data=b"", mot=True,
                                addr_only=True)
        except OSError:
            return False                   # gated/refused == "not visible"
        self._term_write(addr7)
        return name == "ACK"

    # ---- framing (mirrors nvbus.NvRMAuxBus, protocol-proven there) ----
    def _txn(self, addr7, req, data=b"", mot=False, addr_only=False,
             retries=3):
        x = _Xfer(cmd=req | (AUX_REQ_MOT if mot else 0), addr=addr7 & 0x7F,
                  bAddrOnly=int(addr_only), retryTimeMs=0)
        payload = bytes(data)
        if req == AUX_REQ_READ:
            x.size = (len(payload) if payload else MAX_DATA) - 1
        else:
            for i, b in enumerate(payload[:MAX_DATA]):
                x.data[i] = b
            x.size = max(len(payload) - 1, 0)
        name = "ERROR"
        for _ in range(retries):
            try:
                self._fcntl.ioctl(self.fd, MSI_AUXCH_XFER, x)
            except OSError as e:
                if e.errno == 1:                   # EPERM: kernel write-gate
                    raise OSError(
                        f"relay: writes to ISP slave {addr7:#04x} are gated; "
                        f"call bus.unlock() first (5 s window, logged)") from None
                raise
            if x.rmStatus:
                # The RM control itself failed (head gone, bad state,
                # rejected params). replyType/sizeDone are then untouched
                # residue -- the insmod-time oracles in msi_auxch.c pair
                # st with replyType for exactly this reason. Never let
                # residue pose as an ACK (phantom-ACK rule, 15k).
                return f"RM-ERR {x.rmStatus:#06x}", b""
            name = REPLY.get(x.replyType, f"?{x.replyType:#x}")
            if name in ("ACK", "NACK", "TIMEOUT", "I2CNACK", "INVALID_ARG"):
                break
            time.sleep(0.005)                      # DEFER: retry (nvrm parity)
        got = bytes(x.data[:x.sizeDone]) if req == AUX_REQ_READ and \
            name == "ACK" else b""
        return name, got

    def _term_write(self, addr7):
        self._txn(addr7, AUX_REQ_WRITE, data=b"", mot=False, addr_only=True)

    def write(self, addr7, data, warmup=False):
        """One complete I2C write message: [addr][data...][STOP]."""
        data = bytes(data)
        if not data:
            self._txn(addr7, AUX_REQ_WRITE, data=b"", mot=True,
                      addr_only=True)
            self._term_write(addr7)
            return
        pos = 0
        while pos < len(data):
            chunk = min(MAX_DATA, len(data) - pos)
            name, _ = self._txn(addr7, AUX_REQ_WRITE,
                                data=data[pos:pos + chunk], mot=True)
            if name != "ACK":
                raise OSError(f"relay I2C write to {addr7:#04x}: {name}")
            pos += chunk
        self._term_write(addr7)

    def read(self, addr7, n, delay=0.0, warmup=False):
        """One complete I2C read message, 16 B chunks with MOT chained."""
        if delay:
            time.sleep(delay)
        buf = bytearray()
        while len(buf) < n:
            chunk = min(MAX_DATA, n - len(buf))
            name, got = self._txn(addr7, AUX_REQ_READ, data=bytes(chunk),
                                  mot=True)
            if name != "ACK":
                break
            if not got:
                break            # "ACK" that delivered nothing: never
                                 # advance, never spin (15k phantom rule)
            buf += got[:chunk]
        self._term_write(addr7)
        return bytes(buf[:n])

    # ---- escape hatch for ISP sequencing (nvbus parity) ---------------
    def raw_txn(self, req, slave7, data=b"", mot=False, addr_only=False):
        return self._txn(slave7, req, data=data, mot=mot,
                         addr_only=addr_only)
