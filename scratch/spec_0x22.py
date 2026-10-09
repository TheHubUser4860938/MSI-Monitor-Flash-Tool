#!/usr/bin/env python3
"""Spec-driven 0x22 contact protocol — portable transport edition (2026-10-09).

Same protocol as session 13 (received 2026-10-07); now runs unchanged on BOTH
machine families:

  * NVIDIA + root: NV0073 AUXCH control 0x731341, I2C mode (nvrm.py/nvbus.py).
    Full wire verbs visible: ACK / NACK / DEFER / TIMEOUT. Stop form
    (address-only, MOT clear) issuable.
  * Intel/AMD (or NVIDIA user-level): plain i2c-dev via msi_isp.ddc.RTBus.
    The kernel owns the I2C-over-AUX framing and the DEFER-retry loop inside
    its DP-adapter code — userland sees transaction-level outcomes only.
    We therefore log the per-try errno + timing in place of wire verbs, same
    >=200-tries / 2.0 s budget, same controls, same Step-2 register reads.
    On these adapters success == the slave ACKed; EIO == NACK / no contact
    (the kernel already retried any DEFERs). Contact per spec requires
    ACK+data either way; the errno-stability report is decision-support,
    not a separate pass criterion.

Goal: READ-ONLY contact with 7-bit 0x22 (8-bit write 0x44 — never put 0x44
in an AUX address field). No erase, no program, no ISP entry. Monitor writes
nothing. Gate: JEDEC 0x9F must return 0x1Fxxxx before any flash ambition.

Step 1: one-byte read from 0x22, >=200 tries / 2.0 s wall, backoff 5-20 ms,
        log EVERY reply verb. Controls: 1-byte read on 0x50 / 0x37 + a link
        sanity arm (native DPCD0 on RM; EDID magic on i2c-dev).
        Pass: ACK+data. Silence => dump what was submitted, stop per spec.
Step 2 (ACK only): read regs 0x60, 0x61, 0x00, 0xFF, 4 bytes each.
        Address-sensitive non-0xFF = contact; identical = shim, dump+stop.
"""
import argparse
import errno
import os
import sys
import time

sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))

REG_SLAVE = 0x22            # 7-bit. 8-bit write form 0x44 is NEVER an addr field.
WALL_BUDGET = 2.0
# EDID header = 7x FF + 00. This NVIDIA shim corrupts the FIRST byte of every
# 0x50 read (returns 00 instead of FF; bytes 1+ verified correct, and the same
# artifact is why the 1-byte control reads show data=00). Six consecutive FFs
# are guaranteed on either alignment and on Intel/AMD (where byte 0 is fine);
# require one within the first 10 bytes.
_EDID_MAGIC = b"\xff" * 6


def log(*a):
    print(*a, flush=True)


# ------------------------------------------------------------ transports ----
class RmTransport:
    """NVIDIA RM DP-AUX (root). Session-13 code path, unchanged semantics."""
    name = "nvidia-rm 0x731341 I2C-mode"

    def __init__(self):
        from msi_isp import nvrm, nvbus
        self.nvrm = nvrm
        sbus = nvbus.NvRMAuxBus()
        self.rm, self.did = sbus.rm, sbus.display_id
        log(f"  bus {sbus.path}")

    def sanity(self):
        AUX_REQ_READ = self.nvrm.AUX_REQ_READ
        name, got, st = self.rm.aux(self.did, 0x00 << 2, req=AUX_REQ_READ,
                                    typ=self.nvrm.AUX_TYPE_AUX)
        ok = name == "ACK" and got and got[0]
        log(f"  native DPCD0: {name} {got[:1].hex() if got else ''} st={st:#x}")
        return ok

    def patient_read(self, slave7, n=1, tries=200):
        AUX_REQ_READ = self.nvrm.AUX_REQ_READ
        replies = []
        t0 = time.time(); i = 0
        while i < tries and time.time() - t0 < WALL_BUDGET:
            vname, got = self.rm.aux_i2c(self.did, slave7, AUX_REQ_READ,
                                         data=bytes(n), mot=False, retries=1)
            replies.append((i, vname, got.hex() if got else ""))
            if vname == "ACK":
                return "ACK", got, replies
            if vname in ("NACK", "I2CNACK"):
                time.sleep(0.005); i += 1; continue     # keep polling to prove stability
            time.sleep(min(0.020, 0.005 + 0.0005 * i)); i += 1
        kinds = {}
        for _, nm, _ in replies:
            kinds[nm] = kinds.get(nm, 0) + 1
        if len(kinds) == 1 and next(iter(kinds)) in ("NACK", "I2CNACK"):
            return "STABLE-NACK", b"", replies
        return "SILENCE", b"", replies

    def dump_struct(self, slave7):
        AUX_REQ_READ = self.nvrm.AUX_REQ_READ
        nvrm = self.nvrm
        p = nvrm.AUXCHParams()
        p.subDeviceInstance = 0; p.displayId = self.did
        p.bAddrOnly = 0; p.cmd = nvrm.AUX_TYPE_I2C | AUX_REQ_READ  # 0x05
        p.addr = slave7; p.size = 0
        st = self.rm.control(self.rm.hDisp, nvrm.CTRL_DP_AUXCH_CTRL, p)
        log("  SUBMITTED STRUCT: displayId=%#x cmd=%#x addr=%#x size=%d "
            "bAddrOnly=%d replyType=%#x(%s) st=%#x"
            % (p.displayId, p.cmd, p.addr, p.size, p.bAddrOnly, p.replyType,
               nvrm.REPLY.get(p.replyType, "?"), st))
        if _supports_addr_only(self.rm):
            AUX_REQ_WRITE = self.nvrm.AUX_REQ_WRITE
            name, _ = self.rm.aux_i2c(self.did, slave7, AUX_REQ_WRITE,
                                      mot=False, addr_only=True, retries=1)
            log(f"  addr-only MOT-clear stop-form probe on 0x22: {name}")
        else:
            log("  addr-only probe: n/a (rm.aux_i2c lost the addr_only kwarg)")

    def reg_read(self, slave7, reg, n=4, retries=10):
        return self.rm.i2c_read(self.did, slave7, reg, n, retries=retries)


