import ctypes, ctypes.util, glob, os, subprocess
cands = []
for pat in ("/usr/lib/libnvidia-ml.so*", "/usr/lib64/libnvidia-ml.so*",
            "/usr/lib/x86_64-linux-gnu/libnvidia-ml.so*",
            "/usr/lib/nvidia/libnvidia-ml.so*", "/usr/lib/*/libnvidia-ml.so*"):
    cands += glob.glob(pat)
cands = sorted(set(cands))
print("candidate libs carrying NVAPI symbols:", len(cands))
for c in cands[:8]:
    try:
        l = ctypes.CDLL(c)
        has = hasattr(l, "nvapi_QueryInterface")
    except OSError as e:
        has = f"load-fail {e}"
    print(f"  {c}  nvapi_QueryInterface={has}")
print("--- strings scan on libnvidia-ml.so ---")
lib = cands[0] if cands else None
print("using", lib)
