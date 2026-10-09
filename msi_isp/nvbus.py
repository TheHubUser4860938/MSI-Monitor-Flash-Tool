"""RTBus-compatible transport on top of the NVIDIA RM DP-AUX channel.

Lets the whole i2c-dev-based stack (ScalerBus ISP verbs, DDC/CI packets,
cli/console commands) run on an NVIDIA GPU with no kernel-side DP tunnel
support, by speaking the same logical I2C messages through RM control
NV0073_CTRL_CMD_DP_AUXCH_CTRL (0x731341), I2C mode.

Transaction form VERIFIED on live RTX 4090 + MAG 341CQP QD-OLED, root,
2026-10-05 (t_kern5.py / t_kern6.py in repo root):
  * addr field = plain 7-bit slave address.  RM composes the DP-spec wire
    address field itself; R/W direction comes from the cmd REQ_TYPE bits.
    (Same conclusion as NVIDIA's own dp_deviceimpl.cpp:  address >>= 1;
     "right shifted DDC Address (request identifier in spec)".)
  * size is 0-based IN, bytes-completed OUT, max 16 data bytes/txn
    (NV0073_CTRL_DP_AUXCH_MAX_DATA_SIZE).
  * MOT (cmd bit2) = keep the I2C message open (repeated start between
    pieces); a bare-address packet with MOT cleared terminates the
    message — exactly the kernel's drm_dp_i2c_do_msg close semantics.
  * Oracle results: EDID slave 0x50 answers with the kernel's exact EDID
    bytes at offsets 0x00 and 0x50; slave 0x37 (DDC/CI) answers too.
    Scaler ISP slaves (0x20/0x22/0x18) do NOT answer until the scaler is
    put into ISP mode -- that is the monitor's behavior, not the path's.

Root is required (the AUXCH control is RMCTRL_PRIVILEGED: the open RM
module's osIsAdministrator() gate passes for euid 0 -- that is why the
CLI refuses this backend unless running under sudo).
"""
from __future__ import annotations

import contextlib
import os
import time

from . import nvrm
from .nvrm import AUX_REQ_READ, AUX_REQ_WRITE, RMError

MAX_DATA = 16          # per-transaction data bytes, DP auxch hard limit


