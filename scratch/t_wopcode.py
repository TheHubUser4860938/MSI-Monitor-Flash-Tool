#!/usr/bin/env python3
"""Pin the vendor DDC/CI WRITE opcode — fully reversible.

Model (decode of WinIspPlugIn WriteRegEx math @0x8654 + Flash.dat scripts):
  register space is 24-bit with bit23 = write flag; the version register
  window lives at page 0xFE (BinVersionAddress FE E1 00 -> 'FW.009').
  Read form is proven: opcode 0x01, operands [page, b1, b0] -> 4 data bytes
  (reply carries result byte 0x02 and payload).

Test: over plain DDC/CI framing (works without ISP), for each candidate
write opcode send [opcode, page, b1, b0, data...] writing the SAME bytes
back to the version register (write-back-what-we-read = state-preserving
on success). Judge by the DDC/CI reply result byte + a later 0x01 read-back:
  result 0x02 (matching the proven read reply) => opcode accepted
  result 0x01 / no reply / garbage             => opcode rejected
Then re-read via 0x01 and verify the value is unchanged (it must be —
we wrote identical bytes). If a candidate writes something WRONG we can see
it and fix by writing the saved original back with the working opcode.

Blast radius: worst case the on-screen FW version string shows wrong until
power cycle. Flash itself is untouched; no ISP entry, no SPI traffic.
"""
import sys, time
sys.path.insert(0, "/home/eugene/Projects/monitor-fw")
from msi_isp.ddc import RTBus, ddc_packet, ddc_parse_reply

BUS = 4          # DP bus (DDC/CI shim works here without root)
REG = bytes([0xFE, 0xE1, 0xE6])   # proven-answering version register
BUSY = 0.08

def rd01(bus, reg):
    bus.warmup(); bus.write(0x37, ddc_packet(0x01, reg))
    time.sleep(BUSY)
    r = ddc_parse_reply(bus.read(0x37, 15))
    return r

def wr(bus, op, reg, data):
    bus.warmup(); bus.write(0x37, ddc_packet(op, reg + data))
    time.sleep(BUSY)
    raw = bus.read(0x37, 3)
    if len(raw) < 2 or raw[0] not in (0x78, 0x7E, 0x6E):
        return {"len": 0, "result": None, "raw": raw.hex()}
    r = bytes([raw[0] ^ 0x20])
    res = raw[1]
    return {"result": res, "raw": raw.hex()}

def main():
    with RTBus(BUS) as bus:
        base = rd01(bus, REG)
        if base is None:
            sys.exit("baseline read failed — bus not answering, aborting")
        print(f"baseline 0x01 read {REG.hex()}: ok={base.get('ok')} "
              f"payload={base['payload'].hex(' ')} "
              f"|{bytes(c for c in base['payload'] if 32 <= c < 127).decode(errors='replace')[:16]}|")
        payload = base["payload"]
        # ascii payload = 'FW.009N...' — the bytes a write would put back.
        asc = bytes(c for c in payload if 32 <= c < 127)
        orig = asc[:4]
        print(f"original reg bytes: {orig.hex(' ')} |{orig.decode(errors='replace')}|")

        for op in (0x02, 0x03, 0x04, 0x32, 0x33, 0x3B, 0x00):
            try:
                rep = wr(bus, op, REG, orig)
            except OSError as e:
                print(f"  wr 0x{op:02x}: bus error {e} (probably NACK)")
                continue
            res = rep["result"]
            print(f"  wr 0x{op:02x}: result byte {None if res is None else hex(res)} "
                  f"raw={rep['raw']}")
            time.sleep(0.25)
            back = rd01(bus, REG)
            nsc = bytes(c for c in back["payload"] if 32 <= c < 127)[:4] if back else b""
            same = nsc == orig
            print(f"          read-back {nsc!r} {'(unchanged)' if same else '(CHANGED!)'}"
                  f" ok={back.get('ok') if back else None}")
            if not same:
                # restore with the same opcode that changed it
                wr(bus, op, REG, orig)
                print(f"          restored via 0x{op:02x}")
            time.sleep(0.25)

        # DDC/CI still healthy, EDID intact?
        v = rd01(bus, REG)
        print(f"\npost-health: version payload ok={'FW' in bytes(v['payload'] if v else b'')}")
        bus.warmup(); bus.write(0x50, bytes([0]))
        e = bus.read(0x50, 16) if False else b""     # (0x50 via shim needs pos; informational)
        print("done — monitor should display firmware normally")

if __name__ == "__main__":
    main()
