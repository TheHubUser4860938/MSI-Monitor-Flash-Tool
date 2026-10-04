"""Decisive: switch input to HDMI via DDC/CI (VCP 0x60), then probe ISP slaves
on the HDMI plain-I2C bus, normal + ISP-alive. Revert to DP-1 at the end."""
import sys, time, subprocess
sys.path.insert(0, ".")
from msi_isp.ddc import RTBus
from msi_isp import isp

BUS = 3  # the HDMI-attached adapter (HDMI-A-1)
def ddc(b, code, val=None):
    cmd = ["ddcutil", "--bus", str(b), "getvcp" if val is None else "setvcp", code]
    if val is not None: cmd.append(val)
    r = subprocess.run(cmd, capture_output=True, text=True, timeout=20)
    return (r.stdout or r.stderr).strip().splitlines()[-1] if (r.stdout or r.stderr) else "rc=%d" % r.returncode

def probe_all(bus):
    with RTBus(BUS) as b_:
        res = {}
        for a in (0x20, 0x22, 0x18, 0x19, 0x1a, 0x1b, 0x37, 0x50):
            res[a] = b_.probe(a)
    return "  ".join(f"{a:#04x}:{'ACK' if v else '---'}" for a, v in res.items())

print("start input:", ddc(BUS, "60")[:80])
ok = True
try:
    print("switch ->HDMI-1:", ddc(BUS, "0x60", "0x11")[:80])
    time.sleep(3)
    print("input now:", ddc(BUS, "60")[:80])
    print("normal mode :", probe_all(BUS))
    with RTBus(BUS) as b_:
        try:
            cand, st = isp.enter_isp(b_, verbose=False)
            print(f"ISP ALIVE cand#{cand} status={st:#04x}")
        except Exception as e:
            print("ISP entry failed:", e); ok = False
    print("ISP mode    :", probe_all(BUS))
    # if 0x22 alive: read reg 0x60/0x61 window via plain pointer read
    with RTBus(BUS) as b_:
        for slave in (0x22, 0x20):
            try:
                b_.write(slave, b"\x00"); time.sleep(0.005)
                d = b_.read(slave, 16)
                print(f"  read 0x{slave:02x}@0: {d[:16].hex(' ')}")
            except Exception as e:
                print(f"  read 0x{slave:02x}: {e}")
finally:
    print("revert ->DP-1:", ddc(BUS, "0x60", "0x0f")[:80])
    time.sleep(3)
    print("input final:", ddc(BUS, "60")[:80])
    with RTBus(BUS) as b_:
        b_.write(0x50, b"\x00"); ed = b_.read(0x50, 8)
    print("EDID head:", ed[:8].hex(), "OK" if ed[:7]==b'\x00\xff'*6+b'\x00' else "CHECK")
