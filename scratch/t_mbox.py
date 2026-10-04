"""Mailbox flash-read sweep (HDMI bus, plain i2c-dev, read-only semantics).

Premise (from disassembly + live probes): once ISP mode is live (status bit
0x80), the scaler serves flash access through the DDC slave 0x37 itself --
same model as flashrom's mstarddc_spi. Flash offset 0xF800 holds the live
header: ASCII '009' + 'MAG 341CQ X28' -- a perfect oracle for which framing
is correct.

Every transaction is a mailbox command write + read on 0x37. exit_isp (0x24)
restores normal mode; EDID is re-verified at the end.
"""
import sys, time
sys.path.insert(0, ".")
from msi_isp.ddc import RTBus
from msi_isp import Facts, isp

BUS = int(sys.argv[1]) if len(sys.argv) > 1 else 3
SL = 0x6F                      # 8-bit write form of 0x37, as the tool logs it
OFF = Facts.BIN_LAYOUT["version"][0]          # 0xF800
HI, LO = OFF >> 8, OFF & 0xFF
C0 = Facts.AUTOENTER_CANDIDATES[0]            # (0x94, 0x96, 0x6a)

# (label, bytes written to 0x37, n bytes to read back)
FRAME = []
for cmd in (None, 0x10, 0x11, 0x12, C0[1], C0[2]):
    pay = ([cmd] if cmd is not None else []) + [HI, LO]
    FRAME.append((f"{'cmd%02X' % cmd if cmd is not None else 'no cmd'} "
                  f"ptr[F8 00]", bytes(pay), 24))

with RTBus(BUS) as bus:
    st = isp.isp_alive(bus)
    if st is None:
        cand, st = isp.enter_isp(bus)
        print(f"entered ISP: cand#{cand} status={st:#04x}", flush=True)
    else:
        print(f"ISP already alive: status={st:#04x}", flush=True)

    for label, payload, rlen in FRAME:
        try:
            bus.write(0x37, payload, warmup=True)
            time.sleep(Facts.TIMING.get("after_command_ms", 200) / 1000.0)
            r = bus.read(0x37, rlen)
        except Exception as e:
            print(f"  [{label:<20}] x Error {e}", flush=True)
            continue
        txt = bytes(b for b in (r or b"") if 0x20 <= b < 0x7F).decode()
        print(f"  [{label:<20}] {rlen}B {(r or b'')[:16].hex(' ')}"
              f"  ascii={txt!r}", flush=True)

    ok = isp.exit_isp(bus)
    time.sleep(1.5)
    bus.write(0x50, b"\x00"); time.sleep(0.003)
    ed = bus.read(0x50, 8)
    print(f"post-exit EDID head {ed[:8].hex()}  exit_ok={ok}")
