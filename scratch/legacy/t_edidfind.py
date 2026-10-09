import sys, glob
sys.path.insert(0, ".")
from msi_isp.cli import read_edid
from msi_isp.ddc import RTBus
with RTBus(4) as b: e = read_edid(b)
print("len", len(e))
for f in sorted(glob.glob("/sys/class/drm/card*-*/edid")):
    d = open(f,"rb").read()
    if d: print(f"  {f.split('/')[-1]}: {len(d)}B match={d==e} name@54={d[54:72]!r}")
print("search 'MAG':", e.find(b"MAG"), "search 'QD':", e.find(b"QD"),
      "search 'MSI':", e.find(b"MSI"))
print("descriptors (block:off):")
for blk in range(2):
    for off in (0x12, 0x22, 0x32, 0x42):
        i = blk*128 + off
        print(f"  b{blk}+{off:#04x} (abs {i:#05x}): tag={e[i:i+4].hex(' ')} text={e[i+4:i+22]!r}")
