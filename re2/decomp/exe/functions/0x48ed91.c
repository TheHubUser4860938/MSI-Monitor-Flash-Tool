// rea decompile_all
// name: FUN_0048ed91
// address: 0x48ed91
// body: available
// range: 0x48ed91-0x48f047 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x48f043 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048ed91(int param_1)

{
  code *pcVar1;
  int iVar2;
  CMFCPopupMenu *this;
  CObject *pCVar3;
  CObject *pCVar4;
  CMFCVisualManager *pCVar5;
  ulong uVar6;
  HWND pHVar7;
  CWnd *pCVar8;
  int *in_ECX;
  undefined4 uVar9;
  HMENU local_24;
  tagPOINT local_20;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  if (in_ECX[0x23] != 0) goto LAB_0048f031;
  if ((param_1 == 0) && (param_1 = in_ECX[0x1b], param_1 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00429127();
  }
  pcVar1 = *(code **)(*in_ECX + 0xd4);
  guard_check_icall();
  local_24 = (HMENU)(*pcVar1)();
  if (local_24 == (HMENU)0x0) {
    pcVar1 = *(code **)(*in_ECX + 0xe0);
    guard_check_icall();
    iVar2 = (*pcVar1)();
    if (iVar2 == 0) goto LAB_0048f031;
  }
  pcVar1 = *(code **)(*in_ECX + 0xd8);
  guard_check_icall();
  this = (CMFCPopupMenu *)(*pcVar1)();
  in_ECX[0x23] = (int)this;
  if (this == (CMFCPopupMenu *)0x0) {
    DestroyMenu(local_24);
    goto LAB_0048f031;
  }
  iVar2 = CMFCPopupMenu::GetMenuItemCount(this);
  if ((0 < iVar2) && (local_24 != (HMENU)0x0)) {
    DestroyMenu(local_24);
    local_24 = (HMENU)0x0;
  }
  local_20.x = 0;
  local_20.y = 0;
  pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCPopupMenuBar_0060c6b4,
                              (CObject *)in_ECX[0x1b]);
  pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCMenuBar_0060c730,(CObject *)in_ECX[0x1b]);
  if (pCVar3 == (CObject *)0x0) {
    if (pCVar4 != (CObject *)0x0) {
      pcVar1 = *(code **)(*(int *)pCVar4 + 0x164);
      guard_check_icall();
      iVar2 = (*pcVar1)();
      if (iVar2 == 0) {
        local_20.x = in_ECX[0x17];
        local_20.y = in_ECX[0x16];
        ClientToScreen(*(HWND *)(param_1 + 0x20),&local_20);
        goto LAB_0048ef27;
      }
    }
    if (in_ECX[0x2e] == 0) {
      if (*(int *)(in_ECX[0x23] + 0xf44) != 0) {
        local_20.x = in_ECX[0x17];
        local_20.y = in_ECX[0x18] + -1;
        goto LAB_0048ef55;
      }
      local_20.x = in_ECX[0x15];
      local_20.y = in_ECX[0x18] + -1;
    }
    else {
      local_20.x = in_ECX[0x17];
      local_20.y = in_ECX[0x16];
LAB_0048ef55:
      local_20.x = local_20.x + -1;
    }
    uVar9 = 1;
    ClientToScreen(*(HWND *)(param_1 + 0x20),&local_20);
  }
  else {
    local_20.x = 0;
    local_20.y = in_ECX[0x16] + -2;
    ClientToScreen(*(HWND *)(param_1 + 0x20),&local_20);
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    GetWindowRect(*(HWND *)(pCVar3 + 0x20),&local_18);
    pCVar5 = CMFCVisualManager::GetInstance();
    pcVar1 = *(code **)(*(int *)pCVar5 + 0x2e0);
    guard_check_icall();
    iVar2 = (*pcVar1)();
    uVar6 = CWnd::GetExStyle((CWnd *)pCVar3);
    if ((uVar6 & 0x400000) == 0) {
      local_20.x = local_18.right + iVar2;
LAB_0048ef27:
      uVar9 = 3;
    }
    else {
      local_20.x = local_18.left - iVar2;
      uVar9 = 4;
    }
  }
  *(int **)(in_ECX[0x23] + 0x158) = in_ECX;
  *(undefined4 *)(in_ECX[0x23] + 0xf30) = uVar9;
  pcVar1 = *(code **)(*(int *)in_ECX[0x23] + 0x210);
  guard_check_icall(param_1,local_20.x,local_20.y,local_24,0,0);
  iVar2 = (*pcVar1)();
  if (iVar2 == 0) {
    in_ECX[0x23] = 0;
  }
  else {
    pcVar1 = *(code **)(*in_ECX + 0xdc);
    guard_check_icall();
    (*pcVar1)();
    if (in_ECX[0x31] == 0) {
      pHVar7 = GetParent(*(HWND *)(param_1 + 0x20));
      pCVar8 = CWnd::FromHandle(pHVar7);
      pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCPopupMenu_0060c808,(CObject *)pCVar8);
      if ((pCVar3 != (CObject *)0x0) && (*(int *)(pCVar3 + 0x134) != 0)) {
        *(int *)(in_ECX[0x23] + 0x134) = *(int *)(pCVar3 + 0x134);
      }
    }
    else {
      *(int *)(in_ECX[0x23] + 0x134) = in_ECX[0x31];
    }
  }
LAB_0048f031:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

