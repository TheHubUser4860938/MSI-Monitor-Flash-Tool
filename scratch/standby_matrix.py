#!/usr/bin/env python3
"""15j: the standby-state axis — the probe dimension we never ran.

All historical matrices (14k relay A1, 15g/15h sweeps, #13 mailbox) were
against a video-serving, fully active scaler. The MStar community recipe
(boeglin 2014, upstream of flashrom mstarddc_spi) flashes with the
monitor IN STANDBY, and their ISP slave 0x49 answers only then. RTD
scalers plausibly gate their ISP mailbox the same way.

Method: DPMS-off via xset (host-side, reversible), sample the bus while
the monitor falls asleep, full honest sweeps on both axes, vendor
ISP-magic + 0x35 probe if the 0x37 lane is still alive in standby,
then wake + byte-identical witness.

Semantics on i2c-dev: filtered addresses (outside 0x2E-0x37, 0x4A-0x4F,
0x50-0x5F) print 'na-filt' — a False there means nothing; a TRUE would
mean the driver let it through to a live ACK. Over --auxdev every
address is honest (ACK / TIMEOUT).

Reads + proven-safe ISP magic only; no flash traffic. Monitor goes dark
for ~1-2 min on purpose.

usage: $0 [--auxdev | --nvrm] [--bus N] [--skip-magic]
"""
import subprocess
import sys
import time
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent.parent))

from msi_isp.cli import _bus, read_edid, vendor_fw_version  # noqa: E402
from msi_isp.isp import enter_isp, exit_isp, isp_alive      # noqa: E402

ADDRS = [0x22, 0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36,
         0x37, 0x3B, 0x41, 0x49, 0x4A, 0x4B, 0x50, 0x59, 0x6A]
ALLOWED = set(range(0x2E, 0x38)) | set(range(0x4A, 0x60))
PAC = 3.2            # vendor pacing on 0x37 reads


def log(msg):
    print(f"[{time.strftime('%H:%M:%S')}] {msg}", flush=True)


def probe(bus, addr7, i2cdev):
    raw = getattr(bus, "raw_txn", None)
    if raw is not None:
        try:
            name, _ = raw(0, addr7, data=b"", mot=True, addr_only=True)
        except Exception as e:
            name = f"EXC:{e}"
        return name
    if i2cdev and addr7 not in ALLOWED:
        return "na-filt"
    try:
        return "ACK" if bus.probe(addr7) else "NACK/NO"
    except Exception as e:
        return f"EXC:{e.split(chr(10))[0]}"


def sweep(bus, tag):
    out = {}
    for a in ADDRS:
        out[a] = probe(bus, a, not hasattr(bus, "raw_txn"))
        time.sleep(0.15)
    live = {f"{a:#04x}:{v}" for a, v in out.items() if v not in
            ("NACK/NO", "TIMEOUT", "na-filt")}
    log(f"sweep[{tag}] " + (f"anomalies: {' '.join(sorted(live))}"
                            if live else "no anomalies beyond baseline set"))
    return out


def try_magic(bus):
    """ISP entry over 0x37 while in the given bus state (only if alive)."""
    if probe(bus, 0x37, not hasattr(bus, "raw_txn")) not in ("ACK",):
        log("magic: 0x37 not answering in this state — skipped")
        return False
    time.sleep(PAC)
    try:
        st = enter_isp(bus, verbose=False)
    except Exception as e:
        log(f"magic: enter_isp raised {e}")
        return False
    log(f"magic: enter_isp -> {st!r}")
    alive = None
    if isinstance(st, tuple) and len(st) == 2 and st[1] is not None:
        alive = bool(st[1] & 0x80)          # 0x80 = ISP-alive bit (14k A2)
        log(f"magic: enter status {st[1]:#04x} -> alive={alive}")
    else:
        time.sleep(PAC)
        alive = isp_alive(bus) if st else None
        log(f"magic: isp_alive -> {alive!r}")
    if alive:
        time.sleep(PAC)
        log(f"magic-alive 0x35 probe -> "
            f"{probe(bus, 0x35, not hasattr(bus, 'raw_txn'))}")
        try:
            log("magic-alive 0x35 sweep -> "
                + " ".join(f"{a:#04x}:{probe(bus, a, False)}"
                           for a in (0x49, 0x22)) + " (na-filt on i2c-dev)")
        except Exception:
            pass
        time.sleep(PAC)
        if exit_isp(bus, verbose=False):
            log("magic: 0x24 exit OK")
        else:
            log("magic: exit FAILED — leave for power cycle")
        return True
    return bool(st)


