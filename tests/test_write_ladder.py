"""The ISP write path (16p): the packet window, the trigger, the page program.

A recording bus stands in for the monitor, so the byte sequence the vendor
sends is asserted without touching hardware. Provenance: re/
ghidra_isp_engine.md sessions 16n (the packet shapes), 16o (the packet
grammar, ports 0x9C/0x9D, 12/24 chunking, the SUM checksum) and 16p (the write
ladder FUN_10003c80, whose data port is a window and whose trigger is
length-encoded).
"""
from __future__ import annotations

import unittest

from msi_isp import Facts
from msi_isp.isp import (
    IspError,
    isp_write_packet,
    packet_bytes,
    program_page_at,
    sector_erase_at,
)


class RecordingBus:
    """Records every write; serves a fixed reply to reads."""

    def __init__(self, reply=b"\x5a"):
        self.writes: list[bytes] = []
        self.reply = reply

    def write(self, addr7, buf, warmup=False):
        self.writes.append(bytes(buf))

    def read(self, addr7, n, warmup=False):
        return self.reply * min(n, len(self.reply) or 1)

    def close(self):
        pass

    @property
    def pairs(self):
        """The (port, value) writes, i.e. the register traffic."""
        return [(w[0], w[1]) for w in self.writes if len(w) == 2]


class TestPacketBytes(unittest.TestCase):
    def test_the_checksum_is_a_sum_not_an_xor(self):
        self.assertEqual(packet_bytes(0x40, 0x00, 0x06),
                         bytes([0x40, 0x00, 0x06, 0x46]))

    def test_the_sum_wraps_at_a_byte(self):
        self.assertEqual(packet_bytes(0xFF, 0xFF, 0xFF)[3], 0xFD)

    def test_the_data_follows_the_header(self):
        self.assertEqual(packet_bytes(0x42, 0x10, 0x00, b"\xaa\xbb"),
                         bytes([0x42, 0x10, 0x00, 0x52, 0xAA, 0xBB]))


class TestWriteLadder(unittest.TestCase):
    def test_the_port_sequence_is_the_decompiled_ladder(self):
        bus = RecordingBus()
        isp_write_packet(bus, 0x9C, bytes([0x40, 0x00, 0x06, 0x46]))
        regs = Facts.ISP_BOARD_REGS
        got = bus.pairs
        self.assertEqual(got[0], (regs["addr_port"], 0x5A & 0x7F))
        self.assertEqual(got[1], (regs["cmd_port"], 0x5A | 0x80))
        self.assertEqual(got[2], (regs["width_port"], 0x5A & 0xFC))
        self.assertEqual(got[3], (regs["bank_port"], 0xE7))
        self.assertEqual(got[4], (regs["data_port"], 0x9C))     # the window
        self.assertEqual(got[5], (regs["cmd_port"], 0xC1))      # write command

    def test_the_payload_lands_on_the_data_port(self):
        bus = RecordingBus()
        isp_write_packet(bus, 0x9C, bytes([0x40, 0x00, 0x06, 0x46]))
        regs = Facts.ISP_BOARD_REGS
        body = [v for (p, v) in bus.pairs if p == regs["data_port"]][1:]
        self.assertEqual(body, [0x40, 0x00, 0x06, 0x46])

    def test_the_trigger_is_length_encoded(self):
        for n, want in ((4, 0xC8), (16, 0xE0), (1, 0xC2), (12, 0xD8)):
            bus = RecordingBus()
            isp_write_packet(bus, 0x9C, bytes(n))
            regs = Facts.ISP_BOARD_REGS
            self.assertEqual(bus.pairs[-1], (regs["cmd_port"], want), f"n={n}")

    def test_the_window_takes_sixteen_bytes(self):
        bus = RecordingBus()
        isp_write_packet(bus, 0x9C, bytes(range(16)))
        self.assertEqual(len(bus.pairs[-1]), 2)
        with self.assertRaises(IspError):
            isp_write_packet(RecordingBus(), 0x9C, bytes(17))

    def test_an_empty_packet_is_refused(self):
        with self.assertRaises(IspError):
            isp_write_packet(RecordingBus(), 0x9C, b"")


