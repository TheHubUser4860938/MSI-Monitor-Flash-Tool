#!/usr/bin/env python3
"""Spec-driven 0x22 contact protocol (received 2026-10-07, 21:20 UTC).

Goal: READ-ONLY contact with 7-bit 0x22 (8-bit write 0x44 — never put 0x44
in an AUX address field) over the EXISTING DP cable via the RM I2C-over-AUX
path that already completes native DPCD reads (control 0x731341, I2C mode).
No erase, no program. Gate: JEDEC 0x9F must return 0x1Fxxxx.

Wire (per spec; matches verified nvrm.aux_i2c semantics): cmd nibble 0x4
write+MOT / 0x5 read+MOT, addr = 7-bit slave, size N-1, STOP = MOT clear.
Our verified i2c_read releases via MOT-clear on the final 16B chunk —
byte-equivalent, oracle-proven on 0x50. Step 1 exercises the addr-only
MOT-clear stop form as well.

Step 1: one-byte read from 0x22. DEFER budget >= 200 tries or 2.0 s wall
        (backoff 5-20 ms); log EVERY reply verb. Controls: identical 1-byte
        read on 0x50 / 0x37 + native DPCD0 sanity arm.
        Pass: ACK+data, or stable NACK distinct from controls.
        Silence => dump submitted struct, stop that control.
Step 2 (ACK only): read regs 0x60, 0x61, 0x00, 0xFF, 4 bytes each.
        Address-sensitive non-0xFF = contact; identical = shim, dump+stop.
"""
import sys, time, os
sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
from msi_isp import nvrm
from msi_isp.nvrm import AUX_REQ_READ, AUX_REQ_WRITE, REPLY
from msi_isp import nvbus

REG_SLAVE = 0x22            # 7-bit. 8-bit write form 0x44 is NEVER an addr field.
WALL_BUDGET = 2.0

def log(*a):
    print(*a, flush=True)

def patient_read(rm, did, slave7, n=1, tries=200):
    replies = []
    t0 = time.time(); i = 0
    while i < tries and time.time() - t0 < WALL_BUDGET:
        name, got = rm.aux_i2c(did, slave7, AUX_REQ_READ,
                               data=bytes(n), mot=False, retries=1)
        replies.append((i, name, got.hex() if got else ""))
        if name == "ACK":
            return "ACK", got, replies
        if name in ("NACK", "I2CNACK"):
            time.sleep(0.005); i += 1; continue     # keep polling to prove stability
        time.sleep(min(0.020, 0.005 + 0.0005 * i)); i += 1
    kinds = {}
    for _, nm, _ in replies:
        kinds[nm] = kinds.get(nm, 0) + 1
    if len(kinds) == 1 and next(iter(kinds)) in ("NACK", "I2CNACK"):
        return "STABLE-NACK", b"", replies
    return "SILENCE", b"", replies

def dump_struct(rm, did, slave7):
    p = nvrm.AUXCHParams()
    p.subDeviceInstance = 0; p.displayId = did
    p.bAddrOnly = 0; p.cmd = nvrm.AUX_TYPE_I2C | AUX_REQ_READ  # 0x05
    p.addr = slave7; p.size = 0
    st = rm.control(rm.hDisp, nvrm.CTRL_DP_AUXCH_CTRL, p)
    log("  SUBMITTED STRUCT: displayId=%#x cmd=%#x addr=%#x size=%d "
        "bAddrOnly=%d replyType=%#x(%s) st=%#x"
        % (p.displayId, p.cmd, p.addr, p.size, p.bAddrOnly, p.replyType,
           REPLY.get(p.replyType, "?"), st))

def main():
    log("== building RM tree (needs root) ==")
    sbus = nvbus.NvRMAuxBus()
    rm, did = sbus.rm, sbus.display_id
    log(f"  bus {sbus.path}")

    name, got, st = rm.aux(did, 0x00 << 2, req=AUX_REQ_READ, typ=nvrm.AUX_TYPE_AUX)
    log(f"  native DPCD0: {name} {got[:1].hex() if got else ''} st={st:#x}")
    if name != "ACK" or not got or not got[0]:
        sys.exit("native DPCD dead — aborting (cable/monitor problem?)")

    for ctl, sl in (("0x50 EDID", 0x50), ("0x37 DDC", 0x37)):
        v, d, rp = patient_read(rm, did, sl, n=1, tries=8)
        log(f"  control {ctl}: {v} data={d.hex() if d else ''} reps={len(rp)} "
            f"kinds={sorted({n for _, n, _ in rp})}")

    log("== STEP 1: 0x22 1-byte read, >=200 tries / 2.0 s, logging every reply ==")
    log("  submitted addr field = 7-bit %#x (I2C mode, cmd 0x05, size 0)" % REG_SLAVE)
    v, d, rp = patient_read(rm, did, REG_SLAVE, n=1)
    kinds = {}
    for _, nm, _ in rp:
        kinds[nm] = kinds.get(nm, 0) + 1
    log(f"  0x22 verdict={v} tries={len(rp)} kinds={kinds}")
    log(f"  first 12 replies: {[x[1] for x in rp[:12]]}")
    if d:
        log(f"  data: {d.hex()}")
    if v in ("SILENCE",) or set(kinds) <= {"TIMEOUT"}:
        log("  no reply diversity — capturing submitted struct once, STOP per spec")
        dump_struct(rm, did, REG_SLAVE)
        name, _ = rm.aux_i2c(did, REG_SLAVE, AUX_REQ_WRITE, mot=False,
                             addr_only=True, retries=1)
        log(f"  addr-only MOT-clear stop-form probe on 0x22: {name}")
        log("STEP 1 RESULT: NO CONTACT — spec verdict: 4090 open module will not "
            "emit this transaction; next machine = Intel/AMD, same binary/framing.")
        return 1
    if v == "STABLE-NACK":
        log("STEP 1 RESULT: STABLE-NACK — compare vs controls above. If distinct, "
            "that is contact per spec; proceed manually to Step 2.")
        return 1
    log("STEP 1 RESULT: CONTACT (ACK) — proceeding to Step 2 (reads only).")

    for reg in (0x60, 0x61, 0x00, 0xFF):
        rd4, nm = rm.i2c_read(did, REG_SLAVE, reg, 4, retries=10)
        log(f"  reg {reg:#04x} -> {rd4.hex() if rd4 else '(none)'} reply={nm}")
    return 2

if __name__ == "__main__":
    sys.exit(main())
