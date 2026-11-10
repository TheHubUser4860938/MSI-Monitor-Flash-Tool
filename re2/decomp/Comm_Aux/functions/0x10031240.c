// rea decompile_all
// name: FUN_10031240
// address: 0x10031240
// body: available
// range: 0x10031240-0x10031358 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_10031240(undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  int iVar1;
  HLOCAL local_c;
  HLOCAL local_8;
  
  local_8 = (HLOCAL)0x0;
  local_c = (HLOCAL)0x0;
  SetLastError(0);
  if (param_2 != 0) {
    local_8 = (HLOCAL)FUN_10031430(param_2);
  }
  if (param_3 != 0) {
    local_c = (HLOCAL)FUN_10031430(param_3);
  }
  iVar1 = FUN_10030eb0(local_8,local_c,param_11);
  if (iVar1 == 0) {
    LocalFree(local_8);
    LocalFree(local_c);
    iVar1 = 0;
  }
  else {
    LocalFree(local_8);
    LocalFree(local_c);
    if ((DAT_1020bc50 == (HMODULE)0x0) &&
       (DAT_1020bc50 = (HMODULE)FUN_10030a40(u_Advapi32_dll_1020503c,0),
       DAT_1020bc50 == (HMODULE)0x0)) {
      return 0;
    }
    if ((DAT_1020bc6c == (FARPROC)0x0) &&
       (DAT_1020bc6c = GetProcAddress(DAT_1020bc50,s_CreateProcessAsUserA_10205058),
       DAT_1020bc6c == (FARPROC)0x0)) {
      return 0;
    }
    iVar1 = (*DAT_1020bc6c)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                            param_10,param_12);
  }
  return iVar1;
}

