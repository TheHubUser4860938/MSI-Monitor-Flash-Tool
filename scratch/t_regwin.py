"""Vendor DDC/CC opcode 0x01 "register window" sweep — the most promising
flash path found so far: a prior probe's reply to opcode 0x01 data [F8 00]
contained ASCII 'FW.0', and flash@0xF800 is exactly where the live header
('009' + 'MAG 341CQ X28') lives. All DDC/CC framing, normal user, no ISP mode,
works over i2c-dev (HDMI or DP shim) and over the RM backend. Pure reads.

Oracle: ASCII 'MAG' / '009' / '4023' appear -> window is flash-backed and the
framing is right -> backup path = plain DDC/CC on any GPU, no root.
"""
import sys, time
sys.path.insert(0, ".")
from msi_isp.ddc import RTBus, ddc_packet, ddc_parse_reply

BUS = int(sys.argv[1]) if len(sys.argv) > 1 else 3
OFF = 0xF800                     # live header in flash
OFF2 = 0x0000                    # boot area (vector table — recognizable)

OPS = []
# operand variants: 2B/4B, both orders, magic-prefixed (FE Ex style)
for base in (OFF, OFF2):
    hi, lo = base >> 8, base & 0xFF
    ops = [
        bytes([hi, lo]), bytes([lo, hi]),
        bytes([0x00, 0x00, hi, lo]), bytes([hi, lo, 0x00, 0x00]),
        bytes([0xFE, hi, lo]), bytes([hi, lo, 0x00]),
    ]
    for i, o in enumerate(ops):
        OPS.append((base, i, o))

# read opcodes: 0x01 is write+read combined in the fw-version case;
# try 0x02/0x03 as pure-read partners of an 0x01 index write
READ_OPS = (0x01, 0x02, 0x03)

def show(tag, bus, pkt, note=""):
    try:
        bus.write(0x37, pkt)
    except OSError as e:
        print(f"  {tag:<38} write-err {e}"); return
    time.sleep(0.03)
    try:
        r = bus.read(0x37, 19)
    except OSError as e:
        print(f"  {tag:<38} read-err {e}"); return
    p = ddc_parse_reply(r)
    if not p:
        print(f"  {tag:<38} no-reply {r.hex(' ') if r else ''}"); return
    asc = bytes(b for b in p["payload"] if 0x20 <= b < 0x7F).decode()
    hot = any(k in asc for k in ("MAG", "009", "4023", "FW", "2711"))
    print(f"  {tag:<38} chk={p['ok']} {p['payload'].hex(' ')}  "
          f"ascii={asc!r}{'  <<<< FLASH ORACLE' if hot else ''} {note}")

with RTBus(BUS) as bus:
    # sanity: known-good vendor query must still return FW.009
    show("control: op01 FE E1 E6", bus, ddc_packet(0x01, bytes([0xFE, 0xE1, 0xE6])))
    print()
    for base, i, operand in OPS:
        # variant A: single combined packet op 0x01
        show(f"A op01 @{base:04X} v{i} {operand.hex(' ')}",
             bus, ddc_packet(0x01, operand))
        # variant B: index write then read-op packet
        bus.write(0x37, ddc_packet(0x01, operand)); time.sleep(0.03)
        bus.read(0x37, 19)                      # drain ack reply
        for rop in READ_OPS[1:]:
            bus.write(0x37, ddc_packet(rop, operand)); time.sleep(0.03)
            show(f"B op{rop:02X} @{base:04X} v{i}", bus, ddc_packet(rop, operand))
        time.sleep(0.01)
