"""Scripted stand-in for RTBus/NvRMAuxBus/AuxDevBus (all duck-compatible).

read() pops from a scripted queue: an int repeats as that byte, bytes are
returned as-is (truncated/padded to n). Empty queue -> all-zero reads.
Every transaction lands in .log for after-the-fact framing assertions.
"""
from __future__ import annotations


class FakeBus:
    def __init__(self, reads=None):
        self.reads = list(reads or [])
        self.log = []                     # ("w",a,data,warm) / ("r",a,n,warm)
        self.label = "fake"

    # -- RTBus-compatible surface ---------------------------------------
    def write(self, addr7, data, warmup=False):
        self.log.append(("w", addr7, bytes(data), warmup))

    def read(self, addr7, n, delay=0.0, warmup=False):
        self.log.append(("r", addr7, n, warmup))
        if not self.reads:
            return b"\x00" * n
        item = self.reads.pop(0)
        b = bytes([item]) if isinstance(item, int) else bytes(item)
        return (b * (-(-n // len(b))))[:n]                 # ceil repeat, cut

    def probe(self, addr7):
        self.log.append(("p", addr7))
        return True

    def warmup(self, addr7=0x37):
        return True

    def select(self, addr7):
        self.log.append(("s", addr7))

    def close(self):
        pass

    def __enter__(self):
        return self

    def __exit__(self, *exc):
        pass

    # -- test helpers ----------------------------------------------------
    def writes_to(self, addr7):
        return [d for k, a, d, _ in self.log if k == "w" and a == addr7]

    def n_writes(self, addr7):
        return len(self.writes_to(addr7))
