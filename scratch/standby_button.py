#!/usr/bin/env python3
"""15j: the button-standby cell — the ONE state the community recipe
needs and automation can't reach. USER CORRECTION post-15j: the power
button = FULL OFF (not standby) -- standby is only ever no-signal. So
this script's silent-bus window is the OFF state (cell B, boeglin's
'worked even with the screen off'); the standby cell (A) is produced by
blinding the input (standby_input.py) ideally with a visual dark/LED
confirmation from the user. Polls for the bus going silent, sweeps +
magic-attempts there, then auto-witnesses once it answers again.

0x35 is inside NVIDIA's i2c-dev allow-list, so even without the kernel
relay this cell is honest for the address that matters most. If the
relay is loaded (--auxdev), 0x49/0x22/0x6A cells join as truthful
TIMEOUT-vs-ACK probes.
"""
import subprocess
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
WAKE_WAIT_S = 120          # override with --wake-wait N for long windows


def conn_status():
    try:
        return open("/sys/class/drm/card1-DP-1/status").read().strip()
    except Exception as e:
        return f"ERR:{e}"


def main():
    args = sys.argv[1:]
    if "--wake-wait" in args:
        globals()["WAKE_WAIT_S"] = int(args[args.index("--wake-wait") + 1])

    class A:
        bus, nvrm = 4, False
        auxdev = "--auxdev" in sys.argv
    with _bus(A()) as bus:
        log(f"transport: {getattr(bus, 'label', 'i2c-dev /dev/i2c-4')}")
        log(f"host-side connector status right now: {conn_status()}")
        ed0 = fw0 = None
        try:
            ed0, fw0 = read_edid(bus), vendor_fw_version(bus)
            log(f"awake baseline fw={fw0!r}; awaiting FULL OFF (button)")
        except Exception as e:
            log(f"baseline read FAILED ({e}) — monitor likely already "
                "OFF; proceeding straight to the OFF cell")
        asleep = False
        t0 = time.monotonic()
        while time.monotonic() - t0 < PATIENCE_S:
            time.sleep(POLL_S)
            s37 = sm.probe(bus, 0x37, not hasattr(bus, "raw_txn"))
            s50 = sm.probe(bus, 0x50, not hasattr(bus, "raw_txn"))

            def silent(v):
                return (v in ("NACK/NO", "TIMEOUT")
                        or v.startswith("EXC"))
            if silent(s37) and silent(s50):
                asleep = True
                log(f"OFF/silent at t+{int(time.monotonic() - t0)}s "
                    f"(0x37={s37} 0x50={s50}) — sweeping now")
                break
            if int(time.monotonic() - t0) % 30 < POLL_S:
                log(f"  still answering t+{int(time.monotonic() - t0)}s "
                    f"(conn={conn_status()})")
        if not asleep:
            log("no OFF detected in patience window — exiting harmlessly")
            return 3
        log(f"host-side connector status WHILE OFF: {conn_status()}")
        time.sleep(2.0)
        sm.sweep(bus, "powered-off")          # THE cell
        subprocess.run(
            [sys.executable, str(Path(__file__).parent / "sweep_slaves.py")
             ] + (["--auxdev"] if A.auxdev else []), timeout=600)
        sm.try_magic(bus)                        # magic while OFF?
        log(f"waiting for power-on (up to {WAKE_WAIT_S} s)...")
        woke = False
        t0 = time.monotonic()
        while time.monotonic() - t0 < WAKE_WAIT_S:
            time.sleep(10.0)
            if sm.probe(bus, 0x37, True) == "ACK":
                woke = True
                break
        if not woke:
            log(f"no reply within {WAKE_WAIT_S} s — press power")
            return 2
        time.sleep(4.0)
        log(f"host-side connector status AFTER POWER-ON: {conn_status()}")
        sm.sweep(bus, "post-wake")
        time.sleep(sm.PAC)
        fw1, ed1 = vendor_fw_version(bus), read_edid(bus)
        if fw0 is None:
            log(f"post-wake fw={fw1!r} (no awake baseline captured — "
                "monitor answering = success)")
            return 0
        same = fw0 == fw1 and ed0 == ed1
        log(f"post-wake fw={fw1!r} edid-match={same}")
        return 0 if same else 1


if __name__ == "__main__":
    sys.exit(main())
