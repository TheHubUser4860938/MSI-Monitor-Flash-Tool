"""Minimal I2C-over-DDC probe: Linux i2c-dev via I2C_RDWR, 64-bit safe.

Written from first principles this pass; used to verify that the MSI ISP slave
addresses seen in the Windows binaries are reachable on this box.
"""
import ctypes
import fcntl
import os
import struct
import sys

I2C_RDWR = 0x0707
I2C_M_RD = 0x0001


class I2cMsg(ctypes.Structure):
    _fields_ = [
        ("addr", ctypes.c_uint16),
        ("flags", ctypes.c_uint16),
        ("len", ctypes.c_uint16),
        ("pad", ctypes.c_uint16),
        ("buf", ctypes.c_void_p),
    ]


class RdwrData(ctypes.Structure):
    _fields_ = [("msgs", ctypes.c_void_p), ("nmsgs", ctypes.c_uint32)]


def xfer(bus, addr, out, read_len):
    """One combined transaction: write `out`, then read `read_len` bytes."""
    fd = os.open(f"/dev/i2c-{bus}", os.O_RDWR)
    try:
        wbuf = ctypes.create_string_buffer(bytes(out), max(len(out), 1))
        rbuf = ctypes.create_string_buffer(max(read_len, 1))
        msgs = (I2cMsg * 2)()
        msgs[0].addr = addr
        msgs[0].flags = 0
        msgs[0].len = len(out)
        msgs[0].buf = ctypes.cast(wbuf, ctypes.c_void_p)
        msgs[1].addr = addr
        msgs[1].flags = I2C_M_RD
        msgs[1].len = read_len
        msgs[1].buf = ctypes.cast(rbuf, ctypes.c_void_p)
        data = RdwrData(ctypes.cast(msgs, ctypes.c_void_p), 2)
        fcntl.ioctl(fd, I2C_RDWR, data)
        return bytes(rbuf.raw[:read_len])
    finally:
        os.close(fd)


if __name__ == "__main__":
    # DDC/CI VCP feature 0xDF (VCP version) at the 7-bit address 0x37.
    for bus in range(0, 10):
        for addr, label in ((0x37, "DDC/CI"), (0x35, "ISP/DP 0x6A"), (0x3E, "ISP/HDMI 0x7C")):
            try:
                r = xfer(bus, addr, [0xDF], 4)
                print(f"i2c-{bus} {label} addr=0x{addr:02X} -> {r.hex(' ')}")
            except OSError as e:
                print(f"i2c-{bus} {label} addr=0x{addr:02X} -> {e}")
