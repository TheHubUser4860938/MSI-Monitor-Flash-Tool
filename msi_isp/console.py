#!/usr/bin/env python3
"""msi-isp console: shurectl-style interactive REPL.

Every flash path is gated: bin selected -> verify (model match, the 0x45
check) -> backup (trusted flash dump) -> root -> ISP slave visible -> typed
confirmation. No gate, no write.
"""
from __future__ import annotations

import cmd
import hashlib
import os
import sys

from . import Facts
from .cli import TARGETS, bin_header, read_edid, vendor_fw_version
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
        print(f"  sha256 {self.bin_hdr['sha256']}")
        return True

    def _monitor_name(self) -> str:
        with self._bus() as bus:
            return edid_model_name(read_edid(bus))

    def _isp_visible(self):
        """True/False = ISP slave ACKs / doesn't; None = bus unopenable."""
        try:
            with self._bus() as bus:
                return any(bus.probe(t) for t in (0x20, 0x22, 0x18))
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
                "NOT root -- NVIDIA RM AUX path needs sudo")
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
        """read-only slave ACK scan (safe, no root needed to see ISP state)"""
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
            mon = self._monitor_name()
        except Exception as e:
            print(BAD(f"monitor read failed: {e}"))
            return
        b = self.bin_hdr["model"].strip().lower()
        m = mon.strip().lower()
        match = bool(m) and (b in m or m in b)
        print(f"bin model      : {self.bin_hdr['model']!r}")
        print(f"monitor model  : {mon!r}")
        self.verified = match
        res = OK("OK") if match else BAD("MISMATCH — would be error 0x45")
        print(f"match          : {res}")

    def do_backup(self, arg):
        """dump scaler SPI flash -> file. --write actually writes it out"""
        write_out = "--write" in arg
        out = None
        for tok in arg.split():
            if not tok.startswith("--"):
                out = tok
        if write_out and not out:
            print("usage: backup <file> --write")
            return
        isp = self._isp_visible()
        if not isp:
            print(BAD("ISP flash slave does not ACK — nothing to dump yet.\n"
                      "  sudo (root) is required on NVIDIA for the privileged "
                      "RM AUX channel;\n  Intel/AMD reach it over plain "
                      "i2c-dev without sudo."))
            return
        t = I2CTarget("ISP flash", 0x20)
        try:
            with self._bus() as bus:
                sb = ScalerBus(bus, delay_ms=1)
                print("safety check: reading first 4 KB …")
                head = sb.read_burst(t, 0, 4096, page=Facts.SLAVES["isp_page_len"])
                if head == bytes(4096) or head == b"\xff" * 4096:
                    self.backup_ok = False
                    print(BAD("read looks dead (all 00/FF) — refusing to "
                              "trust backup; nothing saved"))
                    return
                total = Facts.FW_BIN_SIZE
                if write_out:
                    print(f"dumping {total} bytes -> {out}")
                    bar = Bar(total, "backup")
                    with open(out, "wb") as f:
                        done = 0
                        while done < total:
                            n = min(0x10000, total - done)
                            base = done

                            def prog(got, _n, _b=base):
                                bar.update(_b + got)
                            f.write(sb.read_burst(t, done, n,
                                      page=Facts.SLAVES["isp_page_len"],
                                      progress=prog))
                            done += n
                            bar.update(done)
                    bar.done()
                    with open(out, "rb") as fb:
                        sha = hashlib.sha256(fb.read()).hexdigest()
                    print(f"\nbackup saved: {out}  (sha256 in status)")
                    self.last_sha = sha
                    self.backup_path, self.backup_ok = out, True
                else:
                    self.backup_ok = True
                    print(OK("read path trusted (4 KB sane). Re-run with "
                             "`backup file.bin --write` to save before "
                             "flashing."))
        except Exception as e:
            print(BAD(f"backup failed: {e}"))
            self.backup_ok = False

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
             "run with sudo (NVIDIA RM) or on Intel/AMD i2c-dev")
        gate("trusted backup this session", self.backup_path is not None,
             "backup <file> --write")
        try:
            with self._bus() as bus:
                cur = vendor_fw_version(bus)
        except Exception:
            cur = "?"
        gate("running as root", os.geteuid() == 0, "sudo msi-isp shell")
        all_ok = True
        for name, good, hint in gates:
            print(f"  [{'+' if good else '-'}] {name}"
                  + (DIM(f"   -> {hint}") if not good else ""))
            all_ok &= good
        if not all_ok:
            print(BAD("\nflash aborted: fix the gates above first."))
            return
        if self.bin_hdr["size"] > Facts.FW_BIN_SIZE:
            print(BAD(f"bin larger than flash ({self.bin_hdr['size']} > "
                      f"{Facts.FW_BIN_SIZE}) — aborting"))
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
        self._program()

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
    Console(bus_num, bin_path, use_nvrm=use_nvrm,
            use_auxdev=use_auxdev).cmdloop()
