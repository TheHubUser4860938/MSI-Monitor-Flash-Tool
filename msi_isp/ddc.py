"""i2c-dev transport + DDC/CI packets, byte-matched to ddcutil 3.0.2 on this box.

Learned from `ddcutil --trcfunc=i2c_ioctl_writer/i2c_ioctl_reader` on /dev/i2c-4:

  * The NVIDIA GPU i2c adapter does NOT service repeated-start I2C_RDWR
    combined transfers usefully (reads come back all-zero). ddcutil instead
    issues a *separate* write then a *separate* read, both via I2C_SLAVE +
    plain write()/read(). We must do the same.
  * Before DDC traffic ddcutil writes a single 0x00 byte to the slave
    (bus/state warm-up).
  * Write packet to 7-bit slave 0x37 (kernel emits 8-bit 0x6E first):
        0x51  (0x80|N)  opcode  d0..d(N-2)  checksum
      checksum = XOR over [0x6E, 0x51, (0x80|N), opcode, d0..]
    Verified: getvcp 0x10 -> TX `51 82 01 10 ac`;
      0x6e^0x51^0x82^0x01^0x10 = 0xac  (matches).
  * Reply read from 0x37:
        0x6E  (0x80|N)  ...payload..., checksum
    e.g. `6e 88 02 00 10 00 00 64 00 05 c5` for getvcp 0x10 (cur=5,max=100).
"""

import fcntl
import os
import time

I2C_SLAVE = 0x0703
I2C_RDWR = 0x0707

SLAVE_DDC = 0x37            # 7-bit DDC/CI slave
SLAVE_ISP = 0x6F            # 7-bit Realtek ISP/tunnel slave (8-bit 0xDE/0xDF)
DDC_SLAVE_W = 0x6E          # 8-bit form, first byte on the wire
SRC_HOST = 0x51             # source address byte in write packets (8-bit-ish)
MSG_LEN_FLAG = 0x80


class RTBus:
    """Plain i2c-dev access using I2C_SLAVE + separate write()/read()."""

    def __init__(self, bus=4):
        self.bus = bus
        self.path = f"/dev/i2c-{bus}"
        self.label = f"i2c-dev {self.path}"
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

    def select(self, addr7):
        if addr7 != self._slave:
            fcntl.ioctl(self.fd, I2C_SLAVE, addr7)
            self._slave = addr7

    def warmup(self, addr7=SLAVE_DDC):
        """Single 0x00 byte write -- what ddcutil does before DDC traffic."""
        self.select(addr7)
        try:
            os.write(self.fd, b"\x00")
            return True
        except OSError:
            return False

    def write(self, addr7, data, warmup=False):
        if warmup:
            self.warmup(addr7)
        self.select(addr7)
        os.write(self.fd, bytes(data))

    def read(self, addr7, n, delay=0.0, warmup=False):
        if warmup:
            self.warmup(addr7)
        if delay:
            time.sleep(delay)
        self.select(addr7)
        return os.read(self.fd, n)

    def probe(self, addr7):
        """ACK probe: 1-byte write, separate transaction. True if ACK."""
        try:
            self.select(addr7)
            os.write(self.fd, b"\x00")
            return True
        except OSError:
            return False


def ddc_packet(opcode, data, slave_w=DDC_SLAVE_W):
    """Build the byte string to write to 7-bit slave 0x37.

    N = count of bytes following the length byte, excluding the checksum.
    """
    data = bytes(data)
    n = len(data) + 1                     # opcode + data
    ln = MSG_LEN_FLAG | (n & 0x0F)
    body = bytes([SRC_HOST, ln, opcode & 0xFF]) + data
    x = slave_w
    for b in body:
        x ^= b
    return body + bytes([x & 0xFF])


def ddc_check_write(packet, slave_w=DDC_SLAVE_W):
    """Recompute checksum of a complete write packet (last byte)."""
    x = slave_w
    for b in packet[:-1]:
        x ^= b
    return x & 0xFF == packet[-1]


def ddc_parse_reply(buf):
    """Parse a reply read from 0x37. Layout mirrors the write packet:
       [0x6E][0x80|N][opcode][data...][checksum]
    For GetVCP replies the MCCS 'Reply' flag byte sits inside data:
       [0x6e][len][reply/result][flag][0x02][opcode][mh][ml][sh][sl][type][chk]
    We return the raw payload plus a checksum verdict using the ddcutil
    convention (XOR over every wire byte including the leading 0x6E).
    """
    if len(buf) < 3 or buf[0] != DDC_SLAVE_W:
        return None
    ln = buf[1]
    n = ln & 0x0F
    if n == 0:
        return {"len": 0, "payload": b"", "checksum": buf[2] if len(buf) > 2 else None,
                "ok": None, "raw": bytes(buf)}
    payload = bytes(buf[2:2 + n])
    chk = buf[2 + n] if 2 + n < len(buf) else None
    # Verified against three real replies from this monitor:
    #   6e 88 02 00 10 00 00 64 00 05 c5   (getvcp 0x10)
    #   6e 88 02 01 dd 00 00 64 00 05 09
    #   6e 88 02 00 df 00 ff ff 02 02 6b
    # The monitor puts its own slave address (0x6E) on the wire where the spec
    # puts the reply-destination code (0x50), but keeps the checksum computed
    # with 0x50.  Hence: chk = 0x50 ^ XOR(buf[0 : 2+n]).
    x = 0x50
    for b in buf[:2 + n]:
        x ^= b
    return {"len": n, "opcode": payload[0] if payload else None,
            "payload": payload, "checksum": chk,
            "calc": x & 0xFF, "ok": chk == (x & 0xFF), "raw": bytes(buf[:3 + n])}
