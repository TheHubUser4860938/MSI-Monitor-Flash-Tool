"""2-byte register addressing on ISP slaves, ISP-alive, over plain i2c-dev.
Write pattern per I2CWrite(comm) = [reg_hi, reg_lo, ...data]; read pattern per
ReadReg = [reg_hi?] pointer then burst. Probe forms, judge by ACK + reply."""
import sys, time
sys.path.insert(0, ".")
from msi_isp.ddc import RTBus
from msi_isp import isp

BUS = 3
def w(bus, slave, data):
    try:
        bus.write(slave, bytes(data)); return "ACK"
    except Exception as e:
        return ("EIO" if "5" in str(e.args[:1]) or "Input/output" in str(e) else str(e)[:24])
def r(bus, slave, n):
    try:
        return bus.read(slave, n).hex(" ")
    except Exception as e:
        return f"err:{str(e)[:20]}"

with RTBus(BUS) as bus:
    try:
        cand, st = isp.enter_isp(bus, verbose=False)
        print(f"ISP ALIVE cand#{cand} status={st:#04x}", flush=True)
    except Exception as e:
        sys.exit(f"ISP entry failed: {e}")
    try:
        for slave in (0x4a, 0x22, 0x47, 0x53):  # 0x94/2, 0x44/2, from magic triples
            print(f"-- slave 0x{slave:02x}")
            # (a) plain read (no pointer): does it answer unsolicited?
            print("   naked read   :", r(bus, slave, 8))
            # (b) 2-byte reg pointer then read
            bus.select(slave) if hasattr(bus,'select') else None
            s = w(bus, slave, [0x00, 0x00]); print("   ptr 0000     :", s)
            if s == "ACK": print("   read after   :", r(bus, slave, 8))
            s = w(bus, slave, [0x00, 0x60]); print("   ptr 0060     :", s)
            if s == "ACK": print("   read after   :", r(bus, slave, 8))
            # (c) write reg form [hi, lo, val] (Flash.dat semantics)
            s = w(bus, slave, [0x00, 0x60, 0x00]); print("   wr 0060<=00  :", s)
            # (d) 8-bit reg pointer (old form)
            s = w(bus, slave, [0x60]); print("   ptr8 60      :", s)
            if s == "ACK": print("   read after   :", r(bus, slave, 8))
    finally:
        ok = isp.exit_isp(bus)
        time.sleep(1)
        print(f"exit_isp={ok}")
        bus.write(0x50, b"\x00")
        ed = bus.read(0x50, 8)
        good = ed[:8] == b"\x00\xff\xff\xff\xff\xff\xff\x00"
        print("EDID after:", ed[:8].hex(), "OK" if good else "CHECK")
