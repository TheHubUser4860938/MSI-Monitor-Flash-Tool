#!/usr/bin/env python3
"""Bisect nvbus vs t_kern6: run nvbus's exact sequence, print every status."""
import os, sys, ctypes, fcntl
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from msi_isp import nvrm
from msi_isp.nvrm import NvRM

rm = NvRM()
stride, entries = rm.card_info_raw()
print("stride", stride, "entries", [(i, e[0], e[4:8].hex(), e[8]) for _s, i, e in entries])
gids = set()
for _s, i, e in entries:
    if e[0] == 1:
        dom = int.from_bytes(e[4:8], "little")
        gids.add(((dom & 0xFFFF) << 16) | e[8])
print("derived gpu ids", [hex(g) for g in gids])
for m in range(3):
    try:
        fdg = os.open(f"/dev/nvidia{m}", os.O_RDWR)
        print(f"open /dev/nvidia{m} ok fd={fdg}")
    except OSError as ex:
        print(f"open /dev/nvidia{m}: {ex}")
h = rm.alloc_client()
print("client", h, "rootClass", rm.rootClass, "os21",
      rm.os21.__name__, "size", ctypes.sizeof(rm.os21))
st = None
try:
    di, si = rm.id_info(0x100)
    print("id_info", di, si)
except Exception as ex:
    print("id_info failed:", ex); di, si = 0, 0
hd = rm.alloc_device(deviceId=di)
print("device", hd)
hp = rm.alloc_disp_common()
print("disp", hp)
# exact scratch aux form: cmd 0x9 addr reg<<2 size 0
print("aux0x200:", rm.aux(0x200, 0, req=nvrm.AUX_REQ_READ, typ=nvrm.AUX_TYPE_AUX))
print("aux0x200 i2c EDID rd:", rm.aux_i2c(hp, 0x50, nvrm.AUX_REQ_READ,
                                          data=bytes(8), mot=True, subdevice=si))
