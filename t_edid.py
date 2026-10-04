import os, fcntl, time, struct, sys
I2C_SLAVE = 0x0703
fd = os.open("/dev/i2c-4", os.O_RDWR)
def sel(a): fcntl.ioctl(fd, I2C_SLAVE, a)
def t(name, seq):
    try:
        r = seq()
        head = r[:8]
        print(f"{name:34} len={len(r):4} head={head.hex(' ')} {'EDID!' if r[:3]==b'\x00\xff\xfe' or (head[0]==0 and head[3:6]==b'\xff\xff\x04') else ''}")
    except OSError as e:
        print(f"{name:34} OSError {e}")
# classic: set offset, sleep, plain read
def a(off, slp, slave=0x50):
    def f():
        sel(slave); os.write(fd, bytes([off])); time.sleep(slp)
        return os.read(fd, 128)
    return f
t("0x50 write off0 + 40ms read",      a(0, 0.04))
t("0x50 write off0 + 5ms read",       a(0, 0.005))
t("0x50 write off0 + 0ms read",       a(0, 0))
# DP branch device: EDID block 0 lives at 7-bit 0x30 (AUX 0x60/0x61)
t("0x30 write off0 + 40ms read",      a(0, 0.04, 0x30))
t("0x30 no-offset write, read",       lambda: (sel(0x30), os.read(fd, 128))[1])
# short-read loop (AUX page-size chunks)
def c(off, slave=0x50):
    def f():
        sel(slave); os.write(fd, bytes([off])); time.sleep(0.01)
        out = bytearray()
        for _ in range(4):
            try: out += os.read(fd, 32)
            except OSError: break
        return bytes(out)
    return f
t("0x50 off + 4x32 loop", c(0))
t("0x30 off + 4x32 loop", c(0, 0x30))
