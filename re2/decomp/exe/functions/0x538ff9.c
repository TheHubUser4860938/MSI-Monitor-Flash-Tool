// rea decompile_all
// name: FUN_00538ff9
// address: 0x538ff9
// body: available
// range: 0x538ff9-0x539106 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x539102 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00538ff9(int param_1,undefined4 *param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  CMFCPropertyGridCtrl *in_ECX;
  int iVar4;
  undefined4 local_4c;
  int local_48;
  undefined4 *local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  local_1c = param_2;
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0xc) == 0) {
      local_4c = 1;
      pcVar1 = *(code **)(*(int *)in_ECX + 0x164);
      guard_check_icall();
      iVar2 = (*pcVar1)();
      SendMessageW(*(HWND *)(iVar2 + 0x20),0x120b,0,(LPARAM)&local_4c);
      local_18.left = 0;
      local_18.top = 0;
      local_18.right = 0;
      local_18.bottom = 0;
      GetClientRect(*(HWND *)(in_ECX + 0x20),&local_18);
      iVar2 = *(int *)(in_ECX + 0x354);
      if (*(int *)(in_ECX + 0x354) <= local_48 + -2) {
        iVar2 = local_48 + -2;
      }
      iVar4 = local_18.right - local_18.left;
      iVar3 = GetSystemMetrics(0x15);
      if (iVar2 < (iVar4 - iVar3) + -5) {
        iVar2 = *(int *)(in_ECX + 0x354);
        if (*(int *)(in_ECX + 0x354) <= local_48 + -2) {
          iVar2 = local_48 + -2;
        }
      }
      else {
        iVar3 = local_18.right - local_18.left;
        iVar2 = GetSystemMetrics(0x15);
        iVar2 = (iVar3 - iVar2) + -5;
      }
      *(int *)(in_ECX + 0x358) = iVar2;
      CMFCPropertyGridCtrl::ReposProperties(in_ECX);
      InvalidateRect(*(HWND *)(in_ECX + 0x20),(RECT *)(in_ECX + 0x328),1);
      UpdateWindow(*(HWND *)(in_ECX + 0x20));
    }
    *local_1c = 0;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00429127();
}

