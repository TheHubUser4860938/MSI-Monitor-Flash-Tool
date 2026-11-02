"""16ac: where the record block lives, and how it is read and written.

The law this file pins is the one the two bins taught us: the record sits at
page offset 0xF800 INSIDE a 64 KiB block, FW.012 in block 0 and FW.009 in block
2. The INI's `BinVersionAddress` is the block-0 instance, and the vendor packs
the rest of the address into the same dword - `(block << 16) | offset` - which
is FUN_1001f640's own arithmetic.
"""
import pathlib
import unittest

from msi_isp import Facts, isp, record
from msi_isp.emul import EmulatedMonitor

VENDOR = pathlib.Path("vendor")
FW012 = VENDOR / "MSI_MAG_341CQP_QD-OLED_X28_FW.012_4023.bin"
FW009 = VENDOR / "MSI_MAG_341CQP_QD-OLED_X28_FW.009_DC2F.bin"


def _read(path):
    if not path.exists():
        raise unittest.SkipTest(f"{path} is not on this box")
    return path.read_bytes()


class TestThePageOffsetLaw(unittest.TestCase):
    """Both bins, one shape: (block << 16) + 0xF800."""

    def test_fw012_keeps_its_record_in_block_0(self):
        recs = record.find_records(_read(FW012))
        self.assertEqual(len(recs), 1)
        r = recs[0]
        self.assertEqual((r.block, r.page_offset), (0, 0xF800))
        self.assertEqual(r.offset, 0xF800)

    def test_fw009_keeps_its_record_in_block_2(self):
        r = record.find_records(_read(FW009))[0]
        self.assertEqual((r.block, r.page_offset), (2, 0xF800))
        self.assertEqual(r.offset, 0x2F800)

    def test_the_page_offset_is_the_same_in_both(self):
        a = record.find_records(_read(FW012))[0]
        b = record.find_records(_read(FW009))[0]
        self.assertEqual(a.page_offset, b.page_offset)
        self.assertEqual(a.page_offset, record.RECORD_PAGE_OFFSET)

    def test_the_fields_decode_from_both_bins(self):
        for path, ver in ((FW012, "012"), (FW009, "009")):
            r = record.find_records(_read(path))[0]
            with self.subTest(bin=str(path)):
                self.assertEqual(r.version, ver)
                self.assertEqual(r.code, "e" + ver)
                self.assertEqual(r.model, "MAG 341CQ X28")
                self.assertEqual(r.panel, "TPO340QH1-CH01 D01")
                self.assertEqual(r.scaler, "RTD2711")
                self.assertEqual(r.flag, 0x03)     # the same flag byte in both
                self.assertEqual(r.marker, 0xAF)   # 16i's one-byte field


class TestEncodeRoundTrip(unittest.TestCase):
    def test_the_encoding_is_the_bytes_the_bin_carries(self):
        for path in (FW012, FW009):
            data = _read(path)
            r = record.find_records(data)[0]
            body = record.encode_record(r)
            with self.subTest(bin=str(path)):
                # the block starts with the 'e' one byte BELOW the version field
                self.assertEqual(data[r.offset - 1:r.offset - 1 + len(body)],
                                 body)

    def test_a_record_in_an_unheard_of_block_is_still_found(self):
        """The general form of reading the INI: scan the blocks."""
        img = bytearray(b"\xff" * (12 * record.RECORD_BLOCK))
        r = record.RecordBlock(offset=record.pack_addr(5), block=5,
                               version="021", code="e021", flag=0x03,
                               model="MPG 274QRD X24", panel="QM270T1-CH01",
                               marker=0xAF, scaler="RTD2733")
        at = r.offset - 1
        img[at:at + len(record.encode_record(r))] = record.encode_record(r)
        found = record.find_records(bytes(img))
        self.assertEqual(len(found), 1)
        self.assertEqual((found[0].block, found[0].model, found[0].version),
                         (5, "MPG 274QRD X24", "021"))

    def test_an_image_with_no_record_finds_nothing(self):
        self.assertEqual(record.find_records(b"\xff" * 0x30000), [])


