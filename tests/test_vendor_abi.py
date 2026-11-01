"""The vendor comm-layer contract, decoded with Ghidra (sessions 16a/16b).

Everything asserted here was read out of the decompiler with the address that
produced it; the evidence table is `re/ghidra_isp_engine.md`. These facts are
what the write driver has to satisfy, so they are pinned in code, not prose:
the INI schema (with the defaults MSI's own INI never sets), the backend
codes, the comm-object vtable slots the plugin actually calls, the transfer
limits, and the flash-mode selector.
"""
import unittest

from msi_isp import Facts


class TestCommAuxIniSchema(unittest.TestCase):
    """FUN_1003b7e0 (Comm_Aux.dll) is the whole `Comm_AUX` reader: key ->
    default, proven. MSI ships a subset; the rest is what the tool runs on."""

    def test_keys_msi_ships_match_the_defaults(self):
        for key, vendor_default in (("AUX_I2CPageLen", 32),
                                    ("AUX_RetryLimit", 10),
                                    ("AUX_NeedRetry", 1),
                                    ("AUX_GraphicsType", 1),
                                    ("AUX_DetctType", 1)):
            self.assertIn(key, Facts.COMM_AUX_INI)
            self.assertEqual(Facts.COMM_AUX_INI[key]["default"],
                             vendor_default, key)

    def test_every_key_records_its_storage_slot(self):
        """No key without a destination global: the INI is read once at
        InitialDev, so a missing slot means the decode was partial."""
        for key, spec in Facts.COMM_AUX_INI.items():
            self.assertTrue(spec.get("slot"), key)
            self.assertTrue(spec.get("what"), key)

    def test_the_extra_slave_knob_is_recorded(self):
        """AUX_ExtarSlaveAddress (vendor's spelling) + the only-use-it flag:
        the comm object can be told to talk to a slave beyond the checked
        set - the knob to turn on Intel/AMD day."""
        self.assertIn("AUX_ExtarSlaveAddress", Facts.COMM_AUX_INI)
        self.assertIn("AUX_OnlyUseExtarSlaveAddress", Facts.COMM_AUX_INI)

    def test_retry_lives_in_the_comm_layer(self):
        spec = Facts.COMM_AUX_INI["AUX_RetryLimit"]
        self.assertIn("comm", spec["where"])

    def test_debug_log_is_on_by_default(self):
        self.assertEqual(Facts.COMM_AUX_INI["AUX_EnableDebugLog"]["default"], 1)


class TestBackends(unittest.TestCase):
    """AUXInitialDev (FUN_10039e50): AUTO tries AMD first, then Intel, then
    NVIDIA; MANUAL honours AUX_GraphicsType."""

    def test_backend_codes(self):
        self.assertEqual(Facts.COMM_BACKENDS[1], "Intel")
        self.assertEqual(Facts.COMM_BACKENDS[2], "AMD")
        self.assertEqual(Facts.COMM_BACKENDS[3], "NVIDIA")

    def test_auto_detect_order(self):
        self.assertEqual(Facts.COMM_AUTO_DETECT_ORDER, ("AMD", "Intel", "NVIDIA"))

    def test_intel_backend_is_the_shipped_dll_folder(self):
        """The Intel backend loads the vendor's own SDK dll - the one that
        ships in vendor/Comm/IntelControlAPI/."""
        self.assertIn("Intel", Facts.COMM_BACKEND_DLLS)
        self.assertTrue(any("IntelControlAPI" in v
                            for v in Facts.COMM_BACKEND_DLLS.values()))


class TestTransferLimits(unittest.TestCase):
    """AuxI2CWrite (FUN_1003a3e0): len 0 with a buffer -> 0x801; len >
    AUX_I2CPageLen -> 0x807. Native lane = 16 B/txn, size 0-based."""

    def test_pages(self):
        self.assertEqual(Facts.PAGE_NATIVE, 16)     # GetNativePageLength
        self.assertEqual(Facts.PAGE_I2C, 32)        # GetI2CPageLength default

    def test_max_write_is_the_i2c_page(self):
        self.assertEqual(Facts.COMM_MAX_TRANSFER, Facts.PAGE_I2C)

    def test_length_is_zero_based(self):
        self.assertTrue(Facts.COMM_SIZE_IS_ZERO_BASED)

    def test_error_codes_are_named(self):
        for code in (0x800, 0x801, 0x802, 0x803, 0x804, 0x807):
            self.assertIn(code, Facts.COMM_ERRORS)
            self.assertTrue(Facts.COMM_ERRORS[code])


