"""Decisive DP test of the RTD ISP slave exposed by today's decode:

RTD tool log proof: 'Enter isp mode: 0, slave addr: 0x94' == 7-bit 0x4A --
the device that ACKs every DisplayPort link (DP branch OUI) and NEVER on HDMI.
That is the ISP slave, and Windows Comm_Aux reaches it via raw AUX/I2C-over-AUX.
RM userland control 0x731341 I2C mode is the equivalent backend (root).

Protocol model (RTD2660 lineage, 8-bit reg addressing on the SAME slave):
  enter: write reg 0x6F <= 0x80 ; poll read 0x6F until bit7 set
  flash bridge: opcode regs 0x62/0x63/0x6A/0x6B/0x6D/0x6E, addr 0x64-0x66,
                data port 0x70, length 0x71, strobe reg 0x60 (values per Flash.dat:
                0x20/0x21 and 0x38/0x39 pairs)

Transaction primitive (kernel-faithful, proven byte-exact on 0x50/0x37):
  addr-only WRITE (slave8 W) -> WRITE|MOT data -> addr-only READ? no: READ|MOT chunks
This script: READ-ONLY except the reg-0x6F write sequence (enter/exit ISP),
ending with exit + EDID verify via i2c-dev bus 4 cross-check. Print every
reply TYPE name (ACK/DEFER/TIMEOUT/NACK/SHORT) -- the failure mode itself is data.
"""
import sys, time
sys.path.insert(0, ".")
from msi_isp import nvbus, isp
from msi_isp.ddc import RTBus

REQ = {"i2c_write": 0x0, "i2c_read": 0x1}   # +0x4 MOT bit, +0x8 native


def t(bus, tag, slave7, write_data=None, read_n=0, mot_w=False, mot_r=False):
    """One kernel-style msg: optional data-write phase then read phase."""
    out = []
    try:
        if write_data is not None:
            name, _ = bus.raw_txn(REQ["i2c_write"], slave7, data=write_data,
                                  mot=mot_w, addr_only=(len(write_data) == 0))
            out.append(f"W:{name}")
            if name not in ("ACK",):
                return " ".join(out), None
        if read_n:
            name, got = bus.raw_txn(REQ["i2c_read"], slave7, data=b"\x00"*read_n,
                                    mot=mot_r)
            out.append(f"R:{name}")
            return " ".join(out), got
    except Exception as e:
        out.append(f"ERR:{type(e).__name__}:{e}")
    return " ".join(out), None


def main():
    bus = nvbus.NvRMAuxBus()
    try:
        # sanity: same primitives byte-match the kernel on EDID
        r, d = t(bus, "edid-ptr", 0x50, write_data=b"\x00", mot_w=True)
        print("edid ptr write :", r)
        r, d = t(bus, "edid-rd", 0x50, read_n=8, mot_r=True)
        print("edid read      :", r, (d or b"").hex(" "))
        # control: 0x37 status byte read (known good, returns ISP status)
        r, st = t(bus, "37-status", 0x37, read_n=1)
        print("37 status      :", r, (st or b"").hex(" "))

        # ---- the experiment: 0x4A (8-bit 0x94/0x95) ----
        r, _ = t(bus, "probe", 0x4A, write_data=b"")          # bare address
        print("4A bare-W      :", r)
        r, _ = t(bus, "w6f80", 0x4A, write_data=b"\x6f\x80")  # enter ISP (RTD2660 shape)
        print("4A W 6F 80     :", r)
        r, _ = t(bus, "w6f", 0x4A, write_data=b"\x6f")        # point at status reg
        print("4A W 6F        :", r)
        r, d = t(bus, "r6f", 0x4A, read_n=4)                  # read it back
        print("4A R x4        :", r, (d or b"").hex(" "))
        # register sweep with content oracle (bit7 @0x6F must set after 6F80 write)
        for reg in (0x60, 0x62, 0x63, 0x64, 0x66, 0x6A, 0x6B, 0x6D,
                    0x6E, 0x6F, 0x70, 0x71):
            r1, _ = t(bus, "w", 0x4A, write_data=bytes([reg]))
            r2, d2 = t(bus, "r", 0x4A, read_n=4)
            print(f"  reg {reg:#04x}: {r1} | {r2} {(d2 or b'').hex(' ')}")
    finally:
        # cross-check monitor health from the plain i2c-dev side
        time.sleep(0.3)
        with RTBus(4) as b:
            ok = b.probe(0x50)
            d = b.read(0x50, 8) if ok else b""
            print("post DP-EDID :", ok, d.hex())
        bus.close()


if __name__ == "__main__":
    main()
