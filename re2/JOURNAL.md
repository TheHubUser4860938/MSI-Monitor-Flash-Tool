# RE Journal — fresh pass (re2), started 2026-11-10

Goal: reverse engineer the MSI Windows monitor firmware tool from the binaries and rebuild it as a
Linux-native tool, 1-for-1 on observed behaviour. The `re/` tree, `msi_isp/`, STATUS.md and HANDOFF.md
are **prior work, not premises**: every claim below is re-derived from the binaries in this pass.

Method: REA (rea-agents 6.8.0) over MCP, Ghidra 12.1.2 headless provider. Verify between steps.
Every conclusion carries an evidence id and is labelled **observed** (Ghidra/PE says it),
**inferred** (my reading of it) or **unknown** (not established).

## Target set (vendor/, sha256 from this pass)

| file | arch | role (observed from export table) |
|---|---|---|
| `MSI Firmware Update Utility V1.0.6.exe` | PE32 i386, 8 sect | MFC GUI, the driver of the flow. 0 exports. sha `42c935db…` |
| `Comm.dll` | PE32 i386 | Plugin **facade**: 170 exports, I2C/DDC-CI/flash/reg API + `SetCommByID`/`GetCommCount` device selection. sha `4c722089…` |
| `Comm/Comm_Aux.dll` | PE32 i386 | Transport plugin, 61 exports — I2C over DisplayPort **AUX**. sha `cf586ce9…` |
| `rtd38/Comm_GFXI2C.dll` | PE32 i386 (Win 5.00, 5 sect) | Transport plugin, 52 exports — NVAPI **GFX I2C**. sha `97b81cdd…` |
| `PlugIn/WinIspPlugIn.dll` | PE32 i386 | The **ISP engine**: 19 exports (`IspFlash`, `IspEeprom`, `DumpFlash`, `GetFWInfo`, `EnterISPModeExport`, …). sha `bbe579d6…` |
| `WinOperateCScaler.dll` | PE32 i386 | DDC/CI scalar ops: `OperateScaler`, `OperateScalerEx`. sha `7e1bdea4…` |
| `Comm/IntelControlAPI/ControlLib32.dll` + `ControlLib.dll` | i386 / amd64 | GPU control lib, 83 exports (`ctlAUXAccess`, `ctlI2CAccess`, `ctlEnumerateDisplayOutputs`). sha `9acbc026…` / `1ba84731…` |
| `PlugIn/Flash.dat` | data | per-model flash command table — format TBD |
| `MSI_MAG_341CQP_QD-OLED_X28_FW.009_DC2F.bin` / `…X28_FW.012_4023.bin` | data | firmware images, 1,966,080 / 1,835,008 B |

All modules are **native MFC/ATL C++** — no CLR metadata in any of them (observed: `strings` finds no
`mscoree`/`System.String`; CMFC*/ATL class names present).

## Step 1 — export tables (DONE)

`inspect_native_exports` on all eight modules; ids: Comm `ev_d97ac0bd…`, WinIspPlugIn `ev_62ed5d6b…`,
Comm_Aux `ev_284fc813…`, Comm_GFXI2C `ev_40d39b06…`, WinOperateCScaler `ev_1469d536…`,
ControlLib32 `ev_c733e74d…`, ControlLib `ev_1253c149…`, exe `ev_944c888b…`.

Shape of the system, from the export names alone (**inferred, to be confirmed by decompilation**):
the exe drives an MFC dialog; it calls `Comm.dll`, which is a facade over a *set* of transport
plugins that all implement the same 52–61 export interface (`I2CRead`/`I2CWrite`/`NativeRead`/
`NativeWrite`/`ReadFlashData`/`WriteFlashData`/`SectorErase`/`BankErase`/`ResetFirmware`/`IspEnable`).
`WinIspPlugIn.dll` owns the flash algorithm and reaches the monitor through that interface, injected
by `SetCommInterface`/`SetIDev`.

Open questions, in order:
1. What Win32/GPU APIs do the transports bottom out in? (→ imports)
2. `Flash.dat` format, and how a model selects its rows.
3. The ISP entry sequence (`EnterISPModeExport`) — registers, values, delays.
4. `IspFlash` write loop — page size, erase granularity, ordering, verify.
5. `GetFWInfo` — the firmware .bin header layout.
6. The exe's UI flow: what order it calls the above, and what it does with a .bin file.
7. Which transport the tool picks for which connector (DP vs HDMI vs USB-C).

