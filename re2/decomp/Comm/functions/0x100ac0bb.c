// rea decompile_all
// name: CDockingManager::CalcExpectedDockedRect
// address: 0x100ac0bb
// body: available
// range: 0x100ac0bb-0x100ac3ec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CDockingManager::CalcExpectedDockedRect(class CWnd *,class CPoint,class
   CRect &,int &,class CDockablePane * *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CDockingManager::CalcExpectedDockedRect
          (CDockingManager *this,CObject *param_1,undefined4 param_3,undefined4 param_4,
          LPRECT param_5,undefined4 param_6,undefined4 *param_7)

{
  CDockingManager *pCVar1;
  code *pcVar2;
  CDockingManager *pCVar3;
  SHORT SVar4;
  CObject *pCVar5;
  BOOL BVar6;
  CPaneDivider *pCVar7;
  int iVar8;
  CObject *pCVar9;
  uint uVar10;
  ulong uVar11;
  undefined4 uVar12;
  int local_34;
  undefined4 local_30;
  CObject *local_2c;
  undefined4 *local_28;
  uint local_24;
  CObject *local_20;
  CDockingManager *local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  local_30 = param_6;
  local_20 = param_1;
  local_28 = param_7;
  local_1c = this;
  SetRectEmpty(param_5);
  SVar4 = GetKeyState(0x11);
  if (SVar4 < 0) goto LAB_100ac3da;
  local_34 = 0;
  local_24 = 0;
  iVar8 = *(int *)this;
  uVar12 = 1;
  pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPaneFrameWnd_101d38dc,param_1);
  guard_check_icall(param_3,param_4,pCVar5,uVar12);
  local_2c = (CObject *)(**(code **)(iVar8 + 0x14))();
  if (local_2c != (CObject *)0x0) {
    pcVar2 = *(code **)(*(int *)local_2c + 0x1c0);
    guard_check_icall(param_1,param_3,param_4,param_5,local_30,local_28);
    (*pcVar2)();
    BVar6 = IsRectEmpty(param_5);
    if (BVar6 == 0) goto LAB_100ac3da;
  }
  iVar8 = *(int *)(local_1c + 0x1b8);
  if (((iVar8 == 0) || (*(int *)(iVar8 + 8) == 0)) || (*(int *)(iVar8 + 4) == 0)) {
    pCVar5 = (CObject *)0x0;
  }
  else {
    pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPaneFrameWnd_101d38dc,param_1);
    pcVar2 = *(code **)(*(int *)pCVar5 + 0x1a8);
    guard_check_icall();
    pCVar5 = (CObject *)(*pcVar2)();
    pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBasePane_101874c4,pCVar5);
    param_1 = local_20;
  }
  iVar8 = *(int *)local_1c;
  guard_check_icall(param_3,param_4,DAT_101d3904,1,0,1,pCVar5);
  pCVar5 = (CObject *)(**(code **)(iVar8 + 0x10))();
  pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_101d3b9c,pCVar5);
  local_2c = pCVar5;
  if ((pCVar5 != (CObject *)0x0) &&
     (pCVar7 = CDockablePane::GetDefaultPaneDivider((CDockablePane *)pCVar5),
     pCVar7 != (CPaneDivider *)0x0)) {
    iVar8 = FUN_10019d4f(&PTR_s_CPaneFrameWnd_101d38dc);
    if (iVar8 != 0) {
      pCVar9 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPaneFrameWnd_101d38dc,param_1);
      pcVar2 = *(code **)(*(int *)pCVar5 + 0x338);
      guard_check_icall(pCVar9);
      iVar8 = (*pcVar2)();
      pCVar5 = local_2c;
      if (iVar8 == 0) goto LAB_100ac3da;
    }
    pCVar7 = CDockablePane::GetDefaultPaneDivider((CDockablePane *)pCVar5);
    pcVar2 = *(code **)(*(int *)pCVar7 + 0x29c);
    guard_check_icall(local_20,param_3,param_4,param_5,local_30,local_28);
    (*pcVar2)();
    goto LAB_100ac3da;
  }
  iVar8 = IsPointNearDockSite(local_1c,param_3,param_4,&local_24,&local_34);
  if (iVar8 == 0) {
    *local_28 = 0;
    goto LAB_100ac3da;
  }
  *local_28 = 0;
  iVar8 = FUN_10019d4f(&PTR_s_CPaneFrameWnd_101d38dc);
  if (iVar8 == 0) {
    iVar8 = FUN_10019d4f(&PTR_s_CDockablePane_101d3b9c);
    if (iVar8 != 0) {
      pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_101d3b9c,param_1);
      goto LAB_100ac2f0;
    }
  }
  else {
    pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPaneFrameWnd_101d38dc,param_1);
    pcVar2 = *(code **)(*(int *)pCVar5 + 0x1a8);
    guard_check_icall();
    pCVar5 = (CObject *)(*pcVar2)();
    pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPane_101878f4,pCVar5);
    param_1 = local_20;
    if (pCVar5 != (CObject *)0x0) {
LAB_100ac2f0:
      pcVar2 = *(code **)(*(int *)pCVar5 + 0x198);
      guard_check_icall();
      uVar10 = (*pcVar2)();
      param_1 = local_20;
      if ((local_24 & uVar10) == 0) goto LAB_100ac3da;
    }
  }
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  GetWindowRect(*(HWND *)(param_1 + 0x20),&local_18);
  pCVar3 = local_1c;
  pCVar1 = local_1c + (-(uint)(local_34 != 0) & 0x10) + 0xf8;
  param_5->left = *(LONG *)pCVar1;
  param_5->top = *(LONG *)(pCVar1 + 4);
  param_5->right = *(LONG *)(pCVar1 + 8);
  param_5->bottom = *(LONG *)(pCVar1 + 0xc);
  uVar11 = CWnd::GetExStyle(*(CWnd **)(local_1c + 0xe4));
  if (local_24 == 0x1000) {
    if ((uVar11 & 0x400000) == 0) {
LAB_100ac38d:
      param_5->right = (param_5->left - local_18.left) + local_18.right;
    }
    else {
LAB_100ac3ca:
      param_5->left = (param_5->right - local_18.right) + local_18.left;
    }
  }
  else if (local_24 == 0x2000) {
    param_5->bottom = (param_5->top - local_18.top) + local_18.bottom;
  }
  else {
    if (local_24 == 0x4000) {
      if ((uVar11 & 0x400000) == 0) goto LAB_100ac3ca;
      goto LAB_100ac38d;
    }
    if (local_24 == 0x8000) {
      param_5->top = (param_5->bottom - local_18.bottom) + local_18.top;
    }
  }
  pcVar2 = *(code **)(*(int *)pCVar3 + 0x5c);
  guard_check_icall(param_5,local_24);
  (*pcVar2)();
  CWnd::ClientToScreen(*(CWnd **)(pCVar3 + 0xe4),param_5);
LAB_100ac3da:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

