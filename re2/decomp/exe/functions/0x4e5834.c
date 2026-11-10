// rea decompile_all
// name: FUN_004e5834
// address: 0x4e5834
// body: available
// range: 0x4e5834-0x4e58b4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4e58b0 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004e5834(wchar_t *param_1,int param_2,undefined4 param_3)

{
  BOOL BVar1;
  size_t sVar2;
  int in_ECX;
  undefined1 local_38 [36];
  wchar_t *local_14;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  BVar1 = IsWindow(*(HWND *)(in_ECX + 0x20));
  if ((BVar1 != 0) && (param_2 != 0)) {
    if ((param_1 != (wchar_t *)0xffffffff) && (param_1 != (wchar_t *)0x0)) {
      sVar2 = _wcslen(param_1);
      if (0x400 < sVar2) goto LAB_004e58b0;
    }
    FillInToolInfo(local_38,param_2,param_3);
    local_14 = param_1;
    SendMessageW(*(HWND *)(in_ECX + 0x20),0x439,0,(LPARAM)local_38);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
LAB_004e58b0:
                    /* WARNING: Subroutine does not return */
  FUN_00429127();
}

