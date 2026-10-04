import fcntl, os, struct, errno, time, sys
I2C_SLAVE, I2C_RDWR = 0x0703, 0x0707   # per i2c-dev.h constants used in ddc.py
fd = os.open("/dev/i2c-4", os.O_RDWR)
def sel(a):
    try: fcntl.ioctl(fd, I2C_SLAVE, a); return "sel-ok"
    except OSError as e: return f"sel-{e.errno}"
for a in (0x30, 0x32, 0x34, 0x36, 0x37, 0x38, 0x3a, 0x3c, 0x4a, 0x4b, 0x50, 0x20, 0x22):
    st = sel(a)
    if not st.endswith("ok"):
        print(f"{a:#04x}: {st}"); continue
    res = []
    try:
        os.write(fd, b"\x00"); res.append("wr-ok")
    except OSError as e: res.append(f"wr-{e.errno}")
    try:
        d = os.read(fd, 4); res.append("rd:" + d.hex(" "))
    except OSError as e: res.append(f"rd-{e.errno}")
    print(f"{a:#04x}: {st}  {' '.join(res)}")
# does an RDWR combined msg succeed for the tunnel address?
try:
    import ctypes
    print("RDWR ioctl present" if I2C_RDWR else "")
except Exception: pass
os.close(fd)
