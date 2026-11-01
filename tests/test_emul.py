"""The emulator: does the whole flash cycle run, and does the panel change?

These tests run the shipped pipeline and the shipped packet functions against
`msi_isp.emul.EmulatedMonitor` - a model of the bridge, the register file and
the SPI flash, seeded from the bytes 16t/16u/16v measured on the real panel.
A green test says our protocol model is self-consistent end to end; it does
not say the panel agrees (the cells are unproven, 16v).
"""
import pathlib
import typing
import unittest

from msi_isp import Facts, flashdat, pipeline
from msi_isp.emul import CMD_CE, CMD_PP, CMD_RDID, CMD_SE, EmulatedMonitor, SpiFlash
from msi_isp.isp import (
    I2CTarget,
    ScalerBus,
    enter_isp,
    exit_isp,
    flash_read_at,
    isp_write_packet,
    packet_bytes,
    program_page_at,
    sector_erase_at,
)

FW012 = pathlib.Path("vendor/MSI_MAG_341CQP_QD-OLED_X28_FW.012_4023.bin")


def nap(_ms):
    return None


class TestFlashModel(unittest.TestCase):
    """The part on its own: NOR semantics, the busy bit, the command set."""

    def setUp(self):
        self.f = SpiFlash()

    def test_fresh_silicon_is_erased(self):
        self.assertEqual(self.f.read(0, 4), b"\xff\xff\xff\xff")

    def test_program_andes_the_bytes(self):
        self.f.program(0, b"\x0f\xf0")
        self.assertEqual(self.f.read(0, 2), b"\x0f\xf0")
        self.f.program(0, b"\x00\xff")           # 1-bits do not un-set a cell
        self.assertEqual(self.f.read(0, 2), b"\x00\xf0")

    def test_the_sector_is_4k_and_the_page_256(self):
        self.assertEqual((self.f.sector, self.f.page), (4096, 256))
        self.f.program(0x100, b"\x00" * 8)
        self.f.erase_sector(0x100)
        self.assertEqual(self.f.read(0x100, 8), b"\xff" * 8)
        self.assertEqual(self.f.read(0x200, 1), b"\xff")   # same sector, cleared

    def test_the_busy_bit_settles_on_the_virtual_clock(self):
        self.f.erase_sector(0)
        self.assertTrue(self.f.busy)
        self.f.tick(31)
        self.assertFalse(self.f.busy)
        self.assertEqual(self.f.status & 1, 0)

    def test_two_banks_of_two_mebibytes(self):
        self.assertEqual((self.f.capacity, self.f.banks, self.f.bank_size),
                         (4 * 1024 * 1024, 2, 2 * 1024 * 1024))


