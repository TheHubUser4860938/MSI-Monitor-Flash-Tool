#!/usr/bin/env python3
"""Test per-command ISP framing on slave 0x37 (flashrom-style).

Evidence driving this:
  * status byte from 0x37 READ changes run to run (0xbe/0x0a/0x00...):
    auto-incrementing internal pointer == command/data mailbox model
  * Comm.dll dispatches flash IO through the SAME entry magic that
    autoenter wrote to 0x6F (=0x37); no other slave ever ACKed a WR
  * flashrom mstarddc_spi: after magic, IO goes to the DDC slave itself

Candidate read commands for flash addr 0xF800 (expect "012"+"MAG 341CQ"):
  C1 [0x11 F8 00 00]        mstarddc 24-bit
  C2 [0x11 00 F8 00]        16-bit big-endian in low 3
  C3 [0x11 F8 00]           16-bit only
  C4 [0x11 00 F8]
  C5 [0x01 F8 00]           RTD-style read opcode?
  C6 [0xF8 00]              raw 16-bit pointer (ReadFlashData model)
After each command: read 32 bytes from 0x37 (plain read message).
Between candidates, re-send entry magic 0x94 (idempotent; proven).
Oracle: b"MAG 341CQ" in payload.  Read-mostly, exit ISP at end. Root only.
"""
import sys, time
sys.path.insert(0, str(__import__("pathlib").Path(__file__).resolve().parent))
from msi_isp.nvbus import NvRMAuxBus
from msi_isp.isp import enter_isp, exit_isp, isp_alive

ORACLE = b"MAG 341CQ"


def main():
    b = NvRMAuxBus()
    S = 0x37

    def rd(n=32):
        try:
            return b.read(S, n)
        except OSError as e:
            return f"ERR {e}".encode()[:n]

    print("baseline status:", rd(1).hex(" "))
    idx, st = enter_isp(b)
    print(f"entry cand{idx} status {st:#04x}; now status={rd(1).hex(' ')}")

    cands = [
        ("C1 11 F8 00 00", bytes([0x11, 0xF8, 0x00, 0x00])),
        ("C2 11 00 F8 00", bytes([0x11, 0x00, 0xF8, 0x00])),
        ("C3 11 F8 00",    bytes([0x11, 0xF8, 0x00])),
        ("C4 11 00 F8",    bytes([0x11, 0x00, 0xF8])),
        ("C5 01 F8 00",    bytes([0x01, 0xF8, 0x00])),
        ("C6 F8 00",       bytes([0xF8, 0x00])),
        ("C7 31 F8 00 00", bytes([0x31, 0xF8, 0x00, 0x00])),  # 0x11|rd-bit?
    ]
    hit = None
    for tag, cmd in cands:
        # (re)assert ISP alive, cheaply, before every candidate
        if isp_alive(b) is None:
            try:
                b.write(S, b"\x94", warmup=True)
                time.sleep(0.2)
            except OSError:
                pass
        try:
            b.write(S, cmd)
            wname = "ACK"
        except OSError as e:
            print(f"  {tag:16s} write -> {e}")
            continue
        d = rd(32)
        asc = "".join(chr(c) if 32 <= c < 127 else "." for c in d)
        mark = " <== ORACLE" if ORACLE in d else ""
        print(f"  {tag:16s} {wname} rd32={d[:24].hex(' ')} |{asc[:16]}|{mark}")
        if ORACLE in d:
            hit = tag
            break

    exit_isp(b)
    time.sleep(0.3)
    ed = b.read(0x50, 8, warmup=True)
    print(f"\nexit; isp_alive={isp_alive(b)} EDID={ed.hex(' ')}")
    print(f"HIT={hit}")


if __name__ == "__main__":
    main()
