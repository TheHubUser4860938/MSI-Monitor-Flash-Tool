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
