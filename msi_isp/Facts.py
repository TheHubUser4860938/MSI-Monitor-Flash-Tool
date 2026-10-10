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
# Absolute offsets as measured in the FW.012 image ONLY. Session 14o
# established layout is version-relative (the same blocks sit +0x20000 in
# .009), so cli.bin_header() pattern-searches and uses these only as a
# labeled fallback. Vendor's own CheckModelName reads live-EDID vs the
# embedded EDID -- which is why content-based parsing is the right model.
BIN_LAYOUT = {
    "version":        (0xF800, 3),   # b"012"
    "model_name":     (0xF806, 24),  # b"MAG 341CQ X28"
    "check_checksum": True,
}

FW_BIN_SHA256 = "c357bfe97be4eaa5d22ec0adf12f43fe5e55cb89a4e32d0e7b6feec3969d1064"
# The monitor currently runs FW.009, so its downloaded official image is
# the ground truth for the first backup comparison (measured 2026-10-10):
PREVIOUS_BINS = {
    "009": {"size": 0x1E0000, "sha256": "eff3a05e6443f196d61a1a8292b09082"
            "49b793ddf09af8bef57678411e153ce6",
            "filename_checksum": 0xDC2F,      # _DC2F suffix; crack re-proven
            "live_edid_at": 0x1D0200,         # exact copy of THIS monitor's
                                              # EDID block0 (byte-search)
            "edid_table": (0x1D0200, 0x1D7000),  # ~54 variants + 'RTK FHD'
                                                  # template @0x0B08C
            },
}
FW_BIN_SIZE = 0x1C0000   # 1835008 B: the .012 image size. NOT a general bound
                         # -- .009 measured 0x1E0000 (session 14o): image size
                         # is per-version. Use FLASH_SIZE for fit checks.
