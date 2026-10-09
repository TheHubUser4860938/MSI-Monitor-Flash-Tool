#!/usr/bin/env python3
"""Root test of the RM DP-AUX path via msi_isp.nvrm (no monitor writes).

1. build client->device->NV0073 tree (both plain client and root-client)
2. enumerate DP displays (DFP_GET_INFO)
3. native-AUX read of DPCD 0x0000 (read-only, confirms privileged gate)
4. I2C-over-AUX EDID read @0x50, compare to /sys edid (ground truth)
5. ACK-probe ISP flash slave (7-bit 0x20 = 8-bit 0x40) -- address-only write
"""
import sys, glob
sys.path.insert(0, str(__import__("pathlib").Path(__file__).resolve().parents[2]))
from msi_isp import nvrm

rm = nvrm.NvRM(verbose=False)
stride, cards = rm.card_info_raw()
gpu_id = cards[0][2][4] | (cards[0][2][5] << 8) if len(cards) else 0
print(f"root check ok; cards={len(cards)} gpu_id={gpu_id}")

for use_root in (False, True):
    try:
        rm2 = nvrm.NvRM()
        rm2.alloc_client(use_root=use_root)
        rm2.alloc_device(deviceId=gpu_id)
        rm2.alloc_disp_common()
        print(f"tree ok (use_root={use_root})", end=" ")
        try:
            d = rm2.control  # placeholder to keep names local
            found = rm2.dp_dfp_displays()
            print(f"displays={[(hex(i), hex(f)) for i, f in found]}")
        except Exception as e:
            print(f"  display scan failed: {e}")
    except Exception as e:
        print(f"tree FAILED (use_root={use_root}): {e}")
        continue
    return_obj = rm2
    break

rm = return_obj
found = rm.dp_dfp_displays()
dp = [d for d, f in found if (f & 7) == 3] or [d for d, f in found]
print(f"using displayId(s): {[hex(d) for d in dp]}")

for did in dp[:1]:
    # 3) native AUX: read DPCD 0x0000 (DP_SPEC_REVISION)
    try:
        reply, data, st = rm.aux(did, addr=(0x000000 << 2) | 0 | 0, req=nvrm.AUX_REQ_READ,
                                 typ=nvrm.AUX_TYPE_NATIVE)
        print(f"DPCD[0] native-aux: reply={reply} data={data.hex() if data else ''} status={st:#x}" )
    except Exception as e:
        print(f"DPCD native-aux FAILED: {e}")
    # 4) I2C tunnel: EDID 0xA0/0xA1
    try:
        ed = rm.i2c_read(did, 0xA0, 0x00, 128)
        sysfiles = sorted(glob.glob("/sys/class/drm/card*-*/edid"))
        import hashlib
        kmatch = any(hashlib.sha256(ed).hexdigest() == hashlib.sha256(open(p,'rb').read()).hexdigest() for p in sysfiles)
        print(f"I2C-aux EDID: {len(ed)}B head={ed[:8].hex()} matches-sysfs={kmatch}")
    except Exception as e:
        print(f"I2C-aux EDID FAILED: {e}")
    # 5) ISP slave ACK probe (address-only write to 8-bit 0x40)
    try:
        reply, data, st = rm.aux(did, addr=(0x40 << 16) | 0 | 0, req=nvrm.AUX_REQ_WRITE_STATUS,
                                 typ=nvrm.AUX_TYPE_I2C, addr_only=True, retries=3)
        print(f"ISP slave 0x40 probe: reply={reply} status={st:#x}")
    except Exception as e:
        print(f"ISP probe FAILED: {e}")
    # control probe: known-good slave 0xA0 for comparison
    try:
        reply, data, st = rm.aux(did, addr=(0xA0 << 16) | 0 | 0, req=nvrm.AUX_REQ_WRITE_STATUS,
                                 typ=nvrm.AUX_TYPE_I2C, addr_only=True, retries=3)
        print(f"EDID slave 0xA0 probe: reply={reply} status={st:#x}")
    except Exception as e:
        print(f"EDID probe FAILED: {e}")
rm.close()
