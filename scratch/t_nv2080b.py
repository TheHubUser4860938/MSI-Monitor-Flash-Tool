#!/usr/bin/env python3
"""NV2080 I2C retry: PRIVILEGE flag + READ_REG variant. Read-only probe
(EDID pointer writes only, standard traffic). Oracle: 0x50@0 == kernel EDID head."""
import sys, pathlib, ctypes
sys.path.insert(0, str(pathlib.Path(__file__).resolve().parent.parent))
from msi_isp import nvbus

bus = nvbus.NvRMAuxBus()
rm = bus.rm
ports = {}
for did in [bus.display_id] + [1 << b for b in range(13)]:
    try:
        ports[rm.i2c_portid(did, subdevice=bus.sub_inst)[1]] = did
    except Exception:
        pass
ports = sorted(ports)
print("ddc ports:", [hex(p) for p in ports], "disp:", hex(bus.display_id))

KE = open("/sys/class/drm/card1-DP-1/edid","rb").read()

# A) READ_BUFFER with PRIVILEGE flag
for port in ports:
    for flags in (0, 2):
        st, data = rm.i2c_dev_read(port, 0xA0, [0x00], 8, flags=flags, retries=1)
        tag = "MATCH" if st == 0 and data[:8] == KE[:8] else ""
        print(f"A port {port} flags {flags}: st={st:#x} {data[:8].hex()} {tag}")
        if st == 0:
            break
    else:
        continue
    break

# B) READ_REG control: version|port|flags|addr/reg,bufsize,buffer
q = ctypes.create_string_buffer(268)
u = ctypes.cast(q, ctypes.POINTER(ctypes.c_uint32))
b = ctypes.cast(q, ctypes.POINTER(ctypes.c_uint8))
for port in ports:
    for flags in (0, 2):
        u[0] = 0; u[1] = port; u[2] = flags
        u[3] = 0x50          # addr (NvU32: control likely uses low byte or 7-bit)
        b[16] = 0x00         # reg
        b[17] = 8            # bufsize
        st = rm.control(rm.hSub, 0x20800603, q, size=268)
        got = bytes(b[20:28])
        print(f"B port {port} flags {flags}: st={st:#x} {got.hex()}")
print("done")
