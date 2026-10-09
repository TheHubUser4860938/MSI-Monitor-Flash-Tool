#!/usr/bin/env python3
"""Ground-truth probe semantics on the RM transport, normal mode (no ISP).
For slaves 0x50,0x37 (alive) and 0x22,0x20,0x09 (suspected dead):
A) nvbus full-message READ (proven framing) -> data/empty
B) rm.aux_i2c addr-only READ  retries=2
C) rm.aux_i2c addr-only WRITE retries=2
If A works on 0x50 while B/C ERROR on 0x50 -> addr-only is broken in RM:
all sweep conclusions built on addr-only are void, and the correct sweep is
A-style full-message probes. Root."""
import sys, time
sys.path.insert(0, str(__import__("pathlib").Path(__file__).resolve().parent.parent))
from msi_isp.nvbus import NvRMAuxBus

with NvRMAuxBus() as bus:
    rm, disp = bus.rm, bus.display_id
    for a in (0x50, 0x37, 0x22, 0x20, 0x09):
        try:
            d = bus.read(a, 8, warmup=True)
            ra = "DATA " + (d.hex(' ') if d else "empty")
        except Exception as e:
            ra = f"EXC {type(e).__name__}"
        time.sleep(0.05)
        try:
            rb, _ = rm.aux_i2c(disp, a, 0x1, addr_only=True, retries=2)
        except Exception as e:
            rb = "EXC"
        try:
            rc, _ = rm.aux_i2c(disp, a, 0x0, addr_only=True, retries=2)
        except Exception as e:
            rc = "EXC"
        print(f"  {a:#04x}  A-full-read: {ra:34s}  B-addrR: {rb:8s}  C-addrW: {rc}")
