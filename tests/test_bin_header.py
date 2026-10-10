"""bin_header truthfulness (session 14o): version-relative, layered identity.

The pre-14o parser read .012-fixed offsets, silently returned empty
strings for .009 -- and both verify paths reported "OK" for an empty
model (empty is a substring of everything). New design: version pattern-
searched; identity by (1) byte-exact live-EDID containment, (2) strong
EDID candidates, (3) labeled fallback. Bins legitimately carry DOZENS of
EDID variants (measured: 54 in .009, 137 windows in .012), so names alone
are weak -- these tests pin that whole story.
"""
import hashlib
import os
import shutil
import tempfile
import unittest

from msi_isp import Facts
from msi_isp.cli import _edid_candidates, _edid_strong, bin_header

NAME = "MAG 341CQ X28"


def fake_edid(name: str = NAME) -> bytes:
    e = bytearray(128)
    e[0:8] = bytes([0x00] + [0xFF] * 6 + [0x00])
    e[16], e[17], e[18] = 0x01, 0x20, 0x01
    off = 54 + 18 * 2                                # descriptor slot 2
    e[off:off + 4] = b"\x00\x00\x00\xfc"
    e[off + 4] = 0x00
    e[off + 5:off + 18] = (name.encode() + b"\x0a" * 13)[:13]
    e[127] = (-sum(e[:127])) & 0xFF
    return bytes(e)


def fake_bin(version=b"FW.123", edids=((0x2F800, fake_edid()),),
             extra=b"") -> bytes:
    end = max(o + 512 for o, _ in edids)
    end = max(end, 0x1000)
    data = bytearray(b"\x00" * (end + len(version) + 16))
    for off, blk in edids:
        data[off:off + 128] = blk
    pos = edids[-1][0] + 256
    data[pos:pos + len(version)] = version
    return bytes(data) + extra


class TestSynthetic(unittest.TestCase):
    def parse(self, data, live=b""):
        with tempfile.NamedTemporaryFile(suffix=".bin", delete=False) as tf:
            tf.write(data)
        self.addCleanup(os.unlink, tf.name)
        return bin_header(tf.name, live_edid=live)

    def test_version_and_model_pattern_searched(self):
        data = fake_bin()
        h = self.parse(data)
        self.assertEqual(h["version"], "123")
        self.assertEqual(h["model"], NAME)
        self.assertEqual(h["size"], len(data))
        self.assertEqual(h["sha256"], hashlib.sha256(data).hexdigest())
        self.assertFalse(h["edid_exact"])
        self.assertEqual(h["edid_offset"], 0x2F800)

    def test_live_edid_byte_exact_wins_and_flags(self):
        live = fake_edid()
        data = fake_bin(edids=((0x1A0200, fake_edid("RTK FHD")),
                               (0x1A0400, live)))
        h = self.parse(data, live=live)
        self.assertEqual(h["model"], NAME)
        self.assertTrue(h["edid_exact"])
        self.assertEqual(h["edid_offset"], 0x1A0400)
        self.assertEqual(h["edid_models"], sorted([NAME, "RTK FHD"]))

    def test_without_live_first_strong_candidate(self):
        data = fake_bin(edids=((0x1A0200, fake_edid("RTK FHD")),
                               (0x1A0400, fake_edid(NAME))))
        h = self.parse(data)
        self.assertEqual(h["model"], "RTK FHD")
        self.assertFalse(h["edid_exact"])

    def test_no_valid_edid_empty_model_not_garbage(self):
        h = self.parse(b"\x00\xff\xff\xff\xff\xff\xff\x00" + b"\x11" * 300)
        self.assertEqual(h["model"], "")          # magic but bad checksum
        self.assertEqual(h["edid_models"], [])

    def test_strong_filter_rejects_garbage_names(self):
        blk = bytearray(fake_edid())
        off = 54 + 18 * 2
        blk[off + 6] = 0x01                        # control char in name
        blk[127] = (-sum(blk[:127])) & 0xFF
        self.assertFalse(_edid_strong(bytes(blk)))

    def test_candidates_only_strong(self):
        data = fake_bin(edids=((0x2000, fake_edid()),
                               (0x2200, fake_edid("SP")))
                        ) + b"\x00\xff\xff\xff\xff\xff\xff\x00\x55" * 3
        offs = [o for o, _ in _edid_candidates(data)]
        self.assertEqual(offs, [0x2000, 0x2200])


