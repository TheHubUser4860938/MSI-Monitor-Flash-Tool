"""Relay ABI mirror tests: kernel/msi_auxch.c vs its two userspace mirrors.

Pure static analysis -- no /dev access, safe in CI. The C struct field
sequence is PARSED from the module source and compared against
msi_isp/auxdev.py's ctypes mirror and kernel/test_relay.py's acceptance-
test mirror; ioctl numbers are recomputed from the same defines. This is
the drift tripwire for the one ABI that has three copies (C, library,
test) and zero compile-time checking between them. Audit session 15l.
"""
import ctypes
import importlib.util
import os
import re
import unittest

import msi_isp.auxdev as auxdev
import msi_isp.nvrm as nvrm
from msi_isp import nvbus

_HERE = os.path.dirname(os.path.abspath(__file__))
_C = os.path.join(_HERE, "..", "kernel", "msi_auxch.c")


def _load_relay_test():
    spec = importlib.util.spec_from_file_location(
        "msi_relay_test", os.path.join(_HERE, "..", "kernel", "test_relay.py"))
    mod = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(mod)          # module scope is ctypes + consts only
    return mod


def _c_struct_fields(src, name):
    """field names + byte widths parsed from `struct name { ... };`."""
    body = re.search(rf"struct {name} \{{(.*?)\}};", src,
                     re.DOTALL).group(1)
    fields = []
    for stmt in body.splitlines():
        clean = re.sub(r"/\*.*?\*/", "", stmt, flags=re.DOTALL).strip()
        d = re.match(r"(NvU8|__u8|NvU32|__u32)\s+(\w+)(?:\[(\w+)\])?;", clean)
        if d:
            typ, fname, arr = d.groups()
            size = {"NvU32": 4, "__u32": 4}.get(typ, 1)
            if arr:
                n = {"NV0073_CTRL_DP_AUXCH_MAX_DATA_SIZE": 16,
                     "BULK_MAX_DATA": 256}[arr]   # KeyError = new array: review
                size = n
            fields.append((fname, size))
    return fields


class TestStructMirror(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        with open(_C, encoding="utf-8") as fh:
            cls.src = fh.read()

    def test_xfer_mirror_matches_c_field_order(self):
        want = _c_struct_fields(self.src, "auxch_xfer")
        self.assertEqual([f for f, _ in want],
                         [n for n, _ in auxdev._Xfer._fields_])
        self.assertEqual(ctypes.sizeof(auxdev._Xfer), sum(s for _, s in want))
        self.assertEqual(ctypes.sizeof(auxdev._Xfer), 48)

    def test_bulk_mirror_matches_c_field_order(self):
        want = _c_struct_fields(self.src, "auxch_bulk")
        rt = _load_relay_test()
        self.assertEqual([f for f, _ in want], [n for n, _ in rt.Bulk._fields_])
        self.assertEqual(ctypes.sizeof(rt.Bulk), sum(s for _, s in want))

    def test_relay_test_and_library_xfer_agree(self):
        rt = _load_relay_test()
        self.assertEqual([n for n, _ in rt.Xfer._fields_],
                         [n for n, _ in auxdev._Xfer._fields_])

    def test_nvrm_auxch_params_matches_sdk_field_order(self):
        # SDK header field order (verified against 615.78.08
        # ctrl0073dp.h in session 15l): sub, disp, bAddrOnly, cmd, addr,
        # data[16], size, replyType, retryTimeMs.
        self.assertEqual([n for n, _ in nvrm.AUXCHParams._fields_],
                         ["subDeviceInstance", "displayId", "bAddrOnly",
                          "cmd", "addr", "data", "size", "replyType",
                          "retryTimeMs"])
        self.assertEqual(dict(nvrm.AUXCHParams._fields_)["data"]._length_, 16)
        # nvbus import is safe: constants + classes only
        self.assertEqual(nvbus.MAX_DATA, auxdev.MAX_DATA)


class TestIoctlMirror(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        with open(_C, encoding="utf-8") as fh:
            cls.src = fh.read()

    def test_xfer_ioc_number(self):
        self.assertIn("_IOWR('M', 0x41, struct auxch_xfer)", self.src)
        want = ((3 << 30) | (ctypes.sizeof(auxdev._Xfer) << 16) |
                (ord("M") << 8) | 0x41)
        self.assertEqual(auxdev.MSI_AUXCH_XFER, want)

    def test_unlock_is_plain_io(self):
        self.assertIn("_IO('M', 0x42)", self.src)
        self.assertEqual(auxdev.MSI_AUXCH_UNLOCK, (ord("M") << 8) | 0x42)
        self.assertEqual(auxdev.MSI_AUXCH_UNLOCK & (3 << 30), 0)  # no dir bits

    def test_bulk_ioc_number_agrees(self):
        rt = _load_relay_test()
        self.assertIn("_IOWR('M', 0x43, struct auxch_bulk)", self.src)
        self.assertEqual(rt.MSI_AUXCH_BULK, auxdev._iowr(0x43, rt.Bulk))


class TestPolicyMirror(unittest.TestCase):
    """The write-gate band and the DEFER-retry set must agree everywhere."""

    @classmethod
    def setUpClass(cls):
        with open(_C, encoding="utf-8") as fh:
            cls.src = fh.read()

    def _define(self, name):
        m = re.search(rf"#define {name}\s+(0x[0-9a-fA-F]+|\d+)", self.src)
        self.assertIsNotNone(m, f"#define {name} missing from msi_auxch.c")
        return int(m.group(1), 0)

    def test_gated_band_matches_mirrors(self):
        self.assertEqual((self._define("ISP_SLAVE_MIN"),
                          self._define("ISP_SLAVE_MAX")), (0x18, 0x22))
        # auxdev's docstring names the band; guard the drift:
        self.assertIn("0x18..0x22", auxdev.__doc__)

    def test_reply_maps_identical(self):
        rt = _load_relay_test()
        # nvrm carries INVALID_ARG (SDK 0xFFFFFFFF) as the superset;
        # auxdev must match it, and the relay acceptance map must agree
        # on every value it covers.
        self.assertEqual(auxdev.REPLY, nvrm.REPLY)
        for k, v in rt.REPLY_NAME.items():
            self.assertEqual(auxdev.REPLY[k], v)

    def test_unlock_window_constant(self):
        self.assertEqual(self._define("UNLOCK_MS"), 5000)


if __name__ == "__main__":
    unittest.main()