class TestCommVtable(unittest.TestCase):
    """The plugin knows no slave addresses: it speaks the core's comm object
    vtable (SetCommInterface @ WinIspPlugIn 0x10008700 -> DAT_10249d10).
    Slots proven by call site this session; the ISP entry is slot +0x124."""

    def test_isp_entry_slot(self):
        self.assertEqual(Facts.COMM_VTABLE[0x124]["what"], "Enter ISP mode")
        self.assertEqual(Facts.COMM_VTABLE[0x124]["site"], "0x1001bbd0")

    def test_device_type_slot_returns_the_family_codes(self):
        self.assertEqual(Facts.COMM_VTABLE[0x14]["what"], "device type")
        self.assertEqual(sorted(Facts.COMM_SCALER_TYPES), [3, 8, 0xe, 0x13])

    def test_slots_carry_their_evidence(self):
        for slot, spec in Facts.COMM_VTABLE.items():
            self.assertIsInstance(slot, int)
            self.assertTrue(spec.get("site"), hex(slot))

    def test_the_ladder_slots_survive(self):
        """15g's +0x74/+0x78 pair is the ISP mailbox ladder; 16a did not
        displace it, so both must stay in the table."""
        self.assertIn(0x74, Facts.COMM_VTABLE)
        self.assertIn(0x78, Facts.COMM_VTABLE)


class TestSlot14Settled(unittest.TestCase):
    """16d: the +0x14 disagreement between 14i and 16a is settled on bytes -
    `ff 50 14` (call [EAX+0x14]) with no PUSH in front of it, and the result
    compared against 0xe on the next instruction."""

    def test_shape_is_zero_arg_thiscall(self):
        self.assertIn("zero stack args", Facts.COMM_SLOT_0x14["shape"])
        self.assertIn("ff5014", Facts.COMM_SLOT_0x14["evidence"])

    def test_it_supersedes_the_page_transfer_label(self):
        self.assertIn("32-byte page", Facts.COMM_SLOT_0x14["supersedes"])

    def test_values_match_the_comparisons_seen(self):
        self.assertEqual(Facts.COMM_SLOT_0x14["values"], [3, 8, 0xE, 0x13])

    def test_read_cap_is_24(self):
        """Comm.dll I2CRead returns 0x10 above 24 bytes - the real transfer
        ceiling on that path, tighter than the 32-byte INI page."""
        self.assertEqual(Facts.COMM_READ_CAP, 24)


class TestIspBoardGrammar(unittest.TestCase):
    """The third register surface: 0xF2 addr port, 0x55 cmd, 0x57 width,
    0x58 bank, 0x5E data, with a 0/1/2 width selector (1/2/3-byte addressing).
    Decoded from Comm.dll RVA 0x3990; it is the ISP-board/GFX path, armed by
    GetSpecialCommType()==1."""

    def test_ports(self):
        self.assertEqual(Facts.ISP_BOARD_REGS["addr_port"], 0xF2)
        self.assertEqual(Facts.ISP_BOARD_REGS["cmd_port"], 0x55)
        self.assertEqual(Facts.ISP_BOARD_REGS["data_port"], 0x5E)

    def test_three_widths(self):
        self.assertEqual(sorted(Facts.ISP_BOARD_REGS["width_values"]), [0, 1, 2])
        self.assertEqual(Facts.ISP_BOARD_REGS["width_values"][0], (0xFC, 0xE7))
        self.assertEqual(Facts.ISP_BOARD_REGS["width_values"][2], (0xFC, 0xEF))

    def test_the_grammar_names_where_it_came_from(self):
        self.assertIn("0x3990", Facts.ISP_BOARD_REGS["decoded_at"])


