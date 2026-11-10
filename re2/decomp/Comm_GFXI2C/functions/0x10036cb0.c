// rea decompile_all
// name: FUN_10036cb0
// address: 0x10036cb0
// body: available
// range: 0x10036cb0-0x10036d97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


HMODULE __cdecl FUN_10036cb0(LPCWSTR param_1,uint param_2,int param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  DWORD DVar2;
  int iVar3;
  int local_14;
  int local_10;
  LPWSTR local_c;
  HMODULE local_8;
  
  local_c = (LPWSTR)0x0;
  local_8 = (HMODULE)0x0;
  SetLastError(0);
  local_c = FUN_10037990(param_1,param_2);
  if (local_c == (LPWSTR)0x0) {
    SetLastError(0x7e);
  }
  else {
    bVar1 = FUN_100375b0(local_c);
    if (CONCAT31(extraout_var,bVar1) == 0) {
      local_14 = 0;
      local_10 = FUN_10037b00(local_c,(uint *)(-(uint)(param_3 != 0) & (uint)&local_14));
      if (((local_10 != 0) && (param_3 != 0)) && (local_14 == 0)) {
        SetLastError(0x80092009);
        local_10 = 0;
      }
      if (local_10 == 0) {
        DVar2 = GetLastError();
        iVar3 = FUN_100383e0(local_c,DVar2);
        if (iVar3 == 0) {
          LocalFree(local_c);
          return (HMODULE)0x0;
        }
      }
    }
    local_8 = LoadLibraryExW(local_c,(HANDLE)0x0,param_2);
    LocalFree(local_c);
  }
  return local_8;
}

