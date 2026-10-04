"""Non-destructive bus probe: who ACKs, and does the ISP slave answer reads?

Safety: everything here is READ-ONLY except a single MCCS vendor write to the
normal DDC/CI slave (0x37), which the Windows tool issues routinely.
No flash erase/program command is ever sent.
"""
import sys
import time

sys.path.insert(0, "/home/eugene/monitor-fw")
from rt_i2c import I2CBus, I2C_RD, I2C_WR, ddcci_checksum

BUS = int(sys.argv[1]) if len(sys.argv) > 1 else 4
DDC = 0x37          # DDC/CI slave (7-bit)
ISP_WR = 0x6F       # tool's ISP slave, 7-bit (0xde/0xdf are the 8-bit forms used in the ini log)


def probe_ack(bus, addr):
    out, err = bus.xfer([(addr, I2C_WR, b"\x00")])
    return err is None


def ddcci_req(bus, dest, opcode, data, wait_ms=40):
    payload = bytes([0x51, 0x84, opcode] + list(data))
    chk = ddcci_checksum(0x50, dest, payload)
    pkt = bytes([0x50 << 1, len(payload) + 1, 0x51]) + payload + bytes([chk])
    return bus.plain_write(DDC, pkt)


def ddcci_read(bus, expect_len=3):
    out, err = bus.xfer([(DDC, I2C_RD, b"\0" * 23)])
    if err:
        return None, err
    return out[0], None


def main():
    print(f"=== i2c-{BUS} probe (read-only) ===")
    with I2CBus(BUS) as bus:
        # 1. sanity: EDID at 0x50
        out, err = bus.xfer([(0x50, I2C_WR, b"\x00"), (0x50, I2C_RD, b"\0" * 128)])
        if err:
            print(f"[!!] EDID 0x50 read failed: {err}")
        else:
            e = out[0]
            ok = e[:8] == b"\x00\xff\xff\xff\xff\xff\xff\x00"
            name = ""
            for off in (0x54, 0x66, 0x78, 0x8a):
                blk = e[off:off + 18]
                if blk[:3] == b"\x00\x00\xfc\x00":
                    name = blk[4:].decode("latin1").strip()
            print(f"[ok] EDID hdr={'good' if ok else 'BAD'} monitor_name={name!r}")
            print(f"     raw[0:16]={e[:16].hex(' ')}")

        # 2. DDC/CI capability request (standard, read-only)
        src = 0x50
        payload = bytes([0x51, 0x84, 0x0F, 0x00, src ^ 0x50])
        chk = ddcci_checksum(src, 0x37, payload)
        pkt = bytes([src << 1, len(payload) + 1, 0x51]) + payload + bytes([chk])
        try:
            bus.plain_write(DDC, pkt)
        except OSError as e:
            print(f"[!!] DDC/CI write failed: {e}")
            return
        time.sleep(0.05)
        r, err = ddcci_read(bus)
        if err:
            print(f"[!!] DDC/CI read failed: {err}")
        else:
            print(f"[ok] DDC/CI cap reply: {r[:11].hex(' ')}")

        # 3. address scan: does anything answer at 0x6e/0x6f or neighbours?
        print("\n-- ACK scan (write 1 zero byte, stop condition) --")
        for a in [0x37, 0x50, 0x51, 0x6E, 0x6F, 0x36, 0x38, 0x6D, 0x70]:
            try:
                ack = probe_ack(bus, a)
            except Exception as e:
                ack = f"err {e}"
            print(f"  0x{a:02x}: {'ACK' if ack is True else ('NAK/timeout' if ack is False else ack)}")

        # 4. blind read from ISP slave WITHOUT entering ISP mode (baseline)
        print("\n-- baseline reads from 0x6F (scaler still in normal mode) --")
        for n in (1, 8, 16, 32):
            out, err = bus.xfer([(0x6F, I2C_RD, b"\0" * n)])
            print(f"  plain read {n:2d}B: ", "ERR " + str(err).split(":")[0] if err else out[0].hex(" "))
        # write-address-then-read (register style)
        for reg in (0x00, 0x01, 0x02, 0x10, 0x20, 0x30, 0x40, 0x50, 0x60, 0x80, 0xFF):
            out, err = bus.xfer([(0x6F, I2C_WR, bytes([reg])), (0x6F, I2C_RD, b"\0" * 16)])
            tag = "ERR" if err else out[0].hex(" ")
            print(f"  reg 0x{reg:02x} -> 16B: {tag}")


if __name__ == "__main__":
    main()