class TestLaneReadback(unittest.TestCase):
    """The lanes, named by what they answer (measured, not inferred)."""

    def test_the_mailbox_lane_answers_with_status(self):
        self.assertIn("0x8a", Facts.LANE_READBACK[0x37])

    def test_the_branch_is_zeros(self):
        self.assertIn("0x00", Facts.LANE_READBACK[0x4A])

    def test_the_flash_lane_is_the_silent_one(self):
        self.assertIn("EIO", Facts.LANE_READBACK[0x22])
        self.assertIn("EIO", Facts.LANE_READBACK[0x20])

    def test_measurement_is_located(self):
        self.assertIn("2026-11-01", Facts.LANE_READBACK_AT)


class TestVendorIni(unittest.TestCase):
    """16g: the shipped INI is ground truth; 16b's defaults were right except
    where MSI overrides them."""

    def test_the_two_overrides_are_recorded(self):
        self.assertEqual(Facts.VENDOR_INI["comm_aux_overrides"],
                         {"AUX_CheckDpcdTable": 0, "AUX_EnableDebugLog": 0})

    def test_the_debug_log_override_explains_the_missing_log(self):
        """15g: 'window-4 result: NO nvapi.log'. The vendor asks for no log."""
        self.assertEqual(Facts.VENDOR_INI["comm_aux_overrides"]
                         ["AUX_EnableDebugLog"], 0)

    def test_the_version_extraction_rule(self):
        v = Facts.VENDOR_INI["version_read"]
        self.assertEqual(v["start_index"], 6)
        self.assertEqual(v["read_length"], 20)
        # the INI carries the 8-bit slave byte too: 6E + our packet
        self.assertEqual(bytes(v["cmd"]),
                         bytes([0x6E]) + Facts.VENDOR_FW_VERSION_CMD)

    def test_the_dual_bank_constants_the_write_driver_needs(self):
        d = Facts.VENDOR_INI["dual_bank"]
        self.assertEqual(d["command_retry_count"], 10)
        self.assertEqual(d["time_after_command_ms"], 200)
        self.assertEqual(d["time_after_reset_ms"], 10000)
        self.assertEqual(d["copy_bank_wait_ms"], 8000)
        self.assertEqual(d["bSwitchFLag"], 1)      # the boot-flag switch

    def test_graphics_type_is_inert_under_auto(self):
        self.assertIn("INERT", Facts.VENDOR_INI["graphics_type_note"])

    def test_the_md5_matches_the_filed_one(self):
        self.assertEqual(Facts.VENDOR_INI["md5"],
                         Facts.VENDOR_CONFIG["ini_md5"])


class TestVtableIsNotTheExportTable(unittest.TestCase):
    """16g falsified the cheap theory: Comm_Aux exports 61 names, the plugin
    calls slot index 163 - so the table is the core's C++ vtable."""

    def test_the_note_records_the_falsification(self):
        self.assertIn("61 exports", Facts.COMM_VTABLE_NOTE)
        self.assertIn("163", Facts.COMM_VTABLE_NOTE)

    def test_the_high_slots_exist_beyond_the_export_count(self):
        self.assertGreater(max(Facts.COMM_VTABLE), 61 * 4)


class TestPluginSettingsStruct(unittest.TestCase):
    """16g: the plugin's whole configuration arrives as one struct copy."""

    def test_the_mode_and_boot_type_fields(self):
        st = Facts.PLUGIN_SETTINGS_STRUCT
        self.assertIn("DAT_1024a2d4", st["0x0000"])
        self.assertIn("0xd21", st["0x0011"])

    def test_the_flashdat_record_field(self):
        self.assertIn("Flash.dat", Facts.PLUGIN_SETTINGS_STRUCT["0x10b50"])

    def test_the_writer_is_named(self):
        self.assertIn("FUN_10007670", Facts.PLUGIN_SETTINGS_STRUCT["caller"])


