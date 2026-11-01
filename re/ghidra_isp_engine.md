# Ghidra pass on the ISP engine — session 16a (2026-11-01)

First pass with a real decompiler on the vendor PE32s. Everything below is
read out of the decompiler with the address that produced it; gloss that is
inferred (from an adjacent log string, a call-site shape) is labeled
*(inferred)*. Nothing here was sent to a monitor.

## Toolchain (live state, measured)

- Ghidra **12.1.2** at `/opt/ghidra` (`Ghidra/application.properties`), driven
  over the ghidra-mcp bridge (208 tools, `bridge-mcp-ghidra` pid per
  `list_instances`).
- Instance/project: **`epson`** at `~/epson-ghidra/epson` — the MSI PEs were
  imported into that project (shared project folder; harmless, reversible with
  `close_program`). Programs now open: `/WinIspPlugIn.dll`, `/Comm_Aux.dll`
  (+ `/Comm_Aux.dll.0`, a duplicate from a re-import — keep, annotate).
- **Gotcha:** `import_file(auto_analyze=true)` reports success but leaves the
  program nearly empty (`list_functions` = 1). `run_analysis` afterwards is the
  pass that works: WinIspPlugIn → 813 ms, **+1,201 functions, 2,789 total**.
  For Comm_Aux that pass stayed at 1 function; `create_function` on each export
  RVA seeded it. `save_program` can fail `Unable to lock due to active
  transaction` — retry.
- Analysis state is saved in the project: `WinIspPlugIn.dll` carries the
  renames below.

## What WinIspPlugIn.dll IS (proven)

The exports **are** the flash engine, not a shim — 20 exports, one RVA each:

```
EnterISPModeExport 10008c50   IspFlash        10008520   IspEeprom   10008bc0
BankEraseFlash     10008a20   ChipEraseFlash  10008af0   DumpFlash   10008860
I2CWriteExport     10008ec0   ResetMCUExport  10008cd0   GetScalerType 10008f40
GetFWInfo          10008800   RecordFWVersion 10008750   GetKeyFromFlash 100087b0
GetMergeFwInfo     10008d80   SetMergeFwInfo  10008e20   GetFWInfo   10008800
GetUserDefinedInfoFromDDCCI 100088f0   SendUserDefinedInfo 10008980
SetCommInterface   10008700   SetIDev         100084f0   SetUIFunction 10008500
```

