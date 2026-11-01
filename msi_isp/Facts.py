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
    "fw_live": "FW.009N",                  # RAW vendor-VCP reply as read.
                                          # The trailing 'N' (0x4E) is the
                                          # frame CHECKSUM byte bleeding into
                                          # the string (proven 15e); the
                                          # firmware VERSION is FW.009 --
                                          # docs/expectations say "FW.009"
                                          # and tolerate the N tail
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
# ---- Vendor ISP-control ladder: comm slots +0x74/+0x78 (15g, 15h-fixed) -
# The five 0xd21 sites in WinIspPlugIn (HandShakeBeforeEnterIspModeBy-
# BootType, EnableIspProgramChannelOneBankMode, SetBackgroundFlashWrite-
# Time, ask-start-bank, ask-user-flag/key-address) all call comm vtable
# slots +0x74 (write) / +0x78 (read) pushing (0x6A, 0xCA, count, &buf).
# DISASSEMBLY FACT: the byte pair. INFERENCE (flagged 15h): 0x6A is an
# 8-bit slave -> 7-bit 0x35 (consistent with +0x140's proven 8-bit form);
# the earlier "MSTAR-DP-CI" family label was over-identification -- this
# is a Realtek scaler. flashrom ground truth (source fetched 15h):
# mstarddc_spi PARAMETERIZES its address (dev=…:addr); its enter magic is
# ASCII "MSTAR" and exit a single 0x24; there is NO 'MSTARDDCCIACK'
# constant (15g name was confabulated -- the failure-path `mov [edi],0x6A`
# is most plausibly the slave address in the error record). Community
# MSTAR ISP slave = 7-bit 0x49 (memues/mstar-monitor-firmware-dumper:
# "MSTAR" magic, full read, SECOND read + MD5 verify -- same discipline
# as our verify-by-readback doctrine).
# LIVE (15g DP + 15h HDMI, ISP magic verifiably alive on HDMI: cand1 ->
# status 0xCA): 0x35/0x49/0x31-0x34/0x21/0x41 all NACK on BOTH buses;
# "MSTAR" magic unreachable (address-phase NACK precedes payload);
# 0x30 = DDC stub (ACKs 1 byte, EIO beyond). Dead roster: 0x18/0x20/
# 0x22/0x35/0x49; alive lanes stay 0x37/0x50 (+0x4a/0x4b branch, 0x30
# stub). STRUCTURAL CLOSER (15h): I2C_RDWR ioctl = ENOTTY on NVIDIA
# i2c-dev at every address -> flashrom's mstarddc read framing (combined
# 2-msg START) is architecturally impossible on this driver, sink-
# agnostic; every community mstarddc success is amdgpu/i915. The Proton
# 0xd21 run is NOT a wire witness (dxvk-nvapi has no I2C surface at all,
# see PROTON_045) -- the NATIVE probes are the evidence.
ISP_LADDER = {
    "slots": "+0x74 (write) / +0x78 (read), args (0x6A, 0xCA, count, &buf)",
    "slave7": "0x35 IF 0x6A is 8-bit (inference); community family std = "
              "0x49; BOTH dead here (DP 15g, HDMI 15h, ISP-alive)",
    "status_here": "DEAD both transports, both buses, magic-alive state; "
                   "ENOTTY-on-I2C_RDWR closes the flashrom-DDC framing "
                   "thread architecturally (NVIDIA driver, sink-agnostic)",
    "engine_verdict": "0xd21 = engine's own no-further-progress code at "
                      "the first ladder command (12%); under proton-cachyos "
                      "most likely shim-stubbed BEFORE the wire (W2, 15h "
                      "retraction) -- borrowed real Windows + the 12% "
                      "observable remains the only way to settle Windows",
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

# ---- 15h: the shim's true surface + the GSP-era knob evidence -----------
# jp7677/dxvk-nvapi (upstream of the dll BOTH Protons ship -- identical
# 2215950-byte binaries) feature list: DLSS (Vulkan/D3D11/D3D12), Reflex,
# D3D11 extensions, PhysX queries, adapter/display topology, HDR, DRS.
# NO I2C/DDC entry points exist, and the README states it "does not and
# will never cover the complete surface" of NVAPI. Consequences:
#   * the 15f umu/proton-cachyos 0xd21 run cannot have carried ISP bytes
#     through NvAPI_I2CRead/Write -> W2 (stub-fail before the wire) is
#     the leading reading; 15g's "vendor engine confirms dead-end #11"
#     is RETRACTED. The native probes (14k/15c/15g/15h) remain the
#     evidence; the borrowed-real-Windows 12%-observable stands.
#   * open micro-question (15f-forensics): how did that run pass the
#     version/model checks? Candidates: WinOperateCScaler's own path, or
#     DW-fork-specific stub behavior. Does not move any decision.
#   * RMUseSwI2c (+RMI2cSpeed) retirement evidence: documented class =
#     basic-DDC-broken cards (2014-2018 era, debian#999670 2021); this
#     box's basic DDC/CI always worked without it; freshest sighting
#     2026-08-13 dev-forum (RTX 4060 Ti, 595.84 GSP-era): knob + the new
#     RmEnableI2CBUserModeAccess accepted, ZERO effect. Dormant-knob
#     list from that thread (never tried anywhere, all low-value now):
#     RMUsePmuI2c, RMUsePmuSwI2c, RMUsePmuHwI2c, RMHotPlugI2cDisplays,
#     RMI2CValidatedPortMask, RMI2cRevalidateDdcPortWAR,
#     RMI2cClockStretchTimeoutMs.
#   * STRUCTURAL: I2C_RDWR ioctl = ENOTTY on NVIDIA i2c-dev (15h, every
#     address, both buses) -> flashrom mstarddc_spi's combined-START read
#     framing is driver-impossible here, sink-agnostic. Machine's
#     flashrom 1.8.0: ch341a_spi YES (1a86:5512 OK), mstarddc_spi NOT
#     built. Clip route = out-of-box software.
FLASH_CHIP = {
    "part": "AMIC A25L032M (Flash.dat key '70'+cap '40 00' = 4 MiB ✓; "
            "in-house JEDEC record 0x1F4010; GetFlashType uses CSV maps, "
            "never compares 0x9F -- our 0x1F gate is OUR safety mirror)",
    "voltage": "2.7-3.6 V ONLY; data pins NOT 5-V-tolerant -> verify "
               "clone signal levels (zener mod if 5V)",
    "packages": "8-SOP-208-mil OR 8-WSON-6x5 (no legs = clip impossible) "
                "-> PACKAGE CHECK is step 1 of open-case day",
    "geometry": "uniform 4KB sectors, 256B pages, 100MHz max -- matches "
                "14i ladder arms (0x20 sector erase, 0x100 page length)",
    "wp": "advanced BP-bit write protection: record RDID + RDSR BEFORE "
          "any write; flashrom auto-unlocks silently -- playbook must be "
          "explicit read-record/unlock/restore",
    "flashrom": "table entry 'AMIC A25L032' TEST_OK_PREW -- entry "
                "independently re-verified vs flashrom v1.8.0 source "
                "(audit 15l): 4K sector erase 0x20 (also 64K blocks "
                "0x52/0xD8, chip 0x60/0xC7), unlock = BP2/SRWD clearing, "
                "WRSR_WREN + OTP 64B (0x4B/0x48 read, 0x42 write), "
                "2.7-3.6 V -- corroborates the 14i ladder arm reading "
                "(0x20 sector) and the geometry claims; flashrom "
                "auto-unlocks silently, playbook stays explicit",
}

# ---- Flash.dat record->script bind (session 15i Phase A) ----------------
# Full inventory in re/g_flashdat_map.txt (generator: scratch/
# flashdat_bind.py; tests/test_flashdat_bind.py pins the contract).
# File = 12B header + 150 chip records; 31 CSV script bodies inline in
# 15 'template' records; the other 135 inherit the nearest preceding
# script. A25L032M's nearest carrier = its family lead A25L020 (the
# only '70'-family template), so family-rule vs previous-rule loaders
# agree -- bind is rule-agnostic. (The loader itself lives in the
# missing WinISPTool.exe; rule inferred from layout: flag as inference.)
# OUR SCRIPT (18 stmts, grammar-perfect): window protocol per 14i --
# 06,60,<idx>/06,61,<data> byte window; transactions stage opcode in
# reg 0x61 + addr/len regs 0x64-66, then ARM via 0x60<-0x38 and TRIGGER
# via 0x60<-0x39 (mirrors the 14i CTRL 0xB8-latch/0xB9-GO ladder
# discovery -- two independent decodes agreeing), then 0d,60,... poll
# (8-token reads in this family; GD/IS/PM QPI templates carry +3 tail
# fields -- parser flags those, none of them ours). Sequence: raw
# window write idx0x20<-0x06, SPI txn opcode 0x90 (Device-ID class --
# the record KEY '70 16 15' IS this response), SPI txn opcode 0x3B
# len-0x40 (64-byte read). W25X2XX template staging 0xAA/0x55 = the
# Winbond CAKE keys: corroborates the opcode-staging reading.
# SCOPE HONESTY: Flash.dat answers chip-ID/init only -- bank bases and
# the boot-flag address are NOT in it (engine stages + the dump decide,
# CLIP-PLAYBOOK step 5). And this whole script rides the SCALER window
# lane: the clip route bypasses it entirely; its value to us = the
# vendor's own ID gate (0x90 -> '70 16 15') vs our independent 0x9F/
# 1F4010 mirror -- two different commands, never conflate.
FLASHDAT_MAP = {
    "record": "A25L032M @0x111, key 37 30 16 15 ('70'+device bytes), "
              "cap 40 00 = 4096 KiB, params class-pair 02 02",
    "script": "inherited from A25L020 template @0x37 (18 stmts); both "
              "plausible loader inheritance rules resolve identically",
    "id_gate": "vendor gate = 0x90 Device-ID '70 16 15' over scaler "
               "window; OUR gate = 0x9F JEDEC 1F4010 -- independent "
               "mirrors, and 0x38/0x39 arm/trigger == 14i B8/B9",
}

# ---- Standby/no-signal axes (session 15j; scratch/standby_*.py) -----
# The MStar-community flash recipe (boeglin 2014, upstream of flashrom
# mstarddc_spi) needs the monitor ASLEEP + analog DDC. We can never
# automate sleep on this box: DPMS-off is invisible to the scaler (link
# stays trained, Xwayland xrandr --off BadMatch'd), blinding the input
# (VCP 60 -> 0x10 verified) keeps DDC/CI + ISP magic fully alive for
# 150 s, and VCP D6 is silently ignored (undeclared, verify fails).
# => true standby = physical button only, still untested there.
# Across every reachable axis the bus is FROZEN-IDENTICAL: ACK set
# {0x30,0x37,0x4a,0x4b,0x50}, magic cand5 -> 0x8A, 0x35 silent.
# DDCCI-ISP datum: the INI strInitialDdcciCmd PAIR [0x85,0xA0] (and
# [0xA0,0x85]) are the only non-zero-reply writes ever observed on
# 0x37: mailbox ack 6e 80 be (#13 valid-EMPTY) x2 idempotent, but NO
# lane opens (0x35 stays silent, isp_alive None). Gen-2 opcode roster
# {07,0C,85,A0,C2,C4,C6,C8} in window grammar: all dead zeros.
# 15h HDMI CONFESION: 0x21/0x41/0x49 are outside NVIDIA's i2c-dev
# allow-list -> those HDMI 'NACKs' were driver-side never-on-wire. The
# unfiltered DP relay A1 (0x03-0x77) remains the hard verdict; honest
# analog-bus closure = CH341A I2C mode on kit day (CH341A = SPI+I2C+
# UART: RTD ISP-UART header is a clip-alternate to hunt when open).
STANDBY_AXES = {
    "dpms_xrandr": "scaler never sleeps (host link stays trained)",
    "input_blind": "DP-2 empty-input verified; 151 s: 0x37/0x50 ACK, "
                   "magic cand5->0x8A, 0x35 silent, table frozen",
    "d6_power": "ignored: undeclared, setvcp verify-fail, no sleep",
    "button_semantics_USER_CORRECTION": "the power button = FULL OFF, "
        "not standby; standby is reached only via no-signal (auto). "
        "Reframe: 'blind input' experiments were actually probing the "
        "no-signal-standby region all along (DDC/CI demonstrably lives "
        "through it); and a second distinct cell now matters = powered- "
        "OFF bus state, which boeglin-2014 says also worked ('even seem "
        "to work when the screen is off'). Neither state was ever "
        "visually timestamped by us — next runs pair a bus poll with "
        "the user's eyes.",
    "ddcisp_85a0": "routes to mailbox (6e 80 be x2) but opens nothing; "
                   "the only writes EVER with non-zero reply on 0x37",
    "cellB_powered_off": "CLOSED negative (15k): content-level NOTHING "
        "(i2c-dev EIO; aux version-query stalls ~8 min) BUT bare-addr "
        "relay probes still ACK = PHANTOM completions on the dead link. "
        "RULE: bare ACKs on NVIDIA aux are only meaningful paired with "
        "a content oracle (off_content_probe.py pattern). DP HPD death "
        "makes 'flash while asleep' structurally non-portable from the "
        "VGA-era community recipe. 15k UPDATE: the phantom window is "
        "BIDIRECTIONAL -- right after power-on (scaler boot ~20 s) "
        "bare probes ALSO all-ACK before the DDC/CI proxy comes up; "
        "GATE every sweep behind a passing content oracle (version "
        "reads 'FW.*' = go). Post-cycle settled sweep = frozen "
        "baseline; one 0x03 single-sighting noted.",
    "queued": "cell A (no-signal-standby sweep WITH visual dark/LED "
              "confirmation) = polish-grade, queued; cell B CLOSED "
              "negative 15k (content-verified, see cellB_powered_off); "
              "relay is LIVE (pkexec loaded), rmmod fully reversible",
}

# ---- Gaming Intelligence payload dissection (session 15j) --------------
# download.msi.com/uti_exe/monitor/Gaming-Intelligence-x64.zip (477 MB,
# Inno Setup 6.1 'zlb'/zstd -- innoextract works). GI bundles its OWN
# CpIspTool deployment (WinISPTool.exe + PlugIn/{WinIspPlugIn.dll,
# Flash.dat} + 322-line IspSetting.ini + runtime logs) with comm
# backends {RealtekUSB, NewRealtekUSB, FTDIUsb, NuvotonI2C} -- i.e.
# the monitor's built-in USB MCU (msigd's 1462:3fa4) as I2C master.
# GI has NO Comm_Aux / Comm_GFXI2C; our X28 package has NO USB comms:
# the two transport families are disjoint. GI's model DB lists
# MAG341CQP_QD_OLED + MPG341CQPX -- NO X28 => the standalone tool we
# own IS MSI's X28 path; the GI-RE lead closes.
# IspLog.txt (successful run, GD25Q32C model, ID c8 40 16 15 = same
# device-bytes family as our record key 37 30 16 15): two-stage
# handshake Try 0x6A -> HID path -> Try 0x6E / Get 0x6E (= 0x37
# 8-bit; same lane as our cand5 status walk 0x00->0x6e->0x8a) ->
# Enter ISP -> Bank 57 then Bank 56 erase+program (inactive-first,
# == our practice design). Fresh INI: bSmbusBlockReadWrite=1,
# bEnableTypecUsbEnterISPMode=1, bISPCheckTypecUsb=1,
# usBackgroundFlashWriteTime=5.
# INFERENCE (flagged): 0x6A mailbox is MCU-internal on GI-era models;
# X28 exposes no internal carrier -> borrowed real Windows likely ALSO
# dies at 12 % (Comm_Aux lane). Falsifiable via the 12 % observable.
GI_BUNDLE = {
    "verdict": "GI = USB-MCU/bridge world; X28 absent from its model DB",
    "witness": "successful CpIspTool log: 0x6A + 0x6E handshake, "
               "bank57-then-56 program, enumError 0x0 at every stage "
               "we fail on (0x6A)",
    "prediction": "borrowed Windows on X28 stops at 12 % (medium "
                  "confidence) -- clip/UART/service routes stay primary",
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

# ---- Vendor comm contract, decoded with Ghidra (session 16b) -------------
# Evidence: re/ghidra_isp_engine.md (every address). This is the contract the
# write driver must satisfy, and it settles the 14i open question at the top of
# ISP_PIPELINE's comment: the two register grammars are not competing views of
# one surface, they are the two LANES - the byte-index grammar (0x60/0x61/
# 0x64-0x66, Flash.dat) rides native DP AUX, the 16-bit window (0x841/0x842/
# 0x845) rides the I2C-over-AUX tunnel. `nvbus.LANES` implements both.
#
# COMM_AUX_INI is the whole `Comm_AUX` section as Comm_Aux.dll reads it
# (FUN_1003b7e0 @ 0x1003b7e0): MSI ships a subset, so every default listed
# here is a value the tool runs on that the INI never mentions.
COMM_AUX_INI = {
    "AUX_DetctType": dict(default=1, slot="DAT_1021ae18",
                          where="comm InitialDev",
                          what="display detect: 1=AUTO, 2=MANUAL"),
    "AUX_GraphicsType": dict(default=1, slot="DAT_1021ae1c",
                             where="comm InitialDev",
                             what="backend: 1=Intel, 2=AMD, 3=NVIDIA"),
    "AUX_NeedRetry": dict(default=1, slot="DAT_1021ae20",
                          where="comm (I2CWrite/I2CRead wrappers)",
                          what="retry enabled in the COMM layer"),
    "AUX_RetryLimit": dict(default=10, slot="DAT_1021ae24",
                           where="comm (I2CWrite/I2CRead wrappers)",
                           what="retry count - the '10 retries' is comm's, "
                                "not the core's (proves 15d reading)"),
    "AUX_DelayTime": dict(default=5, slot="DAT_1021ae28",
                          where="comm",
                          what="inter-transaction delay (ms)"),
    "AUX_MutiMonitorSelect": dict(default=1, slot="DAT_1021ae2c",
                                  where="comm InitialDev",
                                  what="multi-display pick (clamped <=2)"),
    "AUX_MutiRTMonitorSelect": dict(default=0, slot="DAT_1021ae30",
                                    where="comm InitialDev",
                                    what="multi-realtek-display pick"),
    "AUX_SelectDeviceInfo": dict(default="", slot="funnel 0x100351f0",
                                 where="comm InitialDev",
                                 what="select the display BY NAME string - "
                                      "how MSI pins this monitor"),
    "AUX_RecordSelectDevice": dict(default=1, slot="DAT_1021ae38",
                                   where="comm", what="log the chosen device"),
    "AUX_CheckDpcdTable": dict(default=1, slot="DAT_1021ae3c",
                               where="comm InitialDev",
                               what="validate a DPCD table on the sink "
                                    "(the 0x00D0 tunnel-bit gate)"),
    "AUX_I2CPageLen": dict(default=32, slot="DAT_1021ae40",
                           where="comm (GetI2CPageLength + write limit)",
                           what="tunnel page; ALSO the max bytes per "
                                "I2CWrite (len > it -> 0x807)"),
    "AUX_CheckSlaveAddress": dict(default=1, slot="DAT_1021ae44",
                                  where="comm", what="probe the slave before use"),
    "AUX_CheckExtarSlaveAddress": dict(default=0, slot="DAT_1021ae48",
                                       where="comm",
                                       what="also check an EXTRA slave"),
    "AUX_OnlyUseExtarSlaveAddress": dict(default=0, slot="DAT_1021ae4c",
                                         where="comm",
                                         what="use ONLY the extra slave - the "
                                              "knob for a non-standard ISP lane"),
    "AUX_ExtarSlaveAddress": dict(default=0, slot="DAT_1021ae50",
                                  where="comm",
                                  what="the extra slave address (vendor's "
                                       "spelling 'Extar')"),
    "AUX_EnableDebugLog": dict(default=1, slot="DAT_1021ae54",
                               where="comm",
                               what="AUX DETECT AUTO/MANUAL, AMD AUX!!!, "
                                    "not find Intel graphics!!! - the log "
                                    "lines are this flag (on by default)"),
    "AUX_StopIsp": dict(default=0, slot="DAT_1021ae5c",
                        where="comm InitialDev tail",
                        what="stop-ISP gate; drives the 0x1d multi-candidate "
                             "returns"),
    "AUX_RecordI2CData": dict(default=0, slot="DAT_1021ae58",
                              where="comm (every write path)",
                              what="record the I2C bytes (the per-retry log)"),
    "AUX_WaitDelayTimeAfterSendData": dict(default=0, slot="DAT_1021ae60",
                                           where="comm native write",
                                           what="Sleep after a native write"),
    "AUX_bAutoDetectIntelSDK": dict(default=1, slot="DAT_1021ae64",
                                    where="comm InitialDev",
                                    what="auto-detect the Intel SDK"),
    "AUX_IntelSDKType": dict(default=1, slot="DAT_1021ae68",
                             where="comm InitialDev",
                             what="which Intel SDK"),
    "AUX_CheckBranchOUIOnly": dict(default=0, slot="DAT_1021ae6c",
                                   where="comm InitialDev",
                                   what="match the DP branch by OUI only "
                                        "(our 0x4a/0x4b branch)"),
    "AUX_CheckSpecificDPCD": dict(default=0, slot="DAT_1021ae70",
                                  where="comm InitialDev",
                                  what="require specific DPCD bytes"),
    "AUX_SPDPCDStartAddr": dict(default=0, slot="DAT_1021ae8c",
                                where="comm InitialDev",
                                what="start address of that DPCD check"),
    "AUX_SPDPCDData": dict(default="", slot="funnel 0x100351f0",
                           where="comm InitialDev",
                           what="the expected DPCD bytes (string)"),
    "AUX_CheckOnBoardDevice": dict(default=0, slot="DAT_1021ae74",
                                   where="comm InitialDev",
                                   what="require an on-board device"),
    "AUX_SendCmdToFirstBranchForAMD": dict(default=1, slot="DAT_1021ae78",
                                           where="comm (AMD backend)",
                                           what="AMD: send a command to the "
                                                "first branch device"),
    "AUX_UseNameLoadIntelDriverControlDll": dict(
        default=0, slot="DAT_1021ae7c", where="comm (Intel backend)",
        what="load IntelControlAPI by name (the shipped dll folder)"),
    "AUX_IncompleteWriteNeedRetry": dict(default=1, slot="DAT_1021ae80",
                                         where="comm",
                                         what="retry a short write"),
    "AUX_NvidiaMSTSupport": dict(default=0, slot="DAT_1021ae84",
                                 where="comm (NVIDIA backend)",
                                 what="MST support off"),
}

# AUXInitialDev (FUN_10039e50): AUTO tries AMD first, then Intel, then NVIDIA;
# MANUAL honours AUX_GraphicsType. Proven by the detect calls and the
# "AMD AUX!!!" / "not find Intel graphics!!!" log strings on each branch.
COMM_BACKENDS = {1: "Intel", 2: "AMD", 3: "NVIDIA"}
COMM_AUTO_DETECT_ORDER = ("AMD", "Intel", "NVIDIA")
COMM_BACKEND_DLLS = {
    "Intel": "vendor/Comm/IntelControlAPI/ (AUX_UseNameLoadIntelDriverControlDll)",
    "AMD": "ADL (atidxx64) - the backend AUTO picks first",
    "NVIDIA": "nvapi.dll - NvAPI_I2CWrite/Read (NV_I2C_INFO_V3 0x3002c) "
              "plus legacy NvAPI_Disp_DpAuxChannelControl (0x20068, 104 B)",
}

# AuxI2CWrite (FUN_1003a3e0) / AuxI2CRead (FUN_1003a630) limits, proven:
PAGE_NATIVE = 16            # GetNativePageLength (0x1003b050) -> 0x10
PAGE_I2C = 32               # GetI2CPageLength   (0x1003b030) -> INI, def 0x20
COMM_MAX_TRANSFER = PAGE_I2C
COMM_SIZE_IS_ZERO_BASED = True   # every size field is n-1 (also our RM lane)
COMM_ERRORS = {
    0x800: "no display/device found (AUXInitialDev)",
    0x801: "length given with no buffer",
    0x802: "I2C read failed (backend returned 0)",
    0x803: "I2C write failed (backend returned 0)",
    0x804: "unknown backend (AUX_GraphicsType outside 1..3)",
    0x807: "transfer longer than AUX_I2CPageLen",
    0x1d: "more than one candidate display/branch (AUX_StopIsp path)",
}

# The comm object vtable the plugin speaks (SetCommInterface @ 0x10008700 ->
# DAT_10249d10). Slots proven by call site in WinIspPlugIn.dll this session;
# +0x74/+0x78 are the 15g mailbox pair, kept. 'site' = the calling function.
COMM_VTABLE = {
    0x14: dict(what="device type", site="0x100239b0",
               note="returns a COMM_SCALER_TYPES family code"),
    0x30: dict(what="pose/point the bus", site="0x1001bbd0",
               note="arg from DAT_1024a350 (config)"),
    0x44: dict(what="mode set", site="0x1001bbd0", note="arg 2 on the "
               "RealtekUSB families, before SetWaitingMode"),
    0x54: dict(what="I2C write (mailbox args)", site="0x10008ec0",
               note="I2CWriteExport's fast path: 3 bytes from obj+0x42f50..52 "
                    "+ buffer at +0x42f53"),
    0x74: dict(what="ISP mailbox WRITE", site="0x1001ba20",
               note="15g: args (0x6A, 0xCA, count, &buf)"),
    0x78: dict(what="ISP mailbox READ", site="0x1001ba20",
               note="15g: same pair"),
    0x94: dict(what="settle delay", site="0x1001bbd0", note="arg 200 (ms)"),
    0xa0: dict(what="SetWaitingMode", site="0x100239b0",
               note="(2,100) on USB families in DumpFlash, (0,0) on enter"),
    0x10c: dict(what="teardown", site="0x10008700",
                note="called by SetCommInterface on the old object"),
    0x124: dict(what="Enter ISP mode", site="0x1001bbd0",
                note="arg 1; failure logs 'Enter ISP mode fail! Error code:0x%X.'"),
    0x13c: dict(what="I2C write (alt path)", site="0x10008ec0",
                note="taken when obj+0x43054 != 0"),
    0x214: dict(what="ISP-side selector", site="0x1001bbd0",
                note="arg 1; unresolved - the enter ladder's third shape"),
    0x21c: dict(what="Set Background Flash Write Time", site="0x1001bbd0",
                note="args (0x45, 0xc, DAT_1024a3b4, 0, 0) - a REGISTER, not "
                     "the 0x45 error code"),
    0x28c: dict(what="GetQCDisplaySetting", site="0x1001ba20",
                note="(&int, &int); failure logs 'GetQCDisplaySetting fail, "
                     "error code:0x%x'"),
}
COMM_SCALER_TYPES = [3, 8, 0xe, 0x13]   # values compared against slot +0x14

# IspFlash (0x10008520) runs only for these DAT_1024a2d4 values; the bank map
# is the dual-bank ISP stage that produced the 12% 0xd21 under Proton.
ISP_MODES = {4, 5, 6, 7, 0x11, 0x1a, 0x1b}
ISP_BANKS = {0x1a: "background", 0x1b: "foreground"}

# 0xd21 named: Isp_HandShakeByBootType (0x1001ba20) returns it when the
# boot-type selector DAT_1024a2f0 == 1. An ENGINE verdict about the boot
# type, not a wire NACK - the wire is untouched at that point.
ISP_HANDSHAKE_ERROR = {
    "code": 0xD21, "fn": "Isp_HandShakeByBootType", "rva": 0x1BA20,
    "gate": "DAT_1024a2f0 == 1", "module": "WinIspPlugIn.dll",
    "log": "HandShakeBeforeEnterIspModeByBootType fail, error code:0x%x",
}


# ---- The vendor's ISP slave candidates (session 16c, Comm.dll) -----------
# Comm.dll `AutoDetectSlaveAddr` (RVA 0x7050) walks SIX 3-byte triples at
# file-vaddr 0x101b5db4 and probes each with a ONE-BYTE READ AT REGISTER 0x23;
# the first that answers is stored and served by GetIspSlave (RVA 0x4230,
# byte +0) and GetIspContinuousSlave (RVA 0x4240, byte +1). Byte +2 goes to
# DAT_101d49aa (no accessor) - it is the 0x6A the 15g ladder pushes as the
# ISP control mailbox, so the triple is (isp, continuous, mailbox).
# All bytes are the 8-bit WRITE form; 7-bit = >>1.
# Detection is SKIPPED when the device type is 8 (RTD2711): the configured
# slave wins, which is IspSetting.ini's 0x6F = 7-bit 0x37 - the lane `info`
# and `verify` already use.
# MEASURED 2026-11-01 on /dev/i2c-4 (this monitor): candidate 0 answers the
# 0x23 read with 0x00; candidates 1-5 EIO. The project's dead roster
# (0x18/0x20/0x22/0x35/0x49) was measured with BARE-ADDRESS probes - the
# vendor's probe is a register read, and its first candidate ACKs here.
ISP_SLAVE_TRIPLES = [
    (0x94, 0x96, 0x6A),   # 7-bit 0x4A / 0x4B / 0x35  <- answers on this sink
    (0x64, 0x64, 0x68),   # 7-bit 0x32 / 0x32 / 0x34
    (0x54, 0x56, 0x58),   # 7-bit 0x2A / 0x2B / 0x2C
    (0x98, 0x9A, 0x68),   # 7-bit 0x4C / 0x4D / 0x34
    (0x9C, 0x9E, 0x6C),   # 7-bit 0x4E / 0x4F / 0x36
    (0x90, 0x92, 0x60),   # 7-bit 0x48 / 0x49 / 0x30  (community MSTAR pair)
]
ISP_SLAVE_PROBE_REG = 0x23
ISP_SLAVE_FOR_TYPE8 = 0x6F        # IspSetting.ini; RTD2711 skips detection
ISP_SLAVE_DECODED_AT = "Comm.dll 0x101b5db4 (table), RVA 0x7050/0x4230/0x4240"


# ---- Slot +0x14 SETTLED, and a third register grammar (session 16d) ------
# Disassembly, not pseudocode (the decompiler drops arguments with no
# prototype, which is why 14i and 16a disagreed):
#   WinIspPlugIn 0x10023a90   ff 50 14     CALL [EAX+0x14]     <- no PUSHes
#   WinIspPlugIn 0x10023a93   83 f8 0e     CMP EAX, 0xe        <- result tested
# So slot +0x14 is thiscall with ZERO stack args and returns a family code
# (compared against 3 / 8 / 0xe / 0x13 in the enter and dump paths). 14i's
# "32-byte page transfer" label is superseded: the transfer slots are +0x54
# (write, 3 bytes from the ISP command object + a buffer pointer) and +0x13c
# (the alt path when obj+0x43054 != 0). Corroborating shape on the far side:
# Comm.dll's own I2CWrite/I2CRead (RVA 0x46e0 / 0x4a20) take
# (dev, byte reg, count, buf) and their special path calls
# func_0x10003c80(reg, count, buf) / FUN_10003990(reg, width, addr, ...).
# Comm.dll I2CRead ALSO caps the transfer: count > 0x18 (24) returns 0x10.
COMM_SLOT_0x14 = {
    "shape": "thiscall, zero stack args, returns a scaler family code",
    "evidence": "WinIspPlugIn 0x10023a90 ff5014 then 83f80e CMP EAX,0xe",
    "values": [3, 8, 0xE, 0x13],
    "supersedes": "14i 'slot +0x14 = 32-byte page I2C transfer' (the transfer "
                  "slots are +0x54 / +0x13c)",
}
COMM_READ_CAP = 24          # Comm.dll I2CRead: count > 0x18 -> 0x10

# The ISP-board / GFX grammar, decoded from Comm.dll FUN_10003990 (RVA 0x3990,
# the "special comm" path taken when GetSpecialCommType() == 1). A THIRD
# register surface, beside 14i's 0x841-window and 15i's 0x60-window:
#   0xF2  address port  - 3-byte address written, then the high byte read back
#   0x55  command/mode  - written, then read with bit 0x80 set (the go strobe)
#   0x57  width select  - 0xFC with a mode nibble 0 (1-byte) / 1|2 (2,3-byte)
#   0x58  bank/width    - 0xE7 (1-byte) | 0xEF with bit3 (2- and 3-byte)
#   0x5E  data window   - address bytes then data, read back with |1 for a read
# width selector: 0 = 1 byte, 1 = 2 bytes, 2 = 3 bytes; >2 returns 0x11.
ISP_BOARD_REGS = {
    "addr_port": 0xF2, "cmd_port": 0x55, "width_port": 0x57,
    "bank_port": 0x58, "data_port": 0x5E,
    "width_values": {0: (0xFC, 0xE7), 1: (0xFC, 0xEF), 2: (0xFC, 0xEF)},
    "bank_bit": 0x08,        # 0x58 value |8 for the 2- and 3-byte widths
    "read_flag": 0x01,       # the data port is re-read with |1
    "mode_switch": "GetSpecialCommType()==1 selects it (Comm.dll RVA 0xc190); "
                   "FUN_10003990 clears it after arming (one-shot)",
    "decoded_at": "Comm.dll RVA 0x3990 (read) / 0x3c80 (write)",
}


# ---- What each lane is actually made of (measured 2026-11-01, i2c-dev) ----
# One-byte reads through the tunnel, register grammar, every slave the vendor
# can name. The replies are CONSTANT per slave, which is the finding: on this
# sink the register index does not select a cell on these slaves.
#   0x37 -> 0x8a at 0xF2, 0x55, 0x57, 0x58, 0x5E, 0x60, 0x61, 0x64, 0x23
#   0x4A -> 0x00 at all nine, and 0x4B the same
#   0x22 / 0x20 -> EIO (they answer only once the scaler is in ISP mode;
#                  16c: ISP entry was accepted with status 0xfe and the
#                  4-byte reads still EIO)
# Reading: 0x8a is the MCCS status byte, so 0x37's "register reads" are DDC/CI
# status polls - the mailbox lane the type-8 path uses. The ISP register file
# (0x22) is the lane that carries flash, and it is the one that is silent here.
LANE_READBACK = {
    0x37: "0x8a at every register tried - the DDC/CI status byte; this is "
          "the MCCS mailbox lane (what type 8 uses, INI slave 0x6F)",
    0x4A: "0x00 everywhere - the DP branch device, not a register file",
    0x4B: "0x00 everywhere - the branch's continuous-transfer pair",
    0x22: "EIO - the ISP register file; answers in ISP mode only",
    0x20: "EIO - the ReadFlashData burst engine",
}
LANE_READBACK_AT = "2026-11-01 /dev/i2c-4, one-byte reads, regs F2 55 57 58 5E 60 61 64 23"


# ---- The mailbox ladder: command-level, not address-level (16e) ----------
# 15g decoded the engine's ISP-control slots +0x74/+0x78 pushing
# (0x6A, 0xCA, count, &buf): the slave, a token register, then the payload.
# 16c's slave table (Comm.dll 0x101b5db4) independently confirms 0x6A is the
# THIRD member of winning candidate 0 - the mailbox lane that sits beside the
# ISP slave 0x4A and its continuous pair 0x4B. The commands below are
# Flash.dat's own for this chip (Facts.FLASHDAT_MAP, 15i Phase A): write
# enable, Device-ID (the vendor's gate answers '70 16 15'), fast read.
ISP_MAILBOX_SLAVE7 = 0x35        # 8-bit 0x6A
ISP_MAILBOX_TOKEN = 0xCA


# ---- The ladder, replayed (16e) ------------------------------------------
# Flash.dat's commands (0x06 / 0x90 / 0x3B) sent as the vendor's mailbox frame
# [0xCA, opcode] on the 0x37 lane. MEASURED 2026-11-01, in normal mode AND
# after an accepted ISP entry (magic candidate 3, status 0x8a):
#   0x37  ONE frame at every command: 8a | 8a 02 00 fe | 8a 02 00 fe 00
#         46 57 2e 30 30 39 4e  = "FW.009N". The reply grows because WE ask
#         for more bytes, not because the command changed -> info lane, now
#         witnessed with the vendor's OWN commands (15j saw it with 0xA0).
#   0x4A  answers 00 at every command (the DP branch).
#   0x35  EIO in both modes - the mailbox slave of the winning triple.
#   0x22  EIO in both modes - the flash register file.
#   0x20  EIO in both modes - the ReadFlashData burst engine.
# A second, independent witness on one register: the vendor's version string
# is reached by opcode 0x51 (VENDOR_FW_VERSION_CMD, FE E1 E6) AND by writing
# 0xCA with any second byte - one register, two doors.
LADDER_VERDICT = {
    "measured": "2026-11-01, /dev/i2c-4, normal + ISP mode (status 0x8a)",
    "0x37": "constant MCCS frame '8a 02 00 fe 00 FW.009N' at all three "
            "commands -> info lane; the width varies, the content does not",
    "0x4A": "zeros at all three commands (DP branch)",
    "0x35": "EIO in both modes - the mailbox slave; THIS is the lever for "
            "Intel/AMD, where the DRM AUX bridge has no allow-list",
    "0x22": "EIO in both modes - the flash register file",
    "0x20": "EIO in both modes - the ReadFlashData burst engine",
    "isp_status_note": "enter_isp's 0x80-bit 'ISP alive' test is reading the "
                       "MCCS reply header (0x8a on entry, 0xfe after exit): "
                       "ISP entry on this sink IS a DDC/CI handshake",
}


# ---- What the 0x37 lane actually is (16e, measured twice) ----------------
# A 256-register sweep in the 1-byte grammar looked like four registers. It is
# ONE window, read at four phases - and the last two probes below show why:
# the i2c-dev proxy on this box hands write and read the SAME 32-byte buffer,
# so a read returns the tail of the last MCCS reply plus the head of whatever
# we just sent. The "register byte" is a position in that buffer.
#   read  8 after writing 0x00      -> 30 30 39 4e 00 00 00 00
#   read 16 after writing 0x00      -> 00*15 then 90
#   read 32 after writing 0x00      -> 8a 02 00 fe 00 46 57 2e 30 30 39 4e
#                                      00...00 90
#   reg 0..7                        -> phase = reg mod 4, 8 bytes per phase
#   write 51 84 01 FE E1 E6, read   -> 00 46 57 2e 30 30 39 4e ...   (the
#                                       version reply, shifted)
#   write 51 84 02 60, read         -> e1 e6 00 46 57 2e 30 30 39 4e (the
#                                       E1 E6 we just sent, at the head)
DDCI_LANE = {
    "model": "one 32-byte MCCS reply window on a buffer SHARED by write and "
             "read - not a register file",
    "phase": "the reply of a read at register R starts at offset (R mod 4) * "
             "8 of the window; consecutive (write,read) pairs walk it",
    "frame32": "8a 02 00 fe 00 46 57 2e 30 30 39 4e 00..00 90",
    "frame_says": "MCCS reply 0x3B/0x8a + VCP 02 00 + FE + 'FW.009N', then "
                  "zeros and a stale 0x90 tail",
    "proof": "writing 51 84 02 60 puts 'e1 e6' - the tail of the PREVIOUS "
             "request - at the head of the next reply",
    "consequence": "the clip-free flash read cannot come from 0x37: it has "
                   "one window, and its content is the last reply. The flash "
                   "lane is 0x22 (allow-listed away on NVIDIA) with 0x35 the "
                   "mailbox beside it.",
    "measured": "2026-11-01 /dev/i2c-4, 256-register sweep in three grammars",
}


# ---- The lane matrix (16f): four transports, one answer ------------------
# The bulk control (NV0073 0x73137C, 256 B/txn, relayed by msi_auxch.ko) was
# the last NVIDIA path that is NOT the i2c-dev shim, so it was the best chance
# of reaching the ISP slaves without a second GPU. It does not:
#
#   lane                      0x30 0x37 0x50   0x4A/0x4B   0x18-0x1B 0x20 0x22
#   i2c-dev (DRM AUX)          ACK  ACK  ACK    ACK          EIO
#   RM AUXCH 0x731341 I2C      ACK  ACK  ACK    ACK          EIO
#   RM AUXCH native            ACK(DPCD/MTPMT byte space)    EIO
#   RM bulk 0x73137C 256B      ACK  ACK  ACK    ACK          TIMEOUT
#
# So the six-slave set is a property of THE SINK's DP branch, not of the
# driver. The ISP register file lives behind that branch's I2C-over-AUX tunnel
# and answers on no NVIDIA path.
#
# Two extras the bulk lane gave:
#   * Its reply starts INSIDE the shared MCCS buffer (reading 0x37 returns
#     0x02 - the reply header's third byte, 16e's model, not the 0x8a a
#     tunnel read gives).
#   * The winning ISP magic byte is TRANSPORT-dependent: candidate 3 on
#     i2c-dev (status 0x8a), candidate 5 on bulk (status 0xe1). The magic is
#     an MCCS write payload, and each lane's first write lands at a different
#     offset of the shared buffer - so "which magic works" is not a monitor
#     fact. Facts.AUTOENTER_CANDIDATES stays as the vendor's list.
BULK_LANE = {
    "control": "NV0073_CTRL_CMD_DP_AUXCH_I2C_TRANSFER (0x73137C), 256 B/txn, "
               "no replyType (rmStatus 0xffff = TIMEOUT); relayed by "
               "MSI_AUXCH_BULK in kernel/msi_auxch.c",
    "gate_note": "the kernel gates writes on BOTH address forms, so on the "
                 "bulk lane a write to 7-bit 0x37 is gated too (0x37 is also "
                 "the 8-bit form of 7-bit 0x1B) - call bus.unlock() first",
    "measured": "2026-11-01, kernel 7.3.1-1, driver 615.78.08: 0x30/0x37/0x50 "
                "ACK, 0x4A answers 00, 0x18-0x1B/0x20/0x22 TIMEOUT",
    "verdict": "the six-slave set belongs to the sink's DP branch, not the "
               "NVIDIA driver - the ISP register file is behind the branch "
               "tunnel on every NVIDIA lane we have",
    "magic_varies": "candidate 3 (status 0x8a) on i2c-dev vs candidate 5 "
                    "(status 0xe1) on bulk: the ISP magic is an MCCS write "
                    "payload into the shared buffer, so the winner is a "
                    "property of the lane",
}


# ---- 16g audit: ground truth from the shipped INI -------------------------
# Source: IspSetting.ini md5 d1be1f3a... (three copies on this box, identical;
# the file the vendor's own run used). 16b's claim "the defaults ARE the
# shipped behaviour" was right for MOST keys and WRONG for two - MSI overrides
# them, and one of those overrides is the reason a vendor run leaves no log:
#   AUX_CheckDpcdTable   default 1 -> shipped 0
#   AUX_EnableDebugLog   default 1 -> shipped 0   (=> 15g's "NO nvapi.log")
# Runbook lever for the borrowed-Windows day: set both to 1 and bSaveDebugLog=1
# and the vendor writes its own trace - the witness we have never had.
VENDOR_INI = {
    "path": "C:\\...\\Temp\\ISPToolForMsi\\IspSetting.ini",
    "md5": "d1be1f3a9a43fd44e510eb94272f5a1c",
    "communication": {"enumCommID": 1},                    # Comm_Aux.dll
    "scaler": {"BinVersionAddress": 0xF800, "BinVersionLength": 3,
               "ulModelNamePosInBin": 0xF806, "CheckModelName": 1,
               "CheckVersion": 0, "CheckChecksum": 1},
    "version_read": {"cmd": [0x6E, 0x51, 0x84, 0x01, 0xFE, 0xE1, 0xE6],
                     "start_index": 6, "read_length": 20, "record_mode": 2,
                     "delay_after_write_ms": 3000,
                     "note": "the vendor's OWN extraction rule: skip 6 reply "
                             "bytes, take 20 - what vendor_fw_version does"},
    "dual_bank": {"enumIspMode": 1, "enumBootCodeType": 1, "bSwitchFLag": 1,
                  "bWaitCopyBank": 0, "copy_bank_wait_ms": 8000,
                  "time_after_command_ms": 200, "command_retry_count": 10,
                  "time_after_reset_ms": 10000,
                  "release_device_after_reset": 1,
                  "isp_finish_before_reset": 0,
                  "get_fp_setting_from_ic": 0,
                  "digital_signature": 0, "sw_signature_mode": 0},
    "comm_aux_overrides": {"AUX_CheckDpcdTable": 0, "AUX_EnableDebugLog": 0},
    "comm_aux_as_shipped": {"AUX_DetctType": 1, "AUX_GraphicsType": 1,
                            "AUX_I2CPageLen": 32, "AUX_RetryLimit": 10},
    "graphics_type_note": "AUX_GraphicsType=1 (Intel) is INERT at startup: "
                          "AUX_DetctType=1 means AUTO, and AUTO probes AMD -> "
                          "Intel -> NVIDIA and overwrites the backend. The "
                          "value only binds in MANUAL (DetctType=2).",
}

# ---- 16g audit: the vtable is the CORE's object, not Comm_Aux's exports ---
# Hypothesis tested and FALSIFIED: if the comm object were an ordinal-ordered
# thunk table over Comm_Aux.dll's exports, slot +0x28c (index 163) would name
# GetQCDisplaySetting - and the plugin's log string at that slot says exactly
# that. It does not: Comm_Aux exports 61 names (max ordinal 61), so indices
# 67, 73, 79, 133, 135, 163 cannot exist. Two ordinal coincidences (0x74 ->
# I2CWordRead, 0x78 -> I2CWordWrite, adjacent like 14i's read/write pair) are
# suggestive, not conclusive.
# => the slot table is a C++ vtable in WinISPTool (the exe), and the
#    authoritative slot -> export map still needs the exe's vtable. The names
#    in COMM_VTABLE stay evidence-tagged by their log strings.
COMM_VTABLE_NOTE = "core C++ vtable (Comm_Aux has 61 exports; slots reach index 163)"

# ---- 16g: the plugin's engine ABI (WinIspPlugIn FUN_10007670) -------------
# The plugin is configured by ONE call that copies a huge settings struct
# (the engine's ISP settings block, ~0x10e64 dwords) into its globals. The
# fields that matter to a native port, by dword index in that struct:
PLUGIN_SETTINGS_STRUCT = {
    "caller": "WinIspPlugIn FUN_10007670 (the only writer of DAT_1024a2d4)",
    "0x0000": "ISP mode -> DAT_1024a2d4 (the IspFlash gate: 4,5,6,7,0x11,0x1a,0x1b)",
    "0x0001": "DAT_1024a2d8", "0x0002": "DAT_1024a2dc", "0x0003": "DAT_1024a2e0",
    "0x0004": "DAT_1024a2e4", "0x000b": "DAT_1024a2e8", "0x000c": "DAT_1024a34c "
                    "(+0x0d feeds DAT_1024a350 when it is 0 - the enter-ladder "
                    "selector the ISP-entry path reads)",
    "0x0010": "DAT_1024a380 (the 'is configured' gate the handshake tests)",
    "0x0011": "boot type -> DAT_1024a2f0 (== 1 is what makes the handshake "
              "return 0xd21)",
    "0x0012": "DAT_1024a2f4", "0x0013": "DAT_1024e460",
    "0x10a16": "1232-byte table -> DAT_1024a654 (0x134 dwords)",
    "0x10b50": "528-byte block -> DAT_1024a430 (0x84 dwords) - the parsed "
               "Flash.dat chip record, handed to the plugin by the engine "
               "(16a found the plugin copying it in DumpFlash; this is where "
               "it came from)",
    "0x10c98": "UTF-16 string at struct+0x43262 (a path; the plugin scans for "
               "the wchar terminator)",
    "0x10b4a": "..0x10b4e five dwords -> DAT_1024bec4..bed4 (signature/"
               "bank params)",
    "0x10e5f": "byte -> DAT_1024e464; 0x10e60..0x10e63 -> DAT_1024e4a4..e4b0",
    "meaning_for_us": "a native port does not need the plugin: it needs this "
                      "struct's few fields that change the wire sequence - "
                      "mode (0x00), boot type (0x11), the Flash.dat record "
                      "(0x10b50) - and the INI that fills them.",
}


# ---- 16h: the host chain, and the engine has two shells -------------------
# Traced from the GUI's OnInitDialog (exe FUN_0040f460) and the loader
# (FUN_00411430):
#   GUI exe --LoadLibraryW--> WinOperateCScaler.dll
#       --GetProcAddress("OperateScalerEx")--> FUN_1001c770(args, cb, ...)
#       fallback if the export is missing: relaunch
#       "WinISPTool.exe --ispdiff --newboot --fw \"%ls\" --comm %d --settingfile \"%ls\""
#       failure string: "Load scaler dll in UpdateFwNormal fail!"
#   WinOperateCScaler.dll carries (utf-16) "WinIspPlugIn" and "IspSetting.ini"
#   and the ASCII "I2CWrite" - it is the HOST: it loads the plugin and reads
#   the INI. Its GUI sets the log file name to "IspLog.txt" (so that, not
#   nvapi.log, is the file to look for on a borrowed-Windows run).
#
# The engine is ONE class in TWO shells: WinOperateCScaler.dll's RTTI has
# CCpIsp, CCpSignVerify, CCpRsString, CCpTransform, and a name table listing
# the plugin's exact export set (IspFlash, SetCommInterface, RecordFWVersion,
# GetKeyFromFlash, SetUIFunction, GetFWInfo, DumpFlash,
# GetUserDefinedInfoFromDDCCI, ChipEraseFlash, IspEeprom, EnterISPModeExport,
# ResetMCUExport, GetMergeFwInfo, SetMergeFwInfo, SendUserDefinedInfo,
# I2CWriteExport, GetScalerType, BankEraseFlash). WinIspPlugIn.dll is the same
# engine built as a plugin. => a native port mirrors OperateScalerEx, not the
# plugin, and the method set to mirror is exactly that list.
# CCpSignVerify + the INI's enumDigitalSignatureType=0 /
# enumSWDigitalSignatureMode=0 mean signature checks are OFF as shipped: the
# port does not need to sign anything.
HOST_CHAIN = {
    "gui_entry": "WinOperateCScaler.dll!OperateScalerEx (RVA 0x1c760 -> "
                 "FUN_1001c770), called by the exe at FUN_00411430 after "
                 "LoadLibraryW + GetProcAddress",
    "progress_callback": "exe FUN_0040f0a0 (the 3rd argument) - the same "
                         "progress the GUI bars show (16a: the 10%/100% "
                         "grammar lives in the plugin)",
    "fallback": "WinISPTool.exe --ispdiff --newboot --fw <bin> --comm <id> "
                "--settingfile <ini>  (the child-process path)",
    "log_file": "IspLog.txt (the GUI's own name; AUX_EnableDebugLog=1 to get it)",
    "engine_class": "CCpIsp (RTTI in WinOperateCScaler.dll, and the same 19 "
                    "export names as WinIspPlugIn.dll) - one engine, two shells",
    "signing": "CCpSignVerify exists; shipped INI has both signature modes 0",
}

# 16h, honestly open: the comm object's vtable (the slots in COMM_VTABLE) is a
# hand-built function-pointer table, not an RTTI-polymorphic class - the three
# vendor modules each expose 38 runs of >=164 code pointers with the SAME top
# length (280), which is the statically linked MFC/CRT, not the comm object.
# Next method that has not been tried: the host resolves "SetCommInterface" by
# NAME (the string is in WinOperateCScaler's name table), so the call site is
# reachable from that string's xref in Ghidra, and the object it passes has
# its vtable pointer at [0] - one hop to the table.
COMM_VTABLE_HUNT = "open: find the host's SetCommInterface call site (name string at WinOperateCScaler 0x101a6100 region), read the object's [0]"


# ---- 16i: the 12% gate is a STRING COMPARE, and 0x45 is not an error -------
# The GUI's update routine is exe FUN_004119f0. Its ladder, read off the
# strings it uses and the progress writes (_DAT_006194dc = 4, 6, 7, 8, 0xc):
#   1. FUN_00412330            init            (progress 4)
#   2. comm vtable +0xc        GetFWInfo(bin)  -> "Get bin version and model
#                                                name fail, error code: 0x%x"
#   3. (progress 6, 7)
#   4. FUN_00410270             read the MONITOR's model name
#                                                -> "Get flash model name fail…"
#   5. compare, progress 8 -> 0xc = 12%
#      "Bin model name:%ls"  /  "Compare %ls with bin model name"
#      "Compare bin and flash model name fail fail, error code: 0x%x"
#                                              (the vendor's own double "fail")
# The %x in that last message is NOT an ISP error code: it is the value the
# plugin's GetScalerType returns (see below). Measured on this panel: 0x45.
# Both lanes fail at the SAME step (12%), under Wine with the native lane and
# under Heroic with the tunnel lane (0xd21 there, 0x45 here) - so the gate is
# the compare, not the transport.
GUI_UPDATE_LADDER = {
    "routine": "exe FUN_004119f0 (the MFC dialog's update handler)",
    "progress_codes": "4 init, 6/7 bin parse, 8 flash read, 0xc = 12% compare",
    "step1": "GetFWInfo(bin) - version + model name out of the .bin",
    "step2": "read the monitor's model name (DDC/CI, VCP 0x02)",
    "step3": "compare; on mismatch the dialog shows the ScalerType as the code",
    "evidence": "strings 005e96c8 / 005e9850 / 005e98a8 / 005e98d0 / 005e9938, "
                "all xref'd from FUN_004119f0",
}

# GetScalerType: comm slot +0xc0 reads an ID CODE by index; two reads, then a
# table lookup. Plugin FUN_10016b00:
#     (*(comm[0] + 0xc0))(0x00, &IDCode0);     // register 0x00
#     (*(comm[0] + 0xc0))(0x0f, &IDCode1);     // register 0x0F
#     type = FUN_10016c20(IDCode0, IDCode1);   // the dictionary
#     log("ScalerType: 0x%x, IDCode0: 0x%x, IDCode1: 0x%x")
#     valid range: 1 .. 0x51 (outside it: "Read Scaler Type Fail!, 0xd0d")
# THIS panel measures IDCode0=0x14, IDCode1=0x30 -> ScalerType 0x45 (69),
# which is the number the GUI prints. The same 0x45 is the first argument of
# Set Background Flash Write Time (slot +0x21c, 16a) - one value, two uses.
SCALER_TYPE_TABLE = {
    "reader": "plugin FUN_10016b00; the dictionary is FUN_10016c20",
    "id_registers": {"IDCode0": 0x00, "IDCode1": 0x0F},
    "comm_slot": 0xC0,
    "this_panel": (0x14, 0x30, 0x45),
    "valid_range": (1, 0x51),
    "sample_entries": {   # (IDCode0, IDCode1) -> ScalerType, from FUN_10016c20
        (0xFF, 0x70): 0x29, (0xFF, 0x90): 0x2A, (0xD3, 0x10): 0x41,
        (0xD3, 0x00): 0x3F, (0x00, 0x01): 0x30, (0xD4, 0x00): 0x48,
        (0x14, 0x30): 0x45, (0xC0, 0x01): 0x39, (0x13, 0x10): 0x3E,
        (0x14, 0x10): 0x47, (0x15, 0x00): 0x49, (0x16, 0x00): 0x4E,
        (0x17, 0x00): 0x50, (0x10, 0x00): 0x33, (0x12, 0x00): 0x3A,
        (0x0E, 0x00): 0x04,
    },
}

# The record the compare is against: a FILE, not the INI.
# Plugin FUN_100275e0 builds the name "IspUserDefined.txt" (the literal is
# split across two stack slots: "Is" + "pUserDefined.txt") next to
# IspSetting.ini, reads section [UserDefinedInfo], keys "ModelName" and
# "HPModelName". FUN_10027870 is the writer: the same block carries
# ModelName, PanelName, CapabilityInfo, Version, SIName and one switch per
# field - IgnoreModelName, IgnorePanelName, IgnoreVersionName,
# IgnoreCapabilityInfo, IgnoreSIName - plus RecordModelMode / RecordPanelMode /
# RecordVersionMode / FindBinUseVerMode.
# The INI's [ISP_User_Defined] section carries the READ side of the same
# record (measured on the shipped file):
#     ucRetryCount=10  bGetVersion=1  ucVersionStartIndex=6
#     ucVersionReadLength=20  enumVersionRecordMode=2
#     strVersionDdcciCmd=0x6E,0x51,0x84,0x01,0xFE,0xE1,0xE6
#     ulDelayTimeAfterDdcciWrite=3000  bDDCCIReadNotReturn0x6E=0
# That DDC/CI command is 16e's mailbox ladder in one line: VCP 0x6E, payload
# 0x51 0x84 0x01 0xFE 0xE1 0xE6, reply taken at byte 6 for 20 bytes - which is
# exactly the frame we measured ("8a 02 00 fe 00 FW.009N", the string at 6).
USER_DEFINED_RECORD = {
    "file": "IspUserDefined.txt (same directory as IspSetting.ini)",
    "section": "UserDefinedInfo",
    "fields": ["ModelName", "HPModelName", "PanelName", "CapabilityInfo",
               "Version", "SIName"],
    "switches": ["IgnoreModelName", "IgnorePanelName", "IgnoreVersionName",
                 "IgnoreCapabilityInfo", "IgnoreSIName"],
    "modes": ["RecordModelMode", "RecordPanelMode", "RecordVersionMode",
              "FindBinUseVerMode"],
    "ddcci_read": "VCP 0x01, payload FE E1 E6, reply taken at [6:26]",
    # The INI's own byte string, verbatim: the slave address, the MCCS length
    # and flag bytes, the VCP code, then the payload. Read it as the WIRE form
    # (a field name is not its units, 16i): 0x6E=slave 0x37 write,
    # 0x51 0x84=header, 0x01=VCP, FE E1 E6=payload.
    "wire_cmd": "0x6E,0x51,0x84,0x01,0xFE,0xE1,0xE6",
    "read_at": "plugin init (FUN_100275e0) - so the file must exist BEFORE the "
               "tool starts; editing it mid-run does nothing",
}

# The bin carries the same record in plaintext, mid-file (not in a header):
# FW.009 bin @194566 and FW.012 bin @63494 both hold
#     "...e009" / "...e012"  then  "MAG 341CQ X28"  0xff
#     "TPO340QH1-CH01 D01"   0xff  "RTD2711"       0xff
# i.e. version, model, panel, scaler - the four fields of the record, with
# 0xff separators. Both bins say "MAG 341CQ X28" (the box's filename says
# 341CQP, the payload does not). The first 1 KiB of both bins is high entropy:
# the header is packed, this table is not.
BIN_RECORD = {
    "fw009": {"offset": 194566, "model": "MAG 341CQ X28",
              "panel": "TPO340QH1-CH01 D01", "scaler": "RTD2711",
              "version": "FW.009"},
    "fw012": {"offset": 63494, "model": "MAG 341CQ X28",
              "panel": "TPO340QH1-CH01 D01", "scaler": "RTD2711",
              "version": "FW.012"},
    "layout": "version, model, panel, scaler - 0xff separated, plaintext",
    "sizes": {"fw009": 1966080, "fw012": 1835008},
    "measured": "python scan of vendor/*.bin, 2026-11-01",
}


# ---- 16i: the gate, measured on the live panel ----------------------------
# Raw frames read 2026-11-01 through msi-isp (i2c-dev /dev/i2c-4, slave 0x37):
#   VCP 0x01 + payload FE E1 E6  ->  6e 8a | 02 00 fe 00 | 46 57 2e 30 30 39 4e
#                                            reply flag  echo     "FW.009N"
#   so the version string sits at RAW index 6 = the INI's ucVersionStartIndex,
#   and at payload index 4 once ddc_parse_reply strips the 2-byte lead. The
#   vendor VCP 0x01 header is 4 bytes (reply, flag, 0xfe echo, 0x00), NOT the
#   8-byte GetVCP header - one more grammar on this panel.
#   VCP 0x02 (MCCS Model Name)  ->  6e 80 be  (N=0) on 10/10 tries, with the
#   write retried each time. The model name is therefore read from the EDID's
#   0xFC descriptor, which carries the same string.
DDCI_RECORD_FRAMES = {
    "version_raw": "6e 8a 02 00 fe 00 46 57 2e 30 30 39 4e 00...",
    "version_header": "4 bytes: reply 0x02, flag 0x00, echo 0xfe, 0x00",
    "version_at": {"raw": 6, "payload": 4},
    "model_vcp_0x02": "N=0 on 10/10 tries (i2c-dev); use the EDID 0xFC name",
    "ini_retry_count": 10,
}

# msi-isp record, live on this panel against the FW.012 bin (2026-11-01):
#   bin model 'MAG 341CQ X28' == panel model 'MAG 341CQ X28'  -> MATCH
#   bin code  'e012'           panel version 'FW.009'          -> differ
# The model-name gate (the GUI's 12% step) is OPEN by content: this bin IS for
# this monitor. The version difference is the point of an update, and the GUI
# compares versions in a sibling step ("Compare bin and falsh version fail",
# the vendor's own typo, exe string 005e9790).
PANEL_RECORD = {
    "measured": "2026-11-01, msi-isp record, i2c-dev lane, read-only",
    "model": "MAG 341CQ X28",
    "version": "FW.009",
    "gate_vs_fw012": "model MATCH, version differ",
    "consequence": "the 12% gate is a flash-content read: the plugin compares "
                   "the bin's record against the record stored IN FLASH, so "
                   "the port's next step is the ISP flash read of that block, "
                   "not a new DDC/CI query",
}

# The Wine witness (16i), stated as measurements:
WINE_WITNESS = {
    "runs": "MSI Firmware Update Utility V1.0.6.exe under /usr/bin/wine "
            "(Heroic prefix 'MSI firmware updater tool'), Access Method DP",
    "result": "FAIL at 12%, dialog 'Compare bin and flash model name fail "
              "fail, error code: 0x45' - and 0x45 is the ScalerType "
              "(SCALER_TYPE_TABLE), not an ISP error code",
    "heroic": "the same tool under Heroic/Proton failed at 12% with 0xd21 "
              "(the handshake gate, 16a) - so both shells stop at the same "
              "step for lane-specific reasons",
    "ini_lifecycle": "the tool rewrites IspSetting.ini at startup (1498 B "
                     "defaults): keys added mid-run survive to the next "
                     "startup, and the record file is read at plugin INIT, so "
                     "IspUserDefined.txt must exist BEFORE launch",
    "levers_tried": "AUX_NvidiaIICAuxAccess=1 (native lane), "
                    "AUX_EnableDebugLog=1 + bSaveDebugLog=1, bSaveResult=1, "
                    "bSaveProgress=1, IgnoreModelName=1 in [ISP_User_Defined] "
                    "and bIgnoreModelName=1, and IspUserDefined.txt "
                    "[UserDefinedInfo] with all five Ignore switches",
    "outcome": "12% in every combination; no IspLog.txt appeared (the name is "
               "built at runtime - no static xref to the literal)",
}


# ---- 16j: the record override does NOT open the gate ----------------------
# Relaunched under Wine with IspUserDefined.txt IN FORCE (written before
# launch, so plugin init read it): section [UserDefinedInfo] carrying
#   ModelName=MAG 341CQ X28   IgnoreModelName=1  IgnorePanelName=1
#   IgnoreVersionName=1  IgnoreCapabilityInfo=1  IgnoreSIName=1
# with the INI on the native lane (AUX_NvidiaIICAuxAccess=1) and logging on,
# and FW.012 loaded. Result: FAIL, "Compare bin and flash model name fail
# fail, error code: 0x45", 12% - identical to the run without the file.
# => the Ignore* switches govern the RECORD WRITE (SendUserDefinedInfo), not
# the pre-flight compare. The compare is not skippable from config; it has to
# be SATISFIED, which means reading the block out of flash.
WINE_OVERRIDE_RUN = {
    "levers": "IspUserDefined.txt [UserDefinedInfo] with ModelName + all five "
              "Ignore switches, INI native lane + debug log + bSaveProgress, "
              "set before launch (plugin init) and after startup (INI)",
    "result": "FAIL 0x45 at 12%, unchanged",
    "reading": "the switches belong to the record-write path; the pre-flight "
               "compare must be satisfied by content, not config",
    "measured": "2026-11-01 12:0x, wine, /tmp/opencode/isp7.png",
}

# Where the ID codes are read from, measured on the wire (16j):
#   slave 0x37, token 0xCA, indices 0x00 0x01 0x0E 0x0F all answer the SAME
#   frame `8a 02 00 fe 00 46...` - the index byte does not select a register
#   on the DDC/CI mailbox. Slave 0x35 (the triple member) is EIO on i2c-dev.
#   Plugin side: comm slot +0xc0 is a GETTER (Comm_Aux returns obj+0xc8), so
#   the ID codes are cached at init by one bus read, not read per call.
# => IDCode0/IDCode1 ride the ISP slave (0x35), not the DDC/CI mailbox, and
# measuring them natively needs 0x35 to answer on some lane.
ID_CODE_LANE = {
    "measured": "2026-11-01, i2c-dev /dev/i2c-4, read-only",
    "ddci_mailbox": "0x37 token 0xCA: indices 0,1,0xE,0F all reply "
                    "'8a 02 00 fe 00 46' - index byte does not select",
    "isp_slave_0x35": "EIO on i2c-dev (16f: same on all four NVIDIA lanes)",
    "comm_slot_0xc0": "a getter of obj+0xc8 in Comm_Aux - the codes are "
                      "cached at init by a single bus read",
    "consequence": "ScalerType 0x45 is inferred from the GUI's own number "
                   "(one mov eax,0x45 site, on the (0x14,0x30) branch); the "
                   "direct measurement is a 0x35 read",
}

# 16j, on the vtable hunt (16h left it open): scanning Comm_Aux.dll and
# Comm.dll for runs of >=164 code pointers gives 38 runs each, in 19 distinct
# shapes - and every shape at the top is an MFC class (+0xc0 =
# CBasePane::get_accKeyboardShortcut, +0x28c shared). The comm object's table
# is NOT among them, which is consistent with the plugin calling it through a
# pointer the host installs (SetCommInterface), so the table lives in the
# module that DEFINES the object, not in the ones we scanned by shape.
VTABLE_SCAN = "16j: 38 runs >=164 slots in Comm_Aux.dll and in Comm.dll, 19 " \
              "distinct shapes, all MFC families - the comm vtable is not a " \
              "shape-match in these two modules; hunt it from the object's " \
              "constructor (the export the host calls), not from pointer runs"


# ---- 16k: the flash-read ladder, in wire order, and the lane matrix -------
# Comm.dll FUN_10003990 (the read path) is a port-by-port ladder on the byte-
# index ports of ISP_BOARD_REGS. Transcribed to the wire, mode 1 (the 16-bit
# offset path):
#   b = rd(0xF2); wr(0xF2, b & 0x7f)      # clear bit 7; the high byte/page is
#                                          # INHERITED, the vendor does not set it
#   b = rd(0x55); wr(0x55, b | 0x80)      # set bit 7 of the command port
#   delay 0x20                             # the decompile's 32 ms settle
#   wr(0x57, 0xfc); wr(0x58, 0xef)        # width, bank  (mode 0: 0xfc/0xe7)
#   wr(0x5E, addr_lo)                      # the 16-bit offset, low byte
#   wr(0x5E, addr_hi)                      # ... high byte (mode 1; mode 2
#                                          # writes lo, hi>>8, hi - 24-bit)
#   wr(0x5E, addr_lo | 1)                  # bit 0 = read_flag: this write ARMS
#   wr(0x55, 0xc1); wr(0x55, 0xbf)         # read command, then trigger
#   delay 2
#   data = rd(0x5E, n)                     # the flash bytes come off the DATA port
#   wr(0x5D, 0xf8)                          # reset
# Implemented as msi_isp.isp.flash_read_at and the `msi-isp flashread` verb
# (--slave, --isp, --addr a,b,c, --count).
FLASH_READ_LADDER = {
    "site": "Comm.dll RVA 0x3990 (read) / 0x3c80 (write), 16d",
    "ports": {"addr": 0xF2, "cmd": 0x55, "width": 0x57, "bank": 0x58,
              "data": 0x5E, "reset": 0x5D},
    "arm": "wr(0x5E, addr_lo | 1) - bit 0 is the read flag, then 0xC1 + 0xBF "
           "on the command port",
    "inherited": "the address HIGH byte is read from 0xF2 and written back "
                 "with bit 7 cleared: the page is inherited, not set",
    "code": "msi_isp/isp.py flash_read_at",
}

# The lane matrix for that ladder, measured 2026-11-01 (read-only). The reply
# is ADDRESS-INDEPENDENT everywhere the lane answers at all: every address
# returns the same bytes.
#   i2c-dev  0x37  8a 02 00 fe 00 "FW.009N" 00*20 bf  (twice = the 48 B read)
#   i2c-dev  0x22 / 0x35                     EIO
#   relay native 0x22  00 00 05 21 00 04 2b 04 09 00 80 0f 0e 11 08 00 (x2)
#                    = the DPCD byte space (0x60=05, 0x61=21, 0x64=2b, 16f)
#   relay bulk   0x37  the same MCCS window;  0x22 / 0x35  TIMEOUT
#   inside ISP mode (magic 0, status 0x8a) 0x37 unchanged; 0x22 EIO
FLASH_LANE_MATRIX = {
    "measured": "2026-11-01, msi-isp flashread, read-only",
    "address_dependent": False,
    "rows": {
        ("i2c-dev", 0x37): "the 32-byte MCCS window, twice, at every address",
        ("i2c-dev", 0x22): "EIO", ("i2c-dev", 0x35): "EIO",
        ("native", 0x22): "DPCD byte space 00 00 05 21 00 04 2b 04 09 00 80 0f…",
        ("bulk", 0x37): "the MCCS window (256 B/txn lane, same content)",
        ("bulk", 0x22): "TIMEOUT", ("bulk", 0x35): "TIMEOUT",
    },
    "isp_mode": "entering ISP (magic 0, status 0x8a) changes nothing on 0x37",
    "reading": "the ports are a separate I2C surface on the ISP slave; on 0x37 "
               "the writes land in the shared 32-byte MCCS reply window (16e), "
               "so the address is invisible there. The flash lane is 0x22 with "
               "0x35 beside it, and neither answers on any NVIDIA lane today.",
    "consequence": "the 0x45 compare can be reproduced natively in CONTENT "
                   "(msi-isp record) but its flash side needs 0x22/0x35 to "
                   "answer - that is the one blocking step",
}


# ---- 16l: the mailbox echo, measured - the address goes IN, nothing moves --
# The experiment: put the flash address in the mailbox frame and see if the
# reply moves. Two forms, on the slave that answers (0x37, i2c-dev):
#   form A  raw register write  [0xCA, op, addr_lo, addr_mid, addr_hi]
#   form B  MCCS VCP write      0xCA <- [op, lo, mid, hi]
# Results (read-only, 2026-11-01):
#   form A: the reply is the version frame (`fe 00 46 57 2e 30 30 39 4e` =
#     "FW.009N") for op 0x06, 0x90 AND 0x3B, at addr 0x0, 0xF806, 0x2F7AA -
#     address-independent, as 16k predicted.
#   form A at 48 bytes: the reply is STABLE over repeated (write,read) pairs -
#     it does not walk - and the frame we wrote comes back ECHOED at bytes
#     28..31: `06 aa f7 02` for op 0x06 addr 0x2F7AA. Direct proof of the
#     shared write/read buffer (16e), with the exact offset.
#   form B: `6e 80 be` (N=0, the pending form) at every address - the mailbox
#     wants the RAW register form, not a MCCS-packeted VCP write.
MAILBOX_ECHO = {
    "measured": "2026-11-01, i2c-dev /dev/i2c-4, slave 0x37, token 0xCA, "
                "read-only",
    "frame_written": "[0xCA, op, addr_lo, addr_mid, addr_hi]",
    "reply": "the version frame, same for op 0x06/0x90/0x3B and for every "
             "address (0x0, 0xF806, 0x2F7AA, 0x2F806)",
    "echo_offset": "bytes 28..31 of a 48-byte read carry [op, lo, mid, hi] - "
                   "the write buffer, read back",
    "stability": "STABLE across repeated (write,read) pairs at 48 bytes: the "
                 "'walk' of 16e is the kernel re-serving cache windows ~0.75 s "
                 "apart (DDCCI_MAILBOX), not the device stepping",
    "mccs_form": "VCP 0xCA write with a payload -> 6e 80 be (N=0) at every "
                 "address; the mailbox is a raw register surface",
    "conclusion": "the mailbox is an INFO lane: one command in, one frame out, "
                  "no address selector. The flash bulk lane is 0x22 (EIO here) "
                  "with 0x35 beside it - on-box options exhausted (15x, 16f, "
                  "16l agree).",
}


# ---- 16m: the comm interface is a NAMED table, not a mystery vtable -------
# Plugin FUN_100057c0 calls GetProcAddress 153 times on the comm DLL's module
# handle and stores each pointer at a FIXED slot of the object the plugin
# later calls through (DAT_10249d10 -> [0] -> table). So every slot has a NAME,
# and the table is the comm DLL's export API: Comm.dll exports 170 names,
# Comm_Aux.dll (the AUX backend) 61, Comm_GFXI2C.dll 52 - all measured with
# pefile, and every name below is an export of Comm.dll.
#
# Slot arithmetic: the plugin calls through BYTE offsets
#     (**(code **)(*DAT_10249d10 + 0xNN))(args)
# and the loader writes param_1[0xMM] on an int* - so byte = 4 * index.
# Two independent spot checks agree:
#   the chip-erase ladder (16m, FUN_1003e3a0) writes regs 0x60/0x61 through
#   slot +0xf0  -> index 0x3c = WriteRegEx        (a register write - fits)
#   the scaler-type read (16i, FUN_10016b00) uses slot +0xc0 with (index, &out)
#   -> index 0x30 = SetI2CSpeed, and slot +0xc4 -> index 0x31 = GetI2CSpeed,
#   which is exactly the getter-of-obj+0xc8 that 16j measured in Comm_Aux.
#   So IDCode0/IDCode1 are TWO SPEED SETTINGS, and the ScalerType dictionary
#   keys on (speed@0, speed@0xF). The pair (0x14, 0x30) = (20, 48) is a
#   plausible 20/48 kHz pair.
# The names below are measured; the slot mapping is arithmetic + the two checks
# above, and is labelled as such wherever it is used.
COMM_API = {   # name: (table index, byte offset the plugin calls it by)
    "GetI2CPageLength": (0x0e, 0x38),
    "I2CWrite": (0x0f, 0x3c),
    "I2CRead": (0x10, 0x40),
    "Initiallize": (0x11, 0x44),
    "GetCommCount": (0x12, 0x48),
    "GetAllCommName": (0x13, 0x4c),
    "GetCommID": (0x14, 0x50),
    "GetCommName": (0x15, 0x54),
    "GetCommFile": (0x16, 0x58),
    "SetCommByIndex": (0x17, 0x5c),
    "SetCommByID": (0x18, 0x60),
    "SetDebugSlave": (0x19, 0x64),
    "SetIspSlave": (0x1a, 0x68),
    "SetIspContinuousSlave": (0x1b, 0x6c),
    "GetDebugSlave": (0x1c, 0x70),
    "GetIspSlave": (0x1d, 0x74),
    "GetIspContinuousSlave": (0x1e, 0x78),
    "SetDebugMode": (0x1f, 0x7c),
    "GetDebugMode": (0x20, 0x80),
    "GetNativePageLength": (0x21, 0x84),
    "I2CWriteByte": (0x22, 0x88),
    "I2CCurrentRead": (0x23, 0x8c),
    "I2CWordWrite": (0x24, 0x90),
    "I2CWordRead": (0x26, 0x98),
    "I2CWriteEx": (0x28, 0xa0),
    "I2CReadEx": (0x29, 0xa4),
    "I2CCurrentReadEx": (0x2a, 0xa8),
    "I2CWordWriteEx": (0x2b, 0xac),
    "I2CWordReadEx": (0x2d, 0xb4),
    "AdjustOption": (0x2f, 0xbc),
    "SetI2CSpeed": (0x30, 0xc0),
    "GetI2CSpeed": (0x31, 0xc4),
    "SetAuxMode": (0x32, 0xc8),
    "SetWaitingMode": (0x33, 0xcc),
    "GetWaitingMode": (0x34, 0xd0),
    "ReadReg": (0x35, 0xd4),
    "WriteReg": (0x36, 0xd8),
    "ReadRegs": (0x37, 0xdc),
    "WriteRegs": (0x38, 0xe0),
    "WriteRegBit": (0x39, 0xe4),
    "WritePortRegBit": (0x3a, 0xe8),
    "ReadRegEx": (0x3b, 0xec),
    "WriteRegEx": (0x3c, 0xf0),
    "ReadRegsEx": (0x3d, 0xf4),
    "WriteRegsEx": (0x3e, 0xf8),
    "WriteRegBitEx": (0x3f, 0xfc),
    "WritePortRegBitEx": (0x40, 0x100),
    "ReadSysDevice": (0x41, 0x104),
    "WriteSysDevice": (0x42, 0x108),
    "ReadWordSysDevice": (0x43, 0x10c),
    "WriteWordSysDevice": (0x44, 0x110),
    "ScalerStop": (0x45, 0x114),
    "ScalerRun": (0x46, 0x118),
    "WriteMcuReg": (0x47, 0x11c),
    "WriteMcuRegs": (0x48, 0x120),
    "ReadMcuReg": (0x49, 0x124),
    "WriteMcuRegBit": (0x4a, 0x128),
    "ReadMcuRegs": (0x4b, 0x12c),
    "WriteContinuousMcuReg": (0x4c, 0x130),
    "ReadContinuousMcuReg": (0x4d, 0x134),
    "ReleaseDev": (0x4e, 0x138),
    "NativeWrite": (0x4f, 0x13c),
    "NativeRead": (0x50, 0x140),
    "SetSettingFilePath": (0x51, 0x144),
    "GetDeviceHandler": (0x52, 0x148),
    "ResetFirmware": (0x53, 0x14c),
    "EnterIspMode": (0x54, 0x150),
    "GetSMBUSDataType": (0x55, 0x154),
    "SetSMBUSDataType": (0x56, 0x158),
    "GetDeviceCount": (0x57, 0x15c),
    "RemoveDevice": (0x58, 0x160),
    "AutoDetectSlaveAddr": (0x59, 0x164),
    "DDCCIWrite": (0x5a, 0x168),
    "DDCCIRead": (0x5b, 0x16c),
    "SetFTDIGetAck": (0x5c, 0x170),
    "GetFTDIGetAckStatus": (0x5d, 0x174),
    "I2CMasterInitial": (0x5e, 0x178),
    "I2CMasterCurrentRead": (0x5f, 0x17c),
    "I2CMasterCurrentReadEx": (0x60, 0x180),
    "I2CMasterRead": (0x61, 0x184),
    "I2CMasterReadEx": (0x62, 0x188),
    "I2CMasterCurrentWrite": (0x65, 0x194),
    "I2CMasterCurrentWriteEx": (0x66, 0x198),
    "I2CMasterWrite": (0x67, 0x19c),
    "I2CMasterWriteByte": (0x68, 0x1a0),
    "I2CMasterWriteEx": (0x69, 0x1a4),
    "I2CMasterWordWrite": (0x6a, 0x1a8),
    "I2CMasterWordWriteEx": (0x6b, 0x1ac),
    "GetUsbDevicePath": (0x6c, 0x1b0),
    "SelectUsbByDevicePath": (0x6d, 0x1b4),
    "SelectUsbByIndex": (0x6e, 0x1b8),
    "WriteFlashData": (0x6f, 0x1bc),
    "ReadFlashData": (0x70, 0x1c0),
    "DebugMessageEventStart": (0x73, 0x1cc),
    "DebugMessageEventFinish": (0x74, 0x1d0),
    "DebugMessageStart": (0x75, 0x1d4),
    "DebugMessageEnd": (0x76, 0x1d8),
    "DebugMessageGetValue": (0x77, 0x1dc),
    "DebugMessageGetString": (0x78, 0x1e0),
    "SetCmdLine": (0x79, 0x1e4),
    "GetSpecialCommType": (0x7a, 0x1e8),
    "SetSpecialCommType": (0x7b, 0x1ec),
    "Read32BitRegEx": (0x7c, 0x1f0),
    "Write32BitRegEx": (0x7d, 0x1f4),
    "Read32BitRegsEx": (0x7e, 0x1f8),
    "Write32BitRegsEx": (0x7f, 0x1fc),
    "ReadDDRRegEx": (0x80, 0x200),
    "WriteDDRRegEx": (0x81, 0x204),
    "ReadDDRRegsEx": (0x82, 0x208),
    "WriteDDRRegsEx": (0x83, 0x20c),
    "ReadPWM2SPIReg": (0x84, 0x210),
    "WritePWM2SPIReg": (0x85, 0x214),
    "ReadPWM2SPIDev": (0x86, 0x218),
    "WritePWM2SPIDev": (0x87, 0x21c),
    "ReadPWM2SPIWordReg": (0x88, 0x220),
    "WritePWM2SPIWordReg": (0x89, 0x224),
    "ReadPWM2SPIWordDev": (0x8a, 0x228),
    "WritePWM2SPIWordDev": (0x8b, 0x22c),
    "I2CWriteSegment": (0x8c, 0x230),
    "I2CWriteSegmentEx": (0x8d, 0x234),
    "I2CReadSegment": (0x8e, 0x238),
    "I2CReadSegmentEx": (0x8f, 0x23c),
    "AutoEnterIspMode": (0x90, 0x240),
    "SetIDevInComm": (0x91, 0x244),
    "SendUsbPacket": (0x92, 0x248),
    "ReceiveUsbPacket": (0x93, 0x24c),
    "ReadDDRCPURegEx": (0x94, 0x250),
    "WriteDDRCPURegEx": (0x95, 0x254),
    "ReadDDRCPURegsEx": (0x96, 0x258),
    "WriteDDRCPURegsEx": (0x97, 0x25c),
    "ConfigProgramFlash": (0x98, 0x260),
    "ReadAuxSniffer": (0x99, 0x264),
    "NeedSetMcuDefault": (0x9a, 0x268),
    "CompleteIspFlowInISPBoard": (0x9b, 0x26c),
    "AuxSnifferStart": (0x9c, 0x270),
    "GetAuxSnifferConfigPara": (0x9d, 0x274),
    "SetNewRealtekUSBMode": (0x9e, 0x278),
    "SetI2CDebugPort": (0x9f, 0x27c),
    "SetI2coverAUXDebugPort": (0xa0, 0x280),
    "CheckSnifferBoardCustomerId": (0xa1, 0x284),
    "I2CSlaveWrite": (0xa2, 0x288),
    "I2CSlaveRead": (0xa3, 0x28c),
    "Read32BitReg1Byte": (0xa4, 0x290),
    "I2CStretchRead": (0xa5, 0x294),
    "Write32BitReg1Byte": (0xa6, 0x298),
    "I2CWordSlaveWrite": (0xa7, 0x29c),
    "I2CWordSlaveRead": (0xa8, 0x2a0),
    "I2CWordStretchRead": (0xa9, 0x2a4),
    "SetPortMode": (0xaa, 0x2a8),
    "BBIdentifyDevice": (0xab, 0x2ac),
    "GetDisplayCount": (0xac, 0x2b0),
    "SelectDisplayByIndex": (0xad, 0x2b4),
    "GetQCDisplaySetting": (0xae, 0x2b8),
}

# The erase packet, read out of FUN_1003e3a0 (the routine Flash_ChipErase
# calls; its failure logs " ChipErase Fail!, Error Code:0x%x"):
FLASH_ERASE_PACKET = {
    "site": "plugin FUN_1003e3a0, called by Flash_ChipErase 0x1003a2f0",
    "shape": "write CTRL, write OPCODE, write CTRL|1, then poll the status",
    "opcode": 0xC7,                      # 199 decimal in the decompile
    "lane_0x60": {"ctrl": 0x60, "opcode": 0x61, "arm": 0xA0, "trigger": 0xA1,
                  "slot": "+0xf0 (WriteRegEx)"},
    "lane_0x83": {"ctrl": 0x83, "opcode": 0x84, "arm": 0xA0, "trigger": 0xA1,
                  "slot": "+0xf0 (WriteRegEx)",
                  "when": "DAT_1024a3bc != 0"},
    "lane_16bit": {"ctrl": 0x841, "opcode": 0x842, "arm": 0xA0, "trigger": 0xA1,
                   "slot": "+0xc4 (GetI2CSpeed-by-index shape, 16-bit regs)",
                   "when": "DAT_1024a360 != 0  (the tunnel lane - OURS)"},
    "poll": "status == 0xDE means busy; loop until it is not, capped by the "
            "record's retry count (param+0x40)",
    "timeout": "20000 (FUN_1001c4c0(0, 20000) on the byte lanes)",
    "setup": "if the record has a 4-byte-address field (param+0x58), FUN_1003cb60 "
             "writes the dword at param+0x50 first - the 0xBF enter-4-byte-mode "
             "the A25L020 record carries (0xFF = none on the A25L032M)",
}

# The Flash.dat scripts are ASCII CSV, not binary (16m, vendor/PlugIn/Flash.dat,
# 44,211 bytes). Statement grammar: `06,reg,value` = write a register,
# `0d,60,01,00,00,64,00,64` = fetch/poll. The A25L020 template at 0x37 - the
# script the A25L032M (the chip on this board, key 37 30 16 15 = "70 16 15")
# inherits - is 18 statements in three phases:
FLASHDAT_SCRIPT = {
    "file": "vendor/PlugIn/Flash.dat, 44,211 bytes, ASCII CSV of hex bytes",
    "grammar": {"06": "write reg,value", "0d": "fetch/poll (60,01,00,00,64,00,64)"},
    "registers": {0x60: "CTRL", 0x61: "OPCODE", 0x64: "ADDR", 0x65: "MODE",
                  0x66: "LEN"},
    "phases": [
        {"name": "write enable", "ctrl": (0x20, 0x21), "opcode": 0x06,
         "addr": None, "mode": None, "len": None},
        {"name": "read device id", "ctrl": (0x38, 0x39), "opcode": 0x90,
         "addr": 0x00, "mode": 0x28, "len": 0x00},
        {"name": "fast read (quad out)", "ctrl": (0x38, 0x39), "opcode": 0x3B,
         "addr": 0x00, "mode": 0x28, "len": 0x40},
    ],
    "ctrl_reading": "0x20/0x21 is the command-only class (WREN), 0x38/0x39 the "
                    "addressed class; bit 0 is the arm/trigger, and 16a's "
                    "0x38 arm / 0x39 trigger is this byte, confirmed",
    "not_in_template": "erase and program: the template carries only WREN, RDID "
                       "and Fast-Read; erase is 0xC7 from the plugin (see "
                       "FLASH_ERASE_PACKET), program is the ConfigProgramFlash "
                       "export (COMM_API) - the open shape, next to decode",
    "per_chip": "each record may carry its own script: AT25DF041 has a status-"
                "read script (06,60,68 / 61,01 / 64,02 / 60,69), BY25D40_Special "
                "has 0xC3/0xA5 4-byte-mode statements",
}


# ---- 16n: the program packet, the erase packet, and the CTRL grammar ------
# Comm.dll's transport-level flash ops, all on ONE primitive (a comm-object
# method pointer, _DAT_101dee88) whose shape is
#        primitive(control, arg1, arg2, length, buffer)
#
# WriteFlashData (RVA 0x7cf0): asks GetI2CPageLength() for the page (the INI's
# AUX_I2CPageLen=32, 16b), splits the request into whole pages, and on
# device type 8 (GetCommID()==8 - OUR board, 16c) issues
#        (0x40, addr >> 16, addr, pageLen, buf+off)
# then a tail call with (count % page) for the remainder. The generic path
# (other device types) uses a 3-arg primitive (addr, len, buf) - no 24-bit
# split. This is 16d's note confirmed: the vendor pushes BOTH addr>>16 and the
# full dword, so all 24 bits reach the wire.
#
# SectorErase (RVA 0xc470): on device type 8,
#        (0x42, addr & 0xff, bank & 0xff, 0, 0)      - address in, no data
# BankErase (RVA 0xc4e0) is the sibling on the same primitive.
#
# ConfigProgramFlash (RVA 0xc6f0) is a DISPATCHER: it calls a backend method
# pointer and returns its status. It carries no wire form of its own. And in
# Comm_Aux.dll the three names ConfigProgramFlash / ReadFlashData /
# WriteFlashData are ONE 5-byte stub (`mov eax,0x804; ret`) - the AUX backend
# does not implement them, which is why the plugin's own register ladder (16k)
# is the real flash path on this box.
PROGRAM_PACKET = {
    "primitive": "comm-object method, shape (control, arg1, arg2, length, buffer)",
    "program": {"control": 0x40, "arg1": "addr >> 16", "arg2": "addr",
                "length": "page (GetI2CPageLength = INI AUX_I2CPageLen = 32)",
                "buffer": "buf + offset", "site": "Comm.dll RVA 0x7cf0",
                "tail": "a second call with count % page for the remainder"},
    "sector_erase": {"control": 0x42, "arg1": "addr & 0xff", "arg2": "bank & 0xff",
                     "length": 0, "buffer": None, "site": "Comm.dll RVA 0xc470"},
    "bank_erase": "Comm.dll RVA 0xc4e0, same primitive",
    "device_type": "8 selects this primitive (GetCommID()==8, our board); other "
                   "types use a 3-arg (addr, len, buf) primitive",
    "config_is_a_dispatcher": True,
    "aux_backend": "Comm_Aux exports ConfigProgramFlash/ReadFlashData/"
                   "WriteFlashData as ONE stub returning 0x804 - unimplemented "
                   "there; the plugin's register ladder is the flash path",
}

# The control byte, assembled from all four sources (the Flash.dat template
# 16m, the chip erase 16m, sector erase + program 16n). It encodes the command
# CLASS; bit 0 is the arm/trigger in the script grammar.
ISP_CTRL_GRAMMAR = {
    "0x20/0x21": "command-only class - WREN (no address phase)",
    "0x38/0x39": "addressed read class - RDID 0x90, Fast-Read 0x3B (ADDR/MODE/LEN "
                 "registers are written first; 16a's 'arm/trigger' pair)",
    "0x40": "program a page - carries the buffer (16n)",
    "0x42": "erase a sector - address in, no buffer (16n)",
    "0xa0/0xa1": "chip erase - opcode 0xC7, no address (16m)",
    "bit0": "the arm/trigger write in the script grammar (0x20 -> 0x21, "
            "0x38 -> 0x39, 0xa0 -> 0xa1)",
    "reading": "the class byte, not the opcode, says whether the command takes "
               "an address and whether it takes data - which is why the port "
               "can drive every one of these with the same three register "
               "writes plus a data phase",
}


# ---- 16o: the PWM2SPI packet grammar - the last hop of the program shape --
# Comm.dll's WritePWM2SPIDev (RVA 0xa280) / ReadPWM2SPIDev (RVA 0xa1b0) are the
# primitive 16n named. Two levels:
#   the Dev level chunks a transfer into 0xC (12) data bytes per transaction
#   with a 0x18 (24) byte buffer stride, and only backends 3 and 5 are
#   supported (the selector _DAT_101d49a4: 1/2/4 return 0xB = unsupported).
#   The leaf level (0xa650 write / 0xa350 read) builds the packet and ships it.
# The packet, built on a 32-byte stack buffer:
#     [control, arg1, arg2, checksum] + up to 12 data bytes
#   checksum = the plain 8-bit SUM of the three header bytes (the read leaf
#   sums 3 bytes and appends the result as byte 4 - CONCAT13(sum, header)).
# The ports: the write leaf ships to register 0x9C, the read leaf to 0x9D, both
# through FUN_10003c80 (write) / FUN_10003990 (read) - the same ISP port ladder
# 16k implemented as flash_read_at. So the packet door and the data door are
# ONE ladder, and the special-comm-type flag (_DAT_101def2c == 1) is what makes
# the read leaf write its 4-byte header to 0x9D.
# Wire length of a transaction: 2 * len + 3 (the SPI bridge clocks a 16-bit
# word per data byte, plus the header phase).
PWM2SPI_PACKET = {
    "sites": "Comm.dll WritePWM2SPIDev RVA 0xa280, ReadPWM2SPIDev RVA 0xa1b0; "
             "leaves 0xa650 (write) / 0xa350 (read)",
    "packet": "[control, arg1, arg2, checksum] + <=12 data bytes",
    "checksum": "8-bit SUM of the three header bytes (not XOR)",
    "ports": {"write": 0x9C, "read_command": 0x9D},
    "transport": "FUN_10003c80 (write) / FUN_10003990 (read) = the ISP port "
                 "ladder of 16k - packet door and data door are one ladder",
    "chunking": "12 data bytes per transaction, 24-byte buffer stride",
    "wire_length": "2 * len + 3 (a 16-bit word clocked per data byte)",
    "backends": "selector _DAT_101d49a4: 3 and 5 work; 1, 2, 4 return 0xB",
    "program_pairing": "control 0x40 (16n) with the record's page-program "
                       "opcode 0x02 (the A25L020 record carries 0x02; the "
                       "erase pairs 0x42 with the erase opcode) - the pairing "
                       "is inference, the packet shape is read off the binary",
}


# ---- 16p: the write ladder - the data port is a WINDOW --------------------
# Comm.dll FUN_10003c80 is the twin of FUN_10003990 (16k's flash_read_at):
#   0xF2 <- rd(0xF2) & 0x7f          clear bit 7, keep the page
#   0x55 <- rd(0x55) | 0x80          command port bit 7
#   delay 0x20
#   0x57 <- rd(0x57) & 0xfc          width, low two bits clear
#   0x58 <- 0xE7                     bank (the mode-0 value the read ladder uses)
#   delay 0x20
#   0x5E <- reg                      THE WINDOW: the first byte names a register
#   0x55 <- 0xC1                     write command
#   0x5E <- payload...               up to 16 bytes per transaction
#   0x55 <- (2*n - 0x40) & 0xff      the trigger, LENGTH-ENCODED
# Two things that only the wire tells you: the data port is not a register but
# a window (write [reg, data...] through it), and the commit byte is arithmetic
# in the byte count - a 4-byte packet header commits with 0xC8, a full 16-byte
# transaction with 0xE0. Shipped as isp_write_packet, packet_bytes,
# program_page_at, sector_erase_at.
ISP_WRITE_LADDER = {
    "site": "Comm.dll RVA 0x3c80 (the twin of 0x3990, 16k)",
    "window": "0x5E - the first byte names the register, the rest is its payload",
    "command": {"write": 0xC1, "read": 0xC1},
    "trigger": "(2 * n - 0x40) & 0xff - a 4-byte packet commits with 0xC8, a "
               "16-byte transaction with 0xE0",
    "max_per_transaction": 16,
    "bank_mode0": 0xE7,
    "code": "msi_isp/isp.py isp_write_packet / packet_bytes / program_page_at "
            "/ sector_erase_at",
    "live": "msi-isp pipeline walks 4 steps on i2c-dev: the two packet steps "
            "send 45 0c 00 51 and 45 01 00 46, then 'get flash type' stops at "
            "0x22 (EIO) - the same wall as before, now with decoded packets",
}


# ---- 16q: the 0x37 window is a 32-byte ring, and it is STICKY -------------
# The round-trip probe 16p offered: build a packet that cannot be confused with
# the MCCS frame, send it out the write door (0x9C) with the 16p ladder, read
# the window back.
#
# Measured (2026-11-01, i2c-dev 0x37 and relay lane=native, read-only):
#   - the ladder runs clean on both lanes: no error, the full port sequence.
#   - the read-back is a 32-BYTE RING: d[:32] == d[32:64] byte for byte, at
#     48, 64 and 96-byte reads. The block is
#         06 f8 02 00*27 bf
#     and 06/f8/02 is the tail of the mailbox frame [0x06, 0x06, 0xF8, 0x02]
#     that 16l wrote - op 0x06 at address 0x2F806 - about an HOUR earlier, in a
#     DIFFERENT process. The window is sticky: it survives process exit.
#   - the probe packet (40 ab cd b8, and later 55 11 22 88) appears NOWHERE in
#     48, 64 or 96 bytes of the window.
#
# Reading: the PWM2SPI doors are on the ISP slave 0x22 (16n), not on 0x37. On
# 0x37 the byte-index ports address the DDC/CI-MCCS space, whose reply buffer
# is this 32-byte ring - so the ring shows the last mailbox frame, not the last
# window write. The write ladder is decode-correct and unit-pinned; its wire
# confirmation needs 0x22 answering, which is the non-NVIDIA-box lever.
ISP_WINDOW_RING = {
    "measured": "2026-11-01, i2c-dev /dev/i2c-4 slave 0x37 and relay "
                "lane=native, read-only",
    "period_bytes": 32,
    "proof": "d[:32] == d[32:64] exactly, at 48, 64 and 96-byte reads",
    "content": "06 f8 02 00x27 bf - the tail of 16l's mailbox frame "
               "[06 06 f8 02] = op 0x06 at address 0x2F806",
    "sticky": "the content is a write from ~1 h earlier in ANOTHER process: "
              "the sink keeps the window across process exit",
    "probe_packet": "40 ab cd b8 and 55 11 22 88 - the packet built by "
                    "packet_bytes and sent by isp_write_packet through door "
                    "0x9C - appear nowhere in the window",
    "reading": "the doors 0x9C/0x9D live on the ISP slave 0x22 (16n); on 0x37 "
               "the byte-index ports address the MCCS space whose reply buffer "
               "is the ring",
    "consequence": "16p's write ladder is decode-correct and code-tested; its "
                   "wire confirmation is a 0x22 read, i.e. the non-NVIDIA box",
}


# ---- 16r: the two banks, and the first pilot write into the inactive one --
# The owner's model of the panel is right, and the binaries say so in three
# places.
#
# THE SELECTOR is one bit. The board record's width_values pair differs in
# exactly bit 3 (0xe7 ^ 0xef = 0x08, and bank_bit == 8), on port 0x58:
#     bank 0 -> 0x58 = 0xE7        bank 1 -> 0x58 = 0xEF
# 16a's DAT_1024a2d4 set {4,5,6,7,0x11,0x1a,0x1b} is the plugin-level bank
# code, where 0x1a is the BACKGROUND (writing) bank and 0x1b the FOREGROUND
# (running) one.
#
# THE LAYOUT follows from the sizes: the chip is an A25L032M = 4 MiB, FW.009
# is 1.875 MiB and FW.012 is 1.75 MiB, so the split is two 2 MiB banks and the
# inactive block's base is 0x200000.
#
# THE FLAG is the vendor's own INI key, typo included, in [ISP_DualBank]:
#     bSwitchFLag=1  enumIspMode=1  enumBootCodeType=1  bWaitCopyBank=0
#     copy_bank_wait_ms=8000  time_after_reset_ms=10000
#     release_device_after_reset=1
# i.e. program one bank, set the switch flag, reset, and give the panel ten
# seconds - which is the boot-from-the-other-block the owner described.
DUAL_BANK = {
    "selector": "port 0x58: 0xE7 = bank 0, 0xEF = bank 1 (they differ in bit 3; "
                "the board record's bank_bit is 8)",
    "plugin_codes": "DAT_1024a2d4 in {4,5,6,7,0x11,0x1a,0x1b}; 0x1a background "
                    "(write), 0x1b foreground (running) - 16a",
    "chip": "A25L032M, 4 MiB",
    "layout": "two 2 MiB banks; FW.009 is 1.875 MiB and lives in bank 0, so the "
              "inactive block starts at 0x200000",
    "flag": "bSwitchFLag=1 in [ISP_DualBank] (the vendor's own spelling) + a "
            "reset; time_after_reset_ms=10000, copy_bank_wait_ms=8000",
    "measured": "2026-11-01, msi-isp, read-only reads plus one pilot page",
}

# THE PILOT (16r): write a 32-byte marker page into the inactive bank, read it
# back. The write path ran end to end - packet [0x40, 0x02, 0x00, sum] to door
# 0x9C, then the page in 16-byte window transactions, 36 bytes total, bank port
# 0xEF - with no error on either lane. The reads are mute to all of it:
#   0x37      the sticky 32-byte ring (16q), at 0x0, 0x200000, bank 0 and bank 1
#   native 0x22 00 00 05 21 00 04 2b 04 09 00 80 0f... - the DPCD byte space,
#             identical at every address and every bank
# A sector erase in bank 1 changed nothing readable. The panel is healthy
# afterwards: FW.009, model MAG 341CQ X28 (msi-isp info).
PILOT_WRITE = {
    "wrote": "32-byte marker c0feee12 x 8 at 0x200000, bank 1, via "
             "program_page_at (36 bytes on the wire through door 0x9C)",
    "then": "sector_erase_at(0x00, bank_select=1), then read",
    "read_back": "unchanged - the ring on 0x37, the DPCD space on native 0x22",
    "bank_bit_effect": "none observable on any lane",
    "panel_after": "FW.009, model MAG 341CQ X28 - alive and unbothered",
    "reading": "the transport accepts the full program packet; the flash side "
               "is mute on the NVIDIA lanes, so the ISP register file is "
               "behind the branch tunnel. Writing the inactive bank is proven "
               "at the packet level and unproven at the cell level.",
    "next": "the same three commands on a box where 0x22 answers as the ISP "
            "register file (Intel/AMD, no allow-list) - erase, program, read "
            "back the marker",
}


# ---- 16t: Grok's review, and the two axes it predicted are now measured ---
# An outside reviewer (Grok, reading this repo) attacked the inferences. Two
# predictions were testable tonight; both were run on the panel.
#
# ITEM 1 - "the address-independent reply is your 16-bit addressing". The
# decompile's mode-2 branch is the 24-bit path (writes param_1, param_3>>8,
# param_3), and the tool defaulted to mode 1. Running mode 0, 1 and 2 at
# 0x000000, 0x010000 and 0x200000:
#     native lane 0x22 -> 00 00 05 21 00 04 2b 04 09 00 80 0f   (all nine)
#     i2c-dev  0x37   -> 88 02 00 10 00 00 64 00 46 86 00 00   (all six)
# REJECTED as the explanation: the address width does not move the reply. The
# reviewer's alternative reading stands - 0x37's reply is the DDC/CI reply
# buffer (that frame is a GetVCP 0x10 reply: 70 Hz of a 100 max), so "the
# grammar's reply" and "the last MCCS read" are the same 32 bytes.
#
# ITEM 2 - "your packets omit a data-checksum trailer". The write leaf's
# unrolled accumulation over 32-byte padded blocks is the vectorized
# sum-of-buffer pattern, and its tail does something we had not recorded:
#     FUN_10003990(8, 2, &buf)   (special-comm-type path)
#     if (buf[0] != 0x9C) -> fail;  if (buf[1] != 0xE1) -> fail
# i.e. the vendor WRITES THE PACKET AND READS BACK 8 BYTES AT REGISTER 2,
# expecting 0x9C then 0xE1 - a per-transaction acknowledgement. Shipped as
# program_page_at(..., trailer=True): the trailer is the 8-bit sum of the whole
# packet (header + data), appended once.
#
# THE MATRIX (native lane, slave 0x22, marker page at 0x200000):
#     mode 0/1/2  x  trailer off/on  -> 6 writes, 36 or 37 bytes, read-back
#     identical to the baseline in all six.
# So neither the address width, the bank bit, the checksum trailer nor the
# mode-correct trigger moves the reply. The wall is the slave, not the packet.
GROK_REVIEW_16T = {
    "reviewer": "Grok, reading this repo (GROK-REVIEW.md), 2026-11-01",
    "item1_address_width": "REJECTED as the explanation - mode 0, 1 and 2 at "
                           "0x0, 0x10000, 0x200000 give one reply each lane",
    "item2_trailer": "IMPLEMENTED (program_page_at(trailer=True)); 6-combination "
                     "matrix (mode 0/1/2 x trailer off/on) - read-back identical",
    "leaf_ack": "the write leaf reads 8 bytes back at register 2 and expects "
                "0x9C then 0xE1 - a per-transaction ack we now send blind",
    "conclusion": "address, bank, checksum trailer and mode-correct trigger "
                  "move nothing on the answering slave: the wall is the slave "
                  "(0x22), not the packet",
    "misread_risks": "the reviewer's three, all accepted: (a) slot arithmetic "
                     "byte = 4 x index underpins the whole naming layer; (b) "
                     "the address-independent story rests on a sticky DDC/CI "
                     "buffer; (c) 0x37 is the handshake/MCCS slave, so "
                     "building the flash model on the only slave that answers "
                     "yields a coherent model that never touches flash",
    "next_probe": "read back 8 bytes at register 2 (the leaf's own ack) after a "
                  "write - if it answers 9c e1, the packet is accepted at the "
                  "bridge and only the cell write is unproven",
}


# ---- 16t(b): the native lane's 0x22 IS an addressable window, and a write
#            changes it - the first write-visibility on this panel ----------
# Probing the write leaf's own ack (read 8 bytes at register 2) found that
# register 2 answers with CONTENT (c4 83 01 00 01 c0 02 00), unlike 0x9C/0x9D
# (zeros). Sweeping 512 16-bit register indices on the native lane, slave 0x22:
#   - 98 of 512 indices return non-zero
#   - reading at index N returns the SAME byte stream offset by N - so this is
#     ONE byte-addressable buffer (a DPCD-shaped window), not 512 registers
#   - content at 0x0000: 12 14 c4 83 01 00 01 c0 02 00 06 00 00 00 82 00
#     content at 0x0100: 00 84 00 02 02 02 02 90
# After a page-program write (mode 2, trailer on) at 0x200000, 24 indices
# CHANGED: the status byte at 0x0107 went 0x90 -> 0x10 and a counter around
# 0x010a (0x04) cleared to zero. That is the first measured case on this panel
# of a write producing a device-side change we can see.
#
# The packet's own bytes are NOT in the window: a marker packet
# (header 40 23 45, data c0 fe ee 12 ab cd ef 5a) appears nowhere in
# 0x0000..0x01ff. So the write lands as BRANCH STATE (transaction status,
# counters), not as flash data - the cells are still unproven.
ISP_REGFILE_NATIVE = {
    "measured": "2026-11-01, relay /dev/msi-auxch lane=native, slave 0x22, "
                "read-only reads + one page write",
    "shape": "one byte-addressable window: reading at index N returns the same "
             "stream at offset N (not 512 independent registers)",
    "swept": "512 indices, 98 with content",
    "content_0x0000": "12 14 c4 83 01 00 01 c0 02 00 06 00 00 00 82 00",
    "content_0x0100": "00 84 00 02 02 02 02 90",
    "after_a_page_write": "24 indices changed: 0x0107 0x90 -> 0x10, a counter "
                          "at 0x010a (0x04) -> 0x00",
    "marker_visible": "no - the packet's own bytes appear nowhere in "
                      "0x0000..0x01ff",
    "leaf_ack": "the vendor's write leaf reads 8 bytes at register 2 and "
                "expects 0x9C then 0xE1; this panel answers c4 83 01 00..., "
                "so the ack we send blind is not the ack it checks",
    "reading": "the write reaches the sink's branch and changes transaction "
               "state; the flash cells remain unproven. The window is the "
               "branch's, which is why every grammar on 0x37 also read it",
}


# ---- 16u: the blank screen is explained, and the window is stateful -------
# During the 16t sweep (a page write with mode 2 + trailer on the native lane)
# the panel went blank, the source reported "no signal" on DisplayPort, the
# panel entered standby, and a power cycle restored the image. That is not a
# fluke - it is the mechanism, and it is good news twice over.
#
# WHY IT BLANKS. On the native lane the ISP "port numbers" are DPCD byte
# addresses on this sink (16k's dual naming: 0x60 = DPCD TPS set, 0x61 = lane0
# pattern, 0x64 = lane align). The ladder's ports land in the same space:
#     0x55, 0x56, 0x57, 0x58  = DPCD LANE_ADJUST_REQUEST lanes 0..3
#     0x5E                    = the lane-adjust / MTPMT region
#     0xF2                    = MTPMT1 (the 16-bit window's own home, 14i)
# So driving the ISP ladder writes lane-adjustment requests, and the source
# retrains the link. A blank + "no signal" + standby during a probe is the
# expected behaviour of a working write path, not a fault.
#
# WHY THAT IS GOOD. The window is stateful and the state is write-visible:
#     0x0107  0x90 (idle)  ->  0x10 (after a page write)  ->  0x90 (after a
#                               power cycle)
# and DPCD came back to its 16k baseline (0x60 = 0x05, 0x64 = 0x2b). So the
# writes reach live scaler state through the branch - the flash cells are still
# unproven, but the door demonstrably turns.
#
# The window's head block is stable across the power cycle
# (0x0000 = 12 14 c4 83 01 00 01 c0), which is what a link-capability block
# looks like; the 0x0100 block is the transaction state that moves.
DP_BLANKING = {
    "observed": "2026-11-01, during the 16t register-file sweep: screen blank, "
                "source reports no signal on DP, panel enters standby; a power "
                "cycle restores the image",
    "cause": "the ISP ladder's ports are DPCD byte addresses on this sink - "
             "0x55/0x57/0x58 are LANE_ADJUST_REQUEST lanes 0-2 and 0xF2 is "
             "MTPMT1 - so a ladder write asks the link to retrain",
    "window_state": "0x0107: 0x90 idle -> 0x10 after a page write -> 0x90 "
                    "after a power cycle",
    "dpcd_after": "0x60 = 0x05, 0x64 = 0x2b (the 16k baseline)",
    "head_block": "0x0000 = 12 14 c4 83 01 00 01 c0 - unchanged by the power "
                  "cycle, i.e. a capability block, not transaction state",
    "health_after": "FW.009, MAG 341CQ X28",
    "operational_note": "expect a transient blank/standby when driving the ISP "
                        "ladder; the link recovers on retrain, and a power "
                        "cycle restores the panel",
}


# ---- 16v: the native-lane window is a latch, not an ack - the map ---------
# The hunt: find the byte that answers a packet, so a 57,344-page write has a
# per-transaction acknowledgement to watch. The vendor's own write leaf reads 8
# bytes at register 2 and expects 0x9C then 0xE1; this panel answers
# c4 83 01 00..., so register 2 is a stream offset, not the ack slot (16u).
# Mapping the 0x0100 block on the native lane, slave 0x22, all reads read-only:
#
#   command class   (0x20, 0x38, 0x40, 0x42, 0xA0)   -> block unchanged, 5/5
#   data phase      (0, 4, 8, 12, 16 bytes)          -> block unchanged, 5/5
#   ISP entry       (candidate 5, status 0x8a)       -> block unchanged
#   passive, 12 s x 8 samples                        -> block unchanged
#
# The block's idle value is 00 84 00 02 02 02 02 00 01 00... and it is stable.
#
# CORRECTION to 16t, annotated not erased: "24 indices changed" is ONE byte
# moving. Reading at index N returns the same stream at offset N, so a single
# byte at stream offset 0x107 appears in every overlapping index - 0x90 -> 0x10
# once, in the session that ran the page-program matrix, and 0x00 ever since,
# through a power cycle, an ISP entry, five command classes and five data
# phases. It is a LATCHED value, not a live per-command ack.
#
# So: the window is real, byte-addressable and write-visible, and it is the
# sink's DP-branch state - the ISP register file proper (doors 0x9C/0x9D) still
# reads zeros on the tunnel lane. The ack for a page program has to come from
# the flash side, which is the clip's job.
ISP_WINDOW_MAP = {
    "measured": "2026-11-01, relay lane=native, slave 0x22, read-only",
    "idle_block_0x0100": "00 84 00 02 02 02 02 00 01 00 00 00 00 00 00 00",
    "per_command": "5 command classes (0x20, 0x38, 0x40, 0x42, 0xA0): no delta",
    "per_data_phase": "5 sizes (0, 4, 8, 12, 16 B): no delta",
    "isp_entry": "candidate 5, status 0x8a: no delta",
    "passive": "8 samples at 12 s: no drift",
    "correction_16t": "'24 indices changed' is ONE byte at stream offset 0x107 "
                      "seen through the shifted window (0x90 -> 0x10 once, then "
                      "0x00 permanently) - a latch, not a per-command ack",
    "ack_register": "the leaf reads 8 bytes at register 2 expecting 9C E1; this "
                    "panel answers c4 83 01 00 - register 2 is a stream offset",
    "consequence": "no per-transaction ack is observable from the DP side; the "
                   "ack must come from the flash side, i.e. the clip",
}
