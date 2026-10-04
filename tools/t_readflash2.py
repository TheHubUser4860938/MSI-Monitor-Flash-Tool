#!/usr/bin/env python3
"""ReadFlashData exactly as Comm.dll 0x7e50 does:
   loop pages: I2CRead(slave=0x41[8bit], page16=addr>>16 big-endian, buf, page_len)
Test read-only across ISP slaves while mailbox alive."""
import sys, time, pathlib
sys.path.insert(0, str(pathlib.Path(__file__).resolve().parent.parent))
from msi_isp import Facts
from msi_isp.nvbus import NvRMAuxBus
from msi_isp.isp import enter_isp, exit_isp, isp_alive

PAGE = Facts.SLAVES["isp_page_len"]   # 32
bus = NvRMAuxBus(verbose=False)
idx, st = enter_isp(bus, verbose=False, retries=5)
print(f"ISP alive: cand {idx} status {st:#04x}")

def page_read(slave7, page):
    """I2CWrite(slave,[page_hi,page_lo]) then I2CRead(slave, page_len)."""
    bus.write(slave7, bytes([(page >> 8) & 0xFF, page & 0xFF]), warmup=True)
    return bus.read(slave7, PAGE, warmup=False)

try:
    for s in (0x20, 0x22):
        for pg in (0, 1):
            d = page_read(s, pg)
            print(f"slave {s:#04x} page {pg}: {d[:16].hex(' ')}")
    # the real proof: page 0xF8 must carry '012' + 'MAG 341CQ X28'
    seg = b""
    for pg in (0xF8, 0xF9):
        seg += page_read(0x20, pg)
    txt = "".join(chr(b) if 32 <= b < 127 else "." for b in seg)
    print("slave 0x20 pages F8-F9 ascii:", txt[:64])
except Exception as e:
    print("read failed:", type(e).__name__, e)
print("alive still:", isp_alive(bus) is not None)
exit_isp(bus)
bus.close()
