#!/usr/bin/env python3
"""NV2080_CTRL_CMD_I2C_ACCESS (0x20800610) — NVAPI's real I2C primitive.
Phase-level bit-bang: ACQUIRE -> WRITE_BYTE/READ_BYTE with START/STOP/RAB.
Read-only traffic: EDID oracle at 0x50, then slave 0x22 probes (reads only).
Run: sudo python3 scratch/t_2080acc.py"""
import sys, pathlib, ctypes
sys.path.insert(0, str(pathlib.Path(__file__).resolve().parent.parent))
from msi_isp import nvbus

ACQUIRE, RELEASE = 0x1, 0x2
WB, RB = 0x3, 0x4
TEST_PORT, SET_FAST = 0x11, 0x12
F_START, F_STOP, F_ACK, F_RAB = 0x1, 0x2, 0x4, 0x8
CTRL = 0x20800610
SZ = 36   # token,cmd,port,flags, ptr64, status, size, speed, encr

bus = nvbus.NvRMAuxBus()
rm = bus.rm
print("tree ok; ddc port from PORTID:", end=" ")
try:
    comm, ddc = rm.i2c_portid(bus.display_id, subdevice=bus.sub_inst)
    print(f"comm={comm} ddc={ddc}")
except Exception as e:
    comm, ddc = 0, 0
    print("fail", e)

def mk(cmd, port, flags, buf=None, size=0, speed=0, token=0):
    q = ctypes.create_string_buffer(SZ)
    u = ctypes.cast(q, ctypes.POINTER(ctypes.c_uint32))
    u[0], u[1], u[2], u[3] = token, cmd, port, flags
    if buf is not None:
        p = ctypes.cast(ctypes.addressof(q) + 16, ctypes.POINTER(ctypes.c_uint64))
        p[0] = ctypes.cast(buf, ctypes.c_uint64).value
    u[6], u[7], u[8] = size, speed, 0
    return q

def call(cmd, port, flags, buf=None, size=0, speed=0, token=0, retries=3):
    for _ in range(retries):
        q = mk(cmd, port, flags, buf, size, speed, token)
        st = rm.control(rm.hSub, CTRL, q, size=SZ)
        u = ctypes.cast(q, ctypes.POINTER(ctypes.c_uint32))
        tok, status = u[0], u[5]
        if st == 0 and status in (0, None):
            return st, status, tok, q
        if st != 0:
            continue
    return st, status, tok, q

KE = open("/sys/class/drm/card1-DP-1/edid", "rb").read()

for port in dict.fromkeys([0x0, 0x4, 0x5, ddc] if ddc else [0x0, 0x4, 0x5]):
    st, status, tok, _ = call(TEST_PORT, port, 0)
    print(f"port {port}: TEST_PORT st={st:#x} hwstatus={status:#x} token={tok:#x}")
    if st != 0 or status != 0:
        continue
    # acquire
    st, status, tok, _ = call(ACQUIRE, port, 0)
    print(f"  ACQUIRE st={st:#x} status={status:#x} token={tok:#x}")
    if st != 0:
        continue
    call(SET_FAST, port, 0, token=tok)

    def wr(b, first=True, last=True):
        buf = ctypes.c_uint8(b)
        fl = (F_START if first else 0) | (F_STOP if last else 0)
        return call(WB, port, fl, buf=ctypes.byref(buf), size=1, token=tok)[:2]

    def rd(first=False, last=True, rab=False):
        buf = ctypes.c_uint8(0)
        fl = ((F_START if first else 0) | (F_STOP if last else 0)
              | (F_RAB if rab else 0))
        st, status = call(RB, port, fl, buf=ctypes.byref(buf), size=1,
                          token=tok)[:2]
        return st, status, buf.value

    # EDID oracle: write ptr 0 @0xA0, restart read 8 @0xA1 (last -> STOP)
    ok = True
    for b in (0xA0, 0x00):
        st, status = wr(b, first=(b == 0xA0), last=False)
        if st or status:
            print(f"  EDID wr {b:#04x}: st={st:#x} status={status:#x} -> skip")
            ok = False
            break
    if ok:
        got = []
        st, status, v = rd(first=True, last=False, rab=True)   # repeated start
        got.append(v)
        for i in range(7):
            st, status, v = rd(first=False, last=(i == 6), rab=(i < 6))
            got.append(v)
        head = bytes(got)
        print(f"  EDID read: {head.hex()}  {'MATCH' if head == KE[:8] else 'no'}")

    # slave 0x22: bare address probe + plain read
    st, status = wr(0x44, first=True, last=True)
    print(f"  0x44 ADDR-write: st={st:#x} status={status:#x}"
          f" {'<-- 0x22 ACKS!' if st == 0 and status == 0 else ''}")
    st, status = wr(0x45, first=True, last=True)
    print(f"  0x45 ADDR-write: st={st:#x} status={status:#x}")

    call(RELEASE, port, 0, token=tok)
    if ok:
        break
print("done (zero writes beyond the standard EDID pointer byte)")
