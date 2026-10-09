#!/usr/bin/env python3
"""Step-by-step kernel-faithful I2C-over-AUX sequence against slave 0x22 while
ISP is verified alive, printing the RAW REPLY TYPE at every step (DEFER vs
NAK vs TIMEOUT vs BUSY is the whole answer here), with 7ms x 20 retry like
the kernel's drm_dp_i2c_do_msg. Read-only apart from proven ISP enter/exit.
Direct rm.aux_i2c (not nvbus), root required, bus = RM displayId (DP)."""
import sys, time
sys.path.insert(0, str(__import__("pathlib").Path(__file__).resolve().parent.parent))
from msi_isp import isp
from msi_isp.nvbus import NvRMAuxBus

A_W, A_R = 0x0, 0x1          # I2C req types (bits1:0)
MOT = 0x4

def step(rm, disp, label, addr_only, cmd, addr=0, data=b"", mot=False,
         defer_retry=20):
    for i in range(defer_retry + 1):
        try:
            name, got = rm.aux_i2c(disp, 0x22, cmd, data=data, mot=mot,
                                   addr_only=addr_only)
        except Exception as e:
            name, got = f"EXC:{e}", b""
        print(f"  {label:34s} -> {name} {got.hex(' ') if got else ''}")
        if name in ("ACK",) or "EXC" in str(name):
            return name, got
        if name not in ("DEFER", "BUSY"):
            return name, got
        time.sleep(0.007)
    return name, got

with NvRMAuxBus() as bus:
    rm, disp = bus.rm, bus.display_id
    time.sleep(3.0)
    idx, st = isp.enter_isp(bus, retries=10)
    print(f"ISP alive: candidate {idx} status {st:#04x}")
    time.sleep(0.2)                       # INI after_command slack

    # kernel msg 0: write register-index pointer [0x60] (Flash.dat index reg)
    print("msg0 (addr-phase + data write):")
    step(rm, disp, "addr-only WRITE 0x22", True, A_W)
    step(rm, disp, "MOT write [0x60]", False, A_W | MOT, data=bytes([0x60]), mot=True)
    step(rm, disp, "addr-only close write (MOT off)", True, A_W)
    # kernel msg 1: read 8 bytes via same slave
    print("msg1 (read burst):")
    step(rm, disp, "addr-only READ 0x22(MOT)", True, A_R | MOT, mot=True)
    n2, got = step(rm, disp, "data read n=8", False, A_R | MOT, data=bytes(8), mot=True)
    step(rm, disp, "addr-only close read (MOT off)", True, A_R)
    if got and set(got) != {0}:
        print(f"  >> NON-ZERO READ: {got.hex(' ')}")

    # also: bare probe of 0x4A-ish? no -- just re-check ISP alive and exit
    st3 = isp.isp_alive(bus)
    print(f"ISP after sequence: {st3!r}")
    print("exit:", isp.exit_isp(bus))
    d = bus.read(0x50, 8, warmup=True)
    print("post EDID:", d.hex(' ') if d else "FAIL")
