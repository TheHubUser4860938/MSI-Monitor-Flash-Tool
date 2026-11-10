# Corpus briefing for analysis workers

Ground truth for this pass is the **decompiled Windows binaries**, dumped to
`/home/eugene/Projects/monitor-fw/re2/decomp/<mod>/functions/<addr>.c` by Ghidra 12.1.2 via REA.
Modules: `WinIspPlugIn` (the ISP engine), `Comm` (the plugin facade), `Comm_Aux` (I2C-over-DP-AUX
transport), `exe` (the MFC GUI). Each module dir has `decompile-index.json` mapping
`address`/`name`/`relative_path`. PDB public names survive for the exports and MFC methods;
everything else is `FUN_<addr>`.

Use `python3 /home/eugene/Projects/monitor-fw/re2/q.py` (no REA needed):

    q.py name  <mod> <regex>     # list named functions
    q.py grep  <mod> <regex>     # which functions contain a token
    q.py show  <mod> <name|addr> # print pseudocode
    q.py calls <mod> <name|addr> # callees of one function
    q.py callers <mod> <name>    # who calls it

`<mod>` is one of `isp aux comm exe scaler`. Strip Ghidra's `//` header lines with
`awk '!/^\/\// && !/^$/' file.c` for readability.

## Conventions you must know (observed in this binary)

- Image base `0x10000000`. Globals appear as `DAT_1024xxxx` = address `0x1024xxxx` in `.data`.
  **A global's address is the ground truth for identity**: the same `DAT_` name in two functions is the
  same variable. Globals are untyped, so Ghidra prints `DAT_x` for a struct base and `_DAT_x`/`DAT_x+4`
  for overlapping views of it.
- `CCpRsString` is MSI's own string class (MSVC `CString`-like, small-string-optimised). An object is
  laid out as `{vftable, inline buffer (16 B), capacity, length}`; when `capacity > 7` the buffer is
  heap and the inline slot holds the pointer. Ghidra inlines the fields as `local_XX`/`local_XX+4`,
  so a string argument in a call often prints as the object's address.
- `CCpTransform` is their transform/scalar object.
- **The device interface is a C++ vtable.** `DAT_10249d10` in WinIspPlugIn holds the injected
  `IComm` object; a call site reads `(**(code **)(*DAT_10249d10 + <byte offset>))(args)`.
  Byte offset N = vtable slot N/4. The Comm.dll class implements it, so slot ↔ export name is
  recoverable by matching the slot's args to the export's args.
- Debug logging goes through `FUN_10048350(&stringObj, L"fmt", args)` then `FUN_10016860()`.
  Those two are always a pair: the format string is the best documentation available, so quote it.
- `FUN_1001f750()` = InitCommunication (its failure logs "InitCommunication Fail, Error Code: 0x%x");
  `FUN_1001fa90()` collects the result; `FUN_1003fab0(code)` reports it. Every exported entry point
  is wrapped in `FUN_100080f0(); code = FUN_1001f750(); ...work...; FUN_1001fa90(); FUN_1003fab0(code)`.
- The per-model configuration is an INI file `IspSetting.ini` (sections `Settings`,
  `Background_ISP_Settging`, `ISP_CHECK_SETTING`, `ProjectIDAddrSetting`, `ProjectIDCountSetting`)
  read with `GetPrivateProfileStringW`; the flash-part table is `PlugIn/Flash.dat`.

## Output contract

Report findings as a list of claims. For each claim give:
1. **the fact** (one sentence, with the register/command/value/delay named);
2. **kind** = observed (the pseudocode says it) / inferred (you are reading intent) / unknown;
3. **address** of the function and the line/token you read it from.
Prefer exact constants: hex register addresses, values, lengths, delays in ms, slave addresses,
vtable byte offsets. Note every `FUN_` you could not resolve as an open question rather than guessing.
Do not modify any file.
