"""Differential write probe on VOLATILE RAM registers (zero-persistence risk).

Lesson from t_wop2: write-back-same-byte can't distinguish success from drop.
Here we write a DIFFERENT value and require the read to change, on registers
that are RAM/scratch by nature (Flash.dat drives 0x60/0x61 as scratch regs for
the SPI bridge; ISP-mode context, RAM semantics, reverts on exit/flash):

  enter ISP -> read R @addr (0x000060) -> write op X, value V ->
  read again (must show V) -> sanity: write V to addr 0x000000 (unmapped;
  expect NO change/NO reply) -> exit ISP -> version window intact, EDID intact

Candidate write opcodes: 0x06, 0x0D, 0x81 (Flash.dat CSV verbs + neighbors).
Address sanity doubles as the phantom-ACK filter: a real engine answers
address-sensitively; a stuck FIFO answers identical to everything.
"""
import sys, time
sys.path.insert(0, ".")
from msi_isp.ddc import RTBus, ddc_packet, ddc_parse_reply
from msi_isp import isp

BUS = int(sys.argv[1]) if len(sys.argv) > 1 else 4
CAND = [0x06, 0x0D, 0x81]
SCRATCH = bytes([0x00, 0x00, 0x60])     # index/scratch reg (RAM per Flash.dat)
UNMAP = bytes([0x00, 0x00, 0x00])       # unmapped low vector addr (sanity)
VAL = bytes([0x00, 0x00, 0x00, 0x5A])   # harmless value, easy to spot


def rd(bus, addr):
    pkt = ddc_packet(0x01, addr)
    bus.warmup(); bus.write(0x37, pkt)
    time.sleep(0.04)
    r = ddc_parse_reply(bus.read(0x37, 15))
    if not r or not r["payload"]:
        return None
    # payload = [result][flag][addr echo...][data...] - return raw for eyeballing
    return r["payload"]


def wr(bus, op, addr, val):
    body = bytes([op]) + addr + val
    ln = 0x80 | (len(body) & 0x0F)
    pkt = bytes([0x51, ln]) + body
    x = 0x6E
    for b in pkt[0:2] + body:
        x ^= b
    pkt += bytes([x & 0xFF])
    bus.warmup(); bus.write(0x37, pkt)
    time.sleep(0.05)
    r = ddc_parse_reply(bus.read(0x37, 15))
    return r["payload"] if r and r["payload"] else None


def ver(bus):
    return rd(bus, bytes([0xFE, 0xE1, 0xE6]))


with RTBus(BUS) as bus:
    v0 = ver(bus)
    print(f"version window : {v0!r}", flush=True)
    if not v0:
        sys.exit("baseline read failed")

    c, st = isp.enter_isp(bus, verbose=False)
    print(f"ISP alive: cand {c} status {st:#04x}", flush=True)

    base60 = rd(bus, SCRATCH)
    print(f"scratch 0x60   : {base60!r}", flush=True)

    for op in CAND:
        ack = wr(bus, op, SCRATCH, VAL)
        time.sleep(0.05)
        after = rd(bus, SCRATCH)
        changed = after is not None and base60 is not None and after != base60
        has5a = after is not None and 0x5A in after
        # sanity: same op against unmapped addr must NOT echo a 0x5A read
        wr(bus, op, UNMAP, VAL)
        after0 = rd(bus, UNMAP)
        sanity = not (after0 is not None and 0x5A in after0)
        print(f"op {op:#04x}: ack={ack!r}\n       after={after!r} changed={changed} "
              f"has0x5A={has5a} | unmapped={after0!r} sanity_ok={sanity}", flush=True)

    isp.exit_isp(bus)
    time.sleep(1.2)
    v1 = ver(bus)
    ed_ok = True
    bus.write(0x50, b"\x00"); time.sleep(0.003)
    ed = bus.read(0x50, 8)
    ed_ok = ed[:8] == b"\x00\xff\xff\xff\xff\xff\xff\x00"
    print(f"post-exit      : version={v1!r} intact={v1 == v0} EDID_ok={ed_ok}", flush=True)
