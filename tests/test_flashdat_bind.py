"""Flash.dat parser + record->script binding (session 15i Phase A).

The parser is pure bytes-in/records-out so it runs on fixtures; the
vendor file itself is gitignored and guarded by skipUnless."""
import importlib.util
import os
import unittest

_HERE = os.path.dirname(__file__)
_spec = importlib.util.spec_from_file_location(
    "flashdat_bind", os.path.join(_HERE, "..", "scratch", "flashdat_bind.py"))
fb = importlib.util.module_from_spec(_spec)
_spec.loader.exec_module(fb)

_VENDOR = os.path.join(_HERE, "..", "vendor", "PlugIn", "Flash.dat")

_SCRIPT = "06,60,20,06,61,06,06,60,21,0d,60,01,00,00,64,00,64"


def _record(key4: bytes, name: str, cap_le: bytes, script: str | None) -> bytes:
    params = cap_le + b"\x01\x02" + b"\x00" * 22
    body = key4 + b"\x00" * 4 + name.encode() + b"\x00" + params
    if script:
        body += script.encode() + b"\x00"
    return body + b"\x00" * 8


FIXTURE = (b"\x09\x05\x02\x07\x02\x00\x03\x00\x00\x00\x00\x00"
           + _record(b"\x37\x30\x12\x11", "A25L020", b"\x04\x00", _SCRIPT)
           + _record(b"\x37\x30\x16\x15", "A25L032M", b"\x40\x00", None))


class TestGrammar(unittest.TestCase):
    def test_write_and_read_statement_splitting(self):
        s = fb.decode_script(_SCRIPT)
        self.assertEqual(s[0], ("w", "60", "20"))
        self.assertEqual(s[1], ("w", "61", "06"))
        self.assertEqual(s[-1], ("rd", "60",
                                 ["01", "00", "00", "64", "00", "64"]))
        self.assertEqual(len(s), 4)

    def test_short_stream_flags_malformed_instead_of_raising(self):
        self.assertEqual(fb.decode_script("06,60")[0][0], "?")


class TestBind(unittest.TestCase):
    def test_fixture_records_sizes_and_inheritance(self):
        recs = fb.parse(FIXTURE)
        self.assertEqual([r["name"] for r in recs], ["A25L020", "A25L032M"])
        self.assertEqual(recs[0]["cap_kib"], 256)
        self.assertEqual(recs[1]["cap_kib"], 4096)
        self.assertEqual(recs[1]["key"], "37 30 16 15")
        self.assertFalse(recs[1]["scripts"])
        self.assertEqual(recs[1]["inherited"], "A25L020")
        self.assertEqual(len(recs[0]["scripts"]), 1)
        self.assertFalse([q for q in recs[0]["scripts"][0] if q[0] == "?"])


@unittest.skipUnless(os.path.exists(_VENDOR), "vendor/ is gitignored")
class TestVendorFile(unittest.TestCase):
    def test_our_chip_binds_to_family_lead_script(self):
        with open(_VENDOR, "rb") as fh:
            recs = fb.parse(fh.read())
        self.assertEqual(len(recs), 150)
        ours = next(r for r in recs if r["name"] == "A25L032M")
        self.assertEqual(ours["cap_kib"], 4096)
        self.assertEqual(ours["key"], "37 30 16 15")
        self.assertEqual(ours["inherited"], "A25L020")
        carrier = next(r for r in recs if r["name"] == "A25L020")
        stmts = carrier["scripts"][0]
        self.assertEqual(len(stmts), 18)  # fully decoded, no drift
        self.assertEqual(stmts[5], ("w", "61", "90"))  # 0x90 Device-ID stage

    def test_a25l_family_scripts_are_grammar_clean(self):
        with open(_VENDOR, "rb") as fh:
            recs = fb.parse(fh.read())
        fam = [r for r in recs if r["key"].startswith("37 30")]
        self.assertTrue(fam)
        for r in fam:
            for s in r["scripts"]:
                self.assertFalse([q for q in s if q[0] == "?"], r["name"])


if __name__ == "__main__":
    unittest.main()
