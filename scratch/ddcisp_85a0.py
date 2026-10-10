#!/usr/bin/env python3
"""15j: does the CpIspTool initial command [0x85, 0xA0] OPEN a lane?

wopcode_15j showed the pair form gets a REAL mailbox ack (6e 80 be =
the #13 valid-empty frame) while every other form got zero-lane. On
CpIspTool-lineage models that pair is 'enter ISP via DDCCI' — if OUR
unit's handler actually transitions state, the flash-lane slave 0x35
(allow-listed on i2c-dev, honest here) or the window read should start
answering. Cells: baseline -> send pair -> probe 0x35 + mailbox A0 +
window read -> repeat pair (idempotence + second-ack shape) -> health.

State-preserving for the monitor: one MCCS write of a vendor opcode,
exit path = 0xA0-grammar unknown, so we witness health at the end and
fall back on the proven 0x24 exit if the ISP bit happened to set.
"""
import sys
import time
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent.parent))
from msi_isp.ddc import RTBus, ddc_packet, ddc_parse_reply  # noqa: E402
from msi_isp.isp import isp_alive, exit_isp                 # noqa: E402

BUS, PAC, BUSY = 4, 3.2, 0.08


def rd01(bus):
    bus.warmup()
    bus.write(0x37, ddc_packet(0x01, bytes([0xFE, 0xE1, 0xE6])))
    time.sleep(BUSY)
    return ddc_parse_reply(bus.read(0x37, 15)) or {}


def send(bus, op, operand):
    bus.warmup()
    bus.write(0x37, ddc_packet(op, bytes([operand])))
    time.sleep(BUSY)
    raw = bus.read(0x37, 4)
    return raw.hex()


def cells(bus):
    s35 = bus.probe(0x35)
    alive = isp_alive(bus)
    ver = bytes(c for c in rd01(bus).get("payload", b"") if 32 <= c < 127)[:6]
    return f"0x35={'ACK' if s35 else 'no'} isp_alive={alive!r} ver={ver!r}"


def main():
    with RTBus(BUS) as bus:
        print("baseline      :", cells(bus))
        time.sleep(PAC)
        ack = send(bus, 0x85, 0xA0)
        print("send 85 A0    : reply-raw", ack)
        time.sleep(PAC)
        print("post-pair     :", cells(bus))
        time.sleep(PAC)
        ack2 = send(bus, 0x85, 0xA0)
        print("send 85 A0 #2 : reply-raw", ack2)
        time.sleep(PAC)
        print("post-pair-2   :", cells(bus))
        # mailbox read attempt (opcode A0 asking for data, #13 grammar)
        bus.warmup()
        bus.write(0x37, ddc_packet(0xA0, bytes([0xA0])))
        time.sleep(BUSY)
        print("mailbox A0 A0 :", bus.read(0x37, 8).hex())
        time.sleep(PAC)
        alive = isp_alive(bus)
        print(f"isp_alive     : {alive!r}")
        if alive and (alive & 0x80):
            print("ISP bit SET after 85 A0 — exiting cleanly with 0x24")
            print("exit_isp      :", exit_isp(bus))
        time.sleep(PAC)
        ok = b"FW" in rd01(bus).get("payload", b"")
        print("health        :", "OK" if ok else "FAIL")
        return 0 if ok else 1


if __name__ == "__main__":
    sys.exit(main())
