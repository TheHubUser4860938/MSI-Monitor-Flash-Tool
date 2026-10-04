import os, sys, time, glob, fcntl
sys.path.insert(0, ".")
from msi_isp.ddc import RTBus
I2C_RDWR = 0x0707

ker = None
for f in glob.glob("/sys/class/drm/card*-*/edid"):
    d = open(f, "rb").read()
    if d[:8] == b"\x00\xff\xff\xff\x04\x03":
        ker = d; print("kernel EDID:", f, len(d), d[54:72])
        break

with RTBus(4) as b:
    # A: fixed 16-byte chunks, re-pose pointer each time
    out = bytearray()
    for off in range(0, 256, 16):
        b.write(0x50, bytes([off & 0xFF]))
        time.sleep(0.002)
        try:
            d = b.read(0x50, 16)
        except OSError as e:
            d = b""
        out += d
        if off in (0, 16, 240):
            print(f"  chunk@{off:#04x}: {len(d)}b {d[:16].hex(' ')}")
    print("A len", len(out), "match kernel:", bytes(out[:len(ker or b'')]) == (ker or b"")[:len(out)])
    # B: does the pointer really auto-increment? read twice w/o re-posing
    b.write(0x50, b"\x00")
    r1 = b.read(0x50, 8); r2 = b.read(0x50, 8)
    print("B r1", r1.hex(" "), "r2", r2.hex(" "), "same:", r1 == r2)