**Refines the filed belief** ("`Comm_Aux.dll`'s flash exports are stubs: the
flash engine lives in the updater core"): the engine lives in **this plugin**;
the core hosts the UI and owns the comm object. Both halves of the old sentence
survive; the middle was the plugin all along.

## The only door to the wire (proven)

`SetCommInterface @ 0x10008700` stores the core's comm object into
`DAT_10249d10` (teardown through slots `+0x10c`, `+8`, `+0`). Every wire call
in the plugin is `(**(code **)(*DAT_10249d10 + SLOT))(...)` — so the plugin
knows **no slave addresses**; it speaks a vtable ABI. The slot table is the
real contract a Linux port must satisfy.

Slots with proven call sites (gloss *(inferred from the log string beside it)*):

| slot | shape seen | gloss |
|---|---|---|
| `0x14` | → 3, 8, 0xe, 0x13 | GetDeviceType / scaler family |
| `0x30` | `(DAT_1024a350)` | pose/point the bus *(inferred)* |
| `0x44` | `(2)` | mode set |
| `0x54` | `(b0,b1,b2, buf)` — three bytes from `obj+0x42f50..52`, buffer at `+0x42f53` | **I2C write** = the ISP mailbox arg block (proven: it is what `I2CWriteExport` forwards) |
| `0x94` | `(200, …)` | settle delay |
| `0xa0` | `(0,0)` / `(2,100)` | SetWaitingMode (log: "Set Waiting Mode Before Enter ISP") |
| `0x124` | `(1)` | **Enter ISP** (log: "Enter ISP mode fail! Error code:0x%X.") |
| `0x13c` | `()` | second write path, taken when `obj+0x43054 != 0` |
| `0x214` | `(1)` | ISP-side selector *(unresolved)* |
| `0x21c` | `(0x45, 0xc, DAT_1024a3b4, 0, 0)` | Set Background Flash Write Time (its own log) |
| `0x28c` | `(&int, &int)` | GetQCDisplaySetting (its own log) |

`0x45` appears here as a **register/opcode parameter**, unrelated to the
updater's `0x45` *error* code. Both are real; do not merge them in prose.

## The backup ladder (proven, `Flash_Dump @ 0x100239b0`)

Renamed and saved into the project:

1. `+0x14` → if **3 or 0xe**: `+0xa0(2,100)` (USB families only)
2. log `=== Dump Flash Data Start ===`
3. `Isp_HandShakeByBootType` `0x1001ba20` — returns **`0xd21`** when
   `DAT_1024a2f0 == 1` (a boot-type/mode selector); on failure the caller logs
   "HandShakeBeforeEnterIspModeByBootType fail, error code:0x%x". **This is the
   exact origin of the `0xd21` the Proton run showed at 12 %.**
4. `Isp_EnterISPMode` `0x1001bbd0` — for device type **8**: `+0x21c(0x45,0xc,…)`
   then `+0x124(1)`, with a retry loop around the enter (1000 ms budget, then
   logs "Trying into ISP mode...")
5. `Flash_GetType` `0x1001d560` — failure logs " Get Flash Type Fail!, ErrorCode: 0x%x"
6. `Flash_GetInfo` `0x1000da90` — returns a struct: **chip name** at `+4`
   (SSO string, heap pointer when `*(+0x18) > 7`), **capacity** at `+0x18` in
   64 KB units (bounds check `name.capacity << 16 >= addr+len`). The vendor's
   chip identity = the counterpart of our JEDEC `0x9F` gate.
7. `Flash_Read` `0x1003eda0``(addr>>16 & 0xff, addr & 0xffff, len, buf)` —
   **the address is a bank byte + 16-bit offset**, packed into one uint32 by
   the caller. Packing to be confirmed inside `Flash_Read` (next strike 3).
8. `Sleep(DAT_1024a374)` (an INI delay), then write-to-file.

Also proven: a **Flash Data Map** region table at `DAT_1024a108` (empty ⇒ log
"Flash Data Map Empty!"), and `DumpFlash` copies a **528-byte config block**
from `DAT_1024a430` (`0x84` dwords) into the stack before reading — the
strongest candidate so far for the parsed `vendor/PlugIn/Flash.dat`.

## Bank / mode selector (proven)

`IspFlash @ 0x10008520` runs only when `DAT_1024a2d4 ∈ {4,5,6,7,0x11,0x1a,0x1b}`:

- `0x1a` → `Isp_DoIsp_Background` `0x1003bcb0` (log "…background enumError…")
- `0x1b` → foreground: **no engine call at all**, only the log
- otherwise → `Isp_DoIsp` `0x10034000` (log " DoIsp enumError :0x%X ")

`BankEraseFlash → Flash_BankErase 0x10039d50`, `ChipEraseFlash →
Flash_ChipErase 0x1003a2f0`, both preceded by the same progress-arm block
(`DAT_1024a1b0 = 100`, `FUN_1002d7c0(10)`, `_DAT_1024a1b4 = 10`) — a 10 %/100 %
progress grammar, i.e. the numbers the Windows UI shows at 12 % come from here.

## Comm_Aux.dll (proven; RVAs from the export table)

- `GetCommID @ 0x1003afd0` → **`return 1`**. The `enumCommID=1` in
  `IspSetting.ini` is this module's own answer, not a config choice.
- `GetNativePageLength @ 0x1003b050` → **`0x10` (16)**.
- `GetI2CPageLength @ 0x1003b030` → `GetPrivateProfileIntW(ini, AUX_I2CPageLen,
  **default 0x20**)` — 32 is the built-in default; the INI merely agrees.
- `I2CWrite 0x1003b060`, `I2CRead 0x1003b120`, `I2CWriteByte 0x1003b1c0`,
  `I2CWordWrite 0x1003b300`, `I2C2SubWrite 0x1003b3a0` are thin: lazy
  `InitialDev` (`FUN_1003b7e0` + `FUN_10039e50`, ready flag `DAT_102127f8`),
  then a **retry loop** — enable flag `DAT_1021ae20`, count `DAT_1021ae24`,
  per-retry log gated on `DAT_1021ae58` — around `FUN_1003a3e0 / a630 / a720 /
  a7e0 / a8e0`. **Retries live in the comm layer**, not only in the core.
  (The INI's `10 retries` has not yet been bound to `DAT_1021ae24` — unproven.)
- All the same-named flash exports (`ReadFlashData`, `SectorErase`, `BankErase`,
  `IspEnable`, …) share RVA `0x1003b630` = the stub. Confirms the 15a decode.

## Next strikes (ordered by what they unlock)

1. **`FUN_1003a3e0`** — the write primitive: the 16-byte client-side message
   assembly + the NVAPI call. This is the byte layout `nvrm.py` must emit.
2. **The updater core** (`MSI Firmware Update Utility V1.0.6.exe`): find the
   `SetCommInterface` call site, recover the vtable, and publish
   **slot ↔ Comm_Aux export** — the ABI table our transport must satisfy.
3. **`Flash_Read` / the program path internals** — the `0x22` register-file
   ladder (window `0x60` arm `0x38` / trigger `0x39`, opcode `0x61`, addr
   `0x64–0x66`), cross-checked against the 15i `Flash.dat` decode; and whether
   the mailbox rides the INI's `0x6F` (8-bit ⇒ 7-bit `0x37`, the slave that
   *does* answer on NVIDIA) while `0x22` is only the SPI window behind it.
4. **The 528-byte config block / Flash Data Map ↔ `vendor/PlugIn/Flash.dat`** —
   bind the region table to offsets, which is what a safe `write` needs.

---

# Session 16b — the comm layer's own contract (same day, code pass)

Same toolchain; `Comm_Aux.dll` seeded function-by-function with
`create_function` at each export RVA (its `run_analysis` stays at 1 function).
Addresses are Ghidra `base+RVA`, module base `0x10000000`.

## The whole `Comm_AUX` INI schema (proven: `FUN_1003b7e0` @ 0x1003b7e0)

Every key the module reads, with the default it uses when MSI's INI is silent.
MSI ships a subset, so the defaults below ARE the shipped behaviour.
Banked as `Facts.COMM_AUX_INI`. The interesting ones:

| key | default | what it gates |
|---|---|---|
| `AUX_DetctType` | 1 | 1=AUTO, 2=MANUAL display detect |
| `AUX_GraphicsType` | 1 | backend: **1=Intel, 2=AMD, 3=NVIDIA** |
| `AUX_NeedRetry` / `AUX_RetryLimit` | 1 / **10** | the retry loop lives in the COMM layer |
| `AUX_I2CPageLen` | **0x20 (32)** | tunnel page AND the hard max per I2CWrite |
| `AUX_CheckSlaveAddress` | 1 | probe the slave before use |
| `AUX_ExtarSlaveAddress` + `AUX_CheckExtarSlaveAddress` + `AUX_OnlyUseExtarSlaveAddress` | 0/0/0 | **an extra/alternate ISP slave the tool can be pointed at** — the knob for Intel/AMD day (vendor's spelling "Extar") |
| `AUX_CheckDpcdTable` | 1 | validate a DPCD table on the sink (the 0x00D0 tunnel-bit gate) |
| `AUX_CheckSpecificDPCD` / `AUX_SPDPCDStartAddr` / `AUX_SPDPCDData` | 0/0/"" | require specific DPCD bytes |
| `AUX_SelectDeviceInfo` | "" | **select the display by NAME** — how MSI pins this monitor |
| `AUX_EnableDebugLog` | 1 | the "AUX DETECT AUTO/MANUAL", "AMD AUX!!!" log lines |
| `AUX_StopIsp` | 0 | drives the `0x1d` multi-candidate returns |
| `AUX_bAutoDetectIntelSDK` / `AUX_IntelSDKType` / `AUX_UseNameLoadIntelDriverControlDll` | 1/1/0 | the Intel backend = the shipped `IntelControlAPI` dll |
| `AUX_SendCmdToFirstBranchForAMD` | 1 | AMD sends a command to the FIRST BRANCH device |
| `AUX_CheckBranchOUIOnly` | 0 | match the DP branch by OUI (our 0x4a/0x4b branch) |
| `AUX_WaitDelayTimeAfterSendData` | 0 | `Sleep()` after a native write |
| `AUX_IncompleteWriteNeedRetry` | 1 | retry a short write |
| `AUX_NvidiaMSTSupport` | 0 | MST off |

## Backend selection, proven (`AUXInitialDev` @ 0x10039e50)

AUTO (`AUX_DetctType=1`) tries **AMD first** (`FUN_10035440`, logs
"AMD AUX!!!" → backend 2), then **Intel** (`FUN_10039c00`, "not find Intel
graphics!!!" on failure); MANUAL honours `AUX_GraphicsType` (1→Intel, 2→AMD,
else the third = NVIDIA `FUN_100447c0`). Returns `0x800` with no device,
`0x1d` on the multi-candidate path.
`Facts.COMM_BACKENDS`, `Facts.COMM_AUTO_DETECT_ORDER`, `Facts.COMM_BACKEND_DLLS`.

**Consequence for issue #1 (Intel/AMD box):** the Intel box does not use the
NVIDIA primitives at all — it uses `FUN_1003d850`/`FUN_1003e170` behind
`IntelControlAPI`. The AMD box adds a branch-device step
(`AUX_SendCmdToFirstBranchForAMD=1`). A trace on the Intel box should watch
`IntelControlAPI.dll`, not the NVAPI surface.

## Two lanes, proven (`FUN_100452c0` write / `FUN_10045060` read)

`DAT_1021ae90` (an INI key, tail of `FUN_1003b7e0`) picks the param shape on
the SAME DP-AUX channel:

| lane | param block | addressing | chunk |
|---|---|---|---|
| tunnel | `0x3002c` = NV_I2C_INFO_V3 (44 B) | 8-bit DDC slave (`slave<<1\|RW`), `bIsDDCPort=1`, reg pointer passed by ref | 32 B (`AUX_I2CPageLen`) |
| native | `0x20068` = 104 B (legacy `NvAPI_Disp_DpAuxChannelControl`) | **register index in the address field**, op 2 = write, op 3 = read, size 0-based | **16 B**, loop `(len+1) >> 4` full chunks + a remainder; write is `[pointer byte][payload]` in one message; read is write-then-read |

That closes the 14i open question in `Facts.ISP_PIPELINE`: the two register
grammars are not competing views of one surface — **the grammar follows the
lane.** Byte-index (0x60/0x61/0x64-0x66, Flash.dat) = native; 16-bit window
(0x841/0x842/0x845) = tunnel. Implemented as `msi_isp/lane.py` and
`--lane {i2c,native}`.

## Live measurement on this box (2026-11-01, kernel 7.3.1-1, driver 615.78.08)

`msi_auxch.ko` rebuilt clean for 7.3.1-1, relay acceptance PASS
(`kernel/test_relay.py`, unprivileged, gate matrix included).

Native-lane index read, one byte per register (`--auxdev --lane native probe`):

```
0x60 05   0x61 21   0x64 2b   0x65 04   0x66 09   0x841 00  0x842 00  0x845 00
```

Reading: those are **DPCD** bytes — 0x60 TRAINING_PATTERN_SET (05 = TPS4),
0x61 lane-0 pattern (21 = adjust requested), 0x64 lane-align (2b), 0x65
clocks-recovered, 0x66 channel-equalisation; 0x841.. sits in MTPMT1 and reads
00. So on this sink the native lane reaches the DPCD/MTPMT byte space, exactly
as `kernel/msi_auxch.c`'s gate comment says, and the Flash.dat register
NUMBERS coincide with DPCD offsets. **The native lane is not a new road to the
0x22 register file** — it is a working DPCD reader, which is useful on its own
(the vendor's `AUX_CheckDpcdTable` gate lives there).

Tunnel lane unchanged (regression): 0x30/0x37/0x50 ACK, ISP slaves no-ack.

---

# Session 16c — the comm module's slave table, and what it answers here

The engine (`MSI Firmware Update Utility V1.0.6.exe`) carries no comm
vocabulary of its own — its strings are MFC + the relaunch line
`WinISPTool.exe --ispdiff --newboot --fw "%ls" --comm %d --settingfile "%ls"`.
The ISP vocabulary lives in `Comm.dll` (170 named exports) and
`rtd38/Comm_GFXI2C.dll` (52, with `NativeRead`/`NativeWrite` by name).

## `AutoDetectSlaveAddr` (Comm.dll RVA 0x7050) — proven

Walks a table of **six 3-byte triples** at file-vaddr `0x101b5db4`, probing
each with a **one-byte read at register 0x23**; the first that answers is
stored and served by `GetIspSlave` (0x4230, byte +0) and
`GetIspContinuousSlave` (0x4240, byte +1). Byte +2 has no accessor — it is the
**0x6A** the 15g ladder pushes as the ISP control mailbox, so the triple is
`(isp, continuous, mailbox)` and 15g's inference is confirmed by the table.

```
cand0  94 96 6A   -> 7-bit 0x4A / 0x4B / 0x35
cand1  64 64 68   -> 7-bit 0x32 / 0x32 / 0x34
cand2  54 56 58   -> 7-bit 0x2A / 0x2B / 0x2C
cand3  98 9A 68   -> 7-bit 0x4C / 0x4D / 0x34
cand4  9C 9E 6C   -> 7-bit 0x4E / 0x4F / 0x36
cand5  90 92 60   -> 7-bit 0x48 / 0x49 / 0x30   (the community MSTAR pair)
```

Detection is **skipped when the device type is 8** (our RTD2711): the
configured slave wins, i.e. `IspSetting.ini`'s `0x6F` = 7-bit `0x37`. So the
vendor has two ISP lanes on this family, and which one is used depends on
whether the sink reports type 8.

## Re-run live (2026-11-01) — and what the ACK is really made of

`msi-isp slaves` replays the walk. On **i2c-dev** and on the **sudoless kernel
relay**, candidate 0 answers and the walk stops; candidates 1-5 EIO.

But the reply is **all zeros, everywhere**: 0x4A returns `00` at registers
0x23, 0x22, 0x20 and 0x00, for read lengths 1, 2, 3, 4, 8 and 16. That is the
DP **branch device**, which the project already listed as "alive". So:

* the vendor's detection is satisfied by the branch, and
* an ACK is necessary and **not sufficient** — `IspSlave.distinct` (ours)
  demands content, and the tool now says "vendor-parity lane; content pending".

Second observation: the ISP handshake (`enter_isp`, status `0xfe`) succeeds,
and **in ISP mode the 4-byte reads go EIO on all five slaves tried**
(0x4A/0x4B/0x20/0x22/0x37). ISP entry changes what answers — the lane is
mode-dependent, which no single-pass scan in the corpus recorded.

## What this changes for the flash path

`flash_path_enter` now considers `0x4A` beside `0x20/0x22`, and the gates
report lane quality, not just presence. The open measurement is unchanged in
kind and sharper in form: **find a candidate that answers the 0x23 probe with
content** — on Intel/AMD (type != 8, so detection runs) and on a real Windows
run. Banked as `Facts.ISP_SLAVE_TRIPLES`.
