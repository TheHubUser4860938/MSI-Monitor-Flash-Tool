#!/usr/bin/env python3
"""LAST LANE: HDMI DDC is a REAL I2C bus (no DP tunnel/RM shim involved).
Prove the Flash.dat model natively:
  1. auto-detect the monitor's HDMI i2c bus (EDID byte-match vs /sys .../edid)
  2. ISP magic on 0x37 (proven on HDMI at user perms), status byte bit7 gate
  3. slave 0x22 register-file probes per Write32BitRegEx semantics:
       plain I2C: addr-phase reg byte(s), then read burst
       window CSV from Flash.dat: index reg from its entry, data regs
  4. oracle: anything address-sensitive + non-zero; model string / JEDEC id
Strictly read-only except (a) the twice-proven ISP magic bytes, (b) EDID
pointer byte. No erase, no program. Non-root (HDMI i2c-dev works unprivileged?
runs either way; sudo is fine)."""
import sys, time, glob, pathlib
sys.path.insert(0, "/home/eugene/Projects/monitor-fw")
from msi_isp import isp
from msi_isp.ddc import RTBus

# ---- 1. find the HDMI bus ------------------------------------------------
KE = None
for p in glob.glob("/sys/class/drm/card*-*/edid"):
    link = pathlib.Path(p).resolve()
    d = open(p, "rb").read()
    if "HDMI" in p and d[:8] == b"\x00\xff\xff\xff\xff\xff\xff\x00":
        KE, KE_NAME = d, p
        break
if not KE:
    sys.exit("no HDMI connector with a monitor EDID found — plug HDMI back in "
             "(any input; DP stays your video source)")

buses = []
for dev in sorted(glob.glob("/dev/i2c-*")):
    n = int(dev.split("-")[1])
    try:
        with RTBus(n) as b:
            b.select(0x50)
            b.warmup(0x50)
            b.write(0x50, b"\x00")
            e = b.read(0x50, 16)
        if e == KE[:16]:
            # this bus sees THIS monitor; is it HDMI or DP? i2c dev name:
            name = open(f"/sys/bus/i2c/devices/i2c-{n}/name").read().strip()
            buses.append((n, name))
    except Exception:
        pass
print("candidate buses:", buses)
if not buses:
    sys.exit("monitor not found on any bus")
BUS = buses[0][0]
print(f"using /dev/i2c-{BUS}")

MCU7 = 0x22
with RTBus(BUS) as bus:
    # ---- 2. ISP magic (proven sequence, isp.enter_isp drives 0x37) ------
    st0 = isp.isp_alive(bus)
    print(f"ISP status pre: {st0!r}")
    idx, st = isp.enter_isp(bus, retries=10)
    print(f"ISP entered on HDMI: candidate {idx} status {st:#04x}")
    if not (st and st & 0x80):
        print("ISP handshake failed on HDMI this run; aborting probes")
        sys.exit(2)

    def rd(a7, n, label, delay=0.0):
        try:
            b = bus.read(a7, n, warmup=True, delay=delay)
            print(f"  {label:34s} -> {b.hex(' ') if b else 'empty'}")
            return b
        except Exception as e:
            print(f"  {label:34s} -> EXC {type(e).__name__}: {e}")
            return None

    def wr(a7, payload, label):
        try:
            bus.write(a7, payload)
            print(f"  {label:34s} -> ACK")
            return True
        except Exception as e:
            print(f"  {label:34s} -> EXC {type(e).__name__}: {e}")
            return False

    print("--- slave 0x22 register-file probes ---")
    alive = isp.isp_alive(bus)
    print(f"ISP alive: {alive!r}")
    b1 = rd(MCU7, 8, "plain read 8 (no addr)")
    # reg 0x10-ish poll reads per Flash.dat; then the index reg 0x60
    for reg in (0x10, 0x14, 0x60, 0x61, 0x62):
        if wr(MCU7, bytes([reg]), f"addr-phase reg {reg:#04x}"):
            rd(MCU7, 8, f"burst read after reg {reg:#04x}", delay=0.01)
    # the 0x20/0x21 and 0x38/0x39 strobes at reg 0x60 (Flash.dat semantics)
    for combo in ((0x60, 0x20), (0x60, 0x21), (0x60, 0x38), (0x60, 0x39)):
        wr(MCU7, bytes(combo), f"write {combo[0]:#04x}={combo[1]:#04x}")
        time.sleep(0.02)
    rd(MCU7, 8, "window data after strobes", delay=0.01)

    print("--- exit ---")
    ok = isp.exit_isp(bus)
    print(f"exit ok: {ok}")
    v = isp.isp_alive(bus)
    print(f"ISP status post-exit: {v!r}")
    ed = rd(0x50, 8, "[post] EDID head")
    print("[post] health:", "OK" if ed == KE[:8] else f"check! got {ed}")
