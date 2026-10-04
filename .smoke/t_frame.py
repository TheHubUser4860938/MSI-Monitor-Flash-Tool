"""Read-only framing sweep for ISP slave 7-bit 0x20 (8-bit 0x41/0x40) over
the proven RM AUX control, plus the one safe setup write (DPCD 0x00D0).

Naturally read-only: AUX write transactions only carry [addr]/[offset] bytes
a sleeping slave parses but doesn't act on; no DDC/CI payload, no ISP verbs.
If the monitor power-cycles from the DPCD write, kernel EDID reads re-prove
it came back.
"""
import sys, os
sys.path.insert(0, os.getcwd())
from msi_isp.nvbus import NvRMAuxBus
from msi_isp import nvrm as N

bus = NvRMAuxBus()          # proven tree: hc/hDev/hSub/hDisp, DID 0x200
rm, DID, SUB = bus.rm, bus.display_id, bus.sub_inst
WR, RD, MOT = 0x0, 0x1, 0x4
AUX = 0x8


def txn(cmd, addr, data=b"", n=0, ao=0):
    p = N.AUXCHParams()
    p.subDeviceInstance = SUB
    p.displayId = DID
    p.bAddrOnly = ao
    p.cmd = cmd
    p.addr = addr
    for i, bq in enumerate(data[:16]):
        p.data[i] = bq
    p.size = n
    st = rm.control(rm.hDisp, N.CTRL_DP_AUXCH_CTRL, p)
    name = N.REPLY.get(p.replyType, f"{p.replyType:#x}")
    got = bytes(p.data[:p.size]) if (cmd & 0xF) in (1,) and st in (0, 0x26) else b""
    return name, got, "st=%#x" % st


print("== native AUX baseline: DPCD0 must be 0x12 ==")
name, got, st = txn(AUX | RD, 0x00 << 2, n=0)
print(f"  DPCD0={got[:1].hex()} {name} {st}")

print("== native AUX read DPCD 0x00D0 (I2C tunnel manage) ==")
name, got, st = txn(AUX | RD, 0x00D0 << 2, n=0)
print(f"  DPCD00D0={got[:1].hex()} {name} {st}")

for S7, lbl in ((0x20, "flash 0x20"), (0x22, "mcu 0x22")):
    print(f"== {lbl}: framing sweep ==")
    n1, g1, s1 = txn(WR, S7, n=0, ao=1)                     # i2c-modes addr-only
    print(f"  F1 i2c-modes addr-only   : {n1} {s1}")
    n2, g2, s2 = txn(WR | MOT, S7, data=b"\x00", n=0)       # offset write
    if n2 == "ACK":
        n3, g3, s3 = txn(RD | MOT, S7, n=7)
    else:
        n3, g3, s3 = "skip", b"", ""
    print(f"  F2 i2c-modes wr-off+rd   : wr={n2} rd={n3} {g3[:8].hex()} {s3}")
    n4, g4, s4 = txn(AUX | WR, (S7 << 1) << 16, n=0)        # transparent 8-bit W
    print(f"  F3 aux wr 8bitW<<16      : {n4} {s4}")
    n5, g5, s5 = txn(AUX | RD, ((S7 << 1) | 1) << 16, n=7)  # transparent 8-bit R
    print(f"  F3 aux rd 8bitR<<16      : {n5} {g5[:8].hex()} {s5}")
    sys.stdout.flush()

print("== setup (safe/reversible): native write DPCD 0x00D0=0x81 ==")
n6, g6, s6 = txn(AUX | WR, 0x00D0 << 2, data=b"\x81", n=0)
print(f"  write 00D0=0x81: {n6} {s6}")
n7, g7, s7 = txn(AUX | RD, 0x00D0 << 2, n=0)
print(f"  readback 00D0  : {g7[:1].hex()} {n7}")

if n6 == "ACK":
    S7 = 0x20
    n8, g8, s8 = txn(WR, S7, n=0, ao=1)
    print(f"  F1 post-enable     : {n8} {s8}")
    n9, g9, s9 = txn(WR | MOT, S7, data=b"\x00", n=0)
    if n9 == "ACK":
        n10, g10, s10 = txn(RD | MOT, S7, n=7)
    else:
        n10, g10, s10 = "skip", b"", ""
    print(f"  F2 post-enable     : wr={n9} rd={n10} {g10[:8].hex()}")

bus.write(0x50, b"\x00")
e = bus.read(0x50, 16)
print("  EDID sanity      :", e[:8].hex())

# if the enable didn't help, restore 0x00D0 to whatever it was (0x01 seen
# earlier per STATUS.md; write it back exactly)
if n6 == "ACK":
    txn(AUX | WR, 0x00D0 << 2, data=b"\x01", n=0)
    nr, gr, sr = txn(AUX | RD, 0x00D0 << 2, n=0)
    print(f"  restore 00D0=0x01: readback {gr[:1].hex()} {nr}")

print("done")
bus.close()
