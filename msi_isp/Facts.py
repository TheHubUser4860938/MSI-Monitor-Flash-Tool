"""Verified facts about the MAG 341CQP QD-OLED X28 flashing target.

Everything here was established empirically on this machine (RTX 4090,
nvidia open-kernel-module 615.71.09 and 615.78.08, DP cable, /dev/i2c-4)
or by disassembly of the MSI v1.0.6 ISP tool DLLs. See STATUS.md for
provenance.
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

# ---- ISP-entry protocol, fully decoded from Comm.dll (615-tool v1.0.6) ----
# comm!EnterIspMode (fn 0x6ed0) + comm!AutoEnterIspMode (fn 0xc040):
#   for i in range(n):  I2CWrite(slave=0x37, byte=cand[i][0]); Sleep(1);
#                       b=I2CReadByte(0x37); if b & 0x80: winner=i; break
#   then a config-driven write to 0x6F/0x81 precedes each poll (0x4e90 path).
# The candidate table at VA 0x101b5db4, extracted verbatim from Comm.dll:
AUTOENTER_CANDIDATES = [
    (0x94, 0x96, 0x6A),
    (0x64, 0x64, 0x68),
    (0x54, 0x56, 0x58),
    (0x98, 0x9A, 0x68),
    (0x9C, 0x9E, 0x6C),
    (0x90, 0x92, 0x60),
]
# INI timing contract (IspSetting.ini from the real v1.0.6 run):
TIMING = {
    "after_ddcci_write_ms": 3000,
    "after_command_ms":      200,
    "after_reset_ms":      10000,
    "retries":                10,
}
# slave used for the entry handshake (8-bit 0x6E/0x6F == the DDC/CI device)
ISP_HANDSHAKE_SLAVE7 = 0x37
STATUS_READY_BIT = 0x80
EXIT_ISP_CMD = 0x24          # shared with flashrom's mstarddc_spi

# ---- The "_4023" filename checksum, cracked 2026-10-09 (session 14c) ------
# Disassembly evidence (MSI Firmware Update Utility V1.0.6.exe, all RVA):
#   fn 0x4119a0  content checksum: two interleaved movzx/add byte loops
#                (even/odd offsets) + odd-tail byte  ==  plain 32-bit SUM of
#                every byte of the .bin as stored on disk (actual file size).
#   site 0x4137cc `movzx eax, ax` then `cmp eax, [filename-parsed value]`
#                => only the LOW 16 BITS of the sum are compared.
#   value source: last 4 hex chars of the filename (exe strings "Checksum from
#                bin file name string to int:0x%x ..." at 0x413796; absence of
#                the suffix => "Get bin file name checksum fail!").
#   mismatch path: "Compare checksum fail!" MessageBox (xref 0x40febb,
#                verdict from call 0x4133b0 -> 0).
# The WinIspPlugIn strings "CheckSum calculate from read buffer: 0x%x" belong to
# an UNRELATED check: DDC/CI page XOR seeded 0x50 (fn 0x10026d90) -- same rule
# as ddc.py's packet checksum.
# Verified: sum(FW.012 .bin bytes) == 0x0C964023 -> low16 == 0x4023 == filename.
BIN_CHECKSUM_EXPECTED = 0x4023


def bin_content_checksum(data: bytes) -> int:
    """The check the MSI updater compares against the filename's trailing
    4 hex digits: low 16 bits of the plain byte sum (exe:0x4119a0 + mask at
    0x4137cc). Padded-to-4MiB regions agree in low16 whenever the 0xFF pad
    count is a multiple of 0x100 (0xFF * n == 0 mod 2^16)."""
    return sum(data) & 0xFFFF


# ---- The ISP flash pipeline, decoded 2026-10-09 (session 14f) -----------
# WinIspPlugIn.dll export IspFlash@0x8520 is a thin dispatcher (full dump:
# re/f_ispflash_full.txt): validates comm enum {4,5,6,7,0x11,0x1a,0x1b},
# runs InitCommunication+entry @0x7b80, then retries ("---Retry Isp retry
# count: %d---" + KERNEL32!Sleep backoff, fn 0x34000) around a single
# attempt fn 0x34120 ("DoIsp"). The attempt's own debug logs (extracted:
# re/f_ispsteps.txt) state the complete flash sequence, step fn -> label:
#   0x1aa50  "Get Flash Mode"
#   0x17300  "TypeC Usb Isp Check"
#   0x1a050  "Set Mcu Reg Default Value"      (scaler SPI/pin defaults)
#   0x1d560  "Get Flash Type"                 (chip detect -> "Flash Name: %ls"
#                                             matched against Flash.dat entries)
#   0x1db90  "Detect And Config Flash Address Mode"
#   0x1db20  bank-space check                 ("Flash bank not enough!")
#   0x1ad20  "Set WP Pin"
#   0x1e8f0  "Disable Software WP"
#   0x203d0  "JudgeSMBUSType"                 (+ 0x1dfa0 "Clear Flag")
# per bank (params: "Bank: 0x%x, ProLen: 0x%x, SectorErase: 0x%x,
# SectorEraseCount: 0x%x"):
#   0x3e610  bank erase (or per-sector loop; "Sector %d Erase In Bank %d Fail")
#   0x3e2a0  program bank ("Bank %d ISP Success" / "...Write Data To Flash Fail")
#   0x3e9c0  read-back verify ("Bank %d Get Final Code Fail!")
#   0x21040  write version/flag region ("Write Flag Fail!")
# teardown:
#   0x1e7c0  "EnableSoftWareWP"               (restore write protect)
#   0x1b8f0/0x18fa0/0x2d7c0 restore/reset; logs total "Isp time : %d ms"
# Notable for our tool: the updater itself does chip-detect (so the
# JEDEC-identity gate is VENDOR-sanctioned, not only our invention), erases
# per bank with per-sector fallback, verifies after program, and restores WP
# even on failure paths. Error codes 0xd39/0xd56 = message ids of this plugin.
ISP_PIPELINE = [
    ("get_flash_mode",     0x1AA50),
    ("typec_usb_check",    0x17300),
    ("set_mcu_defaults",   0x1A050),
    ("get_flash_type",     0x1D560),
    ("config_addr_mode",   0x1DB90),
    ("bank_space_check",   0x1DB20),
    ("set_wp_pin",         0x1AD20),
    ("disable_soft_wp",    0x1E8F0),
    ("judge_smbus_type",   0x203D0),
    ("clear_flag",         0x1DFA0),
    ("erase_bank",         0x3E610),
    ("program_bank",       0x3E2A0),
    ("verify_bank",        0x3E9C0),
    ("write_flag_region",  0x21040),
    ("enable_soft_wp",     0x1E7C0),
]
