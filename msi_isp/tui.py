#!/usr/bin/env python3
"""shurectl-style curses UI for msi-isp: arrow-key menus, live state header,
scrollable output panes — no typing required except the one deliberate gate
(typing `flash` remains mandatory, by safety policy).

Drives the existing Console session object, so menu actions share all state
(loaded bin, verification, backup trust) with the text REPL, and every
monitor-touching action stays behind the same gates.
"""
from __future__ import annotations

import curses
import io
import os
import sys
import textwrap

from .cli import _edid_model_name as edid_model_name
from .cli import read_edid, vendor_fw_version
from .console import Console
from .console import run as run_console

MENU = [
    ("info",    "Info — monitor identity + live firmware"),
    ("scan",    "Scan — ISP slave ACK sweep (read-only)"),
    ("verify",  "Verify — the 0x45 model-match check"),
    ("bin",     "Select .bin file — browse for firmware"),
    ("sanity",  "Backup sanity — first 4 KB read-back test"),
    ("dump",    "Backup write — full dump to file"),
    ("flash",   "FLASH — program monitor (gated + typed confirm)"),
    ("refresh", "Refresh header — re-read monitor state"),
    ("quit",    "Quit"),
]

HELP = ("up/down/j/k move · Enter run · r refresh · q/ESC back · "
        "PgUp/PgDn scroll · ^L redraw")


