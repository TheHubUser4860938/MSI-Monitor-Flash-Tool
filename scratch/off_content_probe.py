#!/usr/bin/env python3
"""15j cell B (redo): powered-OFF state, CONTENT-verified.

First run showed bare-address probes 'answering' while the monitor was
fully OFF and the DRM connector said 'disconnected' -> the RM aux path
serves PHANTOM completions on a dead DP link (bare ACKs are transport
mirages, not monitor replies). Honest cell B therefore uses content
oracles only:
  * i2c-dev 0x50: 128-byte EDID read + block checksum + FF-header test
  * relay 0x37: the vendor version-window query (payload must contain
    b'FW')
plus dmesg-side connector truth from sysfs. When content returns (user
powers on), re-verify + full relay sweep to witness the recovery edge.
"""
import subprocess
import sys
import time
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent.parent))
sys.path.insert(0, str(Path(__file__).resolve().parent))

from msi_isp.cli import _bus, vendor_fw_version                # noqa: E402
from msi_isp.ddc import RTBus                                  # noqa: E402
import standby_matrix as sm                                    # noqa: E402

log = sm.log


def conn():
    return open("/sys/class/drm/card1-DP-1/status").read().strip()


def edid_content_ok(i2c):
    i2c.warmup()
    i2c.write(0x50, bytes([0]))
    time.sleep(0.08)
    block = i2c.read(0x50, 128)
    if len(block) < 128:
        return f"SHORT({len(block)}B:{block[:8].hex()})"
    head = block[:8] == bytes([0xFF] * 7 + [0x00])
    ck = (sum(block) & 0xFF) == 0
    return f"header={head} checksum={ck} first16={block[:16].hex(' ')}"


def ver_content(auxbus):
    try:
        v = vendor_fw_version(auxbus)
        return f"version-read -> {v!r}"
    except Exception as e:
        return f"version-read raised: {str(e).splitlines()[0][:90]}"


def main():
    log(f"connector: {conn()}")
    with RTBus(4) as i2c:
        try:
            res = edid_content_ok(i2c)
        except Exception as e:
            res = f"raised: {str(e).splitlines()[0][:90]}"
        log(f"i2c-dev 0x50 content: {res}")
    class A:
        bus, nvrm, auxdev = 4, False, True
    with _bus(A()) as aux:
        log(f"relay 0x37 content: {ver_content(aux)}")
        log("OFF-state bare-probe mirage confirmation (all 'ACK' here is "
            "phantom if content failed above): "
            + " ".join(f"{a:#04x}:{sm.probe(aux, a, False)}"
                       for a in (0x30, 0x35, 0x37, 0x49, 0x50, 0x6A)))
        log("waiting for power-on (content-verified, up to 20 min)...")
        t0 = time.monotonic()
        while time.monotonic() - t0 < 1200:
            time.sleep(15.0)
            state = conn()
            if state == "connected":
                time.sleep(6.0)             # let link train + scaler boot
                v = ver_content(aux)
                if "FW." in v:
                    log(f"POWERED ON: connector back + {v} "
                        f"at t+{int(time.monotonic() - t0)}s")
                    break
                log(f"connected but scaler not answering yet ({v})")
        else:
            log("power-on not observed in 20 min")
            return 2
        sm.sweep(aux, "post-power-on")
        subprocess.run([sys.executable,
                        str(Path(__file__).parent / "sweep_slaves.py"),
                        "--auxdev"], timeout=600)
    with RTBus(4) as i2c:
        try:
            res = edid_content_ok(i2c)
        except Exception as e:
            res = f"raised: {str(e).splitlines()[0][:90]}"
        log(f"post-on 0x50 content: {res}")
    return 0


if __name__ == "__main__":
    sys.exit(main())
