#!/usr/bin/env python3
"""Discriminate 'framing wrong' vs 'slave absent' for the flash path.

Uses aux_i2c (verified transport: byte-identical EDID vs kernel) but with
hand-specified cmd words implementing DP spec I2C_AUX request semantics:
   cmd = op | MOT(0x4)        op: 0 wr / 1 rd / 2 wr-status
   addr = PLAIN 7-bit slave   (verified form for this control)
The DP-spec start-address byte rides IN the data payload, like the kernel's
drm_dp_i2c_do_msg does (addr phase, then data message).

All operations reversible or read-only, with pointer restore. Run as root.
"""
import sys, time
sys.path.insert(0, str(__import__("pathlib").Path(__file__).resolve().parent))
from msi_isp.nvbus import NvRMAuxBus
from msi_isp.isp import enter_isp, exit_isp, isp_alive

WR, RD, WRST = 0x0, 0x1, 0x2
MOT = 0x4


def main():
    b = NvRMAuxBus()
    rm, DID, SUB = b.rm, b.display_id, b.sub_inst
    T = lambda s7, req, d=b"", mot=False, ao=False: rm.aux_i2c(
        DID, s7, req, data=d, mot=mot, addr_only=ao, subdevice=SUB)
    # (call sites use ao= keyword; aux_i2c kwarg is addr_only — mapped here)

    print("== 1. bare address phase, read direction (non-invasive oracle) ==")
    for s7, lbl in ((0x50, "EDID"), (0x37, "DDC"), (0x20, "ISP-cand"),
                    (0x22, "MCU-reg"), (0x21, "unused"), (0x17, "unused")):
        name, _ = T(s7, RD, mot=True, ao=True)   # addr phase read only
        print(f"  {lbl:8} {s7:#04x} addr-rd -> {name}")

    print("\n== 2. ISP status read via proven ISP framing (pre-entry) ==")
    d = b.read(0x37, 1, warmup=True)
    print(f"  status pre : {d.hex(' ') if d else 'none'}")

    idx, st = enter_isp(b, verbose=False)
    print(f"  entry      : cand{idx} status {st:#04x}")
    d = b.read(0x37, 1)
    print(f"  status post: {d.hex(' ') if d else 'none'}")

    print("\n== 3. while ISP alive: address-phase probes (bare writes) ==")
    for s7 in (0x20, 0x22, 0x18, 0x19, 0x1B, 0x41 & 0x7F):
        name, _ = T(s7, WR, mot=True, ao=True)
        print(f"  {s7:#04x} addr-wr -> {name}")

    print("\n== 4. ISP-mode message to 0x20, exactly kernel msg shape ==")
    # msg = [addr-wr][data MOT 'F8 00'][addr close] via one bus.write
    try:
        b.write(0x20, bytes([0xF8, 0x00]))
        print("  write F800 -> ACK")
        name, d = T(0x20, RD, data=bytes([32]), mot=True)
        txt = "".join(chr(c) if 32 <= c < 127 else "." for c in (d or b""))
        print(f"  read32 -> {name} {(d or b'').hex(' ')[:70]}")
        if d:
            print(f"  ascii  : {txt}")
        b.write(0x20, bytes([0x00, 0x00]))            # restore pointer
        print("  ptr restore -> done")
    except OSError as e:
        print(f"  write F800 -> {e}")

    print("\n== 5. also try 0x22 MCU-register style: write F8 idx, read back ==")
    try:
        b.write(0x22, b"\xF8\x00")
        d = b.read(0x22, 16)
        print(f"  0x22 rd16 -> {d.hex(' ') if d else 'empty'}")
    except OSError as e:
        print(f"  0x22 -> {e}")

    print("\n== 6. exit ISP, verify normal ==")
    exit_isp(b)
    time.sleep(0.3)
    d = b.read(0x37, 1, warmup=True)
    print(f"  status     : {d.hex(' ') if d else 'none'}  "
          f"isp_alive={isp_alive(b)}")
    ed = b.read(0x50, 8, warmup=True)
    print(f"  EDID head  : {ed.hex(' ')}")


if __name__ == "__main__":
    main()
