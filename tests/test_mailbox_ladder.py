"""Mailbox ladder replay (session 16e): the vendor's command grammar, on-box.

Address-level scanning is exhausted - three lanes, three constant replies
(Facts.LANE_READBACK). The ladder is the command-level test: 15g proved the
engine's ISP-control slots +0x74/+0x78 push `(0x6A, 0xCA, count, &buf)` -
slave 0x6A (8-bit = 7-bit 0x35), token register 0xCA - and 16c's slave table
confirms 0x6A is the third member of the winning triple, i.e. the mailbox lane
beside the ISP slave. The commands are Flash.dat's own (15i Phase A bind,
Facts.FLASHDAT_MAP): 0x06 write-enable, 0x90 Device-ID (the vendor's gate
answers '70 16 15'), 0x3B fast read.

Question this answers: does the reply VARY with the command? Constant replies
mean the mailbox is info-only on this sink (15j's verdict for the DDC/CI 0xA0
opcode); varying replies mean there is a register file behind it, and the
backup becomes a software read.

All fakes here; the live run is read-only.
"""
import unittest

from msi_isp import Facts
from msi_isp.isp import LADDER_COMMANDS, mailbox_ladder
from tests.fakebus import FakeBus


class TestLadderShape(unittest.TestCase):
    def test_commands_are_the_vendors(self):
        opcodes = [op for op, _what, _n in LADDER_COMMANDS]
        self.assertIn(0x06, opcodes)     # write enable
        self.assertIn(0x90, opcodes)     # Device-ID (vendor gate 70 16 15)
        self.assertIn(0x3B, opcodes)     # fast read

    def test_frame_is_token_then_opcode(self):
        bus = FakeBus(reads=[b"\x70\x16\x15\x00"])
        mailbox_ladder(bus)
        self.assertEqual(bus.writes_to(Facts.ISP_MAILBOX_SLAVE7)[0],
                         bytes([Facts.ISP_MAILBOX_TOKEN, 0x06]))

    def test_reads_follow_each_write(self):
        bus = FakeBus()
        mailbox_ladder(bus)
        # every command: one write, then one read of its own length
        kinds = [e[0] for e in bus.log if e[0] in ("w", "r")]
        self.assertEqual(kinds[:4], ["w", "r", "w", "r"])


class TestReplies(unittest.TestCase):
    def test_reply_is_recorded_per_command(self):
        bus = FakeBus(reads=[b"\x00", b"\x70\x16\x15\x00", b"\xaa" * 16])
        steps = mailbox_ladder(bus)
        self.assertEqual([s.opcode for s in steps], [0x06, 0x90, 0x3B])
        self.assertEqual(steps[1].reply, b"\x70\x16\x15\x00")

    def test_a_nack_is_a_step_not_a_crash(self):
        bus = FakeBus()

        def boom(addr7, data, warmup=False):
            bus.log.append(("w", addr7, bytes(data), warmup))
            raise OSError(5, "I/O error")
        bus.write = boom
        steps = mailbox_ladder(bus)
        self.assertTrue(all(s.error for s in steps))
        self.assertIn("I/O error", steps[0].error)

    def test_varies_reports_the_discriminating_result(self):
        bus = FakeBus(reads=[b"\x01", b"\x70\x16\x15\x00", b"\xaa" * 16])
        self.assertTrue(mailbox_ladder(bus).varies)

    def test_constant_replies_do_not_look_alive(self):
        bus = FakeBus(reads=[b"\x00", b"\x00", b"\x00"])
        steps = mailbox_ladder(bus)
        self.assertFalse(steps.varies)
        # each reply is padded to its command's width; the CONTENT is the
        # constant part
        self.assertTrue(all(set(s.reply) == {0} for s in steps))

    def test_prefixes_of_one_frame_are_one_answer(self):
        """The live 0x37 lesson: 1/4/16-byte reads of the same DDC/CI frame
        (8a | 8a 02 00 fe | 8a ... 'FW.009N') are ONE reply, not three."""
        bus = FakeBus()
        bus.reads = [b"\x8a", b"\x8a\x02\x00\xfe",
                     b"\x8a\x02\x00\xfe\x00\x46\x57\x2e\x30\x30\x39\x4e"]
        self.assertFalse(mailbox_ladder(bus).varies)

    def test_empty_reply_counts_as_no_answer(self):
        bus = FakeBus(reads=[b"", b"", b""])
        self.assertFalse(mailbox_ladder(bus).varies)


class TestMailboxConstants(unittest.TestCase):
    def test_slave_is_the_triple_third_member(self):
        """16c: candidate 0's triple is (0x94, 0x96, 0x6A) - 0x6A is the
        mailbox, so 7-bit 0x35, the slave 15g inferred."""
        self.assertEqual(Facts.ISP_MAILBOX_SLAVE7, 0x6A >> 1)
        self.assertEqual(Facts.ISP_MAILBOX_SLAVE7, 0x35)

    def test_token_register(self):
        self.assertEqual(Facts.ISP_MAILBOX_TOKEN, 0xCA)


class TestLadderVerdict(unittest.TestCase):
    """The 16e result, pinned so the next window does not re-derive it."""

    def test_the_mailbox_is_an_info_lane(self):
        self.assertIn("info lane", Facts.LADDER_VERDICT["0x37"])

    def test_the_flash_and_mailbox_slaves_stay_silent(self):
        for slave in ("0x22", "0x20", "0x35"):
            self.assertIn("EIO", Facts.LADDER_VERDICT[slave])

    def test_isp_entry_is_a_ddci_handshake(self):
        self.assertIn("MCCS reply header",
                      Facts.LADDER_VERDICT["isp_status_note"])

    def test_the_measurement_is_located(self):
        self.assertIn("2026-11-01", Facts.LADDER_VERDICT["measured"])


if __name__ == "__main__":
    unittest.main()
