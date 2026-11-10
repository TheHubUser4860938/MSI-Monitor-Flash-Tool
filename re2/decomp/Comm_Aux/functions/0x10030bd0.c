// rea decompile_all
// name: FUN_10030bd0
// address: 0x10030bd0
// body: available
// range: 0x10030bd0-0x10030c9e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


HMODULE FUN_10030bd0(undefined4 param_1,uint param_2,int param_3)

{
  DWORD DVar1;
  int iVar2;
  int local_14;
  int local_10;
  LPCWSTR local_c;
  HMODULE local_8;
  
  local_c = (LPCWSTR)0x0;
  local_8 = (HMODULE)0x0;
  SetLastError(0);
  local_c = (LPCWSTR)FUN_100319d0(param_1,param_2);
  if (local_c == (LPCWSTR)0x0) {
    SetLastError(0x7e);
    return local_8;
  }
  local_14 = 0;
  local_10 = FUN_10031b40(local_c,-(uint)(param_3 != 0) & (uint)&local_14);
  if (((local_10 != 0) && (param_3 != 0)) && (local_14 == 0)) {
    SetLastError(0x80092009);
    local_10 = 0;
  }
  if (local_10 == 0) {
    DVar1 = GetLastError();
    iVar2 = FUN_10032420(local_c,DVar1);
    if (iVar2 == 0) goto LAB_10030c8e;
  }
  local_8 = LoadLibraryExW(local_c,(HANDLE)0x0,param_2 & 0xffffe0f7);
LAB_10030c8e:
  LocalFree(local_c);
  return local_8;
}