class TestBridgePackets(unittest.TestCase):
    """The ladder's packet window: door 0x9C, the SUM, the trigger."""

    def setUp(self):
        self.m = EmulatedMonitor()

    def _send(self, pkt, bank=0):
        isp_write_packet(self.m, 0x9C, pkt, slave7=self.m.slave, bank=bank)

    def test_a_program_reaches_the_cells(self):
        self._send(packet_bytes(CMD_PP, 0x00, 0x40, b"\xaa\xbb\xcc\xdd"),
                   bank=1)
        self.assertEqual(self.m.flash_bank(1, 0x40, 4), b"\xaa\xbb\xcc\xdd")

    def test_the_sector_erase_clears_its_sector_only(self):
        self._send(packet_bytes(CMD_PP, 0x00, 0x00, b"\x11" * 8))
        self.m.flash.tick(5)
        sector_erase_at(self.m, 0, slave7=self.m.slave)
        self.m.flash.tick(40)
        self.assertEqual(self.m.flash_bank(0, 0, 8), b"\xff" * 8)

    def test_a_long_page_continues_the_open_program(self):
        """The 36-byte program is three 16-byte windows and only the first
        carries the packet header (16o). The bridge models the FIFO."""
        payload = bytes(range(32))
        n = program_page_at(self.m, 0x100, payload, slave7=self.m.slave, mode=0)
        self.m.flash.tick(5)
        self.assertEqual(n, 36)
        self.assertEqual(self.m.flash_bank(0, 0x100, 32), payload)
        # each window re-names the door 0x9C, and the payload is not an opcode
        self.assertEqual([op for op in self.m.bridge.log if op[0] == "cont"],
                         [("cont", 0x9C, 16), ("cont", 0x9C, 4)])
        # three window transactions, three flash programs, contiguous
        self.assertEqual([(op[1], op[2]) for op in self.m.flash.log],
                         [(0x100, 12), (0x10C, 16), (0x11C, 4)])

    def test_the_chip_erase_clears_everything(self):
        self._send(packet_bytes(CMD_PP, 0x12, 0x00, b"\x55" * 4))
        self.m.flash.tick(5)
        isp_write_packet(self.m, 0x9C, packet_bytes(CMD_CE, 0x00, 0x00),
                         slave7=self.m.slave)
        self.m.flash.tick(150)
        self.assertEqual(self.m.flash_bank(0, 0, 4), b"\xff" * 4)

    def test_a_bad_checksum_is_rejected_not_applied(self):
        pkt = packet_bytes(CMD_PP, 0x00, 0x80)[:3] + bytes([0x11])
        self._send(pkt)
        self.assertEqual(self.m.flash_bank(0, 0x80, 1), b"\xff")
        self.assertEqual(self.m.bridge.regs[0x9D], 0x15)   # the leaf's sum error

    def test_the_rdid_comes_from_the_flashdat_record(self):
        rec = flashdat.find("MX25L32XX")
        self.assertEqual(self.m.flash.jedec[0], rec.mfr_id)
        isp_write_packet(self.m, 0x9C, packet_bytes(CMD_RDID, 0, 0),
                         slave7=self.m.slave)
        self.assertEqual(self.m.read(self.m.slave, 3), rec.mfr_id.to_bytes(1, "big")
                         + bytes([rec.class_id, rec.capacity_code]))

    def test_the_bank_port_selects_the_2_mebibyte_half(self):
        isp_write_packet(self.m, 0x9C, packet_bytes(CMD_PP, 0x00, 0x10, b"\x77"),
                         slave7=self.m.slave, bank=1)
        self.assertEqual(self.m.bridge.bank, 1)
        self.assertEqual(self.m.flash_bank(1, 0x10, 1), b"\x77")
        self.assertEqual(self.m.flash_bank(0, 0x10, 1), b"\xff")


