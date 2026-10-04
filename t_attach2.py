import sys, os, ctypes, fcntl
sys.path.insert(0, "/home/eugene/monitor-fw")
from msi_isp import nvrm

# get gpu ids first
rm = nvrm.NvRM()
stride, cards = rm.card_info_raw()
gids = [e[4] | (e[5] << 8) for _s, _i, e in cards]
print("gpu ids:", gids)

fd0 = os.open("/dev/nvidia0", os.O_RDWR)
arr = (ctypes.c_uint32 * len(gids))(*gids)
try:
    fcntl.ioctl(fd0, nvrm._IOWR(212, ctypes.sizeof(arr)), arr)
    print("ATTACH on /dev/nvidia0: OK")
except OSError as e:
    print("ATTACH on /dev/nvidia0 failed:", e)

# also REGISTER_FD (base+1): associate control fd with card fd?
try:
    fcntl.ioctl(rm.fd, nvrm._IOWR(201, 4), ctypes.c_uint32(fd0))
    print("REGISTER_FD ok")
except OSError as e:
    print("REGISTER_FD failed:", e)
try:
    fcntl.ioctl(rm.fd, nvrm._IOWR(212, 4), ctypes.c_uint32(gids[0]))
    print("ATTACH on nvidiactl after register: OK")
except OSError as e:
    print("ATTACH on nvidiactl failed:", e)
rm.close()
