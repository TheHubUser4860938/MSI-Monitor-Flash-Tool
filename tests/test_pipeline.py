"""The pipeline spine (session 16g): the vendor's order, encoded and walked.

The fake bus answers everything, so these tests pin the SEQUENCE; the live
run (msi-isp pipeline) is what reports where the sink stops answering.
"""
import unittest

from msi_isp import Facts
from msi_isp.pipeline import PIPELINE, run_pipeline
from tests.fakebus import FakeBus


class TestSequence(unittest.TestCase):
    def test_the_vendor_order(self):
        self.assertEqual([s.name for s in PIPELINE], [
            "enter ISP",
            "settle",
            "set background flash write time",
            "enter ISP mode (type 8)",
            "get flash type",
            "chip identity",
            "read flash page",
            "leave ISP",
        ])

    def test_the_settle_delay_is_the_shipped_ini_value(self):
        settle = PIPELINE[1]
        self.assertEqual(settle.ms,
                         Facts.VENDOR_INI["dual_bank"]["time_after_command_ms"])
        self.assertEqual(settle.ms, 200)

    def test_the_exit_is_the_shared_mccs_command(self):
        self.assertEqual(PIPELINE[-1].payload, bytes([Facts.EXIT_ISP_CMD]))

    def test_no_step_has_an_undecoded_wire_form(self):
        """The gap list is empty as of 16p: 16m named the two core-vtable
        slots (WritePWM2SPIDev) and 16o/16p gave their bytes - the packet to
        door 0x9C. What is NOT proven is the pairing of control 0x45 with
        enter-mode, which 16m's arithmetic infers; the label says so."""
        self.assertEqual([s.name for s in PIPELINE if s.pending], [])

    def test_the_two_former_gaps_cite_their_new_receipts(self):
        for name in ("set background flash write time",
                     "enter ISP mode (type 8)"):
            st = next(s for s in PIPELINE if s.name == name)
            self.assertIn("16m", st.why, name)
            self.assertIn("0x9C", st.why + st.payload.hex(), name)

    def test_every_step_carries_its_evidence(self):
        for s in PIPELINE:
            self.assertTrue(s.why, s.name)


class TestWalk(unittest.TestCase):
    def test_a_cooperative_bus_walks_the_whole_pipeline(self):
        bus = FakeBus(reads=[b"\x8a", b"\x00", b"\x1f\x40\x10", b"\xaa" * 32])
        slept = []
        rep = run_pipeline(bus, sleep=slept.append)
        self.assertIsNone(rep.reached)
        self.assertEqual(slept, [0.2])                    # the 200 ms settle
        self.assertEqual(len(rep.results), len(PIPELINE))

    def test_the_first_silent_lane_is_the_diagnosis(self):
        bus = FakeBus()

        def boom(addr7, data, warmup=False):
            bus.log.append(("w", addr7, bytes(data), warmup))
            raise OSError(5, "Input/output error")
        bus.write = boom
        rep = run_pipeline(bus)
        self.assertEqual(rep.reached, "enter ISP")
        self.assertEqual(len(rep.results), 1)             # stops, does not spin

    def test_a_slice_of_the_pipeline_can_be_walked_alone(self):
        bus = FakeBus(reads=[b"\x1f\x40\x10"])
        rep = run_pipeline(bus, start=4, stop=5)
        self.assertEqual([r.step.name for r in rep.results], ["get flash type"])

    def test_the_flash_read_uses_the_shipped_page_size(self):
        bus = FakeBus(reads=[b"\x8a", b"\x00", b"\x1f\x40\x10", b"\xaa" * 32])
        rep = run_pipeline(bus, sleep=lambda ms: None)
        page = rep.results[6].reply
        self.assertEqual(len(page), min(32, Facts.SLAVES["isp_page_len"]))

    def test_the_pending_list_is_reported(self):
        bus = FakeBus()
        rep = run_pipeline(bus, sleep=lambda ms: None)
        self.assertEqual(rep.pending, [])                 # not reached yet
        rep2 = run_pipeline(FakeBus(reads=[b"\x8a"] * 8),
                            sleep=lambda ms: None)
        self.assertEqual(rep2.pending, [])       # 16p closed both forms


if __name__ == "__main__":
    unittest.main()
