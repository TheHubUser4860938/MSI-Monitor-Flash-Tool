#!/usr/bin/env python3
"""Decisive DP-path experiment (READ-ONLY apart from proven magic write +
reverted DPCD write). Three theories tested in one pass, as root:

 A. RM I2C mode (0x731341, type=I2C) with the kernel's per-message
    discipline: bare-address FIRST, DEFER retries (7ms x7), then data.
 B. Hand-framed I2C over NATIVE (transparent) AUX mode -- the NVAPI-Windows
    theory: compose the I2C_AUX request word ourselves, try amdgpu's
    verbatim field layout (s8<<12 | start<<4 | nibble).
 C. ISP-alive gating: the sweeps that failed may have been plain-mode;
    redo AFTER the proven 0x94 magic, exit with 0x24.

Oracle chain: DPCD0=0x12 -> EDID bytes -> flash header @0xF806 ('MAG 341..').
"""
import sys, time
sys.path.insert(0, "/home/eugene/Projects/monitor-fw")
from msi_isp import nvrm, nvbus

AUX = nvrm.AUX_TYPE_AUX
RD, WR = nvrm.AUX_REQ_READ, nvrm.AUX_REQ_WRITE

bus = nvbus.NvRMAuxBus()
DID, rm = bus.display_id, bus.rm
print(f"display={DID:#x} gpu={bus.gpu_id:#x}")

def raw_native(req, field, data=b"", n=1, retries=8):
    for i in range(retries):
        name, got, st = rm.aux(DID, field, data=data, req=req, typ=AUX)
        if name in ("ACK", "NACK", "I2CNACK", "TIMEOUT", "INVALID_ARG"):
            return name, got, st
        time.sleep(0.007)
    return name, got, st

print("A1. baseline native DPCD0")
n_, g_, st_ = raw_native(RD, 0x00 << 2, n=1)
print(f"    DPCD0 = {n_} b0={g_[:1].hex() if g_ else '-'}")

print("A2. DPCD tunnel cfg read/enable/revert")
n_, g_, _ = raw_native(RD, 0x00D0 << 2, n=6)
d01 = g_[:6] if g_ else b""
print(f"    D0..D5 = {d01.hex() if d01 else '-'}  cap_bit7={'-' if not d01 else bool(d01[0] & 0x80)}")
name, _, _ = raw_native(WR, 0x00D1 << 2, data=b"\x01", n=1, retries=3)
n2, g2, _ = raw_native(RD, 0x00D0 << 2, n=6)
d11 = g2[:6] if g2 else b""
print(f"    wr01->D1={name}  after={d11.hex() if d11 else '-'}")
if len(g_) > 1:
    raw_native(WR, 0x00D1 << 2, data=bytes([g_[1]]), n=1, retries=3)

# amdgpu verbatim: addr=(u32)msg.address<<12 ; msg.address is 8-bit s8
def field_i2c(s7, reg, n1_):
    s8 = s7 << 1
    return ((s8 & 0xFF) << 12) | ((reg & 0xFF) << 4) | ((n1_ - 1) & 0xF if n1_ else 0)

def kern_msg_native(s7, reg, wdata, rlen):
    """kernel sequence expressed as NATIVE transparent transactions."""
    f0 = field_i2c(s7, 0, 0)                     # bare address (no startaddr)
    name, got, st = raw_native(WR, f0, n=1, retries=5)
    if name != "ACK":
        return f"bareWR:{name}", b""
    if wdata:
        f1 = ((s7 << 1 & 0xFF) << 12) | ((reg & 0xFF) << 4) | \
             (((len(wdata)) - 1) & 0xF)
        name, got, st = raw_native(WR, f1, data=wdata, n=len(wdata), retries=5)
        if name != "ACK":
            return f"dataWR:{name}", b""
    if rlen:
        # bare-address READ, then read-data chunks
        name, got, st = raw_native(RD, f0, n=rlen, retries=5)
        if name == "ACK":
            return "OK", got
        return f"bareRD:{name}", b""
    return "OK", b""

print("B1. native-framed EDID oracle (0x50, read 4 @0 -> want 00 ff ff ff)")
st_, got = kern_msg_native(0x50, 0x00, b"\x00", 4)
print(f"    {st_} data={got[:4].hex() if got else '-'}")
if st_ != "OK":
    st_, got = kern_msg_native(0x50, 0x00, b"", 4)
    print(f"    no-variant: {st_} data={got[:4].hex() if got else '-'}")

print("C1. normal-mode 0x20 bare reads, I2C mode + native, both")
name, got = rm.aux_i2c(DID, 0x20, RD, data=b"\x01", retries=4)
print(f"    I2C bare 0x20 : {name}")
name, got, st = raw_native(RD, field_i2c(0x20, 0, 0), n=1, retries=4)
print(f"    NAT bare 0x20 : {name}")

print("C2. ENTER ISP via 0x37 (proven magic 0x94 write, DEFER-retried)")
name, _ = rm.aux_i2c(DID, 0x37, WR, data=bytes([0x94]), retries=8)
print(f"    magic write: {name}")
time.sleep(3.0)
name, got = rm.aux_i2c(DID, 0x37, RD, data=bytes([1]), retries=8)
alive = bool(got and got[0] & 0x80)
print(f"    status read: {name} {got[:2].hex() if got else '-'} bit7={alive}")

if alive:
    print("C3. ISP-ALIVE sweep")
    for s7, lbl in ((0x20, "flash 0x20"), (0x22, "mcu 0x22"), (0x18, "isp 0x18")):
        nA, gA = rm.aux_i2c(DID, s7, RD, data=b"\x01", retries=4)
        nB, gB, sB = raw_native(RD, field_i2c(s7, 0, 0), n=1, retries=4)
        print(f"    {lbl}: I2C={nA} NAT={nB}")
    print("C4. 0x20 pointer write + 16B read (flash @0x0000)")
    st_, got = kern_msg_native(0x20, 0x00, b"\x00", 16)
    print(f"    native-framed: {st_} {got[:16].hex() if got else '-'}")
    if st_ != "OK":
        name, _ = rm.aux_i2c(DID, 0x20, WR, data=bytes([0, 0]), mot=True,
                             retries=8)
        print(f"    RM-mode ptr write: {name}")
        if name == "ACK":
            name2, g2 = rm.aux_i2c(DID, 0x20, RD, data=bytes([16]), mot=True,
                                   retries=8)
            print(f"    RM-mode read 16: {name2} {g2[:16].hex() if g2 else '-'}")
            rm.aux_i2c(DID, 0x20, WR, data=b"", mot=False, retries=3)
else:
    print("C3-C4 skipped (ISP not alive)")

print("D. exit ISP (magic 0x24) and sanity")
name, _ = rm.aux_i2c(DID, 0x37, WR, data=bytes([0x24]), retries=6)
print(f"    exit write: {name}")
time.sleep(0.3)
n_, g_, st_ = raw_native(RD, 0x00 << 2, n=1)
print(f"    DPCD0 after: {g_[:1].hex() if g_ else name}")
# EDID health vs kernel's own bytes
import pathlib
k = pathlib.Path("/sys/class/drm/card1-DP-3/edid")
if k.exists():
    ref = k.read_bytes()[:8]
    got = rm.i2c_read(DID, 0x50, 0x00, 8, retries=4, subdevice=bus.sub_inst)[0]
    print(f"    EDID health: {'OK' if got == ref else 'DIFF'} {got[:4].hex() if got else '-'}")
bus.close()
