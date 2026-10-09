#!/usr/bin/env python3
"""Discriminate 'framing wrong' vs 'slave absent' for the flash path.

Step 1 (oracle): raw kernel-semantics I2C-over-AUX framing against slave
0x50, whose I2C target provably exists.  If raw framing reproduces the
EDID, the framing is correct end-to-end (RM native mode + wire formats).

Step 2: same framing to slave 0x20 pre-ISP -> expect TIMEOUT if absent.

Step 3: ISP entry variants (cand0 full triple / magic-only / magic+cand2),
each followed by ONE raw-framed write to 0x20.  Reply type is the signal.

Read-mostly: only ISP magic bytes ride the wire (proven reversible via 0x24);
no erase/program commands.  Run as root.
"""
import sys, time
sys.path.insert(0, str(__import__("pathlib").Path(__file__).resolve().parents[2]))
from msi_isp import Facts
from msi_isp.nvbus import NvRMAuxBus
from msi_isp.nvrm import AUX_REQ_WRITE, AUX_REQ_READ
from msi_isp.isp import enter_isp, exit_isp, isp_alive

# --- raw DP-spec framing, kernel drm_dp_i2c_do_msg semantics, native mode --
# native request word: addr field = 20-bit DPCD-style address; for I2C ops
# the branch device wants the spec I2C request layout.  We hand-compose:
#   address field = (slave7 << 12) | (RW << 11) | (reg8 << 3)   [variant R1]
#   address field = (slave8 << 12) | (reg8 << 4)                [variant R2]
# len nibble handled by RM 'size' (0-based).  Data follows the addr phase.


def raw_rd(b, enc, slave7, reg, n):
    """Write reg (addr phase only), then read n bytes, raw native framing."""
    if enc == "R1":
        aw = (slave7 << 12) | (0 << 11) | ((reg & 0xFF) << 3)
        ar = (slave7 << 12) | (1 << 11) | ((reg & 0xFF) << 3)
    else:  # R2: 8-bit slave form
        aw = ((slave7 << 1) << 12) | ((reg & 0xFF) << 4)
        ar = ((slave7 << 1) << 12) | (1 << 12) | ((reg & 0xFF) << 4)
    # addr phase: native AUX write, 0 data bytes
    b1, _, s1 = b.rm.aux(b.display_id, aw, data=b"", req=0x8, size=0)
    # data phase: native read, n bytes (size 0-based)
    b2, d, s2 = b.rm.aux(b.display_id, ar, data=bytes(n), req=0x9, size=n - 1)
    return f"{b1}/{b2}", (d or b"")[:n]


def raw_wr(b, enc, slave7, data):
    """Raw framed write: addr phase + data, native mode."""
    s7 = slave7
    reg = data[0] if data else 0
    if enc == "R1":
        aw = (s7 << 12) | (0 << 11) | ((reg & 0xFF) << 3)
    else:
        aw = ((s7 << 1) << 12) | ((reg & 0xFF) << 4)
    payload = data[1:16]
    n1, _, _ = b.rm.aux(b.display_id, aw, data=b"", req=0x8, size=0)
    if not payload:
        return n1
    n2, _, _ = b.rm.aux(b.display_id, aw, data=payload, req=0x8,
                        size=len(payload) - 1)
    return f"{n1}/{n2}"


def main():
    with NvRMAuxBus() as b:
        print("== STEP 1: raw-framing oracle on 0x50 (EDID) ==")
        for enc in ("R1", "R2"):
            name, d = raw_rd(b, enc, 0x50, 0x00, 8)
            tag = "OK-EDID" if d[:2] == b"\x00\xff" else "no"
            print(f"  {enc} rd 0x50@00 [{name}] -> {d.hex(' ')}  {tag}")

        print("\n== STEP 2: raw framing to 0x20, pre-ISP ==")
        for enc in ("R1", "R2"):
            try:
                name, d = raw_rd(b, enc, 0x20, 0x00, 8)
                print(f"  {enc} rd 0x20@00 [{name}] -> {d.hex(' ')}")
            except Exception as e:
                print(f"  {enc} rd 0x20@00 -> exc {e}")

        print("\n== STEP 3: ISP variants -> raw write 0x20 ==")
        S = Facts.ISP_HANDSHAKE_SLAVE7
        c0 = Facts.AUTOENTER_CANDIDATES[0]
        variants = [
            ("cand0 full (94,64)", [c0[0], c0[1]]),
            ("magic only 94",      [c0[0]]),
            ("magic+tail 94,6a",   [c0[0], c0[2]]),
        ]
        for tag, seq in variants:
            exit_isp(b)                       # clean slate
            time.sleep(0.2)
            for by in seq:
                try:
                    b.write(S, bytes([by]), warmup=True)
                except OSError as e:
                    print(f"  [{tag}] write {by:#04x}: {e}")
                time.sleep(0.05)
            st = isp_alive(b)
            res = {}
            for enc in ("R1", "R2"):
                try:
                    res[enc] = raw_wr(b, enc, 0x20, bytes([0xF8, 0x00]))
                except Exception as e:
                    res[enc] = f"exc {e}"
            print(f"  [{tag}] isp={st and hex(st)}  wr0x20 {res}")

        exit_isp(b)
        ed = b.read(0x50, 8, warmup=True)
        print(f"\npost: EDID head {ed.hex(' ')}  isp_alive={isp_alive(b)}")


if __name__ == "__main__":
    main()
