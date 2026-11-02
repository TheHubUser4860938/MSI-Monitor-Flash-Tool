"""Model cards: the vendor's INI as data, so a second monitor is a file."""
import pathlib
import unittest

from msi_isp import Facts, models
from msi_isp.models import MODELS, X28, ModelCard, from_ini, lookup, replace

LIVE_INI = pathlib.Path(
    "/home/eugene/Games/Heroic/Prefixes/MSI firmware updater tool/drive_c/"
    "users/steamuser/AppData/Local/Temp/ISPToolForMsi/IspSetting.ini")


class TestX28Card(unittest.TestCase):
    """Every field here is a measurement, not a preference."""

    def test_the_record_offsets_are_where_fw012_keeps_them(self):
        self.assertEqual((X28.version_addr, X28.version_len), (0xF800, 3))
        self.assertEqual(X28.model_pos, 0xF806)

    def test_the_gate_checks_the_model_and_checksum_not_the_version(self):
        self.assertTrue(X28.check_model)
        self.assertTrue(X28.check_checksum)
        self.assertFalse(X28.check_version)     # why FW.009 hardware takes FW.012

    def test_the_transport_is_the_measured_one(self):
        self.assertEqual(X28.slave7, 0x37)      # the INI's 0x6F (16c)
        self.assertEqual(X28.page, 32)          # AUX_I2CPageLen == GetI2CPageLength
        self.assertEqual(X28.device_type, 8)    # IspFlash's branch (16z)

    def test_the_timing_is_the_ini_contract(self):
        self.assertEqual((X28.after_command_ms, X28.retry_count), (200, 10))
        self.assertEqual((X28.after_reset_ms, X28.after_ddcci_ms), (10000, 3000))

    def test_the_version_command_is_the_frame_we_measured(self):
        self.assertEqual(X28.version_cmd,
                         (0x6E, 0x51, 0x84, 0x01, 0xFE, 0xE1, 0xE6))
        self.assertEqual(X28.version_index, 6)  # the string sits at raw index 6

    def test_the_inactive_bank_starts_at_2_mebibytes(self):
        self.assertEqual(X28.bank_size, 2 * 1024 * 1024)
        self.assertEqual(X28.inactive_base, 0x200000)

    def test_the_panel_name_is_the_qd_oled(self):
        self.assertEqual(X28.panel, "TPO340QH1-")


class TestIniRoundTrip(unittest.TestCase):
    def test_a_card_writes_an_ini_that_reads_back(self):
        text = X28.ini_text()
        self.assertIn("[ISP_DualBank]", text)
        back = from_ini(text)
        for f in ("version_addr", "model_pos", "page", "after_command_ms",
                  "retry_count", "after_reset_ms", "switch_flag", "isp_mode",
                  "check_model", "check_version", "version_cmd"):
            self.assertEqual(getattr(back, f), getattr(X28, f), f)

    def test_the_ini_keeps_the_vendors_key_names(self):
        text = X28.ini_text()
        for key in ("BinVersionAddress", "ulModelNamePosInBin",
                    "ulTimeAfterCommand", "AUX_I2CPageLen", "bSwitchFLag",
                    "strVersionDdcciCmd"):
            self.assertIn(key, text, key)

    def test_a_different_card_is_just_numbers(self):
        """The point of the card: a second model is data."""
        other = ModelCard(model="MPG 274QRD X24", panel="QM270T1",
                          scaler="RTD2733", device_type=0x1a, slave7=0x37,
                          page=64, banks=2, capacity_bytes=8 * 1024 * 1024,
                          version_addr=0x1F800, model_pos=0x1F806)
        self.assertEqual(other.bank_size, 4 * 1024 * 1024)
        self.assertEqual(other.inactive_base, 0x400000)
        back = from_ini(other.ini_text(), model=other.model)
        self.assertEqual((back.model, back.page, back.version_addr),
                         ("MPG 274QRD X24", 64, 0x1F800))

    def test_the_live_ini_parses_into_the_x28_card(self):
        if not LIVE_INI.exists():
            self.skipTest("the Wine prefix is not on this box")
        card = models.from_ini_file(str(LIVE_INI))
        self.assertEqual(card.model, "MAG 341CQ X28")     # from IspUserDefined
        self.assertEqual(card.version_addr, 0xF800)
        self.assertEqual(card.page, 32)
        self.assertEqual(card.after_command_ms, 200)


class TestRegistry(unittest.TestCase):
    def test_the_marketing_name_resolves_to_the_same_card(self):
        self.assertIs(lookup("MAG 341CQP QD-OLED X28"), X28)

    def test_the_edid_padding_is_tolerated(self):
        self.assertIs(lookup("MAG 341CQ X28\x00\x00  "), X28)

    def test_an_unknown_model_is_a_key_error_not_a_silent_default(self):
        with self.assertRaises(KeyError):
            lookup("MAG 251RX")

    def test_both_registry_names_are_the_same_contract(self):
        a = lookup("MAG 341CQ X28")
        b = lookup("MAG 341CQP QD-OLED X28")
        self.assertEqual(a, b)

    def test_the_contract_key_ignores_the_names(self):
        other = replace(X28, model="SOME OTHER NAME", panel="", scaler="RTD2733")
        self.assertEqual(other.contract, X28.contract)
        self.assertNotEqual(replace(X28, page=64).contract, X28.contract)

    def test_a_vendor_ini_agrees_with_the_built_in_contract(self):
        if not LIVE_INI.exists():
            self.skipTest("the Wine prefix is not on this box")
        card = models.from_ini_file(str(LIVE_INI))
        self.assertEqual(card.contract, X28.contract)

    def test_the_registry_is_a_dict_of_cards(self):
        self.assertTrue(MODELS)
        for card in MODELS.values():
            self.assertIsInstance(card, ModelCard)


