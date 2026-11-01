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

---

# Session 16d — slot +0x14 settled on bytes, a third register grammar, and what each lane is made of

## The exe is the engine, and it has no comm strings

`MSI Firmware Update Utility V1.0.6.exe` imports `LoadLibraryA/W/ExW` +
`GetProcAddress` and carries only MFC strings plus its own relaunch line
(`WinISPTool.exe --ispdiff --newboot --fw "%ls" --comm %d --settingfile "%ls"`
at 0x5e9170 / 0x5e9548). The comm vocabulary lives in `Comm.dll` (**170 named
exports**) and `rtd38/Comm_GFXI2C.dll` (52, with `NativeRead`/`NativeWrite`
exported by name). `IspSetting.ini` is read at `FUN_00413e20` (string
0x5e8d04). The installed copy under the Wine prefix left only the INI behind
(`.../Temp/ISPToolForMsi/`), so the exe we have is the engine.

## +0x14: SETTLED

```
WinIspPlugIn 0x10023a90   ff 50 14    CALL [EAX+0x14]     <- no PUSH before it
WinIspPlugIn 0x10023a93   83 f8 0e    CMP  EAX, 0xe       <- result is a code
```

Zero stack arguments, `thiscall`, returns a **family code** compared against
3 / 8 / 0xE / 0x13. 14i's "32-byte page transfer" label is superseded: the
transfer slots are **+0x54** (write: three bytes from the ISP command object at
`obj+0x42f50..52` plus a buffer pointer at `+0x42f53`) and **+0x13c** (the
alternate path when `obj+0x43054 != 0`). Corroborated on the far side by
Comm.dll's own exports: `I2CWrite` (RVA 0x46e0) and `I2CRead` (0x4a20) take
`(dev, byte reg, count, buf)`, and `I2CWordWrite` (0x4e50) forwards to the
same triple.

**New limit:** Comm.dll `I2CRead` returns `0x10` when `count > 0x18` — a
**24-byte** ceiling on that path, tighter than the 32-byte INI page.
(`Facts.COMM_READ_CAP`.)

## A third register grammar (Comm.dll RVA 0x3990 / 0x3c80)

Taken when `GetSpecialCommType() == 1` (RVA 0xc190; the read path clears the
flag after arming, so it is one-shot). Ports:

| port | role | evidence |
|---|---|---|
| `0xF2` | address port | 3-byte address written, high byte read back |
| `0x55` | command/mode | written, then read with `\|0x80` (the go strobe) |
| `0x57` | width select | `0xFC` with a mode nibble 0 / 1 / 2 |
| `0x58` | bank/width | `0xE7` for 1-byte; `0xEF` (+bit3 `0x08`) for 2- and 3-byte |
| `0x5E` | data window | address bytes, then data; read back with `\|1` |

Width selector 0/1/2 = 1/2/3-byte addressing; `>2` returns `0x11`. Banked as
`Facts.ISP_BOARD_REGS`. This is the ISP-board / GFX surface — a third map
beside 14i's `0x841` window and 15i's `0x60` window, and it matches the
`rtd38/Comm_GFXI2C.dll` module that exports `NativeRead`/`NativeWrite`.

## What each lane is made of (measured, one-byte reads, i2c-dev)

```
        0xF2 0x55 0x57 0x58 0x5E 0x60 0x61 0x64 0x23
  0x37   8a   8a   8a   8a   8a   8a   8a   8a   8a     DDC/CI status byte
  0x4A   00   00   00   00   00   00   00   00   00     DP branch device
  0x4B   00   00   00   00   00   00   00   00   00
  0x22  EIO  ...                                        ISP register file
  0x20  EIO  ...                                        ReadFlashData engine
```

The replies are **constant per slave** — the register index selects no cell on
0x37/0x4A. So: `0x37` is the MCCS mailbox lane (what the type-8 path uses, INI
slave `0x6F`), `0x4A/0x4B` is the branch, and the flash-carrying lane is
`0x22`, which answers only in ISP mode. With ISP entry accepted this session
(magic candidate 0, status `0xfe`), the 4-byte reads on all five stayed EIO —
the lane is mode-dependent and the register file is the one still silent.

## What that means for flashing without the clip

The software path is the **mailbox ladder on 0x37**: 15g's slots +0x74/+0x78
push `(0x6A, 0xCA, count, &buf)` and 16c's table confirms `0x6A` is the third
member of the winning triple — so the ladder is (slave 0x4A pair, mailbox
0x6A) driven through the DDC/CI slave. The next measurement is command-level,
not address-level: send the Flash.dat commands on 0x37 and read the reply,
then map reply→register. `Facts.LANE_READBACK` records where we stand.

---

# Session 16e — the mailbox ladder, replayed with the vendor's own commands

The address sweep is exhausted (three lanes, constant replies), so the test
moved to command level: Flash.dat's commands for this chip
(`0x06` write-enable, `0x90` Device-ID, `0x3B` fast read — 15i Phase A) sent
in the frame 15g decoded from the engine's ISP-control slots
`[0xCA, opcode]`, on every slave the vendor can name. New command:
`msi-isp ladder [--isp]`.

## Result

```
                       plain            inside ISP mode (status 0x8a)
  0x35 mailbox         EIO              EIO
  0x22 scaler MCU      EIO              EIO
  0x20 flash read      EIO              EIO
  0x4A cand0           00 (all cmds)    00 (all cmds)
  0x37 DDC/CI          8a | 8a 02 00 fe | 8a 02 00 fe 00 46 57 2e 30 30 39 4e
```

Three findings:

1. **The `0x37` reply is ONE frame, not three.** It looked like the command
   changed the answer; it changed the *width we asked for*. The frame is
   `8a 02 00 fe 00` + `"FW.009N"` — the live firmware version. So the mailbox
   is an info lane, now witnessed with the vendor's own commands (15j saw it
   with the `0xA0` opcode). `Ladder.varies` was corrected to compare at the
   shortest width for exactly this reason.
2. **A second door to the same register.** The version string is reached by
   MCCS opcode `0x51` with `(FE, E1, E6)` — `VENDOR_FW_VERSION_CMD`, our
   byte-exact packet — *and* by writing `0xCA` with any second byte. One
   register, two doors, which is what a mirrored register looks like.
3. **ISP entry on this sink is a DDC/CI handshake.** `enter_isp` reads the
   `0x80` bit of what turns out to be the MCCS reply header: `0x8a` on entry,
   `0xfe` after exit. The flash-carrying slaves (`0x22`, `0x20`) and the
   mailbox slave (`0x35`) stay EIO in both modes.

## What that means for flashing without the clip

On NVIDIA the software ceiling is the info lane. The lever is a tunnel with no
allow-list: the DRM AUX bridge on Intel/AMD exposes the whole 7-bit space, so
`0x35` — the third member of the winning triple, the slave 15g's ladder pushes
— is the first thing to probe there, and `msi-isp ladder --isp` is the
one-command version of this experiment. Banked as `Facts.LADDER_VERDICT`.

## Addendum (16e) — the register sweep: four phases, one shared buffer

Sweeping the **register** byte (0x00-0xFF) on `0x37`, reading 8 bytes:

| grammar | distinct replies |
|---|---|
| `[R]` then read | **4** — and they are phases of one frame, `phase = R mod 4` |
| `[R, 0x3B]` then read | 1 |
| `[R, 0x90]` then read | 1 |

Reading wider at one register shows the window, not registers:

```
read  8 -> 30 30 39 4e 00 00 00 00
read 16 -> 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 90
read 32 -> 8a 02 00 fe 00 46 57 2e 30 30 39 4e 00 00 00 00
           00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 90
reg 0..7 -> phase 0,1,2,3,0,1,2,3 at 8 bytes per phase
```

And the clincher, which names the mechanism:

```
write 51 84 01 FE E1 E6 ; read 16 -> 00 46 57 2e 30 30 39 4e 00...   (shifted version reply)
write 51 84 02 60      ; read 16 -> e1 e6 00 46 57 2e 30 30 39 4e... (our own E1 E6, back at the head)
```

The bytes we *sent* arrive at the head of the *next reply*: the i2c-dev proxy
on this box uses **one 32-byte buffer for write and read**. The "register byte"
is a position in that buffer, so the DDC/CI lane has exactly one window whose
content is the last MCCS reply — `3B 8A 02 00 FE 00 "FW.009N"` plus zeros and
a stale `90`. Banked as `Facts.DDCI_LANE`.

**Consequence for the clip-free path:** 0x37 cannot yield flash content — it
has one window and it is the version reply. The flash lane is **0x22**, with
**0x35** the mailbox beside it (the vendor's winning triple), and both are
behind the NVIDIA i2c-dev allow-list. That is the cleanest statement of what
an Intel/AMD box has to prove: the same two slaves, on a bridge that will send
them.

---

# Session 16f — the bulk lane (0x73137C): the last NVIDIA path, measured

`AuxDevBus` now speaks the relay's bulk control (`MSI_AUXCH_BULK`, 272-byte
`struct auxch_bulk`, 256 B/transaction, `rmStatus 0xffff` = TIMEOUT) as
`--lane bulk`, with `bulk_write` / `bulk_read` / `read_register` /
`probe_bulk`. This was the best remaining chance at the ISP slaves without a
second GPU, because the 6-slave allow-list is a property of the kernel
**i2c-dev** bridge, not of the RM control we drive from kernel context.

