"""Low-level Realtek scaler ISP primitives over plain i2c-dev.

Everything here speaks raw I2C word transactions to the scaler's register
space -- the same thing Comm.dll's I2CWordWrite/I2CWrite do on Windows, only
without NVAPI/ADL in the way.  Nothing in this module can damage a monitor:
the callers decide which registers to poke.

On DisplayPort these addresses are reached through the source's I2C-over-AUX
tunnel; whether the kernel routes non-EDID/DDC slave addresses is the open
question the `probe` command answers.
"""
from __future__ import annotations

import time
from dataclasses import dataclass, field

from .ddc import RTBus


class IspError(RuntimeError):
    pass


@dataclass
class I2CTarget:
    """One 7-bit slave on the DDC bus."""
    name: str
    addr7: int

    @property
    def w(self) -> int:          # 8-bit write address, as the tool logs it
        return (self.addr7 << 1) & 0xFF

    @property
    def r(self) -> int:          # 8-bit read address
        return ((self.addr7 << 1) | 1) & 0xFF


@dataclass
class ScalerBus:
    bus: RTBus
    verbose: bool = False
    delay_ms: float = 0.0
    _last: int = -1

    # ---- raw word (register-addressed) access -------------------------
    def word_write(self, tgt: I2CTarget, reg: int, payload: bytes | int) -> None:
        if isinstance(payload, int):
            payload = bytes([payload & 0xFF])
        buf = bytes([reg & 0xFF, (reg >> 8) & 0xFF]) + bytes(payload)
        if self.verbose:
            print(f"  TX w{tgt.w:#04x} [{buf.hex(' ')}]")
        self.bus.write(tgt.addr7, buf, warmup=self._retarget(tgt.addr7))
        if self.delay_ms:
            time.sleep(self.delay_ms / 1000.0)

    def word_read(self, tgt: I2CTarget, reg: int, n: int) -> bytes:
        reg16 = bytes([reg & 0xFF, (reg >> 8) & 0xFF])
        if self.verbose:
            print(f"  TX w{tgt.w:#04x} [{reg16.hex(' ')}] -> RX {n} from r{tgt.r:#04x}")
        self.bus.write(tgt.addr7, reg16, warmup=self._retarget(tgt.addr7))
        if self.delay_ms:
            time.sleep(self.delay_ms / 1000.0)
        data = self.bus.read(tgt.addr7, n, warmup=False)
        if self.verbose:
            print(f"  RX r{tgt.r:#04x} [{data.hex(' ')}]")
        return data

    def _retarget(self, addr7: int) -> bool:
        """i2c-dev keeps one slave per fd; only warm up when switching."""
        change = self._last != addr7
        self._last = addr7
        return change

    # ---- burst flash read (ReadFlashData shape) -----------------------
    def read_burst(self, tgt: I2CTarget, addr: int, n: int, page: int = 32) -> bytes:
        """Read n bytes as ReadFlashData does: 16-bit address, then page reads."""
        out = bytearray()
        while len(out) < n:
            chunk = min(page, n - len(out))
            at = addr + len(out)
            hdr = bytes([(at >> 16) & 0xFF, at & 0xFF])
            self.bus.write(tgt.addr7, hdr, warmup=self._retarget(tgt.addr7))
            out += self.bus.read(tgt.addr7, chunk, warmup=False)
        return bytes(out[:n])
