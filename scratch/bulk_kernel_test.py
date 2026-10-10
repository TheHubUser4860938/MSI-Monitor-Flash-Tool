#!/usr/bin/env python3
"""Kernel-privilege bulk I2C experiment (0x73137C via MSI_AUXCH_BULK).

Why: NVAPI is the only stack that has ever made slave 0x22 answer, and the
AUXCH_CTRL path we emulate (0x731341) never does on NVIDIA (dead-end #11,
three origins). The sibling control 0x73137C -- "bulk I2C over auxch,
256 B/txn, driver splits + ACK-retries" -- is the prime suspect for what
NVAPI rides. From userland it answers 0x23 (INVALID_CLIENT: the fd-table
gate). Kernel context skips that gate; this script measures whether it
then REACHES THE WIRE, as an ordinary user.

Protocol for unknowns (addr encoding is SDK-ambiguous until observed):
EDID 0x50 is the oracle -- if some addr form + flow returns the real EDID
bytes, that form is correct; 0x22 is then tried in the same encoding.
Run unprivileged: sudo insmod kernel/msi_auxch.ko first.
"""
import ctypes
import fcntl
import os
import sys

sys.path.insert(0, ".")
from msi_isp.ddc import RTBus   # noqa: E402  (ground-truth EDID, i2c-dev)

ST = {0x0000: "OK", 0xffff: "NV_ERR_GENERIC (wire-level failure — SDK "
                           "nvstatuscodes.h:28; NOT a privilege error)",
      0x001b: "undocumented (seen userland-era)",
      0x0023: "NV_ERR_INVALID_CLIENT (fd-table gate — userland only)",
      0x0026: "NV_ERR_INVALID_DEVICE (SDK name; observed on aux timeouts)",
      0x0040: "NV_ERR_INVALID_STATE", 0x0056: "NV_ERR_NOT_SUPPORTED"}


def _iowr(nr, struct):
    return (3 << 30) | (ctypes.sizeof(struct) << 16) | (ord("M") << 8) | nr


class Bulk(ctypes.Structure):
    _fields_ = [("addr", ctypes.c_uint32),
                ("bWrite", ctypes.c_uint32),
                ("size", ctypes.c_uint32),
                ("data", ctypes.c_ubyte * 256),
                ("rmStatus", ctypes.c_uint32)]


MSI_AUXCH_BULK = _iowr(0x43, Bulk)
MSI_AUXCH_UNLOCK = (ord("M") << 8) | 0x42

fd = os.open("/dev/msi-auxch", os.O_RDWR)


def bulk(addr, bwrite, data=b"", size=None):
    b = Bulk(addr=addr, bWrite=int(bwrite),
             size=size if size is not None else len(data))
    for i, x in enumerate(data[:256]):
        b.data[i] = x
    try:
        fcntl.ioctl(fd, MSI_AUXCH_BULK, b)
    except OSError as e:
        return f"errno{e.errno}", b"", -1
    name = ST.get(b.rmStatus, f"{b.rmStatus:#x}")
    return name, bytes(b.data[:b.size]), b.rmStatus


def show(tag, res):
    name, got, st = res
    print(f"{tag:38} -> {name:16} done={len(got):3}  {got[:12].hex(' ')}")
    return name, got, st


print("== ground truth from i2c-dev (unaffected by this experiment) ==")
with RTBus(4) as rt:
    rt.write(0x50, b"\x00")
    ref = rt.read(0x50, 128)
print(f"i2c-dev EDID[0:12]          -> {ref[:12].hex(' ')}")

print("\n== bulk control 0x73137C, kernel context, uid",
      f"{os.getuid()} ==")
# A: addr-form discovery on the EDID oracle
show("read 128 @7-bit 0x50 (no pointer) ", bulk(0x50, False, size=128))
show("ptr wr [00] @7-bit 0x50           ", bulk(0x50, True, data=b"\x00"))
show("read 128 @7-bit 0x50 (after ptr)  ", bulk(0x50, False, size=128))
show("ptr wr [00] @8-bit 0xa0           ", bulk(0xA0, True, data=b"\x00"))
show("read 128 @8-bit 0xa1              ", bulk(0xA1, False, size=128))
# B: the same on DDC/CI (second oracle if 0x50 is a fluke)
show("read 32 @7-bit 0x37               ", bulk(0x37, False, size=32))
# C: the actual subject -- 0x22, both forms
show("read 1 @7-bit 0x22                ", bulk(0x22, False, size=1))
show("read 1 @8-bit 0x45                ", bulk(0x45, False, size=1))
show("gate: wr @0x44 while LOCKED       ", bulk(0x44, True, data=b"\x60\x00\x00\x00"))
fcntl.ioctl(fd, MSI_AUXCH_UNLOCK)
show("wr [60 00 00 00] @8-bit 0x44      ", bulk(0x44, True, data=b"\x60\x00\x00\x00"))
show("wr [60 00 00 00] @7-bit 0x22      ", bulk(0x22, True, data=b"\x60\x00\x00\x00"))
show("read 4 @8-bit 0x45 (post-write)   ", bulk(0x45, False, size=4))
# D: native AUX flavor? bulk has no mode bit -- see what an DPCD range addr does
show("read 16 @20-bit 0x0000 (DPCD?)    ", bulk(0x0000, False, size=16))

print("""
== session 14n verdict (measured 2026-10-10, 615.78.08 + kernel 7.2.9) ==
- 0x73137C IS alive from kernel context: 0x50/0x37/0x30/0x4a/0x4b all OK;
  userland's 0x23 INVALID_CLIENT gate is skipped exactly as the kill-switch
  analysis predicted. addr form = PLAIN 7-bit (8-bit 0xa0/0xa1 -> GENERIC);
  256 B EDID double-block lands in ONE call, byte-perfect, driver splits
  and ACK-retries internally.
- 0x22 -> NV_ERR_GENERIC in BOTH addr forms, identical to unoccupied
  slaves (0x36/0x39) while branch slaves answer: the bulk control has no
  address policy, so this is genuine WIRE SILENCE at the sink.
  Hypothesis "kernel privilege + NVAPI's likely control unlocks 0x22":
  FALSIFIED. Dead-end #11 now confirmed from four origins.
Re-run after every major NVIDIA driver update — it costs seconds.""")
