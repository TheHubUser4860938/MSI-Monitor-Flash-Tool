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
