"""Register-window address scope (read-only, zero risk).

Two competing readings of t_wdual output:
  (A) low address byte IS significant  -> FE E1 E6 -> '009'; 00 00 60 -> a value;
      everything else echoes the version string
  (B) window mirrors one 4-byte register file slot and address is mostly ignored

Discriminate with a low-byte ladder (must vary for A) plus a mid/high-byte
ladder (A predicts constant). If A holds, the 0x60 slot value is a real
register file value and the Flash.dat SPI-bridge register map lives there --
the write op just isn't 0x06/0x0D/0x81.

Also sweeps the sibling read forms (Flash.dat's 0x0D read verb and variants)
to find a longer burst reply, since a 4-byte reply can't sustain a 1.8 MB dump.
"""
import sys, time
sys.path.insert(0, ".")
from msi_isp.ddc import RTBus, ddc_packet, ddc_parse_reply
from msi_isp import isp

BUS = int(sys.argv[1]) if len(sys.argv) > 1 else 4


def rd(bus, addr, op=0x01):
    """One vendor register read; returns 4-byte reply value or None."""
    bus.warmup()
    bus.write(0x37, ddc_packet(op, addr))
    time.sleep(0.03)
    r = ddc_parse_reply(bus.read(0x37, 15))
    if not r or not r["payload"]:
        return None
    p = r["payload"]
    # reply layout seen live: [02][flag][2 echo bytes][4 data] -> tail is data
    return p[-4:], p.hex(" ")


def show(bus, addr, op=0x01):
    got = rd(bus, addr, op)
    a = addr.hex(" ")
    val = got[0].hex(" ") if got else "---- ---- ---- ----"
    asc = "".join(chr(c) if 0x20 <= c < 0x7F else "." for c in got[0]) if got else ""
    print(f"  op {op:#04x} addr {a!r:<12} -> {val}  {asc!r}", flush=True)
    return got[0] if got else None


with RTBus(BUS) as bus:
    print("pre: entering ISP (register window may only be meaningful there)",
          flush=True)
    try:
        c, st = isp.enter_isp(bus, verbose=False)
        print(f"ISP alive: cand {c} status {st:#04x}\n", flush=True)
        isp_on = True
    except Exception as e:
        print(f"ISP entry failed ({e}) -- probing normal mode only\n", flush=True)
        isp_on = False

    for phase in range(2 if isp_on else 1):
        print(f"--- phase {phase}: {'ISP alive' if phase == 0 else 'after exit'} ---")
        if phase == 1:
            try:
                isp.exit_isp(bus)
            except Exception as e:
                print(f"exit_isp: {e}")
            time.sleep(1.2)

        print(" low-byte ladder @FE E1 xx (A: must vary):")
        for lo in (0xE0, 0xE1, 0xE2, 0xE5, 0xE6, 0xE7, 0xF0):
            show(bus, bytes([0xFE, 0xE1, lo]))

        print(" mid/high ladder @FE xx E6 / xx E1 E6 (A: constant):")
        for hi in (0xC0, 0xF6, 0xF7, 0xF8, 0xFF):
            show(bus, bytes([hi, 0xE1, 0xE6]))
        for mid in (0x00, 0x20, 0x60, 0xE0, 0xFF):
            show(bus, bytes([0xFE, mid, 0xE6]))

        print(" Flash.dat register slots @00 00 xx (RAM scratch region):")
        for lo in (0x00, 0x20, 0x21, 0x38, 0x39, 0x5F, 0x60, 0x61,
                   0x64, 0x65, 0x66, 0x67, 0x68):
            show(bus, bytes([0x00, 0x00, lo]))

        print(" known string block @F8xx (tool says model name is here):")
        for off in (0x00, 0x04, 0x06, 0x08, 0x10, 0x20, 0x24, 0x28):
            show(bus, bytes([0x00, 0xF8, off]))

        print(" burst read attempts (longer reply = dump primitive):")
        for op in (0x01, 0x0D, 0x10, 0x11, 0x20, 0x21, 0x40, 0x82):
            bus.warmup()
            bus.write(0x37, ddc_packet(op, bytes([0x00, 0xF8, 0x06])))
            time.sleep(0.05)
            r = ddc_parse_reply(bus.read(0x37, 15))
            pay = r["payload"] if r and r["payload"] else b""
            asc = "".join(chr(c) if 0x20 <= c < 0x7F else "." for c in pay)
            print(f"  op {op:#04x} reply {len(pay):>2}B: {pay.hex(' ')}  {asc!r}",
                  flush=True)
        print()

    v = rd(bus, bytes([0xFE, 0xE1, 0xE6]))
    ed = None
    bus.write(0x50, b"\x00")
    time.sleep(0.003)
    ed = bus.read(0x50, 8)
    print(f"health: version={'readable' if v else 'DEAD'} "
          f"EDID_ok={ed[:8] == bytes([0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0])}")