FLASH_SIZE = 0x400000    # 4 MiB: A25L032M capacity, cross-confirmed by the
                         # Flash.dat record for our chip ("40 00" = 64 x 64 KiB)

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
# INI timing contract (IspSetting.ini from the real v1.0.6 run). Grounded
# twice, session 14k: the plugin's static initializer (WinIspPlugIn RVA
# 0x32b7b) sets the SAME built-in defaults the loop at 0x34000 consumes
# (movq [0x1024a3a4] = retries 10, Sleep delay 0xC8 = 200 ms) — the INI
# mirrors vendor defaults, not a tuned deployment.
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
#                                             matched against Flash.dat table)
# 0x1d560's identity read is family-branched (fn 0x1da20, scaler enum 'I','H',
#  'N','P' via Comm vtable[0xd0](reg 0x85A, 0xDF, 0); 'G','A','P' via 1-byte
#  I2C read-modify at 0x77, bit5 masked): it returns a 16-bit CAPACITY CODE,
#  and Flash.dat entries are indexed by that code, NOT by a raw JEDEC ID --
#  each record = "70" + capacity-ladder pair + chip name + config + CSV script
#  (A25L020->12 11, A25L040->13 12, A25L080->14 13, A25L032M->16 15: a
#  2/4/8/16/32-Mbit ladder; our flash IS in the table). Mismatch is not fatal:
#  "Flash MisMatch Use Default Value" -> falls back to the 'Default' script.
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
# Notable for our tool: pre-erase chip-detect, per-bank erase with
# per-sector fallback, read-back verify after program, and WP restore even
# on failure paths are all VENDOR practice; the JEDEC 0x1F gate is not (the
# vendor keys on the capacity code above) — it stays our own safety
# addition. Error codes 0xd39/0xd56 = message ids of this plugin.
# ---- Comm_Aux.dll's actual NVAPI surface (session 15a) ------------------
# Decoded from the vendor binary itself (evidence re/g_nvapi_surface.txt,
# repro scratch/nvapi_surface.py). What the Windows tool REALLY executes
# on NVIDIA, and what it does NOT:
#   * Flash ops (ReadFlashData/WriteFlashData/SectorErase/BankErase/
#     IspEnable/SetAuxMode...) are one-alias STUBS in every Comm module --
#     the flash engine lives in the main tool and drives the wire through
#     plain transaction exports (I2CWrite/Read/WriteByte/WordRead/WordWrite/
#     2Sub*/CurrentRead + page length 0x20=32 from INI; rtd38 GFXI2C uses
#     0x80=128). The window choreography and this vocabulary are two views
#     of the same 0x22 register file, not competing surfaces.
#   * NVIDIA backend (dispatcher mode 3) calls exactly 10 NVAPI interfaces:
#     Initialize + 6 display-discovery fns (outputId -> displayMask) +
#     NvAPI_I2CWrite x4 / NvAPI_I2CRead x3, struct = NV_I2C_INFO_V3
#     (0x3002c), bIsDDCPort=1, i2cDevAddress = 8-bit DDC form passthrough
#     (slave<<1|RW), pbI2cRegAddress = &reg arg (combined-format txn),
#     i2cSpeed=0xffff DEPRECATED -- then write-then-read pairs, i.e. the
#     shape ScalerBus already implements byte-exactly via NV0073 0x731341.
#   * ONE private path: legacy NvAPI_Disp_DpAuxChannelControl (QI id
#     0x8EB56969, absent from the R615 public table; community tables + a
#     "NV_DP_AUXCH_CMD_REQ_TYPE_READ" log string name it). Selected by a
#     flag (ds:0x1021ae90, SetAuxMode-adjacent); struct V2 = 0x20068 (104 B);
#     len packed (16B-chunks<<4 | tail) <= 255 B; mode 2 = write (pointer+
#     data), mode 3 = read, 16 B/transaction -- client-side message assembly
#     over DP-AUX. No 615.x SDK control by that name exists: NVAPI is
#     almost certainly re-wrapping the same AUXCH controls from user side.
#   * => No Linux-unreachable NVAPI magic door found. And no evidence ANY
#     Windows run ever reached 0x22 on THIS sink: the only recorded vendor-
#     tool run was under Wine/Proton, and 15e log-reproduced it here -- the
#     prefix's nvapi.dll is a DXVK-NVAPI shim whose NvAPI_Initialize fails
#     at the DXGI adapter gate, so the engine dies BEFORE any I2C call.
#     That 0x45 is "backend dead, wire untouched", NOT "wire silent" (see
#     PROTON_045). Real-Windows behavior on this sink stays UNOBSERVED.
#     Dead-end #11 stands; Intel/AMD measurement (issue #1) is the decider.
NVAPI_SURFACE = {
    "live_interfaces": ["NvAPI_Initialize", "NvAPI_EnumPhysicalGPUs",
                        "NvAPI_EnumNvidiaDisplayHandle",
                        "NvAPI_GetPhysicalGPUsFromDisplay",
                        "NvAPI_GetAssociatedDisplayOutputId",
                        "NvAPI_GetConnectedDisplayIds",
                        "NvAPI_GetAssociatedNvidiaDisplayName",
                        "NvAPI_GetDisplayPortInfo",
                        "NvAPI_I2CWrite", "NvAPI_I2CRead"],
    "private_interfaces": {0x8EB56969: "NvAPI_Disp_DpAuxChannelControl "
                                       "(legacy, 16 B/txn, req-type enum)"},
    "i2c_struct": "NV_I2C_INFO_V3 (0x3002c), bIsDDCPort=1, "
                  "displayMask=display outputId, i2cDevAddress=8-bit DDC",
    "flash_ops": "stubs in Comm layer -- engine is the main tool",
    "backends": "mode 3 = NVIDIA/NVAPI; ADL (AMD) + Intel (IntelControlAPI/) "
                "sibling backends in same dispatch",
}

