#!/usr/bin/env python3
"""Discriminate 'framing wrong' vs 'slave absent' for the flash path.

Uses ONLY the raw request layout already proven in t_raw.py:
   addr field = ((slave8 << 8) | reg8) << 4        (RM puts addr<<4 on wire)
   cmd nibble = I2C op: 0x0 wr / 0x1 rd / 0x4 wr|MOT / 0x5 rd|MOT
   size field = byte count - 1
   (native sanity: txn(0x9, reg<<2) reads DPCD)

Sequence (all reversible / read-only):
  1. EDID oracle   -- prove framing (expect NACK on pointer write -- we do
                      NOT disturb 0x50 -- just probe the address phase)
  2. 0x37 ISP status read before entry
  3. ISP entry (magic 0x94) -> status 0xca
  4. probe 0x20 while ISP alive: bare addr-write framing variants
  5. single pointer write to 0x20 (only variant that ACKs), ALWAYS followed
     by pointer restore write, then status re-check
  6. exit ISP (0x24), verify normal mode + EDID

No erase/program opcodes anywhere. Run as root.
"""
import sys, time
sys.path.insert(0, str(__import__("pathlib").Path(__file__).resolve().parent))
from msi_isp.nvbus import NvRMAuxBus
from msi_isp.isp import enter_isp, exit_isp, isp_alive
from msi_isp import Facts

REP = {0: "ACK", 1: "NACK", 2: "DEFER", 3: "TIMEOUT", 4: "I2CNACK", 8: "I2CDEFER"}


def main():
    b = NvRMAuxBus()
    rm, DID = b.rm, b.display_id

    def txn8(slave8, reg, cmd, data=b"", n=0, ao=0):
        """Proven I2C request layout: ((slave8<<8)|reg)<<4."""
        return rm.aux(DID, ((slave8 << 8) | (reg & 0xFF)) << 4,
                      data=data, req=cmd, typ=0, addr_only=bool(ao))

    def txnnat(reg, cmd, data=b"", n=0):
        """Proven native layout: reg<<2."""
        return rm.aux(DID, (reg << 2), data=data, req=cmd, typ=8)

    print("== 0. native sanity: DPCD0 (expect 0x12) ==")
    name, d, st = txnnat(0x0000, 0x9, n=1)
    print(f"  DPCD0={d[0]:#04x} {name}" if d else f"  {name} st={st:#x}")

    print("\n== 1. framing oracle: bare address phase on 0x50/0x51 ==")
    for s8 in (0xA0, 0xA1):
        name, _, _ = txn8(s8, 0x00, 0x1, n=0, ao=1)   # read addr phase only
        print(f"  addr-phase {s8:#04x} rd -> {name}")   # expect ACK on A0/A1

    print("\n== 2/3. ISP status before/after entry ==")
    name, d, _ = txn8(0x6F, 0x00, 0x1, n=1)
    print(f"  pre  0x6F rd1 -> {name} {d.hex(' ')}")
    idx, st = enter_isp(b)
    print(f"  entry: cand{idx} status {st:#04x}")
    name, d, _ = txn8(0x6F, 0x00, 0x1, n=1)
    print(f"  post 0x6F rd1 -> {name} {d.hex(' ') if d else ''}")

    print("\n== 4. probe 0x20 while ISP alive (addr-phase only) ==")
    acked = []
    for cmd, lbl in ((0x0, "wr"), (0x1, "rd"), (0x4, "wr|MOT"), (0x5, "rd|MOT")):
        name, _, _ = txn8(0x40, 0x00, cmd, ao=1)      # 8-bit 0x40 = 7bit 0x20
        print(f"  addr-phase 0x40 {lbl} -> {name}")
        if name in ("ACK", "I2CNACK") and cmd == 0x0:
            acked.append(lbl)

    print("\n== 5. single pointer write + mandatory restore ==")
    try:
        # save state: read current pointer back if interface supports it
        name, d0, _ = txn8(0x41, 0x00, 0x5, n=16)
        print(f"  pre-read 0x41(MOT) n16 -> {name} {d0.hex(' ') if d0 else ''}")
        name, _, _ = txn8(0x40, 0xF8, 0x4, data=b"\x00", n=1)   # ptr F8 00
        print(f"  ptr-write F800 -> {name}")
        name, d, _ = txn8(0x41, 0x00, 0x5, n=32)
        txt = "".join(chr(c) if 32 <= c < 127 else "." for c in (d or b""))
        print(f"  read n32 -> {name} {(d or b'').hex(' ')[:64]}")
        if d:
            print(f"  ascii: {txt}")
        # restore pointer to page 0 unconditionally
        rname, _, _ = txn8(0x40, 0x00, 0x4, data=b"\x00", n=1)
        print(f"  ptr-restore 0000 -> {rname}")
    finally:
        print("\n== 6. exit ISP, verify normal mode ==")
        exit_isp(b)
        time.sleep(0.3)
        st = isp_alive(b)
        name, d, _ = txn8(0x6F, 0x00, 0x1, n=1)
        print(f"  isp_alive={st and hex(st)}  status {d.hex(' ') if d else name}")
        ed = b.read(0x50, 8, warmup=True)
        print(f"  EDID head: {ed.hex(' ')}")
    print(f"\nACKED={acked}")


if __name__ == "__main__":
    main()
