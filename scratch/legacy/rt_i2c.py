"""Raw i2c-dev access layer for the Realtek scaler ISP path.

Uses I2C_RDWR (struct i2c_rdwr_ioctl_data / i2c_msg) so that repeated-start
transfers are atomic, which the Realtek register protocol requires.
"""
import ctypes
import fcntl
import os
import struct
import time

I2C_SLAVE = 0x0703
I2C_RDWR = 0x0707
I2C_PEC = 0x0708
I2C_RD = 0x0000
I2C_WR = 0x0001
I2C_TENADDR = 0x0800

_MAX_MSGS = 8


class I2CMsg(ctypes.Structure):
    _fields_ = [
        ("addr", ctypes.c_uint16),
        ("flags", ctypes.c_uint16),
        ("len", ctypes.c_uint16),
        ("__pad", ctypes.c_uint16),
        ("buf", ctypes.c_void_p),
    ]


class I2CRDWR(ctypes.Structure):
    _fields_ = [
        ("msgs", ctypes.POINTER(I2CMsg)),
        ("nmsgs", ctypes.c_uint32),
    ]


class I2CBus:
    def __init__(self, bus=4):
        self.path = f"/dev/i2c-{bus}"
        self.fd = os.open(self.path, os.O_RDWR)
        self._slave = None

    def close(self):
        if self.fd is not None:
            os.close(self.fd)
            self.fd = None

    def __enter__(self):
        return self

    def __exit__(self, *exc):
        self.close()

    # ---- low level: plain ioctl-based read/write (stop between xfers) ----
    def _set_slave(self, addr):
        if addr != self._slave:
            fcntl.ioctl(self.fd, I2C_SLAVE, addr)
            self._slave = addr

    def plain_write(self, addr, data):
        self._set_slave(addr)
        return os.write(self.fd, bytes(data))

    def plain_read(self, addr, n, rep_start=None):
        """rep_start: bytes written before a *repeated start* then read."""
        if rep_start is None:
            self._set_slave(addr)
            return os.read(self.fd, n)
        return self.xfer([(addr, I2C_WR, rep_start)]) and self._read_only(addr, n)

    def _read_only(self, addr, n):
        self._set_slave(addr)
        return os.read(self.fd, n)

    # ---- combined transfer (repeated start) via I2C_RDWR ----
    def xfer(self, msgs, try_broken=False):
        """msgs: list of (addr, flags, bytes). flags: 0 = read, I2C_WR = write,
        I2C_RD|I2C_WR|0x8000? no: use I2C_WR | I2C_TENADDR etc.
        Returns list of bytes objects for each read message, or None on error."""
        n = len(msgs)
        if n == 0 or n > _MAX_MSGS:
            raise ValueError("bad msg count")
        arrays = []
        cmsgs = (I2CMsg * n)()
        for i, (addr, flags, data) in enumerate(msgs):
            b = ctypes.create_string_buffer(bytes(data), max(len(data), 1))
            arrays.append(b)
            cmsgs[i].addr = addr
            cmsgs[i].flags = flags
            cmsgs[i].len = len(data)
            cmsgs[i].buf = ctypes.cast(b, ctypes.c_void_p)
        xfer = I2CRDWR(cmsgs, n)
        try:
            done = fcntl.ioctl(self.fd, I2C_RDWR, xfer)
        except OSError as e:
            return None, e
        out = []
        for i, (addr, flags, data) in enumerate(msgs):
            if not flags & I2C_WR:
                out.append(bytes(ctypes.string_at(arrays[i], cmsgs[i].len)))
        return out, None

    def write_read(self, waddr, wdata, raddr, rlen, wflags=I2C_WR):
        out, err = self.xfer([(waddr, wflags, wdata), (raddr, I2C_RD, b"")]) if False else self.xfer(
            [(waddr, wflags, wdata), (raddr, I2C_RD, b"\0" * rlen)]
        )
        if err is not None:
            return None, err
        return out[0], None

    # ---- SMBus-style block ops (what i2c-dev write_block/read_block do) ----
    def write_block(self, addr, data):
        """SMBus block write: count byte auto-prepended by kernel, max 32 data bytes."""
        self._set_slave(addr)
        buf = ctypes.create_string_buffer(34)
        buf.raw = b"\x00" * 34

        class BlockData(ctypes.Structure):
            _fields_ = [("len", ctypes.c_ubyte), ("block", ctypes.c_ubyte * 32)]

        bd = BlockData()
        data = bytes(data)
        if len(data) > 32:
            raise ValueError("SMBus block max is 32 bytes")
        bd.len = len(data)
        for i, v in enumerate(data):
            bd.block[i] = v
        # I2C_SMBUS ioctl
        I2C_SMBUS = 0x0720
        I2C_SMBUS_WRITE = 0
        I2C_SMBUS_BLOCK_DATA = 5

        class SmbusArgs(ctypes.Structure):
            _fields_ = [
                ("read_write", ctypes.c_ubyte),
                ("command", ctypes.c_ubyte),
                ("size", ctypes.c_ubyte),
                ("data", ctypes.c_uint),
            ]

        # Use union with block pointer
        class SmbusData(ctypes.Union):
            _fields_ = [("byte", ctypes.c_ubyte), ("word", ctypes.c_uint),
                        ("block", ctypes.c_void_p), ("qsmbus", ctypes.c_void_p)]

        class SmbusArgs2(ctypes.Structure):
            _fields_ = [
                ("read_write", ctypes.c_ubyte),
                ("command", ctypes.c_ubyte),
                ("size", ctypes.c_ubyte),
                ("data", SmbusData),
            ]

        args = SmbusArgs2()
        args.read_write = I2C_SMBUS_WRITE
        args.command = -1 & 0xFF  # I2C_SMBUS_BLOCK_DATA uses command=-1 on i2c-dev
        args.size = I2C_SMBUS_BLOCK_DATA
        args.data.block = ctypes.cast(ctypes.byref(bd), ctypes.c_void_p)
        try:
            fcntl.ioctl(self.fd, I2C_SMBUS, args)
        except OSError as e:
            return None, e
        return bd.len, None

    def read_block(self, addr, cmd=0xFF):
        I2C_SMBUS = 0x0720
        I2C_SMBUS_READ = 1
        I2C_SMBUS_BLOCK_DATA = 5

        class SmbusData(ctypes.Union):
            _fields_ = [("byte", ctypes.c_ubyte), ("word", ctypes.c_uint),
                        ("block", ctypes.c_void_p), ("qsmbus", ctypes.c_void_p)]

        class SmbusArgs(ctypes.Structure):
            _fields_ = [
                ("read_write", ctypes.c_ubyte),
                ("command", ctypes.c_ubyte),
                ("size", ctypes.c_ubyte),
                ("data", SmbusData),
            ]

        bd = (ctypes.c_ubyte * 34)()
        bd[0] = 32  # request up to 32 bytes
        self._set_slave(addr)
        args = SmbusArgs()
        args.read_write = I2C_SMBUS_READ
        args.command = cmd & 0xFF
        args.size = I2C_SMBUS_BLOCK_DATA
        args.data.block = ctypes.cast(bd, ctypes.c_void_p)
        try:
            fcntl.ioctl(self.fd, I2C_SMBUS, args)
        except OSError as e:
            return None, e
        n = bd[0]
        if n > 32:
            n = 32
        return bytes(bd[i + 1] for i in range(n)), None

    def smbus_call(self, addr, rw, cmd, size, value=0):
        I2C_SMBUS = 0x0720

        class SmbusData(ctypes.Union):
            _fields_ = [("byte", ctypes.c_ubyte), ("word", ctypes.c_uint),
                        ("block", ctypes.c_void_p), ("qsmbus", ctypes.c_void_p)]

        class SmbusArgs(ctypes.Structure):
            _fields_ = [("read_write", ctypes.c_ubyte), ("command", ctypes.c_ubyte),
                        ("size", ctypes.c_ubyte), ("data", SmbusData)]

        self._set_slave(addr)
        args = SmbusArgs()
        args.read_write = rw
        args.command = cmd & 0xFF
        args.size = size
        args.data.byte = value & 0xFF
        try:
            fcntl.ioctl(self.fd, I2C_SMBUS, args)
        except OSError as e:
            return None, e
        return args.data.byte, None


def ddcci_checksum(src, dst, payload):
    """XOR of (dst<<1) ^ len ^ <addr for write> then ^0x80."""
    x = ((dst << 1) & 0xFF) ^ ((len(payload) + 1) & 0xFF) ^ (src & 0xFF)
    for b in payload:
        x ^= b & 0xFF
    return x ^ 0x80