# ---- Wire WRITE acceptance (session 15b, measured live) ------------------
# T0a: `ddcutil setvcp 0x10 <same value>` -> exit 0 (monitor returned MCCS
#      result 0x00): stateful writes ARE accepted on this link (reference).
# T0b (scratch/vcp_write_test.py): OUR raw 0x03 packet (51 84 03 10 00 32
#      9a) accepted -- brightness 0->50->0 verified through live GET replies,
#      final reply byte-identical to baseline. First accepted+verified+
#      restored write performed by our own framing on this monitor.
#      * Reply layout calibrated for THIS sink: GET payload =
#        [02][result][vcp][filler][MH][ML][SH][SL]; current = p[6]<<8|p[7]
#        (one filler byte beyond the standard layout; pinned against three
#        VCPs x ddcutil's independent live values).
#      * In-band write-REPLY (0x6E 0x82 02 00 ...) never readable through
#        the i2c-dev 0x37 proxy on this stack (retry ladder 0-320 ms ->
#        all-zero) -- the kernel MCCS proxy swallows it. Consequence for
#        the write driver: verification oracle = GET/readback round-trips
#        (already the design: verify-after-program), never the promise
#        that a transaction merely "completed".
# T1 (scratch/write_policy_probe.py): both transports forward 1- and
#      2-byte writes to EVERY slave that ACKs reads (0x30/0x4a/0x4b/0x50,
#      2x6 matrix, zero rejections; emulated slaves swallow writes
#      statelessly). Host-side write policy = only our 0x18-0x22 unlock
#      gate; the sink-side only-refuser is 0x22 itself, at the ADDRESS
#      phase (NACK) -- payload acceptability structurally cannot be the
#      failure variable there.
# ---- Vendor ISP-control ladder = slave 0x35 mailbox (session 15g) -------
# The five 0xd21 sites in WinIspPlugIn (HandShakeBeforeEnterIspModeBy-
# BootType, EnableIspProgramChannelOneBankMode, SetBackgroundFlashWrite-
# Time, ask-start-bank, ask-user-flag/key-address) all ride comm vtable
# slots +0x74 (write) / +0x78 (read) with args (slave8=0x6A -> 7-bit
# 0x35, reg=0xCA, count, &buf): the flashrom-documented MSTAR-style
# scaler mailbox (mstarddc_spi family: enter 0x85 0xA0 [A0 3D 05 02 A0],
# exit ...0x24 -- the same grammar our 0x37 ISP-magic turns out to
# mirror one address over). Failure path stamps status=0x6A =
# 'MSTARDDCCIACK' (no ACK) before logging enumError -> 0xd21.
# LIVE 15g: 0x35 on THIS box = i2c-dev NACK/EIO (probe+read+write),
# relay bare-addr False + TIMEOUT on CA-writes; monitor healthy after
# every cell. => vendor tool's 0xd21 under proton-cachyos is the
# vendor engine itself confirming dead-end #11 through the NVAPI-shim
# path: first non-ACKing slave, first failure. 0x35 joins the dead
# roster (0x18/0x20/0x22/0x35); 0x37/0x50 stay the only alive lanes.
ISP_LADDER = {
    "slave7": "0x35 (8-bit 0x6A), reg 0xCA page via comm slots +0x74/78",
    "status_here": "DEAD: i2c-dev EIO + relay TIMEOUT (15g first i2c-dev "
                   "cells; 14k relay sweep agreed)",
    "engine_verdict": "vendor tool 0xd21 = MSTARDDCCIACK on this ladder "
                      "(12% = first command) -- third-party Linux witness",
}

WRITE_ACCEPTANCE = {
    "vcp_set": "our raw 0x03 packet accepted; state moved 0->50->0, byte-"
               "identical restore (T0b 2026-10-10)",
    "reply_read": "in-band set-reply unreadable via the 0x37 proxy -> "
                  "verify-by-readback is the ONLY write oracle",
    "forwarding": "every ACKed slave accepts forwarded writes on both "
                  "transports (T1 2x6 matrix)",
}

