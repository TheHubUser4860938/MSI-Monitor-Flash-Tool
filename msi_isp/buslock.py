"""Cooperative exclusive lock per DDC/AUX bus (session 14i design).

Honest scope: this serializes *this tool's* transactions (two backups, a
backup racing a flash attempt). It cannot compel ddcutil/GNOME's indexer to
cooperate — they never take the lock — but it gives them a hook (the same
inode every opener touches) and gives us a clean refusal instead of the
interleaved-DDC scaler wedge measured in session 7. While any ISP work
runs, close other DDC pollers anyway (safety policy).

Primary lock: flock on the *device inode* /dev/i2c-N itself — one inode
shared by root and ordinary users, no lockfile to create, no cross-uid DAC
games (a /tmp lockfile proved unreliable here: the kernel's protected-
regulars rules made a root opener EACCES on a user-owned file). Opening
the node needs no transactions: an ordinary open()+flock() never disturbs
tools that just open/read the bus, including our own transports.

Fallback (bus absent — e.g. --auxdev-only machines, or node perms denied):
a plain file in /tmp, best-effort chmod 666. Then exclusion only holds
between instances that resolved to the same fallback, which is the
honest, documented limit of that path.

The lock is taken per bus NUMBER regardless of transport: with --nvrm /
--auxdev the wire is the same DP AUX pair the i2c-dev shim shares, so the
monitor-side conflict surface is identical.
"""
from __future__ import annotations

import contextlib
import errno
import fcntl
import os
import time
from contextlib import contextmanager


class BusBusyError(OSError):
    """Raised when another msi-isp transaction owns the bus."""

    def __init__(self, bus: int, holder_pid: str):
        self.bus = bus
        super().__init__(
            f"bus {bus} is busy: another msi-isp transaction "
            f"(pid {holder_pid}) holds the lock — wait for it, or kill it "
            f"if it is stale.")


def _holder_pid(fd) -> str:
    try:
        os.lseek(fd, 0, os.SEEK_SET)
        pid = os.read(fd, 16).decode(errors="replace").strip()
        return pid or "?"
    except OSError:
        return "?"


def lock_path(bus: int) -> str:
    return f"/tmp/msi-isp-bus{bus}.lock"          # noqa: S108


@contextmanager
def bus_lock(bus: int, timeout: float = 0.0):
    """Acquire the lock; raise BusBusyError if held. timeout > 0 waits up
    to that many seconds first (cooperative retry for interactive use)."""
    fd, wrote_pid = -1, False
    try:
        fd = os.open(f"/dev/i2c-{bus}", os.O_RDWR)
        writable = dev_lock = True
    except OSError:
        dev_lock = False
        try:
            path = lock_path(bus)
            fd = os.open(path, os.O_CREAT | os.O_RDWR, 0o666)
            with contextlib.suppress(OSError):
                os.chmod(path, 0o666)   # noqa: S103  (peer exclusion is the point)
            writable = True
        except OSError:                               # /dev/null-grade
            fd, writable = os.open(os.devnull, os.O_RDONLY), False
    try:
        remaining = timeout
        while True:
            try:
                fcntl.flock(fd, fcntl.LOCK_EX | fcntl.LOCK_NB)
                break
            except OSError as e:
                if e.errno not in (errno.EWOULDBLOCK, errno.EAGAIN):
                    raise BusBusyError(bus, _holder_pid(fd)) from e
                if remaining <= 0:
                    raise BusBusyError(bus, _holder_pid(fd)) from None
                time.sleep(0.2)
                remaining -= 0.2
        if writable and not dev_lock:            # pid tag for file locks
            with contextlib.suppress(OSError):
                os.ftruncate(fd, 0)
                os.write(fd, f"{os.getpid()}\n".encode())
                wrote_pid = True
        yield fd
    finally:
        if wrote_pid:
            with contextlib.suppress(OSError):
                os.ftruncate(fd, 0)
        try:
            fcntl.flock(fd, fcntl.LOCK_UN)
        finally:
            os.close(fd)
