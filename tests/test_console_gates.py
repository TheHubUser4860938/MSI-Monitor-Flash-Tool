"""Console flash-gate integrity (audit session 15l).

The `flash` gate roster is the tool's last line of defense; these tests
drive do_flash with the bus monkeypatched away (no /dev access, CI-safe)
and pin the two properties the user's safety policy depends on:
a FAILED backup invalidates trust even when the previous backup file is
still on disk, and every gate must show [+] before the typed-'flash
prompt is ever reached.
"""
import contextlib
import io
import unittest

from msi_isp.console import Console

HDR = {"model": "MAG 341CQ X28", "version": "012", "size": 100,
       "sha256": "ab" * 32, "edid_models": ["MAG 341CQ X28"]}


def make_console():
    c = Console(250)                     # bus number never touched below
    c._isp_visible = lambda: True
    c._bus = contextlib.nullcontext      # callable -> CM, no lambda
    c.bin_hdr = dict(HDR)
    c.verified = True
    return c


def run_flash(c):
    buf = io.StringIO()
    with contextlib.redirect_stdout(buf):
        c.do_flash("")
    return buf.getvalue()


class TestFlashGates(unittest.TestCase):
    def test_stale_backup_file_is_not_trust(self):
        # a LATER backup attempt failed (backup_ok False) while an older
        # file still sits at backup_path: pre-audit the gate checked only
        # the path and waved it through.
        c = make_console()
        c.backup_path, c.backup_ok = __file__, False
        out = run_flash(c)
        self.assertIn("[-] trusted backup this session", out)
        self.assertIn("flash aborted", out)

    def test_all_gates_pass_reaches_typed_confirm(self):
        c = make_console()
        c.backup_path, c.backup_ok = __file__, True
        seen = {}

        def confirm(prompt):
            seen["prompt"] = prompt
            return "nope"                # anything but 'flash'
        c._confirm = confirm
        out = run_flash(c)
        self.assertIn("[+] trusted backup this session", out)
        self.assertNotIn("flash aborted", out)
        self.assertIn("type 'flash'", seen.get("prompt", ""))
        self.assertIn("aborted, monitor untouched", out)

    def test_no_bin_no_write_path(self):
        c = make_console()
        c.bin_hdr = None
        out = run_flash(c)
        self.assertIn("[-] firmware file loaded", out)
        self.assertIn("flash aborted", out)

    def test_backup_flag_parsing_is_exact_token(self):
        # pre-audit "--write in arg" was a substring test: a path like
        # '/x/my--write-dump.bin' silently meant "write it out".
        c = make_console()
        calls = []
        c._backup_locked = lambda w, o: calls.append((w, o))
        c.do_backup("/x/my--write-dump.bin")           # no --write TOKEN
        self.assertEqual(calls, [(False, "/x/my--write-dump.bin")])
        # these strings never touch disk: this pins TOKEN PARSING only
        c.do_backup("--write /sanctioned/ok.bin")
        self.assertEqual(calls[-1], (True, "/sanctioned/ok.bin"))


if __name__ == "__main__":
    unittest.main()