# ---- Vendor toolchain config, fully decoded (session 15d) ----------------
# From IspSetting.ini (identical md5 d1be1f3a... across Wine prefix copies)
# + updater-exe UTF-16 strings + WinIspPlugIn.dll EAT/disasm. Architecture
# facts that reshape our write plan and dump expectations:
#   * ARCHITECTURE = GUI ('MSI Firmware Update Utility') relaunches the
#     same engine as 'WinISPTool.exe --ispdiff --newboot --fw X --comm N
#     --settingfile Y' (and --userdefinedinfo mode) -> PlugIn/
#     WinIspPlugIn.dll engine -> Comm module (commID: 1=Comm_Aux [ours],
#     5=rtd38/Comm_GFXI2C for RTD38-family -- NOT this monitor's path).
#   * DUAL-BANK flash design: [ISP_DualBank] enumBootCodeType=1,
#     bSwitchFLag=1, ulTimeWaitCopyBank=8000, enumIspMode=1 -> update =
#     program inactive bank + switch boot flag (4 MiB chip, two ~2 MiB
#     images: ALSO explains the .009-vs-.012 +0x20000 block-shift = bank
#     slotting, not mere layout drift). Our write driver must implement
#     bank-copy semantics, NOT in-place erase-and-hope.
#   * Version check rides DDC/CI, not the wire under test:
#     [ISP_User_Defined] bGetVersion=1, strVersionDdcciCmd =
#     0x6E,0x51,0x84,0x01,0xFE,0xE1,0xE6 -- BYTE-IDENTICAL to our
#     vendor_fw_version packet (independent confirmation of ddc.py),
#     ucVersionStartIndex=6 ucVersionReadLength=20
#     enumVersionRecordMode=2 (engine worker 0x10025fc0 pushes 0x6E/0x51
#     through comm vtable slot +0x140 = DDCCI mailbox).
#   * BUT flash dump = I2C pages: DumpFlash worker 0x100239b0 uses comm
#     vtable slot +0x14 (I2C_READ) -- flash contents ride the 0x22 lane
#     only. Info over DDC/CI yes; bulk flash no (as decoded).
#   * Bin parsing is INI-driven per release: BinVersionAddress=0xF800
#     BinVersionLength=3 ulModelNamePosInBin=0xF806 (the .012-era ini) --
#     14o's pattern-search was the right call; these keys PROVE addresses
#     are release config, not fixed geometry.
#   * Comm_AUX per-vendor routing knobs (issue-#1 testers care):
#     AUX_GraphicsType=1 (manual vendor select exists),
#     AUX_SendCmdToFirstBranchForAMD=1 (AMD path: ISP cmds via first DP
#     branch -- plain-i2c semantics), AUX_bAutoDetectIntelSDK=1 +
#     AUX_IntelSDKType=1 (Intel path rides Intel's display SDK -- see
#     vendor/Comm/IntelControlAPI/), AUX_CheckSlaveAddress=1 +
#     AUX_(Extar)SlaveAddress knobs (slave address is configurable!),
#     AUX_I2CPageLen=32 (matches Facts), AUX_CheckBranchOUIOnly=0,
#     AUX_CheckDpcdTable=0.
#   * Live probe 15d/15e: ISP-DDC/CI opcode 0xA0 (provenance fixed 15e:
#     strInitialDdcciCmd=[0x85,0xA0] appears in NO binary/INI of THIS
#     package -- it belongs to the CpIspTool lineage the exe pdb reveals,
#     E:\Git\2_CpIspTool\Windows\UserDefinedUI\01_MSI_MAG27_32\...; the
#     shipped tool's only DDCCI record is strVersionDdcciCmd) sent as
#     [51 85 a0 ...]: the sink's answer 6e 80 be parses RIGHT (15e) as a
#     len-flag-0x80 reply with 0xBE = VALID empty-message checksum
#     (0x50^0x6E^0x80) -- 'reply, zero payload', deterministic at the
#     vendor's own 3 s pacing across a 6-variant ladder; only the
#     A0+FE,E1,E6 combo hangs DDC/CI silent (10 s dwell too; reproducible
#     since 15d). 256-subcode paced sweep + byte-stream traces (15e)
#     settle #13: 0x28's one-shot '.009N' = TAIL OF A STALE FW.009
#     VERSION FRAME (frame chk 0x4E='N', interloper-proven) -- cache
#     artifact, not a record. NO flash window behind the mailbox on this
#     unit. CLOSED info-only.
DDCCI_MAILBOX = {
    "frames_per_write": "1 (the empty reply); kernel re-serves it on "
                        "shifting cache windows ~0.75 s apart -- dedupe "
                        "multi-reads by CONTENT before believing 'late'",
    "args": "all 256 sub-args empty-ack; 0xE6/0xFE (FE,E1,E6-family "
            "bytes) hang the lane briefly (self-recovers; witnesses clean)",
    "verdict": "info lane only (version via FE,E1,E6 = our packet); "
               "flash bulk stays 0x22-lane -- on-box options exhausted",
}
VENDOR_CONFIG = {
    "ini_md5": "d1be1f3a9a43fd44e510eb94272f5a1c",
    "comm_ids": {1: "Comm/Comm_Aux.dll (NVIDIA NVAPI/AMD ADL/Intel SDK)",
                 5: "rtd38/Comm_GFXI2C.dll (RTD38 family, 128 B pages)"},
    "isp_mode": "dual-bank: program inactive bank + boot-flag switch",
    "version_path": "DDC/CI mailbox (proven == our vendor_fw_version)",
    "flash_path": "I2C page primitives on 0x22 lane (vtable +0x14)",
    "ddcci_isp_opcode": "0xA0 routed, ALL args answer valid EMPTY reply "
                        "(6e 80 be); .009N hit was a stale-cache read-back "
                        "artifact (proven 15e) -- mailbox CLOSED info-only",
}