class TestReadPath(unittest.TestCase):
    """The read ladder, against the model - including its addressing shape.

    16k/16t measured one reply for modes 0, 1 and 2 at three addresses on the
    panel. The model explains the mechanism it can: mode 0 arms an 8-bit offset,
    modes 1 and 2 a 16-bit one, the high byte rides the page port 0xF2, and the
    width pair's bank bit (0xE7 / 0xEF, 16a) selects the 2 MiB half.
    """

    def setUp(self):
        self.m = EmulatedMonitor()
        self.m.flash.program(0x0034, b"\x11" * 4)                    # bank 0, low
        self.m.flash.program(0x1234, b"\xc0\xfe\xee\x12")                  # bank 0
        self.m.flash.program(0x200000 + 0x1234, b"\x5b\x5c\x5d\x5e")  # bank 1

    def test_mode_0_arms_an_8_bit_offset(self):
        d = flash_read_at(self.m, 0x1234, 4, slave7=self.m.slave, mode=0)
        self.assertEqual(d[:4], b"\x11" * 4)          # only 0x34 reached the wire

    def test_mode_1_arms_a_16_bit_offset_and_bank_1(self):
        """16a's width_values pair (0xE7, 0xEF) differs in exactly the bank bit,
        so the mode byte carries the bank on this board."""
        d = flash_read_at(self.m, 0x1234, 4, slave7=self.m.slave, mode=1)
        self.assertEqual(d[:4], b"\x5b\x5c\x5d\x5e")

    def test_the_page_port_aliases_every_64_kib(self):
        """The high byte rides 0xF2, so with page 0 an address above 64 KiB
        reads the low 64 KiB - the address-independence, mechanised."""
        self.m.flash.program(0x10000 + 0x1234, b"\x99" * 4)
        d = flash_read_at(self.m, 0x1234, 4, slave7=self.m.slave, mode=2)
        self.assertEqual(d[:4], b"\x5b\x5c\x5d\x5e")   # mode 2 is bank 1 too
        d0 = flash_read_at(self.m, 0x1234, 4, slave7=self.m.slave, mode=1)
        d1 = flash_read_at(self.m, 0x1234 + 0x10000, 4, slave7=self.m.slave,
                           mode=1)
        self.assertEqual(d0, d1)

    def test_the_burst_engine_seeks_on_a_24_bit_header(self):
        """The 0x20 slave takes read_burst's [hi, mid, lo] - all 24 bits, so
        this path does NOT alias (the contrast is the finding)."""
        sb = ScalerBus(self.m)
        d = sb.read_burst(I2CTarget("flash", 0x20), 0x1234, 4, page=32)
        self.assertEqual(d, b"\xc0\xfe\xee\x12")
        d2 = sb.read_burst(I2CTarget("flash", 0x20), 0x201234, 4, page=32)
        self.assertEqual(d2, b"\x5b\x5c\x5d\x5e")

    def test_the_mcu_window_is_one_byte_addressable_stream(self):
        sb = ScalerBus(self.m)
        tgt = I2CTarget("scaler", 0x22)
        self.assertEqual(sb.word_read(tgt, 0x0000, 8).hex(" "),
                         "12 14 c4 83 01 00 01 c0")          # 16u's head block
        self.assertEqual(sb.word_read(tgt, 0x0002, 4), bytes.fromhex("c4830100"))

    def test_the_transaction_block_is_the_measured_bytes(self):
        sb = ScalerBus(self.m)
        d = sb.word_read(I2CTarget("scaler", 0x22), 0x0100, 8)
        self.assertEqual(d.hex(" "), "00 84 00 02 02 02 02 00")
        self.assertEqual(d[7], 0x00)          # 16v: the latch reads 0x00 now


class TestHandshake(unittest.TestCase):
    def test_enter_isp_succeeds_on_the_idempotent_probe(self):
        """16e: the probe is a bare read, and 0x8a answers in NORMAL mode too
        (16q's sticky ring), so the vendor's entry costs zero writes here."""
        m = EmulatedMonitor()
        idx, status = enter_isp(m)
        self.assertEqual(status, 0x8a)                      # measured 16e
        self.assertEqual(idx, 0)
        self.assertFalse(m.bridge.isp_mode)   # the probe wrote nothing

    def test_a_magic_byte_sets_the_mode(self):
        m = EmulatedMonitor()
        m.write(m.slave, bytes([Facts.AUTOENTER_CANDIDATES[5][0]]))
        self.assertTrue(m.bridge.isp_mode)
        self.assertEqual(m.read(m.slave, 1), b"\x8a")

    def test_exit_isp_flips_the_mode_and_the_bool_is_an_artifact(self):
        """The 0x24 write leaves ISP mode in the model. exit_isp()'s bool is
        unreliable on THIS panel because the status byte is a sticky ring byte
        (16q/16v) - 0x8a in normal mode as well - so the model says False and
        the mode flag is the truth."""
        m = EmulatedMonitor()
        enter_isp(m)
        self.assertFalse(exit_isp(m))
        self.assertFalse(m.bridge.isp_mode)