def _supports_addr_only(rm):
    # session-13 verified rm.aux_i2c accepts addr_only=; keep the guard so a
    # future refactor failure degrades to a visible n/a instead of a crash.
    import inspect
    try:
        return "addr_only" in inspect.signature(rm.aux_i2c).parameters
    except (TypeError, ValueError):
        return False


class I2cDevTransport:
    """Plain i2c-dev (Intel/AMD DP aux-tunnel adapters; also runs on NVIDIA
    userland for dry-runs). Verbs = errno of each raw transfer."""
    name = "i2c-dev"

    def __init__(self, bus=None):
        from msi_isp.ddc import RTBus
        self.bus_num = bus if bus is not None else self._autodetect()
        self.rt = RTBus(self.bus_num)
        log(f"  bus /dev/i2c-{self.bus_num}")

    @staticmethod
    def _autodetect():
        """Pick the i2c bus whose 0x50 answers with the EDID magic header.
        Prefer names containing 'DP' when several qualify (dual-cable case);
        ambiguous => refuse and demand --bus."""
        from msi_isp.ddc import RTBus
        cands = []
        for ent in sorted(os.listdir("/sys/bus/i2c/devices")):
            if not ent.startswith("i2c-"):
                continue
            num = ent[4:]
            if not num.isdigit():
                continue                       # ITE8853:00-style ACPI bus names
            num = int(num)
            try:
                name = open(f"/sys/bus/i2c/devices/{ent}/name").read().strip()
            except OSError:
                continue
            try:
                rt = RTBus(num)
            except OSError:
                continue
            head = b""
            for _ in range(3):        # NVIDIA adapters flake transiently
                try:
                    rt.write(0x50, b"\x00")
                    head = rt.read(0x50, 16)
                    if _EDID_MAGIC in head[:10]:
                        break
                except OSError:
                    pass
                time.sleep(0.05)
            rt.close()
            if _EDID_MAGIC in head[:10]:
                cands.append((num, name))
        if not cands:
            sys.exit("no i2c bus answered 0x50 with an EDID header -- plug the "
                     "monitor over DP and/or pass --bus N (ddcutil detect helps)")
        dp = [c for c in cands if "dp" in c[1].lower()]
        if len(dp) == 1:
            return dp[0][0]
        if len(cands) == 1:
            return cands[0][0]
        sys.exit("ambiguous monitor buses "
                 f"{', '.join(f'{n} ({name})' for n, name in cands)} -- pass --bus N")

    def sanity(self):
        """Link sanity = live, readable EDID (there is no raw-DPCD path here)."""
        try:
            self.rt.write(0x50, b"\x00")
            head = self.rt.read(0x50, 16)
        except OSError as e:
            log(f"  EDID sanity: OSError {os.strerror(e.errno)}")
            return False
        ok = _EDID_MAGIC in head[:10]
        log(f"  EDID header sanity (0x50 pointer-0): {'OK' if ok else 'FAIL'} "
            f"{head[:8].hex()}")
        return ok

    @staticmethod
    def _verb(e):
        return {errno.EIO: "NACK/EIO", errno.ENXIO: "NACK/ENXIO",
                errno.ETIMEDOUT: "TIMEOUT", errno.EBUSY: "BUSY"}.get(
                    e.errno, f"ERR/{e.errno}:{os.strerror(e.errno)}")

    def patient_read(self, slave7, n=1, tries=200):
        """1-byte (or n-byte) bare read, pointer pre-posed with a pointer write
        for 0x50 only (EDID needs it; 0x22 stays raw per spec)."""
        replies = []
        t0 = time.time(); i = 0
        while i < tries and time.time() - t0 < WALL_BUDGET:
            try:
                if slave7 == 0x50:
                    self.rt.write(0x50, b"\x00")
                got = self.rt.read(slave7, n)
                if not got:
                    # degenerate zero-length success (NVIDIA shim behavior):
                    # NOT contact; keep polling and report it distinctly.
                    vname, data = "EMPTY-READ", ""
                else:
                    vname, data = "ACK", got.hex()
            except OSError as e:
                vname, data = self._verb(e), ""
            replies.append((i, vname, data))
            if vname == "ACK":
                return "ACK", bytes.fromhex(data), replies
            time.sleep(min(0.020, 0.005 + 0.0005 * i)); i += 1
        kinds = {}
        for _, nm, _ in replies:
            kinds[nm] = kinds.get(nm, 0) + 1
        if len(kinds) == 1:
            return f"STABLE-{next(iter(kinds))}", b"", replies
        return "SILENCE", b"", replies

    def dump_struct(self, slave7):
        log(f"  SUBMITTED (i2c-dev): /dev/i2c-{self.bus_num} I2C_SLAVE=%#x "
            "then read 1 B (kernel emits I2C-over-AUX MOT-chunked; DEFERs "
            "retried in-kernel, invisible here)" % slave7)
        log("  addr-only stop-form probe: n/a on i2c-dev (kernel manages "
            "start/stop per transaction)")

    def reg_read(self, slave7, reg, n=4, retries=10):
        """Write-register-then-read burst; retried like rm.i2c_read semantics."""
        last = None
        for _ in range(retries):
            try:
                self.rt.write(slave7, bytes([reg]))
                got = self.rt.read(slave7, n)
                return got, "ACK"
            except OSError as e:
                last = self._verb(e)
                time.sleep(0.02)
        return None, last


