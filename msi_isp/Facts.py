"""Verified facts about the MAG 341CQP QD-OLED X28 flashing target.

Everything here was established empirically on this machine (RTX 4090,
nvidia open-kernel-module 615.71.09, DP cable, /dev/i2c-4) or by
disassembly of the MSI v1.0.6 ISP tool DLLs. See STATUS.md for provenance.
"""

MONITOR = {
    "model_reported": "MAG 341CQ X28",     # EDID + vendor caps string
    "product_code": "0x3DE3",              # MS-3DE3
    "scaler": "RTD2711",
    "panel": "TPO340QH1-CH01",
    "fw_live": "FW.009N",                  # read natively over vendor VCP
    "ddc_bus": "/dev/i2c-4",
}

# Offsets inside the .bin, read from IspSetting.ini + confirmed against bytes.
BIN_LAYOUT = {
    "version":        (0xF800, 3),   # b"012"
    "model_name":     (0xF806, 24),  # b"MAG 341CQ X28"
    "check_checksum": True,
}

FW_BIN_SHA256 = "c357bfe97be4eaa5d22ec0adf12f43fe5e55cb89a4e32d0e7b6feec3969d1064"
FW_BIN_SIZE = 0x1C0000   # 1835008 bytes

# 8-bit I2C slave addresses as the Windows tool uses them (divide by 2).
SLAVES = {
    "mccs_ddc":   0x6E,   # 7-bit 0x37  VESA MCCS / DDC-CC  (works natively)
    "edid":       0xA0,   # 7-bit 0x50  EDID                (works natively)
    "dp_branch":  0x60,   # 7-bit 0x30  DP branch device    (works natively)
    "scaler_mcu": 0x44,   # 7-bit 0x22  scaler register space (needs ISP)
    "isp_ctrl":   0x30,   # 7-bit 0x18  ISP control/erase   (needs ISP)
    "isp_data_h": 0x31,   # 7-bit 0x19
    "isp_data_l": 0x32,   # 7-bit 0x1A
    "isp_data_x": 0x33,   # 7-bit 0x1B
    "isp_read":   0x41,   # 7-bit 0x20  ReadFlashData burst slave
    "isp_page_len": 32,   # AUX_I2CPageLen / GetI2CPageLength
}

# The vendor DDC/CI query the tool uses to read the running FW version.
# Byte-for-byte reproduced by our own packet builder.
VENDOR_FW_VERSION_CMD = bytes([0x51, 0x84, 0x01, 0xFE, 0xE1, 0xE6])
