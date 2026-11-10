// rea decompile_all
// name: FUN_00421d08
// address: 0x421d08
// body: available
// range: 0x421d08-0x421ebf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x421ebb to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00421d08(int param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 int param_6,int param_7)

{
  code *pcVar1;
  bool bVar2;
  HDC pHVar3;
  int *in_ECX;
  int local_2c;
  HTHEME local_28;
  int local_24;
  int *local_20;
  int local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  if (in_ECX[2] == 0) {
    FUN_0049d84d(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  else {
    if (param_2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00429127();
    }
    if ((param_2[2] != 0) || (bVar2 = false, param_2[5] != 0)) {
      bVar2 = true;
    }
    local_1c = 1;
    if (param_6 == 0) {
      if (param_2[1] == 0) {
        if (bVar2) {
          local_1c = 2;
        }
      }
      else if (bVar2) {
        local_1c = 3;
      }
    }
    else {
      local_1c = 4;
    }
    pcVar1 = *(code **)(*param_2 + 0xc);
    local_20 = in_ECX;
    guard_check_icall(&local_18);
    (*pcVar1)();
    if (param_2[0xb] != 0) {
      local_18.bottom = local_18.bottom + -3;
      local_18.right = local_18.right + -2;
    }
    local_24 = param_7;
    if ((param_7 == -1) && (param_2[7] - 0x13U < 2)) {
      local_28 = (HTHEME)local_20[1];
      if (param_2[0xb] == 0) {
        InflateRect(&local_18,-1,-2);
      }
      if (local_28 != (HTHEME)0x0) {
        if (param_1 == 0) {
          pHVar3 = (HDC)0x0;
        }
        else {
          pHVar3 = *(HDC *)(param_1 + 4);
        }
        DrawThemeBackground(local_28,pHVar3,0x13,local_1c,&local_18,(LPCRECT)0x0);
        goto LAB_00421ea9;
      }
    }
    if (param_1 == 0) {
      pHVar3 = (HDC)0x0;
    }
    else {
      pHVar3 = *(HDC *)(param_1 + 4);
    }
    DrawThemeBackground((HTHEME)local_20[2],pHVar3,1,local_1c,&local_18,(LPCRECT)0x0);
    if (param_7 == -1) {
      pcVar1 = *(code **)(*param_2 + 0x14);
      guard_check_icall(param_4,param_5);
      local_24 = (*pcVar1)();
      if (local_24 == -1) goto LAB_00421ea9;
    }
    FUN_0045bc7e(&local_2c);
    pcVar1 = *(code **)(*local_20 + 0x304);
    guard_check_icall(param_1,param_2,local_24,param_3,param_6,
                      ((local_18.right - local_2c) - local_18.left) / 2 + local_18.left,
                      ((local_18.bottom - (int)local_28) - local_18.top) / 2 + local_18.top);
    (*pcVar1)();
  }
LAB_00421ea9:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

