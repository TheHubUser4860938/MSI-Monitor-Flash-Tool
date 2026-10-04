#!/usr/bin/env python3
"""Read-only mailbox probe: does the ISP flash window answer?

Two candidate models, tried while ISP mode is alive:
  A) MSI variant (Comm.dll ReadFlashData): slave 0x20, 16-bit page pointer
     write [hi,lo] then plain read bursts.
  B) flashrom mstarddc_spi: slave 0x37 mailbox, command-prefixed
     [0x11 addr2 addr1 addr0] write then read N bytes from 0x37.

Oracle: flash offset 0xF806 holds the ASCII model string "MAG 341CQ X28"
(verified in the .bin).  Finding that string = flash path PROVEN, read-only.

Every transaction here is a flash READ or a mailbox address write.
Nothing can erase/program: those commands (0x10-prefixed data + erase
opcodes) are never sent.  Exits ISP mode at the end.  Run as root.
"""
import sys, time
sys.path.insert(0, "/home/eugene/Projects/monitor-fw")
from msi_isp import Facts
from msi_isp.nvbus import NvRMAuxBus
from msi_isp.nvrm import AUX_REQ_WRITE, AUX_REQ_READ
from msi_isp.isp import enter_isp, exit_isp, isp_alive

ORACLE = b"MAG 341CQ X28"
OFF = 0xF800          # header region: "012" + model string
N = 48

DEFER_NAMES = {"DEFER", "I2CDEFER", "BUSY", "?0x8"}


def w(b, slave, data, tries=8):
    """Write with DEFER-aware retry (kernel drm_dp_i2c semantics)."""
    last = None
    for _ in range(tries):
        try:
            b.write(slave, data)
            return True
        except OSError as e:
            last = str(e)
            if "TIMEOUT" in last:      # RM already exhausted its retries
                time.sleep(0.02)
            else:
                time.sleep(0.01)
    print(f"      write {slave:#04x} [{data.hex(' ')}] -> {last}")
    return False


def r(b, slave, n, tries=8):
    last = None
    for _ in range(tries):
        try:
            d = b.read(slave, n)
            if d:
                return d
            last = "empty"
        except OSError as e:
            last = str(e)
        time.sleep(0.02)
    print(f"      read  {slave:#04x} {n}B -> {last}")
    return b""


def show(tag, d):
    txt = "".join(chr(c) if 32 <= c < 127 else "." for c in d)
    hit = "  <== ORACLE FOUND" if ORACLE in d else ""
    print(f"    {tag}: {d[:32].hex(' ')}{hit}")
    if ORACLE in d:
        print(f'    ascii: "{txt}"')
    return ORACLE in d


def main():
    with NvRMAuxBus() as b:
        raw = lambda req, s, d=b"", mot=False, ao=False: b.raw_txn(
            req, s, data=d, mot=mot, addr_only=ao)

        print("== ISP entry ==")
        idx, st = enter_isp(b, verbose=True)
        print(f"  ISP alive: cand{idx} status {st:#04x}")

        # raw reply-type discrimination on the ISP slaves
        print("\n== raw reply types to ISP slaves (1 bare addr write each) ==")
        for s in (0x20, 0x22, 0x18, 0x37):
            try:
                name, _ = raw(AUX_REQ_WRITE, s)
                print(f"  slave {s:#04x} bare write -> {name}")
            except Exception as e:
                print(f"  slave {s:#04x} bare write -> exc {e}")

        # ---- model A: slave 0x20, 16-bit page pointer ----
        print("\n== Model A: slave 0x20 pointer-read ==")
        a_ok = False
        if w(b, 0x20, bytes([OFF >> 8, OFF & 0xFF])):
            d = r(b, 0x20, N)
            a_ok = show("A", d) if d else False
        if not a_ok:
            # page-0 first, then the target page (tool pages at 32B)
            if w(b, 0x20, b"\x00\x00"):
                d = r(b, 0x20, 16)
                if d:
                    show("A page0", d)

        # ---- model B: flashrom mstarddc read framing on 0x37 ----
        print("\n== Model B: 0x37 mailbox [0x11 a2 a1 a0] + read ==")
        b_ok = False
        cmd = bytes([0x11, (OFF >> 16) & 0xFF, (OFF >> 8) & 0xFF, OFF & 0xFF])
        if w(b, 0x37, cmd):
            d = r(b, 0x37, N)
            b_ok = show("B", d) if d else False
        if not b_ok:
            # some RTD variants: [0x10 a2 a1 a0] addr phase then read
            cmd = bytes([0x10, (OFF >> 16) & 0xFF, (OFF >> 8) & 0xFF, OFF & 0xFF])
            if w(b, 0x37, cmd):
                d = r(b, 0x37, N)
                b_ok = show("B2", d) if d else False

        print(f"\nRESULT A={a_ok} B={b_ok}")
        print("\n== ISP exit ==")
        ok = exit_isp(b, verbose=True)
        try:
            ed = b.read(0x50, 8, warmup=True)
            print(f"  EDID head after test: {ed.hex(' ')}")
        except Exception as e:
            print(f"  EDID check: {e}")
        print(f"  isp_alive now: {isp_alive(b)}   exit_ok: {ok}")


if __name__ == "__main__":
    main()