class TestFlashDatLibrary(unittest.TestCase):
    """16w: Flash.dat is a record library - parsed, not skimmed."""

    def test_the_file_is_143_records_not_one_csv(self):
        f = Facts.FLASHDAT_FORMAT_16W
        self.assertEqual(f["records"], 150)
        self.assertEqual(f["with_script"], 15)
        self.assertIn("VARIABLE length", f["record"])
        self.assertIn("ASCII CSV", f["supersedes"])

    def test_the_grammar_is_an_index_data_pair(self):
        self.assertIn("06,60,<reg> selects", Facts.FLASHDAT_FORMAT_16W["grammar"])
        self.assertIn("poll", Facts.FLASHDAT_FORMAT_16W["grammar"])

    def test_the_scripts_are_read_mode_ladders(self):
        self.assertIn("READ-MODE ladder",
                      Facts.FLASHDAT_FORMAT_16W["what_the_scripts_actually_are"])

    def test_the_bank_base_is_not_cross_read(self):
        self.assertIn("0x400000", Facts.FLASHDAT_FORMAT_16W["address_caveat"])

    def test_the_version_is_not_checked(self):
        self.assertIn("version is NOT", Facts.BIN_RECORD_16W["gate"])

    def test_the_boot_vector_holds_code(self):
        self.assertIn("0x002800", Facts.BIN_RECORD_16W["boot_vector"])

    def test_fw009_keeps_its_record_elsewhere(self):
        self.assertIn("0x2F7AA", Facts.BIN_RECORD_16W["fw009"])

    def test_the_panel_class_parts_are_listed(self):
        parts = Facts.FLASHDAT_FORMAT_16W["four_mib_parts"].split()
        self.assertIn("W25Q32", parts)
        self.assertIn("MX25L32XX", parts)

    def test_the_verb_table_is_the_port_interface(self):
        v = Facts.SCALER_VERBS_16W
        self.assertGreater(v["verb_count"], 50)
        self.assertEqual(v["flashtype_index"], Facts.SCALER_VERBS.index("flashtype") + 1)

    def test_the_ini_names_an_untested_variable(self):
        self.assertIn("200 ms", Facts.INI_TIMING_16W["ulTimeAfterCommand"])
        self.assertIn("timing never was", Facts.INI_TIMING_16W["open_question"])


