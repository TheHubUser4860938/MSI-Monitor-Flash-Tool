#!/usr/bin/env python3
"""15c: systematic DUMP-ATTEMPT matrix (user: "try to dump the firmware;
if that cracks this open, best path forward").

Blocks, all safe (no flash writes ever):
  A. ENTRY-VARIANT x FLASH-SLAVE matrix (open #5's wire half): force each
     AUTOENTER candidate's magic on i2c-dev, then -- whether or not the
     handshake bit appeared -- probe 0x18/0x20/0x22 and attempt JEDEC ID
     via the decoded window grammars. Always exit + witness state.
  B. CROSS-TRANSPORT combos: enter ISP on one transport, probe the flash
     slaves on the other (never simultaneous -- sequential open/use/close
     so only one bus user exists at a time; session-7 wedge lesson).
  C. Monitor DATA capture (sha256 only into docs -- serial numbers are
     PII): EDID via i2c-dev AND via byte-perfect bulk relay, FW version,
     ddcutil capabilities. Reference set for the day a real dump happens.

Exit condition of interest in ANY cell: flash slave answers / JEDEC returns
0x1F-prefixed bytes -> we immediately run `backup` for real (script prints
the instruction). Expected: full silence matrix; that too is publishable.
"""
import hashlib
import os
import sys
import time

sys.path.insert(0, ".")
from msi_isp import Facts                     # noqa: E402
from msi_isp.auxdev import AuxDevBus          # noqa: E402
from msi_isp.ddc import RTBus                 # noqa: E402
from msi_isp.isp import (I2CTarget, ScalerBus, enter_isp, exit_isp,  # noqa: E402
                         isp_alive, jedec_id)

FLASH_SLAVES = (0x18, 0x20, 0x22)
OUT = "/tmp/opencode/monitor_state_15c"


def sha(b):
    return hashlib.sha256(b).hexdigest()[:16]


def witness(bus):
    """cheap live-state witness: FW version via vendor query + EDID head."""
    from msi_isp.cli import vendor_fw_version
    try:
        fw = vendor_fw_version(bus)
    except Exception as e:                     # noqa: BLE001
        fw = f"ERR {e}"
    try:
        bus.warmup()
        bus.write(0x50, b"\x00")
        ed = bus.read(0x50, 16)
        head = ed[:8].hex(" ")
    except Exception as e:                     # noqa: BLE001
        head = f"ERR {e}"
    return f"fw={fw!r} edid_head={head}"


def probe_flash(bus, note=""):
    out = []
    for a in FLASH_SLAVES:
        try:
            ack = bus.probe(a)
        except Exception as e:                 # noqa: BLE001
            ack = f"ERR {type(e).__name__}"
        out.append(f"{a:#04x}:{ack}")
    return f"{note} probes[{' '.join(out)}]"


def jedec(bus, note=""):
    res = []
    sb = ScalerBus(bus=bus, delay_ms=1)
    for a7 in (0x20, 0x22):
        t = I2CTarget("isp", a7)
        try:
            got = jedec_id(sb, t)
        except Exception as e:                 # noqa: BLE001
            got = f"ERR {type(e).__name__}"
        res.append(f"@{a7:#04x}={got}")
    return f"{note} jedec[{' '.join(res)}]"


def phase_a():
    print("== A. entry-candidate x flash-probe matrix (i2c-dev) ==")
    with RTBus(4) as rt:
        for ci in range(len(Facts.AUTOENTER_CANDIDATES)):
            magic = Facts.AUTOENTER_CANDIDATES[ci]
            try:
                # full vendor pacing: the handshake walk takes ~8 polls
                # (A2/14k measured); retries=1 false-fails even cand5
                won, status = enter_isp(rt, only_candidate=ci)
                hs = f"handshake won={won} status={status:#04x}"
            except Exception as e:             # noqa: BLE001
                hs = f"no-handshake ({type(e).__name__})"
            line = probe_flash(rt)
            jd = jedec(rt)
            exit_isp(rt)
            time.sleep(0.2)
            print(f"cand{ci} {magic}: {hs}\n    {line}\n    {jd}")
        print(f"    witness after matrix: {witness(rt)}")