class TestCardReadsABin(unittest.TestCase):
    """The card's offsets are how the vendor reads an image - and they work on
    a model whose name the 'MAG ' mark search cannot find."""

    BIN = pathlib.Path("vendor/MSI_MAG_341CQP_QD-OLED_X28_FW.012_4023.bin")

    def test_the_card_method_agrees_with_the_mark_method_on_the_x28(self):
        if not self.BIN.exists():
            self.skipTest("no bin on this box")
        from msi_isp import record
        data = self.BIN.read_bytes()
        a = record.parse_bin_record(data)
        b = record.parse_bin_record_at(data, X28)
        self.assertEqual((a.model, a.panel, a.code), (b.model, b.panel, b.code))

    def test_the_card_method_reaches_the_version_the_mark_method_misses(self):
        if not self.BIN.exists():
            self.skipTest("no bin on this box")
        from msi_isp import record
        b = record.parse_bin_record_at(self.BIN.read_bytes(), X28)
        self.assertEqual(b.version, "FW.012")

    def test_an_mpg_image_needs_the_card_not_the_mark(self):
        from msi_isp import record
        img = bytearray(b"\xff" * 0x20000)
        img[0x1F800:0x1F803] = b"021"
        img[0x1F806:0x1F814] = b"MPG 274QRD"
        card = ModelCard(model="MPG 274QRD X24", scaler="",
                         version_addr=0x1F800, model_pos=0x1F806)
        rec = record.parse_bin_record_at(bytes(img), card)
        self.assertEqual((rec.model, rec.version), ("MPG 274QRD", "FW.021"))
        with self.assertRaises(ValueError):
            record.parse_bin_record(bytes(img))       # no 'MAG ' run to find


class TestFlashPath(unittest.TestCase):
    """16ab: the device type selects the protocol, and that is card data."""

    def test_type_8_is_the_spi_chain(self):
        self.assertEqual(X28.flash_path, "spi")

    def test_type_1a_is_the_background_protocol(self):
        self.assertEqual(replace(X28, device_type=0x1a).flash_path, "background")

    def test_type_1b_is_the_foreground_path(self):
        self.assertEqual(replace(X28, device_type=0x1b).flash_path, "foreground")

    def test_the_device_type_is_part_of_the_contract(self):
        self.assertNotEqual(replace(X28, device_type=0x1a).contract,
                            X28.contract)

    def test_the_copy_wait_is_the_inis_bank_copy_timeout(self):
        self.assertEqual(X28.copy_wait_ms, 8000)
        self.assertIn("ulTimeWaitCopyBank = 8000", X28.ini_text())


class TestBackgroundPipeline(unittest.TestCase):
    """16ab: the seven-step background chain, as data."""

    def test_the_chain_has_the_vendors_seven_steps(self):
        import msi_isp.pipeline as pl
        self.assertEqual([s.name for s in pl.PIPELINE_BACKGROUND],
                         ["enter background mode", "verify project id",
                          "background start", "set packet length",
                          "write data", "background finish", "background exit"])

    def test_the_enter_step_writes_the_w1_command(self):
        import msi_isp.pipeline as pl
        st = pl.PIPELINE_BACKGROUND[0]
        self.assertEqual(st.payload[:3], b'qw1')   # VCP 0x71, then 'w1'
        self.assertIn("0x6E", st.why)

    def test_the_undecoded_steps_are_marked_not_guessed(self):
        import msi_isp.pipeline as pl
        pending = [s.name for s in pl.PIPELINE_BACKGROUND if s.pending]
        self.assertEqual(pending, ["verify project id", "set packet length",
                                   "background finish", "background exit"])

    def test_the_fact_names_the_polling_helper(self):
        self.assertIn("FUN_1002aa00", Facts.BACKGROUND_PROTOCOL_16AB["poll"])

    def test_the_fact_records_the_naming_layer_caveat(self):
        self.assertIn("labels on the",
                      Facts.BACKGROUND_PROTOCOL_16AB["naming_note"])


class TestRecordAddress(unittest.TestCase):
    """16ac: the card gives the page offset; the block belongs to the image."""

    def test_block_0_is_the_inis_address(self):
        self.assertEqual(X28.record_addr(0), 0xF800)

    def test_a_block_2_record_is_the_fw009_shape(self):
        self.assertEqual(X28.record_addr(2), 0x2F800)

    def test_the_page_offset_survives_the_block(self):
        for blk in (0, 1, 5, 31):
            self.assertEqual(X28.record_addr(blk) & 0xFFFF, X28.version_addr)


class TestCardForPanel(unittest.TestCase):
    def test_no_bus_gives_the_default_card(self):
        self.assertIs(models.card_for_panel(), X28)

    def test_a_panel_that_answers_names_its_own_card(self):
        import msi_isp.record as record
        from msi_isp.emul import EmulatedMonitor
        from msi_isp.record import Record

        orig = record.read_panel_record
        record.read_panel_record = lambda bus, **kw: Record(
            model="MAG 341CQ X28", panel="TPO340QH1-", version="FW.009")
        try:
            self.assertIs(models.card_for_panel(EmulatedMonitor()), X28)
        finally:
            record.read_panel_record = orig

    def test_a_panel_we_have_no_card_for_falls_back(self):
        import msi_isp.record as record
        orig = record.read_panel_record
        record.read_panel_record = lambda bus, **kw: None
        try:
            self.assertIs(models.card_for_panel(object()), X28)
        finally:
            record.read_panel_record = orig


if __name__ == "__main__":
    unittest.main()
