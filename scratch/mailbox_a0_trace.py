#!/usr/bin/env python3
"""15e: BYTE-STREAM trace of the 0xA0 reply lifecycle.

Frame-level parsing kept tripping over the 0x37 cache window (stale
bytes, shifted headers). So: write the request, then poll 6-byte reads
every ~150 ms for 8 s, logging every DISTINCT reply window with its
timestamp -- raw stream, no parsing assumptions. Compare the record sub
0x28 against a control (0x00) to establish the true frame schedule and
whether '.009N' is a delayed frame, a next-cycle frame, or a race.
"""
import sys
import time

sys.path.insert(0, ".")
from msi_isp.cli import vendor_fw_version          # noqa: E402
from msi_isp.ddc import DDC_SLAVE_W, RTBus         # noqa: E402
from msi_isp.isp import exit_isp                   # noqa: E402


def trace(rt, body, dur=8.0, step=0.15, n=6):
    pkt = bytes([0x51]) + body
    x = DDC_SLAVE_W
    for b in pkt:
        x ^= b
    pkt += bytes([x & 0xFF])
    rt.write(0x37, pkt, warmup=True)
    t0 = time.time()
    last = None
    print(f"  sent={pkt.hex(' ')}  (trace {dur}s)")
    while (dt := time.time() - t0) < dur:
        try:
            rep = rt.read(0x37, n)
        except OSError as e:
            rep = f"EIO:{e.errno}".encode()
        if rep != last:
            asc = "".join(chr(b) if isinstance(b, int) and 0x20 <= b < 0x7F
                          else "." for b in rep) if isinstance(rep, bytes) else ""
            print(f"    t={dt:5.2f}s  {rep.hex(' ') if isinstance(rep, bytes) else rep!r:24} |{asc}|")
            last = rep
        time.sleep(step)


def main():
    subs = [int(a, 0) for a in sys.argv[1:]] or [0x28, 0x00]
    with RTBus(4) as rt:
        print(f"witness pre : fw={vendor_fw_version(rt)!r}")
        for s in subs:
            trace(rt, bytes([0x85, 0xA0, s, 0, 0, 0]))
            time.sleep(1.0)
        try:
            fw1 = vendor_fw_version(rt)
        except Exception:                            # noqa: BLE001
            exit_isp(rt)
            time.sleep(3.0)
            fw1 = vendor_fw_version(rt)
        rt.warmup()
        rt.write(0x50, b"\x00")
        print(f"witness post: fw={fw1!r} edid={rt.read(0x50, 8).hex(' ')}")


if __name__ == "__main__":
    main()
