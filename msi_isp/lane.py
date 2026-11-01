"""The two lanes to the Realtek scaler's register file (session 16b decode).

Comm_Aux.dll drives the scaler through TWO param shapes on the SAME NVIDIA
AUX channel, chosen by a runtime flag (DAT_1021ae90, set by the INI key read
in FUN_1003b7e0):

  lane "i2c"     I2C-over-AUX tunnel. `addr` = the 7-bit slave; the message
                 is [reg_lo, reg_hi] + payload. This is NV_I2C_INFO_V3
                 (0x3002c) behind NvAPI_I2CWrite/Read, and it is the lane
                 every measurement in this repo up to session 15l used.
                 The register surface it reaches is 14i's 16-bit window:
                 CTRL 0x841, OPCODE 0x842, ADDR 0x845..0x848.

  lane "native"  native DP AUX. `addr` = the register INDEX (up to 20 bits,
                 so 0x841-0x84f and 0x60-0x66 are both addressable); payload
                 follows, 16 bytes per transaction, size 0-based; a read is
                 a write-then-read pair. This is the 0x20068 (104 B) block
                 behind the legacy NvAPI_Disp_DpAuxChannelControl wrapper -
                 Comm_Aux FUN_100452c0 (op 2 = write) / FUN_10045060
                 (op 3 = read). The register surface it reaches is 15i's
                 Flash.dat byte-index grammar: 0x60 (CTRL: arm 0x38 / trigger
                 0x39), 0x61 (opcode), 0x64-0x66 (addr/len), reply from 0x64.

So the open question in Facts.ISP_PIPELINE ("which of the two grammars does
RTD2711 traffic actually use?") is not either/or - the grammar follows the
lane. Both are worth probing, and the native lane is reachable without root
through the kernel relay.

Evidence: re/ghidra_isp_engine.md (16b).
"""
from __future__ import annotations

LANES = ("i2c", "native", "bulk")
LANE_DEFAULT = "i2c"

MAX_DATA = 16              # NV0073_CTRL_DP_AUXCH_MAX_DATA_SIZE, both lanes
AUX_MODE_AUX = 0x8         # RM AUXCH cmd bit3: 0 = I2C mode, 1 = native AUX

_REQ_NAME = {0: "write", 1: "read"}


# The slaves that answer a register index rather than a flat DDC/CI packet
# (Facts.SLAVES: scaler_mcu 0x22, isp_ctrl 0x18, isp_data_* 0x19-0x1B,
# isp_read 0x20; kernel/msi_auxch.c gates the same set for I2C writes).
# The native lane is for THESE; the DDC/CI, EDID and branch slaves
# (0x37/0x50/0x30) keep the tunnel framing that is byte-matched to ddcutil.
REGISTER_SLAVES = frozenset({0x18, 0x19, 0x1A, 0x1B, 0x20, 0x22})


def use_native(lane: str, addr7: int) -> bool:
    """Native lane for the register-file slaves, tunnel for the rest."""
    return lane == "native" and addr7 in REGISTER_SLAVES


def req_name(req: int) -> str:
    """Name the direction, ignoring the mode/MOT bits stacked in the word."""
    return _REQ_NAME.get(req & 3, f"req{req & 3:#x}")


def split_register(data: bytes) -> tuple[int | None, bytes]:
    """[reg_lo(, reg_hi)] + payload -> (register index, payload).

    One leading byte is the byte-index grammar (Flash.dat: 0x60/0x61/0x64);
    two are the 16-bit window (14i: 0x841/0x842/0x845). The native lane puts
    the index in the AUX address field and the payload on the wire, which is
    why the register must not be masked to 7 bits there."""
    data = bytes(data)
    if len(data) >= 2:
        return data[0] | (data[1] << 8), data[2:]
    if len(data) == 1:
        return data[0], b""
    return None, b""


def chunks(payload: bytes, size: int = MAX_DATA):
    """16 bytes at a time - the vendor's native loop ((len+1) >> 4 full
    chunks, then the remainder)."""
    payload = bytes(payload)
    for pos in range(0, len(payload), size):
        yield payload[pos:pos + size]
