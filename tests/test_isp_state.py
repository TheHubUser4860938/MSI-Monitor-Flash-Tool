"""ISP state machine + register framing against scripted FakeBus traffic.

Sleeps are neutralized (mock) — these pin SEQUENCE and FRAMING, not
latency; the live enter/exit walk-through lives in session logs (14k).
"""
import unittest
from unittest import mock

import msi_isp.isp as isp
from msi_isp import Facts
from msi_isp.isp import I2CTarget, ScalerBus, enter_isp, exit_isp, isp_alive
from tests.fakebus import FakeBus

_NOW = mock.patch.object(isp.time, "sleep", lambda s: None)


class TestEnter(unittest.TestCase):
    def setUp(self):
        _NOW.start()
        self.addCleanup(_NOW.stop)

    def test_already_in_isp_is_zero_write(self):
        bus = FakeBus(reads=[0x80])
        self.assertEqual(enter_isp(bus), (0, 0x80))
        self.assertEqual(bus.n_writes(Facts.ISP_HANDSHAKE_SLAVE7), 0)

    def test_third_candidate_wins_verbatim_table(self):
        # probe + 3 polls: only the third status read sets bit 0x80
        bus = FakeBus(reads=[0x00, 0x00, 0x00, 0x8A])
        idx, st = enter_isp(bus)
        self.assertEqual((idx, st), (2, 0x8A))
        wr = bus.writes_to(Facts.ISP_HANDSHAKE_SLAVE7)
        want = [bytes([c[m]]) for c in Facts.AUTOENTER_CANDIDATES[:3]
                for m in (0, 1)]                  # magic, companion, per cand
        self.assertEqual(wr, want)

    def test_exhaustion_raises(self):
        bus = FakeBus(reads=[0x00] * 99)
        with self.assertRaises(isp.IspError):
            enter_isp(bus, retries=1)
        # one full pass of every candidate: magic+companion each
        self.assertEqual(bus.n_writes(Facts.ISP_HANDSHAKE_SLAVE7),
                         2 * len(Facts.AUTOENTER_CANDIDATES))

    def test_only_candidate_restricted(self):
        bus = FakeBus(reads=[0x00, 0x8A])
        self.assertEqual(enter_isp(bus, only_candidate=4), (4, 0x8A))
        self.assertEqual(bus.writes_to(0x37),
                         [bytes([Facts.AUTOENTER_CANDIDATES[4][0]]),
                          bytes([Facts.AUTOENTER_CANDIDATES[4][1]])])


class TestExit(unittest.TestCase):
    def setUp(self):
        _NOW.start()
        self.addCleanup(_NOW.stop)

    def test_exit_command_and_verify(self):
        bus = FakeBus(reads=[0x00])               # post-exit status: clear
        self.assertTrue(exit_isp(bus))
        self.assertIn(bytes([Facts.EXIT_ISP_CMD]),
                      bus.writes_to(Facts.ISP_HANDSHAKE_SLAVE7))

    def test_exit_fails_if_bit_stays_set(self):
        self.assertFalse(exit_isp(FakeBus(reads=[0x8A])))

    def test_exit_swallows_bus_errors(self):
        class Dead(FakeBus):
            def write(self, *a, **k):
                raise OSError("bus gone")
        self.assertFalse(exit_isp(Dead()))


