"""Live probe #2 using ddcutil-matching transport (separate write/read).

Non-destructive: reads only + the tool's routine vendor VCP write.
"""
import sys, time
sys.path.insert(0, "/home/eugene/monitor-fw")
import rt_ddc as R

BUS = int(sys.argv[1]) if len(sys.argv) > 1 else 4

ISP_SEQ = bytes([0x84, 0x01, 0xFE, 0xE1, 0xE6])   # payload after VCP opcode 0x6E


def getvcp(bus, code):
    pkt = R.ddc_packet(0x01, [code])
    bus.write(R.SLAVE_DDC, pkt, warmup=True)
    time.sleep(0.04)
    buf = bus.read(R.SLAVE_DDC, 31)
    return R.ddc_parse_reply(buf)


def main():
    with R.RTBus(BUS) as bus:
        print(f"=== probe2 on /dev/i2c-{BUS} (ddcutil-style transport) ===")

        # EDID via plain write pointer + separate read
        bus.warmup(0x50)
        bus.write(0x50, b"\x00")
        ed = bus.read(0x50, 128)
        print("EDID hdr ok=%s" % (ed[:8] == b"\x00\xff\xff\xff\xff\xff\xff\x00"))
        print(f"  {ed[:16].hex(' ')}")
        name = ed[0x54:0x66]
        print(f"  descriptor@0x54: {name!r}")

        # getvcp 0x10 cross-check vs ddcutil (expect cur=5 max=100)
        p = getvcp(bus, 0x10)
        print(f"getvcp 0x10 -> {p['raw'].hex(' ')} ok={p['ok']}")

        # ACK scan with plain (non-stretch) writes
        print("\n-- ACK scan (I2C_SLAVE + 1-byte write) --")
        for a in [0x37, 0x50, 0x6E, 0x6F, 0x51, 0x36, 0x38]:
            print(f"  0x{a:02x}: {'ACK' if bus.probe(a) else 'no-ACK'}")

        # baseline separate reads from 0x6F (before ISP mode)
        print("\n-- 0x6F baseline (separate write/read) --")
        for reg in (0x00, 0x10, 0x80, 0xFF):
            try:
                bus.warmup(R.SLAVE_ISP)
                bus.write(R.SLAVE_ISP, bytes([reg]))
                d = bus.read(R.SLAVE_ISP, 16)
                print(f"  reg {reg:#04x} -> {d.hex(' ')}")
            except OSError as e:
                print(f"  reg {reg:#04x} -> ERR {e.errno}")
        try:
            d = bus.read(R.SLAVE_ISP, 32)
            print(f"  plain 32B -> {d.hex(' ')}")
        except OSError as e:
            print(f"  plain 32B -> ERR {e.errno}")

        # the tool's ISP-mode vendor VCP write (0x6E) -- routine for this monitor
        print("\n-- send tool's enter-ISP vendor VCP 0x6E (payload e1 e6) --")
        for trial in range(2):
            pkt = R.ddc_packet(0x6E, ISP_SEQ)
            print(f"  trial{trial} TX {pkt.hex(' ')}")
            try:
                bus.write(R.SLAVE_DDC, pkt, warmup=True)
                print("   write OK")
            except OSError as e:
                print(f"   write ERR {e.errno}")
            time.sleep(3.0)          # ini: DelayTimeAfterDdcciWrite=3000
            ack = bus.probe(R.SLAVE_ISP)
            print(f"   0x6F ACK after 3s: {ack}")
            try:
                d = bus.read(R.SLAVE_ISP, 32)
                print(f"   0x6F plain 32B -> {d.hex(' ')}")
            except OSError as e:
                print(f"   0x6F read ERR {e.errno}")
            if ack:
                break
        # is normal DDC still alive?
        p = getvcp(bus, 0x10)
        print(f"\nDDC still alive: {p is not None and p['ok']}")


if __name__ == "__main__":
    main()
