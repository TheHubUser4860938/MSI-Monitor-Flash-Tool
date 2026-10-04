"""Vendor WRITE-opcode probe, corrected framing from Write32BitRegEx decode:

  [0x51][len=0x80|(1+3+4)][opcode][addr24 hi,mid,lo][val32 b3,b2,b1,b0][XOR]

State-preserving: target = the firmware-version window FE E1 E6, and each
candidate writes back the SAME 4 bytes a proven 0x01 read returns. Judge by
reply type + post read-back integrity. Also runs with ISP mode alive (the
register window may only exist there; prior probe ran normal-mode only).

Includes 0x06 -- Flash.dat's own write-command byte, never yet probed.
"""
import sys, time
sys.path.insert(0, ".")
from msi_isp.ddc import RTBus, ddc_packet, ddc_parse_reply
from msi_isp import isp

BUS = int(sys.argv[1]) if len(sys.argv) > 1 else 4
ADDR = bytes([0xFE, 0xE1, 0xE6])
CAND = [0x06, 0x0D, 0x81, 0x84, 0x02, 0x03, 0x04, 0x00]


def win_read(bus):
    """Proven vendor register read: opcode 0x01 + 3-byte addr -> 4 ASCII."""
    bus.warmup()
    bus.send_recv(0, ADDR, timeout=0.1) if hasattr(bus, "send_recv") else None
    return bus._read_reg(ADDR) if hasattr(bus, "_read_reg") else None


def reg_read(bus):
    pkt = ddc_packet(0x01, ADDR)
    bus.warmup(); bus.ioctl_write(pkt) if hasattr(bus, "ioctl_write") else bus.write(0x37, pkt)
    time.sleep(0.03)
    r = ddc_parse_reply(bus.read(0x37, 15))
    return r["payload"] if r else None


def reg_write(bus, op, val):
    body = bytes([op]) + ADDR + val
    n = len(body)
    pkt = ddc_packet(op, ADDR + val)   # ddc_packet(src ctrl=len-1 style): verify on wire
    bus.warmup(); bus.write(0x37, pkt)
    time.sleep(0.04)
    return ddc_parse_reply(bus.read(0x37, 15))


with RTBus(BUS) as bus:
    base = reg_read(bus)
    print(f"baseline read  : {base}", flush=True)
    if not base:
        sys.exit("proven 0x01 read failed -- abort")
    val = "FW.0"  # first 4 ASCII of reply payload region
    # use actual payload tail as the write-back value (state-preserving)
    tail = base[-4:] if len(base) >= 4 else bytes(base[-4:])
    for phase in ("normal", "isp"):
        if phase == "isp":
            try:
                c, st = isp.enter_isp(bus, verbose=False)
                print(f"ISP alive (cand {c}, status {st:#04x})", flush=True)
            except Exception as e:
                print(f"ISP entry failed: {e} -- skipping ISP phase")
                break
        for op in CAND:
            r = reg_write(bus, op, tail)
            status = "NONE" if r is None else f"reply op={r.get('opcode'):#04x} data={r.get('payload')}"
            post = reg_read(bus)
            ok = "WRITE-LANDED?" if (r is not None and post == base and op in (0x06, 0x0D)) else ""
            print(f"[{phase}] op {op:#04x}: {status}  readback {'intact' if post == base else 'CHANGED'} {ok}", flush=True)
        if phase == "isp":
            try:
                isp.exit_isp(bus)
            except Exception as e:
                print(f"exit_isp: {e}")
        time.sleep(1.0)
    print(f"final read     : {reg_read(bus)}", flush=True)
