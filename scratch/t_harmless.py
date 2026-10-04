#!/usr/bin/env python3
"""Which slave/address-phase probe does NOT drop ISP mode?
0x37 magic-bytes do not (proven, we poll it). Question: does a bare addr-only
WRITE to 0x37 or 0x50 also leave ISP alive? If yes, the real ISP-sweep is:
keep re-entering cheap, probe only harmless addresses -- OR better: probe
EVERY address but re-enter ISP each time (the way the 112-address sweep did)
and only trust... hmm no: dead-write DROPS ISP, so a hit could equally be
'nobody home' vs 'slave exists but probe killed it'. Correct protocol per
AutoDetectSlaveAddr (from f_autodetect disasm): WRITE candidate, then READ
status from 0x37 and decide on the STATUS REPLY, not on ACK of the probe."""
import sys, time
sys.path.insert(0, "/home/eugene/Projects/monitor-fw")
from msi_isp import isp
from msi_isp.nvbus import NvRMAuxBus

with NvRMAuxBus() as bus:
    rm, disp = bus.rm, bus.display_id
    idx, st = isp.enter_isp(bus, retries=10)
    print(f"ISP in cand {idx} status {st:#04x}")
    for tgt, kind in ((0x37,"addr-only WRITE"), (0x37,"addr-only READ"),
                      (0x50,"addr-only WRITE"), (0x50,"addr-only READ"),
                      (0x09,"addr-only WRITE dead-control")):
        cmd = 0x1 if "READ" in kind else 0x0
        try:
            nm, _ = rm.aux_i2c(disp, tgt, cmd, addr_only=True, retries=0)
        except Exception as e:
            nm = "EXC"
        time.sleep(0.1)
        alive = isp.isp_alive(bus)
        try:
            nm2, _ = rm.aux_i2c(disp, tgt, cmd, addr_only=True, retries=0)
        except Exception:
            nm2 = "EXC"
        alive2 = isp.isp_alive(bus)
        print(f"  {tgt:#04x} {kind:24s} -> {nm:8s} ISP-alive-after: {alive!r} | 2nd {nm2:8s} alive: {alive2!r}")
    print("exit:", isp.exit_isp(bus))
