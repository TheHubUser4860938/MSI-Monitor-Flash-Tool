// rea decompile_all
// name: FUN_00402690
// address: 0x402690
// body: available
// range: 0x402690-0x4026f9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00402690(undefined4 *param_1,undefined4 param_2)

{
  if (*(int *)(*(int *)ThreadLocalStoragePointer + 4) < DAT_006194ac) {
    FUN_0055b543(&DAT_006194ac);
    if (DAT_006194ac == -1) {
      _DAT_006194a4 = std::_Iostream_error_category::vftable;
      _DAT_006194a8 = 5;
      _atexit((_func_4879 *)&DAT_005abbc0);
      FUN_0055b504(&DAT_006194ac);
    }
  }
  *param_1 = param_2;
  param_1[1] = &DAT_006194a4;
  return;
}

