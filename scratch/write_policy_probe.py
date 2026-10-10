#!/usr/bin/env python3
"""T1 (session 15b): write POLICY of the emulated/synthetic slaves, per
transport. Question the write driver needs: does each host stack forward
multi-byte writes at all to slaves that ACK reads (0x30 emulated,
0x4a/0x4b branch, +0x50 pointer-only safe writes), and with what error?

Safe by construction:
  * 0x30/0x4a/0x4b are emulated/synthetic (reads are zeros/noise per
    sessions 7/14k) -- writes there cannot alter monitor state;
  * 0x50 gets only single-byte POINTER writes (what every EDID read
    already does) -- no EEPROM programming is touched (that's T2, and
    it stays user-gated).
Both transports: i2c-dev (kernel shim) and --auxdev (our kernel relay,
writes here are OUTSIDE the 0x18-0x22 gate band, no unlock needed).
"""
import errno
import sys

sys.path.insert(0, ".")
from msi_isp.auxdev import AuxDevBus   # noqa: E402
from msi_isp.ddc import RTBus          # noqa: E402


def try_(fn, *a, **k):
    """Returns (ok, err_desc). RTBus/AuxDevBus write() return None on
    success and RAISE on failure -- success must be judged by the absence
    of an exception, not the return value (15b T1 first-run bug)."""
    try:
        fn(*a, **k)
        return True, None
    except Exception as e:                      # noqa: BLE001
        en = getattr(e, "errno", None)
        name = errno.errorcode.get(en, "?") if en else "?"
        return False, f"{type(e).__name__}({name}:{e})"


def try_read(rt, addr, n=4):
    try:
        return rt.read(addr, n), None
    except Exception as e:                      # noqa: BLE001
        return b"", f"{type(e).__name__}:{e}"


def run(label, bus):
    print(f"== {label} ==")
    for addr, data in ((0x30, b"\x00"), (0x30, b"\x00\x00"),
                       (0x4a, b"\x00"), (0x4a, b"\x00\x00"),
                       (0x4b, b"\x00"), (0x50, b"\x00")):
        ack = bus.probe(addr)
        rb, _ = try_read(bus, addr)
        wr_ok, err = try_(bus.write, addr, data)
        ra, _ = try_read(bus, addr)
        same = "stable" if rb == ra else f"read {rb[:4].hex()}->{ra[:4].hex()}"
        print(f"  addr {addr:#04x} data={data.hex(' '):6} probe={ack}  "
              f"write={'OK' if wr_ok else 'ERR ' + str(err)}  "
              f"read-after={ra[:4].hex() or '-'} ({same})")


if __name__ == "__main__":
    with RTBus(4) as rt:
        run("i2c-dev /dev/i2c-4 (NVIDIA shim)", rt)
    with AuxDevBus() as bus:
        run("--auxdev kernel relay (MSI_AUXCH_XFER)", bus)
    print("\nT1 evidence captured -- interpretation in STATUS 15b "
          "(forwarding policy per transport; 0x50 was pointer-writes only).")