class TestPackedAddress(unittest.TestCase):
    """FUN_1001f640: `Flash_Read(p >> 0x10 & 0xff, p & 0xffff, len, dst)`."""

    def test_pack_and_split_are_inverses(self):
        for blk in (0, 1, 2, 31, 255):
            p = record.pack_addr(blk)
            with self.subTest(block=blk):
                self.assertEqual(record.split_addr(p), (blk, 0xF800))

    def test_the_two_bins_addresses_are_packed_addresses(self):
        self.assertEqual(record.pack_addr(0), 0xF800)
        self.assertEqual(record.pack_addr(2), 0x2F800)

    def test_the_ladder_sees_three_axes_not_one(self):
        """bank on 0x58, 64 KiB page on 0xF2, 16-bit offset in the window."""
        self.assertEqual(record.split_flash_addr(0xF800), (0, 0, 0xF800))
        self.assertEqual(record.split_flash_addr(0x2F800), (0, 2, 0xF800))
        self.assertEqual(record.split_flash_addr(0x20F800, 0x200000),
                         (1, 0, 0xF800))
        self.assertEqual(record.split_flash_addr(0x2FF800, 0x200000),
                         (1, 15, 0xF800))


class TestChipRead(unittest.TestCase):
    """The plugin's mode-2 read on the wire: ISP Flash_Read of the block."""

    def test_the_chip_answer_agrees_with_the_image(self):
        for path, blk in ((FW012, 0), (FW009, 2)):
            data = _read(path)
            m = EmulatedMonitor(image=data)
            chip = record.read_chip_record(m, block=blk)
            img = record.find_records(data)[0]
            key = lambda r: (r.version, r.code, r.model, r.panel,  # noqa: E731
                             r.scaler, r.flag, r.block)
            with self.subTest(bin=str(path)):
                self.assertIsNotNone(chip)
                self.assertEqual(key(chip), key(img))

    def test_the_vendors_30_byte_read_is_enough_for_the_version(self):
        data = _read(FW012)
        m = EmulatedMonitor(image=data)
        r = record.read_chip_record(m, block=0, length=record.RECORD_READ_LEN)
        self.assertEqual(r.version, "012")
        self.assertEqual(record.RECORD_READ_LEN, 0x1E)   # FUN_100383f0 asks 30

    def test_the_page_port_selects_the_64_kib_block(self):
        """--chip --block 2 must read 0x2F800, not 0xF800 (16ac's page axis)."""
        data = _read(FW009)
        m = EmulatedMonitor(image=data)
        self.assertEqual(isp.flash_read_at(m, 0xF7FF, 4, page=2, bank=0),
                         b"e009")
        self.assertEqual(isp.flash_read_at(m, 0xF7FF, 4, page=0, bank=0),
                         data[0xF7FF:0xF803])

    def test_the_bank_and_the_mode_are_separable_axes(self):
        """Mode 1's 16-bit offset with mode 0's bank - what a record read needs.

        The board record couples them (width_values pairs a width with a bank
        byte), so the coupling is the ladder's order of writing, not a law: the
        write ladder has always taken the two apart, and 16ac's record read
        needs the combination the table does not list.
        """
        img = bytearray(b"\xff" * (4 * 1024 * 1024))
        img[0x001000:0x001006] = b"A" * 6          # bank 0 (the 0xE7 half)
        img[0x201000:0x201006] = b"B" * 6          # bank 1 (the 0xEF half)
        m = EmulatedMonitor(image=bytes(img))
        self.assertEqual(isp.flash_read_at(m, 0x1000, 6, mode=1, bank=0),
                         b"A" * 6)                       # bank 0, 16-bit offset
        self.assertEqual(isp.flash_read_at(m, 0x1000, 6, mode=1, bank=1),
                         b"B" * 6)                       # bank 1, same offset
        self.assertEqual(isp.flash_read_at(m, 0x1000, 6, mode=1), b"B" * 6)
        # the coupled default: mode 1's width byte 0xEF carries bank 1


