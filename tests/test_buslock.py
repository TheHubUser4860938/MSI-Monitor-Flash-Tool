"""Bus lock semantics — on bus 250 so the /tmp file fallback is guaranteed
(deterministic in CI: no /dev/i2c-250 anywhere). flock arbitration across
independent opens is exactly what the transport code relies on."""
import contextlib
import os
import time
import unittest

from msi_isp.buslock import BusBusyError, bus_lock, lock_path

BUS = 250


class TestBusLock(unittest.TestCase):
    def setUp(self):
        self.path = lock_path(BUS)
        with open(self.path, "w"):
            pass

    def tearDown(self):
        with contextlib.suppress(FileNotFoundError):
            os.remove(self.path)

    def test_exclusive_between_opens(self):
        with bus_lock(BUS):
            with self.assertRaises(BusBusyError) as ctx, bus_lock(BUS):
                self.fail("second acquire must not enter")
            self.assertIn("pid", str(ctx.exception))
            self.assertIn(str(os.getpid()), str(ctx.exception))

    def test_release_then_reacquire(self):
        with bus_lock(BUS):
            pass
        with bus_lock(BUS):
            pass                         # must not raise

    def test_holder_pid_published(self):
        def tag():
            with open(self.path, encoding="ascii") as fh:
                return fh.read().strip()
        with bus_lock(BUS):
            self.assertEqual(tag(), str(os.getpid()))
        self.assertEqual(tag(), "")

    def test_timeout_waits_then_refuses(self):
        t0 = time.monotonic()
        with (bus_lock(BUS), self.assertRaises(BusBusyError),
              bus_lock(BUS, timeout=0.5)):
            pass
        self.assertGreaterEqual(time.monotonic() - t0, 0.4)

    def test_timeout_grants_when_early_release(self):
        import threading
        holder = bus_lock(BUS)
        holder.__enter__()
        threading.Timer(0.2, holder.__exit__, (None, None, None)).start()
        with bus_lock(BUS, timeout=2.0):
            pass                         # took it after the timer freed it


if __name__ == "__main__":
    unittest.main()
