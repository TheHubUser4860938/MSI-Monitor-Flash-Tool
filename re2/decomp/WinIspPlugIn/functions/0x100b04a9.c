// rea decompile_all
// name: FUN_100b04a9
// address: 0x100b04a9
// body: available
// range: 0x100b04a9-0x100b0529 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100b0525 to 0x1004a383 FUN_1004a383 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100b04a9(wchar_t *param_1,int param_2,undefined4 param_3)

{
  BOOL BVar1;
  size_t sVar2;
  int in_ECX;
  undefined1 local_38 [36];
  wchar_t *local_14;
  uint local_8;
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  BVar1 = IsWindow(*(HWND *)(in_ECX + 0x20));
  if ((BVar1 != 0) && (param_2 != 0)) {
    if ((param_1 != (wchar_t *)0xffffffff) && (param_1 != (wchar_t *)0x0)) {
      sVar2 = _wcslen(param_1);
      if (0x400 < sVar2) goto LAB_100b0525;
    }
    FillInToolInfo(local_38,param_2,param_3);
    local_14 = param_1;
    SendMessageW(*(HWND *)(in_ECX + 0x20),0x439,0,(LPARAM)local_38);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
LAB_100b0525:
                    /* WARNING: Subroutine does not return */
  FUN_1004a383();
}

