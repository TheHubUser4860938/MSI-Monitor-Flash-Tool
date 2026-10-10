#!/usr/bin/env python3
"""15e: why did 0x28 answer '.009N' in the sweep but not standalone?

Hypotheses, tested in one pass:
  H1 two-phase reply: the write gets an immediate empty ack, and the
     RECORD frame is emitted late (or vice versa) -> read at t=0.3 AND
     t=3.3 after each write;
  H2 arming: the record only answers after preceding mailbox traffic
     (e.g. the sub-sweep context) -> sequence 0x00 -> 0x27 -> 0x28 and
     a tight repeat loop of 0x28.
Read-only, paced, same hygiene as the other mailbox scripts.
"""
import sys
import time

sys.path.insert(0, ".")
from msi_isp.cli import vendor_fw_version          # noqa: E402
from msi_isp.ddc import (DDC_SLAVE_W, RTBus,       # noqa: E402
                         ddc_parse_reply)
from msi_isp.isp import exit_isp                   # noqa: E402


def frame(rep):
    if rep and rep[0] != DDC_SLAVE_W and 0x80 <= (rep[0] if rep else 0) <= 0x8F:
        rep = bytes([DDC_SLAVE_W]) + rep          # prefix-repair the shift
    p = ddc_parse_reply(rep) if rep else None
    asc = "".join(chr(b) if 0x20 <= b < 0x7F else "." for b in rep[:14])
    return f"{rep[:14].hex(' ')} |{asc}| ok={p and p.get('ok')}"


def probe(rt, tag, body):
    pkt = bytes([0x51]) + body
    x = DDC_SLAVE_W
    for b in pkt:
        x ^= b
    pkt += bytes([x & 0xFF])
    rt.write(0x37, pkt, warmup=True)
    time.sleep(0.3)
    early = rt.read(0x37, 24)
    time.sleep(3.0)
    late = rt.read(0x37, 24)
    print(f"{tag:24} sent={pkt.hex(' ')}")
    print(f"{'':24} early(0.3s)={frame(early)}")
    print(f"{'':24} late (3.3s)={frame(late)}", flush=True)
    return early, late


def main():
    with RTBus(4) as rt:
        print(f"witness pre : fw={vendor_fw_version(rt)!r}")
        # H2 sequence
        probe(rt, "arm 0x00", bytes([0x85, 0xA0, 0x00, 0, 0, 0]))
        probe(rt, "arm 0x27", bytes([0x85, 0xA0, 0x27, 0, 0, 0]))
        hit = probe(rt, "seq 0x28", bytes([0x85, 0xA0, 0x28, 0, 0, 0]))
        if b".009" not in (hit[0] + hit[1]):
            probe(rt, "repeat 0x28 #1", bytes([0x85, 0xA0, 0x28, 0, 0, 0]))
            probe(rt, "repeat 0x28 #2", bytes([0x85, 0xA0, 0x28, 0, 0, 0]))
            probe(rt, "repeat 0x28 #3", bytes([0x85, 0xA0, 0x28, 0, 0, 0]))
            # H1-ish: does a plain n2 form of 0x28 arm differently?
            probe(rt, "n2 0x28", bytes([0x82, 0xA0, 0x28]))
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
