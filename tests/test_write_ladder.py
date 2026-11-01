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


class TestProgramAndErase(unittest.TestCase):
    def test_program_page_names_the_door_and_splits_the_address(self):
        bus = RecordingBus()
        n = program_page_at(bus, 0x02F806, bytes(32))
        regs = Facts.ISP_BOARD_REGS
        first = bus.pairs[4]                     # the window byte
        self.assertEqual(first, (regs["data_port"], 0x9C))
        self.assertEqual(n, 4 + 32)              # header + page, all sent
        body = [v for (p, v) in bus.pairs if p == regs["data_port"]][1:]
        self.assertEqual(body[:4], [0x40, 0x02, 0x06, 0x48])   # 0x40+0x02+0x06

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
        sector_erase_at(bus, 0x1F00, bank=0x01)
        regs = Facts.ISP_BOARD_REGS
        body = [v for (p, v) in bus.pairs if p == regs["data_port"]]
        self.assertEqual(body, [0x9C, 0x42, 0x00, 0x01, 0x43])

    def test_the_window_is_a_thirtytwo_byte_ring(self):
        self.assertEqual(Facts.ISP_WINDOW_RING["period_bytes"], 32)
        self.assertIn("d[:32] == d[32:64]", Facts.ISP_WINDOW_RING["proof"])

    def test_the_window_survives_the_process(self):
        self.assertIn("across process exit", Facts.ISP_WINDOW_RING["sticky"])

    def test_the_packet_did_not_land_in_the_ring(self):
        self.assertIn("appear nowhere", Facts.ISP_WINDOW_RING["probe_packet"])

    def test_the_doors_are_placed_on_the_isp_slave(self):
        self.assertIn("0x22", Facts.ISP_WINDOW_RING["reading"])

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
