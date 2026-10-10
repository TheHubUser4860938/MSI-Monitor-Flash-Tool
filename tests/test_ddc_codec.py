"""DDC/CI codec pinned against real wire bytes captured from this monitor."""
import unittest

from msi_isp.ddc import (
    DDC_SLAVE_W,
    MSG_LEN_FLAG,
    SRC_HOST,
    ddc_check_write,
    ddc_packet,
    ddc_parse_reply,
)

# three actual replies this monitor sent us (ddc.py comment, sessions 5-7):
REAL_REPLIES = [
    bytes.fromhex("6e880200100000640005c5"),        # getvcp 0x10 = 100
    bytes.fromhex("6e880201dd000064000509"),
    bytes.fromhex("6e880200df00ffff02026b"),
]


class TestPacket(unittest.TestCase):
    def test_frame_shape(self):
        pkt = ddc_packet(0x01, b"\x02\x00")
        # [0x51][0x80|len=3][opcode][data...][chk]
        self.assertEqual(pkt[:3], bytes([SRC_HOST, MSG_LEN_FLAG | 3, 0x01]))
        self.assertEqual(len(pkt), 3 + 2 + 1)
        self.assertTrue(ddc_check_write(pkt))

    def test_checksum_is_xor_from_slave_byte(self):
        pkt = ddc_packet(0x0F, b"\xAB\xCD\xEF")
        x = DDC_SLAVE_W
        for b in pkt[:-1]:
            x ^= b
        self.assertEqual(pkt[-1], x)

    def test_check_write_detects_corruption(self):
        pkt = bytearray(ddc_packet(0x01, b"\x02\x00"))
        pkt[3] ^= 0xFF
        self.assertFalse(ddc_check_write(bytes(pkt)))

    def test_source_is_51_not_50(self):
        self.assertEqual(ddc_packet(0x00, b"")[0], 0x51)


class TestParseReply(unittest.TestCase):
    def test_all_real_replies_verify(self):
        for raw in REAL_REPLIES:
            r = ddc_parse_reply(raw)
            self.assertIsNotNone(r, raw.hex())
            self.assertTrue(r["ok"], raw.hex())
            self.assertEqual(r["opcode"], 0x02)      # MCCS reply opcode
            self.assertEqual(r["len"], 8)

    def test_vcp_value_decoded(self):
        r = ddc_parse_reply(REAL_REPLIES[0])
        # payload = [02][00][01?]... getvcp shape: flag, opcode, mh, ml
        self.assertEqual(r["payload"][2:6], bytes.fromhex("10000064"))

    def test_corrupted_checksum_detected(self):
        raw = bytearray(REAL_REPLIES[0])
        raw[-1] ^= 0x01
        self.assertFalse(ddc_parse_reply(bytes(raw))["ok"])

    def test_wrong_leading_byte_rejected(self):
        self.assertIsNone(ddc_parse_reply(b"\x50\x88\x02\x00\x03"))

    def test_zero_length_nack_shape(self):
        r = ddc_parse_reply(b"\x6e\x80\x03")
        self.assertEqual((r["len"], r["ok"]), (0, None))


if __name__ == "__main__":
    unittest.main()