class TestScalerFraming(unittest.TestCase):
    def setUp(self):
        self.tgt = I2CTarget(name="isp-mcu", addr7=0x22)

    def test_eight_bit_forms_match_wire_convention(self):
        self.assertEqual((self.tgt.w, self.tgt.r), (0x44, 0x45))

    def test_word_write_is_reg16_plus_payload(self):
        bus = FakeBus()
        sc = ScalerBus(bus=bus)
        sc.word_write(self.tgt, 0x61, 0xAB)
        self.assertEqual(bus.writes_to(0x22), [bytes.fromhex("6100ab")])
        sc.word_write(self.tgt, 0x0102, b"\x03")   # reg is 16-bit LE
        self.assertEqual(bus.writes_to(0x22)[1], bytes.fromhex("020103"))

    def test_warmup_only_on_retarget(self):
        bus = FakeBus()
        sc = ScalerBus(bus=bus)
        sc.word_write(self.tgt, 0x60, 0)
        sc.word_write(self.tgt, 0x60, 0)           # same slave: no warmup
        self.assertEqual([w for k, _a, _d, w in bus.log if k == "w"],
                         [True, False])

    def test_word_read_shapes_request(self):
        bus = FakeBus(reads=[b"\x1f\x8d\x20"])     # JEDEC A25L032M identity
        sc = ScalerBus(bus=bus)
        self.assertEqual(sc.word_read(self.tgt, 0x64, 3),
                         bytes.fromhex("1f8d20"))
        self.assertEqual(bus.writes_to(0x22), [bytes.fromhex("6400")])

    def test_read_burst_pages_progress_and_callbacks(self):
        bus = FakeBus(reads=[0xAA])
        sc = ScalerBus(bus=bus)
        seen = []
        out = sc.read_burst(self.tgt, 0x123400, 100,
                            progress=lambda d, t: seen.append((d, t)))
        self.assertEqual(len(out), 100)
        self.assertEqual(seen, [(32, 100), (64, 100), (96, 100), (100, 100)])
        hdrs = [d for d in bus.writes_to(0x22)]
        self.assertEqual(hdrs, [bytes.fromhex("1200"), bytes.fromhex("1220"),
                                bytes.fromhex("1240"), bytes.fromhex("1260")])

    def test_isp_alive_bit_semantics(self):
        self.assertEqual(isp_alive(FakeBus(reads=[0x8A])), 0x8A)
        self.assertIsNone(isp_alive(FakeBus(reads=[0x0A])))
        self.assertIsNone(isp_alive(FakeBus(reads=[])))


class TestFlashPath(unittest.TestCase):
    def setUp(self):
        _NOW.start()
        self.addCleanup(_NOW.stop)

    class SilentSlave(FakeBus):
        def probe(self, addr7):
            self.log.append(("p", addr7))
            return False

    def test_already_isp_zero_write(self):
        bus = FakeBus(reads=[0x80])
        self.assertEqual(isp.flash_path_enter(bus), "")
        self.assertEqual(bus.n_writes(0x37), 0)

    def test_entry_failure_returns_reason_not_raises(self):
        bus = FakeBus(reads=[])
        reason = isp.flash_path_enter(bus)
        self.assertIn("ISP entry failed", reason)

    def test_silent_slave_reason_still_exits_isp(self):
        # cand0 magic wins immediately, but 0x20 stays silent: the scaler
        # must be left the way we found it -- exit 0x24 in the log.
        bus = self.SilentSlave(reads=[0x00, 0x8A])
        reason = isp.flash_path_enter(bus)
        self.assertIn("stays silent", reason)
        self.assertIn(bytes([Facts.EXIT_ISP_CMD]), bus.writes_to(0x37))

    def test_exit_hygiene_reports_edid(self):
        bus = FakeBus(reads=[0x00])             # post-exit status: clear
        exited, edid_ok = isp.flash_path_exit(bus)
        self.assertTrue(exited and edid_ok)


class TestJedec(unittest.TestCase):
    def setUp(self):
        self.tgt = I2CTarget(name="isp-flash", addr7=0x20)

    def test_window_grammar_first_hit(self):
        bus = FakeBus(reads=[b"\x1f\x8d\x20"])   # AMIC A25L032M JEDEC
        sb = ScalerBus(bus=bus)
        self.assertEqual(isp.jedec_id(sb, self.tgt), bytes.fromhex("1f8d20"))
        self.assertEqual(bus.writes_to(0x20)[:3],
                         [bytes.fromhex("42089f"),   # OPCODE <- 0x9F
                          bytes.fromhex("4108b8"),   # CTRL latch
                          bytes.fromhex("4108b9")])  # CTRL GO

    def test_index_grammar_fallback(self):
        bus = FakeBus(reads=[b"\x00\x00\x00",     # window grammar: dead
                             b"\xc8\x40\x16"])    # index grammar: GD25Q
        sb = ScalerBus(bus=bus)
        self.assertEqual(isp.jedec_id(sb, self.tgt), bytes.fromhex("c84016"))
        self.assertIn(bytes.fromhex("60009f"), bus.writes_to(0x20))

    def test_all_garbage_returns_none(self):
        sb = ScalerBus(bus=FakeBus(reads=[]))     # all-zero reads
        self.assertIsNone(isp.jedec_id(sb, self.tgt))


if __name__ == "__main__":
    unittest.main()
