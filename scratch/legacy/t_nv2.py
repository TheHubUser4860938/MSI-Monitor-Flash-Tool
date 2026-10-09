import ctypes, itertools, os
for path in ("/usr/lib/libnvidia-ml.so.615.71.09", "/usr/lib/libnvidia-api.so.1"):
    try:
        lib = ctypes.CDLL(path)
    except OSError as e:
        print(path, "load fail", e); continue
    try:
        Q = lib.nvapi_QueryInterface
    except AttributeError:
        print(path, "no nvapi_QueryInterface"); continue
    Q.restype = ctypes.c_void_p; Q.argtypes = [ctypes.c_uint32]
    ids = {"Initialize": 0x0150E8CE, "EnumNvidiaDisplayHandle": 0x9ABDD40D,
           "GetAssociatedOUTPUTID": 0xC0867D45, "Unload": 0xD220DD72,
           "QueryInterfaceSelf": 0x00000000}
    print("==", path)
    for n, i in ids.items():
        p = Q(i)
        print(f"   {n:26} {i:#010x} -> {hex(p) if p else None}")
    # NvAPI_Initialize() signature: NVAPI_Status NvAPI_Initialize(void)
    p = Q(0x0150E8CE)
    if p:
        f = ctypes.CFUNCTYPE(ctypes.c_int)(p)
        print("   NvAPI_Initialize() ->", f())
