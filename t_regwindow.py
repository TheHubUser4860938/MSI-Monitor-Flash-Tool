#!/usr/bin/env python3
"""Map the vendor DDC/CI register window (opcode 0x01) + status protocol.

Solid, decoded facts (reply byte-dumps of THIS monitor):
  version query  [6E 51 84 01 FE E1 E6] -> [6E 8A 02 00 FE 00 F W . 0 0 9 N]
    reply layout after [6E][80|N][02][flag]: [echo-hi][echo-lo][10 payload][pad]
    INI strVersionDdcciCmd ends at payload[0..2]=FE 00 -> those ARE echoed
    echo-hi/echo-lo == the request's first two data bytes => register address.
    => [opcode 01 reg-hi reg-lo p1 p2] answers 10 bytes from a 256-register
       window, reg 0xFE = version string "FW.009N"+NUL+csum.
  unknown requests -> [6E 80 BE...] (N=0, payload=0xBE); CMIC error form.
  status hypothesis -> [6E 51 84 94 ...] reply carries 0xBE == bit0x80 set
    (tool checks AND 0x80; magic 0x94, exit 0x24 are DLL table bytes).

Goal for this run (pure reads, plain user, no root, no ISP needed):
  1. sweep reg-lo 0x00..0xFF of window 0xFE; flag any non-0xBE reply
  2. hunt .bin-known live strings: "012"/"MAG 341CQ" also may live in RAM regs,
     but the decisive oracle is later (flash-read window opcodes); here we
     simply chart which register-lo offsets are implemented per opcode.
"""
import sys, time
sys.path.insert(0, str(__import__("pathlib").Path(__file__).resolve().parent))
from msi_isp.ddc import RTBus, SLAVE_DDC

def packet(opcode, data):
    # CMIC: [dest][len][payload...][csum], len=0x80|N over opcode+data+2*slave
    body = bytes([opcode]) + bytes(data)
    n = len(body)
    ln = 0x80 | n
    x = 0
    for b in b"\x6e" + bytes([ln]) + body:
        x ^= b
    x ^= 0x00  # source byte 0x51 rides in checksum per ddcutil rule below
    # ddcutil convention: checksum over dest,len,src(0x51),opcode,data
    x = 0
    for b in b"\x6e" + bytes([ln]) + b"\x51" + body:
        x ^= b
    return b"\x6e" + bytes([ln]) + body + bytes([x])


def ask(bus, opcode, data, n_read=19):
    bus.write(SLAVE_DDC, packet(opcode, data))
    time.sleep(0.025)
    r = bytes(bus.read(SLAVE_DDC, n_read))
    return r


def main():
    bus_no = int(sys.argv[1]) if len(sys.argv) > 1 else 4
    with RTBus(bus_no) as bus:
        # sanity: reproduce the proven version query exactly
        r = ask(bus, 0x01, [0xFE, 0x00, 0, 0])
        print("FE,00    :", r[:16].hex(" "))
        asc = "".join(chr(c) if 32 <= c < 127 else "." for c in r)
        print("           |%s|" % asc[:32])

        # hypothesis check: reply echoes request data[0:2]; change request to FE 04
        r = ask(bus, 0x01, [0xFE, 0x04, 0, 0])
        print("FE,04    :", r[:16].hex(" "))

        print("\n-- opcode 0x01, reg-hi 0xFE, sweep reg-lo --")
        for lo in range(0, 0x100, 4):
            r = ask(bus, 0x01, [0xFE, lo, 0, 0])
            pay = r[2:] if len(r) > 4 else r
            asc = "".join(chr(c) if 32 <= c < 127 else "." for c in r[4:16])
            if not (len(r) > 6 and r[0] == 0x6E and (r[1] & 0x0F) == 3 and r[2] == 0xBE):
                print(f"  lo {lo:#04x}: {r[:14].hex(' ')} |{asc[:20]}|")

        print("\n-- opcode 0x01, reg-hi sweep, reg-lo 0x00 (window probe) --")
        for hi in range(0x00, 0x100, 0x10):
            r = ask(bus, 0x01, [hi, 0x00, 0, 0])
            if not (len(r) > 6 and r[0] == 0x6E and (r[1] & 0x0F) == 3 and r[2] == 0xBE):
                asc = "".join(chr(c) if 32 <= c < 127 else "." for c in r[4:16])
                print(f"  hi {hi:#04x}: {r[:14].hex(' ')} |{asc[:20]}|")

        print("\n-- status protocol: opcode 0x94 magic, poll, exit 0x24 --")
        for tag, op, dta in [("magic 0x94", 0x94, [0, 0, 0]),
                             ("poll",       0x94, []),
                             ("exit 0x24",  0x24, [0, 0, 0]),
                             ("ver after",  0x01, [0xFE, 0x00, 0, 0])]:
            r = ask(bus, op, dta)
            asc = "".join(chr(c) if 32 <= c < 127 else "." for c in r)
            print(f"  {tag:11s}: {r[:16].hex(' ')} |{asc[:24]}|")
        bus.write(0x50, bytes([0]))
        print("EDID ok:", bus.read(0x50, 8, warmup=True).hex(" "))


if __name__ == "__main__":
    main()