class TestWholePipeline(unittest.TestCase):
    """The vendor's 8 steps, start to finish, on the model."""

    def setUp(self):
        self.m = EmulatedMonitor(image=FW012.read_bytes()
                                 if FW012.exists() else b"\x01" * 4096)
        self.rep = pipeline.run_pipeline(self.m, addr=0, size=32, sleep=nap)

    def test_every_step_answers(self):
        self.assertIsNone(self.rep.reached,
                          f"stalled at {self.rep.reached}")
        self.assertEqual(len(self.rep.results), len(pipeline.PIPELINE))

    def test_the_two_packet_steps_were_sent(self):
        sent = [r.reply for r in self.rep.results if r.step.op == "packet"]
        self.assertEqual(len(sent), 2)
        self.assertEqual(sent[0][0], 0x45)      # control plane (16a)

    def test_the_read_step_returned_a_page(self):
        step = next(r for r in self.rep.results
                    if r.step.name == "read flash page")
        self.assertEqual(len(step.reply), 32)

    def test_the_pipeline_took_no_wall_clock(self):
        # injectable sleep (run_pipeline's `sleep=`) means 200 ms costs nothing
        self.assertGreater(self.m.ops, 20)


class TestFirmwareCycle(unittest.TestCase):
    """The thing the owner asked for: flash a new version, reset, read it back."""

    def test_program_the_inactive_bank_switch_and_the_version_changes(self):
        if not FW012.exists():
            self.skipTest(f"{FW012} not present")
        img = FW012.read_bytes()
        m = EmulatedMonitor(image=b"\xff" * len(img))   # blank bank 0
        # 1. the vendor's read pipeline runs on the blank part
        enter_isp(m)
        # 2. erase, then program the record block where the INI says it lives
        isp_write_packet(m, 0x9C, packet_bytes(CMD_SE, 0x00, 0x00),
                         slave7=m.slave, mode=0)
        m.flash.tick(40)
        # mode 0 -> bank port 0xE7 -> bank 0; mode 1 -> 0xEF -> bank 1 (16a)
        n = program_page_at(m, 0xF800, img[0xF800:0xF800 + 32], slave7=m.slave,
                            mode=0)
        self.assertEqual(n, 32 + 4)
        self.assertEqual(m.flash_bank(0, 0xF800, 3), b"012")
        self.assertEqual(m.version, "012")
        # 3. the dual-bank path: program the INACTIVE bank, then switch.
        # mode 1 -> bank port 0xEF -> the upper 2 MiB (16a's width pair).
        n = program_page_at(m, 0xF800, img[0xF800:0xF800 + 32], slave7=m.slave,
                            bank=1)
        m.flash.tick(5)
        self.assertEqual(m.flash_bank(1, 0xF800, 3), b"012")
        self.assertEqual(m.version, "012")            # still bank 0 active
        m.reset()
        self.assertEqual(m.active_bank, 1)
        self.assertEqual(m.version, "012")
        # 4. the ring is sticky (16q/16v): a bare read after a windowed read
        # answers from the last port, and the handshake byte returns when a
        # magic byte is written - which is the shape the panel shows.
        self.assertNotEqual(m.read(m.slave, 1), b"\x8a")
        m.write(m.slave, bytes([Facts.AUTOENTER_CANDIDATES[0][0]]))
        self.assertEqual(m.read(m.slave, 1), b"\x8a")

    def test_a_missed_erase_shows_as_anded_cells(self):
        m = EmulatedMonitor(image=bytes([0x0f] * 64))
        program_page_at(m, 0, bytes([0x00, 0xff] * 16), slave7=m.slave)
        self.assertEqual(m.flash_bank(0, 0, 4), bytes([0x00, 0x0f, 0x00, 0x0f]))

    def test_the_timing_contract_is_exercised_not_sleeping(self):
        m = EmulatedMonitor()
        t0 = m.flash.clock_ms
        isp_write_packet(m, 0x9C, packet_bytes(CMD_PP, 0x00, 0x00, b"\x5a" * 8),
                         slave7=m.slave)
        self.assertGreater(m.flash.clock_ms, t0)   # every op advances the clock


