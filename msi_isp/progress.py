"""Live progress bar for flash-scale transfers (backup / write).

Non-TTY safe: when stderr isn't a terminal (pipes, logs) it degrades to
one percentage line per phase change / 5%-step, so scripts stay quiet.
"""
from __future__ import annotations

import shutil
import sys
import time


class Bar:
    def __init__(self, total: int, label: str = "", stream=None,
                 width: int = 38, min_step: float = 5.0):
        self.total = max(1, int(total))
        self.label = (label or "").strip()
        self_stream = stream or sys.stderr
        self.stream = self_stream
        self.width = width
        self.min_step = min_step          # non-TTY reporting granularity (%)
        self.t0 = time.monotonic()
        self._last_pct = -1.0
        self.tty = bool(getattr(self.stream, "isatty", lambda: False)())
        if self.tty:
            self.width = min(self.width, max(10, shutil.get_terminal_size().columns - 34))

    # -- rendering -----------------------------------------------------
    def _fmt(self, pct: float, done: int) -> str:
        el = time.monotonic() - self.t0
        rate = done / el if el > 0.01 else 0.0
        eta = (self.total - done) / rate if rate > 0 else 0.0
        fill = int(round(pct / 100.0 * self.width))
        bar = "█" * fill + "░" * (self.width - fill)
        return (f"\r{' ' if self.tty else ''}{self.label} [{bar}] "
                f"{pct:5.1f}%  {el:6.0f}s elapsed  eta {eta:6.0f}s   ")

    def update(self, done: int) -> None:
        pct = min(100.0, 100.0 * done / self.total)
        if self.tty:
            self.stream.write(self._fmt(pct, done))
            self.stream.flush()
        elif pct - self._last_pct >= self.min_step or pct >= 100.0:
            self._last_pct = pct
            self.stream.write(self._fmt(pct, done).lstrip() + "\n")
            self.stream.flush()

    def done(self, note: str = "") -> None:
        self.update(self.total)
        el = time.monotonic() - self.t0
        self.stream.write(("\r" if self.tty else "") +
                          f"{self.label} complete: {self.total} bytes in "
                          f"{el:.1f}s{(' — ' + note) if note else ''}\n")
        self.stream.flush()