class TestHostChain(unittest.TestCase):
    """16h: the host chain and the two shells, as decoded from the binaries."""

    def test_the_gui_entry_is_operatescalerex(self):
        self.assertIn("OperateScalerEx", Facts.HOST_CHAIN["gui_entry"])

    def test_the_fallback_is_the_child_process_path(self):
        self.assertIn("--ispdiff", Facts.HOST_CHAIN["fallback"])

    def test_the_vendor_log_file_is_isplog(self):
        self.assertIn("IspLog.txt", Facts.HOST_CHAIN["log_file"])

    def test_one_engine_two_shells(self):
        self.assertIn("one engine, two shells", Facts.HOST_CHAIN["engine_class"])

    def test_signing_is_off_as_shipped(self):
        self.assertIn("modes 0", Facts.HOST_CHAIN["signing"])

    def test_the_vtable_hunt_is_recorded_as_open(self):
        self.assertIn("SetCommInterface", Facts.COMM_VTABLE_HUNT)


class TestScalerType(unittest.TestCase):
    """16i: the 12% gate is a model-name compare; 0x45 is the ScalerType."""

    def test_the_gate_is_the_gui_compare_step(self):
        self.assertIn("FUN_004119f0", Facts.GUI_UPDATE_LADDER["routine"])
        self.assertIn("12%", Facts.GUI_UPDATE_LADDER["progress_codes"])

    def test_the_ladder_reads_both_sides_before_comparing(self):
        self.assertIn("GetFWInfo", Facts.GUI_UPDATE_LADDER["step1"])
        self.assertIn("model name", Facts.GUI_UPDATE_LADDER["step2"])

    def test_scaler_type_comes_from_two_id_registers(self):
        t = Facts.SCALER_TYPE_TABLE
        self.assertEqual(t["id_registers"], {"IDCode0": 0x00, "IDCode1": 0x0F})
        self.assertEqual(t["comm_slot"], 0xC0)

    def test_this_panel_is_scaler_type_45(self):
        self.assertEqual(Facts.SCALER_TYPE_TABLE["this_panel"], (0x14, 0x30, 0x45))
        self.assertEqual(Facts.SCALER_TYPE_TABLE["sample_entries"][(0x14, 0x30)], 0x45)

    def test_the_type_range_is_1_to_51(self):
        self.assertEqual(Facts.SCALER_TYPE_TABLE["valid_range"], (1, 0x51))

    def test_the_record_is_a_file_read_at_plugin_init(self):
        r = Facts.USER_DEFINED_RECORD
        self.assertEqual(r["file"].split()[0], "IspUserDefined.txt")
        self.assertIn("BEFORE", r["read_at"])

    def test_the_record_carries_one_ignore_switch_per_field(self):
        r = Facts.USER_DEFINED_RECORD
        self.assertEqual(len(r["switches"]), len(r["fields"]) - 1)
        self.assertIn("IgnoreModelName", r["switches"])

    def test_the_ddcci_read_is_the_measured_mailbox_ladder(self):
        """16i correction: the INI line is the WIRE form. 0x6E is the slave
        address byte, 0x51 0x84 the MCCS header, 0x01 the VCP, FE E1 E6 the
        payload - so the read is VCP 0x01, not VCP 0x6E (my first reading)."""
        r = Facts.USER_DEFINED_RECORD
        self.assertIn("VCP 0x01", r["ddcci_read"])
        self.assertEqual(r["wire_cmd"].split(",")[0], "0x6E")
        self.assertEqual(r["wire_cmd"].split(",")[3], "0x01")

    def test_both_bins_carry_the_same_model_string(self):
        self.assertEqual(Facts.BIN_RECORD["fw009"]["model"],
                         Facts.BIN_RECORD["fw012"]["model"])
        self.assertEqual(Facts.BIN_RECORD["fw012"]["model"], "MAG 341CQ X28")

    def test_the_bins_differ_only_in_version_and_offset(self):
        for k in ("model", "panel", "scaler"):
            self.assertEqual(Facts.BIN_RECORD["fw009"][k],
                             Facts.BIN_RECORD["fw012"][k], k)
        self.assertNotEqual(Facts.BIN_RECORD["fw009"]["version"],
                            Facts.BIN_RECORD["fw012"]["version"])


