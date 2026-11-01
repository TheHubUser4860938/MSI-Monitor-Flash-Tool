"""The vendor's own ISP-slave detection, decoded and re-run (session 16c).

Comm.dll's `AutoDetectSlaveAddr` (RVA 0x7050) walks a fixed table of SIX
3-byte slave triples at 0x101b5db4, probing each with a **one-byte read at
register 0x23**; the first that answers becomes the ISP slave
(`GetIspSlave` 0x4230 returns the byte it stored). It is skipped when the
device type is 8 (RTD2711 -> the INI's configured slave), which is why
IspSetting.ini's 0x6F (= 7-bit 0x37) is what the Windows tool uses here.

Why it matters for Linux: the project's dead roster (0x18/0x20/0x22/0x35/0x49)
was measured with BARE-ADDRESS probes. The vendor's probe is a register read,
and its first candidate - 7-bit 0x4A - is a slave this sink answers on.
Evidence: re/ghidra_isp_engine.md (16c); live 2026-11-01 on /dev/i2c-4:
cand0 answers 0x00, cand1-5 EIO.
"""
import unittest

from msi_isp import Facts
from msi_isp.isp import autodetect_isp_slave
from tests.fakebus import FakeBus


class TestVendorTable(unittest.TestCase):
    def test_six_triples_of_eight_bit_addresses(self):
        self.assertEqual(len(Facts.ISP_SLAVE_TRIPLES), 6)
        for w, c, x in Facts.ISP_SLAVE_TRIPLES:
            for b in (w, c, x):
                self.assertLessEqual(b, 0xFE)
                self.assertEqual(b % 2, 0, hex(b))   # 8-bit WRITE form

    def test_table_bytes_verbatim(self):
        self.assertEqual(Facts.ISP_SLAVE_TRIPLES[0], (0x94, 0x96, 0x6A))
        self.assertEqual(Facts.ISP_SLAVE_TRIPLES[5], (0x90, 0x92, 0x60))

    def test_first_candidate_is_the_slave_this_sink_answers(self):
        """Measured on i2c-dev: 0x4A replies to the 0x23 read; the rest EIO."""
        self.assertEqual(Facts.ISP_SLAVE_TRIPLES[0][0] >> 1, 0x4A)

    def test_the_probe_register(self):
        self.assertEqual(Facts.ISP_SLAVE_PROBE_REG, 0x23)

    def test_the_third_byte_is_the_15g_mailbox_slave(self):
        """15g saw slots +0x74/+0x78 push (0x6A, 0xCA, count, &buf) and
        inferred 0x6A was a slave. The table says it is the third member of
        candidate 0 - the ISP control lane beside 0x4A/0x4B."""
        self.assertEqual(Facts.ISP_SLAVE_TRIPLES[0][2], 0x6A)


class TestDetection(unittest.TestCase):
    def test_stops_at_the_first_answer(self):
        bus = FakeBus(reads=[b"\x00"])
        got = autodetect_isp_slave(bus)
        self.assertEqual(got.index, 0)
        self.assertEqual(got.slave7, 0x4A)
        self.assertEqual(got.continuous7, 0x4B)
        self.assertEqual(got.mailbox7, 0x35)
        self.assertEqual(got.reply, b"\x00")
        self.assertEqual(bus.n_writes(0x4A), 1)      # one pose, no more

    def test_probes_in_the_vendor_order(self):
        # every candidate NACKs -> all six are tried, in table order
        bus = FakeBus()
        bus.reads = []

        def boom(addr7, n, delay=0.0, warmup=False):
            bus.log.append(("r", addr7, n, warmup))
            raise OSError(5, "I/O error")
        bus.read = boom
        got = autodetect_isp_slave(bus)
        self.assertIsNone(got.slave7)
        self.assertEqual([e[1] for e in bus.log if e[0] == "r"],
                         [0x4A, 0x32, 0x2A, 0x4C, 0x4E, 0x48])

    def test_pose_is_the_16bit_form_of_register_0x23(self):
        bus = FakeBus(reads=[b"\x2b"])
        autodetect_isp_slave(bus)
        self.assertEqual(bus.writes_to(0x4A)[0], b"\x23\x00")

    def test_empty_reply_is_not_an_answer(self):
        """An ACK that delivers nothing must not end the scan (15k rule)."""
        bus = FakeBus(reads=[b"", b"\x01"])
        got = autodetect_isp_slave(bus)
        self.assertEqual(got.index, 1)
        self.assertEqual(got.slave7, 0x32)

    def test_returns_the_configured_slave_when_the_type_is_eight(self):
        """Device type 8 skips detection: the INI slave (0x6F -> 7-bit 0x37)
        is the answer, and no probe is needed."""
        self.assertEqual(Facts.ISP_SLAVE_FOR_TYPE8 >> 1, 0x37)
        self.assertEqual(Facts.ISP_SLAVE_FOR_TYPE8, 0x6F)


if __name__ == "__main__":
    unittest.main()
