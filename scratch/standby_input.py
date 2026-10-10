#!/usr/bin/env python3
"""15j: standby axis via INPUT SWITCH (the automatable path to true sleep).

xrandr/DPMS attempts left the scaler fully awake (Wayland quirks + NVIDIA
keeps the link trained). This script blinds the monitor from its OWN side:
SET_VCP 0x60 = DisplayPort-2 (empty input on this unit) -> "no signal" ->
the OSD's auto-standby can engage. Bus probes sample the sleep transition
honestly; if DDC/CI goes silent we have TRUE standby and run the full
slave sweep + ISP-magic attempt in that state, then restore input 0x0F.

Risk: one reversible VCP write (class proven at T0b). If the monitor
sleeps so deeply that DDC/CI dies, restore is retried for 60 s; failing
that, the user picks DP-1 in the OSD (printed instruction).
"""
import subprocess
import sys
import time
from pathlib import Path

HERE = Path(__file__).resolve().parent
sys.path.insert(0, str(HERE.parent))
sys.path.insert(0, str(HERE))

from msi_isp.cli import _bus, read_edid, vendor_fw_version  # noqa: E402
import standby_matrix as sm                                  # noqa: E402

log = sm.log


def setvcp(vcp, val, bus="4"):
    return subprocess.run(
        ["ddcutil", "setvcp", vcp, val, "--bus", bus],
        capture_output=True, text=True, timeout=15)


def getvcp(vcp, bus="4"):
    r = subprocess.run(["ddcutil", "getvcp", vcp, "--bus", bus],
                       capture_output=True, text=True, timeout=15)
    return r.stdout.strip().splitlines()


def main():
    class A:
        bus, nvrm, auxdev = 4, False, False
        aux = "--auxdev" in sys.argv
        auxdev = aux
    with _bus(A()) as bus:
        log(f"transport: {getattr(bus, 'label', 'i2c-dev /dev/i2c-4')}")
        ed0 = read_edid(bus)
        fw0 = vendor_fw_version(bus)
        log(f"baseline fw={fw0!r} inputs: {getvcp('60')}")

        went_silent = False
        r = setvcp("60", "0x10")       # blind the monitor: DP-2, empty
        log(f"setvcp 60 0x10 -> rc={r.returncode} {r.stderr.strip()[:80]}")
        now = getvcp("60")
        log(f"input now: {now}")
        if r.returncode != 0 or "DisplayPort-2" not in " ".join(now):
            log("input switch did NOT take; abort (nothing changed)")
            return 1

        went_silent = False
        t0 = time.monotonic()
        while time.monotonic() - t0 < 150:
            time.sleep(6.0)
            s50 = sm.probe(bus, 0x50, not hasattr(bus, "raw_txn"))
            s37 = sm.probe(bus, 0x37, not hasattr(bus, "raw_txn"))
            t = int(time.monotonic() - t0)
            log(f"t+{t:3d}s 0x50={s50} 0x37={s37}")
            if s50 in ("NACK/NO", "TIMEOUT") and s37 in ("NACK/NO",
                                                          "TIMEOUT"):
                went_silent = True
                log(f"TRUE STANDBY at t+{t}s (both lanes gone)")
                time.sleep(3.0)
                sm.sweep(bus, "deep-standby")
                sm.try_magic(bus)
                break
        if not went_silent:
            log("no silence within 150 s: axis = no-signal-but-awake")
        sm.sweep(bus, "blind")
        time.sleep(sm.PAC)
        try:
            log(f"version-read in state -> {vendor_fw_version(bus)!r}")
        except Exception as e:
            log(f"version-read raised {e}")
        sm.try_magic(bus)

        # restore
        ok = False
        for k in range(10):
            r = setvcp("60", "0x0f")
            if r.returncode == 0:
                ok = True
                break
            log(f"restore attempt {k} failed ({r.stderr.strip()[:60]}) "
                "— monitor may be in deep sleep; retrying")
            time.sleep(6.0)
        if not ok:
            log("RESTORE FAILED FROM BUS — user: select DP-1 in the OSD")
            return 2
        time.sleep(5.0)
        for k in range(10):
            if sm.probe(bus, 0x37, True) == "ACK":
                break
            time.sleep(3.0)
        time.sleep(sm.PAC)
        sm.sweep(bus, "post-restore")
        fw1, ed1 = vendor_fw_version(bus), read_edid(bus)
        same = fw0 == fw1 and ed0 == ed1
        log(f"post-restore fw={fw1!r} edid-match={same} "
            f"inputs now: {getvcp('60')}")
        return 0 if same else 1


if __name__ == "__main__":
    sys.exit(main())
