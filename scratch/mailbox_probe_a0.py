#!/usr/bin/env python3
"""15e: DDC/CI-ISP mailbox opcode 0xA0, paced per the vendor INI.

15d's first probe read replies at ~150 ms and got framed bytes for two
variants and ALL-ZERO for the third -- the INI's ulDelayTimeAfterDdcci-
Write=3000 says the monitor holds the bus busy up to 3 s after a vendor
write; zero reads are the busy window, not the answer. This ladder waits
the vendor delay before every read (with a small retry tail) across a
0xA0 argument matrix. Read-only packets (MCCS write-request then GET);
witnesses (vendor FW query + EDID head) before/after; if any variant
leaves the FW query unreadable we issue the standard ISP exit (0x24) and
re-witness -- full 14p hygiene. Never touches 0x22.
"""
import sys
import time

sys.path.insert(0, ".")
from msi_isp.cli import vendor_fw_version          # noqa: E402
from msi_isp.ddc import (DDC_SLAVE_W, RTBus,       # noqa: E402
                         ddc_parse_reply)
from msi_isp.isp import exit_isp                   # noqa: E402

VENDOR_DELAY = 3.0        # ini: ulDelayTimeAfterDdcciWrite
# args = the 4 bytes following opcode A0 inside a len-0x85 (n=5) frame
VARIANTS = [
    ("A0 zeros      ", bytes([0x85, 0xA0, 0x00, 0x00, 0x00, 0x00])),
    ("A0 sub=01     ", bytes([0x85, 0xA0, 0x01, 0x00, 0x00, 0x00])),
    ("A0 be (rd)    ", bytes([0x85, 0xA0, 0xBE, 0x00, 0x00, 0x00])),
    ("A0 FE E1 E6   ", bytes([0x85, 0xA0, 0xFE, 0xE1, 0xE6, 0x00])),
    ("A0 FF x4      ", bytes([0x85, 0xA0, 0xFF, 0xFF, 0xFF, 0xFF])),
    ("A0 n2 plain   ", bytes([0x82, 0xA0, 0x00])),
]


def send_paced(rt, body):
    pkt = bytes([0x51]) + body
    x = DDC_SLAVE_W
    for b in pkt:
        x ^= b
    pkt += bytes([x & 0xFF])
    rt.write(0x37, pkt, warmup=True)
    time.sleep(VENDOR_DELAY)
    for _ in range(4):                    # retry tail like AUX_NeedRetry
        rep = rt.read(0x37, 19)
        if rep and rep[0] == DDC_SLAVE_W:
            return pkt, rep
        time.sleep(0.4)
    return pkt, rep


def main():
    with RTBus(4) as rt:
        fw0 = vendor_fw_version(rt)
        print(f"witness pre : fw={fw0!r}")
        for tag, body in VARIANTS:
            pkt, rep = send_paced(rt, body)
            p = ddc_parse_reply(rep)
            pay = p["payload"].hex(" ") if p and p.get("payload") else ""
            print(f"{tag} sent={pkt.hex(' ')}")
            print(f"{'':16} reply={rep[:12].hex(' ')} chk_ok={p and p.get('ok')} payload={pay}")
            time.sleep(0.2)
        try:
            fw1 = vendor_fw_version(rt)
        except Exception as e:                        # noqa: BLE001
            print(f"witness post FAILED ({e}) -- issuing proven ISP exit")
            exit_isp(rt)
            time.sleep(VENDOR_DELAY)
            fw1 = vendor_fw_version(rt)
        rt.warmup()
        rt.write(0x50, b"\x00")
        ed = rt.read(0x50, 8)
        print(f"witness post: fw={fw1!r} edid_head={ed[:8].hex(' ')}")
        if fw0 != fw1:
            print("!! firmware query string CHANGED -- mailbox variant had "
                  "a visible state effect; investigate before any further "
                  "A0 traffic")


if __name__ == "__main__":
    main()
