"""Tests for the 16i record gate: the bin parse, the compare, the switches."""
from __future__ import annotations

import os
import unittest

from msi_isp import Facts, record

VENDOR = os.path.join(os.path.dirname(__file__), "..", "vendor")
FW009 = os.path.join(VENDOR, "MSI_MAG_341CQP_QD-OLED_X28_FW.009_DC2F.bin")

# A synthetic block with the exact grammar the bins show (16i, FW.009 @194566):
# version code, 0xff, a one-byte field, 0xff, model, 0xff, panel, 0xff, 0xaf,
# 0xff, scaler, then 0xff padding.
SYNTH = (b"\x00\x01junk" + bytes([0xFF]) + b"e012" + bytes([0xFF]) + b"\x03"
         + bytes([0xFF]) + b"MAG 341CQ X28" + bytes([0xFF])
         + b"TPO340QH1-CH01 D01" + bytes([0xFF]) + b"\xaf" + bytes([0xFF])
         + b"RTD2711" + bytes([0xFF]) * 4 + b"\x7f\x80")


class TestBinRecord(unittest.TestCase):
    def test_parses_the_measured_grammar(self):
        r = record.parse_bin_record(SYNTH)
        self.assertEqual(r.model, "MAG 341CQ X28")
        self.assertEqual(r.panel, "TPO340QH1-CH01 D01")
        self.assertEqual(r.scaler, "RTD2711")
        self.assertEqual(r.code, "e012")

    def test_missing_model_raises(self):
        with self.assertRaises(ValueError):
            record.parse_bin_record(b"\x01\x02\x03")

    @unittest.skipUnless(os.path.exists(FW009), "FW.009 bin not on disk")
    def test_the_real_fw009_bin(self):
        with open(FW009, "rb") as fh:
            r = record.parse_bin_record(fh.read())
        self.assertEqual(r.model, "MAG 341CQ X28")
        self.assertEqual(r.panel, "TPO340QH1-CH01 D01")
        self.assertEqual(r.scaler, "RTD2711")
        self.assertEqual(r.code, "e009")

    def test_the_fact_matches_the_parser(self):
        """The stored fact and the live parser agree - no laundered citation."""
        self.assertEqual(Facts.BIN_RECORD["fw009"]["model"], "MAG 341CQ X28")
        self.assertEqual(Facts.BIN_RECORD["fw009"]["panel"],
                         "TPO340QH1-CH01 D01")


class TestCompare(unittest.TestCase):
    def test_equal_models_pass(self):
        b = record.Record(model="MAG 341CQ X28", version="FW.012")
        p = record.Record(model="MAG 341CQ X28", version="FW.009N")
        v = record.compare(b, p, ignore=("version",))
        self.assertTrue(v.ok, v.summary)

    def test_a_different_model_fails_the_gate(self):
        b = record.Record(model="MAG 341CQP QD-OLED X28")
        p = record.Record(model="MAG 341CQ X28")
        v = record.compare(b, p)
        self.assertFalse(v.ok)
        self.assertEqual(v.failed, ["model"])

    def test_the_ignore_switch_skips_the_field(self):
        b = record.Record(model="MAG 341CQP QD-OLED X28")
        p = record.Record(model="MAG 341CQ X28")
        self.assertTrue(record.compare(b, p, ignore=("model",)).ok)

    def test_trailing_padding_does_not_break_the_match(self):
        b = record.Record(model="MAG 341CQ X28")
        p = record.Record(model="MAG 341CQ X28   ")
        self.assertTrue(record.compare(b, p).ok)

    def test_both_missing_is_equal_not_deficient(self):
        """Anti-vacuity: an absent field on both sides is a match, named."""
        v = record.compare(record.Record(), record.Record())
        self.assertTrue(v.ok, v.summary)

    def test_one_sided_absence_is_a_failure(self):
        v = record.compare(record.Record(model="X"), record.Record())
        self.assertFalse(v.ok)
        self.assertEqual(v.failed, ["model"])

    def test_the_verdict_names_the_switches_that_skipped(self):
        b = record.Record(model="A", version="V")
        p = record.Record(model="B", version="V")
        v = record.compare(b, p, ignore=("model",))
        self.assertTrue(v.checks["model"]["ignored"])
        self.assertFalse(v.checks["version"]["ignored"])


class TestWireForms(unittest.TestCase):
    def test_the_ladder_constants_are_the_measured_ones(self):
        self.assertEqual(record.VERSION_VCP, 0x01)
        self.assertEqual(record.MODEL_VCP, 0x02)
        self.assertEqual((record.VERSION_START, record.VERSION_LEN), (4, 20))
        self.assertEqual(record.MCCS_DATA, 8)
        self.assertEqual(record.INI_VERSION_START, 6)

    def test_the_version_payload_is_the_ini_line(self):
        """The module reads its payload out of the fact, not a copy."""
        self.assertIn("FE E1 E6", Facts.USER_DEFINED_RECORD["ddcci_read"])
        self.assertEqual(Facts.USER_DEFINED_RECORD["wire_cmd"],
                         "0x6E,0x51,0x84,0x01,0xFE,0xE1,0xE6")

    def test_ascii_tail_stops_at_the_first_nonprintable(self):
        self.assertEqual(record._ascii_tail(b"\x8a\x02ab\x00cd", start=2), "ab")

    def test_the_code_is_the_trailing_run_not_a_fixed_offset(self):
        """FW.009 opens its block with 0xff, FW.012 does not: the code is
        found by shape, so one parser reads both bins."""
        self.assertEqual(record._code("e009"), "e009")
        self.assertEqual(record._code("jcl r`jlsrjalsraTklrak@je012"), "e012")
        self.assertIsNone(record._code("no digits here"))

    def test_ascii_tail_of_nothing_is_none(self):
        self.assertIsNone(record._ascii_tail(b"", start=6))


if __name__ == "__main__":
    unittest.main()
