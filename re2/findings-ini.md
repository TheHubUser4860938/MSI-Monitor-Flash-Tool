# Findings — IspSetting.ini key map (worker pass, 2026-11-10)

Source: `WinIspPlugIn.dll`, loader `FUN_1002f230` @0x1002f230 (a 14 KB CSettingsView ctor),
`GetPrivateProfileIntW` (108 sites, section always `"Settings"`) + `GetPrivateProfileStringW`
(33 sites). Evidence ids: loader body `decomp/WinIspPlugIn/functions/0x1002f230.c`;
strings `re2/isp-strings-u16.txt`.

## Loading

- Settings object 0x2010 bytes, ctor at 0x10249d10 (MFC `afxIniSectionState`), 143 int keys + 33 string keys.
- Path: `<setting path>IspSetting.ini`; `.INI` is the fallback probe (0x101d318c).
- **No INI present → 0x2010 bytes of zero**; defaults below are the API's second arg, applied
  key-by-key only when a section is read.
- The `[Settings]` section name is a literal at **every** one of the 141 read sites.
  `Background_ISP_Settging` (the binary's own typo) is **not** an INI section: it is a
  `CCpRsString` global @0x1024a044, the background-update object name.
- `ProjectIDAddrSetting` @0x101d3828, `ProjectIDCountSetting` @0x101d3840, `ISP_CHECK_SETTING`
  @0x101d37f0 are **device-attribute map names**, not INI sections.
- String keys are stored as 0x208-byte WCHAR buffers (14 × 0x208 from 0x1024a3e4 to 0x1024bf98).

## Bool keys (`GetPrivateProfileIntW`, nonzero = true)

| key | default | global | controls |
|---|---|---|---|
| bAuto | 0 | 1024a2d9 | auto-detect/enter ISP by boot code; gates FUN_10016b00 |
| bAutoDetectFlash | 1 | 1024a354 | read JEDEC from monitor vs take flash type from INI |
| bAutoDetectSlave | 1 | 1024a358 | probe slave addr (FUN_10017300) |
| bAutoISP | 1 | 1024a360 | auto-ISP after handshake |
| bCheckBinFileAndIC | 0 | 1024a2dc | bin-vs-IC match check |
| bCheckCHK | 0 | 1024a30c | firmware CHK verify → FUN_100196b0 |
| bCheckReturnValue | 1 | 1024a2e4 | check Comm.dll return codes |
| bDDCCIReadNotReturn0x6E | 1 | 1024a344 | DDC/CI read expects 0x6E |
| bEnableBBBackgroundUpdate | 1 | 1024a310 | background (dual-bank) update |
| bEnableBBISPCrcCheck | 1 | 1024a314 | BB ISP CRC check |
| bEnableCheckFlashMode | 1 | 1024a320 | compare MCM-vs-external flash mode |
| bEnableISPChannel | 1 | 1024a31c | enable ISP channel select |
| bEnableSetBackgroundFlashWriteTime | 0 | 1024a324 | stamp bg flash write time |
| bEnableTypeCUSBEnterISPMode | 1 | 1024a328 | USB-C path enters ISP |
| bFindFwIgnoreCapabilityInfo | 1 | 1024a32c | match FW by capability string |
| bFindFwIgnoreModelName | 1 | 1024a330 | match FW by model string |
| bFindFwIgnorePanelName | 1 | 1024a334 | match FW by panel string |
| bFindFwIgnoreSIName | 1 | 1024a338 | match FW by SI string |
| bFindFwIgnoreVersionName | 0 | 1024a33c | match FW by version string |
| bGetFPSettingFromIC | 0 | 1024a350 | read panel settings from IC |
| bGetKeyFromFlashProgSwitch | 1 | 1024a34c | key from PROG switch area |
| bGetModelNameCheckCHK | 0 | 1024a2ec | CHK-check on model read |
| bGetPanelNameCheckCHK | 0 | 1024a2f8 | CHK-check on panel read |
| bGetSINameCheckCHK | 0 | 1024a304 | CHK-check on SI read |
| bGetVersionCheckCHK | 0 | 1024a2e0 | CHK-check on version read |
| bHWISPSpeedUp | 1 | 1024b4b0 | HW ISP speed-up path |
| bIspBeforeAcOn | 0 | 1024a2b8 | ISP before AC-on |
| bIspFinishBeforeReset | 0 | 1024a2d8 | finish before MCU reset |
| bISPCheckTypecUsb | 1 | 1024a2c8 | verify TypeC-USB mode after ISP |
| bISPRL6420MCMFlashMode | 0 | 1024b4d0 | RL6420 MCM flash mode |
| bISPRL6703CheckFlashAndBin | 0 | 1024b4cc | RL6703 flash/bin size check |
| bIspSCPUFlash | 0 | 1024a380 | SCPU flash path |
| bIspTTSFlash | 0 | 1024a384 | TTS flash path |
| bMCMFlashMode | 0 | 1024a374 | MCM (embedded) flash mode |
| bNotSetSlave | 1 | 1024a388 | don't set slave addr |
| bProjectIDCheck | 0 | 1024a348 | project-ID check |
| bQisdaFactory | 1 | 1024a340 | Qisda factory mode |
| bReleaseDeviceAfterReset | 0 | 1024a370 | release device after reset |
| bResetAfterRecordVer | 0 | 1024a2e8 | reset after recording version |
| bResetMcu | 1 | 1024a2d4 | reset MCU after ISP |
| bRetryISP | 1 | 1024a2c0 | retry whole ISP flow |
| bRetrySectorISP | 0 | 1024a2cc | retry per sector |
| bSendDDCCICmd | 0 | 1024a378 | send raw DDC/CI cmds (FUN_10033590) |
| bSetPacketLen | 0 | 1024a35c | set packet length (slot 0x58) |
| bSmbusBlockReadWrite | 0 | 1024a368 | SMBus block r/w mode |
| bSoftwareSignVerifyCheckKey | 0 | 1024a2fc | RSA signature verify (FUN_10019e00) |
| bSwitchFLag | 1 | 1024a2c4 | bank switch flag (the typo is the binary's) |
| bWaitCopyBank | 0 | 1024a36c | wait for MCU bank copy |
| bWriteProtectUseSetting | 0 | 1024a37c | WP from ulWPRegister/ulWPPinRegister |

UI-only (not read in this DLL): bAutoExit, bAutoSearchFW, bCheckToolAndBinFile, bCheckToolAndIC,
bClearXROMFlagEx, bGetCapabilityInfo, bGetModelName, bGetPanelName, bGetSIName, bGetVersion,
bSave, bSaveDebugLog, bSaveProgress, bSaveResult, bShowDualBankFW, bShowDumpFlash, bShowEnterIspMode,
bShowEraseUI, bShowFWInfoUI, bShowFWVersion, bShowInfoOnConsole, bShowMergeFW, bShowResetMCU.

## Int keys

| key | default | global | controls |
|---|---|---|---|
| ulAutoIspCode | 0x35 | 1024b4b8 | boot code that means auto-ISP |
| ulBootType | 0 | 1024b4bc | boot type for handshake |
| ulDelayTime | 0 | 1024a3a8 | delay after bank switch (FUN_100168d0) |
| ulDumpFlashAddr | 0 | 1024a3c8 | dump start addr |
| ulDumpFlashLen | 0x1e0000 | 1024a3cc | dump length (1,966,080 = the shipped image size) |
| ulEndWithIndexStartAddr | 0 | 1024a3c0 | dump end by index start |
| ulIspSpeed | 0 | 1024a38c | ISP speed (slot 0x94) |
| ulLen | 0 | 1024a3bc | generic length |
| ulMajorVerLen | 0 | 1024a3f0 | major version length (v1 @1024a3e4) |
| ulMergeFwInfoLength | 0 | 1024a3e0 | merge FW info length |
| ulPinRegister | 0 | 1024b498 | WP pin register addr |
| ulPinShare | 0 | 1024b49c | WP pin share reg addr |
| ulPollingCount | 0x14 (20) | 1024a3b8 | polling retries |
| ulProgStartBank | 0 | 1024a394 | first program bank |
| ulReISPDelayTime | 0 | 1024a3b4 | delay before re-ISP |
| ulRetryISPSleepTime | 1000 | 1024a3a4 | ms between ISP retries |
| ulRetrySectorISPSleepTime | 1000 | 1024a3b0 | ms between sector retries |
| ulSendCmdRetryCount | 3 | 1024a404 | raw cmd retries |
| ulSendCmdSleepTime | 1000 | 1024a408 | ms between cmd retries |
| ulSubVerLen | 0 | 1024a3f8 | sub version length (v2 @1024a400) |
| ulSwitchToRomCodeDelay | 0 | 1024a410 | ms before ROM switch (FUN_1001e570) |
| ulTimeAfterCommand | 0 | 1024a3ac | ms after command |
| ulTimeAfterReset | 0 | 1024a3dc | ms after MCU reset |
| ulTimeBeforeAcOn | 0 | 1024a3d8 | ms before AC-on |
| ulTimeWaitCopyBank | 0 | 1024a3d0 | ms waiting for bank copy |
| ulTotalVerLen | 0 | 1024a3ec | total version length |
| ulVidPidCount | 0 | 1024a3e8 | VID/PID pair count |
| ulWPPinRegister | 0 | 1024b4a4 | WP pin register (bWriteProtectUseSetting) |
| ulWPRegister | 0 | 1024b4a0 | WP register (same) |
| ulAddr | 0 | 1024a2b0 | target addr (FUN_10016d20, slot 0x13c) |
| ulCommandRetryCount | 0x0a (10) | 1024a400 | command retries |
| ulRetryISPCount | 3 | 1024a2c0+4 | whole-flow retries |
| ulRetrySectorISPCount | 3 | 1024a2cc+4 | sector retries |
| ulSendCmdDelayTime | 10 | 1024a40c | ms after raw cmd (FUN_10016a50) |

## String keys

| key | global | bytes |
|---|---|---|
| CapabilityInfo | 1024a3e4 | 0x208 |
| ModelName | 1024a400 | 0x208 |
| PanelName | 1024a608 | 0x208 |
| ProjectID | 1024b1b0 | 0x208 |
| SIName | 1024a80c | 0x208 |
| ScalerName | 1024aa10 | 0x208 |
| ChipName | 1024ac14 | 0x208 |
| FlashName | 1024ae18 | 0x208 |
| FWVersion | 1024b3b4 | 0x208 |
| CheckSum | 1024b5a0 | 0x208 |
| IspSetting | 1024b7a4 | 0x208 |
| Key | 1024b9a8 | 0x208 |
| FactoryKey | 1024bbac | 0x208 |
| CustomerCode | 1024bf98 | 0x208 |

## Entry point → flow (all 19 exports)

Every export: `FUN_100080f0(); code = FUN_1001f750(); …work…; FUN_1001fa90(); FUN_1003fab0(code)`.

| export | addr | work |
|---|---|---|
| GetScalerType | 10008f40 | FUN_1001ba20 handshake → FUN_1001bbd0 (fallback FUN_1001f3c0) → FUN_10016b00 boot code |
| RecordFWVersion | 10008750 | FUN_1001f3c0 → FUN_1001f140 |
| GetKeyFromFlash | 100087b0 | FUN_1001f3c0 → FUN_10019300 |
| GetFWInfo | 10008800 | FUN_10039410 (whole version-info flow) |
| DumpFlash | 10008860 | copy settings @1024a430 → FUN_100239b0 |
| GetUserDefinedInfoFromDDCCI | 100088f0 | copy settings → FUN_100230b0 |
| SendUserDefinedInfo | 10008980 | copy settings → FUN_100216c0 |
| BankEraseFlash | 10008a20 | FUN_1001ba20 → FUN_1001bbd0 → FUN_10016b00 → FUN_1002b8b0 → FUN_1002b620 |
| ChipEraseFlash | 10008af0 | same → FUN_1002b590 |
| IspEeprom | 10008bc0 | FUN_1002bdf0 → FUN_1002be80 → FUN_1002bf80 |
| EnterISPModeExport | 10008c50 | FUN_1001ba20 → FUN_1001bbd0 → FUN_10016b00 |
| ResetMCUExport | 10008cd0 | handshake → FUN_1001b860 (reset MCU) |
| GetMergeFwInfo | 10008d80 | FUN_100399a0 |
| SetMergeFwInfo | 10008e20 | FUN_10039d10 |
| I2CWriteExport | 10008ec0 | settings+0x43054==0 ? slot 0x54 (addr+data) : slot 0x13c |
| IspFlash | 10008520 | FUN_10007b80 → FUN_1001f750 → by scaler type: FUN_1003bcb0 (bg, 0x1a) / 0 (fg, 0x1b) / FUN_10034000 (DoIsp) |
| SetIDev | 100084f0 | store device → 10249d24 |
| SetCommInterface | 10008700 | store Comm ptr → 10249d10 |
| SetUIFunction | 10008500 | store 3 UI fn ptrs → 10249d18/d1c/d20 |
