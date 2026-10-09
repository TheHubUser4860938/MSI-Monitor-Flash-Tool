#!/usr/bin/env python3
"""Pure read-only DDC/CC FE-register-window map on slave 0x37 (plain user).
Probes opcode 0x01 + 3-byte reg over FE E0..E3 / E1 E0..EF to decide whether
the window is real and address-sensitive (values vary) or a single canned reply.
"""
import sys, time
sys.path.insert(0, str(__import__("pathlib").Path(__file__).resolve().parent.parent))
from msi_isp.ddc import RTBus, ddc_packet, ddc_parse_reply, SLAVE_DDC

def vread(bus, reg3):
    pkt = ddc_packet(0x01, bytes(reg3))
    bus.warmup()
    bus.write(SLAVE_DDC, pkt)
    time.sleep(0.02)
    r = bus.read(SLAVE_DDC, 15)
    p = ddc_parse_reply(r)
    return p["payload"] if p and p.get("ok") else p

with RTBus(4) as bus:
    base = vread(bus, bytes([0xFE, 0xE1, 0xE6]))
    print(f"anchor FE E1 E6 -> {base!r}")
    if base is None:
        sys.exit("anchor read failed; monitor not answering vendor DDC/CC -- abort")
    addr_sens = set()
    for hi in (0xE0, 0xE1, 0xE2, 0xE3, 0xF0):
        for lo in range(0xE0, 0xF0, 2):
            reg = bytes([0xFE, hi, lo])
            p = vread(bus, reg)
            txt = ""
            if p:
                txt = bytes(b for b in p if 0x20 <= b < 0x7F).decode(errors="replace")
                addr_sens.add(bytes(p))
            print(f"  FE {hi:02X} {lo:02X} -> {(p.hex(' ') if p else 'None')}  {txt!r}")
    print(f"\ndistinct replies: {len(addr_sens)}  "
          f"-> {'ADDRESS-SENSITIVE WINDOW' if len(addr_sens) > 2 else 'single canned reply'}")