def status_view(rb):
    """ISP-alive evidence from BOTH transports (0x37 may misbehave in ISP
    mode per STATUS:401 -- record each view instead of gating on one)."""
    with RTBus(4) as rt:
        try:
            rt.warmup()
            a = rt.read(0x37, 1).hex()
        except Exception as e:                 # noqa: BLE001
            a = f"ERR {type(e).__name__}"
    try:
        b = rb.probe(0x37)
    except Exception as e:                     # noqa: BLE001
        b = f"ERR {type(e).__name__}"
    return f"i2c-dev 0x37 raw={a}  relay 0x37 probe={b}"


def phase_b():
    print("== B. cross-transport combos ==")
    with RTBus(4) as rt:
        try:
            enter_isp(rt)
            ok = "entered(i2c-dev)"
        except Exception as e:                 # noqa: BLE001
            ok = f"enter FAILED ({type(e).__name__})"
    with AuxDevBus() as rb:
        print(f"  {ok} | {status_view(rb)}")
        print(f"    {probe_flash(rb, 'relay:')}")
        print(f"    {jedec(rb, 'relay:')}")
        rb.unlock("15c matrix")
        exit_isp(rb)
    with RTBus(4) as rt:
        print(f"    witness: {witness(rt)}")
    with AuxDevBus() as rb:
        try:
            enter_isp(rb)
            ok = "entered(relay)"
        except Exception as e:                 # noqa: BLE001
            ok = f"enter FAILED ({type(e).__name__})"
    with RTBus(4) as rt:
        print(f"  {ok} | {status_view(rb)}")
        print(f"    {probe_flash(rt, 'i2c-dev:')}")
        print(f"    {jedec(rt, 'i2c-dev:')}")
        exit_isp(rt)
        print(f"    witness: {witness(rt)}")


def phase_c():
    print("== C. monitor data capture (files in /tmp; sha256 only in docs) ==")
    os.makedirs(OUT, exist_ok=True)
    with RTBus(4) as rt:
        from msi_isp.cli import read_edid, vendor_fw_version
        ed = read_edid(rt)
        open(f"{OUT}/edid_i2cdev.bin", "wb").write(ed)
        fw = vendor_fw_version(rt)
    with AuxDevBus() as rb:
        # bulk relay: pointer write then 256 B in ONE call (14n primitive)
        b = rb.bulk(0x50, False, size=256) if hasattr(rb, "bulk") else None
        if b is None:
            print("  (AuxDevBus has no bulk() wrapper -- relay EDID via "
                  "chunked read instead)")
            rb.write(0x50, b"\x00")
            b = rb.read(0x50, 256)
        st, got = b if isinstance(b, tuple) else (None, b)
        if isinstance(got, bytes) and got:
            open(f"{OUT}/edid_relay.bin", "wb").write(got)
    print(f"  EDID(i2c-dev) {len(ed)}B sha={sha(ed)} head={ed[:8].hex(' ')}")
    if os.path.exists(f"{OUT}/edid_relay.bin"):
        r = open(f"{OUT}/edid_relay.bin", "rb").read()
        print(f"  EDID(relay)   {len(r)}B sha={sha(r)} identical={r[:128] == ed[:128]}")
    print(f"  FW={fw!r}  witness={witness(rt) if False else ''}")
    caps = os.popen("ddcutil capabilities 2>/dev/null | head -c 200000").read()
    open(f"{OUT}/capabilities.txt", "w").write(caps)
    print(f"  capabilities {len(caps)}B sha={sha(caps.encode())}")
    print(f"  saved under {OUT}/ (untracked; serials are PII)")


if __name__ == "__main__":
    t0 = time.time()
    phase_a()
    phase_b()
    phase_c()
    print(f"\n15c matrix complete in {time.time() - t0:.0f}s -- verdict in STATUS")
