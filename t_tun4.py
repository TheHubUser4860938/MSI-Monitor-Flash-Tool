#!/usr/bin/env python3
"""Does ISP entry enable the DP I2C-tunnel capability on the branch?

Facts so far: RM I2C-mode works for 0x37/0x50 (verified byte-identical)
but TIMES OUT for 0x20/0x41 even while ISP alive. DP spec: pass-through to
internal-bus devices requires DPCD 0x00D0 bit7 (I2C_AUX_CAP) + settle
tuning regs 0x00D1-0x00D5. Pre-ISP read showed 0x00D0=0x01 (bit7 clear).

If entering ISP flips 0x00D0 bit7 (or the scaler exposes it only then),
the fix is: enable/settle-tune via native AUX (proven), then the verified
I2C primitives should reach 0x20.

All native-mode reads/writes to DPCD (0x00D0-0x00D5) — reversible writes
(restored after), flash untouched. Run as root.
"""
import sys, time
sys.path.insert(0, "/home/eugene/Projects/monitor-fw")
from msi_isp.nvbus import NvRMAuxBus
from msi_isp.nvrm import AUX_REQ_WRITE, AUX_REQ_READ
from msi_isp.isp import enter_isp, exit_isp, isp_alive


def nat_rd(b, reg, n=16):
    name, d, st = b.rm.aux(b.display_id, reg << 2, data=bytes(min(n, 16)),
                           req=0x9, typ=8)
    return name, (d or b"")[:n]


def nat_wr(b, reg, data):
    name, _, st = b.rm.aux(b.display_id, reg << 2, data=bytes(data),
                           req=0x8, typ=8)
    return name


def main():
    b = NvRMAuxBus()

    print("== PRE-ISP DPCD tunnel block ==")
    name, d = nat_rd(b, 0x00D0, 16)
    print(f"  0x00D0.. [{name}] = {d.hex(' ')}")

    print("\n== enter ISP ==")
    idx, st = enter_isp(b)
    print(f"  cand{idx} status {st:#04x}")

    print("\n== POST-ISP same block ==")
    name, d = nat_rd(b, 0x00D0, 16)
    print(f"  0x00D0.. [{name}] = {d.hex(' ')}")

    cap = d[0] & 0x80 if d else 0
    print(f"\n  I2C_AUX_CAP bit7 after ISP = {cap:#04x}")

    if not cap and d:
        print("\n== enable tunnel by hand (native writes, restored later) ==")
        orig = d
        # D1: enable I2C over AUX; D2/D3: idle timing; D4/D5: data timing
        wr = nat_wr(b, 0x00D0, [orig[0] | 0x80])
        print(f"  write 0x00D0={orig[0] | 0x80:#04x} -> {wr}")
        nat_wr(b, 0x00D1, [0x01])
        nat_wr(b, 0x00D2, [0x64])
        nat_wr(b, 0x00D3, [0x00])
        nat_wr(b, 0x00D4, [0x32])
        nat_wr(b, 0x00D5, [0x00])
        name, d2 = nat_rd(b, 0x00D0, 8)
        print(f"  readback [{name}] = {d2.hex(' ')}")

        print("\n== 0x20 writes with tunnel enabled ==")
        for s7 in (0x20, 0x41, 0x37):
            try:
                b.write(s7, b"\x00\x00")
                print(f"  {s7:#04x} write 00 00 -> ACK")
                r = b.read(s7, 16)
                print(f"  {s7:#04x} read16 -> {r[:12].hex(' ') if r else 'empty'}")
            except OSError as e:
                print(f"  {s7:#04x} -> {e}")

        # restore
        print("\n== restore DPCD ==")
        print("  restore 0x00D0 =", nat_wr(b, 0x00D0, [orig[0]]),
              "D1:", nat_wr(b, 0x00D1, [orig[1]]),
              "D2:", nat_wr(b, 0x00D2, [orig[2]]))
        name, d3 = nat_rd(b, 0x00D0, 8)
        print(f"  readback [{name}] = {d3.hex(' ')} (match={d3[:len(orig)] == orig[:len(d3)]})")

    print("\n== exit ISP, status ==")
    exit_isp(b)
    time.sleep(0.3)
    print(f"  isp_alive={isp_alive(b)}")


if __name__ == "__main__":
    main()
