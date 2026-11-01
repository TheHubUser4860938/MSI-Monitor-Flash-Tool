"""The bulk I2C-over-AUX lane (0x73137C) through the relay (session 16f).

Why this lane exists: the allow-list (0x30/0x37/0x50) is a property of the
kernel **i2c-dev** DRM AUX bridge, and the 16-byte-per-transaction limit is a
property of the AUXCH control (0x731341). NV0073's bulk control is a THIRD
path - 256 bytes per transaction - and `kernel/test_relay.py` proved it works
from kernel context on the EDID slave (256 B in one call, both blocks).
Nobody has scanned the ISP slaves through it.

Kernel ABI (kernel/msi_auxch.c):
  MSI_AUXCH_BULK = _iowr('M', 0x43, struct auxch_bulk)
  struct auxch_bulk { __u32 addr; __u32 bWrite; __u32 size;   // IN req, OUT done
                      __u8 data[256]; __u32 rmStatus; };      // 272 bytes
  addr is the PLAIN 7-bit slave (the 8-bit form 0xa1 returns 0xffff);
  a register read is a write of the pointer then a read of N bytes;
  READS are never gated - only writes to the ISP slaves 0x18..0x22 are.

Fakes the ioctl node; no /dev access, safe in CI.
"""
import ctypes
import types
import unittest

import msi_isp.auxdev as auxdev
import msi_isp.lane as lane
from msi_isp import Facts


def _bus(rec=None, lane_name="bulk", gate=False):
    b = auxdev.AuxDevBus.__new__(auxdev.AuxDevBus)
    b.fd = 3
    b._slave = None
    b.lane = lane_name
    b._reg = None
    b._posed = False
    b._fcntl = types.SimpleNamespace(ioctl=_ioctl(rec if rec is not None
                                                  else [], gate))
    return b


def _ioctl(rec, gate):
    filler = bytes(range(256))

    def go(fd, req, x):
        if req == auxdev.MSI_AUXCH_BULK:
            rec.append(("bulk", x.addr, bool(x.bWrite), x.size,
                        bytes(x.data[:x.size]) if x.bWrite else b""))
            if gate and x.bWrite:
                raise OSError(1, "gated")
            x.rmStatus = 0
            x.size = min(x.size, 256)
            x.data[:x.size] = filler[:x.size]
        else:
            rec.append(("xfer", x.addr, x.cmd, x.size, bytes(x.data[:16]),
                        bool(x.bAddrOnly)))
            x.replyType = 0
            x.rmStatus = 0
            x.sizeDone = x.size + 1
    return go


class TestBulkAbi(unittest.TestCase):
    def test_struct_is_272_bytes(self):
        """addr + bWrite + size + data[256] + rmStatus, no padding."""
        self.assertEqual(ctypes.sizeof(auxdev._Bulk), 272)

    def test_ioctl_number(self):
        self.assertEqual(auxdev.MSI_AUXCH_BULK & 0xff, 0x43)

    def test_lanes_include_bulk(self):
        self.assertIn("bulk", lane.LANES)


class TestBulkWrite(unittest.TestCase):
    def test_write_carries_the_7bit_slave_and_the_payload(self):
        rec = []
        _bus(rec).bulk_write(0x22, b"\x60\x00\x00\x00")
        kind, addr, is_write, size, data = rec[0]
        self.assertEqual(kind, "bulk")
        self.assertEqual(addr, 0x22)
        self.assertTrue(is_write)
        self.assertEqual(size, 4)
        self.assertEqual(data, b"\x60\x00\x00\x00")

    def test_two_fifty_six_bytes_go_in_one_transaction(self):
        rec = []
        _bus(rec).bulk_write(0x20, bytes(range(256)))
        self.assertEqual(rec[0][3], 256)

    def test_gated_write_surfaces_the_unlock_hint(self):
        bus = _bus([], gate=True)
        with self.assertRaises(OSError) as cm:
            bus.bulk_write(0x22, b"\x00")
        self.assertIn("unlock", str(cm.exception).lower())


class TestBulkRead(unittest.TestCase):
    def test_read_asks_for_the_byte_count(self):
        rec = []
        _bus(rec).bulk_read(0x22, 16)
        kind, addr, is_write, size, _data = rec[-1]
        self.assertEqual((kind, addr, is_write, size),
                         ("bulk", 0x22, False, 16))

    def test_read_returns_exactly_the_requested_length(self):
        self.assertEqual(len(_bus().bulk_read(0x50, 256)), 256)

    def test_pointer_read_is_write_then_read(self):
        rec = []
        got = _bus(rec).read_register(0x22, 0x64, 4)
        self.assertEqual([(e[1], e[2], e[4]) for e in rec],
                         [(0x22, True, b"\x64"), (0x22, False, b"")])
        self.assertEqual(len(got), 4)

    def test_probe_is_a_one_byte_read(self):
        rec = []
        self.assertTrue(_bus(rec).probe(0x22))
        self.assertEqual(rec[-1][2], False)         # a read
        self.assertEqual(rec[-1][3], 1)


class TestBulkLaneRouting(unittest.TestCase):
    def test_write_and_read_use_the_bulk_control(self):
        rec = []
        bus = _bus(rec)
        bus.write(0x22, b"\x41\x08\xb8")
        got = bus.read(0x22, 8)
        self.assertEqual([e[0] for e in rec], ["bulk", "bulk"])
        self.assertEqual(len(got), 8)

    def test_native_lane_still_wins_for_the_register_slaves(self):
        rec = []
        bus = _bus(rec, lane_name="native")
        bus.write(0x22, b"\x61\x00\x9f")
        self.assertEqual(rec[0][0], "xfer")         # native AUX, not bulk

    def test_default_lane_is_still_the_tunnel(self):
        rec = []
        bus = _bus(rec, lane_name="i2c")
        bus.write(0x37, b"\x51\x84")
        self.assertEqual(rec[0][0], "xfer")


class TestBulkVerdict(unittest.TestCase):
    """16f: the bulk lane measured, and what it settled."""

    def test_the_control_and_the_size(self):
        self.assertIn("0x73137C", Facts.BULK_LANE["control"])
        self.assertIn("256 B/txn", Facts.BULK_LANE["control"])

    def test_the_isp_slaves_time_out(self):
        self.assertIn("TIMEOUT", Facts.BULK_LANE["measured"])

    def test_the_conclusion_is_about_the_sink(self):
        self.assertIn("DP branch", Facts.BULK_LANE["verdict"])

    def test_the_gate_covers_both_address_forms(self):
        self.assertIn("0x1B", Facts.BULK_LANE["gate_note"])

    def test_the_magic_byte_is_lane_dependent(self):
        self.assertIn("candidate 3", Facts.BULK_LANE["magic_varies"])


if __name__ == "__main__":
    unittest.main()