class Tui:
    def __init__(self, stdscr, console: Console):
        self.scr = stdscr
        self.c = console
        console._confirm = self.ask          # typed 'flash' happens on-screen
        self.fw = self.model = None
        self.err = None
        self.sel = 0
        self.mode = "menu"                   # menu | view | files
        self.lines: list[str] = []
        self.top = 0                         # pager scroll offset
        self.running = False
        self.cwd = self._start_dir()
        self.files: list[tuple[str, str]] = []   # (name, path) sorted
        self.fsel = 0
        self.fdir = ""                       # current dir path for listing
        self._init_colors()

    @staticmethod
    def _start_dir():
        for d in (os.environ.get("MSI_ISP_BINDIR"), "vendor", os.getcwd()):
            if d and os.path.isdir(d):
                return os.path.abspath(d)
        return "/"

    def _init_colors(self):
        self.has_color = curses.has_colors()
        if not self.has_color:
            return
        curses.start_color()
        curses.use_default_colors()
        self.g = curses.color_pair(1)
        self.r = curses.color_pair(2)
        self.y = curses.color_pair(3)
        self.b = curses.color_pair(4)
        for i, fg in ((1, curses.COLOR_GREEN), (2, curses.COLOR_RED),
                      (3, curses.COLOR_YELLOW), (4, curses.COLOR_CYAN)):
            curses.init_pair(i, fg, -1)

    # ---------------------------------------------------------------- probe --
    def refresh_header(self):
        try:
            with self.c._bus() as bus:
                self.fw = vendor_fw_version(bus)
                self.model = edid_model_name(read_edid(bus))
            self.err = None
        except Exception as e:                      # bus unopenable etc.
            self.fw = self.model = None
            self.err = str(e)

    # ----------------------------------------------------------------- view --
    class _Writer(io.TextIOBase):
        """append-to-scrollback sink; live-redraws while a command runs."""
        def __init__(self, tui):
            self.tui = tui
            self._partial = ""

        def write(self, s):
            for ch in str(s):
                if ch == "\n":
                    self.tui._append(self._partial)
                    self._partial = ""
                else:
                    self._partial += ch
            return len(s)

        def flush(self):
            if self._partial:
                self.tui._append(self._partial)
                self._partial = ""

        def isatty(self):
            return False                # progress bars degrade to line mode

    def _append(self, line):
        self.lines.extend(
            textwrap.wrap(line, self.scr.getmaxyx()[1] - 2) or [""])
        if self.running:
            self.top = max(0, len(self.lines) - self._view_h())
        self.draw()

    def _view_h(self):
        return self.scr.getmaxyx()[0] - 4

    def run_action(self, label, fn, arg=""):
        self.mode = "view"
        self.lines = [f"$ {label}", ""]
        self.top = 0
        self.running = True
        old_out, old_err = sys.stdout, sys.stderr
        try:
            sys.stdout = sys.stderr = self._Writer(self)
            fn(arg)
        except SystemExit as e:             # do_* helpers may sys.exit
            self._append(f"(exit {e.code})")
        except Exception as e:              # boundary: show, never crash UI
            self._append(f"!! {type(e).__name__}: {e}")
        finally:
            sys.stdout, sys.stderr = old_out, old_err
            self.running = False
        self._append("")
        self._append("[q/ESC back to menu]")
        self.draw()

    # ---------------------------------------------------------------- ask ---
    def ask(self, prompt: str, blank_abort=True) -> str:
        """Line input on the bottom row (replaces input() inside console)."""
        h, w = self.scr.getmaxyx()
        buf = ""
        while True:
            self.scr.move(h - 1, 0)
            self.scr.clrtoeol()
            self.scr.addstr(h - 1, 0, (f" {prompt} {buf}")[:w - 1],
                            self.b if self.has_color else 0)
            self.scr.refresh()
            ch = self.scr.getch()
            if ch in (curses.KEY_ENTER, 10, 13):
                return buf.strip()
            if ch == 27:                        # ESC aborts
                return ""
            if ch in (curses.KEY_BACKSPACE, 127, 8):
                buf = buf[:-1]
            elif 32 <= ch < 127:
                buf += chr(ch)

    # ------------------------------------------------------------- files -----
    def _list_files(self):
        try:
            entries = sorted(os.scandir(self.cwd), key=lambda e: (e.is_file(), e.name.lower()))
        except OSError as e:
            self.lines, self.mode = [f"cannot list {self.cwd}: {e}"], "view"
            self.running = False
            return
        self.files = []
        if self.cwd != "/":
            self.files.append(("../", "UP"))
        for e in entries:
            try:
                if e.is_dir():
                    self.files.append((e.name + "/", e.path))
                elif e.name.lower().endswith(".bin"):
                    sz = e.stat().st_size
                    self.files.append((f"{e.name}  ({sz:,} B)", e.path))
            except OSError:
                continue
        self.fdir = self.cwd
        self.fsel = 0

    def _files_key(self, ch):
        if ch in (curses.KEY_UP, ord("k")):
            self.fsel = max(0, self.fsel - 1)
        elif ch in (curses.KEY_DOWN, ord("j")):
            self.fsel = min(max(0, len(self.files) - 1), self.fsel + 1)
        elif ch in (curses.KEY_ENTER, 10, 13):
            _, path = self.files[self.fsel]
            if path == "UP":
                self.cwd = os.path.dirname(self.cwd) or "/"
            elif os.path.isdir(path):
                self.cwd = path
            else:
                self.cwd = os.path.dirname(path)
                ok = io.StringIO()
                old = sys.stdout
                try:
                    sys.stdout = ok
                    self.c._load_bin(path)
                finally:
                    sys.stdout = old
                self.lines = ok.getvalue().splitlines()
                self.mode = "view"
                self.running = False
                return
            self._list_files()
        elif ch in (ord("q"), 27):
            self.mode = "menu"
            self.draw()
            return
        self.draw()

    # ---------------------------------------------------------------- draw ---
    def draw(self):
        scr = self.scr
        scr.erase()
        h, w = scr.getmaxyx()
        bold = curses.A_BOLD
        cy = self.y if self.has_color else 0
        cg = self.g if self.has_color else 0
        cr = self.r if self.has_color else 0
        cb = self.b if self.has_color else 0
        try:
            scr.addstr(0, 1, "MSI Monitor Flash Tool — msi-isp", bold | cb)
            bus_txt = ("nvrm RM DP-AUX (NVIDIA)" if self.c.use_nvrm
                       else "kernel relay /dev/msi-auxch"
                       if getattr(self.c, "use_auxdev", False)
                       else f"i2c-dev /dev/i2c-{self.c.bus_num}")
            priv = ("" if os.geteuid() == 0
                    else "  (rootless relay)" if self.c.use_auxdev
                    else "  (--nvrm needs root)" if self.c.use_nvrm else "")
            scr.addstr(1, 1, f"transport: {bus_txt}   uid: {os.geteuid()}"
                             + priv)
            if self.err:
                scr.addstr(2, 1, f"monitor: header read failed: {self.err}"[:w - 1], cr)
            else:
                scr.addstr(2, 1, f"monitor: {self.model or '?'}   live fw: "
                                 f"{self.fw or '?'}"[:w - 1], cg)
            binl = (f"bin: {os.path.basename(self.c.bin_path)} "
                    f"{self.c.bin_hdr['version']} " if self.c.bin_hdr else "bin: (none)")
            ver = "verified ✓" if self.c.verified else "NOT verified"
            scr.addstr(3, 1, (binl + ver + "   backup: "
                              + (self.c.backup_path or "none"))[:w - 1],
                       cg if self.c.verified else cy)
            if self.mode == "menu":
                for i, (name, desc) in enumerate(MENU):
                    attr = bold | (cb if self.has_color else curses.A_REVERSE) \
                        if i == self.sel else 0
                    scr.addstr(5 + i, 2,
                               f"{i + 1:>2}  {desc}"[:w - 1], attr)
                scr.addstr(h - 2, 1, HELP[:w - 1], cy)
            elif self.mode == "view":
                vh = self._view_h()
                for row, line in enumerate(self.lines[self.top:self.top + vh]):
                    scr.addstr(5 + row, 1, line[:w - 1])
            elif self.mode == "files":
                scr.addstr(4, 1, f"select firmware .bin   {self.cwd}"[:w - 1], bold)
                vh = self._view_h()
                for row, (name, _) in enumerate(
                        self.files[self.fdir_top():self.fdir_top() + vh]):
                    attr = (bold | (cb if self.has_color else curses.A_REVERSE)
                            if row + self.fdir_top() == self.fsel else 0)
                    scr.addstr(6 + row, 2, f"{name}"[:w - 1], attr)
        except curses.error:
            pass                                # writing bottom-right cell
        scr.refresh()

    def fdir_top(self):
        vh = self._view_h()
        if self.fsel < vh // 2:
            return 0
        return max(0, self.fsel - vh + 3)

    # ---------------------------------------------------------------- loop ---
    def dispatch(self, i):
        name = MENU[i][0]
        if name == "info":
            self.run_action("info", lambda _: self.c.do_info(""))
        elif name == "scan":
            self.run_action("scan", lambda _: self.c.do_scan(""))
        elif name == "verify":
            self.run_action("verify", lambda _: self.c.do_verify(""))
        elif name == "bin":
            self._list_files()
            self.mode = "files"
            self.draw()
        elif name == "sanity":
            self.run_action("backup sanity", lambda _: self.c.do_backup(""))
        elif name == "dump":
            path = self.ask("backup file path:")
            if path:
                self.run_action(f"backup -> {path}",
                                lambda _: self.c.do_backup(f"{path} --write"))
                self.draw()
        elif name == "flash":
            self.run_action("FLASH", lambda _: self.c.do_flash(""))
            self.refresh_header()
        elif name == "refresh":
            self.refresh_header()
            self.draw()

    def loop(self):
        self.scr.keypad(True)
        curses.curs_set(0)
        self.refresh_header()
        self.draw()
        while True:
            ch = self.scr.getch()
            if ch == curses.KEY_RESIZE:
                self.draw()
                continue
            if self.mode == "menu":
                if ch in (curses.KEY_UP, ord("k")):
                    self.sel = (self.sel - 1) % len(MENU)
                elif ch in (curses.KEY_DOWN, ord("j")):
                    self.sel = (self.sel + 1) % len(MENU)
                elif ch in (curses.KEY_ENTER, 10, 13):
                    if MENU[self.sel][0] == "quit":
                        return
                    self.dispatch(self.sel)
                elif ord("1") <= ch <= ord("9"):
                    i = ch - ord("1")
                    if i < len(MENU):
                        if MENU[i][0] == "quit":
                            return
                        self.dispatch(i)
                elif ch in (ord("r"), ord("R")):
                    self.refresh_header()
                elif ch in (ord("q"), 27):
                    return
                self.draw()
            elif self.mode == "files":
                self._files_key(ch)
            elif self.mode == "view":
                n = self._view_h()
                if ch in (curses.KEY_UP, ord("k")):
                    self.top = max(0, self.top - 1)
                elif ch in (curses.KEY_DOWN, ord("j")):
                    self.top = min(max(0, len(self.lines) - 1), self.top + 1)
                elif ch in (curses.KEY_PPAGE, ord("b")):
                    self.top = max(0, self.top - n)
                elif ch in (curses.KEY_NPAGE, ord(" "), ord("f")):
                    self.top = min(max(0, len(self.lines) - n), self.top + n)
                elif ch in (curses.KEY_HOME, ord("g")):
                    self.top = 0
                elif ch in (curses.KEY_END, ord("G")):
                    self.top = max(0, len(self.lines) - n)
                elif ch in (ord("q"), 10, 13, 27):
                    self.mode = "menu"
                self.draw()


def run_tui(bus_num: int, bin_path: str | None = None,
            use_nvrm: bool = False, use_auxdev: bool = False) -> None:
    if not (sys.stdout.isatty() and os.environ.get("TERM", "") not in ("", "dumb")):
        # no usable terminal: fall back to the plain text REPL
        run_console(bus_num, bin_path, use_nvrm=use_nvrm,
                    use_auxdev=use_auxdev)
        return
    console = Console(bus_num, bin_path, use_nvrm=use_nvrm,
                      use_auxdev=use_auxdev)
    curses.wrapper(lambda scr: Tui(scr, console).loop())
