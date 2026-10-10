#!/usr/bin/env python3
"""T0b (session 15b): VCP write acceptance through OUR raw plumbing.

T0a proved ddcutil's setvcp lands (exit 0). This proves OUR framing lands,
and measures two facts the write driver will need:
  1. ACCEPTANCE -- decided honestly: set brightness to a different value,
     re-READ it through our GET path (live replies proven), then restore.
     State change is the proof; no reliance on reading the write-reply.
  2. IN-BAND REPLY -- can we read the 0x6E...result packet after a set at
     all on this stack (ddcutil says yes, our naive read saw 5x00)? Retry
     ladder records when/if bytes appear; that answer shapes ScalerBus
     verification design.

Reply layout for THIS monitor (calibrated 2026-10-10 against ddcutil):
  payload = [02 flag][result][vcp][filler][MH][ML][SH][SL]   -> cur = p[6:8]
Reversible by construction: ends exactly at the value it started at.
"""
import sys
import time

sys.path.insert(0, ".")
from msi_isp.cli import vendor_fw_version          # noqa: E402
from msi_isp.ddc import (DDC_SLAVE_W, RTBus,       # noqa: E402
                         ddc_check_write, ddc_packet, ddc_parse_reply)


def vcp_get(rt, vcp):
    rt.warmup()
    rt.write(0x37, ddc_packet(0x01, bytes([vcp])))
    time.sleep(0.05)
    p = ddc_parse_reply(rt.read(0x37, 19))
    if not p or not p["ok"]:
        return None, p
    return (p["payload"][6] << 8) | p["payload"][7], p


def vcp_set(rt, vcp, value):
    pkt = ddc_packet(0x03, bytes([vcp, (value >> 8) & 0xFF, value & 0xFF]))
    rt.write(0x37, pkt, warmup=True)
    return pkt


def reply_probe(rt):
    """Try to read the write-reply with escalating delays (informational)."""
    tries = []
    for delay in (0.0, 0.04, 0.08, 0.16, 0.32):
        time.sleep(delay if delay else 0)
        raw = rt.read(0x37, 5)
        tries.append((delay, raw))
        if raw and raw[0] == DDC_SLAVE_W:
            p = ddc_parse_reply(raw)
            if p and p["ok"]:
                return raw, tries
    return tries[-1][1], tries


def main():
    with RTBus(4) as rt:
        fw0 = vendor_fw_version(rt)
        cur, pre = vcp_get(rt, 0x10)
        if cur is None:
            sys.exit(f"baseline GET malformed: {pre}")
        print(f"pre  fw={fw0!r}  brightness={cur}  raw={pre['raw'].hex(' ')}")

        other = 50 if cur != 50 else 40
        pkt = vcp_set(rt, 0x10, other)
        print(f"set  packet={pkt.hex(' ')} checksum_ok={ddc_check_write(pkt, DDC_SLAVE_W)}")
        got, tries = reply_probe(rt)
        print(f"inband reply={got[:5].hex(' ')} attempts="
              + ", ".join(f"{d:.2f}s:{r[:3].hex() or '-'}" for d, r in tries))
        mid, _ = vcp_get(rt, 0x10)
        print(f"post-set GET brightness={mid}  (want {other})")

        vcp_set(rt, 0x10, cur)                     # restore
        time.sleep(0.1)
        back, post = vcp_get(rt, 0x10)
        fw1 = vendor_fw_version(rt)
        print(f"restore GET brightness={back}  (want {cur})  fw={fw1!r}")

        accepted = mid == other and back == cur
        untouched = post["raw"] == pre["raw"] and fw0 == fw1
        print(f"\nT0b {'PASS' if accepted and untouched else 'FAIL'}: our raw "
              f"0x03 set-packet {'ACCEPTED' if accepted else 'NOT accepted'}"
              f" by the sink (state moved {cur}->{other}->{cur}); "
              f"monitor byte-state restored = {untouched}")
        if accepted and got and got[0] != DDC_SLAVE_W:
            print("note: in-band write-REPLY never read as 0x6E... on this "
                  "stack -> write verification must ride on GET round-trips")


if __name__ == "__main__":
    main()
