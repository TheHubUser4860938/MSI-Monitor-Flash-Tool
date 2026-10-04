"""THE experiment: embedded-target-byte mailbox on slave 0x37, ISP mode alive.

Unified model that fits ALL prior data:
  - 0x37's DDC engine soft-ACK-filters raw writes (explains: ACKs magic bytes,
    'NACKs raw writes while ISP', ACKs only first-byte-matching streams)
  - Comm_Aux embeds the target device byte INSIDE the I2C payload at buf[0]
    ([slave8, data...] inline at NVAPI struct +0x28) — the disassembly says so
  - hence WriteReg 'slave 0x44' = payload [0x44, ...] onto 0x37
  - my raw probes SELECTED i2c address 0x41/0x44 (never ACKs) instead of
    EMBEDDING it in a 0x37 transaction — the one framing never tried

Sequence (DP bus, user perms; flash never targeted, MCU RAM regs only):
  magic -> status bit7 -> write [44 lo-reg val...] variants -> ACK per write
  -> raw reads -> look for reply/echo -> exit 0x24 -> health (DDC ver + EDID)

ACK is observable: i2c-dev write() raises OSError(EIO) on NACK.
"""
import sys, time
sys.path.insert(0, ".")
from msi_isp.ddc import RTBus
from msi_isp import isp, Facts

BUS = int(sys.argv[1]) if len(sys.argv) > 1 else 4


def wraw(bus, payload, tag):
    """Raw write to 0x37; returns 'ACK'/'NACK'. i2c-dev reports ACK precisely."""
    try:
        bus.write(0x37, bytes(payload), warmup=False)
        print(f"  W {tag:<34} ACK", flush=True)
        return True
    except OSError as e:
        print(f"  W {tag:<34} NACK ({e.errno})", flush=True)
        return False


def rraw(bus, n, tag):
    try:
        d = bus.read(0x37, n)
        asc = "".join(chr(c) if 0x20 <= c < 0x7F else "." for c in d)
        print(f"  R {tag:<34} {d.hex(' ')}  {asc!r}", flush=True)
        return d
    except OSError as e:
        print(f"  R {tag:<34} ERR {e.errno}", flush=True)
        return None


with RTBus(BUS) as bus:
    c, st = isp.enter_isp(bus, verbose=False)
    print(f"ISP alive: cand {c} status {st:#04x}", flush=True)
    time.sleep(0.2)

    # 0. baseline status re-read
    rraw(bus, 1, "status re-read")

    # 1. embedded-target WRITE forms (WriteReg decode: [target, reg(3), val(4)])
    forms = [
        ([0x44, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x5A], "44+reg60+val5A (8B)"),
        ([0x44, 0x60, 0x5A],                              "44+reg60+val5A (3B)"),
        ([0x41, 0x00, 0xF8],                              "41+ptr F800 (3B)"),
        ([0x41, 0xF8, 0x00],                              "41+ptr F800 (alt)"),
        ([0x6F, 0x00, 0xF8, 0x00],                        "6F+ptr F800"),
        ([0x22, 0x00, 0x00, 0x60, 0x5A],                  "22-7bit+reg60 (5B)"),
        ([0x30, 0x60, 0x5A],                              "30+reg60 (INI isp ctrl)"),
    ]
    for p, tag in forms:
        if wraw(bus, p, tag):
            time.sleep(0.05)
            rraw(bus, 8, f"read after {tag.split()[0]}")
        time.sleep(0.05)

    # 2. two-phase: write pointer, separate burst read
    for p, tag in (([0x41, 0x00, 0xF8, 0x06], "ptr F806 then"),
                   ([0x41, 0xF8, 0x06], "ptr F806 alt")):
        if wraw(bus, p, tag):
            time.sleep(0.1)
            rraw(bus, 8, "burst after ptr")

    # 3. does the engine ACK random first bytes? (ACK-filter test)
    for b in (0x00, 0x40, 0x45, 0x50, 0x77):
        wraw(bus, [b, 0x60, 0x5A], f"first byte {b:#04x}")

    # 4. exit + health
    ok = isp.exit_isp(bus)
    time.sleep(1.2)
    print(f"exit_isp -> {ok}", flush=True)
    from msi_isp.ddc import ddc_packet, ddc_parse_reply
    bus.warmup(); bus.write(0x37, ddc_packet(0x01, bytes([0xFE, 0xE1, 0xE6])))
    time.sleep(0.04)
    r = ddc_parse_reply(bus.read(0x37, 15))
    bus.write(0x50, b"\x00"); time.sleep(0.003)
    ed = bus.read(0x50, 8)
    print(f"health: ddc_ver={'ok' if r else 'DEAD'} "
          f"EDID_ok={ed[:8] == bytes([0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0])}",
          flush=True)
