#!/usr/bin/env python3
"""15g: THE probe -- slave 0x35 (8-bit 0x6A), the MSTAR-style scaler
mailbox that the vendor tool's whole ISP-control ladder rides
(slots +0x74/+0x78, reg 0xCA). Session 14k's sweep listed 0x35 as
'TIMEOUT', but that run's ACK column under-reported (it marked
0x30/0x37/0x4a/0x4b/0x50 silent too, refuted twice since) -- so 0x35
is effectively UNTESTED on this box.

Cells, safest first, both transports:
  P1 bare-address probe (pure address-phase read, like every 14k probe)
  P2 pointer-style write [0x00] (the T1-proven-safe class on emulated
     slaves -- 0xCA-register devices take it as an address set; monitor
     state witness follows every cell)
  P3 read 4 bytes (device-register peek -- the engine's read slot does
     exactly this shape)
  P4 reg-write [0xCA,0x01] (the engine's first ladder command shape:
     'enable ISP program channel'; worst case = scaler ISP state, which
     the standard 0x24 exit + witnesses restore; monitor survived
     strictly-worse traffic in 14p+)
After each cell: FW query + EDID head witnesses; on FW-query failure:
ISP exit (0x24 on 0x37) + re-witness, and we STOP (never stack risk).
"""
import sys
import time

sys.path.insert(0, ".")
from msi_isp.auxdev import AuxDevBus               # noqa: E402
from msi_isp.cli import vendor_fw_version          # noqa: E402
from msi_isp.ddc import RTBus                      # noqa: E402
from msi_isp.isp import exit_isp                   # noqa: E402

SLAVE = 0x35


def try_read(bus, n):
    try:
        return bus.read(SLAVE, n), None
    except Exception as e:                          # noqa: BLE001
        return None, f"{type(e).__name__}:{e}"


def try_write(bus, data):
    try:
        bus.write(SLAVE, data)
        return True, None
    except Exception as e:                          # noqa: BLE001
        return False, f"{type(e).__name__}:{e}"


def run(label, bus):
    print(f"== {label} ==")
    try:
        ack = bus.probe(SLAVE)
    except Exception as e:                          # noqa: BLE001
        ack = f"ERR {type(e).__name__}"
    print(f"  P1 bare-address probe: {ack}")
    b, err = try_read(bus, 4)
    print(f"  P3 read 4B           : {b.hex(' ') if b else 'ERR ' + str(err)}")
    ok, err = try_write(bus, b"\x00")
    print(f"  P2 pointer write 00  : {'OK' if ok else 'ERR ' + str(err)}")
    b, err = try_read(bus, 4)
    print(f"     read-after        : {b.hex(' ') if b else 'ERR ' + str(err)}")
    ok, err = try_write(bus, bytes([0xCA, 0x01]))
    print(f"  P4 write CA 01       : {'OK' if ok else 'ERR ' + str(err)}")
    b, err = try_read(bus, 4)
    print(f"     read-after        : {b.hex(' ') if b else 'ERR ' + str(err)}")
    time.sleep(0.3)


def witness(rt):
    try:
        fw = vendor_fw_version(rt)
    except Exception as e:                          # noqa: BLE001
        fw = f"ERR {type(e).__name__}"
    try:
        rt.warmup()
        rt.write(0x50, b"\x00")
        head = rt.read(0x50, 8).hex(" ")
    except Exception:                               # noqa: BLE001
        head = "ERR"
    print(f"  witness: fw={fw!r} edid={head}")
    return fw.startswith("FW")


def main():
    with RTBus(4) as rt:
        print(f"witness pre : fw={vendor_fw_version(rt)!r}")
        run("i2c-dev /dev/i2c-4", rt)
        if not witness(rt):
            print("  !! FW query failed -- ISP exit, STOP before relay run")
            exit_isp(rt)
            time.sleep(1.0)
            witness(rt)
            return
    with AuxDevBus() as rb:
        rb.unlock("15g 0x35 probe (bare reads outside gate band)")
        run("--auxdev kernel relay", rb)
    with RTBus(4) as rt:
        if not witness(rt):
            exit_isp(rt)
            time.sleep(1.0)
            witness(rt)
        print("\n15g 0x35 evidence captured -- verdict in STATUS")


if __name__ == "__main__":
    main()
