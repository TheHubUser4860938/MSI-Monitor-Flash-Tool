#!/usr/bin/env python3
"""15j: the button-standby cell — the ONE state the community recipe
needs and automation can't reach. Polls patiently; user presses the
monitor's power key once; the sweep + magic attempt then run IN sleep,
and everything auto-witnesses on wake (signal or second press).

0x35 is inside NVIDIA's i2c-dev allow-list, so even without the kernel
relay this cell is honest for the address that matters most. If the
relay is loaded (--auxdev), 0x49/0x22/0x6A cells join as truthful
TIMEOUT-vs-ACK probes.
"""
import sys
import time
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent.parent))
sys.path.insert(0, str(Path(__file__).resolve().parent))

from msi_isp.cli import _bus, read_edid, vendor_fw_version  # noqa: E402
import standby_matrix as sm                                  # noqa: E402

log = sm.log
POLL_S = 5.0
PATIENCE_S = 300


def main():
    class A:
        bus, nvrm = 4, False
        auxdev = "--auxdev" in sys.argv
    with _bus(A()) as bus:
        log(f"transport: {getattr(bus, 'label', 'i2c-dev /dev/i2c-4')}")
        ed0, fw0 = read_edid(bus), vendor_fw_version(bus)
        log(f"awake baseline fw={fw0!r}; PRESS POWER ONCE within "
            f"{PATIENCE_S // 60} min — screen must go truly dark")
        asleep = False
        t0 = time.monotonic()
        while time.monotonic() - t0 < PATIENCE_S:
            time.sleep(POLL_S)
            s37 = sm.probe(bus, 0x37, not hasattr(bus, "raw_txn"))
            s50 = sm.probe(bus, 0x50, not hasattr(bus, "raw_txn"))
            if s37 in ("NACK/NO", "TIMEOUT") and s50 in ("NACK/NO",
                                                          "TIMEOUT"):
                asleep = True
                log(f"ASLEEP at t+{int(time.monotonic() - t0)}s "
                    "(0x37+0x50 gone) — sweeping now")
                break
            if int(time.monotonic() - t0) % 30 < POLL_S:
                log(f"  still awake t+{int(time.monotonic() - t0)}s")
        if not asleep:
            log("no button press detected in patience window — exiting "
                "harmlessly")
            return 3
        time.sleep(2.0)
        sm.sweep(bus, "button-standby")          # THE cell
        sm.try_magic(bus)                        # magic in true sleep?
        log("waiting for wake (signal returns or press again)...")
        woke = False
        t0 = time.monotonic()
        while time.monotonic() - t0 < 120:
            time.sleep(4.0)
            if sm.probe(bus, 0x37, True) == "ACK":
                woke = True
                break
        if not woke:
            log("did not wake within 120 s — press power or switch input")
            return 2
        time.sleep(4.0)
        sm.sweep(bus, "post-wake")
        time.sleep(sm.PAC)
        fw1, ed1 = vendor_fw_version(bus), read_edid(bus)
        same = fw0 == fw1 and ed0 == ed1
        log(f"post-wake fw={fw1!r} edid-match={same}")
        return 0 if same else 1


if __name__ == "__main__":
    sys.exit(main())
