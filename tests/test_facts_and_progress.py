"""Non-TTY progress degradation + the two checksum/size inferences we ship."""
import io
import os
import unittest

from msi_isp import Facts
from msi_isp.progress import Bar


class TestBar(unittest.TestCase):
    def test_pipes_get_five_percent_lines_only(self):
        sio = io.StringIO()
        bar = Bar(100, label="backup", stream=sio)
        self.assertFalse(bar.tty)
        for done in range(101):
            bar.update(done)
        lines = [ln for ln in sio.getvalue().splitlines() if ln.strip()]
        # 0,5,...,95,100 = 21 lines max, not 101
        self.assertLessEqual(len(lines), 22)
        self.assertIn("100.0", lines[-1])
        self.assertTrue(all("backup" in ln for ln in lines))

    def test_done_prints_completion(self):
        sio = io.StringIO()
        Bar(10, label="dump", stream=sio).done("verified")
        out = sio.getvalue()
        self.assertIn("complete", out)
        self.assertIn("verified", out)


class TestChecksum(unittest.TestCase):
    def test_plain_sum_low16(self):
        self.assertEqual(Facts.bin_content_checksum(b"\x01\x02\x03"), 6)
        self.assertEqual(Facts.bin_content_checksum(bytes([0xFF] * 4)), 0x3FC)
        self.assertEqual(Facts.bin_content_checksum(b""), 0)

    @unittest.skipUnless(
        os.path.exists("vendor/MSI_MAG_341CQP_QD-OLED_X28_FW.012_4023.bin"),
        "vendor binaries are gitignored")
    def test_real_filename_4023(self):
        with open("vendor/MSI_MAG_341CQP_QD-OLED_X28_FW.012_4023.bin",
                  "rb") as f:
            data = f.read()
        self.assertEqual(Facts.bin_content_checksum(data),
                         Facts.BIN_CHECKSUM_EXPECTED)
        self.assertEqual(len(data), Facts.FW_BIN_SIZE)


if __name__ == "__main__":
    unittest.main()
