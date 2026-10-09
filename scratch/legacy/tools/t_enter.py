#!/usr/bin/env python3
"""Live ISP-entry test on the NVIDIA RM bus.

Steps 1-2 are pure reads. Step 3 (behind --go) writes candidate magic bytes
to 0x37 exactly as the Windows tool does, and always attempts the 0x24 exit
and re-verifies DDC/CI afterwards, so the monitor cannot be left in a
degraded state.
"""
import sys, time, pathlib
sys.path.insert(0, str(pathlib.Path(__file__).resolve().parents[3]))
from msi_isp import Facts
from msi_isp.nvbus import NvRMAuxBus
from msi_isp import isp

GO = "--go" in sys.argv

bus = NvRMAuxBus(verbose=False)
print("bus open; display_id =", hex(bus.display_id))

# 1. sanity: EDID must still be byte-identical to the kernel's copy
bus.write(0x50, b"\x00", warmup=True)
edid_bus = bus.read(0x50, 128, warmup=False)  # pointer reset first
ker = pathlib.Path("/sys/class/drm/card1-DP-3/edid").read_bytes()
print("EDID first128 vs kernel:", "MATCH" if edid_bus[:128] == ker[:128] else "DIFF")

# 2. non-invasive ISP-alive probe (pure read from 0x37)
st = isp.isp_alive(bus, verbose=True)
print("ISP alive before:", st if st is not None else "no (normal mode)")

if not GO:
    print("\nread-only pass complete. rerun with --go to try entry writes.")
    bus.close(); sys.exit(0)

# 3. entry: single pass over candidate table, like the tool's first attempt
try:
    idx, st = isp.enter_isp(bus, verbose=True, retries=1)
    print(f"ISP ENTRY OK: candidate {idx} ({Facts.AUTOENTER_CANDIDATES[idx]}), status {st:#04x}")
    ok_entry = True
except isp.IspError as e:
    print("ISP entry failed:", e)
    ok_entry = False

if ok_entry:
    # with ISP alive, do the ISP slaves ACK now? (probe = address phase only)
    for a, n in ((0x20, "isp_read"), (0x22, "scaler_mcu"), (0x18, "isp_ctrl")):
        try:
            ack = bus.probe(a)
        except Exception:
            ack = False
        print(f"  probe {a:#04x} {n}: {'ACK' if ack else 'no-ack'}")

# 4. always: leave ISP mode, verify normal operation fully restored
time.sleep(0.05)
left = isp.exit_isp(bus, verbose=True)
after = isp.isp_alive(bus)
ker2 = pathlib.Path("/sys/class/drm/card1-DP-3/edid").read_bytes()
bus.write(0x50, b"\x00", warmup=True)
edid2 = bus.read(0x50, 128, warmup=False)
print("exit_isp confirmed:", left, "| alive-after:", after is not None)
print("EDID re-verified:", "MATCH" if edid2[:128] == ker2[:128] else "DIFF")
bus.close()
