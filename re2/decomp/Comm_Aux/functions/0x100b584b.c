// rea decompile_all
// name: CMFCPopupMenu::DoPaint
// address: 0x100b584b
// body: available
// range: 0x100b584b-0x100b5dd1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: virtual void __thiscall CMFCPopupMenu::DoPaint(class CDC *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCPopupMenu::DoPaint(CMFCPopupMenu *this,CDC *param_1)

{
  int iVar1;
  CDC *pCVar2;
  ulong uVar3;
  CMFCPopupMenu *pCVar4;
  CMFCVisualManager *pCVar5;
  int iVar6;
  CObject *pCVar7;
  CObject *pCVar8;
  BOOL BVar9;
  undefined4 uVar10;
  code *pcVar11;
  CMFCPopupMenu *pCVar12;
  CClientDC local_7c [4];
  HDC local_78;
  CDrawingManager local_68 [4];
  CMFCVisualManager *local_64;
  CMFCPopupMenu *local_60;
  CDC *local_5c;
  CMFCVisualManager *local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  tagRECT local_44;
  tagRECT local_34;
  tagRECT local_24;
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x6c;
  local_8 = 0x100b5857;
  local_5c = param_1;
  local_24.left = 0;
  local_24.top = 0;
  local_24.right = 0;
  local_24.bottom = 0;
  local_60 = this;
  GetClientRect(*(HWND *)(this + 0x20),&local_24);
  if ((*(int *)(this + 0x105c) != 0) && (DAT_1020e500 == 0)) {
    uVar3 = CWnd::GetExStyle((CWnd *)this);
    iVar6 = *(int *)(this + 0x105c);
    local_58 = (CMFCVisualManager *)(uVar3 & 0x400000);
    if (local_58 == (CMFCVisualManager *)0x0) {
      local_24.right = local_24.right - iVar6;
    }
    else {
      local_24.left = local_24.left + iVar6;
    }
    local_24.bottom = local_24.bottom - iVar6;
    local_44.left = 0;
    local_44.top = 0;
    local_44.right = 0;
    local_44.bottom = 0;
    SetRectEmpty(&local_44);
    if ((*(int *)(this + 0x158) != 0) &&
       (pCVar4 = GetParentPopupMenu(this), pCVar4 == (CMFCPopupMenu *)0x0)) {
      iVar6 = *(int *)(this + 0x158);
      iVar1 = *(int *)(iVar6 + 0x6c);
      if ((iVar1 != 0) && (*(int *)(iVar1 + 0x20) != 0)) {
        local_44.left = *(LONG *)(iVar6 + 0x54);
        local_44.top = *(LONG *)(iVar6 + 0x58);
        local_44.right = *(int *)(iVar6 + 0x5c) + -1;
        local_44.bottom = *(int *)(iVar6 + 0x60) + -1;
        MapWindowPoints(*(HWND *)(iVar1 + 0x20),*(HWND *)(this + 0x20),(LPPOINT)&local_44,2);
      }
    }
    pCVar5 = CMFCVisualManager::GetInstance();
    pcVar11 = *(code **)(*(int *)pCVar5 + 0x2f0);
    guard_check_icall();
    iVar6 = (*pcVar11)();
    if ((((((iVar6 != 0) && (pCVar4 = GetParentPopupMenu(this), pCVar4 != (CMFCPopupMenu *)0x0)) &&
          (iVar6 = *(int *)(this + 0x158), iVar6 != 0)) &&
         ((*(int *)(iVar6 + 0xb4) != 0 && (*(int *)(pCVar4 + 0x1160) != 0)))) &&
        ((*(int *)(this + 0x1160) == 0 &&
         ((*(int *)(this + 0xf30) == 4 && (iVar1 = *(int *)(iVar6 + 0x6c), iVar1 != 0)))))) &&
       (*(int *)(iVar1 + 0x20) != 0)) {
      local_44.left = *(LONG *)(iVar6 + 0x54);
      local_44.top = *(LONG *)(iVar6 + 0x58);
      local_44.right = *(int *)(iVar6 + 0x5c);
      local_44.bottom = *(int *)(iVar6 + 0x60) + 2;
      MapWindowPoints(*(HWND *)(iVar1 + 0x20),*(HWND *)(this + 0x20),(LPPOINT)&local_44,2);
    }
    CClientDC::CClientDC(local_7c,(CWnd *)0x0);
    local_8 = 0;
    local_34.left = 0;
    local_34.top = 0;
    local_34.right = 0;
    local_34.bottom = 0;
    GetWindowRect(*(HWND *)(this + 0x20),&local_34);
    pCVar2 = local_5c;
    BitBlt(*(HDC *)(local_5c + 4),0,0,local_34.right - local_34.left,local_34.bottom - local_34.top,
           local_78,local_34.left,local_34.top,0xcc0020);
    if (local_58 != (CMFCVisualManager *)0x0) {
      CDrawingManager::CDrawingManager(local_68,pCVar2);
      local_48 = local_34.bottom - local_34.top;
      local_4c = local_34.right - local_34.left;
      local_54 = 0;
      local_50 = 0;
      local_8._0_1_ = 1;
      CDrawingManager::MirrorRect(local_68,0,0,local_4c,local_48,1);
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_100afd36();
    }
    pCVar5 = CMFCVisualManager::GetInstance();
    iVar6 = *(int *)pCVar5;
    guard_check_icall(local_5c,&local_24,&local_44,*(undefined4 *)(this + 0x105c),100,0x41,
                      this + 0x1068,this + 0x1060,local_58);
    (**(code **)(iVar6 + 0x40))();
    if (local_58 != (CMFCVisualManager *)0x0) {
      OffsetRect(&local_24,-*(int *)(this + 0x105c),0);
    }
    local_8 = 0xffffffff;
    CClientDC::~CClientDC(local_7c);
  }
  local_58 = CMFCVisualManager::GetInstance();
  pCVar4 = local_60;
  iVar6 = *(int *)local_58;
  guard_check_icall(local_5c,local_60,local_24.left,local_24.top,local_24.right,local_24.bottom);
  (**(code **)(iVar6 + 0x3c))();
  pcVar11 = *(code **)(*(int *)pCVar4 + 0x20c);
  guard_check_icall();
  local_58 = (CMFCVisualManager *)(*pcVar11)();
  InflateRect(&local_24,-(int)local_58,-(int)local_58);
  iVar6 = *(int *)(pCVar4 + 0xf58);
  if (iVar6 < 1) goto LAB_100b5bdd;
  iVar1 = *(int *)(pCVar4 + 0xf60);
  local_54 = local_24.left;
  local_50 = local_24.top;
  local_4c = local_24.right;
  local_48 = local_24.bottom;
  if (iVar1 == 0) {
    local_4c = (int)local_58 + iVar6 + local_24.left;
  }
  else if (iVar1 == 1) {
    local_54 = (local_24.right - iVar6) - (int)local_58;
  }
  else if (iVar1 == 2) {
    local_48 = local_24.top + iVar6 + (int)local_58;
  }
  else if (iVar1 == 3) {
    local_50 = (local_24.bottom - iVar6) - (int)local_58;
  }
  pCVar7 = DAT_1020fa34;
  if (DAT_1020fa34 == (CObject *)0x0) {
    pCVar7 = (CObject *)CWnd::GetTopLevelFrame((CWnd *)pCVar4);
  }
  pCVar8 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWndEx_101c56b8,pCVar7);
  if (pCVar8 == (CObject *)0x0) {
    pCVar8 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CFrameWndEx_101c5128,pCVar7);
    if (pCVar8 == (CObject *)0x0) {
      pCVar8 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_COleIPFrameWndEx_101c5cc8,pCVar7);
      if ((pCVar8 == (CObject *)0x0) &&
         (pCVar8 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_COleDocIPFrameWndEx_101c6080,pCVar7),
         pCVar8 == (CObject *)0x0)) goto LAB_100b5bdd;
      goto LAB_100b5bc2;
    }
    pcVar11 = *(code **)(*(int *)pCVar8 + 0x1e8);
  }
  else {
LAB_100b5bc2:
    pcVar11 = *(code **)(*(int *)pCVar8 + 0x204);
  }
  guard_check_icall(local_5c,pCVar4,&local_54);
  (*pcVar11)();
