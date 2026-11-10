// rea decompile_all
// name: FUN_100310c0
// address: 0x100310c0
// body: available
// range: 0x100310c0-0x1003117b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


BOOL FUN_100310c0(LPCSTR param_1,LPSTR param_2,LPSECURITY_ATTRIBUTES param_3,
                 LPSECURITY_ATTRIBUTES param_4,BOOL param_5,DWORD param_6,LPVOID param_7,
                 LPCSTR param_8,LPSTARTUPINFOA param_9,undefined4 param_10,
                 LPPROCESS_INFORMATION param_11)

{
  int iVar1;
  BOOL BVar2;
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = (HLOCAL)0x0;
  local_c = (HLOCAL)0x0;
  SetLastError(0);
  if (param_1 != (LPCSTR)0x0) {
    local_8 = (HLOCAL)FUN_10031430(param_1);
  }
  if (param_2 != (LPSTR)0x0) {
    local_c = (HLOCAL)FUN_10031430(param_2);
  }
  iVar1 = FUN_10030eb0(local_8,local_c,param_10);
  if (iVar1 == 0) {
    LocalFree(local_8);
    LocalFree(local_c);
    BVar2 = 0;
  }
  else {
    LocalFree(local_8);
    LocalFree(local_c);
    BVar2 = CreateProcessA(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                           param_11);
  }
  return BVar2;
}

