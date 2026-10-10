"""Transport status integrity (audit session 15l).

The relay/NVSPACES failure mode that matters: an RM control can fail at
the control level (st != 0) while replyType keeps its memset residue of
0 -- which maps to "ACK". Pre-audit, both transports reported that as a
real ACK (phantom ACK, 15k rule) and AuxDevBus.read could then spin
without progress on a "successful" empty read. These tests fake the
ioctl/fd layer; no /dev access, safe in CI.
"""
import types
import unittest

import msi_isp.auxdev as auxdev
import msi_isp.nvrm as nvrm


def _bare_auxdev(ioctl_fn):
    b = auxdev.AuxDevBus.__new__(auxdev.AuxDevBus)
    b.fd = 3                            # never actually used
    b._slave = None
    b._fcntl = types.SimpleNamespace(ioctl=ioctl_fn)
    return b


class TestAuxDevStatus(unittest.TestCase):
    def test_rm_failure_never_reports_ack(self):
        def fake(fd, req, x):
            x.replyType = 0              # residue: would pose as ACK
            x.sizeDone = 3
            x.rmStatus = 0x023           # NV_ERR_INVALID_CLIENT
        b = _bare_auxdev(fake)
        name, got = b._txn(0x22, auxdev.AUX_REQ_READ, data=b"\x03")
        self.assertIn("RM-ERR", name)
        self.assertEqual(got, b"")

    def test_eperm_maps_to_gate_message(self):
        import errno

        def boom(fd, req, x):
            raise OSError(errno.EPERM, "gated")
        b = _bare_auxdev(boom)
        with self.assertRaises(OSError) as ctx:
            b._txn(0x18, auxdev.AUX_REQ_WRITE, data=b"\x00")
        self.assertIn("gated", str(ctx.exception))

    def test_read_stops_on_empty_ack(self):
        # _txn says ACK but hands back zero bytes: read() must return
        # short, not spin forever (the pre-audit loop never advanced).
        b = _bare_auxdev(lambda fd, req, x: None)

        def fake_txn(addr7, req, data=b"", **k):
            return "ACK", b""
        b._txn = fake_txn
        self.assertEqual(b.read(0x37, 16), b"")   # terminates: the point

    def test_read_assembles_across_chunks(self):
        seq = iter([("ACK", b"\x11" * 16), ("ACK", b"\x22" * 4)])

        def fake_txn(addr7, req, data=b"", **k):
            return next(seq)
        b = _bare_auxdev(lambda fd, req, x: None)
        b._txn = fake_txn
        b._term_write = lambda addr7: None
        self.assertEqual(b.read(0x50, 20), b"\x11" * 16 + b"\x22" * 4)


class TestNvrmAuxI2cStatus(unittest.TestCase):
    def test_control_status_beats_reply_residue(self):
        rm = nvrm.NvRM.__new__(nvrm.NvRM)
        rm.hDisp = 1

        def fake_control(_handle, cmd, params, size=None):
            params.replyType = 0         # ACK residue
            params.size = 3
            return 0x023                 # but the control FAILED
        rm.control = fake_control
        name, got = rm.aux_i2c(0x200, 0x22, nvrm.AUX_REQ_READ, data=b"\x03")
        self.assertIn("RM-ERR", name)
        self.assertEqual(got, b"")

    def test_defer_retries_then_reports(self):
        calls = []

        rm = nvrm.NvRM.__new__(nvrm.NvRM)
        rm.hDisp = 1

        def fake_control(_handle, cmd, params, size=None):
            calls.append(1)
            params.replyType = 2         # DEFER
            return 0
        rm.control = fake_control
        orig_sleep = nvrm.time.sleep
        nvrm.time.sleep = lambda s: None
        try:
            name, _ = rm.aux_i2c(0x200, 0x37, nvrm.AUX_REQ_READ,
                                 data=b"\x03", retries=3)
        finally:
            nvrm.time.sleep = orig_sleep
        self.assertEqual(name, "DEFER")
        self.assertEqual(len(calls), 3)  # retry ladder actually ran


if __name__ == "__main__":
    unittest.main()
