"""The shared lane helpers + the relay's native lane (session 16b).

`--auxdev` (kernel/msi_auxch.ko) passes the RM `cmd` word verbatim, and the
relay's own header documents bit3 as 0=I2C mode / 1=native AUX, so the lane
the vendor's legacy backend uses is available WITHOUT root. That makes the
decisive 0x22 experiment (native register access, 16 B/txn) a normal-user
command.

Fakes the ioctl node; no /dev access, safe in CI.
"""
import ctypes
import types
import unittest

import msi_isp.auxdev as auxdev
import msi_isp.lane as lane
from msi_isp.isp import I2CTarget, ScalerBus

FLASH = I2CTarget("flash", 0x22)


class TestLaneHelpers(unittest.TestCase):
    def test_byte_index_grammar(self):
        self.assertEqual(lane.split_register(b"\x61\x00\x9f"), (0x61, b"\x9f"))

    def test_window_grammar(self):
        self.assertEqual(lane.split_register(b"\x42\x08\xd8"), (0x842, b"\xd8"))

    def test_pointer_only(self):
        self.assertEqual(lane.split_register(b"\x64\x00"), (0x64, b""))

    def test_chunk_sizes(self):
        self.assertEqual([len(c) for c in lane.chunks(bytes(33))], [16, 16, 1])

    def test_native_bit_is_the_aux_mode_bit(self):
        """kernel/msi_auxch.c: 'bit3: 0=I2C mode 1=native AUX'."""
        self.assertEqual(lane.AUX_MODE_AUX, 0x8)

    def test_req_name_masks_the_mode_bits(self):
        self.assertEqual(lane.req_name(lane.AUX_MODE_AUX | 1), "read")


def _bus(lane_name, rec):
    b = auxdev.AuxDevBus.__new__(auxdev.AuxDevBus)
    b.fd = 3
    b._slave = None
    b.lane = lane_name
    b._reg = None
    b._posed = False
    b._fcntl = types.SimpleNamespace(ioctl=_ioctl(rec))
    return b


def _ioctl(rec):
    def go(fd, req, x):
        rec.append((x.cmd, x.addr, bytes(x.data[:16]), x.size, x.bAddrOnly))
        x.replyType = 0                    # ACK
        x.rmStatus = 0
        x.sizeDone = x.size + 1            # "bytes completed" out-field
    return go


class TestRelayNativeLane(unittest.TestCase):
    def test_write_sets_the_aux_bit_and_carries_the_register(self):
        rec = []
        ScalerBus(_bus("native", rec)).word_write(FLASH, 0x61, 0x9F)
        cmd, addr, data, size, _addr_only = rec[0]
        self.assertEqual(cmd & lane.AUX_MODE_AUX, lane.AUX_MODE_AUX)
        self.assertEqual(cmd & 3, auxdev.AUX_REQ_WRITE)
        self.assertEqual(addr, 0x61)       # register, not the 7-bit slave
        self.assertEqual(data[0], 0x9F)
        self.assertEqual(size, 0)          # 0-based: one byte

    def test_i2c_lane_keeps_the_7bit_slave(self):
        rec = []
        ScalerBus(_bus("i2c", rec)).word_write(FLASH, 0x841, 0xB8)
        cmd, addr, data, _size, _ao = rec[0]
        self.assertEqual(cmd & lane.AUX_MODE_AUX, 0)
        self.assertEqual(addr, 0x22)
        self.assertEqual(data[:3], b"\x41\x08\xb8")

    def test_register_wider_than_seven_bits_survives(self):
        """The I2C lane masks the slave to 7 bits; the native lane must not,
        or 14i's 0x841-0x84f window is unreachable."""
        rec = []
        ScalerBus(_bus("native", rec)).word_write(FLASH, 0x845, 3)
        self.assertEqual(rec[0][1], 0x845)

    def test_read_poses_then_reads(self):
        rec = []
        b = _bus("native", rec)
        sb = ScalerBus(b)
        sb.word_write(FLASH, 0x64, b"")     # pose only
        got = sb.word_read(FLASH, 0x64, 3)  # word_read re-poses its own target
        self.assertEqual([c & 3 for c, *_ in rec],
                         [auxdev.AUX_REQ_WRITE, auxdev.AUX_REQ_WRITE,
                          auxdev.AUX_REQ_READ])
        self.assertEqual(len(got), 3)

    def test_long_write_chunks_at_sixteen(self):
        rec = []
        ScalerBus(_bus("native", rec)).word_write(FLASH, 0x74, bytes(range(33)))
        self.assertEqual([c[3] + 1 for c in rec], [16, 16, 1])   # size 0-based
        self.assertEqual(b"".join(c[2][:n] for c, n in
                                  zip(rec, [16, 16, 1])), bytes(range(33)))

    def test_lane_is_a_constructor_argument(self):
        """The lane is chosen where the bus is built, so --auxdev can be
        asked for the native lane without touching the ioctl path."""
        import inspect
        self.assertIn("lane", inspect.signature(auxdev.AuxDevBus.__init__).parameters)
        self.assertEqual(
            inspect.signature(auxdev.AuxDevBus.__init__).parameters["lane"].default,
            "i2c")


class TestLaneIsPerSlave(unittest.TestCase):
    """The lane is a property of the SLAVE, not of the session: the register
    file answers an index (native AUX), the DDC/CI, EDID and branch slaves
    answer flat packets (the tunnel, byte-matched to ddcutil)."""

    def test_ddci_stays_on_the_tunnel_in_native_mode(self):
        rec = []
        bus = _bus("native", rec)
        bus.write(0x37, b"\x51\x84\x02\x00\x00")
        cmd, addr, data, _size, _ao = rec[0]
        self.assertEqual(cmd & lane.AUX_MODE_AUX, 0)
        self.assertEqual(addr, 0x37)
        self.assertEqual(data[:5], b"\x51\x84\x02\x00\x00")

    def test_edid_stays_on_the_tunnel_in_native_mode(self):
        rec = []
        _bus("native", rec).read(0x50, 8)
        self.assertEqual(rec[0][0] & lane.AUX_MODE_AUX, 0)
        self.assertEqual(rec[0][1], 0x50)

    def test_every_register_slave_goes_native(self):
        self.assertEqual(sorted(lane.REGISTER_SLAVES),
                         [0x18, 0x19, 0x1A, 0x1B, 0x20, 0x22])

    def test_predicate(self):
        self.assertTrue(lane.use_native("native", 0x22))
        self.assertFalse(lane.use_native("native", 0x37))
        self.assertFalse(lane.use_native("i2c", 0x22))


class TestStructIntegrity(unittest.TestCase):
    def test_xfer_struct_is_the_auxch_params(self):
        """The relay's ABI: the mirror must stay the size of the kernel's
        struct auxch_xfer (9 fields, data[16] = 16 B -> 48 B); a silent drift
        means the ioctl hands the kernel garbage."""
        self.assertEqual(ctypes.sizeof(auxdev._Xfer), 48)


if __name__ == "__main__":
    unittest.main()