class TestRecordWrite(unittest.TestCase):
    """No separate ISP command: the record is bytes inside a block (16y)."""

    def test_a_version_bump_changes_one_block_by_two_bytes(self):
        data = _read(FW009)
        r = record.find_records(data)[0]
        new = record.with_version(r, "013")
        out = record.patch_image(data, new)
        self.assertEqual(len(out), len(data))
        diff = [i for i, (a, c) in enumerate(zip(data, out)) if a != c]
        self.assertTrue(diff)
        self.assertTrue(all(r.offset - 1 <= i < r.offset + 0x40 for i in diff),
                        f"the write spilled outside the record: {diff[:6]}")
        back = record.find_records(out)[0]
        self.assertEqual((back.version, back.code), ("013", "e013"))
        self.assertEqual(back.model, r.model)      # the names ride along

    def test_the_written_record_reads_back_off_the_chip(self):
        data = _read(FW009)
        r = record.find_records(data)[0]
        out = record.patch_image(data, record.with_version(r, "013"))
        m = EmulatedMonitor(image=out)
        self.assertEqual(record.read_chip_record(m, block=r.block).version,
                         "013")

    def test_the_version_digits_are_not_the_mccs_string(self):
        self.assertEqual(record.with_version(
            record.find_records(_read(FW012))[0], "FW.021").version, "021")

    def test_the_encoding_fits_the_2_kib_it_lives_in(self):
        r = record.find_records(_read(FW012))[0]
        self.assertLess(len(record.encode_record(r)), 0x800)


class TestRecordWireFact(unittest.TestCase):
    """The fact table carries the decode, so the code is not the only record."""

    def test_the_fact_names_all_five_version_record_modes(self):
        modes = Facts.RECORD_WIRE_16AC["modes"]
        for addr in ("10038750", "100383f0", "10034c90", "10036280", "100375f0"):
            self.assertIn(addr, modes, addr)

    def test_the_fact_names_the_packed_address(self):
        self.assertIn("block << 16", Facts.RECORD_WIRE_16AC["packed_address"])

    def test_the_fact_names_the_flag_arithmetic(self):
        self.assertIn("| 6", Facts.RECORD_WIRE_16AC["flag_arithmetic"])
        self.assertIn("| 2", Facts.RECORD_WIRE_16AC["flag_arithmetic"])

    def test_the_fact_names_the_five_plugin_fields(self):
        fields = Facts.RECORD_WIRE_16AC["fields"]
        for name in ("FWVersion", "ReadVersion", "ProjectID", "SubVersion",
                     "CurrentBank", "ISPVersion.txt"):
            self.assertIn(name, fields, name)

    def test_the_fact_says_the_write_is_a_block_program_not_a_command(self):
        self.assertIn("whole blocks", Facts.RECORD_WIRE_16AC["write_side"])


class TestCliSurface(unittest.TestCase):
    """The verbs are the tool's contract, so the flags are pinned too."""

    def test_the_record_verb_takes_the_new_flags(self):
        for flag in ("--chip", "--blocks", "--set-version", "--block",
                     "--model"):
            with self.subTest(flag=flag):
                self.assertIn(flag, _HELP["record"])


def setUpModule():
    """Capture `--help` for the verbs this file touches (no bus needed)."""
    import contextlib
    import io
    import sys

    import msi_isp.cli as cli
    for cmd in ("record",):
        buf = io.StringIO()
        old = sys.argv
        sys.argv = ["msi-isp", cmd, "--help"]
        with contextlib.redirect_stdout(buf), contextlib.suppress(SystemExit):
            cli.main()
        sys.argv = old
        _HELP[cmd] = buf.getvalue()


_HELP = {}


if __name__ == "__main__":
    unittest.main()
