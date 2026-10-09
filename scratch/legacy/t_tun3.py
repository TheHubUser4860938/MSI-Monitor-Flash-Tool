#!/usr/bin/env python3
"""Decisive I2C-over-AUX encoding test on NVIDIA native AUX (0x731341, root).

Discovery: Linux drivers/auxdisplay-style dp_aux_i2c composes the DP 20-bit
request field as  word8 = (addr<<3)|(rw<<4)|(len-1), where addr(32b) places:
  req[0] = addr>>16, req[1] = addr>>8, req[2] = addr
=> req[0] = slave8>>4, req[1] = (slave8<<4)|(reg>>4), req[2] = (reg<<4)|(len-1)
and the R/W bit lands at req[2] bit4 in the DP-spec position.

RM's `address` u32 places wire byte0 = address>>24 (proven: native DPCD reads
work with word = reg<<2). So our control word = (DP word & 0xFFFFF) << 4.

Earlier sweeps tested slave-at-byte0 forms; THIS form was never tested.
Oracle: EDID slave 0x50 (0xa0/8-bit) at reg 0x00 must return EDID header
bytes 00 ff ff ff ff ff ff 00. Read-only everywhere.
"""
import ctypes, sys, fcntl, glob, os
sys.path.insert(0, str(__import__("pathlib").Path(__file__).resolve().parents[2]))
from msi_isp import nvrm

# ---- rebuild the proven root tree (same as t_tun2) ----
run_ctrl, AUXP, hc, SUB, DID = None, None, None, 0x200, None

class OS21(ctypes.Structure):
    _fields_ = [("hRoot", ctypes.c_uint32), ("hObjectParent", ctypes.c_uint32),
                ("hObjectNew", ctypes.c_uint32), ("hClass", ctypes.c_uint32),
                ("pAllocParms", ctypes.c_void_p), ("paramsSize", ctypes.c_uint32),
                ("status", ctypes.c_uint32)]

class AUXP(ctypes.Structure):
    _fields_ = [("subDeviceInstance", ctypes.c_uint32), ("displayId", ctypes.c_uint32),
                ("bAddrOnly", ctypes.c_uint32), ("cmd", ctypes.c_uint32),
                ("addr", ctypes.c_uint32), ("data", ctypes.c_uint8 * 16),
                ("size", ctypes.c_uint32), ("replyType", ctypes.c_uint32)]

