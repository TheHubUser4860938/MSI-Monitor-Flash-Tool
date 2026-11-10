// rea decompile_all
// name: FUN_10037200
// address: 0x10037200
// body: available
// range: 0x10037200-0x10037318 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __cdecl
FUN_10037200(undefined4 param_1,char *param_2,char *param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,int param_11,undefined4 param_12)

{
  int iVar1;
  short *local_c;
  LPCWSTR local_8;
  
  local_8 = (LPCWSTR)0x0;
  local_c = (short *)0x0;
  SetLastError(0);
  if (param_2 != (char *)0x0) {
    local_8 = FUN_100373f0(param_2);
  }
  if (param_3 != (char *)0x0) {
    local_c = FUN_100373f0(param_3);
  }
  iVar1 = FUN_10036e70(local_8,local_c,param_11);
  if (iVar1 == 0) {
    LocalFree(local_8);
    LocalFree(local_c);
    iVar1 = 0;
  }
  else {
    LocalFree(local_8);
    LocalFree(local_c);
    if ((DAT_10066bc0 == (HMODULE)0x0) &&
       (DAT_10066bc0 = FUN_10036a00(u_Advapi32_dll_1006303c,0), DAT_10066bc0 == (HMODULE)0x0)) {
      return 0;
    }
    if ((DAT_10066bdc == (FARPROC)0x0) &&
       (DAT_10066bdc = GetProcAddress(DAT_10066bc0,s_CreateProcessAsUserA_10063058),
       DAT_10066bdc == (FARPROC)0x0)) {
      return 0;
    }
    iVar1 = (*DAT_10066bdc)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                            param_10,param_12);
  }
  return iVar1;
}

