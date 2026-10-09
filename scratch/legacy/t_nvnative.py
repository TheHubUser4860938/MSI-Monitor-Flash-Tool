import ctypes, struct, os
lib = ctypes.CDLL("/usr/lib/libnvidia-api.so.1")
Q = lib.nvapi_QueryInterface
Q.restype = ctypes.c_void_p
Q.argtypes = [ctypes.c_uint32]
# NVAPI init ID, from the public nvapi_interface.h (NVIDIA/README + NvAPI.h)
INIT = 0x0150E8CE
p = Q(INIT)
print("QueryInterface(0x0150E8CE) ->", hex(p) if p else None)
class NvapiParams(ctypes.Structure):
    _fields_ = [("version", ctypes.c_uint32)]
if p:
    f = ctypes.CFUNCTYPE(ctypes.c_int, ctypes.c_void_p)(p)
    v = ctypes.sizeof(NvapiParams) | (0x00010000 << 16)
    st = f(NvapiParams(v))
    print("NvAPI_Initialize ->", st, "(0 = success; note NVAPI_INCOMPATIBLE_DRIVER=-101, NOT_INITIALISED=-4,-100)")
