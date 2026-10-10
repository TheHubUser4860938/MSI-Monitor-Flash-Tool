#!/usr/bin/env python3
"""15e: clean capture of the DELAYED record frame (two-phase mailbox).

State probe showed: write -> frame@0.3s (empty ack) -> frame@~3s (the
record; sometimes head-chomped by the 0x37 cache quirk). Capture right:
after the write, sleep to t=2.5 s then POLL fast reads for the first
frame with a NON-ZERO payload length (flag byte != 0x80) -- that's the
record frame arriving whole. Ladder a few record subs with it.
"""
import sys
import time

sys.path.insert(0, ".")
from msi_isp.cli import vendor_fw_version          # noqa: E402
from msi_isp.ddc import (DDC_SLAVE_W, RTBus,       # noqa: E402
                         ddc_parse_reply)
from msi_isp.isp import exit_isp                   # noqa: E402


def capture_record(rt, body, window=(2.7, 5.5)):
    """Collect EVERY frame visible after t=2.7 s (immediate ack is stale
    by then; anything we still see is ack-replacement or the record)."""
    pkt = bytes([0x51]) + body
    x = DDC_SLAVE_W
    for b in pkt:
        x ^= b
    pkt += bytes([x & 0xFF])
    rt.write(0x37, pkt, warmup=True)
    t0 = time.time()
    while time.time() - t0 < window[0]:
        time.sleep(0.05)
    frames = []
    seen = set()
    while time.time() - t0 < window[1]:
        rep = rt.read(0x37, 30)
        p = ddc_parse_reply(rep) if rep else None
        if p and p["ok"] and rep[:3] not in seen:
            seen.add(rep[:3])
            dt = time.time() - t0
            frames.append((round(dt, 2), rep, p))
            if p.get("payload") and len(p["payload"]) > 1:
                break                     # record frame found
        time.sleep(0.05)
    return pkt, frames


def main():
    subs = [int(a, 0) for a in sys.argv[1:]] or [0x28, 0x00]
    rounds = 3
    with RTBus(4) as rt:
        print(f"witness pre : fw={vendor_fw_version(rt)!r}")
        for s in subs:
            for rnd in range(rounds):
                pkt, frames = capture_record(rt, bytes([0x85, 0xA0, s, 0, 0, 0]))
                desc = "; ".join(
                    f"t={t}s {rep[:16].hex(' ')} "
                    f"|{''.join(chr(b) if 0x20 <= b < 0x7F else '.' for b in rep[:16])}|"
                    for t, rep, p in frames) or "no clean frame in window"
                print(f"sub {s:#04x} r{rnd} sent={pkt.hex(' ')}")
                print(f"{'':16} {desc}", flush=True)
                time.sleep(0.5)
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
