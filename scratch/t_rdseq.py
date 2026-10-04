"""Sequentially-disciplined mailbox flash read — PROVES address phase is live.

Per attempt: END+drain, addr phase [10 03 A2 A1 A0], [11], read N, END, drain.
Discriminators against the live FW.009 flash:
  @0xF800 -> live version field should read '009' (file .bin says '012' --
             if we see 012 it's the cached-file theory, 009 proves live flash)
  @0xF806 -> 'MAG 341CQ X28'
  @0xF810 -> tail of model string
  @0x0000 -> boot vector area, certainly not the model string
Reads only + proven enter/exit. Plain user on HDMI bus 3.
"""
import sys, time, os, select
sys.path.insert(0, ".")
from msi_isp.ddc import RTBus
from msi_isp import Facts, isp

BUS = int(sys.argv[1]) if len(sys.argv) > 1 else 3

def drain(fd, deadline):
    """non-blocking purge until quiet or deadline"""
    while time.time() < deadline:
        try:
            d = os.read(fd, 256)
        except BlockingIOError:
            time.sleep(0.02)
            continue
        except OSError:
            return
        if not d:
            return
        time.sleep(0.005)

def mbox_read(fd, off, n, log=print):
    a = bytes([(off >> 16) & 0xFF, (off >> 8) & 0xFF, off & 0xFF])
    t = time.time() + 0.4
    try:
        os.write(fd, b"\x12")
    except OSError as e:
        log(f"    END-pre write err {e}")
    drain(fd, t)
    t = time.time() + 0.6
    try:
        os.write(fd, b"\x10\x03" + a)
    except OSError as e:
        log(f"    addr write err {e}")
        return b"ERR:addr"
    time.sleep(0.03)
    drain(fd, t)
    try:
        os.write(fd, b"\x11")
    except OSError as e:
        log(f"    rd write err {e}")
        return b"ERR:rd"
    end = time.time() + 0.6
    d = b""
    while time.time() < end and len(d) < n + 8:
        try:
            c = os.read(fd, n + 8 - len(d))
        except BlockingIOError:
            time.sleep(0.02)
            continue
        except OSError as e:
            d = b"ERR:" + str(e).encode()
            break
        if not c:
            break
        d += c
    try:
        os.write(fd, b"\x12")
    except OSError:
        pass
    drain(fd, time.time() + 0.3)
    return d

with RTBus(BUS) as bus:
    fd = bus.fd
    os.set_blocking(fd, False)
    st = isp.isp_alive(bus)
    if st is None:
        cand, st = isp.enter_isp(bus)
        print(f"ISP: cand#{cand} status={st:#04x}", flush=True)
    else:
        print(f"ISP already alive {st:#04x}", flush=True)

    for off in (0x0000, 0xF800, 0xF806, 0xF810, 0xF820):
        d = mbox_read(fd, off, 40)
        asc = bytes(b for b in d if 0x20 <= b < 0x7F).decode()
        print(f"  @{off:06X} raw {d[:24].hex(' ')}")
        print(f"           asc {asc!r}", flush=True)

    os.set_blocking(fd, True)
    ok = isp.exit_isp(bus); time.sleep(1.5)
    bus.write(0x50, b"\x00"); time.sleep(0.003)
    ed = bus.read(0x50, 8)
    print(f"post-exit EDID {ed[:8].hex()} exit_ok={ok}")
