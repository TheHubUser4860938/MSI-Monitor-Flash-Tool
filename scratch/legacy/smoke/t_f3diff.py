"""Differential test for the F3 native-read ACK anomaly.

An AUX read at addr=(8bit<<16) returned ACK for ISP slaves 0x20/0x22 while
the matching write NACKed. Either (a) the branch forwards transparent I2C and
the reply has meaning, or (b) RM/branch ACKs anything in that encoding and
the ACK is noise. Dead-slave controls decide which.

Also fixes t_frame's read-return reporting (shows raw replyType/size).
"""
import sys, os
sys.path.insert(0, os.getcwd())
from msi_isp.nvbus import NvRMAuxBus
from msi_isp import nvrm as N

bus = NvRMAuxBus()
rm, DID, SUB = bus.rm, bus.display_id, bus.sub_inst
WR, RD, MOT = 0x0, 0x1, 0x4
AUX = 0x8


def raw(cmd, addr, data=b"", n=0, ao=0):
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
    return name, bytes(p.data[:16]), p.size, st


print("baseline DPCD0:", raw(AUX | RD, 0x00 << 2, n=0)[1][:1].hex())

print("\n== native (slave8<<16) READ differential — ACK vs DEAD slaves ==")
for s8, lbl in ((0x50, "EDID w (live)"), (0xA1, "EDID r (live)"),
                (0x6F, "DDC/CI r (live)"), (0x41, "ISP flash r"),
                (0x11, "dead 0x08w"), (0x13, "dead 0x09w"),
                (0xFF, "dead 0x7Fw"), (0x61, "DP branch r"),):
    n, d, sz, st = raw(AUX | RD, s8 << 16, n=7)
    print(f"  rd {lbl:16s} s8={s8:#04x} -> {n:8s} size_field={sz} st={st:#x} d={d[:8].hex(' ')}")

print("\n== native (slave8<<16) WRITE differential (1 addr byte out) ==")
for s8, lbl in ((0x50, "EDID (live)"), (0x41, "ISP flash"), (0x11, "dead 0x08"),):
    n, d, sz, st = raw(AUX | WR, s8 << 16, data=b"\x00", n=0)
    print(f"  wr {lbl:16s} s8={s8:#04x} -> {n:8s} st={st:#x}")

print("\n== I2C-mode read at 0x20 while a live I2C txn is open? "
      "(write offset to EDID with MOT, then read from 0x20 same sequence) ==")
n1, d1, sz1, st1 = raw(WR | MOT, 0x50, data=b"\x00", n=0)      # open live txn
n2, d2, sz2, st2 = raw(RD | MOT, 0x20, n=7)                    # read 0x20 mid-txn
n3, d3, sz3, st3 = raw(RD | MOT, 0x50, n=7)                    # finish live read
raw(WR, 0x50, n=0, ao=1)                                       # terminator
print(f"  open 0x50={n1}  mid 0x20={n2} d={d2[:8].hex(' ')}  live 0x50={n3} {d3[:8].hex(' ')}")

print("\npost sanity EDID kernel-parity:", end=" ")
bus.write(0x50, b"\x00")
print(bus.read(0x50, 16)[:8].hex(" "))
bus.close()
