"""Clean mailbox test on HDMI (bus 3) — NO DDC warmup bytes.

Lesson from t_mbox: RTBus.warmup() prepends the DDC/CI half-write (0x51/0x00
byte) which resets the RTD mailbox command state machine. This version uses
raw fd writes/reads only.

Sequence per flash read attempt (MSTAR-ddc model, adapted for RTD):
  [optional] addr phase: write [0x10, op=0x03, A2, A1, A0]   (SPI READ cmd)
  read:      write [0x11] ; read N
  end:       write [0x12]
plus simplified variants (no addr phase / 2-byte addr).

ISP entry via proven 0x94 magic (status-read uses DDC warmup, that's fine —
it ENDS the command phase anyway). Oracle: flash@0xF806 = 'MAG 341CQ X28',
flash@0xF800 head 'FW.009'. Ends with 0x24 reset + EDID reverify.
"""
import sys, time, os
sys.path.insert(0, ".")
from msi_isp.ddc import RTBus
from msi_isp import Facts, isp

BUS = int(sys.argv[1]) if len(sys.argv) > 1 else 3
OFF = Facts.BIN_LAYOUT["version"][0]          # 0xF800
A2, A1, A0 = OFF >> 16, (OFF >> 8) & 0xFF, OFF & 0xFF

def w(fd, payload, tag):
    try:
        n = os.write(fd, payload)
        return n == len(payload)
    except OSError as e:
        print(f"    write {tag}: errno {e}", flush=True)
        return False

def r(fd, n):
    try:
        return os.read(fd, n)
    except OSError as e:
        return b"ERR:" + str(e).encode()

def mbox_try(fd, bus, tag, addr_phase, rcmd, rlen):
    ok = True
    if addr_phase is not None:
        ok = w(fd, addr_phase, "addr")
    if ok:
        w(fd, rcmd, "rd-cmd")
        time.sleep(0.02)
        d = r(fd, rlen)
    else:
        d = b"ERR:addr-phase-failed"
    w(fd, b"\x12", "end")
    time.sleep(0.02)
    asc = bytes(b for b in d if 0x20 <= b < 0x7F).decode() if isinstance(d, bytes) else str(d)
    dd = d if isinstance(d, bytes) else b""
    hot = "MAG" in asc or "FW." in asc or "341C" in asc
    print(f"  [{tag:<24}] {dd[:24].hex(' ')}  ascii={asc[:40]!r}"
          f"{'  <<<< ORACLE' if hot else ''}", flush=True)
    return hot

with RTBus(BUS) as bus:
    fd = bus.fd
    st = isp.isp_alive(bus)
    if st is None:
        cand, st = isp.enter_isp(bus)
        print(f"ISP: cand#{cand} status={st:#04x}", flush=True)
    else:
        print(f"ISP already alive {st:#04x}", flush=True)

    # variants: (tag, addr_phase, read_cmd, rlen)
    V = [
        ("mstar 03+A f80000/0x11", b"\x10\x03" + bytes([A2, A1, A0]), b"\x11", 32),
        ("mstar 03+A f80000/0x11r", b"\x10\x03" + bytes([A2, A1, A0]), b"\x11", 16),
        ("no addr phase /0x11",     None,                             b"\x11", 32),
        ("wr 0x30 F800 then 0x11",  bytes([0x30, 0xF8, 0x00]),        b"\x11", 32),
        ("wr 0x31 F8 0x32 00",      None,                             b"\x11", 32),
        ("rtd 0x91/0x92 style",     bytes([0x91, 0xF8, 0x00]),        b"\x92", 32),
        ("rd-only 0x11 twice",      None,                             b"\x11", 8),
    ]
    for tag, ap, rc, rl in V:
        mbox_try(fd, bus, tag, ap, rc, rl)

    ok = isp.exit_isp(bus)
    time.sleep(1.5)
    bus.write(0x50, b"\x00"); time.sleep(0.003)
    ed = bus.read(0x50, 8)
    print(f"post-exit EDID {ed[:8].hex()} exit_ok={ok}")
