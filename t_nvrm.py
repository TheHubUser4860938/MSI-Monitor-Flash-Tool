#!/usr/bin/env python3
"""Smoke test: can raw RM ioctls do NVAPI-style AUX on this box? Read-only."""
import sys, ctypes
sys.path.insert(0, "/home/eugene/monitor-fw")
from msi_isp import nvrm

r = nvrm.NvRM()
print("1. version check: OK (relaxed, string 615.71.09)")

st, ci = r.card_info_raw()
print("2. card_info stride", st, "n_valid", len(ci));  [print("   ", i, e.hex()) for i, e in [(e[1], e[2]) for e in ci]]
minor = int.from_bytes(bytes(ci[0][2][40:44]), 'little') if ci else None

# ATTACH_GPUS: argument array of NvU32 minors
if minor is not None:
    arr = (ctypes.c_uint32 * 1)(minor)
    try:
        r._ioctl(nvrm.NVESC["ATTACH_GPUS"], arr)
        print(f"3. attach gpu minor {minor}: OK")
    except OSError as e:
        print(f"3. attach gpu: {e}")

try:
    h = r.alloc_client()
    print(f"4. alloc client: hClient={h:#x}")
except Exception as e:
    print(f"4. alloc client FAILED: {e}")
    sys.exit(1)

try:
    hdev = r.alloc_device(0)
    print(f"5. alloc device0: hDevice={hdev:#x}")
except Exception as e:
    print(f"5. alloc device FAILED: {e} (retry deviceId from card_info?)")
    sys.exit(1)

try:
    hd = r.alloc_disp_common()
    print(f"6. alloc NV0073 disp-common: hObj={hd:#x}")
except Exception as e:
    print(f"6. alloc NV0073 FAILED: {e}")
    sys.exit(1)

# 7. DFP_GET_INFO scan to find our DP displayId.
found = r.dp_dfp_displays()
print("7. DFP_GET_INFO valid displayIds:",
      [(f"{d:#x}", f"{f:#x}", "DP" if (f & 7) == 3 else "?") for d, f in found]
      or "none matched, will brute-force AUXCH displayId")

# 8. The money shot: native AUX read of DPCD 0x0000 (rev number) on each
# candidate displayId. type=AUX, addr = 0x000000<<2 | 0 (FW) | size0=0.
cands = [d for d, f in found if (f & 7) == 3] or [0xE0, 0xE1, 0xE2, 0xE3,
        0xF0, 0xF1, 0x0, 0x1, 0x2, 0x3, 0x4, 0x5]
for did in cands:
    name, data, st = r.aux(did, (0x000000 << 2) | 0x0 | 0x0,
                           req=nvrm.AUX_REQ_READ, typ=nvrm.AUX_TYPE_AUX)
    print(f"8. DPCD read did={did:#05x}: reply={name} status={st:#x} data={data.hex()}")