class NvRMAuxBus:
    """Duck-compatible stand-in for ddc.RTBus on NVIDIA (needs root)."""

    def __init__(self, gpu_id=None, display_id=None, verbose=False):
        self.verbose = verbose
        self.fd = None
        self._last = None              # last slave (warm-up/bookkeeping parity)
        self.rm = nvrm.NvRM(verbose=verbose)
        _, entries = self.rm.card_info_raw()
        if not entries:
            raise RMError("CARD_INFO returned no GPUs (is the NVIDIA driver loaded?)")
        # nv_pci_info_t inside nv_ioctl_card_info_t: bytes 4-7 domain LE,
        # byte 8 pci bus; internal gpu_id = (domain<<16)|bus.
        chosen = None
        for _stride, i, e in entries:
            if e[0] != 1:
                continue
            # nv_ioctl_card_info_t in 615.x (kernel-open/common/inc/nv-ioctl.h):
            #   NvBool valid; NvU32 domain:20+pad; NvU8 bus,slot,func;
            #   NvU32 gpu_id ...  -> domain at +4, PCI bus at +12
            # verified byte-dump: domain=0, bus=1, gpu_id(16..19)=0x100.
            # RM display/displayId machinery keys off bus: proven displayId
            # 0x200 == (bus=1)<<8 | head. Use the card entry's own gpu_id
            # field when present, else (domain<<16)|bus.
            domain = int.from_bytes(e[4:6], "little")
            bus = e[12] if len(e) > 12 else 0
            gid = int.from_bytes(e[16:20], "little") or \
                ((domain & 0xFFFF) << 16) | ((bus & 0xFF) << 8)
            if gpu_id is None or gid == gpu_id:
                chosen = gid
                break
        if chosen is None:
            raise RMError(f"GPU id {gpu_id:#x} not in CARD_INFO")
        self.gpu_id = chosen
        # Open GPU device fds BEFORE the client alloc: RM's per-client GPU
        # association (gpuOsInfo) is built from the GPU minors open on this
        # process at NV01_ROOT alloc time -- the proven scratch tree opens
        # /dev/nvidia0 unconditionally and displayId resolution fails with
        # NV_ERR_INVALID_DISPLAY_ID (0x57) when no GPU fd is open (verified
        # live: nvbus without GPU fd vs t_kern6 with it, identical params).
        # Open every valid minor found, best-effort.
        self.fd_gpu = []
        minors = set()
        for _stride, i, e in entries:
            if e[0] == 1:
                m = self._card_minor(e)
                if m is not None:
                    minors.add(m)
        minors.update(range(3))          # scratch-proven /dev/nvidia0
        for m in sorted(minors):
            with contextlib.suppress(OSError):
                self.fd_gpu.append(os.open(f"/dev/nvidia{m}", os.O_RDWR))
        self.rm.alloc_client()
        dev_inst, sub_inst = 0, 0
        with contextlib.suppress(RMError):
            dev_inst, sub_inst = self.rm.id_info(self.gpu_id)
        self.sub_inst = sub_inst
        self.rm.alloc_device(deviceId=dev_inst)
        try:
            self.rm.alloc_subdevice(subDeviceId=sub_inst)
        except RMError as e:
            self.sub_err = str(e)       # I2C-buffer controls unavailable
        self.rm.alloc_disp_common()
        self.display_id = display_id if display_id is not None \
            else self._find_display()
        self.path = f"nvrm:gpu{self.gpu_id:#x}:disp{self.display_id:#x}"
        self._fd = self.rm.fd

    @staticmethod
    def _card_minor(e):
        # minor sits late in the entry; probe the known slot (verified live:
        # 40-43 on the 72-byte stride we matched). Kept defensive on purpose.
        for off in (40, 36, 44):
            m = int.from_bytes(e[off:off + 4], "little")
            if 0 <= m <= 15:
                return m
        return None

    def _find_display(self):
        """Auto-discover the DP head's displayId. Proven value for this box
        is 0x200 (head gate + 2). Verified by a native DPCD read of 0x0000
        (must answer the revision byte), so a wrong guess can never be
        mistaken for a working transport."""
        self._disc_log = []
        def ok(did):
            try:
                name, got, st = self.rm.aux(did, 0x00 << 2, req=AUX_REQ_READ,
                                            typ=nvrm.AUX_TYPE_AUX)
                self._disc_log.append((did, name, st, got[:1].hex()))
                return name == "ACK" and got and got[0] != 0
            except Exception as e:
                self._disc_log.append((did, f"EXC {e!r}", 0, ""))
                return False
        for did in (0x200, 0x100, 0x180, 0x1C0, 0xE0, 0xE1, 0x80, 0x400):
            if ok(did):
                return did
        # bitmask scan as last resort
        for b in range(13):
            did = 1 << b
            if ok(did):
                return did
        raise RMError("no DP display found over RM AUX; discovery log:\n  " +
                      "\n  ".join(f"{d:#05x} {n} st={s:#x} b0={b}"
                                  for d, n, s, b in self._disc_log))

    # ---- RTBus API parity ----------------------------------------------
    def close(self):
        self.rm.close()

    def __enter__(self):
        return self

    def __exit__(self, *exc):
        self.close()

    def select(self, addr7):
        self._last = addr7

    def warmup(self, addr7=None):
        # i2c-dev warm-up writes a 0x00 byte; on AUX a bare address-phase
        # packet is the equivalent probe and cannot change device state.
        try:
            return self.probe(addr7 if addr7 is not None else 0x37)
        except Exception:
            return False

    def _txn(self, *a, **k):
        return self.rm.aux_i2c(self.display_id, *a, subdevice=self.sub_inst,
                               **k)

    def write(self, addr7, data, warmup=False):
        """One complete I2C write message: [addr][data...][STOP]."""
        data = bytes(data)
        if not data:
            # pure address phase
            name, _ = self._txn(addr7, AUX_REQ_WRITE, data=b"", mot=True,
                                addr_only=True)
            self._term_write(addr7)
            return
        pos = 0
        while pos < len(data):
            chunk = min(MAX_DATA, len(data) - pos)
            name, _ = self._txn(addr7, AUX_REQ_WRITE,
                                data=data[pos:pos + chunk], mot=True)
            if name != "ACK":
                raise OSError(f"AUX I2C write to {addr7:#04x}: {name}")
            pos += chunk
        self._term_write(addr7)         # bare-address close w/ MOT cleared

    def _term_write(self, addr7):
        self._txn(addr7, AUX_REQ_WRITE, data=b"", mot=False, addr_only=True)

    def read(self, addr7, n, delay=0.0, warmup=False):
        """One complete I2C read message: [addr][data...][STOP], chunked at
        16 bytes with MOT chaining (verified through 16-byte pieces)."""
        if delay:
            time.sleep(delay)
        buf = bytearray()
        while len(buf) < n:
            chunk = min(MAX_DATA, n - len(buf))
            # VERIFIED form (t_kern6 rd7): MOT stays set on every read chunk;
            # the terminating bare-address packet in _term_write closes the
            # message.  Do not "optimize" the last chunk's MOT off until a
            # live 32-byte read proves it.
            name, got = self._txn(addr7, AUX_REQ_READ, data=bytes(chunk),
                                  mot=True)
            if name != "ACK":
                break
            buf += got[:chunk]
        self._term_write(addr7)         # kernel-style message terminator
        return bytes(buf[:n])

    def probe(self, addr7):
        """Bare address-phase write: 0 data bytes out, cannot alter the
        monitor's state. True on ACK (same shape proven safe against the
        scaler's ISP slaves in t_kern6.py)."""
        name, _ = self._txn(addr7, AUX_REQ_WRITE, data=b"", mot=True,
                            addr_only=True)
        self._term_write(addr7)
        return name == "ACK"

    # ---- extra used by flash state machine ------------------------------
    def raw_txn(self, req, slave7, data=b"", mot=False, addr_only=False):
        """Escape hatch returning (reply_name, bytes) for ISP sequencing."""
        return self._txn(slave7, req, data=data, mot=mot, addr_only=addr_only)


def nvrm_ddc_slave():
    from .ddc import SLAVE_DDC
    return SLAVE_DDC