# ---- The 0x45 under Wine, now LOG-REPRODUCED (session 15e) ---------------
# Re-ran the vendor GUI under the user's own Heroic prefix, capturing the
# NVAPI shim's own log. Recorded-run environment recovered from the prefix
# (user.reg [Volatile Environment]): DW-Proton 11.0-14 with exactly
# DXVK_ENABLE_NVAPI=1 + DXVK_NVAPI_ALLOW_OTHER_DRIVERS=1, NO
# WINEDLLOVERRIDES, and no DllOverrides registry entries -- our repro is
# environment-faithful. nvapi.log (2026-10-09 23:05, verbatim pattern):
#   "DXVK-NVAPI dwproton-11.0-14 ... (MSI Firmware Update Utility...)"
#   "Creating DXGI Factory (IDXGIFactory1) failed, please ensure that
#    DXVK's dxgi.dll is present"
#   "<-NvAPI_Initialize: NVIDIA or other suitable device not found" x~10
#     (retry cadence matches INI AUX_RetryLimit=10 / ucRetryCount=10)
# ZERO further lines: no I2C interface ever touched. The engine died at
# the NVAPI gate -- THE MONITOR WIRE WAS NEVER CONTACTED under THAT
# DW-Proton configuration; 0x45 = backend-dead-before-wire, not a wire
# datum (upgraded from inference to direct log evidence). NOTE 15f: a
# DIFFERENT stack (umu-run + proton-cachyos-slr, PROTON_ENABLE_NVAPI=1,
# full DXVK -> shim init SUCCEEDS) took the same tool to 12% progress
# and error 0xd21 = ISP-control-stage failure -- the wire WAS reached
# there; see STATUS 15f + open #14 for the discrimination state.
# nvapi(.64).dll is the DW fork of DXVK-NVAPI and its binary DOES carry
# NvAPI_I2CRead/Write interface names (fork extension) -- but the engine
# never got that far. Forcing dxgi/d3d9 native in a DW-Proton *direct*
# launch (runs 2/3) removed NVAPI calls entirely (different init branch)
# -- no DW-Proton launch config reached the wire. The 15f umu +
# proton-cachyos-slr launch (proton setup injects DXVK natively +
# PROTON_ENABLE_NVAPI=1) DID reach it on the SAME prefix: the decisive
# variable is the RUNTIME STACK, not the prefix. Real Windows remains
# UNOBSERVED (unchanged).
PROTON_045 = {
    "shim": "dwproton-11.0-14 DXVK-NVAPI (prefix sys32/syswow64 nvapi)",
    "gate": "NvAPI_Initialize fails: DXVK needs its own dxgi; prefix "
            "keeps dxgi builtin (no overrides recorded in the run env)",
    "wire": "zero I2C calls logged -> 0x45 is NOT wire evidence; dead- "
            "end #11 stands with a logged cross-check of the Wine route",
}

