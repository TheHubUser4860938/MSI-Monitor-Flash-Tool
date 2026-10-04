"""Vendor DDC/CI register-window sweep with 3-byte big-endian operands.

The one framing proven to work (FW-version query) is exactly:
    op 0x01, data = [FE, E1, E6]        -> 4 ASCII bytes 'FW.0' (+ pad)
which decodes as a 24-bit BIG-ENDIAN scaler/flash register index. Earlier
sweeps tried 2B and 4B operands but never 3B — this closes that gap.

Reads only: opcode 0x01 = write-index-and-read (proven safe; it is what the
tool ships). We also try separate write-index (0x03-ish) + read pairs, but the
3B combined form is primary.

Oracles (all known-certain content, no guessing):
  flash 0xF800  -> b'009'          (live version; .bin header @0xF800='012')
  flash 0xF806  -> b'MAG 341CQ X28'
  EDID rom in flash -> 00 ff ff ff ff ff ff 00 somewhere (sweep 2B range)
If a 24-bit index returns address-SENSITIVE sane data, backup = plain DDC/CI
reads on any GPU, no root, no ISP.
"""
import sys, time
sys.path.insert(0, ".")
from msi_isp.ddc import RTBus, ddc_packet, ddc_parse_reply

BUS = int(sys.argv[1]) if len(sys.argv) > 1 else 4

KEYS = ("MAG", "009", "4023", "FW", "2711", "RTD")


def rd(bus, opcode, operand, note="", quiet_noreply=True):
    pkt = ddc_packet(opcode, operand)
    try:
        bus.write(0x37, pkt)
    except OSError as e:
        print(f"  {note:<44} write-err {e}")
        return None
    time.sleep(0.03)
    try:
        r = bus.read(0x37, 19)
    except OSError as e:
        print(f"  {note:<44} read-err {e}")
        return None
    p = ddc_parse_reply(r)
    if not p:
        if not quiet_noreply:
            print(f"  {note:<44} no-reply {r.hex(' ') if r else ''}")
        return None
    pl = p["payload"]
    asc = bytes(b for b in pl if 0x20 <= b < 0x7F).decode()
    hot = [k for k in KEYS if k in asc]
    mark = "  <<<< ORACLE " + ",".join(hot) if hot else ""
    print(f"  {note:<44} chk={p['ok']} {pl.hex(' ')}  ascii={asc!r}{mark}")
    return pl


def main():
    with RTBus(BUS) as bus:
        print(f"bus /dev/i2c-{BUS}")
        # control: the known-good query, 3B operand shape
        rd(bus, 0x01, bytes([0xFE, 0xE1, 0xE6]), "ctrl FE E1 E6 (expect FW.009)")
        rd(bus, 0x01, bytes([0x0F, 0x80, 0x00]), "flash @0xF800 (expect '009')")
        rd(bus, 0x01, bytes([0x0F, 0x80, 0x03]), "flash @0xF803")
        rd(bus, 0x01, bytes([0x0F, 0x80, 0x06]), "flash @0xF806 (expect 'MAG ')")
        rd(bus, 0x01, bytes([0x0F, 0x81, 0x00]), "flash @0xF810")
        rd(bus, 0x01, bytes([0x00, 0x00, 0x00]), "flash @0x000000")
        rd(bus, 0x01, bytes([0x00, 0x00, 0x10]), "flash @0x000010")
        rd(bus, 0x01, bytes([0x00, 0x04, 0x00]), "flash @0x000400 (EDID?)")
        rd(bus, 0x01, bytes([0x00, 0x10, 0x00]), "flash @0x001000")
        rd(bus, 0x01, bytes([0x00, 0x60, 0x20]), "reg 0x6020 (SPI engine idx)")
        rd(bus, 0x01, bytes([0x00, 0x60, 0x38]), "reg 0x6038 (SPI engine)")
        rd(bus, 0x01, bytes([0x00, 0x01, 0x00]), "reg 0x0100 (chip id area)")
        rd(bus, 0x01, bytes([0x00, 0x10, 0x04]), "reg 0x1004 (RTD family id)")
        # address-sensitivity discriminators (must differ from each other)
        rd(bus, 0x01, bytes([0x0F, 0xF0, 0x00]), "flash @0xFF0000")
        rd(bus, 0x01, bytes([0x01, 0x00, 0x00]), "flash @0x100000")
        rd(bus, 0x01, bytes([0x0F, 0xE0, 0x00]), "flash @0xFE0000")
        # 1-byte operand control (page-select theory check)
        rd(bus, 0x01, bytes([0xFE]), "ctrl 1B op [FE]")
        rd(bus, 0x01, bytes([0xE1]), "ctrl 1B op [E1]")


if __name__ == "__main__":
    main()