## Step 2 — imports (DONE)

Full tables in `re2/imports.txt` (`inspect_pe_imports`). Observed: **no module statically imports
nvapi.dll** — the GPU calls are made through `LoadLibrary`/`GetProcAddress`. `ControlLib32.dll` carries
the PDB path `D:\qb\workspace\27479\source\output\dump32\CtlApi\bin\Release\ControlLib32.pdb` and imports
`SetupDiGetClassDevsW`/`SetupDiEnumDeviceInterfaces`/`SetupDiGetDeviceInterfaceDetailW` + `CreateFileW` →
it is the **NVIDIA Control API** user-mode shim (its 83 `ctl*` exports are `NvCtrl*` in disguise:
`ctlAUXAccess`, `ctlI2CAccess`, `ctlEnumerateDisplayOutputs`). `Comm_GFXI2C.dll` names
`nvapi.dll`, `nvapi_QueryInterface`, `nvapi_pepQueryInterface` — the classic NVAPI ordinal-thunk load.
`Comm_Aux.dll` additionally imports `CreateProcessW`, which is a hint it can spawn a helper.
The GUI exe is plain MFC (user32/gdi/uxtheme/gdiplus/ole) — all hardware access goes through `Comm.dll`.

## Step 3 — the ISP engine, first read (IN PROGRESS)

`open_binary` WinIspPlugIn.dll on ghidra. Ghidra resolved **PDB public names** for the exports, so the
decompiled text is readable: `IspFlash` @`0x10008520`, `IspEeprom` @`0x10008bc0`,
`EnterISPModeExport` @`0x10008c50`. Evidence `ev_f0a837c3…` (session), `ev_a5b5e639…` (strings).

`IspFlash` (observed, `procedure_pseudo_code` 0x10008520) is a dispatcher on a global **`DAT_1024a2d4`**:

- it runs only when that global ∈ {4, 5, 6, 7, 0x11, 0x1a, 0x1b} (the scaler type);
- `FUN_10007b80()` then `FUN_1001f750()`; the latter's failure prints
  `"InitCommunication Fail, Error Code: 0x%x"` → it is InitCommunication;
- body by type: `0x1a` → `FUN_1003bcb0` prints `" Fw update fw of background enumError :0x%X "`;
  `0x1b` → no call, prints `" Fw update fw of foreground enumError :0x%X "`;
  otherwise → `FUN_10034000` prints `" DoIsp enumError :0x%X "`.
  So the three flash paths are **DoIsp (main), background bank, foreground bank**.
- on success it calls `FUN_1001fa90` then `FUN_1003fab0(result)` (report + finish).

`PlugIn/Flash.dat` is read from 9 sites (`xrefs` 0x1020e4cc → 0x10001218…0x10002888, all one routine,
`PUSH 0x1020e4cc` at 0x10001218 — Ghidra has no function boundary there yet, `resolve_containing_procedure`
says `not_in_procedure`; the decompile-all pass will name it).

## Step 4 — the vocabulary: the model card is an INI (DONE)

