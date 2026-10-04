#!/usr/bin/env python3
"""Cross-input ISP experiment (run as root).

Enter ISP mode over the DP bus (the only input with video + proven handshake),
then scan the HDMI DDC bus for slaves that only appear while ISP is alive —
the RTD scaler shares one internal I2C bus across all inputs' DDC ports.
Validation is content, not ACKs: flash @0xF806 must read 'MAG 341CQ X28'.
Strictly read-only apart from the twice-proven magic enter/exit pair.
"""
import sys, time
sys.path.insert(0, ".")
from msi_isp.ddc import RTBus
from msi_isp.isp import I2CTarget, ScalerBus, enter_isp, exit_isp, isp_alive

DPBUS, HDMI = 4, 3
KNOWN = {0x30, 0x37, 0x50, 0x3E, 0x3F, 0x4A, 0x4B}

def scan(bus, addrs):
    out = set()
    for a in addrs:
        try:
            if bus.probe(a):
                out.add(a)
        except Exception:
            pass
    return out

def text(b):
    return "".join(chr(c) if 0x20 <= c < 0x7F else "." for c in b)

with RTBus(DPBUS) as dp, RTBus(HDMI) as hd:
    print(f"# entering ISP on DP bus /dev/i2c-{DPBUS}, scanning HDMI /dev/i2c-{HDMI}")
    pre = scan(hd, range(0x08, 0x78))
    print(f"pre-ISP  HDMI slaves: {sorted(hex(a) for a in pre)}")

    ok, st = enter_isp(dp, verbose=True)
    print(f"enter_isp(DP): cand #{ok} status {st:#04x}")

    time.sleep(1.0)  # tool's after-ISP settling
    post = scan(hd, range(0x08, 0x78))
    dp_post = scan(dp, range(0x08, 0x78))
    new_h = post - pre
    print(f"post-ISP HDMI slaves: {sorted(hex(a) for a in post)}")
    print(f"post-ISP DP   slaves: {sorted(hex(a) for a in dp_post - KNOWN)}")

    sb = ScalerBus(hd, delay_ms=2)
    for a in sorted(new_h):
        for reg in (0xF800, 0xF806, 0x0000):
            try:
                d = sb.word_read(I2CTarget("x", a), reg, 24)
                print(f"  HDMI {a:#04x} @{reg:#06x}: {d[:16].hex(' ')} |{text(d)[:24]}|")
            except Exception as e:
                print(f"  HDMI {a:#04x} @{reg:#06x}: ERR {e}")
                break
    sbd = ScalerBus(dp, delay_ms=2)
    for a in sorted(dp_post - KNOWN - pre):
        try:
            d = sbd.word_read(I2CTarget("x", a), 0xF806, 24)
            print(f"  DP   {a:#04x} @0xF806: {d[:16].hex(' ')} |{text(d)[:24]}|")
        except Exception as e:
            print(f"  DP   {a:#04x} @0xF806: ERR {e}")

    print("exit ISP on DP…")
    exit_isp(dp)
    time.sleep(1.0)
    dp.select(0x50); dp.write(0x50, b"\x00"); time.sleep(0.005)
    print("DP EDID head:", dp.read(0x50, 8).hex(" "))