LAB_100b5bdd:
  BVar9 = IsRectEmpty((RECT *)(pCVar4 + 0x107c));
  if (BVar9 == 0) {
    local_64 = CMFCVisualManager::GetInstance();
    iVar6 = *(int *)local_64;
    guard_check_icall(local_5c,((RECT *)(pCVar4 + 0x107c))->left,*(undefined4 *)(pCVar4 + 0x1080),
                      *(undefined4 *)(pCVar4 + 0x1084),*(undefined4 *)(pCVar4 + 0x1088),
                      *(int *)(local_60 + 0x1078));
    (**(code **)(iVar6 + 0x78))();
    pCVar4 = local_60;
  }
  if (*(int *)(pCVar4 + 0xf7c) != 0) {
    pcVar11 = *(code **)(*(int *)pCVar4 + 0x1e4);
    guard_check_icall();
    iVar6 = (*pcVar11)();
    if (iVar6 != 0) {
      pCVar5 = CMFCVisualManager::GetInstance();
      pcVar11 = *(code **)(*(int *)pCVar5 + 0x80);
      guard_check_icall(local_5c,*(int *)(local_60 + 0xf84),*(int *)(local_60 + 0xf88),
                        *(int *)(local_60 + 0xf8c),*(int *)(local_60 + 0xf90),0,
                        *(uint *)(local_60 + 0xfa4) >> 0x1f,0,0);
      (*pcVar11)();
      pCVar4 = local_60;
    }
    pcVar11 = *(code **)(*(int *)pCVar4 + 0x1e8);
    guard_check_icall();
    iVar6 = (*pcVar11)();
    if (iVar6 != 0) {
      pcVar11 = *(code **)(*(int *)pCVar4 + 0x1c8);
      guard_check_icall();
      iVar6 = (*pcVar11)();
      pCVar12 = local_60;
      if (iVar6 != 0) {
        local_34.bottom = *(LONG *)(pCVar4 + 0xf98);
        local_34.left = local_24.left;
        local_34.right = local_24.right;
        local_34.top = (local_34.bottom - (int)local_58) + -1;
        local_64 = CMFCVisualManager::GetInstance();
        pCVar12 = local_60;
        iVar6 = *(int *)local_64;
        pcVar11 = *(code **)(*(int *)local_60 + 0x1c8);
        guard_check_icall(local_34.left,local_34.top,local_34.right,local_34.bottom,local_34.left,
                          local_34.top,local_34.right,local_34.bottom,0);
        uVar10 = (*pcVar11)();
        guard_check_icall(local_5c,uVar10);
        (**(code **)(iVar6 + 0x34))();
      }
      pCVar5 = CMFCVisualManager::GetInstance();
      pcVar11 = *(code **)(*(int *)pCVar5 + 0x80);
      guard_check_icall(local_5c,*(int *)(pCVar12 + 0xf94),*(int *)(pCVar12 + 0xf98),
                        *(int *)(pCVar12 + 0xf9c),*(int *)(pCVar12 + 4000),1,
                        0 < *(int *)(pCVar12 + 0xfa4),0,0);
      (*pcVar11)();
      pCVar4 = local_60;
    }
  }
  BVar9 = IsRectEmpty((RECT *)(pCVar4 + 0x1150));
  if (BVar9 == 0) {
    if (*(int *)(pCVar4 + 0x1138) == 0) {
      local_58 = (CMFCVisualManager *)(uint)(0 < *(int *)(pCVar4 + 0x1140));
    }
    else {
      local_58 = (CMFCVisualManager *)((0 < *(int *)(pCVar4 + 0x1140)) + 2);
    }
    local_64 = CMFCVisualManager::GetInstance();
    iVar6 = *(int *)local_64;
    guard_check_icall(local_5c,((RECT *)(pCVar4 + 0x1150))->left,*(int *)(pCVar4 + 0x1154),
                      *(int *)(pCVar4 + 0x1158),*(int *)(pCVar4 + 0x115c),local_58);
    (**(code **)(iVar6 + 0x7c))();
    pCVar4 = local_60;
  }
  *(int *)(pCVar4 + 0xf48) = 1;
  FUN_1017f5f4();
  return;
}

