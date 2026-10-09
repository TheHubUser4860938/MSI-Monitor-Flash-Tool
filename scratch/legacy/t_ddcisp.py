#!/usr/bin/env python3
"""ISP-over-DDC/CI test: the mailbox IS the CMIC channel, not raw bytes.

Reinterpretation from disassembly + t_cmd37 result:
  * Comm.dll writes "0x6F" = the DDC/CI destination-address byte (slave 0x37
    write form) -> its "I2CWrite(0x6F, 0x94)" == CMIC packet to dest 0x6F
    with opcode 0x94, source 0x51.
  * "status byte bit 0x80" == DDC/CI reply error-bit (opcode|0x80).
  * the version query 0x6E 0x51 0x84 0x01 FE E1 E6 (proven working natively)
    is the same packet shape with opcode 0x01 -> flash io likely opcode 0x02.

Candidates for flash-read at 0xF800 (expect "012"+"MAG" per .bin layout):
  R2 [02 F8 00 00]/[02 00 F8 00] ... opcode 0x02, data = flash address
  R1 [01 F8 00]                 opcode 0x01 + addr (0x01 verified = version)
Status poll: packet opcode 0x94? NO - poll = plain read, reply opcode high bit.
All READ-only wrt flash; entry/exit magic are the tool's own commands.
Works as ordinary user over i2c-dev (no root, no RM) -- and on any GPU.
"""
import sys, time
sys.path.insert(0, str(__import__("pathlib").Path(__file__).resolve().parents[2]))
from msi_isp.ddc import RTBus, ddc_packet, ddc_parse_reply, SLAVE_DDC

ORACLE = b"MAG 341CQ"


def ddc(bus, opcode, data=b""):
    bus.write(SLAVE_DDC, ddc_packet(opcode, bytes(data)))
    time.sleep(0.02)
    rep = bus.read(SLAVE_DDC, 19)
    return rep


def parse(rep):
    try:
        d = ddc_parse_reply(rep)
    except Exception as e:
        return None, b"", f"parse-fail {e}"
    if isinstance(d, dict):
        return d.get("opcode"), bytes(d.get("payload", b"")), d
    return None, bytes(rep), {"raw": bytes(rep)}


def main(bus_no):
    with RTBus(bus_no) as bus:
        def raw(opcode, data=b""):
            rep = ddc(bus, opcode, data)
            opc, payload, d = parse(rep)
            errbit = "?" if opc is None else f"{(opc >> 7) & 1}"
            rawb = d.get("raw", b"") if isinstance(d, dict) else rep
            print(f"    raw: {bytes(rawb).hex(' ')}")
            return rep, opc, payload, errbit

        print("== handshake attempts (opcode 0x94, no data / magic data) ==")
        for tag, op, dta in [
            ("H1 op0x94 nodata", 0x94, b""),
            ("H2 op0x94 data94", 0x94, b"\x94"),
            ("H3 op0xE1FE01?", 0x01, b"\x94"),
            ("H4 op0x51 data94", 0x51, b"\x94"),
        ]:
            rep, opc, pay, eb = raw(op, dta)
            print(f"  {tag:20s} opcode={None if opc is None else hex(opc)} errbit={eb} data={pay[:8].hex(' ')}")

        print("== status poll: plain opcode-0 read? ==")
        rep, opc, pay, eb = raw(0x00)
        print(f"  op00               opcode={None if opc is None else hex(opc)} errbit={eb} data={pay[:8].hex(' ')}")

        print("== flash-read candidates (dest 0x6F) ==")
        cands = [
            ("R2 f8 00 00",  0x02, b"\xF8\x00\x00"),
            ("R2 00 f8 00",  0x02, b"\x00\xF8\x00"),
            ("R2 00 00 f8",  0x02, b"\x00\x00\xF8"),
            ("R2 len-suffix",0x02, b"\xF8\x00\x00\x20"),
            ("R1 f8 00",     0x01, b"\xF8\x00"),
            ("R3 f8 00 00",  0x03, b"\xF8\x00\x00"),
            ("R8 f8 00 00",  0x08, b"\xF8\x00\x00"),
        ]
        hit = False
        for tag, op, dta in cands:
            rep, opc, pay, eb = raw(op, dta)
            asc = "".join(chr(c) if 32 <= c < 127 else "." for c in pay)
            mark = "  <== ORACLE" if ORACLE in pay else ""
            print(f"  {tag:16s} opcode={None if opc is None else hex(opc)} errbit={eb} "
                  f"data={pay[:16].hex(' ')} |{asc[:12]}|{mark}")
            if ORACLE in pay:
                hit = True
                break
        print(f"\nORACLE hit: {hit}")
        # verify we left the monitor healthy (version query still works)
        rep, opc, pay, eb = raw(0x01, b"\xFE\xE1\xE6")
        asc = "".join(chr(c) if 32 <= c < 127 else "." for c in pay)
        print(f"post version query: |{asc[:16]}| errbit={eb}")


if __name__ == "__main__":
    main(int(sys.argv[1]) if len(sys.argv) > 1 else 4)
