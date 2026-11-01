"""Native-AUX register lane (session 16b decode -> code).

Provenance (re/ghidra_isp_engine.md, 16b): Comm_Aux.dll's *legacy* backend
(flag DAT_1021ae90, the NVAPI DpAuxChannelControl wrapper) drives the Realtek
register file over **native DP AUX**, not the I2C-over-AUX tunnel:
`FUN_100452c0` (write) / `FUN_10045060` (read) build a 0x20068 (104 B) param
block with op 2 = write, op 3 = read, ONE BYTE register index, a payload whose
first byte is the pointer/sub-command, and **16 bytes per transaction** with a
0-based size; a read is a write-then-read pair.

The tunnel lane (what `--nvrm`/`--auxdev` used before this) sends a 16-bit
little-endian register header as one I2C message. Both are real vendor shapes
for two register surfaces (14i's 0x841/0x842/0x845 window vs 15i's
0x60/0x61/0x64 Flash.dat index grammar) - the lane decides which one the
scaler is asked for.

These tests fake the RM layer; no /dev access, safe in CI.
"""
import unittest

import msi_isp.nvbus as nvbus
from msi_isp.isp import I2CTarget, ScalerBus


class FakeRM:
    """Records every aux()/aux_i2c() call; answers reads from a queue."""

    def __init__(self, reads=None):
        self.log = []
        self.reads = list(reads or [])

    def aux(self, display_id, addr, data=b"", req=0, typ=0, mot=False,
            addr_only=False, retries=10):
        self.log.append(("aux", display_id, addr, bytes(data), req, typ, mot))
        if req == nvbus.AUX_REQ_READ:
            n = len(data) or 16
            item = self.reads.pop(0) if self.reads else 0
            b = bytes([item]) if isinstance(item, int) else bytes(item)
            return "ACK", (b * (-(-n // len(b))))[:n], 0
        return "ACK", b"", 0

    def aux_i2c(self, display_id, slave7, req, data=b"", mot=False,
                subdevice=0, **kw):
        self.log.append(("i2c", display_id, slave7, bytes(data), req, mot))
        if req == nvbus.AUX_REQ_READ:
            n = len(data) or 16
            item = self.reads.pop(0) if self.reads else 0
            b = bytes([item]) if isinstance(item, int) else bytes(item)
            return "ACK", (b * (-(-n // len(b))))[:n]
        return "ACK", b""

    def close(self):
        pass


def _bus(lane, reads=None):
    b = nvbus.NvRMAuxBus.__new__(nvbus.NvRMAuxBus)
    b.verbose = False
    b.rm = FakeRM(reads)
    b.display_id = 0x200
    b.sub_inst = 0
    b.lane = lane
    b._last = None
    b.fd = None
    b.fd_gpu = []
    b.path = "fake"
    return b


FLASH = I2CTarget("flash", 0x22)


class TestNativeWrite(unittest.TestCase):
    def setUp(self):
        self.bus = _bus("native")
        self.sb = ScalerBus(self.bus)

    def test_single_byte_register_window(self):
        """The vendor native write carries a BYTE register index, not a
        16-bit LE header on the data: reg 0x61, value 0x9F."""
        self.sb.word_write(FLASH, 0x61, 0x9F)
        self.assertEqual(self.bus.rm.log,
                         [("aux", 0x200, 0x61, b"\x9f", nvbus.AUX_REQ_WRITE,
                           nvbus.AUX_TYPE_AUX, False)])

    def test_wide_register_uses_low_byte(self):
        """14i's window regs (0x842) share the lane: the index is the byte
        the scaler latches, so the vendor's one-byte form is kept."""
        self.sb.word_write(FLASH, 0x842, 0xD8)
        _tag, _did, addr, data, *_ = self.bus.rm.log[0]
        self.assertEqual((addr, data), (0x842, b"\xd8"))

    def test_chunking_is_sixteen_bytes(self):
        self.sb.word_write(FLASH, 0x74, bytes(range(33)))
        payloads = [e[3] for e in self.bus.rm.log]
        self.assertEqual([len(p) for p in payloads], [16, 16, 1])
        self.assertEqual(b"".join(payloads), bytes(range(33)))

    def test_every_chunk_names_the_same_lane_and_slave(self):
        self.sb.word_write(FLASH, 0x60, bytes(20))
        for e in self.bus.rm.log:
            self.assertEqual(e[0], "aux")            # native, never tunnel
            self.assertEqual(e[2], 0x60)             # register held across chunks
            self.assertEqual(e[5], nvbus.AUX_TYPE_AUX)


class TestNativeRead(unittest.TestCase):
    def setUp(self):
        self.bus = _bus("native", reads=[b"\x1f\x20\x4c"])
        self.sb = ScalerBus(self.bus)

    def test_read_is_write_then_read(self):
        got = self.sb.word_read(FLASH, 0x64, 3)
        reqs = [e[4] for e in self.bus.rm.log]
        self.assertEqual(reqs, [nvbus.AUX_REQ_WRITE, nvbus.AUX_REQ_READ])
        self.assertEqual(got, b"\x1f\x20\x4c")

    def test_long_read_chunks_at_sixteen(self):
        self.bus.reads = [bytes(range(16)), bytes(range(16)), b"\x00\x00"]
        got = self.sb.word_read(FLASH, 0x64, 34)
        reads = [e for e in self.bus.rm.log if e[4] == nvbus.AUX_REQ_READ]
        self.assertEqual([len(e[3]) for e in reads], [16, 16, 2])
        self.assertEqual(len(got), 34)


class TestTunnelLaneUnchanged(unittest.TestCase):
    def test_i2c_lane_keeps_the_16bit_header(self):
        bus = _bus("i2c")
        ScalerBus(bus).word_write(FLASH, 0x841, 0xB8)
        self.assertEqual(bus.rm.log[0][0], "i2c")
        self.assertEqual(bus.rm.log[0][2], 0x22)
        self.assertEqual(bus.rm.log[0][3], b"\x41\x08\xb8")


class TestNativeLanePerSlave(unittest.TestCase):
    def test_ddci_on_the_tunnel_even_when_native_is_asked(self):
        bus = _bus("native")
        ScalerBus(bus).word_write(I2CTarget("ddci", 0x37), 0x00, 0x51)
        self.assertEqual(bus.rm.log[0][0], "i2c")     # tunnel, not native
        self.assertEqual(bus.rm.log[0][2], 0x37)

    def test_isp_read_slave_goes_native(self):
        bus = _bus("native")
        ScalerBus(bus).word_write(I2CTarget("isp_rd", 0x20), 0x60, 0x38)
        self.assertEqual(bus.rm.log[0][0], "aux")
        self.assertEqual(bus.rm.log[0][2], 0x60)


class TestLaneIsSelectable(unittest.TestCase):
    def test_default_lane_is_i2c(self):
        self.assertEqual(nvbus.LANE_DEFAULT, "i2c")

    def test_lanes_are_named(self):
        self.assertEqual(set(nvbus.LANES), {"i2c", "native", "bulk"})


if __name__ == "__main__":
    unittest.main()
