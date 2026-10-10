#!/usr/bin/env python3
"""15e follow-up: pin down the A0 mailbox RECORD semantics discovered by
the sweep (sub 0x28 answered the flash version record '.009N').

Read-only probes, vendor-paced (3 s), each with a quirk-corrected clean
frame capture: read a generous N and if the leading 0x6E was dropped (the
known 0x37 first-byte shift), re-read once and prefix-repair. Variants
test (a) arg byte-order (is it (record, pad...) or a 32-bit address?),
(b) frame length (n2/n3/n5), (c) neighbors of the winning record. Full
ISP-exit + witness hygiene (same as mailbox_probe_a0). Run AFTER the
sweep finishes (single bus driver rule).
"""
import sys
import time

sys.path.insert(0, ".")
from msi_isp.cli import vendor_fw_version          # noqa: E402
from msi_isp.ddc import (DDC_SLAVE_W, RTBus,       # noqa: E402
                         ddc_parse_reply)
from msi_isp.isp import exit_isp                   # noqa: E402


def clean_read(rt, body, tries=4):
    pkt = bytes([0x51]) + body
    x = DDC_SLAVE_W
    for b in pkt:
        x ^= b
    pkt += bytes([x & 0xFF])
    rt.write(0x37, pkt, warmup=True)
    time.sleep(3.0)
    for i in range(tries):
        rep = rt.read(0x37, 24)
        if rep and rep[0] == DDC_SLAVE_W:
            return pkt, rep, "direct"
        if rep and 0x80 <= rep[0] <= 0x8F:
            # first byte (0x6E) dropped by the read quirk: prefix-repair
            p = ddc_parse_reply(bytes([DDC_SLAVE_W]) + rep)
            if p and p.get("ok"):
                return pkt, bytes([DDC_SLAVE_W]) + rep, "prefix-repaired"
        time.sleep(0.5)
    return pkt, rep, "no-framed-reply"


def show(tag, pkt, rep, how):
    p = ddc_parse_reply(rep)
    asc = "".join(chr(b) if 0x20 <= b < 0x7F else "." for b in rep[:12])
    print(f"{tag:26} sent={pkt.hex(' ')}\n{'':26} reply={rep[:12].hex(' ')} "
          f"|{asc}| frame={how} payload_ok={p and p.get('ok')}")


def main():
    subs = [int(a, 0) for a in sys.argv[1:]] or [0x28]
    with RTBus(4) as rt:
        print(f"witness pre : fw={vendor_fw_version(rt)!r}")
        for s in subs:
            variants = [
                ("LE pad       ", bytes([0x85, 0xA0, s, 0, 0, 0])),
                ("BE pad       ", bytes([0x85, 0xA0, 0, 0, 0, s])),
                ("mid1         ", bytes([0x85, 0xA0, 0, s, 0, 0])),
                ("mid2         ", bytes([0x85, 0xA0, 0, 0, s, 0])),
                ("n2           ", bytes([0x82, 0xA0, s])),
                ("n3           ", bytes([0x83, 0xA0, s, 0x00])),
                ("neighbor-1   ", bytes([0x85, 0xA0, (s - 1) & 0xFF, 0, 0, 0])),
                ("neighbor+1   ", bytes([0x85, 0xA0, (s + 1) & 0xFF, 0, 0, 0])),
            ]
            for tag, body in variants:
                pkt, rep, how = clean_read(rt, body)
                show(f"sub {s:#04x} {tag}", pkt, rep, how)
        try:
            fw1 = vendor_fw_version(rt)
        except Exception as e:                     # noqa: BLE001
            print(f"witness post FAILED ({e}) -- ISP exit")
            exit_isp(rt)
            time.sleep(3.0)
            fw1 = vendor_fw_version(rt)
        rt.warmup()
        rt.write(0x50, b"\x00")
        print(f"witness post: fw={fw1!r} edid={rt.read(0x50, 8).hex(' ')}")


if __name__ == "__main__":
    main()