class TestWritePipeline(unittest.TestCase):
    """PIPELINE_WRITE: the vendor's flash chain, transcribed from FUN_10034120."""

    NAMES: typing.ClassVar = ["enter ISP", "settle", "get flash type", "chip identity",
             "erase sector", "program page", "verify", "write ROM flag",
             "leave ISP"]

    def test_the_chain_is_the_decompiled_order(self):
        self.assertEqual([s.name for s in pipeline.PIPELINE_WRITE], self.NAMES)

    def test_every_step_cites_its_evidence(self):
        for st in pipeline.PIPELINE_WRITE:
            self.assertTrue(any(tag in st.why for tag in ("16y", "16a", "14p")),
                            st.name)

    def test_the_rom_flag_step_is_the_bank_switch(self):
        flag = next(s for s in pipeline.PIPELINE_WRITE
                    if s.name == "write ROM flag")
        self.assertIn("Write Rom Flag Fail", flag.why)
        self.assertIn("bSwitchFLag", flag.why)

    def test_the_reset_is_its_own_export_not_a_step(self):
        self.assertNotIn("reset MCU", [s.name for s in pipeline.PIPELINE_WRITE])
        self.assertIn("ResetMCUExport", pipeline.RESET_STEP.why)
        self.assertEqual(pipeline.RESET_STEP.ms, 10_000)

    def test_the_write_chain_runs_on_the_emulator(self):
        if not FW012.exists():
            self.skipTest(f"{FW012} not present")
        m = EmulatedMonitor(image=b"\xff" * FW012.stat().st_size)
        rep = pipeline.run_pipeline(m, addr=0xF800, sleep=nap,
                                    steps=pipeline.PIPELINE_WRITE,
                                    image=FW012.read_bytes())
        self.assertIsNone(rep.reached, f"stalled at {rep.reached}")
        self.assertEqual(len(rep.results), len(pipeline.PIPELINE_WRITE))
        self.assertEqual(m.flash_bank(0, 0xF800, 3), b"012")
        self.assertEqual(m.version, "012")

    def test_the_same_chain_ran_on_the_panel(self):
        w = Facts.WRITE_CHAIN_LIVE_16Z
        self.assertIn("9/9 steps answered", w["result"])
        self.assertIn("0xF2 <- 0x20", w["on_the_wire"])

    def test_the_erase_plan_counts_from_the_image(self):
        plan = pipeline.erase_plan(1_835_008)                 # FW.012
        self.assertEqual(plan["sector_count"], 448)           # 4 KiB sectors
        self.assertEqual(plan["pro_len"], 57_344)             # pages of 32
        self.assertEqual(pipeline.erase_plan(4096)["sector_count"], 1)


class TestHonestLimits(unittest.TestCase):
    """What the emulator does NOT claim."""

    def test_the_packet_needs_the_page_port_for_the_top_bits(self):
        """16w: the packet header is (control, addr>>8, addr&0xff) - bits 22-16
        ride the page port 0xF2, exactly as the read ladder does (16k)."""
        m = EmulatedMonitor()
        isp_write_packet(m, 0x9C, packet_bytes(CMD_PP, 0x00, 0x20, b"\xa5"),
                         slave7=m.slave, page=0)
        self.assertEqual(m.flash_bank(0, 0x20, 1), b"\xa5")
        self.assertEqual(m.flash_bank(0, 0x10020, 1), b"\xff")
        isp_write_packet(m, 0x9C, packet_bytes(CMD_PP, 0x00, 0x20, b"\x5c"),
                         slave7=m.slave, page=1)          # 64 KiB up
        self.assertEqual(m.flash_bank(0, 0x10020, 1), b"\x5c")

    def test_the_model_knows_fifteen_four_mebibyte_parts(self):
        parts = Facts.FLASHDAT_FORMAT_16W["four_mib_parts"].split()
        self.assertEqual(len(parts), 15)
        for p in parts:
            self.assertEqual(flashdat.find(p).capacity_bytes, 4 * 1024 * 1024)

    def test_an_unmodelled_slave_is_an_error_not_a_zero(self):
        m = EmulatedMonitor()
        with self.assertRaises(Exception):
            m.read(0x50, 4)


if __name__ == "__main__":
    unittest.main()
