#!/usr/bin/env python3
"""Write-decisive full 7-bit slave sweep (0x08..0x77) over RM I2C-over-AUX
while ISP mode is VERIFIED alive. Dead addresses: writes TIMEOUT (proven);
live ones ACK. Finds the ISP bridge wherever it actually is (the tool has an
AutoDetectSlaveAddr routine -- address is not hardcoded). Root; read-only
apart from addr-only probes and proven ISP enter/exit."""
import sys, time
sys.path.insert(0, str(__import__("pathlib").Path(__file__).resolve().parent.parent))
from msi_isp import isp
from msi_isp.nvbus import NvRMAuxBus

def alive(bus):
    return isp.isp_alive(bus) is not None

with NvRMAuxBus() as bus:
    rm, disp = bus.rm, bus.display_id
    if not alive(bus):
        idx, st = isp.enter_isp(bus, retries=10)
        print(f"ISP in: cand {idx} status {st:#04x}")
    time.sleep(0.2)

    hits = []
    for a in range(0x08, 0x78):
        if a in (0x37, 0x50):        # known-good, skip noise
            continue
        if not alive(bus):           # re-enter if a probe dropped ISP
            try:
                idx, st = isp.enter_isp(bus, retries=10)
                print(f"  [re-entered ISP at {a:#04x}: {st:#04x}]")
            except Exception as e:
                print(f"  !! ISP re-entry failed at {a:#04x}: {e}")
                break
        try:
            nm, _ = rm.aux_i2c(disp, a, 0x0, addr_only=True, retries=0)
        except Exception as e:
            nm = "EXC"
        if nm == "ACK":
            hits.append(a)
            print(f"  {a:#04x} WRITE-ACK  <-- candidate")
    print("\nwrite-ACK slaves while ISP alive:", [hex(h) for h in hits])
    for h in hits:
        try:
            nm, got = rm.aux_i2c(disp, h, 0x1, data=bytes(16), mot=True, retries=2)
            print(f"  {h:#04x} read16 -> {nm}: {got.hex(' ') if got else ''}")
        except Exception as e:
            print(f"  {h:#04x} read16 EXC {e}")
    print("exit:", isp.exit_isp(bus))
