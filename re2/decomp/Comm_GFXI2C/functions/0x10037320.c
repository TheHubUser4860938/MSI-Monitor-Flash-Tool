// rea decompile_all
// name: FUN_10037320
// address: 0x10037320
// body: available
// range: 0x10037320-0x100373eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


LPWSTR __cdecl FUN_10037320(short *param_1)

{
  UINT uSize;
  int iVar1;
  uint uVar2;
  UINT local_10;
  LPWSTR local_c;
  uint local_8;
  
  local_c = (LPWSTR)0x0;
  if (param_1 != (short *)0x0) {
    uSize = GetSystemDirectoryW((LPWSTR)0x0,0);
    iVar1 = FUN_10047adf(param_1);
    local_c = LocalAlloc(0x40,(uSize + 1 + iVar1) * 2);
    if (local_c == (LPWSTR)0x0) {
      local_c = (LPWSTR)0x0;
    }
    else {
      local_10 = GetSystemDirectoryW(local_c,uSize);
      if (local_c[local_10 - 1] != L'\\') {
        local_c[local_10] = L'\\';
        local_10 = local_10 + 1;
      }
      for (local_8 = 0; uVar2 = FUN_10047adf(param_1), local_8 < uVar2; local_8 = local_8 + 1) {
        local_c[local_10 + local_8] = param_1[local_8];
      }
    }
  }
  return local_c;
}

