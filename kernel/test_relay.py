#!/usr/bin/env python3
"""Unprivileged acceptance test for /dev/msi-auxch (kernel/msi_auxch.ko).

Run WITHOUT sudo: it must byte-reproduce the two live oracles that the
root-only RM path proved in session 13 — native DPCD0 read (ACK, first
byte 0x12) and the EDID header from 0x50 (00 ff ff ff ff ff ff 00).

Exit 0 = kernel-context relay works for ordinary users end to end.
"""
import ctypes
import fcntl
import os
import sys
import time

NODE = "/dev/msi-auxch"

# struct auxch_xfer (kernel/msi_auxch.c) — plain u32 bookkeeping + 16 B data
class Xfer(ctypes.Structure):
    _fields_ = [
        ("cmd", ctypes.c_uint32),
        ("addr", ctypes.c_uint32),
        ("bAddrOnly", ctypes.c_uint32),
        ("size", ctypes.c_uint32),          # 0-based [IN]
        ("data", ctypes.c_ubyte * 16),
        ("retryTimeMs", ctypes.c_uint32),
        ("replyType", ctypes.c_uint32),     # [OUT] 0=ACK 1=NACK 2=DEFER
        ("sizeDone", ctypes.c_uint32),      # [OUT]
        ("rmStatus", ctypes.c_uint32),      # [OUT]
    ]

def _iowr(nr, struct):
    return (3 << 30) | (ctypes.sizeof(struct) << 16) | (ord("M") << 8) | nr

MSI_AUXCH_XFER = _iowr(0x41, Xfer)
MSI_AUXCH_UNLOCK = (ord("M") << 8) | 0x42          # _IO: no size/dir bits

AUX_MODE_AUX, AUX_MOT = 1 << 3, 1 << 2
REQ_WRITE, REQ_READ = 0, 1
REPLY_NAME = {0: "ACK", 1: "NACK", 2: "DEFER", 3: "TIMEOUT",
              4: "I2CNACK", 8: "I2CDEFER"}


def xfer(fd, cmd, addr, data=b"", size0=0, addr_only=False):
    x = Xfer(cmd=cmd, addr=addr, bAddrOnly=int(addr_only), size=size0,
             retryTimeMs=0)
    for i, b in enumerate(data):
        x.data[i] = b
    try:
        fcntl.ioctl(fd, MSI_AUXCH_XFER, x)
    except OSError as e:
        if e.errno == 1:                     # EPERM: kernel write-gate
            return "PERM-REFUSED", b"", -1
        raise
    n = x.sizeDone
    got = bytes(x.data[:n]) if n else b""
    return REPLY_NAME.get(x.replyType, f"?{x.replyType:#x}"), got, x.rmStatus


def unlock(fd):
    fcntl.ioctl(fd, MSI_AUXCH_UNLOCK)


def main():
    if os.geteuid() == 0:
        print("NOTE: running as root — the test is pointless but will pass")
    try:
        fd = os.open(NODE, os.O_RDWR)
    except FileNotFoundError:
        sys.exit(f"FAIL: {NODE} missing (insmod kernel/msi_auxch.ko first)")
    except PermissionError:
        sys.exit(f"FAIL: cannot open {NODE} without sudo — node mode wrong")

    ok = True

    # oracle 1: native AUX, DPCD address 0 -> ACK + 0x12
    reply, got, st = xfer(fd, AUX_MODE_AUX | REQ_READ, 0x0000, size0=0)
    print(f"DPCD0        : rm={st:#x} reply={reply} data={got.hex()}")
    ok &= reply == "ACK" and st == 0 and got[:1] == b"\x12"

    # oracle 2: I2C-over-AUX EDID header from 0x50 (pointer, chained read,
    # bare-address terminate) -> exactly 00 ff ff ff ff ff ff 00
    reply, got, st = xfer(fd, REQ_WRITE | AUX_MOT, 0x50, data=b"\x00", size0=0)
    print(f"0x50 ptr wr  : rm={st:#x} reply={reply}")
    ok1 = reply == "ACK" and st == 0
    reply, got, st = xfer(fd, REQ_READ | AUX_MOT, 0x50, size0=7)
    print(f"0x50 rd 8B   : rm={st:#x} reply={reply} data={got.hex()}")
    ok2 = reply == "ACK" and got == bytes.fromhex("00ffffffffffff00")
    xfer(fd, REQ_WRITE, 0x50, addr_only=True)   # close the message
    ok &= ok1 and ok2

    # --- security gates ----------------------------------------------------
    # (a) I2C-mode writes at ISP slaves (0x18..0x22) refused while locked.
    #     On this box they would TIMEOUT anyway — EPERM must arrive first.
    isp_wr = bytes([0x60, 0, 0, 0])             # "index reg <- 0", benign
    reply, got, st = xfer(fd, REQ_WRITE | AUX_MOT, 0x22, data=isp_wr)
    print(f"gate 0x22 wr     : {reply} (want PERM-REFUSED)")
    ok &= reply == "PERM-REFUSED"

    # (b) unlocked: same transaction reaches the wire (TIMEOUT on this box
    #     per dead-end #11 — anything but EPERM is the pass condition).
    unlock(fd)
    reply, got, st = xfer(fd, REQ_WRITE | AUX_MOT, 0x22, data=isp_wr)
    print(f"gate 0x22/unlock : {reply} rm={st:#x} (want anything but PERM)")
    ok &= reply != "PERM-REFUSED"

    # (c) timed auto-relock (UNLOCK_MS = 5 s in the module)
    time.sleep(5.5)
    reply, got, st = xfer(fd, REQ_WRITE | AUX_MOT, 0x22, data=isp_wr)
    print(f"gate relocked    : {reply} (want PERM-REFUSED)")
    ok &= reply == "PERM-REFUSED"

    # (d) unlocked state never required ordinary DDC traffic
    reply, got, st = xfer(fd, REQ_WRITE | AUX_MOT, 0x50, data=b"\x00")
    print(f"0x50 wr unlocked-free: {reply} (want ACK)")
    ok &= reply == "ACK"

    print("UNPRIVILEGED RELAY: " + ("PASS" if ok else "FAIL"))
    return 0 if ok else 1


if __name__ == "__main__":
    sys.exit(main())
