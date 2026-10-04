"""mailbox flash read via I2C_RDWR repeated-start (flashrom mstarddc model).

Self-test first: EDID via 2-msg repeated-start RDWR must match kernel bytes
(00 ff ff ff ff ff ff 00). Only then trust mailbox results.

Mailbox (0x37, ISP alive via the proven 0x94 magic):
  read  = [0x11 + payload...] write, repeated-start read, then 0x12 END
  variants: payload = 3-byte BE flash addr (F8 00 00), 2-byte (tool uses
  16-bit pages: F8 00), or no addr (indexed).
Oracle: live flash @0xF806 == b"MAG 341CQ X28" (model name; version-009-
independent) and @0xF800 ascii 'FW.009'.

Reads only. exit_isp + EDID reverify at end. Bus arg: 3=HDMI (user ok),
4=DP (needs root: RDWR bypasses the allow-list on nvidia? also tested).
"""
import sys, time, struct, fcntl, os
sys.path.insert(0, ".")
from msi_isp.ddc import RTBus
from msi_isp import Facts, isp

I2C_RDWR = 0x0703 + 0x20        # 0x0723
I2C_M_RD = 0x0001

BUS = int(sys.argv[1]) if len(sys.argv) > 1 else 3
OFF = Facts.BIN_LAYOUT["version"][0]              # 0xF800

import ctypes
def rdwr(fd, msgs):
    """msgs: list of (addr7, bytearray, rd_bool). repeated-start between msgs."""
    class M(ctypes.Structure):
        _fields_ = [("addr", ctypes.c_uint16), ("flags", ctypes.c_uint16),
                    ("len", ctypes.c_uint16), ("buf", ctypes.c_void_p)]
    class T(ctypes.Structure):
        _fields_ = [("msgs", ctypes.POINTER(M)), ("nmsgs", ctypes.c_uint)]
    arr = (M * len(msgs))()
    keep = []
    for i, (a, b, rd) in enumerate(msgs):
        arr[i].addr = a
        arr[i].flags = I2C_M_RD if rd else 0
        arr[i].len = len(b)
        cbuf = (ctypes.c_char * len(b)).from_buffer(b)
        arr[i].buf = ctypes.addressof(cbuf)
        keep.append(cbuf)
    t = T(arr, len(msgs))
    fcntl.ioctl(fd, I2C_RDWR, t)

def rdwr_read(fd, addr7, payload, rlen):
    buf = bytearray(rlen)
    rdwr(fd, [(addr7, bytearray(payload), False), (addr7, buf, True)])
    return bytes(buf)

with RTBus(BUS) as bus:
    fd = bus.fd

    # ---- self-test: repeated-start EDID read ----
    try:
        rdwr(fd, [(0x50, bytearray(b"\x00"), False), (0x50, bytearray(8), True)])
        ed = rdwr_read(fd, 0x50, b"\x00", 8)
        print(f"RDWR self-test EDID: {ed.hex(' ')} "
              f"{'OK' if ed[:7]==b'\xff'*7 else 'MISMATCH'}", flush=True)
        if ed[:7] != b"\xff" * 7:
            print("RDWR repeated-start does NOT work on this adapter -- stop")
            sys.exit(1)
    except OSError as e:
        print(f"RDWR self-test failed: {e} -- stop"); sys.exit(1)

    # ---- ISP enter (proven) ----
    st = isp.isp_alive(bus)
    if st is None:
        cand, st = isp.enter_isp(bus)
        print(f"ISP entered: cand#{cand} status={st:#04x}", flush=True)
    else:
        print(f"ISP already alive: {st:#04x}", flush=True)

    # ---- mailbox read variants ----
    VARIANTS = [
        ("11 F8 00 00", b"\x11" + bytes([OFF >> 8, OFF & 0xFF, 0x00])),
        ("11 F8 00",    b"\x11" + bytes([OFF >> 8, OFF & 0xFF])),
        ("11 00 F8",    b"\x11" + bytes([OFF & 0xFF, OFF >> 8])),
        ("11",          b"\x11"),
    ]
    for tag, payload in VARIANTS:
        try:
            d = rdwr_read(fd, 0x37, payload, 32)
            asc = bytes(b for b in d if 0x20 <= b < 0x7F).decode()
            hot = "MAG" in asc or "341" in asc
            print(f"  [{tag:<12}] {d[:20].hex(' ')} ascii={asc!r}"
                  f"{'  <<<< ORACLE HIT' if hot else ''}", flush=True)
        except OSError as e:
            print(f"  [{tag:<12}] errno {e}", flush=True)
        # END transaction after each, keep mailbox clean
        try:
            os.write(fd, b"\x12")
        except OSError:
            pass
        time.sleep(0.05)

    ok = isp.exit_isp(bus); time.sleep(1.5)
    bus.write(0x50, b"\x00"); time.sleep(0.003)
    ed = bus.read(0x50, 8)
    print(f"post-exit EDID head {ed[:8].hex()}  exit_ok={ok}")
