// rea decompile_all
// name: FUN_10095f0f
// address: 0x10095f0f
// body: available
// range: 0x10095f0f-0x1009630e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1009630a to 0x1004a383 FUN_1004a383 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10095f0f(int param_1,int param_2,LPRECT param_3)

{
  int iVar1;
  code *pcVar2;
  LONG LVar3;
  LONG LVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  LONG LVar8;
  int *in_ECX;
  int iVar9;
  int *piVar10;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int *local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  local_28 = -1;
  local_1c = in_ECX;
  SetRectEmpty(param_3);
  pcVar2 = *(code **)(*in_ECX + 0x194);
  guard_check_icall();
  uVar5 = (*pcVar2)();
  piVar10 = local_1c;
  local_34 = param_1;
  local_24 = param_2;
  if (param_2 < 0) {
    local_24 = 0;
  }
  if ((local_1c[0x312] == 0) || ((local_1c[0x312] == 1 && (local_1c[0x345] != 0)))) {
    GetClientRect((HWND)local_1c[8],param_3);
    iVar7 = 0;
  }
  else {
    iVar7 = -1;
    if ((uVar5 & 0xa000) == 0) {
      local_20 = 0;
      local_34 = local_1c[0x310];
      while (local_34 != 0) {
        iVar9 = FUN_10096856(&local_34);
        if (iVar9 == 0) goto LAB_1009630a;
        iVar6 = *(int *)(iVar9 + 0x58);
        LVar8 = *(LONG *)(iVar9 + 0x5c);
        iVar1 = *(int *)(iVar9 + 0x60);
        piVar10 = local_1c;
        iVar7 = local_20;
        if (local_24 < iVar6) {
          local_28 = local_20;
          param_3->left = *(LONG *)(iVar9 + 0x54);
          param_3->top = iVar6;
          param_3->right = LVar8;
          param_3->bottom = iVar1;
          param_3->bottom = param_3->top;
          goto LAB_10096154;
        }
        if (local_24 <= iVar1) {
          param_3->left = *(LONG *)(iVar9 + 0x54);
          param_3->top = iVar6;
          param_3->right = LVar8;
          param_3->bottom = iVar1;
          if (iVar1 - local_24 < local_24 - iVar6) {
            param_3->top = param_3->bottom;
            iVar7 = local_20 + 1;
          }
          else {
            param_3->bottom = param_3->top;
          }
          goto LAB_10096154;
        }
        local_20 = local_20 + 1;
        iVar7 = local_28;
      }
      goto LAB_100962d7;
    }
    pcVar2 = *(code **)(*local_1c + 0x354);
    guard_check_icall();
    local_30 = (*pcVar2)();
    iVar9 = 0;
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    local_2c = 0;
    SetRectEmpty(&local_18);
    local_20 = local_1c[0x310];
    while (local_20 != 0) {
      iVar6 = FUN_10096856(&local_20);
      if (iVar6 == 0) goto LAB_1009630a;
      LVar8 = local_18.left;
      iVar1 = local_18.top;
      LVar3 = local_18.right;
      LVar4 = local_18.bottom;
      iVar7 = local_28;
      if ((*(int *)(iVar6 + 0x40) == 0) && (*(int *)(iVar6 + 0x50) != 0)) {
        iVar1 = *(int *)(iVar6 + 0x58);
        iVar9 = local_2c;
        LVar8 = *(int *)(iVar6 + 0x54);
        LVar3 = *(int *)(iVar6 + 0x5c);
        LVar4 = *(LONG *)(iVar6 + 0x60);
        if ((0 < local_2c) && (local_18.bottom < iVar1)) {
          local_30 = iVar1 - local_18.bottom;
          break;
        }
      }
      local_18.bottom = LVar4;
      local_18.right = LVar3;
      local_18.top = iVar1;
      local_18.left = LVar8;
      iVar9 = iVar9 + 1;
      local_2c = iVar9;
    }
    pcVar2 = *(code **)(*local_1c + 0x354);
    guard_check_icall();
    iVar9 = (*pcVar2)();
    local_30 = local_24 / (iVar9 + local_30);
    local_24 = 0;
    local_2c = 0;
    local_20 = local_1c[0x310];
    while (local_20 != 0) {
      iVar7 = FUN_10096856(&local_20);
      if (iVar7 == 0) {
LAB_1009630a:
                    /* WARNING: Subroutine does not return */
        FUN_1004a383();
      }
      iVar9 = local_18.left;
      iVar6 = local_18.top;
      iVar1 = local_18.right;
      LVar8 = local_18.bottom;
      if ((*(int *)(iVar7 + 0x40) == 0) && (*(int *)(iVar7 + 0x50) != 0)) {
        iVar9 = *(int *)(iVar7 + 0x54);
        iVar6 = *(int *)(iVar7 + 0x58);
        iVar1 = *(int *)(iVar7 + 0x5c);
        LVar8 = *(LONG *)(iVar7 + 0x60);
        if ((0 < local_2c) && (local_18.bottom <= iVar6)) {
          local_24 = local_24 + 1;
        }
        if (local_30 < local_24) {
          param_3->left = local_18.left;
          param_3->top = local_18.top;
          param_3->right = local_18.right;
          param_3->bottom = local_18.bottom;
          iVar7 = local_2c + -1;
LAB_10096147:
          param_3->left = param_3->right;
        }
        else {
          if (local_24 != local_30) goto LAB_100960f2;
          iVar7 = local_2c;
          if (local_34 < iVar9) {
            local_28 = local_2c;
            param_3->left = iVar9;
            param_3->top = iVar6;
            param_3->right = iVar1;
            param_3->bottom = LVar8;
            param_3->right = param_3->left;
          }
          else {
            if (iVar1 < local_34) goto LAB_100960f2;
            param_3->left = iVar9;
            param_3->top = iVar6;
            param_3->right = iVar1;
            param_3->bottom = LVar8;
            if (iVar1 - local_34 < local_34 - iVar9) {
              iVar7 = local_2c + 1;
              goto LAB_10096147;
            }
            param_3->right = param_3->left;
          }
        }
        piVar10 = local_1c;
        if (iVar7 != -1) goto LAB_10096154;
        break;
      }
LAB_100960f2:
      local_18.bottom = LVar8;
      local_18.right = iVar1;
      local_18.top = iVar6;
      local_18.left = iVar9;
      local_2c = local_2c + 1;
      iVar7 = local_28;
    }
    if (local_24 != local_30) goto LAB_100962d7;
    param_3->left = local_18.left;
    param_3->top = local_18.top;
    param_3->right = local_18.right;
    param_3->bottom = local_18.bottom;
    param_3->left = param_3->right;
    piVar10 = local_1c;
    iVar7 = local_2c;
  }
LAB_10096154:
  if (-1 < iVar7) {
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    GetClientRect((HWND)piVar10[8],&local_18);
    if (((piVar10[0x345] != 0) && (iVar7 == piVar10[0x312])) &&
       (iVar7 = piVar10[0x312] + -1, iVar7 < 0)) {
      iVar7 = 0;
    }
    if ((uVar5 & 0xa000) == 0) {
      iVar9 = param_3->top + -3;
      LVar8 = local_18.top;
      if (local_18.top <= iVar9) {
        LVar8 = iVar9;
      }
      param_3->top = LVar8;
      param_3->bottom = LVar8 + 6;
      if (local_18.bottom < LVar8 + 6) {
        param_3->bottom = local_18.bottom;
        param_3->top = local_18.bottom + -6;
      }
    }
    else {
      iVar9 = param_3->left + -3;
      LVar8 = local_18.left;
      if (local_18.left <= iVar9) {
        LVar8 = iVar9;
      }
      param_3->left = LVar8;
      param_3->right = LVar8 + 6;
      if (local_18.right < LVar8 + 6) {
        param_3->right = local_18.right;
        param_3->left = local_18.right + -6;
      }
    }
  }
LAB_100962d7:
  if ((local_1c[0x345] != 0) && (iVar7 == local_1c[0x312])) {
    SetRectEmpty(param_3);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