# ------------------------------------------------------------------ main ----
def main():
    ap = argparse.ArgumentParser(description=__doc__.splitlines()[0])
    ap.add_argument("--bus", type=int, default=None,
                    help="i2c bus number for the i2c-dev transport "
                         "(default: auto-detect via 0x50 EDID magic)")
    ap.add_argument("--transport", choices=("auto", "rm", "i2cdev"),
                    default="auto",
                    help="auto = RM when /dev/nvidiactl exists (NVIDIA box), "
                         "else i2c-dev; force either for dry-runs")
    args = ap.parse_args()

    use_rm = args.transport == "rm" or (args.transport == "auto"
                                        and os.path.exists("/dev/nvidiactl"))
    if use_rm:
        log("== transport: NVIDIA RM (needs root) ==")
        try:
            t = RmTransport()
        except OSError as e:
            sys.exit(f"RM tree failed ({e}) -- are you root? "
                     "on Intel/AMD boxes use --transport i2cdev (or auto)")
    else:
        log(f"== transport: {I2cDevTransport.name} ==")
        t = I2cDevTransport(args.bus)
    log(f"  transport: {t.name}")

    if not t.sanity():
        sys.exit("link sanity dead — aborting (cable/monitor problem?)")

    for ctl, sl in (("0x50 EDID", 0x50), ("0x37 DDC", 0x37)):
        v, d, rp = t.patient_read(sl, n=1, tries=8)
        log(f"  control {ctl}: {v} data={d.hex() if d else ''} reps={len(rp)} "
            f"kinds={sorted({n for _, n, _ in rp})}")

    log("== STEP 1: 0x22 1-byte read, >=200 tries / 2.0 s, logging every reply ==")
    log("  submitted addr field = 7-bit %#x (%s)"
        % (REG_SLAVE, "RM I2C mode, cmd 0x05, size 0" if use_rm
           else "I2C_SLAVE select + read; kernel tunnels I2C-over-AUX"))
    v, d, rp = t.patient_read(REG_SLAVE, n=1)
    kinds = {}
    for _, nm, _ in rp:
        kinds[nm] = kinds.get(nm, 0) + 1
    log(f"  0x22 verdict={v} tries={len(rp)} kinds={kinds}")
    log(f"  first 12 replies: {[x[1] for x in rp[:12]]}")
    if d:
        log(f"  data: {d.hex()}")
    if v != "ACK":
        log("  no ACK+data — capturing what was submitted, STOP per spec")
        t.dump_struct(REG_SLAVE)
        log(f"STEP 1 RESULT: NO CONTACT ({v}) — spec verdict: this transport/"
            "driver does not deliver a live transaction at 0x22 on this sink. "
            "Next machine = Intel/AMD Linux + DP, same binary, same framing.")
        return 1
    log("STEP 1 RESULT: CONTACT (ACK) — proceeding to Step 2 (reads only).")

    for reg in (0x60, 0x61, 0x00, 0xFF):
        rd4, nm = t.reg_read(REG_SLAVE, reg, 4)
        log(f"  reg {reg:#04x} -> {rd4.hex() if rd4 else '(none)'} reply={nm}")
    log("Step 2 done: address-sensitive non-0xFF replies = real register file.")
    return 2


if __name__ == "__main__":
    sys.exit(main())
