// rea decompile_all
// name: CMFCBaseTabCtrl::DetachTab
// address: 0x1009fa6b
// body: available
// range: 0x1009fa6b-0x1009ffd9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMFCBaseTabCtrl::DetachTab(enum AFX_DOCK_METHOD,int,int)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CMFCBaseTabCtrl::DetachTab(CMFCBaseTabCtrl *this,AFX_DOCK_METHOD param_1,int param_2,int param_3)

{
  CObject *pCVar1;
  CPaneFrameWnd *pCVar2;
  int iVar3;
  CObject *pCVar4;
  long lVar5;
  HWND pHVar6;
  CWnd *pCVar7;
  code *pcVar8;
  undefined4 uVar9;
  AFX_DOCK_METHOD AVar10;
  undefined4 uVar11;
  tagPOINT local_44;
  CPaneFrameWnd *local_3c;
  uint local_38;
  CWnd *local_34;
  CObject *local_30;
  CObject *local_2c;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  pcVar8 = *(code **)(*(int *)this + 0x2c0);
  guard_check_icall(param_2);
  pCVar2 = (CPaneFrameWnd *)(*pcVar8)();
  local_3c = pCVar2;
  if ((int)pCVar2 < 0) goto LAB_1009ffc7;
  pcVar8 = *(code **)(*(int *)this + 0x1f0);
  guard_check_icall(pCVar2);
  iVar3 = (*pcVar8)();
  if (iVar3 == 0) goto LAB_1009ffc7;
  pcVar8 = *(code **)(*(int *)this + 0x1b0);
  guard_check_icall(pCVar2);
  pCVar4 = (CObject *)(*pcVar8)();
  local_2c = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPane_101de9e4,pCVar4);
  if (local_2c == (CObject *)0x0) goto LAB_1009ffc7;
  pcVar8 = *(code **)(*(int *)local_2c + 0x1cc);
  guard_check_icall();
  iVar3 = (*pcVar8)();
  if (iVar3 == 0) goto LAB_1009ffc7;
  uVar9 = 0;
  local_28.left = 0;
  local_28.top = 0;
  local_28.right = 0;
  local_28.bottom = 0;
  SetRectEmpty(&local_28);
  pcVar8 = *(code **)(*(int *)local_2c + 0x2c0);
  guard_check_icall(&local_28,param_1);
  iVar3 = (*pcVar8)();
  if (iVar3 == 0) goto LAB_1009ffc7;
  if (param_1 == 1) {
    local_44.x = 0;
    local_44.y = 0;
    GetCursorPos(&local_44);
    iVar3 = DAT_10247e30;
    local_38 = *(int *)(this + 0x160) - local_44.y;
    local_34 = DAT_10247e34;
    lVar5 = _labs(*(int *)(this + 0x15c) - local_44.x);
    if ((lVar5 < iVar3) && (lVar5 = _labs(local_38), lVar5 < (int)local_34)) goto LAB_1009ffc7;
  }
  pcVar8 = *(code **)(*(int *)local_2c + 0x18c);
  guard_check_icall();
  iVar3 = (*pcVar8)();
  if (iVar3 == 0) goto LAB_1009ffc7;
  pcVar8 = *(code **)(*(int *)local_2c + 0x1b8);
  guard_check_icall();
  local_38 = (*pcVar8)();
  pHVar6 = GetParent(*(HWND *)(this + 0x20));
  pCVar7 = CWnd::FromHandle(pHVar6);
  local_30 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBaseTabbedPane_101eb880,(CObject *)pCVar7);
  if (local_30 == (CObject *)0x0) {
    local_34 = (CWnd *)0x0;
  }
  else {
    pcVar8 = *(code **)(*(int *)local_30 + 0x228);
    guard_check_icall(0);
    local_34 = (CWnd *)(*pcVar8)();
    pcVar8 = *(code **)(*(int *)local_30 + 0x1cc);
    guard_check_icall();
    iVar3 = (*pcVar8)();
    if (iVar3 == 0) {
      pcVar8 = *(code **)(*(int *)this + 0x1a4);
      guard_check_icall();
      iVar3 = (*pcVar8)();
      if (iVar3 == 1) goto LAB_1009ffc7;
    }
    pCVar4 = local_2c;
    iVar3 = FUN_10051e53(&PTR_s_CDockablePane_1023db9c);
    if (iVar3 != 0) {
      pcVar8 = *(code **)(*(int *)pCVar4 + 0x1f0);
      guard_check_icall(1);
      (*pcVar8)();
      pCVar4 = local_2c;
    }
    if (((param_3 == 0) && ((local_38 & 2) != 0)) && (param_1 == 1)) {
      param_3 = 1;
    }
    if (local_3c != *(CPaneFrameWnd **)(this + 0xc0)) {
      CWnd::ShowWindow((CWnd *)pCVar4,5);
    }
    pcVar8 = *(code **)(*(int *)local_30 + 0x3b8);
    pCVar2 = local_3c;
    AVar10 = param_1;
    guard_check_icall(pCVar4,local_3c,param_1,param_3);
    (*pcVar8)();
    pcVar8 = *(code **)(*(int *)this + 0x1ac);
    guard_check_icall();
    iVar3 = (*pcVar8)();
    if (iVar3 == 0) {
      if (local_34 == (CWnd *)0x0) {
        pcVar8 = *(code **)(*(int *)local_30 + 0x3b0);
        guard_check_icall(pCVar4,pCVar2,AVar10,param_3);
        iVar3 = (*pcVar8)();
        if (iVar3 == 0) {
          CWnd::ShowWindow((CWnd *)this,0);
        }
        else {
          pcVar8 = *(code **)(*(int *)local_30 + 0x60);
          guard_check_icall();
          (*pcVar8)();
        }
      }
      else {
        pcVar8 = *(code **)(*(int *)local_34 + 0x17c);
        guard_check_icall(local_30,1,0);
LAB_1009fd69:
        (*pcVar8)();
      }
    }
    else {
      pcVar8 = *(code **)(*(int *)this + 0x1a4);
      guard_check_icall(pCVar4,pCVar2,AVar10,param_3);
      iVar3 = (*pcVar8)();
      if (iVar3 == 0) {
        pcVar8 = *(code **)(*(int *)local_30 + 0x224);
        guard_check_icall(0,0,0);
        goto LAB_1009fd69;
      }
    }
    pcVar8 = *(code **)(*(int *)this + 0x184);
    guard_check_icall();
    (*pcVar8)();
  }
  uVar11 = 0;
  pcVar8 = *(code **)(*(int *)local_2c + 0x228);
  guard_check_icall(0);
  pCVar7 = (CWnd *)(*pcVar8)();
  local_44.y = local_38 & 2;
  local_3c = (CPaneFrameWnd *)pCVar7;
  if (((local_44.y != 0) && (param_1 == 1)) && (pCVar7 != (CWnd *)0x0)) {
    ReleaseCapture();
    CWnd::SetFocus(pCVar7);
    pHVar6 = GetParent(*(HWND *)(this + 0x20));
    pCVar7 = CWnd::FromHandle(pHVar6);
    SendMessageW(*(HWND *)(pCVar7 + 0x20),0x363,0,0);
  }
  *(undefined4 *)(this + 0x158) = 0;
  pcVar8 = *(code **)(*(int *)this + 0x1ac);
  guard_check_icall(uVar11);
  iVar3 = (*pcVar8)();
  if ((iVar3 == 1) && (*(int *)(this + 300) != 0)) {
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    GetWindowRect(*(HWND *)(local_30 + 0x20),&local_18);
    pcVar8 = *(code **)(*(int *)this + 0x1b0);
    guard_check_icall(0);
    pCVar4 = (CObject *)(*pcVar8)();
    local_2c = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_1023db9c,pCVar4);
    pCVar4 = local_30;
    CBasePane::InsertPane((CBasePane *)local_30,(CBasePane *)local_2c,(CBasePane *)local_30,1);
    pCVar1 = local_2c;
    CDockablePane::ReplacePane((CDockablePane *)pCVar4,(CDockablePane *)local_2c,param_1,0);
    iVar3 = *(int *)pCVar1;
    pcVar8 = *(code **)(*(int *)pCVar4 + 0x194);
    guard_check_icall();
    uVar9 = (*pcVar8)();
    pcVar8 = *(code **)(iVar3 + 0x1e0);
    guard_check_icall(uVar9);
    (*pcVar8)();
    uVar11 = 1;
    uVar9 = 0;
    pcVar8 = *(code **)(*(int *)this + 0x198);
    guard_check_icall(0,1);
    (*pcVar8)();
    pCVar4 = local_30;
    if (local_34 == (CWnd *)0x0) {
      pcVar8 = *(code **)(*(int *)local_30 + 0x19c);
      guard_check_icall(uVar9,uVar11);
      local_34 = (CWnd *)(*pcVar8)();
    }
    pcVar8 = *(code **)(*(int *)local_2c + 0x1f0);
    guard_check_icall(1);
    (*pcVar8)();
    pCVar7 = local_34;
    CWnd::ScreenToClient(local_34,&local_18);
    pCVar1 = local_2c;
    CWnd::SetParent((CWnd *)local_2c,pCVar7);
    pcVar8 = *(code **)(*(int *)pCVar1 + 0x238);
    guard_check_icall(0,local_18.left,local_18.top,local_18.right - local_18.left,
                      local_18.bottom - local_18.top,0x94,0);
    (*pcVar8)();
    pcVar8 = *(code **)(*(int *)local_2c + 0x224);
    guard_check_icall(1,0,0);
    (*pcVar8)();
    CWnd::ShowWindow((CWnd *)pCVar4,0);
    pCVar1 = local_2c;
    pHVar6 = GetParent(*(HWND *)(local_2c + 0x20));
    pCVar7 = CWnd::FromHandle(pHVar6);
    InvalidateRect(*(HWND *)(pCVar7 + 0x20),(RECT *)0x0,1);
    pHVar6 = GetParent(*(HWND *)(pCVar1 + 0x20));
    pCVar7 = CWnd::FromHandle(pHVar6);
    UpdateWindow(*(HWND *)(pCVar7 + 0x20));
    uVar9 = *(undefined4 *)(pCVar4 + 0x20);
  }
  pCVar2 = local_3c;
  if ((param_1 == 1) && (local_3c != (CPaneFrameWnd *)0x0)) {
    if (local_44.y == 0) {
      if ((local_38 & 1) != 0) {
        CWnd::SetFocus((CWnd *)local_3c);
      }
    }
    else {
      pcVar8 = *(code **)(*(int *)local_3c + 0x210);
      guard_check_icall(uVar9);
      (*pcVar8)();
      CPaneFrameWnd::MoveDragFrame(pCVar2);
    }
  }
LAB_1009ffc7:
  iVar3 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar3;
}

