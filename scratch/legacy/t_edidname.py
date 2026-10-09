import sys, glob
sys.path.insert(0, ".")
from msi_isp.cli import read_edid, _edid_model_name
from msi_isp.ddc import RTBus
ker = next(open(f,"rb").read() for f in glob.glob("/sys/class/drm/card*-*/edid")
           if open(f,"rb").read(1) == b"\x00")
with RTBus(4) as b: e = read_edid(b)
print("len", len(e), "== kernel:", e == ker)
print("model name resolved:", repr(_edid_model_name(e)))
for tag, txt in ((b"\xfc", "monitor name"), (b"\xfd", "range"), (b"\xfe", "ascii")):
    for i in range(0, len(e)-5, 18):
        if e[i:i+4] == bytes([tag[0],0,0,tag[0]]):
            print(f"  desc@{i:#05x} {txt}: {e[i+4:i+22]!r}")
print("block0 ascii 54:72:", e[54:72])
