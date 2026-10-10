#!/usr/bin/env python3
"""Full 7-bit slave ACK sweep (0x03-0x77) over any msi-isp transport.

This is the scan NO historical tool could do: i2c-dev hides addresses its
allow-list drops, so this sweep runs through raw I2C-over-AUX (--nvrm root
or --auxdev sudoless via kernel/msi_auxch.ko) where every slave answers or
times out honestly. Read-only: bare-address phases only, no data, cannot
alter monitor state (nvbus-proven); ISP-slave writes never triggered so
the kernel relay gate stays asleep.

usage:  $0 [--bus N] [--nvrm | --auxdev]
On Intel/AMD boxes the i2c-dev default is the ground truth (TEST-INTEL-AMD.md):
expect 0x18-0x1b/0x20/0x22 among the ACKs there — that IS the flash path.
"""
import sys
import time
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent.parent))

from msi_isp.cli import _bus          # noqa: E402
from msi_isp.ddc import RTBus         # noqa: E402


def _probe(bus, addr7):
    """Bare-address phase; returns the reply name (auxdev/nvrm) or ACK/NO."""
    raw = getattr(bus, "raw_txn", None)
    if raw is not None:                       # RM-family transports
        name, _ = raw(0, addr7, data=b"", mot=True, addr_only=True)
        if hasattr(bus, "_term_write"):
            bus._term_write(addr7)
        return name
    return "ACK" if bus.probe(addr7) else "NACK/NO"


def main():
    args = sys.argv[1:]

    class A:
        bus = int(args[args.index("--bus") + 1]) if "--bus" in args else 4
        nvrm = "--nvrm" in args
        auxdev = "--auxdev" in args

    t0 = time.monotonic()
    with _bus(A()) as bus:
        print(f"# sweep 0x03..0x77 over {getattr(bus, 'label', A.bus)}")
        acks, odd = [], []
        for a in range(0x03, 0x78):
            try:
                name = _probe(bus, a)
            except Exception as e:            # transport-level refusal
                name = f"EXC:{e}"
            if name == "ACK":
                acks.append(a)
            elif name not in ("TIMEOUT", "NACK/NO"):   # RM timeouts and
                odd.append((a, name))                  # i2c-dev NACKs are
            sys.stdout.write("." if name != "ACK" else "+")  # both just dead
            sys.stdout.flush()
        print(f"\nACK ({len(acks)}): "
              + " ".join(f"{a:#04x}" for a in acks))
        if odd:
            print("non-ACK/non-TIMEOUT replies: "
                  + " ".join(f"{a:#04x}:{n}" for a, n in odd))
        print(f"done in {time.monotonic() - t0:.1f} s")
        isp = [a for a in (0x18, 0x19, 0x1A, 0x1B, 0x20, 0x21, 0x22)
               if a in acks]
        print("ISP slaves live: " + (", ".join(f"{a:#04x}" for a in isp)
                                     or "NONE — NVIDIA routing gap "
                                     "(dead-end #11); Intel/AMD expected YES"))
        return 0 if isp else 1


if __name__ == "__main__":
    sys.exit(main())
