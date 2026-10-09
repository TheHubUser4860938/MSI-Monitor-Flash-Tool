import sys, time, fcntl, os, ctypes
sys.path.insert(0, str(__import__("pathlib").Path(__file__).resolve().parents[2]))
from rt_i2c import I2CBus, I2C_RD, I2C_WR, I2C_SLAVE, I2CBus as B

fd = os.open("/dev/i2c-4", os.O_RDWR)

def sep_read(addr, ptr, n):
    """stop-condition between pointer write and read (ddcutil fallback style)"""
    fcntl.ioctl(fd, I2C_SLAVE, addr)
    os.write(fd, bytes([ptr]))
    time.sleep(0.005)
    return os.read(fd, n)

def raw_read(addr, n):
    fcntl.ioctl(fd, I2C_SLAVE, addr)
    return os.read(fd, n)

print("== A: separate write/read EDID @0x50 ptr0 ==")
try:
    d = sep_read(0x50, 0x00, 128)
    print("hdr", d[:8].hex(" "), "name", d[0x54:0x66].hex(" "), len(d))
except OSError as e:
    print("ERR", e)

print("== B: raw read EDID @0x50 (no pointer) ==")
try:
    d = raw_read(0x50, 128)
    print("hdr", d[:8].hex(" "), len(d))
except OSError as e:
    print("ERR", e)

print("== C: DDC/CI read reply after capability request ==")
import ddcci
pkt = ddcci.build(0x50, 0x37, 0x0F, [0x00])
fcntl.ioctl(fd, I2C_SLAVE, 0x37)
os.write(fd, pkt)
time.sleep(0.1)
try:
    d = os.read(fd, 32)
    print("reply", d[:16].hex(" "), "len", len(d))
except OSError as e:
    print("ERR", e)

print("== D: I2C_RDWR 2-msg EDID (repeat start) ==")
with I2CBus(4) as bus:
    out, err = bus.xfer([(0x50, I2C_WR, b"\x00"), (0x50, I2C_RD, b"\0"*128)])
    print("err", err, "hdr", out[0][:8].hex(" ") if out else None)
os.close(fd)