```
lane                       0x30 0x37 0x50   0x4A/0x4B   0x18-0x1B 0x20 0x22
i2c-dev (DRM AUX)           ACK  ACK  ACK    ACK          EIO
RM AUXCH 0x731341 I2C       ACK  ACK  ACK    ACK          EIO
RM AUXCH native             DPCD/MTPMT byte space         EIO
RM bulk 0x73137C (256 B)    ACK  ACK  ACK    ACK          TIMEOUT
```

**Verdict: the six-slave set belongs to the sink's DP branch, not to the
driver.** The ISP register file lives behind that branch's I2C-over-AUX tunnel
and answers on no NVIDIA lane. `Facts.BULK_LANE`.

Two extras:

1. **The bulk lane reads from inside the shared MCCS buffer.** A read of
   `0x37` returns `02` - the reply header's *third* byte (16e's model) - where
   the tunnel lane returns `8a`. Same buffer, different starting offset.
2. **The ISP magic byte is transport-dependent.** Magic candidate 3 wins on
   i2c-dev (status `0x8a`), candidate 5 on bulk (status `0xe1`). The magic is
   an MCCS write payload landing in that shared buffer, so "which candidate
   enters ISP mode" is a property of the lane, not of the monitor.

Kernel note found while using the lane: `bulk_write_gated` gates **both**
address forms, and `0x30..0x45` is simultaneously "7-bit 0x18..0x22" and the
8-bit form of that set - so on the bulk lane a write to 7-bit `0x37` (DDC/CI)
IS gated, because `0x37` is also the 8-bit form of 7-bit `0x1B`. Userspace
arms it (`bus.unlock()` before the ladder). The module was rebuilt for
7.3.1-1-cachyos with that comment attached; relay acceptance re-run: PASS.

---

# Session 16g — the audit: one theory falsified, the INI read as ground truth, and the plugin's engine ABI

## Falsified: the vtable is NOT Comm_Aux's export table

