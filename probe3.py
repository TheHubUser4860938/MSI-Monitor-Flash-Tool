"""Read-only address probe: which 7-bit slaves ACK on the DP link right now.
Pure I2C read transactions only (no writes -> cannot change monitor state)."""
import fcntl, os, sys, struct
I2C_SLAVE = 0x0703
bus = sys.argv[1] if len(sys.argv) > 1 else '/dev/i2c-4'
addrs = [0x18,0x19,0x1a,0x1b,0x1c,0x1d,0x1e,0x1f,0x20,0x21,0x22,0x23,0x30,0x31,
         0x32,0x33,0x34,0x35,0x37,0x38,0x39,0x3a,0x41,0x42,0x4a,0x4b,0x50]
fd = os.open(bus, os.O_RDWR)
print(f"# {bus} (pid {os.getpid()})")
for a in addrs:
    try:
        fcntl.ioctl(fd, I2C_SLAVE, a)
    except OSError as e:
        print(f"  7-bit {a:#04x} (8-bit {2*a:#04x}/{2*a+1:#04x})  SETSLAVE-FAIL {e.errno}"); continue
    try:
        d = os.read(fd, 8)
        print(f"  7-bit {a:#04x} (8-bit {2*a:#04x}/{2*a+1:#04x})  ACK  {d.hex(' ')}")
    except OSError as e:
        print(f"  7-bit {a:#04x} (8-bit {2*a:#04x}/{2*a+1:#04x})  no-ack errno={e.errno}")
os.close(fd)