@unittest.skipUnless(
    os.path.exists("vendor/MSI_MAG_341CQP_QD-OLED_X28_FW.009_DC2F.bin")
    and os.path.exists("vendor/MSI_MAG_341CQP_QD-OLED_X28_FW.012_4023.bin"),
    "vendor binaries are gitignored")
class TestRealBins(unittest.TestCase):
    P009 = "vendor/MSI_MAG_341CQP_QD-OLED_X28_FW.009_DC2F.bin"
    P012 = "vendor/MSI_MAG_341CQP_QD-OLED_X28_FW.012_4023.bin"

    def test_012_identity_and_hash_anchor(self):
        h = bin_header(self.P012)
        self.assertEqual(h["version"], "012")
        self.assertEqual(h["model"], NAME)
        self.assertEqual(h["size"], 0x1C0000)
        self.assertEqual(h["sha256"], Facts.FW_BIN_SHA256)

    def test_009_parses_version_relative(self):
        h = bin_header(self.P009)
        self.assertEqual(h["version"], "009")
        self.assertIn(NAME, h["edid_models"])     # present somewhere in table
        self.assertEqual(h["size"], 0x1E0000)     # NOT FW_BIN_SIZE
        with open(self.P009, "rb") as f:
            self.assertEqual(Facts.bin_content_checksum(f.read()), 0xDC2F)

    def test_live_byte_exact_path_real_data(self):
        # simulate the monitor's EDID: the MAG-named strong block from .009
        with open(self.P009, "rb") as f:
            data = f.read()
        live = next(blk for _, blk in _edid_candidates(data) if _mag(blk))
        h = bin_header(self.P009, live_edid=live)
        self.assertEqual(h["model"], NAME)
        self.assertTrue(h["edid_exact"])

    def test_009_fits_flash_exceeded_old_image_assumption(self):
        self.assertGreater(0x1E0000, Facts.FW_BIN_SIZE)
        self.assertLess(0x1E0000, Facts.FLASH_SIZE)


def _mag(blk: bytes) -> bool:
    from msi_isp.cli import _edid_model_name
    return _edid_model_name(blk) == NAME


class TestFilenameChecksum(unittest.TestCase):
    """The _XXXX suffix check the vendor exe performs (Facts 14c crack),
    wired into bin_header by audit 15l (the README promised it; the code
    had the helper but verify never called it)."""

    def parse_named(self, data, suffix=""):
        d = tempfile.mkdtemp()
        self.addCleanup(shutil.rmtree, d)
        path = os.path.join(d, f"MSI_FW_TEST{suffix}.bin")
        with open(path, "wb") as f:
            f.write(data)
        return bin_header(path)

    def test_suffix_parsed_and_agrees(self):
        data = b"\x01\x02" * 600          # sum 1800 = 0x0708
        want = sum(data) & 0xFFFF
        h = self.parse_named(data, f"_{want:04X}")
        self.assertEqual((h["filename_sum"], h["sum16"]), (want, want))

    def test_mismatch_is_visible(self):
        h = self.parse_named(b"\x01", "_beef")
        self.assertEqual((h["filename_sum"], h["sum16"]), (0xBEEF, 1))

    def test_absent_suffix_is_no_verdict(self):
        h = self.parse_named(b"\x01")
        self.assertIsNone(h["filename_sum"])
        self.assertEqual(h["sum16"], 1)



if __name__ == "__main__":
    unittest.main()