# ---- Bulk I2C-over-AUX control (0x73137C), probed session 14n -----------
# NV0073_CTRL_CMD_DP_AUXCH_I2C_TRANSFER_CTRL: "bulk ... splitting up the
# data into pieces and retrying for pieces that aren't ACK'd" (SDK doc).
# From userland (even root): NV_ERR_INVALID_CLIENT (0x23) -- the fd-table
# gate. From kernel context (our relay's MSI_AUXCH_BULK ioctl): ALIVE.
# Measured facts (scratch/bulk_kernel_test.py, 615.78.08 + GSP):
#   * addr field = PLAIN 7-bit, same convention as 0x731341 -- the SDK's
#     "20 bits valid" phrasing does NOT mean pass 8-bit DDC forms (0xa1 ->
#     NV_ERR_GENERIC).
#   * size = byte count IN/OUT (NOT 0-based, unlike the auxch ctrl struct).
#   * 256 B transactions land whole (EDID blocks 0+1 in ONE call, byte-
#     perfect, no first-byte quirk -- that quirk is i2c-dev-shim-only).
#   * branch slaves 0x30/0x4a/0x4b ACK here: NO address policy in the
#     control. NV_ERR_GENERIC (0xffff) == unoccupied-slave outcome ==
#     genuine wire silence at the sink.
#   * Slave 0x22 -> GENERIC in both addr forms, read and (unlocked) write:
#     dead-end #11 CONFIRMED FROM A FOURTH ORIGIN -- the most likely
#     control behind NVAPI's working I2C fails identically from Linux
#     kernel context. Windows-vs-Linux delta narrows to NVAPI's path/
#     sequencing (open question #2), not privilege, not this control.
BULK_I2C_STATUS = {0x0000: "OK", 0xFFFF: "NV_ERR_GENERIC (wire failure)",
                   0x0023: "NV_ERR_INVALID_CLIENT (userland origin only)",
                   0x0026: "NV_ERR_INVALID_DEVICE", 0x0040: "NV_ERR_INVALID_STATE",
                   0x0056: "NV_ERR_NOT_SUPPORTED"}

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

# ---- ISP register-window primitive (decoded 2026-10-09, session 14i) ----
# The erase/program/verify pipeline steps drive the flash through one
# common primitive, via Comm vtable slots on the interface object:
#   slot +0x14 = 32-byte page I2C transfer   (payload movement)
#   slot +0xc4 = write register32(reg, val)  (32-bit window: regs 0x841-0x84f)
#   slot +0xf0 = write byte(reg, val)        (8-bit legacy: regs 0x83-0x89,
#                                            plus a 0xf3-0xf5/0xff set for
#                                            the program data path)
#   slot +0xf8 = read byte(reg) / +0xd0 = read reg32
# The two register maps carry the same roles:
#   CTRL  (0x841 / 0x83), OPCODE (0x842 / 0x84), ADDR (0x845..0x848 / 0x85..0x88)
# Every flash op is the same five moves (evidence re/g_ispopseq.txt):
#   1. address -> ADDR regs
#   2. CTRL = 0xB8                     (latch)
#   3. OPCODE = JEDEC command          (0x20 sector erase; 0xD8 appears in
#                                       the verify-path window writes;
#                                       program path arms length 0x100 = a
#                                       full 256 B flash page via 0xf5/0x74)
#   4. CTRL = 0xB9                     (GO)
#   5. poll busy (fn 0x3ee40) with a 0x4E20 = 20000 ms budget
# The B8/B9 latch-GO reading is inferred from invariant placement around
# every opcode write + the JEDEC-recognizable opcode values; no public RTD
# documentation exists — as of this decoding, nowhere else on the internet
# is the RTD2711 flash window written up. Flash.dat's older "06,60/61,..."
# index-data grammar (0x22-slave byte protocol) is a DIFFERENT, earlier
# register surface; which one RTD2711 traffic actually uses will be settled
# by the first live 0x22 transaction (Intel/AMD box).