`strings -el` on WinIspPlugIn.dll (2,093 UTF-16 strings, saved `re2/isp-strings-u16.txt`) shows the plugin
is **INI-driven per model**: the file is `IspSetting.ini` (also `.ini`/`.INI`), sections `Settings`,
`Background_ISP_Settging` (sic, the typo is the binary's), `ISP_CHECK_SETTING`, `ProjectIDAddrSetting`,
`ProjectIDCountSetting`; `SetSettingFilePath` picks the folder and `Load Flash dat from setting path:%ls`
says Flash.dat is loaded from the same path.

76 `b*` boolean keys and ~30 `ul*` numeric keys, all read with `GetPrivateProfileStringW`
(observed in the import table). The load-bearing ones for a flash run:
`bAutoISP bAutoDetectFlash bAutoDetectSlave bResetMcu bRetryISP bRetrySectorISP bHWISPSpeedUp
bIspSCPUFlash bIspTTSFlash bMCMFlashMode bISPRL6420MCMFlashMode bISPRL6703CheckFlashAndBin
bEnableISPChannel bEnableBBBackgroundUpdate bEnableBBISPCrcCheck bEnableSetBackgroundFlashWriteTime
bEnableCheckFlashMode bEnableTypeCUSBEnterISPMode bEnableForceTypeCVBusOff bIspBeforeAcOn
bIspFinishBeforeReset bSendDDCCICmd bSetPacketLen bSmbusBlockReadWrite bSoftwareSignVerifyCheckKey
bCheckCHK bCheckBinFileAndIC bCheckToolAndIC bGetVersion bGetModelName bGetPanelName bGetSIName
bGetCapabilityInfo bGetFPSettingFromIC bGetKeyFromFlashProgSwitch bShowDualBankFW bWriteProtectUseSetting`
and `ulIspSpeed ulProgStartBank ulPinRegister ulPinShare ulRetryISPCount ulRetryISPSleepTime
ulRetrySectorISPCount ulRetrySectorISPSleepTime ulSendCmdRetryCount ulSendCmdSleepTime
ulCommandRetryCount ulDelayTime ulTimeAfterCommand ulTimeAfterReset ulTimeBeforeAcOn
ulSwitchToRomCodeDelay ulTimeWaitCopyBank ulDumpFlashAddr ulDumpFlashLen ulTotalVerLen ulMajorVerLen
ulSubVerLen ulVidPidCount ulPollingCount ulAddr ulLen`.
**Meanings are still unknown** — each must be tied to the code that reads it.

Also observed in the strings, and useful as protocol anchors to confirm in code:
slave addresses **0x6A** and **0x7C** (`"All slave address 0x%x/0x6A/0x7C NACK! Read Count:%d"`),
`0x6E` as a DDC/CI read status (`bDDCCIReadNotReturn0x6E`), a bank/sector model
(`"Bank: 0x%x, ProLen: 0x%x, SectorErase: 0x%x, SectorEraseCount: 0x%x"`), a **0xFD2C** register check
(`"Check 0xFD2C[0] = 1 Fail!"`), and `.bin` framing flags `ucszFlag[HEAD4]` / `ucszFlag[TAIL4]`.

## Step 5 — the firmware images (DONE, measured)

`vendor/MSI_MAG_341CQP_QD-OLED_X28_FW.009_DC2F.bin` — 1,966,080 B (0x1E0000), payload ends 0x1D7200.
`…X28_FW.012_4023.bin` — 1,835,008 B (0x1C0000), payload ends 0x1B7000. Both are raw flash images
(starting with ARM/Thumb code `b86d 6a7c`), padded to the end with 0xFF, and both end with `…d1 90`.

**The 4 hex digits in the filename are the file's byte-sum mod 2^16** (observed, both images):
`sum(bytes) & 0xFFFF` = 0xDC2F for FW.009 and 0x4023 for FW.012, over the *whole padded file*. CRC-16
(IBM/Maxim/XModem/CCITT/X25/Modbus/USB) and the payload-only sums all miss. That is the check the tool
names in `bCheckCHK`, most likely — to be confirmed against the code, not assumed.

## Step 6 — the transport, `Comm_Aux.dll` (DONE)

Decompiled 12,173 functions (`decomp/Comm_Aux/`). The plugin's two access shapes, read from the
export down to the wire call:

| export | addr | inner | wire |
|---|---|---|---|
| `I2CWrite(slave, reg, len, buf)` | 0x1003b060 | FUN_1003a3e0 → FUN_1003d850 | builds `[reg, buf…]`, length `len+1`, split into **16-byte AUX writes**, one `vtable+0xb0` per chunk |
| `I2CRead(slave, reg, len, buf)` | 0x1003b120 | FUN_1003a630 → FUN_1003e170 | one AUX write of `reg`, then **16 bytes per AUX read** (`vtable+0xac`), loop, optional `Sleep(DAT_1021ae28)` between chunks when `DAT_1021ae60` |
| `NativeWrite(slave, len, buf)` | 0x1003b650 | FUN_1003ac20 | **one** raw AUX write, `0x808` if len > 16 |
| `NativeRead(slave, len, buf)` | 0x1003b6f0 | FUN_1003ad00 | **one** raw AUX read, `0x808` if len > 16 |
| `SetI2CSpeed(khz)` | 0x1003b600 | — | stores into `DAT_1021aff0`, returns 0x804 |

Observed details that the port has to keep:

- The AUX call takes a **32-byte descriptor and its size**: `(**(code **)(*obj + 0xac|0xb0))(obj, &desc, 0x20)`
  with `desc = { word0 = handle field from the device object, word1 = 0 (write) / 4 (last chunk),
  length = 0x10, slave = param_1, data[16] }`. This is the NVIDIA Control API AUX access;
  `Comm_GFXI2C.dll` is the same interface over the DDC pins (`nvapi.dll`, `nvapi_QueryInterface`).
- `DAT_1021ae1c` is the **comm mode**: 1 = AUX, 2 = (second backend, FUN_100361f0/0x100362e0/0x100363d0/0x100364f0),
  3 = (third, FUN_100452c0/0x100456c0/0x100457e0), anything else → 0x804.
  Within mode 1, `DAT_1021aff4 == 2` selects a second pair (FUN_10041aa0/0x10041c60/0x10041ed0/0x100422e0).
  Which INI/CLI setting picks the mode is **unknown** so far.
- `DAT_1021ae40` is the maximum length a register transfer may use → `0x807` above it.
  `GetI2CPageLength` (0x1003b030) and `GetNativePageLength` (0x1003b050) expose it;
  `SetI2CSpeed` returns **0x804 = 2052**, the page length the plugin defaults to.
- `DAT_1021ae20` / `DAT_1021ae24` = "use retry" flag and retry count; the wrapper loops the inner
  call that many times and logs `"AuxI2CWrite fail, error code: 0x%x, write count: %d"`.
- Codes: 0 ok · 0x801 bad length/pointer · 0x802 read fail · 0x803 write fail · 0x804 unknown mode ·
  0x805 native write fail · 0x806 native read fail · 0x807 over page length · 0x808 native over 16.

**Linux mapping decided on this evidence**: the kernel's i2c-dev adapters *are* the AUX channel on an
NVIDIA DP output (observed on this box: `i2c-1..4,6,7` = "NVIDIA i2c adapter N at 1:00.0"), and
`I2C_RDWR` does the register-write-then-read of `I2CRead` as one transaction, with the driver doing
the 16-byte bursting. `NVCtrl.h` (driver 620) exposes no AUX/I2C attribute, so i2c-dev is the path,
not libXNVCtrl. Verified live: combined write/read transactions are accepted on all six adapters
(EIO on all, which is a powered-off panel, not a code fault) — `re2/probe_i2c.py`.

## Step 7 — the model card keys, with defaults (DONE)

Full table in `re2/findings-ini.md`: 76 bool keys, 35 int keys, 14 string keys, each with its
**default**, the **global it lands in**, and the function that consumes it; plus the
entry-point → flow map for all 19 exports. Highlights that change the port:

- The section name is `"Settings"` at all 141 read sites. `Background_ISP_Settging` is **not** a
  section — it is a string global (the background-update object's name). Recorded so the port does
  not repeat the usual misreading.
- No INI at all ⇒ the whole 0x2010-byte settings block is **zero**, and each key then keeps the
  default from its own read site. So the tool has per-key defaults, not one built-in model.
- `ulDumpFlashLen` default **0x1E0000** = 1,966,080 = exactly the shipped `FW.009` image size.
- `bFindFwIgnoreModelName/PanelName/SIName/CapabilityInfo` default **1**, `bFindFwIgnoreVersionName`
  **0** — so by default the tool matches a .bin on the version name and ignores the other four strings.
- `bCheckCHK` default 0; the CHK path is `FUN_100196b0`.

## Step 8 — the firmware image, re-verified (DONE, one claim corrected)

A worker pass proposed a 40-byte **header** in the .bin (magic @0, version @4, CHK u16 @8,
payload_len u32 @12, HEAD4/TAIL4 flag bytes @28/29/30, bank pointers @32/36). Checked against the
bytes this pass, that reading is **over-read**: the first 40 bytes are byte-identical in both images
because both are the same firmware's ARM/Thumb code — `b86d` = `STMFD SP!`, `6a7c` = `LDR R4,[PC,#120]`.
The "fields" are code:

| offset | 009 | 012 | verdict |
|---|---|---|---|
| +0x00 u32 | 0x6a7cb86d | 0x6a7cb86d | Thumb code, identical because the images are the same program |
| +0x08 u16 "CHK" | 0x6b28 | 0x6b28 | **not** the filename suffix (0xDC2F / 0x4023) |
| +0x0c u32 "payload_len" | 0xb84e610f | 0xb84e610f | far beyond either file size — code |

So, as measured in step 5: **the .bin is a raw flash image with no header and no trailer**, padded
with 0xFF; the `d1 90` at both payload ends is the same code, not a checksum (measured:
`100 - (sum(payload) & 0xFF)` = 0xD1 for 009 and 0xDD for 012, so it cannot be the last byte).
The filename's four hex digits are `sum(whole file) & 0xFFFF` — re-verified, both exact.

**Carried over as inferred, worth re-checking against code**: the same worker traced
`FUN_100196b0` (the `bCheckCHK` consumer) to an 8-bit byte-sum whose expected byte is
`0x100 - (sum & 0xFF)` compared against a byte read back from the monitor, and read four version
pointers from monitor RAM (v1 @0x10022792, v2 @0x1002279A, v3 @0x100227A2 len 3,
v4 @0x100227A6 len 16) with the length fields `ulTotalVerLen`/`ulMajorVerLen`/`ulSubVerLen`.
Marked **inferred** until the reads are matched to a live monitor.

## Step 9 — Flash.dat, the real layout (DONE, verified two ways)

A worker pass read the record parser with its own x86 decoder over `.text` (Ghidra drops the
`push` arguments a `__thiscall` body relies on), and the layout it derived **tiles the shipped
file exactly**: header + 150 records + 16 trailing bytes = 44,211, re-run here.

```
header   u32 magic 0x07020509 · u16 format 2 · u16 record_count 150   (records start at file 8)
record   u32 id_lo · u32 id_hi · u32 zero · name cstr
         u16 banks · u8 class · u32 sector_erase_mode · u32 v48
         u32 status_enable_wp · u32 status_disable_wp · u32 special_command
         u32 four_byte_address · ops cstr · u32 safeguard_present
         safeguard_a cstr · safeguard_b cstr
```

Verified against the bytes: `A25L020` id_hi `0x11123037`, banks 4 (= 256 KiB), status 0xBF,
207-char program, stride 261; `Default` banks 16, status 0xFF; `EN25Q128A` banks 256 (= 16 MiB);
`MX25U51245G` banks 1024 (= 64 MiB); `GD25M21_B` carries all fields (124 instructions, two
safe-guard programs, status words `0x2FF`/`0x200`, stride 1202); the last record `ZB25VQ80B`
ends at the file end. **`banks` is capacity in 64 KiB units** — checked against seven datasheet
sizes. My earlier 27-byte-struct walk (158 records) was a desynchronising guess; this is the layout.

The selection is a **string key**, not an integer: `FUN_1000e7a0` formats the row's 8 ID bytes as
`"%02x,"` each — `A25L020` is `"37,30,12,11,00,00,00,00,"` — and `FUN_1001d560` looks that up
after an ID read, falling back to the literal `Default` (`"Flash MisMatch Use Default Value"`).
With `bAutoDetectFlash` clear the card's `FlashName` is looked up by name first.
The ID comes from the SPI bridge: `FUN_1001caf0` writes `0x60←0x46`, `0x61←0x9F`, `0x60←0x47`,
polls, and reads `0x67/0x68/0x69`.

**The command string is a byte-code program, not an opcode list.** `FUN_10043160` runs it; each
verb's first byte carries its own length: `0` sleep (u16 ms, 3B), `6` write register (3B),
`0xd` poll (reg, mask, expect, retries u16, delay u16 — 8B), `10/11` end. `A25L020` decodes as
`6,0x60,0x20` (sector-erase opcode into the command register) → `6,0x61,0x06` (WREN) →
`6,0x60,0x21` (trigger) → `0xd,…` (poll, 100 retries at 100 ms). 15 of the 150 rows carry a
program; the erase in the bank loop is the hard-coded `0x61←0x20` / `0x61←0xD8` pair, not the row's.

## Step 10 — the per-bank loop (DONE)

Observed in `FUN_10034120` → `FUN_1001e4c0` → `FUN_1003e610`/`FUN_1003e9c0` → `FUN_1003e2a0`→`FUN_1003d760`:

* The bank buffer is **0x10000 bytes, memset 0xFF** (one malloc outside the loop).
* `ProLen` = one past the last non-`0xFF` byte of the bank image — not the bank size, so an erased
  tail is not rewritten.
* `SectorEraseCount` = `ceil(ProLen / 0x1000)`: **sector = 4 KiB, 16 sectors per 64 KiB bank**.
* Erase: `SectorErase == 0` → one bank erase (`0x61←0xD8`); else `SectorEraseCount` sector erases
  (`0x61←0x20`) at `bank<<16 | sector<<12`.
* Program: page 0x100, aligned to the page end first, chunks that are all 0xFF skipped; per chunk
  `0x6d←2`, `0x71←len-1`, burst into the `0x70` FIFO, address into `0x64/0x65/0x66`, issue
  `0x6f←0x20`.
* **Verify is a per-chunk CRC byte, not a data read-back**: the CRC range is armed in
  `0x72/0x73/0x74`, issued by `0x6f←4`, and read from `0x75`.
* Poll idiom `FUN_1001c4c0(mask, 20000)`: `Sleep(2)` per miss, ~40 s worst case, 5 consecutive I/O
  errors ⇒ code 3.
* Address width comes from `REG_HW_CONFIG` bit 3 (`FUN_1001db90`), and the trigger pair is
  `0xA0/0xA1` (4-byte) versus `0xB8/0xB9` (3-byte).

## Step 11 — the Linux tool, `msifw/` (in progress)

Rust, per the owner's choice (safety while the protocol is being debugged, efficiency after).
Crate `msifw/`, no runtime deps beyond `libc` + `clap`:

| module | mirrors | state |
|---|---|---|
| `bus.rs` | the physical link: `/dev/i2c-N`, `I2C_RDWR`, sysfs adapter names | live-probed on this box |
| `comm.rs` | the `IComm` vtable of `Comm.dll` (slots 0x0c…0x148), AUX 16-byte bursting | done, unit-tested |
| `flashdat.rs` | `PlugIn/Flash.dat` | parses the verified layout, 150 rows |
| `model.rs` | `IspSetting.ini` (`[Settings]`, 125 keys, per-key defaults) | done |
| `binfile.rs` | the `.bin` image + the `CHK` in the filename | done, both images |
| `isp.rs` | `WinIspPlugIn.dll`'s prepare sequence and the bank loop | done against a fake device |
| `main.rs` | the UI verbs | `buses inspect card part info status dump erase flash reset` |

`Settings::default()` (all zero) and `Settings::plugin_defaults()` (the read-site literals) are
kept distinct on purpose: no INI at all gives zeros, a present section gives the defaults.

## Ledger

| # | claim | kind | evidence |
|---|---|---|---|
| 1 | All modules are native MFC/ATL x86, no CLR | observed | `file` + `inspect_native_exports` (arch 386/32) |
| 2 | Comm.dll is a facade over interchangeable transport plugins | observed (names) / inferred (role) | 170 vs 61 vs 52 exports, same interface core |
| 3 | ControlLib is the NVIDIA Control API shim | observed | `ctlAUXAccess`/`ctlI2CAccess` exports, `CtlApi` PDB path, SETUPAPI+CreateFileW |
| 4 | GPU access is dynamic-load, not static import | observed | `inspect_pe_imports` — no nvapi in any import table; `nvapi_QueryInterface` string in Comm_GFXI2C |
| 5 | `IspFlash` dispatches on scaler type {4,5,6,7,0x11,0x1a,0x1b} to DoIsp/bg/fg | observed | `procedure_pseudo_code` 0x10008520 |
| 6 | Model card = `IspSetting.ini`, sections `Settings`/`Background_ISP_Settging`/`ISP_CHECK_SETTING`/`ProjectID*Setting` | observed | `strings -el` + `GetPrivateProfileStringW` import |
| 7 | Flash.dat is a table keyed by a 4-byte flash ID + name + SPI opcode list | observed (data) / inferred (fields) | byte walk, 149 name records; record header at id-8 |
| 8 | .bin filename suffix = `sum(bytes) & 0xFFFF` over the whole file | observed, 2/2 | computed, both images exact |
| 9 | Monitor slave addresses 0x6A / 0x7C; 0x6E is a DDC/CI status byte | observed (strings) | isp-strings-u16.txt; code not yet read |
| 10 | This box: RTX 4090, driver 620.70.06, card0-DP-1..3 + HDMI-A-1..2 | observed | nvidia-smi, /sys/class/drm |
| 11 | `IComm` is a C++ vtable; slots 0x54/0x5c/0x60/0x64/0x74/0x78/0x94/0xa0/0xa4/0xa8/0xac/0xb0/0xb8/0xbc/0xc0/0xd8/0xdc/0xe0/0xe8/0xec/0x10c/0x110/0x114/0x13c/0x140/0x148 | observed | call sites in `WinIspPlugIn`, `re2/findings-isp-steps.md` |
| 12 | `I2CWrite` = `[reg,data…]` in 16-byte AUX writes; `I2CRead` = write reg then 16 B per read; `Native*` = one ≤16 B transaction | observed | `Comm_Aux` 0x1003a3e0/0x1003a630/0x1003ac20/0x1003ad00 |
| 13 | AUX call = `vtable+0xac|0xb0(obj, desc, 0x20)`, desc = 32 B `{…, 0x10, slave, data[16]}` | observed | `FUN_1003d850`, `FUN_1003e170` |
| 14 | Codes 0x801…0x808 at the transport layer, 0xd04/0xd05/0xd06 at the bank layer | observed | `FUN_1003a3e0`, `FUN_1003e610`, `FUN_1003d760` |
| 15 | Flash.dat = 8-byte header (magic `0x07020509`, format 2, count 150) + 150 packed records | observed | parser `FUN_1000dc20` + a walk that tiles the file |
| 16 | A row's key is its 8 ID bytes as `"%02x,"`; selection is a map lookup, fallback `Default` | observed | `FUN_1000e7a0`, `FUN_1001d560` |
| 17 | The command string is a byte-code program (verb 0 sleep / 6 write reg / 0xd poll / 10,11 end) | observed | `FUN_10043160`, decoded `A25L020` |
| 18 | `banks` = capacity in 64 KiB units (7 datasheet sizes checked) | observed, 7/7 | shipped rows + datasheets |
| 19 | Bank = 0x10000, sector = 0x1000 (16/bank), page = 0x100; `ProLen` = last non-0xFF + 1 | observed | `FUN_1001e4c0`, `FUN_1003be80` |
| 20 | Erase opcode 0x20 (sector) / 0xD8 (bank) are hard-coded, not from Flash.dat | observed | `FUN_1003e610`, `FUN_1003e9c0` |
| 21 | Verify is a per-chunk CRC byte at reg `0x75`, not a read-back | observed | `FUN_1003d760`, `FUN_1001c530` |
| 22 | Address width from `REG_HW_CONFIG` bit 3; trigger `0xA0/0xA1` vs `0xB8/0xB9` | observed | `FUN_1001db90` |
| 23 | The .bin's first 40 bytes are identical across the two builds; the payload starts at 40 | observed | `od`, first diff at 0x28 |
| 24 | The .bin has no per-image header fields; version and CHK come from the filename | observed | +8 = 0x6b28 and +12 = 0xb84e610f in **both** images |

### Open questions carried into the next pass

1. The 40-byte .bin prologue's field meanings (three decompiler reads proposed version@4,
   CHK u16@8, payload_len u32@12; the bytes at those offsets are identical in both images, so
   they cannot be the per-image values — the values themselves are not in dispute).
2. `FUN_1001c910`'s CRC function — the SSE body did not survive decompilation, so the tool's
   `--verify` uses CRC-8 and is opt-in until confirmed on hardware.
3. The poll register per call site: the plugin passes mask and timeout, the register index rides
   in a context Ghidra did not materialise. `REG_TRANSFER = 0x76` is **inferred**.
4. `part_class` (1..4) and `v48` semantics; `mode == 2` appears in every shipped row.
5. The comm-mode selector behind `DAT_1021ae1c` (1 = AUX, 2, 3) — which INI/CLI setting picks it.
6. Live behaviour on a real panel: every protocol constant here is decompiled, not yet clocked.

