#!/usr/bin/env python3
"""Decisive HDMI-DDC ISP test (read-only except proven magic enter/exit).

Hypothesis: on HDMI the NVIDIA adapter is a plain I2C master (no DP AUX
allow-list, no RM privilege gate), and the RTD2711 ISP engine bridges its
internal I2C target(s) onto the active input's DDC bus once ISP mode is
entered via the magic byte on 0x37. If any new slave ACKs after entry, we
try a flash word-read at 0xF800 where live bytes MUST read '009'+model
(a content oracle, not just an ACK).
"""
import sys, time
sys.path.insert(0, ".")
from msi_isp.ddc import RTBus
from msi_isp.isp import I2CTarget, ScalerBus, enter_isp, exit_isp, isp_alive

BUS = int(sys.argv[1]) if len(sys.argv) > 1 else 3

def edid_ok(bus):
    try:
        bus.select(0x50)
        bus.write(0x50, b"\x00")
        time.sleep(0.005)
        d = bus.read(0x50, 16)
        return d[:5] == b"\x00\xff\xff\xff\xff", d
    except Exception as e:
        return False, b""

def ack_scan(bus, addrs):
    got = {}
    for a in addrs:
        try:
            got[a] = bus.probe(a)
        except Exception:
            got[a] = False
    return got

with RTBus(BUS) as bus:
    print(f"# /dev/i2c-{BUS}")
    ok, d = edid_ok(bus)
    print(f"EDID sane: {ok}  head={d[:8].hex(' ')}")
    if not ok:
        sys.exit("no sane EDID on this bus — aborting (nothing touched)")

    before = ack_scan(bus, [0x20, 0x22, 0x18, 0x19, 0x1A, 0x1B])
    print(f"pre-ISP probe: {', '.join(f'{a:#04x}:{'Y' if v else 'n'}' for a, v in before.items())}")
    print(f"isp_alive pre: {isp_alive(bus)!r}")

    try:
        idx, st0 = enter_isp(bus, verbose=True)
        entered = True
        print(f"enter_isp: OK  candidate #{idx}  handshake status {st0:#04x}")
    except Exception as e:
        entered = False
        print(f"enter_isp FAILED: {e}")
    st = isp_alive(bus)
    print(f"isp_alive post: {st!r}" + ("  <== bit7 SET" if st and st & 0x80 else ""))

    if entered or (st and st & 0x80):
        after = ack_scan(bus, list(range(0x08, 0x78)))
        new = [a for a, v in after.items() if v and not before.get(a) and a not in (0x30, 0x37, 0x50, 0x3E, 0x3F, 0x4A, 0x4B)]
        print(f"newly-ACKing slaves post-ISP: {[hex(a) for a in new] or 'NONE'}")
        sb = ScalerBus(bus, delay_ms=2)
        for a in new[:6]:
            for reg in (0xF800, 0x0000):
                try:
                    data = sb.word_read(I2CTarget("x", a), reg, 24)
                    txt = "".join(chr(b) if 0x20 <= b < 0x7F else "." for b in data)
                    print(f"  slave {a:#04x} reg {reg:#06x}: {data[:16].hex(' ')} |{txt[:24]}|")
                except Exception as e:
                    print(f"  slave {a:#04x} reg {reg:#06x}: ERR {e}")
                    break
            # keep it bounded
        # also try the classic pointer/read on 0x20 even if it didn't newly ACK
        for a in (0x20, 0x22):
            if a in new:
                continue
            try:
                data = sb.word_read(I2CTarget("x", a), 0xF800, 24)
                txt = "".join(chr(b) if 0x20 <= b < 0x7F else "." for b in data)
                print(f"  (blind) slave {a:#04x} reg 0xF800: {data[:16].hex(' ')} |{txt[:24]}|")
            except Exception as e:
                print(f"  (blind) slave {a:#04x}: ERR {e}")

    print("exiting ISP…")
    ex = exit_isp(bus)
    time.sleep(1.0)
    ok2, d2 = edid_ok(bus)
    print(f"exit_isp: {ex}  EDID re-sane: {ok2}  head={d2[:8].hex(' ')}")
