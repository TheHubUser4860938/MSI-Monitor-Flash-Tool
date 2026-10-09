#!/usr/bin/env python3
"""Acceptance test for the NVIDIA backend, as root, read-only.

Proves NvRMAuxBus (RM 0x731341 I2C mode) is a faithful I2C transport:
  1. EDID via bus.read() byte-compare vs /sys .../edid (kernel's own copy)
  2. DDC/CI vendor firmware-version query through the SAME bus object
     (the exact packet + parse path cli.py uses on i2c-dev)
  3. 32-byte (>=2x16) chunked EDID read -- stresses MOT chaining
  4. ISP slave probe visibility (address-phase only; harmless)
Exit 0 only if 1-3 pass.
"""
import glob, sys, os
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from msi_isp.nvbus import NvRMAuxBus
from msi_isp import ddc

FAIL = []

def check(name, ok, detail=""):
    print(f"{'PASS' if ok else 'FAIL':4s} {name} {detail}")
    if not ok:
        FAIL.append(name)

bus = NvRMAuxBus()
print(f"bus: {bus.path}  displayId={bus.display_id:#x} sub={bus.sub_inst}")

# 1. EDID byte-compare (128 B = 8x16 chunks, MOT chaining across the lot)
kpath = None
for p in glob.glob("/sys/class/drm/card*-*/edid"):
    try:
        d = open(p, "rb").read()
        if len(d) >= 128 and d[:4] == b"\x00\xff\xff\xff" and \
           "MSI" in p.upper() or True:
            # prefer the one matching our monitor: check descriptor
            if d[0:4] == b"\x00\xff\xff\xff":
                # any valid edid; pick the biggest nonempty one
                if not kpath or len(d) > len(open(kpath, 'rb').read()):
                    kpath, kern = p, d
    except OSError:
        pass
kern = open(kpath, "rb").read() if kpath else b""
# i2c-dev parity: the EDID pointer must be set by a write first, exactly as
# RTBus-based read_edid does (probe -> write offset byte -> read).
bus.write(0x50, b"\x00")
ed = bus.read(0x50, 128)
check("EDID 128B via RM == kernel sysfs", ed == kern[:128],
      f"(kernel src {os.path.basename(os.path.dirname(kpath)) if kpath else '?'})")
if ed != kern[:128]:
    for i, (a, b) in enumerate(zip(ed, kern)):
        if a != b:
            print(f"   first diff @{i}: {a:#04x} vs {b:#04x}")
            break

# 3. 32-byte read matches a kernel-identical slice
bus.write(0x50, b"\x00")
ed32 = bus.read(0x50, 32)
check("EDID 32B chunked == kernel", ed32 == kern[:32], ed32[:16].hex(" "))

# 2. DDC/CI firmware version through the same bus (cli.py's code path)
def vendor_fw_version(bus):
    pkt = ddc.ddc_packet(0x01, bytes([0xFE, 0xE1, 0xE6]))
    bus.warmup()
    bus.write(ddc.SLAVE_DDC, pkt)
    import time; time.sleep(0.02)
    reply = bus.read(ddc.SLAVE_DDC, 15)
    payload = ddc.ddc_parse_reply(reply)
    txt = bytes(b for b in payload["payload"] if 0x20 <= b < 0x7F).decode() \
        if isinstance(payload, dict) else \
        bytes(b for b in payload if 0x20 <= b < 0x7F).decode()
    return txt
try:
    fw = vendor_fw_version(bus)
    check("DDC/CI vendor fw version over RM bus", fw.startswith("FW."), repr(fw))
except Exception as e:
    check("DDC/CI vendor fw version over RM bus", False, f"{type(e).__name__}: {e}")

# 4. ISP slave visibility (informative only)
for lbl, s7 in (("MCCS 0x37", 0x37), ("EDID 0x50", 0x50), ("MST branch 0x30", 0x30),
                ("ISP flash 0x20", 0x20), ("ISP ctl 0x18", 0x18), ("MCU 0x22", 0x22)):
    try:
        print(f"     probe {lbl:16s} -> {'ACK' if bus.probe(s7) else 'no-ACK'}")
    except Exception as e:
        print(f"     probe {lbl:16s} -> ERR {e}")

sys.exit(1 if FAIL else 0)