def main():
    nv = nvrm.NvRM()
    nv.connect()
    cards = nv.card_info_raw()
    # card words: (gpu_id, …) as t_aux_root2 parsed; gpu 01:00 -> internal
    # id 0x100 (proven). deviceId via GET_ID_INFO_V2 handled inside alloc_device.
    nv.attach_gpus([0x100])
    hc = nv.alloc_client()
    # device+disp via proven path; subDeviceInstance from device params
    hDev = nv.alloc_device()
    hDisp = nv.alloc_disp_common()
    SUB = getattr(nv, "subDeviceInstance", 0)

    def txn(cmd, addr, data=b"", n=0, ao=0, disp=DID):
        ap = AUXP()
        ap.subDeviceInstance = SUB
        ap.displayId = disp if disp else DID
        ap.bAddrOnly = ao
        ap.cmd = cmd
        ap.addr = addr
        for i, b in enumerate(data[:16]):
            ap.data[i] = b
        ap.size = n
        status = nv.control(hDisp, 0x731341, ap, size=28)
        return status, ap

    REP = {0: "ACK", 1: "NACK", 2: "DEFER", 3: "TIMEOUT", 4: "I2CNACK", 8: "I2CDEFER"}
    rep = lambda ap: REP.get(ap.replyType, f"{ap.replyType:#x}")
    AUX_RD, AUX_WR = 0x9, 0x8

    # sanity baseline
    st, ap = txn(AUX_RD, 0x0000 << 2, n=0)
    print(f"baseline DPCD0 = {ap.data[0]:#04x} ({rep(ap)}) st={st:#x}")

    def dp_word(slave8, reg, nbytes, rd):
        addr32 = (slave8 << 3) | ((1 if rd else 0) << 4)
        w = (addr32 << 8 // 1)  # placeholder, computed below properly
        return None

    # build request field exactly like Linux dp_aux_i2c:
    # addr32 = (slave8<<3) | (rw<<4);  word20 bits[19:15]/... : we place
    # req[0]=addr32>>16, req[1]=addr32>>8, req[2]=low — but that misplaces
    # reg. Correct: addr32 = (slave8<<3)|(rw<<4)|(reg<<8) per Linux line:
    #   { I2C Slave Address (8bits) | R/nW | Address register of I2C device }
    # i.e. addr32 = (slave8<<5)|(rw<<4)|reg? Test BOTH bit-exact variants:
    def ctrl_word(a32, nbytes):
        low = a32 | ((nbytes - 1) & 0xF)
        # RM maps wire req bytes 0..2 from address>>24/16/8 per native proof;
        # so req = big-endian 3 bytes of (ctrl<<4). Verify via known DPCD:
        return (a32 << 4)

    variants = {
        # a32 candidate builders; ctrl = a32<<4
        "L1 (slave<<3)|(rw<<4), reg via req2": lambda s, r, n, rd:
            (((s << 3) | (rd << 4)) << 8 | (r << 4) | ((n - 1) & 7)),
        # hmm variant: word20 = slave8<<12 | reg8<<? ...
    }
    print("variants below; oracle EDID 0xA0 reg0 8B read -> 00 ff ff ff ff ff ff 00")

    def try_read(name, builder):
        w8 = builder(0xA0, 0x00, 8, 1)          # 8-bit wide encoding word
        cw = ((0xA0 << 16) | (0x00 << 8) | 0) & 0  # noop
        return

    # Direct approach: construct req bytes ourselves, then ctrl = (req<<4)? No—
    # native proof: ctrl word >> 2 gave DP word with reg directly; i.e. RM
    # wire = ctrl<<2 big-endian? Re-derive from baseline: ctrl=0x000013(0xD0) etc.
    # Baseline reads worked with ctrl = reg<<2, n from cmd. For wire bytes
    # [b0 b1 b2 len], native DPCD read used b0b1b2 = reg24. ctrl = reg<<2 fits
    # reg24 = ctrl>>2. So ctrl = (b0<<26)|(b1<<18)|(b2<<10)|(n<<2)? No: b0 is
    # MSByte of the 24-bit wire address; ctrl>>2 = wire24 ->
    # ctrl = wire24<<2. For native DPCD, wire24 = (reg20<<4)|(n>>...)? Enough.

    def wire_read(slave8, reg, nbytes, rw_at):
        # wire bytes per DP spec tunnel i2c: b0 = slave8>>4 (top nibble),
        # b1 = ((slave8 & 0xF) << 4) | (reg>>4), b2 = ((reg & 0xF) << 4) | (n-1)
        # plus spec R/W handled by cmd direction; Linux puts rw at addr32 bit4:
        if rw_at == "native":
            # Linux 32-bit addr: (slave8<<3)|(rw<<4)|(reg<<8)? compose wire from
            # addr32>>16,8,0 with addr32 = slave8<<20? try the exact C:
            a32 = (slave8 << 3) | (reg<<9) | (1 << 4)   # closest read of the comment
            b = [(a32 >> 16) & 0xFF, (a32 >> 8) & 0xFF, a32 & 0xFF]
        else:
            b = [(slave8 >> 4) & 0xFF,
                 ((slave8 & 0xF) << 4) | ((reg >> 4) & 0xF),
                 ((reg & 0xF) << 4) | ((nbytes - 1) & 0xF)]
        w24 = (b[0] << 16) | (b[1] << 8) | b[2]
        return w24 << 2

    for tag in ("DP-spec", "linux-a32"):
        cw = wire_read(0xA0, 0x00, 8, tag)
        st, ap = txn(AUX_RD, cw, n=0)
        dat = bytes(ap.data[:8])
        print(f"{tag:10s} ctrl={cw:#010x} -> {rep(ap):9s} data={dat.hex(' ')} st={st:#x}")

if __name__ == "__main__":
    main()