def x_dpms(on: bool):
    """DPMS toggle: prefer xset, fall back to xrandr (this box lacks
    xset; --off on the only connected output is the equivalent)."""
    import shutil
    if shutil.which("xset"):
        subprocess.run(["xset", "dpms", "force", "on" if on else "off"],
                       check=False, timeout=5)
        return
    outs = subprocess.run(["xrandr", "-q"], capture_output=True,
                          text=True, check=True).stdout
    names = [ln.split()[0] for ln in outs.splitlines()
             if ln.strip().startswith(("DP", "HDMI")) and " connected" in ln]
    for n in names:
        subprocess.run(["xrandr", "--output", n,
                        "--auto" if on else "--off"],
                       check=False, timeout=10)
    log(f"xrandr fallback applied to {names} -> {'on' if on else 'off'}")


def main():
    args = sys.argv[1:]

    class A:
        bus = int(args[args.index("--bus") + 1]) if "--bus" in args else 4
        nvrm = "--nvrm" in args
        auxdev = "--auxdev" in args
    skip_magic = "--skip-magic" in args

    with _bus(A()) as bus:
        log(f"transport: {getattr(bus, 'label', f'i2c-dev bus {A.bus}')}")
        base = sweep(bus, "awake")
        time.sleep(PAC)
        fw0 = vendor_fw_version(bus)
        ed0 = read_edid(bus)
        log(f"awake baseline fw={fw0!r} edid-sha={hash(ed0) & 0xffffffff:08x}")
        time.sleep(PAC)

        if not skip_magic:
            try_magic(bus)          # full-awake control cell

        log("DPMS off (monitor goes dark on purpose)")
        x_dpms(False)
        state = "off"
        for k in range(12):        # sample up to ~66 s of sleep-evolution
            time.sleep(5.5)
            st = probe(bus, 0x50, not hasattr(bus, "raw_txn"))
            st37 = probe(bus, 0x37, not hasattr(bus, "raw_txn"))
            log(f"t+{(k + 1) * 5:3d}s  0x50={st}  0x37={st37}")
            if st in ("NACK/NO", "TIMEOUT") and st37 in ("NACK/NO",
                                                          "TIMEOUT"):
                state = "silent"   # monitor truly asleep: both lanes gone
                break
        log(f"bus state after DPMS-off: {state}")
        sweep(bus, "standby")
        time.sleep(PAC)
        try:
            v = vendor_fw_version(bus)
            log(f"standby version-read -> {v!r}")
        except Exception as e:
            log(f"standby version-read raised {e}")
        if not skip_magic:
            try_magic(bus)         # THE cell: magic in standby

        log("DPMS on (waking)")
        x_dpms(True)
        time.sleep(4.0)
        for k in range(8):         # wait for link+lanes back
            if probe(bus, 0x37, True) == "ACK":
                break
            log(f"  wake wait {k} ...")
            time.sleep(3.0)
        time.sleep(PAC)
        post = sweep(bus, "post-wake")
        try:
            fw1 = vendor_fw_version(bus)
            ed1 = read_edid(bus)
        except Exception as e:
            log(f"post-wake reads FAILED: {e}")
            return 2
        same = (fw0 == fw1) and (ed0 == ed1)
        log(f"post-wake fw={fw1!r} edid-match={same}")
        diffs = {f"{a:#04x}:{base[a]}->{post[a]}" for a in ADDRS
                 if base[a] != post[a]}
        log("sweep drift vs baseline: " + ("; ".join(sorted(diffs))
                                           if diffs else "NONE"))
        return 0 if same and not diffs else 1


if __name__ == "__main__":
    sys.exit(main())
