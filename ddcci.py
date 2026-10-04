"""DDC/CI packet build/parse (VESA CMIC 2.0, section 5).

Write packet sent to slave 0x37 (addresses 7-bit here; shifted on the wire):
    0x50  len  0x51  src  opcode  d0..dn  checksum
      len = 1 + count of bytes following the 0x51 soft-turnaround byte
      checksum = (XOR of src, opcode, d0..dn, (dest<<1)|1, len) ^ 0x80

Reply read back from slave 0x37:
    0x50  len  dst  opcode  d0..dn  checksum
      checksum = (XOR of dst, opcode, d0..dn, 0x51, len) ^ 0x80
"""

DDCI_DEST = 0x37          # 7-bit DDC/CI slave
SRC_HOST = 0x50           # source address the host reports
SOFT_TURNAROUND = 0x51    # wire byte following the length in a write packet


def build(src, dest, opcode, data):
    """Full byte string for slave address 0x37, beginning with 0x50."""
    data = bytes(data)
    n = len(data) + 2                     # src + opcode + data + checksum rule
    x = src ^ 0x84 ^ opcode
    for b in data:
        x ^= b
    x ^= ((dest << 1) | 1) & 0xFF
    x ^= n & 0xFF
    x ^= 0x80
    body = bytes([src, 0x84, opcode]) + data
    return bytes([0x50, n & 0xFF, SOFT_TURNAROUND]) + body + bytes([x & 0xFF])


def parse(buf):
    """Parse a reply buffer read from 0x37. Returns dict with .ok, or None."""
    if len(buf) < 4 or buf[0] != 0x50:
        return None
    n = buf[1]
    if n == 0 or n + 2 > len(buf):
        return None
    dst, opcode = buf[2], buf[3]
    data = bytes(buf[4:2 + n])
    chk = buf[2 + n] if 2 + n < len(buf) else None
    x = dst ^ opcode
    for b in data:
        x ^= b
    x ^= SOFT_TURNAROUND
    x ^= n & 0xFF
    x &= 0xFF
    return {"len": n, "dst": dst, "opcode": opcode, "data": data,
            "checksum": chk, "calc": x, "ok": chk == x}