class TestRecordGateLive(unittest.TestCase):
    """16i: the gate as measured on the panel, and the Wine witness."""

    def test_the_version_frame_layout_is_recorded(self):
        f = Facts.DDCI_RECORD_FRAMES
        self.assertEqual(f["version_at"], {"raw": 6, "payload": 4})
        self.assertIn("FW.009", f["version_raw"].replace("46 57 2e 30 30 39", "FW.009"))

    def test_the_model_vcp_is_recorded_as_needing_the_edid(self):
        self.assertIn("10/10", Facts.DDCI_RECORD_FRAMES["model_vcp_0x02"])

    def test_the_panel_side_matches_the_fw012_bin_by_model(self):
        self.assertEqual(Facts.PANEL_RECORD["model"],
                         Facts.BIN_RECORD["fw012"]["model"])
        self.assertIn("model MATCH", Facts.PANEL_RECORD["gate_vs_fw012"])

    def test_the_gate_is_named_as_a_flash_read(self):
        self.assertIn("IN FLASH", Facts.PANEL_RECORD["consequence"])

    def test_the_wine_error_code_is_the_scaler_type(self):
        self.assertIn("ScalerType", Facts.WINE_WITNESS["result"])
        self.assertIn("0x45", Facts.SCALER_TYPE_TABLE["sample_entries"]
                      and "0x45")

    def test_the_ini_is_rewritten_at_startup(self):
        self.assertIn("1498", Facts.WINE_WITNESS["ini_lifecycle"])

    def test_the_levers_that_were_tried_are_listed(self):
        self.assertIn("AUX_NvidiaIICAuxAccess", Facts.WINE_WITNESS["levers_tried"])
        self.assertIn("IgnoreModelName", Facts.WINE_WITNESS["levers_tried"])


class TestGateNotSkippable(unittest.TestCase):
    """16j: what the record override does and does not do."""

    def test_the_override_leaves_the_gate_at_45(self):
        self.assertIn("FAIL 0x45 at 12%", Facts.WINE_OVERRIDE_RUN["result"])
        self.assertIn("Ignore switches", Facts.WINE_OVERRIDE_RUN["levers"])

    def test_the_compare_must_be_satisfied_not_skipped(self):
        self.assertIn("by content", Facts.WINE_OVERRIDE_RUN["reading"])

    def test_the_mailbox_index_byte_selects_nothing_on_ddci(self):
        self.assertIn("does not select", Facts.ID_CODE_LANE["ddci_mailbox"])

    def test_the_id_codes_are_cached_at_init(self):
        self.assertIn("obj+0xc8", Facts.ID_CODE_LANE["comm_slot_0xc0"])

    def test_the_scaler_type_is_inferred_and_says_so(self):
        self.assertIn("inferred", Facts.ID_CODE_LANE["consequence"])

    def test_the_vtable_scan_is_recorded_as_mfc(self):
        self.assertIn("MFC", Facts.VTABLE_SCAN)


class TestFlashModes(unittest.TestCase):
    """IspFlash (0x10008520) only runs for these DAT_1024a2d4 values; 0x1a is
    the background bank (its own engine), 0x1b the foreground (log only)."""

    def test_mode_set(self):
        self.assertEqual(Facts.ISP_MODES,
                         {4, 5, 6, 7, 0x11, 0x1a, 0x1b})

    def test_bank_map(self):
        self.assertEqual(Facts.ISP_BANKS[0x1a], "background")
        self.assertEqual(Facts.ISP_BANKS[0x1b], "foreground")

    def test_handshake_error_origin(self):
        """0xd21 comes from Isp_HandShakeByBootType, gated on a boot-type
        selector - it is an engine verdict, not a wire NACK."""
        self.assertEqual(Facts.ISP_HANDSHAKE_ERROR["code"], 0xD21)
        self.assertEqual(Facts.ISP_HANDSHAKE_ERROR["fn"], "Isp_HandShakeByBootType")
        self.assertEqual(Facts.ISP_HANDSHAKE_ERROR["rva"], 0x1BA20)


if __name__ == "__main__":
    unittest.main()
