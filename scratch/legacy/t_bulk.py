#!/usr/bin/env python3
"""Prove msi_isp.nvrm I2C-over-AUX bulk primitives on NVIDIA (run as root).

Test oracle: read EDID (slave 0x50) over the RM AUX channel and compare with
the kernel's EDID from sysfs. If those match byte-for-byte, the primitive is
real and arbitrary ISP slaves become reachable the same way.
Read-only throughout.
"""
import glob
import sys
from msi_isp.nvrm import NvRM

DISPLAYID = 0x200  # confirmed DP head when DPCD[0]=0x12 read succeeded


def kernel_edid():
    for f in glob.glob("/sys/class/drm/card*-*/edid"):
        d = open(f, "rb").read()
        if d[:4] == b"\x00\xff\xff\xff" and len(d) >= 128:
            return f, d
    return None, None


def main():
    f, k = kernel_edid()
    print(f"kernel EDID : {f}  {len(k) if k else 0} bytes")
    rm = NvRM(verbose=False)
    rm.alloc_client()
    rm.alloc_device()
    rm.alloc_disp_common()
    # sanity: native AUX read of DPCD 0 (0x12 = DP 1.4a)
    name, dpcd, st = rm.aux(DISPLAYID, (0x000000 << 2) | (1 << 3) | 0,
                            req=1)  # AUX_REQ_READ
    print(f"DPCD[0]     : {dpcd.hex() if dpcd else st:#x} via native AUX "
          f"(reply={name})")

    edid, ok = rm.i2c_read(DISPLAYID, 0x50, 0x00, 128, retries=3)
    print(f"AUX EDID    : ok={ok} got {len(edid)} bytes")
    if len(edid) >= 128:
        print("  head      :", edid[:16].hex(" "))
        same = edid[:128] == k[:128]
        print(f"  vs kernel : {'MATCH — bulk I2C-over-AUX works natively' if same else 'DIFFERS'}")
        if not same:
            for i in range(128):
                if edid[i] != k[i]:
                    print(f"   first diff @{i}: aux {edid[i]:#04x} vs kernel {k[i]:#04x}")
                    break
    else:
        print("  raw:", edid[:32].hex(" "))
    rm.close()
    return 0 if len(edid) == 128 and edid == k[:128] else 1


if __name__ == "__main__":
    sys.exit(main())
