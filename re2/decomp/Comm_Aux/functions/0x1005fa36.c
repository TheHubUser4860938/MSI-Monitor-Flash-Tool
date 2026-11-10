// rea decompile_all
// name: FUN_1005fa36
// address: 0x1005fa36
// body: available
// range: 0x1005fa36-0x1005fac7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1005fac3 to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005fa36(HWND param_1,wchar_t *param_2)

{
  size_t sVar1;
  size_t sVar2;
  int iVar3;
  WCHAR local_208 [256];
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  if ((param_1 == (HWND)0x0) || (param_2 == (wchar_t *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_1004886a();
  }
  sVar1 = _wcslen(param_2);
  _memset(local_208,0,0x200);
  if (sVar1 < 0x101) {
    sVar2 = GetWindowTextW(param_1,local_208,0x100);
    if (sVar2 == sVar1) {
      iVar3 = lstrcmpW(local_208,param_2);
      if (iVar3 == 0) goto LAB_1005fab0;
    }
  }
  SetWindowTextW(param_1,param_2);
LAB_1005fab0:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