Tested cheaply, because it predicted itself: 16a named slot `+0x28c`
"GetQCDisplaySetting" from a log string, and `GetQCDisplaySetting` is a
**named export of Comm_Aux.dll at ordinal 3** — index 163 = ordinal 164 under
an ordinal-ordered-thunk theory. It fails: Comm_Aux exports **61** names, so
indices 67, 73, 79, 133, 135, 163 cannot exist. Two adjacent hits (0x74 →
I2CWordRead, 0x78 → I2CWordWrite, and 14i's read/write pair is adjacent) are
suggestive, not conclusive.

**Consequence, stated plainly:** the slot table is a C++ vtable in the core
(`WinISPTool`), and the authoritative slot → export map is still **open**.
`Facts.COMM_VTABLE` names stay evidence-tagged by their log strings.

## The shipped INI, read as ground truth (`Facts.VENDOR_INI`)

Three corrections/claims, and one lever:

- **16b said "the defaults ARE the shipped behaviour". True for most keys,
  false for two**: MSI ships `AUX_CheckDpcdTable=0` (default 1) and
  `AUX_EnableDebugLog=0` (default 1). The second is the explanation for 15g's
  "NO nvapi.log": the vendor was asked not to write one.
- **Lever for the borrowed-Windows day:** set `AUX_EnableDebugLog=1` and
  `bSaveDebugLog=1` and the vendor produces its own trace — the witness this
  project has never had, from the tool itself.
- **`AUX_GraphicsType=1` (Intel) is inert.** `AUX_DetctType=1` means AUTO, and
  AUTO probes AMD → Intel → NVIDIA and overwrites the backend; the key only
  binds in MANUAL (`DetctType=2`). 16b's "1=Intel, 2=AMD, 3=NVIDIA" is right;
  "so MSI asks for Intel here" would not be.
- **The version extraction rule, in the vendor's own words:**
  `ucVersionStartIndex=6`, `ucVersionReadLength=20`, `enumVersionRecordMode=2`
  with `strVersionDdcciCmd=0x6E,0x51,0x84,0x01,0xFE,0xE1,0xE6` — skip 6 reply
  bytes, take 20. That is exactly what `vendor_fw_version` does, so our packet
  and the vendor's rule agree by construction, not by luck.
- **The dual-bank constants the write driver needs**, all in one place:
  `enumIspMode=1`, `bSwitchFLag=1` (the boot-flag switch),
  `ulTimeAfterCommand=200`, `ulCommandRetryCount=10`,
  `ulTimeWaitCopyBank=8000`, `ulTimeAfterReset=10000`,
  `bReleaseDeviceAfterReset=1`.

## The plugin's engine ABI (`FUN_10007670`) — the piece that was missing

The plugin is configured by **one call that copies a huge settings struct**
(the engine's ISP settings block, ~0x10e64 dwords) into its globals. It is the
only writer of the ISP-mode selector, which settles where the mode comes from:

| struct offset | becomes | meaning |
|---|---|---|
| `0x0000` | `DAT_1024a2d4` | **the ISP mode** — the `IspFlash` gate {4,5,6,7,0x11,0x1a,0x1b} |
| `0x0011` | `DAT_1024a2f0` | **the boot type** — `== 1` is what makes the handshake return `0xd21` |
| `0x000c`/`0x000d` | `DAT_1024a34c/a350` | the enter-ladder selector |
| `0x0010` | `DAT_1024a380` | the "is configured" gate |
| `0x10a16` | `DAT_1024a654` | a 1232-byte table (0x134 dwords) |
| **`0x10b50`** | **`DAT_1024a430`** | **the 528-byte block — the parsed Flash.dat chip record**, handed over by the engine (16a found the plugin *copying* it in `DumpFlash`; this is where it came from) |
| `0x10c98` | (wchar string at +0x43262) | a path |

So the architecture of a native port is now visible: **the port does not need
the plugin.** It needs three config fields (mode, boot type, the chip record)
plus the wire sequence, and the INI that fills them.

## The pipeline spine, walked live

`msi_isp/pipeline.py` encodes the decoded order as data (each step carries its
evidence), and `msi-isp pipeline` walks it on any transport:

```
  ok    enter ISP                                   (i2c-dev: status 0xe1)
  ok    settle                            200 ms
  ok    set background flash write time   45 0c     (wire form pending)
  ok    enter ISP mode (type 8)           01        (wire form pending)
  STOP  get flash type                    EIO on 0x22
```

Identical on i2c-dev and on the sudoless bulk lane: **four steps answered, the
fifth (the `0x22` register file) is the wall.** The gap list is exactly two
steps, and both are the same unknown: the wire form of the core's vtable slots
`+0x21c` and `+0x124`. That is the next RE target, and it has a name now —
find the vtable the exe passes to the plugin's `SetCommInterface` (ordinal 16;
the exe's own strings show only `IspSetting` and `WinISPTool`, so the plugin
and comm names arrive from the INI at run time).

---

# Session 16h — the host chain: the tool is one engine in two shells

Went in through the GUI's `OnInitDialog` (exe `FUN_0040f460`) and the loader
(`FUN_00411430`), which is where `LoadLibraryW` + `GetProcAddress` live:

```
MSI Firmware Update Utility V1.0.6.exe
  └─ LoadLibraryW(<scaler dll>)  →  GetProcAddress(h, "OperateScalerEx")
       └─ WinOperateCScaler.dll  OperateScalerEx (RVA 0x1c760 → FUN_1001c770)
            · a 13 KB master function, with a 276 KB stack frame
            · the exe passes a progress callback: FUN_0040f0a0
            · carries (utf-16) "WinIspPlugIn" and "IspSetting.ini",
              (ascii) "I2CWrite"  →  it is the HOST, not a wrapper
       └─ fallback, if the export is missing:
            WinISPTool.exe --ispdiff --newboot --fw "<bin>" --comm <id> --settingfile "<ini>"
            ("Load scaler dll in UpdateFwNormal fail!" is the GUI's message)
```

**The engine is one class in two shells.** `WinOperateCScaler.dll`'s RTTI
names four own classes — `CCpIsp`, `CCpSignVerify`, `CCpRsString`,
`CCpTransform` — and it carries a name table with the plugin's exact export
set:

```
IspFlash · SetCommInterface · RecordFWVersion · GetKeyFromFlash · SetUIFunction
GetFWInfo · DumpFlash · GetUserDefinedInfoFromDDCCI · ChipEraseFlash · IspEeprom
EnterISPModeExport · ResetMCUExport · GetMergeFwInfo · SetMergeFwInfo
SendUserDefinedInfo · I2CWriteExport · GetScalerType · BankEraseFlash
```

`WinIspPlugIn.dll` is the same engine built as a plugin. So the port's target
is **`OperateScalerEx`**, and the method set to mirror is exactly that list —
19 names, not a mystery surface.

Three practical consequences:

1. **Signing is off as shipped.** `CCpSignVerify` exists, and the INI sets
   `enumDigitalSignatureType=0` and `enumSWDigitalSignatureMode=0`. The native
   port inherits no signing requirement.
2. **The vendor's log file is `IspLog.txt`** — the GUI names it in
   `OnInitDialog`. 15g looked for `nvapi.log` and found nothing; with
   `AUX_EnableDebugLog=1` (16g) the borrowed-Windows run produces
   `IspLog.txt`.
3. **Under Wine the whole tool is one call** — `OperateScalerEx(args, cb)` in
   `WinOperateCScaler.dll`, no GUI, no relaunch. That is a cheap witness
   option we have never used, and it needs no second PC.

## What is still open, and the exact next hop

The comm object's vtable (the `COMM_VTABLE` slots) is a **hand-built function
pointer table**, not an RTTI class: all three vendor modules expose 38 runs of
≥164 code pointers whose top length is identical (280) — that is the
statically linked MFC/CRT, seen three times. The next hop that has not been
tried: `SetCommInterface` is resolved **by name** by the host, and that name
string is in `WinOperateCScaler.dll`'s table (0x101a6100 region) — its xref is
the call site, and the object passed carries the vtable pointer at `[0]`. One
hop to the table, then slots `+0x21c` and `+0x124` decompile to the two wire
forms the pipeline is missing.
---

# Session 16i — the 12% gate is a string compare, and 0x45 is a ScalerType

The owner ran the vendor GUI under Heroic (Access Method `DP`) and under plain
Wine, with the INI on the native lane (`AUX_NvidiaIICAuxAccess=1`). Both stop
at **12%**. Heroic showed `0xd21` (16a's handshake gate); Wine showed
`0x45`. Same step, two lanes, two numbers — so the step, not the lane, is the
thing to decode.

## The GUI's ladder, read off its own strings

`FUN_004119f0` (the exe) is the update routine. Its progress writes are
`4 → 6 → 7 → 8 → 0xc`, and `0xc` **is** the 12% on the bar. The strings at each
branch:

```
005e96c8  "Get bin version and model name fail, error code: 0x%x"   step 1
005e9850  "Get flash model name fail, error code: 0x%x"             step 2
005e98a8  "Bin model name:%ls"
005e98d0  "Compare %ls with bin model name"
005e9938  "Compare bin and flash model name fail fail, error code: 0x%x"  step 3
005e9790  "Compare bin and falsh version fail, error code: 0x%x"    sibling
```

(Both typos are the vendor's: "fail fail" and "falsh". They are what identify
the exact branch — the dialog we measured is 005e9938.)

So the gate is: **parse the bin's record → read the panel's record → compare
the model name.** Nothing to do with the transport.

## 0x45 is the ScalerType

Plugin `FUN_10016b00`:

```c
comm->vft[0xc0](0x00, &IDCode0);        // register 0x00
comm->vft[0xc0](0x0f, &IDCode1);        // register 0x0F
type = FUN_10016c20(IDCode0, IDCode1);  // the dictionary
log("ScalerType: 0x%x, IDCode0: 0x%x, IDCode1: 0x%x");
if (type < 1 || 0x51 < type) log(" Read Scaler Type Fail!, ErrorCode: 0xd0d");
```

`FUN_10016c20` is a hand-written (IDCode0, IDCode1) → ScalerType dictionary;
the whole plugin contains exactly one `mov eax,0x45`, and it sits on the
`(0x14, 0x30)` branch. **This panel: IDCode0=0x14, IDCode1=0x30 → ScalerType
0x45 (69)** — the number the dialog prints as "error code". The same 0x45 is
the first argument of *Set Background Flash Write Time* (slot `+0x21c`, 16a):
one value, two uses, and 16a's note that it was "a REGISTER, not the 0x45 error
code" is now named.

Slot `+0xc0` (index 48) is therefore the **ID-code read**, not "pose/point the
bus" as 16a guessed. `Facts.SCALER_TYPE_TABLE` carries the dictionary.

## The record, and where the switches live

`FUN_100275e0` builds the filename `IspUserDefined.txt` (the literal is split
across two stack slots: `"Is"` + `"pUserDefined.txt"`), reads section
`[UserDefinedInfo]`, keys `ModelName` and `HPModelName`. `FUN_10027870` is the
writer, and its name table is the record's full vocabulary:

```
ModelName · PanelName · CapabilityInfo · Version · SIName
IgnoreModelName · IgnorePanelName · IgnoreVersionName · IgnoreCapabilityInfo
IgnoreSIName · RecordModelMode · RecordPanelMode · RecordVersionMode
FindBinUseVerMode
```

One `Ignore*` switch per field — the vendor's own escape hatches.

The INI's `[ISP_User_Defined]` section carries the **read** side, and it is the
16e mailbox ladder written down:

```
strVersionDdcciCmd = 0x6E,0x51,0x84,0x01,0xFE,0xE1,0xE6
ucVersionStartIndex = 6      ucVersionReadLength = 20
ucRetryCount = 10            ulDelayTimeAfterDdcciWrite = 3000
```

Read as the **wire form** (a field name is not its units): `0x6E` is the slave
address byte, `0x51 0x84` the MCCS header, `0x01` the VCP, `FE E1 E6` the
payload. My first reading called `0x6E` the VCP; the live frame corrected it.

## Measured on the panel, no Wine, no ISP mode

```
6e 8a | 02 00 fe 00 | "FW.009N" 00 …
  lead   4-byte header   string at raw index 6 = the INI's own start index
```

VCP 0x02 (MCCS Model Name) answers `6e 80 be` — **N=0 on 10/10 tries** — so the
panel side takes its model from the EDID's `0xFC` descriptor, which carries the
same string.

`msi-isp record` (new verb, `msi_isp/record.py`) runs the vendor's gate:

```
bin  model   : 'MAG 341CQ X28'      panel model  : 'MAG 341CQ X28'   MATCH
bin  code    : 'e012'               panel version: 'FW.009'          differ
bin  panel   : 'TPO340QH1-CH01 D01' scaler 'RTD2711'
gate         : fail: version
```

The bins carry that record in **plaintext mid-file** (FW.009 @194566, FW.012
@63494), 0xff-separated: version code, model, panel, `0xaf`, scaler. Both bins
say `MAG 341CQ X28` — the box's filename says `341CQP`, the payload does not.

## What this changes

1. **The model-name gate is open by content**: this bin is for this monitor.
2. **The GUI's "flash model name" is read from FLASH**, not from DDC/CI — so
   the port's next real step is the ISP flash read of that block, which is
   pipeline step 7. The record compare is the consumer that proves the read.
3. `msi-isp record` reproduces the vendor's first gate on Linux today.
4. Wine/INI lifecycle: the tool rewrites `IspSetting.ini` at startup (1498 B of
   defaults), and the record file is read at **plugin init**, so it must exist
   before launch. Levers tried (native lane, debug log, result/progress saves,
   `IgnoreModelName` in the INI and in `IspUserDefined.txt` with all five
   switches): **12% every time**, and no `IspLog.txt` appears — the name is
   built at runtime (no static xref to the literal).

Facts: `GUI_UPDATE_LADDER`, `SCALER_TYPE_TABLE`, `USER_DEFINED_RECORD`,
`BIN_RECORD`, `DDCI_RECORD_FRAMES`, `PANEL_RECORD`, `WINE_WITNESS`.
---

# Session 16j — the gate is not skippable: content, not config

Relaunched under Wine with the record file **in force** — `IspUserDefined.txt`
written *before* launch, so plugin init read it — carrying

```ini
[UserDefinedInfo]
ModelName=MAG 341CQ X28
IgnoreModelName=1
IgnorePanelName=1
IgnoreVersionName=1
IgnoreCapabilityInfo=1
IgnoreSIName=1
```

with the INI on the native lane (`AUX_NvidiaIICAuxAccess=1`) and logging on,
FW.012 loaded, ISP clicked: **FAIL, "Compare bin and flash model name fail
fail, error code: 0x45", 12%** — byte-identical to the run without the file.

So the `Ignore*` family belongs to the **record write** path
(`SendUserDefinedInfo`), not to the pre-flight compare. The compare has to be
*satisfied*, and satisfying it means reading the record block out of flash.
That is pipeline step 7, and it is now the single blocking step.

## Two measurements

**The mailbox index byte selects nothing on the DDC/CI lane.** Slave `0x37`,
token `0xCA`, indices `0x00 0x01 0x0E 0x0F` all answer the same frame
`8a 02 00 fe 00 46 …`. Slave `0x35` is EIO on i2c-dev. So the ID codes ride
the ISP slave, and `ScalerType 0x45` is inferred from the GUI's own number —
soundly, because the whole plugin contains exactly one `mov eax,0x45` and it
sits on the `(0x14, 0x30)` branch of `FUN_10016c20`.

**Comm slot `+0xc0` is a getter.** In Comm_Aux the slot at that index returns
`obj+0xc8`: the ID codes are **cached at init** by one bus read, not read per
call. Which also closes 16h's vtable hunt a little: scanning Comm_Aux.dll and
Comm.dll for runs of ≥164 code pointers gives 38 runs each in 19 distinct
shapes, and every shape at the top is an MFC family (`+0xc0` =
`CBasePane::get_accKeyboardShortcut`). The comm table is not a shape-match in
these modules — reach it from the constructor the host's `SetCommInterface`
installs.

Facts: `WINE_OVERRIDE_RUN`, `ID_CODE_LANE`, `VTABLE_SCAN`.
---

# Session 16k — the flash-read ladder, transcribed to the wire, and the lane matrix

The owner approved "read the record block out of flash". The ladder is Comm.dll
`FUN_10003990` (the read path 16d named), and it is a **port** ladder on
`ISP_BOARD_REGS`' byte-index ports:

```
b = rd(0xF2); wr(0xF2, b & 0x7f)     # clear bit 7. The address HIGH byte is
                                     # INHERITED from the port - the vendor
                                     # reads it and writes it back, it does
                                     # not set it. The page comes with it.
b = rd(0x55); wr(0x55, b | 0x80)     # set bit 7 of the command port
delay 0x20                           # 32 ms settle, straight from the IL
wr(0x57, 0xfc); wr(0x58, 0xef)       # width, bank   (mode 0 is 0xfc / 0xe7)
wr(0x5E, addr_lo)                    # the 16-bit offset, low byte
wr(0x5E, addr_hi)                    # ... high byte   (mode 2 writes lo,
                                     #                   hi>>8, hi = 24-bit)
wr(0x5E, addr_lo | 1)                # bit 0 is the read flag: THIS arms
wr(0x55, 0xc1); wr(0x55, 0xbf)       # read command, then trigger
delay 2
data = rd(0x5E, n)                   # the flash bytes come off the DATA port
wr(0x5D, 0xf8)                       # reset
```

Ports: `0xF2` addr, `0x55` cmd, `0x57` width, `0x58` bank, `0x5E` data, `0x5D`
reset. Implemented as `msi_isp.isp.flash_read_at` + `msi-isp flashread
[--slave] [--isp] [--addr a,b,c] [--count n]`.

## The matrix, measured (read-only, 2026-11-01)

| lane | slave | reply |
|---|---|---|
| i2c-dev | 0x37 | `8a 02 00 fe 00 "FW.009N" 00×20 bf` — the 32-byte MCCS window, twice, **at every address** |
| i2c-dev | 0x22, 0x35 | EIO |
| relay native | 0x22 | `00 00 05 21 00 04 2b 04 09 00 80 0f 0e 11 08 00` — the DPCD byte space (16f) |
| relay bulk | 0x37 | the same MCCS window on the 256 B/txn lane |
| relay bulk | 0x22, 0x35 | TIMEOUT |
| inside ISP (magic 0, status 0x8a) | 0x37 | unchanged; 0x22 EIO |

**The reply is address-independent everywhere the lane answers.** So the port
grammar is a separate I2C surface that lives on the ISP slave; on `0x37` the
writes land in the shared 32-byte MCCS reply window (16e's model, confirmed a
third time), which is why the address is invisible there.

The reading for the port: `msi-isp record` reproduces the vendor's gate in
**content** (model `MAG 341CQ X28` == model `MAG 341CQ X28`), and the gate's
flash side needs `0x22` (with `0x35` beside it) to answer on some lane. That is
the one blocking step, named.

Facts: `FLASH_READ_LADDER`, `FLASH_LANE_MATRIX`.
---

# Session 16l — the mailbox echo: the address goes in, nothing moves

The approved experiment: put the flash address *inside* the mailbox frame and
see whether the reply moves. Two write forms, on the slave that answers
(`0x37`, i2c-dev), read-only:

```
form A   raw register write   [0xCA, op, addr_lo, addr_mid, addr_hi]
form B   MCCS VCP write       0xCA  <- [op, lo, mid, hi]
```

**form A.** The reply is the version frame — `fe 00 46 57 2e 30 30 39 4e` =
"FW.009N" — for `op` 0x06, 0x90 **and** 0x3B, at addresses 0x0, 0xF806, 0x2F7AA,
0x2F806. Address-independent, exactly as 16k's port-ladder run predicted.

The 48-byte view is the new part:

```
0x2f7aa  pair1  00*28  06 aa f7 02  00*16      STABLE
0x2f7aa  pair2  00*28  06 aa f7 02  00*16      STABLE
```

The frame we wrote comes back **echoed at bytes 28..31** — `[op, lo, mid, hi]`,
the write buffer read back. Direct proof of 16e's shared write/read buffer, with
the exact offset. And the reply is **stable** across repeated (write,read)
pairs, which settles 16e's "walk": the device does not step — the *kernel*
re-serves the same content on shifting cache windows ~0.75 s apart
(`DDCCI_MAILBOX`).

**form B.** `6e 80 be` (N=0, the pending form) at every address: the mailbox is
a **raw register surface**, not a packeted VCP write.

## Where that leaves the flash read

The mailbox is an **info lane**: one command in, one frame out, no address
selector. The bulk lane is `0x22` (EIO here) with `0x35` beside it. Three
sessions now agree — 15x, 16f, 16l: the on-box options are exhausted, and the
lever is a non-NVIDIA box, where the DRM AUX bridge has no allow-list.

What does *not* need hardware is the **Flash.dat script**: the A25L032M record
(`FLASHDAT_MAP`) inherits an 18-statement script from the A25L020 template, and
that script is the command sequence — the erase and program packet shapes the
project has never confirmed against the disassembly.

Facts: `MAILBOX_ECHO`.
---

# Session 16m — the comm interface has names, the erase packet has bytes, and Flash.dat is ASCII

Three things fell, and they are the three the project has carried longest.

## 1. The "mystery vtable" is a named export table

Plugin `FUN_100057c0` calls `GetProcAddress` **153 times** against the comm
DLL's module handle and stores each pointer at a fixed slot of the object the
plugin later calls through (`DAT_10249d10 → [0] → table`). So the slots have
names, and the names are the comm DLL's exports — measured with pefile:
**Comm.dll exports 170, Comm_Aux.dll 61, Comm_GFXI2C.dll 52.**

The slot arithmetic: the plugin calls through a **byte** offset
(`(**(code **)(*DAT_10249d10 + 0xNN))`), and the loader writes
`param_1[0xMM]` on an `int*` — so **byte = 4 × index**. Two independent checks:

| plugin slot | index | name | does it fit the call site? |
|---|---|---|---|
| `+0xf0` (the erase's register writes) | `0x3c` | **WriteRegEx** | yes — it writes regs `0x60`/`0x61` |
| `+0xc4` (16j measured: a getter of `obj+0xc8`) | `0x31` | **GetI2CSpeed** | yes — a getter, of a speed |
| `+0xc0` (`FUN_10016b00`'s ID read) | `0x30` | **SetI2CSpeed** | by pair |

So **IDCode0/IDCode1 are two speed settings**, and the ScalerType dictionary
keys on `(speed@0, speed@0xF) = (0x14, 0x30) = (20, 48)` — a plausible 20/48
pair. The names are measured; the mapping is arithmetic plus those checks.

16a's label for slot `+0x28c` was `GetQCDisplaySetting`, from the log string at
the call site; the arithmetic puts index `0xa3` = `I2CSlaveRead` there. Both are
true — the string names the *purpose*, the slot names the *mechanism*: the QC
display setting is read over I2C from the scaler.

The table is in `Facts.COMM_API` (all 153, with index and byte offset).

## 2. The erase packet

`Flash_ChipErase` (0x1003a2f0) is an orchestrator — enter, `FUN_10016b00` (the
scaler type, 16i), a chain of setup steps, `Flash_GetType`, `Flash_GetInfo`
(it logs `Flash Name: %ls`), then the packet in `FUN_1003e3a0`:

```
lane A (byte regs)     +0xf0(0x60, 0xA0); +0xf0(0x61, 199); +0xf0(0x60, 0xA1); poll(0, 20000)
lane B (byte regs 83)  +0xf0(0x83, 0xA0); +0xf0(0x84, 199); +0xf0(0x83, 0xA1); poll(0, 20000)
lane C (16-bit regs)   +0xc4(0x841,0xA0); +0xc4(0x842,199); +0xc4(0x841,0xA1); poll
```

`199 = 0xC7` — the standard Serial Flash **Chip Erase** opcode. Shape:
**write CTRL, write OPCODE, write CTRL|1, then poll the status** until it is no
longer `0xDE` (busy), capped by the record's retry count. If the record carries
a 4-byte-address field, `FUN_1003cb60` writes a dword first — the `0xBF`
enter-4-byte-mode the A25L020 record has and the A25L032M record marks `0xFF`
(none). Lane C, the 16-bit `0x841/0x842` pair, is **our** tunnel lane.

## 3. Flash.dat is ASCII CSV

44,211 bytes of `06,reg,value` / `0d,…` statements — no binary structure. The
A25L020 template at `0x37`, which the **A25L032M** (this board's chip, key
`37 30 16 15` = `"70 16 15"`) inherits, is 18 statements in three phases:

```
write enable        CTRL 0x20 → OPCODE 0x06 → CTRL 0x21        (fetch)
read device id      CTRL 0x38 → OPCODE 0x90, ADDR 00, MODE 28, LEN 00, CTRL 0x39   (fetch)
fast read (quad)    CTRL 0x38 → OPCODE 0x3B, ADDR 00, MODE 28, LEN 40, CTRL 0x39   (fetch)
```

`CTRL` splits the classes: `0x20/0x21` is command-only (WREN), `0x38/0x39` is
the addressed class, and bit 0 is the arm/trigger — 16a's "0x38 arm / 0x39
trigger" is exactly this byte. Registers `0x60` CTRL, `0x61` OPCODE, `0x64`
ADDR, `0x65` MODE, `0x66` LEN — the ones 16e swept on the native lane.

**The template carries no erase and no program.** Erase is `0xC7` from the
plugin, above. Program is the **`ConfigProgramFlash`** export (index `0x98`,
byte `0x260`) — that is the last unconfirmed packet shape, and it has a name
and an address in the binary now.

Facts: `COMM_API`, `FLASH_ERASE_PACKET`, `FLASHDAT_SCRIPT`.
---

# Session 16n — the program packet, the erase packet, and what the control byte means

The open problem since 2026-10-17 was the **program shape**. It is now read off
the binary, and it turned out to share one primitive with the erase.

## One primitive, four commands

Comm.dll's flash ops all go through a comm-object method pointer
(`_DAT_101dee88`) with the shape

```
primitive(control, arg1, arg2, length, buffer)
```

| command | control | arg1 | arg2 | length | buffer | site |
|---|---|---|---|---|---|---|
| program page | `0x40` | `addr >> 16` | `addr` | page | `buf+off` | `WriteFlashData` RVA `0x7cf0` |
| sector erase | `0x42` | `addr & 0xff` | `bank & 0xff` | 0 | — | `SectorErase` RVA `0xc470` |
| bank erase | (sibling) | | | | | `BankErase` RVA `0xc4e0` |
| chip erase | `0xA0`→`0xA1` | — | — | — | — | 16m, plugin `FUN_1003e3a0` |

`WriteFlashData` asks **`GetI2CPageLength()`** for the page — the INI's
`AUX_I2CPageLen=32` (16b) — loops whole pages, then issues a **tail call** with
`count % page`. And it pushes **both `addr >> 16` and the full dword**, so all
24 bits reach the wire: 16d's note, confirmed from the other side.

Device **type 8** (`GetCommID()==8`, our board, 16c) is what selects this
primitive; other types use a 3-arg `(addr, len, buf)` primitive with no 24-bit
split.

## Two things that are *not* what they look like

`ConfigProgramFlash` is a **dispatcher** — it calls a backend method pointer and
returns its status. It has no wire form of its own, so the program shape is the
table above, not a config call.

In `Comm_Aux.dll` the names `ConfigProgramFlash`, `ReadFlashData` and
`WriteFlashData` are **one 5-byte stub** — `mov eax,0x804; ret`. The AUX backend
does not implement them. That is exactly why the plugin's own register ladder
(16k's `flash_read_at`) is the real flash path on this box.

## The control byte is a class byte

Assembling all four sources (the Flash.dat template, chip erase, sector erase,
program):

```
0x20/0x21   command-only          WREN              (no address phase)
0x38/0x39   addressed read        RDID 0x90, Fast-Read 0x3B
0x40        program a page        carries the buffer
0x42        erase a sector        address in, no buffer
0xa0/0xa1   chip erase            opcode 0xC7, no address
bit 0       the arm/trigger write in the script grammar
```

So the class byte — not the opcode — says whether a command takes an address and
whether it takes data. That is why the port can drive all of them with the same
three register writes plus an optional data phase.

Facts: `PROGRAM_PACKET`, `ISP_CTRL_GRAMMAR`.
---

# Session 16o — the PWM2SPI packet grammar: the program shape's last hop

16n left one question: what does `control = 0x40` expand into on the wire? The
primitive is Comm.dll's `WritePWM2SPIDev` (RVA `0xa280`) / `ReadPWM2SPIDev`
(RVA `0xa1b0`) — the scaler's **PWM-to-SPI bridge**, which is the whole point:
the flash is not on an I2C bus the PC drives, it is on the scaler's SPI, and the
PC sends the scaler *packets*.

Two levels:

- **The Dev level** chunks a transfer into `0xC` (12) data bytes per transaction
  with a `0x18` (24) byte buffer stride, and only backends **3 and 5** are
  supported — the selector `_DAT_101d49a4` returns `0xB` for 1, 2 and 4.
- **The leaf level** (`0xa650` write, `0xa350` read) builds the packet on a
  32-byte stack buffer and ships it:

```
packet = [control, arg1, arg2, checksum] + up to 12 data bytes
checksum = the 8-bit SUM of the three header bytes          (not XOR)
```

The read leaf sums three bytes and appends the result as byte 4 — `CONCAT13(sum,
header)` — so the checksum is arithmetic, not a mask. That matters: my port has
to add, not xor.

**The ports:** the write leaf ships to register **`0x9C`**, the read leaf to
**`0x9D`**, and both go through `FUN_10003c80` (write) / `FUN_10003990` (read) —
the very ISP port ladder 16k implemented as `flash_read_at`. So the packet door
and the data door are **one ladder**, and the special-comm-type flag
(`_DAT_101def2c == 1`) is what makes the read leaf write its 4-byte header to
`0x9D`.

**Wire length:** `2 * len + 3` — the bridge clocks a 16-bit word per data byte
plus a header phase. That is why a 12-byte transaction is 27 bytes on the wire.

Putting 16n and 16o together, a page program on this board is:

```
packet  [0x40, addr>>16, addr, sum]        -> reg 0x9C   (write door)
data     page bytes in 12-byte chunks, 24-byte stride
loop     whole pages of GetI2CPageLength() = 32, then a tail of count % 32
```

with the record's page-program opcode `0x02` behind control `0x40` — the
pairing is inference (the erase pairs `0x42` with its erase opcode, and the
A25L020 record carries `0x02`); the packet shape is read off the binary.

Facts: `PWM2SPI_PACKET`.
---

# Session 16p — the write ladder: the data port is a window, and the trigger counts bytes

16o ended with the packet grammar and one question left: how a packet gets onto
the wire. The answer is Comm.dll `FUN_10003c80`, the twin of `FUN_10003990`
(16k's `flash_read_at`):

```
0xF2 <- rd(0xF2) & 0x7f        clear bit 7, keep the page
0x55 <- rd(0x55) | 0x80        command port, bit 7
delay 0x20
0x57 <- rd(0x57) & 0xfc        width, low two bits clear
0x58 <- 0xE7                   bank (the mode-0 value the read ladder uses)
delay 0x20
0x5E <- reg                    THE WINDOW: the first byte names a register
0x55 <- 0xC1                   write command
0x5E <- payload ...            up to 16 bytes per transaction
0x55 <- (2*n - 0x40) & 0xff    the trigger, LENGTH-ENCODED
```

Two facts only the wire gives you:

1. **The data port is a window, not a register.** Writing `0x5E` first names a
   register and the following bytes are *that register's* payload. That is why
   16o's "packet to port `0x9C`" is a single ladder, not two buses.
2. **The commit byte is arithmetic in the byte count.** A 4-byte packet header
   commits with `0xC8`; a full 16-byte transaction with `0xE0`. Nothing in the
   register names hints at this.

Shipped: `isp_write_packet`, `packet_bytes`, `program_page_at`,
`sector_erase_at` in `msi_isp/isp.py`, with a recording-bus test suite
(`tests/test_write_ladder.py`) that pins the port order, the window semantics,
the chunk limit of 16, and the trigger arithmetic — no hardware needed.

## The pipeline's gap list is empty

`set background flash write time` and `enter ISP mode (type 8)` both have a
**name** (16m: the slot arithmetic maps them to the PWM2SPI write primitive) and
a **byte shape** (16o/16p: `[control, arg1, arg2, sum]` to door `0x9C`). Their
`pending` flags are off, and the labels say what is inferred: the pairing of
control `0x45` with the enter-mode call is 16m's arithmetic — two independent
spot checks, not a wire capture.

Live on i2c-dev the walk is:

```
ok    enter ISP                        f8
ok    settle
ok    set background flash write time  45 0c 00 51
ok    enter ISP mode (type 8)          45 01 00 46
STOP  get flash type                   [Errno 5] Input/output error
reached step 5 of 8
```

Same wall as before — step 5 is the `0x22` register file, which no NVIDIA lane
answers — but the four steps that do run now run with decoded packets, and the
program shape that has been the project's open problem since 2026-10-17 is
implemented, not sketched.

Facts: `ISP_WRITE_LADDER`.
---

# Session 16q — the 0x37 window is a 32-byte ring, and it is sticky

The round-trip probe 16p offered, run on the lane that answers: build a packet
that cannot be confused with the MCCS frame, send it out the write door `0x9C`
with the 16p ladder, read the window back.

```
packet built : 40 ab cd b8        (sum byte = 0xb8, built by packet_bytes)
window  48B  : 06 f8 02 00×27 bf  06 f8 02 00×27 bf
window  64B  : d[:32] == d[32:64] exactly          <- a RING, period 32
window  96B  : three copies
my packet: nowhere in 48, 64 or 96 bytes
```

Two facts fell out, and neither was the one I went for.

**The window is a 32-byte ring.** At 48, 64 and 96-byte reads the same 32-byte
block repeats byte for byte, with a `bf` at offset 30. That is the sharpest
statement yet of 16e's "one window shared by write and read".

**The window is sticky across processes.** The block reads `06 f8 02 …` — the
tail of the mailbox frame `[06 06 f8 02]`, op `0x06` at address `0x2F806`, which
**16l wrote about an hour earlier in a different process**. The sink keeps it.
So "what is in the window" is a property of the panel's recent history, not of
my connection — and any probe that reads the window is reading the last thing
*s somebody* wrote.

**The packet did not land there.** The write ladder runs clean on i2c-dev `0x37`
and on the relay `lane=native` — the whole port sequence, no error — and its
bytes appear nowhere in the ring. Reading: the PWM2SPI doors `0x9C`/`0x9D` are
on the ISP slave `0x22` (16n). On `0x37` the byte-index ports address the
DDC/CI-MCCS space, whose reply buffer *is* this ring, so the ring shows the last
mailbox frame, not the last window write.

Net: 16p's write ladder is **decode-correct and code-tested**; its wire
confirmation is a `0x22` read, which is the non-NVIDIA-box lever.

Facts: `ISP_WINDOW_RING`.
---

# Session 16r — the two banks, and the first pilot write into the inactive one

The owner's model of the panel is right, and the binaries say so in three
independent places.

**The selector is one bit.** The board record's `width_values` pair differs in
exactly bit 3 — `0xe7 ^ 0xef = 0x08`, and the record's `bank_bit` is 8 — and it
lands on port `0x58`:

```
bank 0  ->  0x58 = 0xE7          bank 1  ->  0x58 = 0xEF
```

16a's `DAT_1024a2d4 ∈ {4,5,6,7,0x11,0x1a,0x1b}` is the plugin-level bank code,
where **`0x1a` is the background (writing) bank and `0x1b` the foreground
(running) one** — the same two-bank story one level up.

**The layout follows from the sizes.** Chip = A25L032M = 4 MiB; FW.009 = 1.875
MiB; FW.012 = 1.75 MiB. Two 2 MiB banks, so **the inactive block's base is
`0x200000`**.

**The flag is the vendor's own key**, typo included, in `[ISP_DualBank]`:

```ini
bSwitchFLag=1   enumIspMode=1   enumBootCodeType=1   bWaitCopyBank=0
copy_bank_wait_ms=8000          time_after_reset_ms=10000
release_device_after_reset=1
```

Program one bank, set the switch flag, reset, give it ten seconds. That is the
"trip a flag so it boots from that block" the owner described, in the vendor's
spelling.

## The pilot

`program_page_at` with the bank knob wired: packet `[0x40, 0x02, 0x00, sum]` to
door `0x9C`, then the 32-byte marker `c0feee12 ×8` in 16-byte window
transactions, bank port `0xEF`. **36 bytes on the wire, no error**, on both
lanes; then `sector_erase_at(0x00, bank_select=1)`; then read.

| lane | read-back at `0x0` and `0x200000`, bank 0 and bank 1 |
|---|---|
| `0x37` | the sticky 32-byte ring (16q) — identical everywhere |
| native `0x22` | `00 00 05 21 00 04 2b 04 09 00 80 0f …` — the DPCD byte space, identical at every address and every bank |

The bank bit moves nothing observable. The panel is healthy afterwards:
**FW.009, model `MAG 341CQ X28`**.

So the honest score: the program packet is **proven at the packet level** — the
transport takes the whole 36-byte page transaction, the erase packet goes out,
and the panel keeps running — and **unproven at the cell level**, because the
ISP register file is behind the branch tunnel on the NVIDIA lanes.

Facts: `DUAL_BANK`, `PILOT_WRITE`.
---

# Session 16s — why the ISP slaves are mute, and the four ways around it

The question: "the DRM AUX bridge has no allow-list — how do you fix it?"

**The mechanism, from our own measurements.** The sink's DP branch bridges a
fixed set of I2C addresses onto the AUX channel — `0x30` (branch), `0x37`
(DDC/CI), `0x50` (EDID), plus `0x4A/0x4B` — and 16f proved that set belongs to
**the sink**, not the host: all four NVIDIA transports show the same six
slaves. The ISP slaves (`0x22` register file, `0x20` burst engine, `0x35`
mailbox) sit on the scaler's *internal* I2C bus, and the branch maps them
selectively.

So "no allow-list in DRM" is not a driver property to fix; it is the branch's
address map, and the lever is the path that drives the branch.

## The four routes, ranked

1. **A non-NVIDIA box (Intel/AMD).** `drm_dp_i2c` forwards the address byte in
   the AUX write with no host-side filtering, and RM's `NV_I2C_INFO_V3` does the
   same — so if the map is wider under a different bridge, that is where it
   shows. One command: `msi-isp --bus N probe`.
2. **The HDMI input of this panel.** 15h measured `0x35` dead there too, which
   says the map is input-independent — re-testing with a cable is free and it is
   the measurement that separates "the host bridge filters" from "the sink maps
   six addresses".
3. **The CH341A clip on the SPI chip.** Bypasses the branch entirely, reads all
   4 MiB including the skip-list regions. Certain, and the original plan.
4. **The vendor's USB ISP board.** The plugin's USB path
   (`SendUsbPacket`, `ReceiveUsbPacket`, `ConfigProgramFlash`,
   `CompleteIspFlowInISPBoard` — all in 16m's `COMM_API`) is how MSI's own
   engineers reach the file.

## What was measured today, and what shipped

Three grammars, one panel, all address-independent on `0x37`:

| grammar | registers | reply |
|---|---|---|
| port ladder (16k) | `0xF2`, `0x55`, `0x57`, `0x58`, `0x5E` | the 32-byte MCCS window |
| Flash.dat script (16m) | `0x60`, `0x61`, `0x64`, `0x65`, `0x66` | the same frame |
| 16-bit window | `0x841`, `0x842`, `0x845` | zeros on the tunnel lane |

A differential sweep on the native lane — snapshot, write a packet to door
`0x9C`, snapshot again — changed **0 of 1024** DPCD addresses.

Shipped: `flash_read_script` and `msi-isp flashread --grammar {ports,script}`,
so a borrowed box exercises both vendor surfaces in one command each. The
grammar is no longer something to remember; it is a flag.

Facts: `ISP_WINDOW_RING` (16q), `DUAL_BANK`/`PILOT_WRITE` (16r).
---

# Sessions 16t–16u — Grok's review, measured; and the blank screen explains the lanes

An outside review (`GROK-REVIEW.md`) attacked the inferences. Two predictions
were testable, and running them produced the most useful live result of the
week.

## Item 1 — the 24-bit address path: measured, rejected as the explanation

`flash_read_at` defaulted to mode 1 (low, high, low|1 = 16 bits + arm); the
decompile's mode-2 branch is the 24-bit path. Running all three modes:

```
native lane 0x22   mode 0/1/2 @ 0x000000, 0x010000, 0x200000
                   -> 00 00 05 21 00 04 2b 04 09 00 80 0f   (all nine)
i2c-dev  0x37      mode 0/1/2 @ 0x000000, 0x200000
                   -> 88 02 00 10 00 00 64 00 46 86 00 00   (all six)
```

Address width does not move the reply. Note what the `0x37` frame *is*: a
GetVCP reply for VCP `0x10` (70 Hz of a 100 max) — so "the grammar's reply" and
"the last MCCS read" are the same 32 bytes. The reviewer's alternative reading
stands.

## Item 2 — the packet trailer: implemented, and the matrix is mute

The write leaf's unrolled accumulation over 32-byte padded blocks is the
vectorized sum-of-buffer pattern — a checksum over the **data**, not the
3-byte header. Shipped as `program_page_at(..., trailer=True)` (the 8-bit sum of
header+data, appended once; the leaf's transaction cap is 12 data bytes, the
window's is 16). The trigger is also mode-encoded (`cVar10` = chunk−1 / chunk /
chunk+1). Six combinations, mode 0/1/2 × trailer off/on:

```
sent 36 B (or 37) each time; read-back identical to the baseline in all six
```

## The new finding: the native lane's `0x22` is a live, stateful window

Probing the leaf's own acknowledgement (read 8 bytes at register 2, expect `9C
E1`) found that register **2 answers with content** — `c4 83 01 00 01 c0 02 00`
— unlike `0x9C`/`0x9D` (zeros). Sweeping 512 register indices:

- **98 of 512 have content**, and reading at index N returns the *same stream
  offset by N* — this is **one byte-addressable window**, not 512 registers.
- Head block `0x0000 = 12 14 c4 83 01 00 01 c0` — **unchanged by a power cycle**,
  i.e. a capability block.
- `0x0100 = 00 84 00 02 02 02 02 90` — the transaction state.
- **After a page-program write, 24 indices changed**: the status byte at
  `0x0107` went `0x90 → 0x10`, and a counter near `0x010a` (`0x04`) cleared.
  After the power cycle it is `0x90` again.
- The packet's own bytes (`c0 fe ee 12`, header `40 23 45`) appear **nowhere**
  in `0x0000..0x01ff`.

## And the blank screen explains the lane split

During that sweep the panel went blank, the source said "no signal" on DP, the
panel stood by, and a power cycle restored it. The cause is now named: on the
native lane the ladder's ports **are DPCD byte addresses** on this sink —
`0x55`/`0x56`/`0x57`/`0x58` are `LANE_ADJUST_REQUEST` lanes 0–3 and `0xF2` is
MTPMT1 — so a ladder write asks the link to retrain. DPCD came back to its 16k
baseline (`0x60 = 0x05`, `0x64 = 0x2b`), panel healthy: `FW.009`,
`MAG 341CQ X28`.

So the vendor's model splits across our two lanes: the **ports** we can drive
(native lane) live in DPCD space, and the **window that acknowledges**
(`0x9C`/`0x9D`, read as zeros on the tunnel lane) is the ISP register file
proper. The flash cells remain unproven — but the door demonstrably turns, and
we now have a write-visible state byte to watch: `0x0107`.

Facts: `GROK_REVIEW_16T`, `ISP_REGFILE_NATIVE`, `DP_BLANKING`.
---

# Session 16v — the native-lane window is a latch, not an ack

The hunt was a per-transaction acknowledgement: if one byte answers a packet, a
57,344-page write becomes auditable. The vendor's write leaf reads 8 bytes at
register 2 and expects `9C E1`; this panel answers `c4 83 01 00 …` (16u), so
register 2 is a stream offset, not the ack slot. Mapping the `0x0100` block on
the native lane, slave `0x22`, all read-only:

| probe | result |
|---|---|
| command classes `0x20 0x38 0x40 0x42 0xA0` | no delta, 5/5 |
| data phase 0, 4, 8, 12, 16 bytes | no delta, 5/5 |
| ISP entry (candidate 5, status `0x8a`) | no delta |
| passive, 8 samples × 12 s | no drift |

Idle block: `00 84 00 02 02 02 02 00 01 00 00 00 00 00 00 00`.

**Correction to 16t, annotated not erased:** "24 indices changed" is **one byte**
moving. Because reading at index N returns the same stream offset by N, a single
byte at stream offset `0x107` shows up in every overlapping index. Its history
is `0x90` (start of the 16t session) → `0x10` (in the session that ran the
page-program matrix) → `0x00` (ever since — through a power cycle, an ISP entry,
five command classes and five data phases). That is a **latch**, not a live ack.

So the honest shape of the model now:

- The native lane's `0x22` is a real, byte-addressable, write-visible window —
  and it is the **sink's DP-branch state**, which is also why driving the ladder
  blanks the screen (lane-adjust writes, 16u).
- The ISP register file proper — doors `0x9C`/`0x9D` — reads zeros on the tunnel
  lane, and the flash cells remain unproven.
- **No per-transaction ack is observable from the DP side.** The ack has to come
  from the flash side, which is the clip's job: `CLIP-PLAYBOOK.md`.

Facts: `ISP_WINDOW_MAP`.
---

# Session 16w — the naming layer redone from the binary, and Flash.dat is a chip library

The owner's ruling for this session: most of what is built rests on the Windows
tool read correctly in places and shallowly in others, so the decode is the
source and the tool is a transcription of it. Two shallow reads got fixed.

## (1) The comm interface has TWO arrays, and 16m named the wrong one

`WinIspPlugIn!FUN_100057c0` calls `GetProcAddress` 153 times. 16m recorded
`name -> (index, byte)` with `byte = 4 x index` and treated that byte as the
slot the engine calls. Two facts settle it:

- The function's only xref is **DATA** at `0x1020d6d8`, and its own body calls
  `(**(code **)(*param_1 + 8))()`. It is a **vtable entry** of a plugin-local
  wrapper class; the vtable base is `0x1020d6d0`, 176 slots, 164 of them thunks.
  That is why `get_function_callers` found nothing.
- The loader writes `param_1[field]`, and the fields are **scattered in name
  order**: `GetI2CPageLength -> 0x0e`, `GetNativePageLength -> 0x21`,
  `I2CWrite -> 0x0f`, `WriteFlashData -> 0x7c`. 153 names, no field collisions.
  So `4 x index` is the **member byte** — where the loaded pointer *lives*.

Every vtable slot is a thunk `MOV EAX,[ECX+disp]; TEST; JMP EAX` calling the
member at its own `disp`, and the slot→member delta is **not constant** —
`0x28` at `+0xf0`, `0x40` at `+0x1bc`, `0x30` at `+0x240`, `0x20` at `+0x26c`,
`0x34` at `+0x4`. So there is no arithmetic rule and the only correct naming
layer is the empirical one. I decoded 161 slots by reading each thunk's
encoding (`8b 81 d32`, `8b 41 d8`, `ff 91`, `83 b9`) out of one chunked memory
read — 151 of 153 names now carry a verified slot.

**149 of the 151 offsets 16m recorded were the member byte, not the slot.** The
slots this log cites, renamed:

| slot | 16m said | the vtable says |
|---|---|---|
| `+0x14` | (device selector) | `GetCommCount` |
| `+0x54` | mode set | `GetNativePageLength` |
| `+0x74` | mailbox write | `I2CWordRead` |
| `+0x78` | mailbox read | `I2CWriteEx` |
| `+0x94` | settle delay | `AdjustOption` |
| `+0xa0` | SetWaitingMode | `SetAuxMode` |
| `+0xc0` | SetI2CSpeed | `WritePortRegBit` |
| `+0xc4` | GetI2CSpeed | `ReadRegEx` |
| `+0xf0` | WriteRegEx | `ScalerRun` |
| `+0x124` | ReadMcuReg | `ResetFirmware` |
| `+0x1bc` | WriteFlashData | `Write32BitRegEx` |
| `+0x21c` | WritePWM2SPIDev | `SetSpecialCommType` |
| `+0x28c` | I2CSlaveRead | `DebugMessageGetString` |

The flash path's true slots: `ReadFlashData +0x19c`, `AutoEnterIspMode +0x1a0`,
`WriteFlashData +0x1a8`, `I2CSlaveWrite +0x1ac`, `ReadPWM2SPIDev +0x1e0`,
`WritePWM2SPIDev +0x1e4`, `ConfigProgramFlash +0x238`, `I2CSlaveRead +0x270`.

The log gets **more** coherent, not less: the GUI step called "Enter ISP mode"
is slot `+0x124` = `ResetFirmware`, and "settle delay (200 ms)" is `+0x94` =
`AdjustOption`. Scorer check: the two namespaces coincide only at low slots,
which is exactly why the 16m spot-checks "fit". `COMM_API_MEMBER_16M` is kept
as the member namespace — the member byte is a real coordinate.

**Unaffected:** every packet, ladder, window and bank number. Those are wire
bytes read off the leaves' bodies and measured on the panel.

## (2) Flash.dat is a 150-record chip library, and its scripts are read-mode ladders

16m recorded "ASCII CSV". It is a 12-byte header plus **150 variable-length
records**, 15 of which carry a CSV tail. The plugin opens it by the UTF-16
literal `PlugIn/Flash.dat` (VA `0x1020e4cc`) from **nine** inlined sites
(`0x10001219`..`0x10002889`) — one per flash entry point, so every flash verb
runs a script out of it. Record layout, read from the bytes:

```
u8 manufacturer id   c2 Macronix  ef Winbond  1c ESMT  c8 GigaDevice  9d ISSI
                     85 Puya  5e Zbit  20 Numonyx/XM  01 Spansion  0b XTX
                     b3 Unitron  d5 Micron  1f Atmel  68 Bytech  8c Feature
                     a1 Fujio  37 Adean  7f PM(extended)  c4 GT
u8 class, u8 cap_hi, u8 cap_lo          (an (n+1, n) capacity-code pair)
NUL-terminated part name
u16 capacity in 64 KiB units            0x40 -> 4 MiB, 0x100 -> 16 MiB
u8 mode A, u8 mode B
u8 ID opcode                            9f RDID, and bf/ff/a0/bc/fc/9c/7f
expected ID bytes, padding, then the CSV script
```

The grammar is an **index/data pair in the bridge's own register file**:
`06,60,<reg>` selects, `06,61,<val>` writes, `06,64/65/66` is the 24-bit
address low/mid/high, `06,38,<cmd>` + `06,39` is the command-with-address
transaction, `06,20` + `06,21` the command-only one, and
`0d,reg,n,mask,val,tries,d1,d2` is the poll — **seven** args, which is what
16m's "18 statements / 3 phases" pins.

And the scripts are **read-mode ladders**: WREN (`0x06`), then the read command
the part supports — `0x90` serial read, `0x3b` fast read 1-1-2, `0xc3` normal
read, `0xa5` dual read — each phase closed by a poll. Read on the native lane
these register numbers land in the window 16t mapped (offset `0x20` answers
`07`, `0x60` answers `05 21 00 04`, `0x64` answers `2b 04 09 00`), so the
script's register file and the window we can touch are one space. Writing
`0x60 <- 0x20` and `0x61 <- 0x06` moved no readback — the window is a latch
(16v), so the cells are still unproven.

The A25L020 template probes `0x002800` and `0x402800` (bank bases 0 and
`0x400000` **for that template's chip**); 16r's `0x200000` for this panel is a
measured GUI value. Both true of their own part — do not cross-read them.

## (3) Two things the INI says that we have never honoured

`IspSetting.ini`, as the tool writes it for this panel: **`ulTimeAfterCommand
= 200`** (ms after every command) and **`ulCommandRetryCount = 10`**. My writes
went out back-to-back with 50 ms sleeps. The 16t matrix varied address, bank,
trailer and trigger; **timing is the last untested variable in the mute matrix.**
The INI also confirms `AUX_I2CPageLen=32` (a second source for 16n's page
length), `ulTimeAfterReset=10000` (16r's 10 s), `bSwitchFLag=1`, and the gate:
`CheckModelName=1, CheckVersion=0, CheckChecksum=1` — **the version is not
checked**, which is why FW.009 hardware takes FW.012.

Reading the bins at the INI's offsets: FW.012 has `012` at `0xF800` and
`MAG 341CQ X28` at `0xF806` followed by `TPO340QH1-` (the QD-OLED panel);
FW.009 has `0xFF` at `0xF800` — its record is at `0x2F7AA` (16i), so the INI's
offsets describe FW.012, not every bin. Both bins hold code at `0x002800`.

## (4) The verb table — the native port's interface, confirmed

`WinOperateCScaler!FUN_1000c9e0` builds a 16-byte-per-entry option table
`{char *name, 0, out, index}`, 1-based. 57 verbs: `verify sign erase isp
ispuser ispdiff ispcopy factoryisp recordver srstatus flashtype readsr writesr
readsafeguard writesafeguard resetmcu dumpflash getstatus userdefinedinfo
edpisp enterispmode mergefwinfo senduserdefinedinfo sendudi i2cwrite
getscalertype bgupdatefw fgupdatefw boot newboot ispchannel factory dsmode reg
ddcci flash fwbin cmd fwbincmd copydiffer userdefined veraddr totalverlen
majorverlen subverlen recordvermode dumpaddr dumplen dumpname comm signfile
keypair vkfile skfile subcert nextvkfile bank`.

This is what `OperateScalerEx` parses, so it is the surface the Linux tool
mirrors — the owner's standing ruling, now with the verb list in hand.
`flashtype` (index 11) is how the vendor asks which part is fitted, and
`readsr`/`writesr`/`srstatus` (12/13/10) are the status register — where the
busy bit and the bank bit live.

Shipped: `msi_isp/flashdat.py` (parser + grammar), the `flashdat` verb
(`--chip A25L020` prints the phases), `Facts.FLASHDAT_FORMAT_16W`,
`Facts.BIN_RECORD_16W`, `Facts.SCALER_VERBS(_16W)`, `Facts.INI_TIMING_16W`,
and `Facts.COMM_API` rebuilt as `name -> (field, member byte, vtable slot)`.
---

# Session 16x — an emulated monitor: the whole flash cycle, in a test

The owner asked for a simulated firmware flash — the real image, the real
pipeline, an emulated monitor — and asked whether the code has to be finished
first. Measured answer: the emulator is what finishes it. Four gaps surfaced
the first time the pipeline ran end to end.

## What the model is

`msi_isp/emul.py` speaks the same `write(addr7, buf)` / `read(addr7, n)` surface
as the real transports, in three layers, each labelled with the session that
measured it:

| layer | model | source |
|---|---|---|
| slave `0x37` | the handshake byte (`0x8a`), the ladder's ports, door `0x9C`, the packet `[control, arg1, arg2, SUM]` | 16e/16k/16o/16p/16q |
| slave `0x22` | ONE byte-addressable window, seeded with the measured head block `12 14 c4 83 01 00 01 c0` and the transaction block `00 84 00 02 02 02 02 00` | 16t/16u/16v |
| slave `0x20` | the burst engine: a 3-byte `[hi, mid, lo]` header seeks, the next read returns flash bytes | 16n |
| behind the bridge | a SPI NOR part: 4 MiB in two 2 MiB banks, 256-byte pages, 4 KiB sectors, `0x06` WREN, `0x40` program, `0x42` sector erase, `0xA0` chip erase, `0x9F` RDID, a busy bit on a **virtual clock** | Flash.dat's own command set (16w), `SpiFlash` |

The chip is chosen by Flash.dat record: `EmulatedMonitor(chip="MX25L32XX")`
takes its capacity (`4096 KiB`) and identity bytes (`c2 20 16`) from the
vendor's 150-record library, so the part is one MSI ships a template for.

## The four things it caught

1. **The program packet loses bits 8-15.** `program_page_at` sent
   `packet_bytes(0x40, addr>>16, addr&0xff)`: for `0xF800` that is
   `(0x00, 0xF8)`... and the model put it at the wrong cell. The vendor's
   `WriteFlashData` pushes `(addr>>16)` **and** the address dword, and the
   read ladder has always put the top byte on page port `0xF2` (16k). Fixed:
   the header carries bits 15-8 and 7-0, `isp_write_packet(..., page=)` arms
   `0xF2` with bits 22-16 — 7 bits × 64 KiB = 8 MiB of reach. Pinned by
   `test_the_packet_needs_the_page_port_for_the_top_bits`.
2. **The mode byte carries the bank.** `width_values` is
   `{0: (0xFC, 0xE7), 1: (0xFC, 0xEF), 2: (0xFC, 0xEF)}` (16a) — the pair
   differs in the bank bit, so mode 0 reads bank 0 and modes 1-2 read bank 1.
   That is *why* the 16t matrix looked mode-independent in one sense and why
   mode is not a free variable. Now asserted per mode.
3. **Address width is mode-dependent.** Mode 0 arms an 8-bit offset (writes
   low, then low|1), modes 1-2 a 16-bit one, and the high byte rides `0xF2` —
   so with page 0 every address aliases into 64 KiB. The emulator reproduces
   16k/16t's flat replies *mechanically*, which is the strongest statement we
   have made about that measurement.
4. **A 32-byte page is three flash operations.** The 36-byte program is three
   16-byte window transactions, each re-naming door `0x9C`; only the first
   carries the packet header, so the bridge needs a continuation path (16o's
   12-data-byte transactions over a 24-byte stride). Modelled; asserted as
   `PP @0x100 (12) → @0x10C (16) → @0x11C (4)`.

## The cycle that now runs

`msi-isp simulate` (defaults: FW.012, `MX25L32XX`, the record block at
`0xF800`):

```
1. enter ISP        status 0x8a
2. vendor pipeline  8 steps, all answered
3. sector erase     bank 1 @0x00f800 -> ff ff ff ff
4. program page     bank 1, 36 B sent, read-back match
5. version now      '' (bank 0 active, blank)
6. reset + switch   active bank 1, version '012'
7. leave ISP        ring 8a
model traffic: 147 bus operations, flash clock 10,192 ms, 4 flash operations
```

`tests/test_emul.py` (31 tests): NOR semantics (program ANDs, erase sets), the
busy bit on the virtual clock, the packet checksum rejection (the leaf's `0x15`),
the RDID from the Flash.dat record, the bank bit, the sticky ring (which makes
`exit_isp`'s bool an artifact, 16q), the 8-step pipeline, and the full
FW.012 cycle — erase, program the inactive bank, reset, version reads `012`.

## Honest limits

The emulator proves our protocol model is self-consistent and that the pipeline
drives it. It does not prove the panel agrees: the cells are unproven (16v), and
the layers carry their measurement dates for exactly that reason. Two model
choices are labelled as such — the sector index in the `0x42` packet's
`(arg1, arg2)` pair (16n reads them as `addr&0xff, bank`), and the `0x22`
window's flash-type bytes at `0x23`.

Gates: ruff clean, **384 unit tests OK** (+31). Facts: unchanged this session.
