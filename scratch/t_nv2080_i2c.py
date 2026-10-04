#!/usr/bin/env python3
"""Test the PUBLIC NV2080_CTRL_CMD_I2C_READ/WRITE_BUFFER controls (the
NVAPI I2CRead/Write backend) as root on the RTX 4090.

Read-only apart from EDID pointer writes (harmless, standard traffic).
Oracle: slave 0x50 read @0 must equal the kernel's EDID head
        00 ff ff ff ff ff ff 00.
Then scans the ISP slave 0x41 (8-bit) with a write probe — decisive:
write status, not bare-address read noise.
Run: sudo python3 scratch/t_nv2080_i2c.py
"""
import sys, pathlib
sys.path.insert(0, str(pathlib.Path(__file__).resolve().parent.parent))
from msi_isp import nvbus

KEDID = b""
for p in ("/sys/class/drm/card1-DP-1/edid", "/sys/class/drm/card1-HDMI-A-1/edid"):
    try:
        d = open(p, "rb").read()
        if d[:8] == b"\x00\xff\xff\xff\xff\xff\xff\x00":
            KEDID, KPATH = d, p
            break
    except OSError:
        pass
print("kernel EDID:", KPATH if KEDID else "NOT FOUND", len(KEDID), "bytes")

bus = nvbus.NvRMAuxBus()
rm = bus.rm
print("tree ok: gpu", hex(bus.gpu_id), "disp", hex(bus.display_id),
      "sub", hex(getattr(rm, "hSub", 0)), "sub_err:", getattr(bus, "sub_err", None))

# --- port discovery ------------------------------------------------------
ports = {}
for did in [bus.display_id] + [1 << b for b in range(13)]:
    try:
        comm, ddc = rm.i2c_portid(did, subdevice=bus.sub_inst)
        ports[did] = (comm, ddc)
    except Exception as e:
        if did == bus.display_id:
            print("PORTID on working displayId:", e)
        continue
print("PORTID results:", {hex(k): v for k, v in ports.items()})

candidate_ports = sorted({v for p in ports.values() for v in p if v != 0})
print("candidate ports:", [hex(p) for p in candidate_ports])

# --- oracle: EDID slave 0x50 via public control --------------------------
head = bytes([0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00])
best = None
for port in candidate_ports:
    for sa in ([0x00], []):
        st, got = rm.i2c_dev_read(port, 0xA0, sa, 8)
        print(f"  read port {port:#x} chip A0 sub {sa}: st={st:#x} "
              f"data={got[:8].hex(' ')}")
        if st == 0 and (got[:8] == head or got == KEDID[:8]):
            best = (port, sa)
            break
    if best:
        break

if best:
    port, sa = best
    st, whole = rm.i2c_dev_read(port, 0xA0, [0x50], 128)
    match = whole == KEDID[:128]
    print(f"  EDID block0 @0x50: st={st:#x} match-kernel={match}")
    if not match:
        print("   got:", whole[:16].hex(' '))
    # write oracle: set pointer, read back
    st = rm.i2c_dev_write(port, [0xA0, 0x00], b"\xa9")
    st2, got = rm.i2c_dev_read(port, 0xA0, [], 4)
    print(f"  write-back test: w={st:#x} rd={st2:#x} {got.hex(' ')}")

# --- ISP slave probes (write-decisive) ------------------------------------
if best:
    port = best[0]
    for chip in (0x41, 0x30, 0x44, 0x6E, 0x37):
        st = rm.i2c_dev_write(port, [chip, 0x00], b"\x00")
        st2, got = rm.i2c_dev_read(port, chip | (0 if chip == 0x37 else 1),
                                   [], 4)
        print(f"  slave {chip:#04x}: write st={st:#x}  read st={st2:#x} "
              f"{got[:4].hex(' ')}")

bus.close()
print("done (no flash writes anywhere)")
