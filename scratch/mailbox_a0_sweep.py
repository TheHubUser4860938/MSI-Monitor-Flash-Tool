#!/usr/bin/env python3
"""15e: full 0xA0 subcode sweep (open #13 closure evidence).

Every sub-argument 0x00-0xFF in the engine-shaped n=5 frame, vendor-paced
(3 s + retry tail per ulDelayTimeAfterDdcciWrite). Template answer from the
first ladder: 6e 80 be (= valid reply, EMPTY payload, checksum 0x50^6E^80).
Interesting = any reply whose payload is non-empty or whose shape differs
from the template; those are the candidates for a real record window.
Safety: read-only MCCS requests, ISP-exit + witness on any FW-query fail,
EDID head verified at the end. ~15 min.
"""
import sys
import time

sys.path.insert(0, ".")
from msi_isp.cli import vendor_fw_version          # noqa: E402
from msi_isp.ddc import (DDC_SLAVE_W, RTBus,       # noqa: E402
                         ddc_parse_reply)
from msi_isp.isp import exit_isp                   # noqa: E402

TEMPLATE = bytes.fromhex("6e 80 be".replace(" ", ""))


def send_paced(rt, body):
    pkt = bytes([0x51]) + body
    x = DDC_SLAVE_W
    for b in pkt:
        x ^= b
    pkt += bytes([x & 0xFF])
    rt.write(0x37, pkt, warmup=True)
    time.sleep(3.0)
    rep = b""
    for _ in range(4):
        rep = rt.read(0x37, 19)
        if rep and rep[0] == DDC_SLAVE_W:
            break
        time.sleep(0.4)
    return pkt, rep


def main():
    interesting, anomalous = [], []
    with RTBus(4) as rt:
        print(f"witness pre : fw={vendor_fw_version(rt)!r}", flush=True)
        for sub in range(256):
            body = bytes([0x85, 0xA0, sub, 0x00, 0x00, 0x00])
            pkt, rep = send_paced(rt, body)
            head = rep[:3]
            if rep[:3] == b"\x00\x00\x00" or not rep:
                anomalous.append((sub, "no-answer(zeros)"))
            elif head != TEMPLATE:
                p = ddc_parse_reply(rep)
                interesting.append((sub, rep[:12].hex(" "), p and p.get("ok")))
                print(f"  sub {sub:#04x} UNUSUAL: {rep[:12].hex(' ')}",
                      flush=True)
            if sub % 32 == 31:
                try:
                    fw = vendor_fw_version(rt)
                except Exception:                                   # noqa: BLE001
                    exit_isp(rt)
                    time.sleep(3.0)
                    fw = vendor_fw_version(rt)
                    anomalous.append((sub, "fw-query-failed->isp-exit"))
                print(f"  [{sub:#04x}] alive, fw={fw!r}", flush=True)
        # long-dwell recheck of the one variant that kept answering zeros
        for dwell in (6, 10):
            time.sleep(dwell)
            pkt, rep = send_paced(rt, bytes([0x85, 0xA0, 0xFE, 0xE1, 0xE6, 0x00]))
            print(f"recheck FE E1 E6 dwell={dwell}s: {rep[:8].hex(' ')}",
                  flush=True)
        rt.warmup()
        rt.write(0x50, b"\x00")
        print(f"witness post: fw={vendor_fw_version(rt)!r} "
              f"edid={rt.read(0x50, 8).hex(' ')}")
    print(f"\nsweep done: {len(interesting)} unusual replies, "
          f"{len(anomalous)} anomalies")
    for s, r, ok in interesting:
        print(f"  sub {s:#04x}: {r} chk_ok={ok}")
    for s, why in anomalous:
        print(f"  sub {s:#04x}: {why}")


if __name__ == "__main__":
    main()
