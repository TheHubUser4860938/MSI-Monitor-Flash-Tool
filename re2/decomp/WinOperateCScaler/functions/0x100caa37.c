// rea decompile_all
// name: FUN_100caa37
// address: 0x100caa37
// body: available
// range: 0x100caa37-0x100cadb9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100cadb5 to 0x1001d023 FUN_1001d023 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100caa37(CPaneContainerManager *param_1,CObject *param_2,undefined4 param_3,
                 undefined4 param_4,LPRECT param_5,uint *param_6,int *param_7)

{
  code *pcVar1;
  uint *puVar2;
  SHORT SVar3;
  int iVar4;
  CObject *pCVar5;
  uint uVar6;
  int iVar7;
  undefined1 local_70 [4];
  LPRECT local_6c;
  uint local_68;
  int local_64;
  CPaneContainerManager *local_60;
  uint local_5c;
  CGlobalUtils *local_58;
  int local_54;
  int local_50;
  uint local_4c;
  int *local_48;
  CObject *local_44;
  uint *local_40;
  CObject *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  local_60 = param_1;
  local_40 = param_6;
  local_48 = param_7;
  local_3c = param_2;
  local_6c = param_5;
  if (param_7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1001d023();
  }
  local_5c = 0x1000;
  *param_6 = 0;
  local_50 = 0;
  local_54 = 0;
  *param_7 = 0;
  SetRectEmpty(param_5);
  SVar3 = GetKeyState(0x11);
  if (((SVar3 < 0) ||
      (iVar4 = FUN_100cb48f(local_60,param_3,param_4,param_7,&local_5c,&local_50,&local_54),
      iVar4 == 0)) || (*param_7 == 0)) goto LAB_100cada2;
  iVar4 = FUN_100250d6(&PTR_s_CPaneFrameWnd_102018e4);
  if (iVar4 != 0) {
    pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPaneFrameWnd_102018e4,param_2);
    pcVar1 = *(code **)(*(int *)pCVar5 + 0x1ac);
    guard_check_icall();
    param_2 = (CObject *)(*pcVar1)();
  }
  local_44 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPane_101b279c,param_2);
  if ((int *)*param_7 != (int *)0x0) {
    pcVar1 = *(code **)(*(int *)*param_7 + 0x198);
    guard_check_icall();
    local_64 = (*pcVar1)();
    pcVar1 = *(code **)(*(int *)*param_7 + 0x194);
    guard_check_icall();
    local_68 = (*pcVar1)();
    pcVar1 = *(code **)(*(int *)*param_7 + 0x228);
    guard_check_icall(0);
    iVar4 = (*pcVar1)();
    pCVar5 = local_44;
    local_4c = (uint)(iVar4 != 0);
    if (local_44 != (CObject *)0x0) {
      pcVar1 = *(code **)(*(int *)local_44 + 0x198);
      guard_check_icall();
      iVar4 = (*pcVar1)();
      if ((iVar4 != local_64) && (local_4c != 0)) goto LAB_100cada2;
      pcVar1 = *(code **)(*(int *)pCVar5 + 0x198);
      guard_check_icall();
      uVar6 = (*pcVar1)();
      if (((local_68 & uVar6) == 0) && (local_4c == 0)) goto LAB_100cada2;
    }
  }
  if ((local_50 != 0) || (local_54 != 0)) {
    iVar4 = *param_7;
    *local_40 = (uint)(iVar4 != 0);
    if (iVar4 != 0) {
      pcVar1 = *(code **)(*(int *)*param_7 + 0x18c);
      guard_check_icall();
      iVar4 = (*pcVar1)();
      if (((iVar4 == 0) ||
          (iVar4 = CGlobalUtils::CanBeAttached(local_58,(CWnd *)local_3c), iVar4 == 0)) ||
         (local_44 == (CObject *)0x0)) {
LAB_100cac35:
        uVar6 = 0;
      }
      else {
        param_7 = (int *)*param_7;
        pcVar1 = *(code **)(*(int *)local_44 + 0x198);
        guard_check_icall();
        iVar4 = (*pcVar1)();
        pcVar1 = *(code **)(*param_7 + 0x198);
        guard_check_icall();
        iVar7 = (*pcVar1)();
        if (iVar7 != iVar4) goto LAB_100cac35;
        uVar6 = 1;
      }
      *local_40 = uVar6;
      param_7 = local_48;
    }
    if (*local_40 == 0) goto LAB_100cada2;
  }
  puVar2 = local_40;
  local_48 = (int *)*param_7;
  if (local_48 != (int *)0x0) {
    pcVar1 = *(code **)(*local_48 + 0x228);
    guard_check_icall(0);
    iVar4 = (*pcVar1)();
    pCVar5 = local_3c;
    if ((iVar4 != 0) &&
       (iVar4 = CGlobalUtils::CanPaneBeInFloatingMultiPaneFrameWnd(local_58,(CWnd *)local_3c),
       iVar4 == 0)) {
      *puVar2 = 0;
      goto LAB_100cada2;
    }
    if ((*param_7 != 0) && (iVar4 = FUN_100250d6(&PTR_s_CBasePane_101b236c), iVar4 != 0)) {
      pcVar1 = *(code **)(*(int *)*param_7 + 0x184);
      guard_check_icall(pCVar5);
      iVar4 = (*pcVar1)();
      if (iVar4 == 0) {
        *local_40 = 0;
        goto LAB_100cada2;
      }
    }
  }
  local_28.left = 0;
  local_28.top = 0;
  local_28.right = 0;
  local_28.bottom = 0;
  GetWindowRect(*(HWND *)(*param_7 + 0x20),&local_28);
  if ((CObject *)*param_7 == local_3c) {
LAB_100cad9d:
    *local_40 = 0;
  }
  else {
    iVar4 = FUN_100250d6(&PTR_s_CPaneFrameWnd_102018e4);
    if (iVar4 != 0) {
      pcVar1 = *(code **)(*(int *)*param_7 + 0x228);
      guard_check_icall(0);
      pCVar5 = (CObject *)(*pcVar1)();
      if (pCVar5 == local_3c) goto LAB_100cad9d;
    }
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    GetWindowRect(*(HWND *)(local_3c + 0x20),&local_18);
    if (local_44 != (CObject *)0x0) {
      pcVar1 = *(code **)(*(int *)local_44 + 0x198);
      guard_check_icall();
      uVar6 = (*pcVar1)();
      if (((local_5c & uVar6) != 0) || (DAT_1020b528 != 0)) {
        CPaneContainerManager::CalcRects
                  (local_60,&local_28,&local_18,&local_38,local_70,local_5c,0,0,0,0);
        local_6c->left = local_18.left;
        local_6c->top = local_18.top;
        local_6c->right = local_18.right;
        local_6c->bottom = local_18.bottom;
      }
    }
  }
LAB_100cada2:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

