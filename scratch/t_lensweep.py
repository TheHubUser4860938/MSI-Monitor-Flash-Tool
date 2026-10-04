"""Confirm the vendor "magic-prefixed window read" framing and brute-force the
length/index byte.

Model: packet = op01 data [FE, E1, X]; reply echo is 0xFE 0x00 (match) vs
0x<low> 0x01 (default) — observed. Control FE E1 E6 returned 8 bytes equal to
our .bin at 0xF800 ("FW.009N"). Sweep X=0..0xFF; oracle is the vendor .bin
file (flash image) — the first 8 bytes at 0xF800 are known exactly.

Pure DDC/CC reads, normal user, HDMI bus. Harmless.
"""
import sys, time
sys.path.insert(0, ".")
from msi_isp.ddc import RTBus, ddc_packet, ddc_parse_reply

BUS = int(sys.argv[1]) if len(sys.argv) > 1 else 3
BIN = ("/home/eugene/Projects/monitor-fw/vendor/"
       "MSI_MAG_341CQP_QD-OLED_X28_FW.012_4023.bin")
data = open(BIN, "rb").read()          # new 012 image (differs from live 009
                                       # at version bytes only)
OFF = 0xF800

def ask(bus, operand, rlen=31):
    bus.write(0x37, ddc_packet(0x01, operand))
    time.sleep(0.025)
    try:
        r = bus.read(0x37, rlen)
    except OSError:
        return None
    p = ddc_parse_reply(r)
    if not p or not p["payload"]:
        return None
    # payload = [dest, result, echo_hi, echo_lo, data...] (parsed from index 2
    # in ddc_parse_reply: raw[2:]); raw reply from reply-flag byte onwards
    return bytes(p["payload"])

with RTBus(BUS) as bus:
    # 1) length-byte sensitivity: FE E1 X
    print("== sweep op01 FE E1 X (X=low byte) ==")
    hits = {}
    for x in range(0x00, 0x100):
        p = ask(bus, bytes([0xFE, 0xE1, x]))
        if not p:
            continue
        # payload here (per parse offset) : [02 res echo data...]
        res, echo_hi = p[1], p[2]
        d = p[4:]
        n = sum(1 for b in d if b not in (0x00,))
        key = (res, echo_hi, len(d), d[:8].hex())
        if key not in hits:
            hits[key] = x
            print(f"  X={x:#04x} res={res:#04x} echo={echo_hi:#04x} "
                  f"dlen={n} {d[:10].hex(' ')}", flush=True)
    # 2) does the reply depend on bytes 0-1 at all? probe window addresses
    print("\n== window addressing probes (FE E1 pairs, E6 tail) ==")
    for op in (bytes([0xFE, 0xF8, 0x00, 0xE6]),
               bytes([0xF8, 0x00, 0xE6]),
               bytes([0xFE, 0xF8, 0x06, 0x20]),   # model string lives @F806
               bytes([0xFE, 0x00, 0x00, 0x20])):  # flash @0 boot area
        p = ask(bus, op)
        asc = bytes(b for b in (p or b"") if 0x20 <= b < 0x7F).decode()
        print(f"  {op.hex(' '):<18} -> {(p or b'').hex(' ')}  ascii={asc!r}",
              flush=True)
