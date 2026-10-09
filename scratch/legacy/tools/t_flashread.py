#!/usr/bin/env python3
"""Read-only flash peek while ISP mailbox is alive, via slave 0x37."""
import sys, time, pathlib
sys.path.insert(0, str(pathlib.Path(__file__).resolve().parents[3]))
from msi_isp import Facts
from msi_isp.nvbus import NvRMAuxBus
from msi_isp.isp import I2CTarget, ScalerBus, enter_isp, exit_isp, isp_alive

bus = NvRMAuxBus(verbose=False)
idx, st = enter_isp(bus, verbose=True, retries=5)
print(f"ISP alive: cand {idx} status {st:#04x}")
sb = ScalerBus(bus, delay_ms=1)
t37 = I2CTarget("ISP mailbox", 0x37)
try:
    head = sb.read_burst(t37, 0, 64, page=32)
    print("flash @0x000000:", head[:32].hex(" "))
    hdr = sb.read_burst(t37, 0xF800, 64, page=32)
    txt = "".join(chr(b) if 32 <= b < 127 else "." for b in hdr)
    print("flash @0xF800 :", hdr[:32].hex(" "))
    print("           as text:", txt[:48])
except Exception as e:
    print("flash read failed:", type(e).__name__, e)
print("alive still:", isp_alive(bus) is not None)
exit_isp(bus)
# final health check with the proven pointer-reset EDID read
bus.write(0x50, b"\x00", warmup=True)
ed = b""
for i in range(8):
    ed += bus.read(0x50, 16, warmup=False)
ker = pathlib.Path("/sys/class/drm/card1-DP-3/edid").read_bytes()
print("EDID first128 vs kernel:", "MATCH" if ed == ker[:128] else "DIFF")
bus.close()
