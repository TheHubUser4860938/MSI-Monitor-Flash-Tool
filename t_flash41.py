#!/usr/bin/env python3
"""Flash-read probe on the CORRECT slave: 0x41 (7-bit).

Disasm proof (Comm.dll ReadFlashData @0x7e50):
    push buffer; push len; push addr; push addr>>16; push 0x41; call I2CRead
I2CRead (@0x4a20, comm-type=1/AUX): slave byte = arg, 16-bit reg address,
page chunks (<=0x18). Flash slave on the wire = 0x41, NOT 0x20.

Protocol as the tool runs it:
    I2CRead(0x41, addr16, buf, len)  — with I2C_PAGE_LEN chunking the addr
    nibbles iterate; simplest reading: address-carrying request to 0x41,
    then read burst.  We emulate via aux_i2c verified transport.

Read-only. Pointer left wherever; exit ISP at end. Run as root.
"""
import sys, time
sys.path.insert(0, str(__import__("pathlib").Path(__file__).resolve().parent))
from msi_isp.nvbus import NvRMAuxBus
from msi_isp.nvrm import AUX_REQ_WRITE, AUX_REQ_READ
from msi_isp.isp import enter_isp, exit_isp, isp_alive

FLASH7 = 0x41          # <-- the constant from the disasm
ORACLE = b"MAG 341CQ"


def main():
    b = NvRMAuxBus()
    rm, DID, SUB = b.rm, b.display_id, b.sub_inst
    T = lambda s7, req, d=b"", mot=False, ao=False: rm.aux_i2c(
        DID, s7, req, data=d, mot=mot, addr_only=ao, subdevice=SUB)

    print("== 0. bare-write existence probe on 0x41 PRE-ISP (expect TIMEOUT) ==")
    name, _ = T(FLASH7, AUX_REQ_WRITE, mot=True, addr_only=True)
    print(f"  0x41 addr-wr pre  -> {name}")

    print("\n== 1. ISP entry ==")
    idx, st = isp_alive(b), None
    if idx is None:
        idx, st = enter_isp(b)
        print(f"  entered: cand{idx} status {st:#04x}")
    else:
        print(f"  already alive: {idx:#04x}")

    print("\n== 2. existence probe on 0x41 POST-ISP ==")
    name, _ = T(FLASH7, AUX_REQ_WRITE, mot=True, addr_only=True)
    print(f"  0x41 addr-wr post -> {name}")
    if name != "ACK":
        print("  slave absent even in ISP mode — trying 0x40/0x42/0x43 aliases")
        for alt in (0x20, 0x21, 0x22):
            name, _ = T(alt, AUX_REQ_WRITE, mot=True, addr_only=True)
            print(f"  {alt:#04x} addr-wr     -> {name}")

    print("\n== 3. flash read at 0xF800 (full-message style) ==")
    ok = False
    try:
        # style A: one write message carrying the 16-bit address, then read
        b.write(FLASH7, bytes([0xF8, 0x00]))
        print("  wr F800 -> ACK")
        d = b.read(FLASH7, 48)
        txt = "".join(chr(c) if 32 <= c < 127 else "." for c in d)
        print(f"  rd48    -> {d.hex(' ')[:70]}")
        print(f"  ascii   -> {txt}")
        ok = ORACLE in d
    except OSError as e:
        print(f"  style A failed: {e}")
        # style B: address inside the request (t_kern6 raw style)
        for aw in ((((FLASH7 << 1) << 8) | 0xF8) << 4,
                   ((FLASH7 << 8) | 0xF8) << 4):
            name, d = rm.aux_i2c(DID, FLASH7, AUX_REQ_WRITE,
                                 data=bytes([0x00]), mot=True, subdevice=SUB)
            print(f"  style B addr={aw:#08x} wr -> {name}")

    print("\n== 4. cleanup: exit ISP, verify normal ==")
    exit_isp(b)
    time.sleep(0.3)
    print(f"  isp_alive={isp_alive(b)}")
    ed = b.read(0x50, 8, warmup=True)
    print(f"  EDID head = {ed.hex(' ')} (expect 00 ff ff ff ff ff ff 00)")
    print(f"\nRESULT flash-read-0x41 = {ok}")


if __name__ == "__main__":
    main()
