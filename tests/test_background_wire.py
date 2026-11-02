"""16ac: the background protocol (device type 0x1a) payload by payload.

16ab decoded the chain's shape - seven steps, VCP-shaped, one poll helper - and
left four payloads `pending`. This file pins what the four bodies actually say,
including the one place 16ab guessed wrong: the exit command is 4, not 3.
"""
import unittest

from msi_isp import Facts, isp, pipeline
from msi_isp.emul import BG_SLAVE, MB_SLAVE, EmulatedMonitor
from msi_isp.pipeline import PIPELINE_BACKGROUND as BG

STEP = {s.name: s for s in BG}


def _run(m=None, image=None):
    return pipeline.run_pipeline(m or EmulatedMonitor(image=b"\xff" * 0x10000),
                                 addr=0x1000, sleep=lambda _ms: None,
                                 steps=BG, image=image or b"\x11" * 4096)


class TestSubOpcodes(unittest.TestCase):
    """VCP 0x31 is the channel; the first data byte is the sub-opcode (16ac)."""

    def test_the_three_writes_carry_1_2_4(self):
        self.assertEqual(STEP["background start"].payload, bytes([0x31, 1]))
        self.assertEqual(STEP["background finish"].payload, bytes([0x31, 2]))
        self.assertEqual(STEP["background exit"].payload, bytes([0x31, 4]))

    def test_the_exit_is_4_not_3(self):
        """The public correction: 16ab shipped 3 from the 1/2/3 pattern."""
        self.assertEqual(STEP["background exit"].payload[1], 4)
        corr = Facts.BACKGROUND_WIRE_16AC["correction"]
        self.assertIn("16ab shipped", corr)
        self.assertIn("It is 4", corr)

    def test_the_two_reads_preload_5_and_7(self):
        self.assertEqual(STEP["verify project id"].payload, bytes([0x31, 5]))
        self.assertEqual(STEP["packet length"].payload, bytes([0x31, 7]))
        self.assertEqual(STEP["packet length"].count, 3)   # it READS three bytes

    def test_the_steps_that_talk_speak_on_the_background_slave(self):
        for name in ("verify project id", "background start", "packet length",
                     "background finish", "background exit"):
            with self.subTest(step=name):
                self.assertEqual(STEP[name].slave7, BG_SLAVE)   # 8-bit 0x3A

    def test_nothing_is_left_pending(self):
        self.assertEqual([s.name for s in BG if s.pending], [])


class TestVcpWire(unittest.TestCase):
    """The two primitives the background chain is built from."""

    def test_a_read_writes_the_code_then_reads(self):
        m = EmulatedMonitor(image=b"\xff" * 0x1000)
        d = isp.vcp_read(m, 0x31, 3, slave7=BG_SLAVE, preload=b"\x07")
        self.assertEqual(d, b"\x07 \x00")            # the model's answer, 32 bytes
        self.assertEqual(m._bg_vcp, 0x31)
        self.assertEqual(m._bg_sub, 7)               # the preload IS the sub-opcode

    def test_a_write_puts_the_bytes_beside_the_code(self):
        m = EmulatedMonitor(image=b"\xff" * 0x1000)
        isp.vcp_write(m, 0x31, b"\x02", slave7=BG_SLAVE)
        self.assertEqual(m.bg_phase, 2)              # the finish command landed

    def test_the_default_opcode_is_the_mccs_pair(self):
        import inspect
        self.assertEqual(inspect.signature(isp.vcp_read).parameters["opcode"].default,
                         0x51)
        self.assertEqual(
            inspect.signature(isp.vcp_write).parameters["opcode"].default, 0x52)


class TestChainOnTheEmulator(unittest.TestCase):
    """The instrument runs the chain end to end, answers and all."""

    def setUp(self):
        self.m = EmulatedMonitor(image=b"\xff" * 0x10000)
        self.rep = _run(self.m, image=b"\x22" * 4096)

    def test_all_seven_steps_run(self):
        self.assertEqual(len(self.rep.results), 7)
        self.assertEqual([r for r in self.rep.results if not r.ok], [])
        self.assertIsNone(self.rep.reached)

    def test_the_project_id_answer_is_the_markers_shape(self):
        r = next(x for x in self.rep.results
                 if x.step.name == "verify project id")
        self.assertEqual(r.reply[0], 0x11)           # the byte FUN_1002a600 checks
        self.assertEqual(r.reply[1], len(self.m.bg_project_id))
        self.assertEqual(r.reply[2:], self.m.bg_project_id)

    def test_the_packet_length_is_the_devices_answer(self):
        r = next(x for x in self.rep.results if x.step.name == "packet length")
        lo, hi = r.reply[1], r.reply[2]
        self.assertEqual(lo | (hi << 8), self.m.bg_packet_len)

    def test_the_chain_ends_in_the_exit_phase(self):
        self.assertEqual(self.m.bg_phase, 4)

    def test_the_mailbox_answers_the_status_read(self):
        m = EmulatedMonitor(image=b"\xff" * 0x1000)
        m.write(MB_SLAVE, bytes([0x51, 0x31, 0x01]))
        self.assertEqual(m.read(MB_SLAVE, 1), b"\x00")


class TestBackgroundWireFact(unittest.TestCase):
    """The fact table carries the decode so the code is not the only record."""

    def test_the_fact_names_every_sub_opcode(self):
        text = Facts.BACKGROUND_WIRE_16AC["sub_opcodes"]
        for pair in ("1 start", "2 finish", "4 exit", "5 project-id",
                     "7 packet"):
            self.assertIn(pair, text, pair)

    def test_the_fact_records_the_slot_semantics(self):
        slots = Facts.BACKGROUND_WIRE_16AC["slots"]
        for slot in ("+0x54", "+0x58", "+0x74", "+0x13c", "+0x140", "+0x10c"):
            self.assertIn(slot, slots, slot)

    def test_the_fact_names_the_two_gates(self):
        self.assertIn("config +0x10", Facts.BACKGROUND_WIRE_16AC["project_id"])
        self.assertIn("config +0x14", Facts.BACKGROUND_WIRE_16AC["packet_len"])

    def test_the_fact_says_who_owns_the_packet_length(self):
        self.assertIn("the monitor's answer",
                      Facts.BACKGROUND_WIRE_16AC["packet_len"].lower())

    def test_the_16ab_fact_still_stands_for_the_shape_it_decoded(self):
        self.assertIn("ulTimeWaitCopyBank",
                      Facts.BACKGROUND_PROTOCOL_16AB["poll"])


if __name__ == "__main__":
    unittest.main()
