#!/usr/bin/env python3
"""15j: second-generation DDC/CI write-opcode probe — the roster the
first one (session 8/13: 02/03/04/32/33/3B/00, all rejected) missed:

  0x07  declared by the X28's own capabilities (Timing Request)
  0x0C  declared (Save Settings)
  0x85  the CpIspTool-lineage strInitialDdcciCmd opcode (INI says
        strInitialDdcciCmd = [0x85, 0xA0] — the two-byte PAIR itself
        was never sent: #13 probed bare 0xA0 operands, not this)
  0xA0  again, but as write-with-operand (pair form), not mailbox
  0xC2/0xC4/0xC6/0xC8  the undocumented commands ddcutil's monitor
        notes attribute to Realtek controllers

Grammar A = the vendor window form (ddc_packet(op, REG+data) writing
the SAME bytes back to the answered version register — state
preserving if accepted; judged by reply result byte + 0x01 read-back).
Grammar B = bare two-byte MCCS form for the 85/A0 pair specifically.

Stale-cache rule: a reply 'counts' only if its raw bytes differ from
the previous cell's reply (no re-serve) or the 0x01 read-back changed.
Judgement legend: 0x02 = window-accept marker (like the proven read);
0x00/0x01/absent = rejected. Blast radius: worst case the version
string glitches until power cycle; flash untouched.
"""
import sys
import time
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent.parent))
from msi_isp.ddc import RTBus, ddc_packet, ddc_parse_reply  # noqa: E402

BUS = 4
REG = bytes([0xFE, 0xE1, 0xE6])
BUSY = 0.08
PAC = 3.2
ROSTER = (0x07, 0x0C, 0x85, 0xA0, 0xC2, 0xC4, 0xC6, 0xC8)


def rd01(bus, reg):
    bus.warmup()
    bus.write(0x37, ddc_packet(0x01, reg))
    time.sleep(BUSY)
    return ddc_parse_reply(bus.read(0x37, 15)) or {}


def wr(bus, op, body):
    bus.warmup()
    bus.write(0x37, ddc_packet(op, body))
    time.sleep(BUSY)
    raw = bus.read(0x37, 3)
    if len(raw) < 2 or raw[0] not in (0x78, 0x7E, 0x6E):
        return {"result": None, "raw": raw.hex()}
    return {"result": raw[1], "raw": raw.hex()}


def main():
    with RTBus(BUS) as bus:
        base = rd01(bus, REG)
        if not base.get("payload"):
            sys.exit("baseline 0x01 read dead — abort")
        asc = bytes(c for c in base["payload"] if 32 <= c < 127)
        orig = asc[:4]
        print(f"baseline: {orig!r} raw={base.get('raw', b'').hex()[:24]}")
        last_raw = "init"
        for op in ROSTER:
            forms = [("A:REG+data", REG + orig)]
            if op in (0x85, 0xA0):
                forms.append(("B:pair(operand)", bytes([0xA0 if op == 0x85
                                                       else 0x85])))
            for tag, body in forms:
                time.sleep(PAC)
                try:
                    rep = wr(bus, op, body)
                except OSError as e:
                    print(f"op {op:#04x} {tag}: bus error {e}")
                    continue
                stale = rep["raw"] == last_raw
                verdict = ("stale-cache" if stale else
                           "ACCEPT-CANDIDATE" if rep["result"] == 0x02 else
                           f"reject(res={rep['result'] and hex(rep['result'])})")
                print(f"op {op:#04x} {tag}: raw={rep['raw']} -> {verdict}")
                last_raw = rep["raw"]
                if verdict == "ACCEPT-CANDIDATE":
                    time.sleep(PAC)
                    back = rd01(bus, REG)
                    nsc = bytes(c for c in back.get("payload", b"")
                                if 32 <= c < 127)[:4]
                    note = ("unchanged (state-preserving OK)"
                            if nsc == orig else "CHANGED!")
                    print(f"    read-back {nsc!r} {note}")
        time.sleep(PAC)
        health = rd01(bus, REG)
        ok = b"FW" in health.get("payload", b"")
        print(f"post-health version-read: {'OK' if ok else 'FAIL'}")
        return 0 if ok else 1


if __name__ == "__main__":
    sys.exit(main())
