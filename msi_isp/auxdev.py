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

from .lane import (
    AUX_MODE_AUX,
    LANE_DEFAULT,
    MAX_DATA,
    chunks,
    req_name,
    split_register,
    use_native,
)

NODE = "/dev/msi-auxch"
AUX_REQ_MOT, AUX_REQ_WRITE, AUX_REQ_READ = 0x4, 0, 1
BULK_MAX_DATA = 256            # NV0073_CTRL_DP_AUXCH_I2C_TRANSFER_MAX_DATA_SIZE
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


class _Bulk(ctypes.Structure):
    """mirror of struct auxch_bulk (kernel/msi_auxch.c) - NV0073_CTRL_CMD_
    DP_AUXCH_I2C_TRANSFER (0x73137C): 256 bytes per transaction, no replyType
    (NV_OK means the message completed), addr passed through VERBATIM and in
    practice plain 7-bit (the 8-bit form 0xa1 returns 0xffff)."""
    _fields_ = [
        ("addr", ctypes.c_uint32),
        ("bWrite", ctypes.c_uint32),
        ("size", ctypes.c_uint32),          # IN: requested, OUT: done
        ("data", ctypes.c_ubyte * BULK_MAX_DATA),
        ("rmStatus", ctypes.c_uint32),      # [OUT] 0xffff = TIMEOUT
    ]


MSI_AUXCH_XFER = _iowr(0x41, _Xfer)
MSI_AUXCH_BULK = _iowr(0x43, _Bulk)
MSI_AUXCH_UNLOCK = (ord("M") << 8) | 0x42          # _IO: no size/dir bits


class AuxDevBus:
    """RTBus/NvRMAuxBus-compatible transport on /dev/msi-auxch."""

    label = "kernel relay /dev/msi-auxch"

    def __init__(self, node: str = NODE, lane: str = LANE_DEFAULT):
        self.lane = lane               # "i2c" tunnel | "native" AUX (see lane.py)
        self._reg = None               # native lane: the register last posed
        self._posed = False            # native lane: is that pose live?
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

    def probe_bulk(self, addr7) -> bool:
        """1-byte bulk read: the relay's cheapest probe (reads are ungated)."""
        try:
            return bool(self.bulk_read(addr7, 1))
        except OSError:
            return False

    def probe(self, addr7):
        if self.lane == "bulk":
            return self.probe_bulk(addr7)
        try:
            name, _ = self._txn(addr7, AUX_REQ_WRITE, data=b"", mot=True,
                                addr_only=True)
        except OSError:
            return False                   # gated/refused == "not visible"
        self._term_write(addr7)
        return name == "ACK"

    # ---- framing (mirrors nvbus.NvRMAuxBus, protocol-proven there) ----
    def _txn(self, addr7, req, data=b"", mot=False, addr_only=False,
             retries=3, native=None):
        """One AUXCH transaction. `native` picks the lane per call; None
        follows the bus's lane. In the native lane `addr7` is the register
        INDEX (up to 20 bits) and must not be masked to 7 bits, which is how
        14i's 0x841-0x84f window stays reachable."""
        aux = use_native(self.lane, addr7) if native is None else native
        x = _Xfer(cmd=req | (AUX_REQ_MOT if mot else 0) |
                  (AUX_MODE_AUX if aux else 0),
                  addr=addr7 & (0xFFFFF if aux else 0x7F),
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

    def _native_write(self, addr7, data):
        """Native AUX write: register index in the address field, payload 16
        B at a time (nvbus parity; Comm_Aux FUN_100452c0)."""
        reg, payload = split_register(data)
        if reg is None:
            self._txn(addr7, AUX_REQ_WRITE, b"", native=True)
            return
        self._reg = reg
        if not payload:
            self._txn(reg, AUX_REQ_WRITE, b"", native=True)
            self._posed = True
            return
        for chunk in chunks(payload):
            name, _ = self._txn(reg, AUX_REQ_WRITE, data=chunk, native=True)
            if name != "ACK":
                raise OSError(f"relay native write to {reg:#06x}: {name}")

    def _native_read(self, n):
        """Read the register the last write posed (FUN_10045060: op 2 then
        op 3). Re-poses only when nothing posed it - a caller that writes
        reg A then reads reg B gets B's pointer on the wire."""
        if self._reg is None:
            raise OSError("relay native read with no register posed")
        if not self._posed:
            self._txn(self._reg, AUX_REQ_WRITE, b"", native=True)
        self._posed = False
        buf = bytearray()
        while len(buf) < n:
            want = min(MAX_DATA, n - len(buf))
            name, got = self._txn(self._reg, AUX_REQ_READ, data=bytes(want),
                                  native=True)
            if name != "ACK" or not got:
                break            # phantom-ACK rule (15k)
            buf += got[:want]
        return bytes(buf[:n])

    # ---- bulk lane (0x73137C, 256 B/transaction) ------------------------
    def _bulk(self, addr7, wr, data=b"", size=None):
        b = _Bulk(addr=addr7 & 0x1FF, bWrite=int(wr),
                  size=len(data) if size is None else size)
        for i, by in enumerate(bytes(data)[:BULK_MAX_DATA]):
            b.data[i] = by
        try:
            self._fcntl.ioctl(self.fd, MSI_AUXCH_BULK, b)
        except OSError as e:
            if e.errno == 1:
                raise OSError(
                    f"relay: bulk writes to ISP slave {addr7:#04x} are gated; "
                    f"call bus.unlock() first (5 s window, logged)") from None
            raise
        if b.rmStatus:
            name = "TIMEOUT" if b.rmStatus == 0xFFFF else f"RM-ERR {b.rmStatus:#06x}"
            raise OSError(f"bulk {addr7:#04x} {req_name(1 if not wr else 0)}: {name}")
        return b.size, bytes(b.data[:b.size])

    def bulk_write(self, addr7, data) -> None:
        """One bulk write message, up to 256 bytes in a single transaction."""
        self._bulk(addr7, True, data)

    def bulk_read(self, addr7, n) -> bytes:
        """One bulk read, up to 256 bytes. Reads are never gated in the
        kernel, so this is the cheapest probe the relay has."""
        _done, got = self._bulk(addr7, False, size=min(n, BULK_MAX_DATA))
        return got[:n]

    def read_register(self, addr7, reg: int, n: int) -> bytes:
        """The bulk read shape the relay test proved on EDID: write the
        pointer byte, then read n bytes."""
        self._bulk(addr7, True, bytes([reg & 0xFF]))
        return self.bulk_read(addr7, n)

    def write(self, addr7, data, warmup=False):
        """One complete I2C write message: [addr][data...][STOP]."""
        data = bytes(data)
        if self.lane == "bulk":
            self.bulk_write(addr7, data)
            return
        if use_native(self.lane, addr7):
            self._native_write(addr7, data)
            return
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
        if self.lane == "bulk":
            return self.bulk_read(addr7, n)
        if use_native(self.lane, addr7):
            return self._native_read(n)
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