class TestProgramAndErase(unittest.TestCase):
    def test_program_page_names_the_door_and_splits_the_address(self):
        bus = RecordingBus()
        n = program_page_at(bus, 0x02F806, bytes(32))
        regs = Facts.ISP_BOARD_REGS
        first = bus.pairs[4]                     # the window byte
        self.assertEqual(first, (regs["data_port"], 0x9C))
        self.assertEqual(n, 4 + 32)              # header + page, all sent
        body = [v for (p, v) in bus.pairs if p == regs["data_port"]][1:]
        # 16w: the header carries bits 15-8 and 7-0 (0xF8, 0x06); bits 22-16
        # (0x02) ride the page port 0xF2, as the read ladder has always done.
        self.assertEqual(body[:4], [0x40, 0xF8, 0x06, 0x3E])   # 0x40+0xF8+0x06
        self.assertEqual(bus.pairs[0], (regs["addr_port"], 0x02))

    def test_program_splits_into_sixteen_byte_transactions(self):
        bus = RecordingBus()
        program_page_at(bus, 0x1000, bytes(32))
        triggers = [v for (p, v) in bus.pairs
                    if p == Facts.ISP_BOARD_REGS["cmd_port"] and v not in (0x80 | 0x5A, 0xC1)]
        self.assertEqual(triggers, [0xE0, 0xE0, 0xC8])   # 16, 16, then 4

    def test_a_page_bigger_than_the_page_is_refused(self):
        with self.assertRaises(IspError):
            program_page_at(RecordingBus(), 0, bytes(33))

    def test_sector_erase_carries_no_data(self):
        bus = RecordingBus()
        sector_erase_at(bus, 0x1F00, bank_select=0x01)
        regs = Facts.ISP_BOARD_REGS
        body = [v for (p, v) in bus.pairs if p == regs["data_port"]]
        # 16y: the pair is the address's MIDDLE and LOW bytes (0x1F, 0x00);
        # 16n read arg2 as a sector-bank byte, superseded by the program
        # call's `record[4] << 0x10`. The top bits ride the page port.
        self.assertEqual(body, [0x9C, 0x42, 0x1F, 0x00, 0x61])

    def test_the_window_is_a_thirtytwo_byte_ring(self):
        self.assertEqual(Facts.ISP_WINDOW_RING["period_bytes"], 32)
        self.assertIn("d[:32] == d[32:64]", Facts.ISP_WINDOW_RING["proof"])

    def test_the_window_survives_the_process(self):
        self.assertIn("across process exit", Facts.ISP_WINDOW_RING["sticky"])

    def test_the_packet_did_not_land_in_the_ring(self):
        self.assertIn("appear nowhere", Facts.ISP_WINDOW_RING["probe_packet"])

    def test_the_doors_are_placed_on_the_isp_slave(self):
        self.assertIn("0x22", Facts.ISP_WINDOW_RING["reading"])

    def test_the_trailer_sums_the_whole_packet(self):
        """16t: the trailer covers header + data, appended once (Grok item 2)."""
        bus = RecordingBus()
        data = bytes([0xC0, 0xFE, 0xEE, 0x12])
        n = program_page_at(bus, 0x000000, data, trailer=True)
        body = [v for (p, v) in bus.pairs
                if p == Facts.ISP_BOARD_REGS["data_port"]][1:]
        self.assertEqual(n, 4 + 4 + 1)                # header + data + trailer
        self.assertEqual(body[-1], sum(body[:-1]) & 0xFF)

    def test_the_trigger_is_mode_encoded(self):
        for mode, want in ((0, 0xC6), (1, 0xC8), (2, 0xCA)):   # n = 4
            bus = RecordingBus()
            isp_write_packet(bus, 0x9C, b"\x40\x00\x00\x40", mode=mode)
            self.assertEqual(bus.pairs[-1][1], want, f"mode={mode}")

    def test_the_window_shows_no_per_command_ack(self):
        m = Facts.ISP_WINDOW_MAP
        self.assertIn("no delta", m["per_command"])
        self.assertIn("no delta", m["per_data_phase"])
        self.assertIn("no delta", m["isp_entry"])
        self.assertIn("no drift", m["passive"])

    def test_the_24_index_claim_is_corrected_to_one_byte(self):
        self.assertIn("ONE byte", Facts.ISP_WINDOW_MAP["correction_16t"])

    def test_the_ack_must_come_from_the_flash_side(self):
        self.assertIn("clip", Facts.ISP_WINDOW_MAP["consequence"])

    def test_the_write_chain_fact_names_the_block_index(self):
        w = Facts.WRITE_CHAIN_16Y
        self.assertIn("record[4] << 0x10", w["program_address"])
        self.assertIn("Write Rom Flag Fail", w["bank_switch"])
        self.assertIn("448 sectors", w["erase_plan"])

    def test_the_blank_screen_has_a_named_cause(self):
        d = Facts.DP_BLANKING
        self.assertIn("LANE_ADJUST_REQUEST", d["cause"])
        self.assertIn("0xF2", d["cause"])

    def test_the_window_state_moves_and_resets(self):
        self.assertIn("0x90 idle -> 0x10", Facts.DP_BLANKING["window_state"])
        self.assertIn("power cycle", Facts.DP_BLANKING["window_state"])

    def test_the_panel_is_healthy_after(self):
        self.assertIn("FW.009", Facts.DP_BLANKING["health_after"])

    def test_the_window_is_one_byte_addressable_buffer(self):
        self.assertIn("same stream at offset N", Facts.ISP_REGFILE_NATIVE["shape"])

    def test_a_write_changed_device_state(self):
        self.assertIn("24 indices changed",
                      Facts.ISP_REGFILE_NATIVE["after_a_page_write"])

    def test_the_packet_bytes_never_appear(self):
        self.assertEqual(Facts.ISP_REGFILE_NATIVE["marker_visible"][:2], "no")

    def test_the_vendor_ack_is_not_what_we_get(self):
        self.assertIn("c4 83", Facts.ISP_REGFILE_NATIVE["leaf_ack"])

    def test_the_matrix_fact_records_both_rejected_axes(self):
        g = Facts.GROK_REVIEW_16T
        self.assertIn("REJECTED", g["item1_address_width"])
        self.assertIn("identical", g["item2_trailer"])
        self.assertIn("0x9C", g["leaf_ack"])

    def test_the_ladder_fact_names_the_window_and_the_arithmetic(self):
        w = Facts.ISP_WRITE_LADDER
        self.assertIn("names the register", w["window"])
        self.assertIn("2 * n - 0x40", w["trigger"])
        self.assertEqual(w["max_per_transaction"], 16)

    def test_the_control_bytes_match_the_decompile(self):
        self.assertEqual(Facts.PROGRAM_PACKET["program"]["control"], 0x40)
        self.assertEqual(Facts.PROGRAM_PACKET["sector_erase"]["control"], 0x42)


if __name__ == "__main__":
    unittest.main()
