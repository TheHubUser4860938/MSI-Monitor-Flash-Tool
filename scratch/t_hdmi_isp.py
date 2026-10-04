"""Decisive test: ISP entry + flash slave visibility over HDMI DDC (plain i2c-dev).

Read-only except the vendor ISP-entry/exit commands themselves (proven
recoverable: exit 0x24 restores normal mode, EDID re-verified afterwards).
HDMI DDC is a plain I2C bus -- no DP AUX tunnel, no NVIDIA allow-list, so a
positive here means the tool works on ANY Linux GPU without root tricks.
"""
import sys, time
sys.path.insert(0, ".")
from msi_isp.ddc import RTBus
from msi_isp import Facts, isp
from msi_isp.isp import I2CTarget, ScalerBus

BUS = int(sys.argv[1]) if len(sys.argv) > 1 else 3
ISPS = [0x20, 0x22, 0x18, 0x19, 0x1a, 0x1b]


def scan(bus, tag):
    res = {a: bus.probe(a) for a in ISPS}
    print(f"[{tag}] " + "  ".join(f"{a:#04x}:{'ACK' if v else '----'}"
                                  for a, v in res.items()), flush=True)
    return res


def edid_head(bus):
    bus.write(0x50, b"\x00")
    time.sleep(0.003)
    return bus.read(0x50, 8)


with RTBus(BUS) as bus:
    ed = edid_head(bus)
    good = ed[:8] == b"\x00\xff\xff\xff\xff\xff\xff\x00"
    print(f"HDMI bus {BUS}: EDID head {ed[:8].hex()} {'OK' if good else 'BAD'}",
          flush=True)
    if not good:
        sys.exit("no monitor on this bus")

    scan(bus, "normal mode ")
    try:
        cand, st = isp.enter_isp(bus, verbose=True)
        print(f"ISP ALIVE via cand#{cand} status={st:#04x}", flush=True)
    except Exception as e:
        print(f"ISP entry on HDMI failed: {e}")
        sys.exit(1)

    r = scan(bus, "ISP mode    ")
    if r.get(0x20):
        sb = ScalerBus(bus, delay_ms=1)
        t = I2CTarget("flash", 0x20)
        off = Facts.BIN_LAYOUT["version"][0]
        try:
            d = sb.read_burst(t, off, 48, page=Facts.SLAVES["isp_page_len"])
            print(f"flash @0x{off:X}: {d[:32].hex(' ')}")
            txt = bytes(b for b in d if 0x20 <= b < 0x7F).decode()
            print(f"ASCII: {txt!r}   <- expect live fw '009' + 'MAG 341CQ X28'")
        except Exception as e:
            print(f"flash read via 0x20 failed: {e}")

    ok = isp.exit_isp(bus)
    time.sleep(1.5)
    scan(bus, "after exit  ")
    ed = edid_head(bus)
    print(f"post-exit EDID head {ed[:8].hex()}  exit_ok={ok}")
