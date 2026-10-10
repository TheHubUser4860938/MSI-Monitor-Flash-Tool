#!/usr/bin/env python3
"""msi-isp console: shurectl-style interactive REPL.

Every flash path is gated: bin selected -> verify (model match, the 0x45
check) -> backup (trusted flash dump) -> ISP slave visible -> transport
privilege where the transport needs it (only --nvrm requires root) ->
typed confirmation. No gate, no write.
"""
from __future__ import annotations

import cmd
import hashlib
import os
import sys

from . import Facts
from .cli import TARGETS, _checksum_line, bin_header, read_edid, vendor_fw_version
from .cli import _edid_model_name as edid_model_name
from .ddc import RTBus
from .isp import I2CTarget, ScalerBus
from .progress import Bar

_TTY = sys.stdout.isatty()
def _c(t, code):
    return f"\033[{code}m{t}\033[0m" if _TTY else t
def OK(t):   return _c(t, "32")
def BAD(t):  return _c(t, "31")
def WARN(t): return _c(t, "33")
def DIM(t):  return _c(t, "2")


class Console(cmd.Cmd):
    prompt = "msi-isp> "
    intro = ("msi-isp console — native Linux flash tool for Realtek-RTD "
             "monitors\n`help` for commands — flash requires: set bin -> "
             "verify -> backup -> confirm")

    def __init__(self, bus_num: int, bin_path: str | None = None,
                 use_nvrm: bool = False, use_auxdev: bool = False):
        super().__init__()
        self.bus_num = bus_num
        self.use_nvrm = use_nvrm
        self.use_auxdev = use_auxdev
        self.bin_hdr = None
        self.bin_path = None
        self.verified = False
        self.backup_path = None
        self.backup_ok = False
        self.last_sha = None
        if bin_path:
            self._load_bin(bin_path)

    # ------------------------------------------------------------ helpers --
    def _bus(self) -> RTBus:
        if self.use_auxdev:
            from .auxdev import AuxDevBus
            return AuxDevBus()
        if self.use_nvrm:
            from .nvbus import NvRMAuxBus
            return NvRMAuxBus()
        return RTBus(self.bus_num)

    def _load_bin(self, path: str) -> bool:
        path = os.path.abspath(os.path.expanduser(path))
        if not os.path.isfile(path):
            print(BAD(f"not a file: {path}"))
            return False
        self.bin_hdr = bin_header(path)
        self.bin_path = path
        self.verified = False                  # new file -> must re-verify
        print(f"bin loaded: {path}")
        print(f"  model {self.bin_hdr['model']!r}  version "
              f"{self.bin_hdr['version']!r}  size {self.bin_hdr['size']}")
        if len(self.bin_hdr["edid_models"]) > 1:
            print("  EDID variants in bin: "
                  + ", ".join(repr(n) for n in self.bin_hdr["edid_models"])
                  + "  (verify matches against YOUR monitor's exact EDID)")
        print(f"  sha256 {self.bin_hdr['sha256']}")
        line, _ok = _checksum_line(self.bin_hdr)
        print(f"  {line}")
        return True

    def _monitor_edid(self) -> bytes:
        with self._bus() as bus:
            return read_edid(bus)

    def _monitor_name(self) -> str:
        return edid_model_name(self._monitor_edid())

    def _isp_visible(self):
        """True/False = flash slave reachable; None = bus unopenable.
        Direct probe first (zero side effects); if silent, one ISP
        enter-probe-exit cycle retries it — the vendor flow shows flash
        slaves come up only after ISP entry (session 14p), and the cycle
        restores normal mode itself (still never writes flash)."""
        from .isp import flash_path_enter, flash_path_exit
        try:
            with self._bus() as bus:
                if any(bus.probe(t) for t in (0x20, 0x22, 0x18)):
                    return True
                vis = flash_path_enter(bus, 0x20) == ""
                if vis:
                    flash_path_exit(bus)
                return vis
        except Exception:
            return None

    # -------------------------------------------------------------- commands
    def do_status(self, arg):
        """session + system state, what's blocking flash"""
        isp = self._isp_visible()
        isp_txt = "visible" if isp else ("silent" if isp is False
                                         else "bus unopenable")
        root = ("not needed (kernel relay)" if self.use_auxdev else
                "root" if os.geteuid() == 0 else
                "NOT root -- --nvrm needs sudo; i2c-dev needs node access")
        bus_txt = ("kernel relay /dev/msi-auxch" if self.use_auxdev else
                   "nvrm RM DP-AUX (NVIDIA, root)" if self.use_nvrm
                   else f"/dev/i2c-{self.bus_num}")
        print(f"bus        : {bus_txt}")
        print(f"euid       : {os.geteuid()}  ({root})")
        print(f"ISP slaves : {isp_txt}")
        print(f"bin        : {self.bin_path or '(set bin <path>)'}")
        ver = OK("yes") if self.verified else BAD("no -- run verify")
        print(f"verified   : {ver}")
        bak = OK(self.backup_path) if self.backup_path else BAD("none")
        print(f"backup     : {bak}")
        if self.last_sha:
            print(f"backup sha : {self.last_sha}")

    def do_set(self, arg):
        """set bin <path>   select the firmware .bin file"""
        parts = arg.split(maxsplit=1)
        if len(parts) != 2 or parts[0] != "bin":
            print("usage: set bin /path/to/firmware.bin")
            return
        self._load_bin(parts[1])

    def do_scan(self, arg):
        """read-only slave ACK scan (safe; privilege only for --nvrm)"""
        try:
            with self._bus() as bus:
                for t in TARGETS:
                    ack = bus.probe(t.addr7)
                    tag = ""
                    if ack and t.addr7 not in (0x30, 0x37, 0x50, 0x4A, 0x4B):
                        tag = "  <-- ISP slave visible"
                    print(f"  {t.name:<20} {t.addr7:#04x}  "
                          f"{OK('ACK') if ack else DIM('no-ack')}{tag}")
        except Exception as e:
            print(BAD(f"bus error: {e}"))

    def do_info(self, arg):
        """live monitor identity + firmware version (always safe)"""
        try:
            with self._bus() as bus:
                fw = vendor_fw_version(bus)
                name = edid_model_name(read_edid(bus))
            print(f"monitor    : {name or '?'}")
            print(f"live fw    : {fw or '?'}")
        except Exception as e:
            print(BAD(f"read failed: {e}"))

    def do_verify(self, arg):
        """the 0x45 model-match check, done natively — first flash gate"""
        if not self.bin_hdr:
            print(BAD("no bin loaded — `set bin /path/to.bin`"))
            return
        try:
            edid = self._monitor_edid()
        except Exception as e:
            print(BAD(f"monitor read failed: {e}"))
            return
        mon = edid_model_name(edid)
        # Re-parse the bin with the live EDID so a byte-exact copy, if
        # present, wins over fuzzy name-substring matching (session 14o).
        hdr = bin_header(self.bin_path, live_edid=edid)
        self.bin_hdr = hdr
        b, m = hdr["model"].strip().lower(), mon.strip().lower()
        if not b or not m:
            self.verified = False
            print(f"bin model      : {hdr['model']!r}")
            print(f"monitor model  : {mon!r}")
            print(BAD("match          : UNKNOWN — model unreadable from "
                      "one side;\n  never flash on an unknown match"))
            return
        if hdr["edid_exact"]:
            self.verified = True
            print(f"bin model      : {hdr['model']!r}")
            print(f"monitor model  : {mon!r}")
            print(OK(f"match          : OK — monitor's EXACT EDID in bin @ "
                     f"{hdr['edid_offset']:#x}"))
            self._apply_checksum(hdr)
            return
        match = b in m or m in b
        self.verified = match
        print(f"bin model      : {hdr['model']!r}")
        print(f"monitor model  : {mon!r}")
        if match:
            print(WARN("match          : OK by NAME only (bin has no byte-"
                       "exact copy of this EDID)"))
            self._apply_checksum(hdr)
        else:
            print(BAD("match          : MISMATCH — would be error 0x45"))

    def _apply_checksum(self, hdr) -> None:
        """Content/filename checksum gate (audit 15l: a corrupt bin must
        not pass verify just because the MODEL matches)."""
        line, ok = _checksum_line(hdr)
        print(line)
        if not ok:
            self.verified = False
            print(BAD("verify         : gate CLOSED — byte sum does not "
                      "match the filename checksum"))

    def do_backup(self, arg):
        """dump scaler SPI flash -> file. --write actually writes it out"""
        from .buslock import BusBusyError, bus_lock
        toks = arg.split()
        write_out = "--write" in toks        # exact token, not substring
        out = next((t for t in toks if not t.startswith("--")), None)
        if write_out and not out:
            print("usage: backup <file> --write")
            return
        try:
            with bus_lock(self.bus_num, timeout=2.0):
                self._backup_locked(write_out, out)
        except BusBusyError as e:
            print(BAD(f"backup refused: {e}"))

    def _backup_locked(self, write_out, out):
        from .isp import flash_path_enter, flash_path_exit, jedec_id
        tw = I2CTarget("scaler MCU window", 0x22)   # JEDEC register file
        t = I2CTarget("ISP flash", 0x20)            # ReadFlashData burst
        try:
            with self._bus() as bus:
                reason = flash_path_enter(bus)
                if reason:
                    print(BAD(f"{reason} — nothing to dump yet.\n"
                              "  This is the measured NVIDIA routing gap "
                              "(dead-end #11) on every NVIDIA transport;\n"
                              "  Intel/AMD boxes reach it over plain "
                              "i2c-dev. See TEST-INTEL-AMD.md."))
                    return
                try:
                    sb = ScalerBus(bus, delay_ms=1)
                    jid = jedec_id(sb, tw)
                    if jid is None:
                        print(BAD("JEDEC gate: 0x9F returned no sane "
                                  "manufacturer ID — refusing to trust a "
                                  "dump."))
                        self.backup_ok = False
                        return
                    if jid[0] != 0x1F:
                        # binding user policy: JEDEC must answer 0x1Fxxxx
                        # from 0x22 (Facts.FLASH_CHIP: 1f 40 10)
                        print(BAD(f"JEDEC gate: answered {jid.hex(' ')}, "
                                  "this target requires 0x1Fxxxx — "
                                  "refusing to trust a dump."))
                        self.backup_ok = False
                        return
                    print(f"JEDEC ID       : {jid.hex(' ')} (0x22 register file)")
                    self._do_backup(sb, t, write_out, out)
                finally:
                    exited, edid_ok = flash_path_exit(bus)
                    print(f"exit ISP       : {OK('clean') if exited else BAD('NOT clean — status bit still set')}"
                          f"   monitor 0x50: "
                          f"{OK('alive') if edid_ok else BAD('UNREADABLE — check the monitor now')}")
        except Exception as e:
            print(BAD(f"backup failed: {e}"))
            self.backup_ok = False

    def _do_backup(self, sb, t, write_out, out):
        print("safety check: reading first 4 KB …")
        head = sb.read_burst(t, 0, 4096, page=Facts.SLAVES["isp_page_len"])
        if head == bytes(4096) or head == b"\xff" * 4096:
            self.backup_ok = False
            print(BAD("read looks dead (all 00/FF) — refusing to "
                      "trust backup; nothing saved"))
            return
        total = Facts.FLASH_SIZE
        if write_out:
            if os.path.exists(out) and os.path.getsize(out):
                print(BAD(f"refusing to overwrite non-empty {out} — the "
                          "backup IS the artifact; pick a fresh path"))
                return
            print(f"dumping {total} bytes -> {out}")
            bar = Bar(total, "backup")
            with open(out, "wb") as f:
                done = 0
                while done < total:
                    n = min(0x10000, total - done)
                    base = done

                    def prog(got, _n, _b=base):
                        bar.update(_b + got)
                    chunk = sb.read_burst(t, done, n,
                              page=Facts.SLAVES["isp_page_len"],
                              progress=prog)
                    if len(chunk) != n:
                        self.backup_ok = False
                        print(BAD(f"short burst at {done:#x} "
                                  f"({len(chunk)} of {n}) — "
                                  f"{out} NOT trusted"))
                        return
                    f.write(chunk)
                    done += n
                    bar.update(done)
            bar.done()
            with open(out, "rb") as fb:
                sha = hashlib.sha256(fb.read()).hexdigest()
            print(f"\nbackup saved: {out}  (sha256 in status)")
            print("compare vs Facts.PREVIOUS_BINS when flashed .bin known: "
                  "identical image region expected; surviving diffs = "
                  "runtime regions (skip-list).")
            self.last_sha = sha
            self.backup_path, self.backup_ok = out, True
        else:
            self.backup_ok = True
            print(OK("read path trusted (4 KB sane + JEDEC OK). Re-run with "
                     "`backup file.bin --write` to save before flashing."))

    def do_flash(self, arg):
        """program the monitor — every gate below must pass, then type 'flash'"""
        gates = []
        def gate(name, good, hint=""):
            gates.append((name, good, hint))
        gate("firmware file loaded", self.bin_hdr is not None,
             "set bin /path/to.bin")
        gate("model verified against monitor", self.verified, "verify")
        isp = self._isp_visible()
        gate("ISP flash slave visible", bool(isp),
             "needs a live 0x22: Intel/AMD box, or NVIDIA --auxdev/--nvrm "
             "(dead-end #11 today)")
        # path alone is NOT trust: a later FAILED backup clears backup_ok
        # while the previous file lingers on disk (audit 15l)
        gate("trusted backup this session",
             bool(self.backup_ok and self.backup_path is not None),
             "backup <file> --write (must pass JEDEC + sane-read checks)")
        try:
            with self._bus() as bus:
                cur = vendor_fw_version(bus)
        except Exception:
            cur = "?"
        if self.use_nvrm:      # the only transport that needs privilege now
            gate("running as root (--nvrm only)", os.geteuid() == 0,
                 "sudo msi-isp --nvrm shell — or load the kernel relay and "
                 "use --auxdev")
        all_ok = True
        for name, good, hint in gates:
            print(f"  [{'+' if good else '-'}] {name}"
                  + (DIM(f"   -> {hint}") if not good else ""))
            all_ok &= good
        if not all_ok:
            print(BAD("\nflash aborted: fix the gates above first."))
            return
        if self.bin_hdr["size"] > Facts.FLASH_SIZE:
            print(BAD(f"bin larger than the flash chip ({self.bin_hdr['size']} "
                      f"> {Facts.FLASH_SIZE:#x}) — aborting"))
            return
        print(f"\nabout to write: {self.bin_path}")
        print(f"  monitor {self.bin_hdr['model']!r}  live fw {cur!r} -> "
              f"new fw {self.bin_hdr['version']!r}")
        print(f"  {self.bin_hdr['size']} bytes  sha256 "
              f"{self.bin_hdr['sha256'][:24]}…")
        print(f"  backup on disk: {self.backup_path}  "
              f"({os.path.getsize(self.backup_path)} bytes)")
        ans = self._confirm(WARN("type 'flash' to continue (anything else aborts): "))
        if ans.strip() != "flash":
            print("aborted, monitor untouched.")
            return
        from .buslock import BusBusyError, bus_lock
        try:
            with bus_lock(self.bus_num):
                self._program()
        except BusBusyError as e:
            print(BAD(f"flash aborted: {e}"))

    def _confirm(self, prompt: str) -> str:
        """Typed-confirmation reader; the TUI overrides this instance hook."""
        return input(prompt)

    def _program(self):
        # erase/program packet cycle lands here once verified against the
        # live ISP path; deliberately conservative until then.
        print(BAD("program cycle (erase -> page program -> checksum -> reset) "
                  "is not enabled yet.\nReads still need to be proven on "
                  "reachable ISP slaves first (see STATUS.md). Nothing was "
                  "written."))

    def do_quit(self, arg):
        """exit"""
        raise SystemExit(0)
    do_q = do_exit = do_quit

    def do_EOF(self, arg):
        print()
        raise SystemExit(0)

    def emptyline(self):
        pass


def run(bus_num: int, bin_path: str | None = None,
        use_nvrm: bool = False, use_auxdev: bool = False) -> None:
    con = Console(bus_num, bin_path, use_nvrm=use_nvrm,
                  use_auxdev=use_auxdev)
    try:
        con.cmdloop()
    except KeyboardInterrupt:
        print("\ninterrupted — monitor untouched")
        raise SystemExit(130) from None
