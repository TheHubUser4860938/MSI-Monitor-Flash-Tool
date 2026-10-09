import sys, re, ctypes
sys.path.insert(0, str(__import__("pathlib").Path(__file__).resolve().parent))
from msi_isp import nvrm
src = open("/tmp/ogkm/src/nvidia/generated/g_disp_objs_nvoc.c").read()
pat = re.compile(r"/\*flags=\*/\s+(0x[0-9a-f]+)u,\s*/\*accessRight=\*/\s+(0x[0-9a-f]+)u,\s*/\*methodId=\*/\s+(0x[0-9a-f]+)u", re.S)
ids = [int(m.group(3),16) for m in pat.finditer(src)]
print("NV0073 method count:", len(ids))
rm = nvrm.NvRM(); rm.attach_gpus([0]); rm.alloc_client(use_root=False)
rm.alloc_device(deviceId=0); rm.alloc_disp_common()
ok = {} # status -> [ids]
for mid in sorted(ids):
    b = ctypes.create_string_buffer(64)
    st = rm.control(rm.hDisp, mid, b, size=64)
    ok.setdefault(st, []).append(mid)
for st, v in sorted(ok.items(), key=lambda x: (x[0] is None, x[0] if x[0] is not None else 0)):
    print(f"status {st if st is None else hex(st)}: {len(v)}  e.g. {[hex(x) for x in v[:6]]}")
