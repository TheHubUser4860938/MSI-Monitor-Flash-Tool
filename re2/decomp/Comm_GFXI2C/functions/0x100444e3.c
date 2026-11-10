// rea decompile_all
// name: FUN_100444e3
// address: 0x100444e3
// body: available
// range: 0x100444e3-0x1004452b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __fastcall FUN_100444e3(int param_1)

{
  HCURSOR pHVar1;
  
  FUN_10044487(param_1);
  *(undefined4 *)(param_1 + 0x24) = 0;
  FUN_10044441(param_1);
  pHVar1 = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)&DAT_00007f02);
  *(HCURSOR *)(param_1 + 0x3c) = pHVar1;
  pHVar1 = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)&DAT_00007f00);
  *(HCURSOR *)(param_1 + 0x40) = pHVar1;
  *(undefined4 *)(param_1 + 0x10) = 2;
  *(undefined4 *)(param_1 + 0x14) = 2;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  return param_1;
}

