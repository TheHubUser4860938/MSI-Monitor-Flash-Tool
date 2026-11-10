// rea decompile_all
// name: CMFCToolBarMenuButton::OnClick
// address: 0x101123ac
// body: available
// range: 0x101123ac-0x101125d8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMFCToolBarMenuButton::OnClick(class CWnd *,int)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCToolBarMenuButton::OnClick(CMFCToolBarMenuButton *this,CWnd *param_1,int param_2)

{
  code *pcVar1;
  POINT pt;
  POINT pt_00;
  BOOL BVar2;
  CObject *this_00;
  CObject *this_01;
  CMFCVisualManager *pCVar3;
  int iVar4;
  CMFCToolBarButton *pCVar5;
  undefined1 local_18 [12];
  CObject *local_c;
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  *(undefined4 *)(this + 0x9c) = 0;
  if (((*(int *)(this + 0x90) != 0) && (param_2 == 0)) && (*(int *)(this + 0x94) == 0)) {
    if ((*(int *)(this + 0x20) == 0) || (*(int *)(this + 0x20) == -1)) {
      *(undefined4 *)(this + 0x9c) = 1;
    }
    else {
      local_18._8_4_ = 0;
      local_c = (CObject *)0x0;
      GetCursorPos((LPPOINT)(local_18 + 8));
      ScreenToClient(*(HWND *)(param_1 + 0x20),(LPPOINT)(local_18 + 8));
      pt.y = (LONG)local_c;
      pt.x = local_18._8_4_;
      BVar2 = PtInRect((RECT *)(this + 200),pt);
      *(BOOL *)(this + 0x9c) = BVar2;
      if (BVar2 == 0) goto LAB_101125c6;
    }
  }
  pcVar1 = *(code **)(*(int *)this + 0xf0);
  guard_check_icall();
  iVar4 = (*pcVar1)();
  if ((iVar4 != 0) && (param_2 == 0)) {
    local_18._8_4_ = 0;
    local_c = (CObject *)0x0;
    GetCursorPos((LPPOINT)(local_18 + 8));
    ScreenToClient(*(HWND *)(param_1 + 0x20),(LPPOINT)(local_18 + 8));
    pt_00.y = (LONG)local_c;
    pt_00.x = local_18._8_4_;
    BVar2 = PtInRect((RECT *)(this + 0xd8),pt_00);
    if (BVar2 != 0) goto LAB_101125c6;
  }
  if ((((*(int *)(this + 0x9c) == 0) && (*(int *)(this + 0x20) != 0)) &&
      (*(int *)(this + 0x20) != -1)) &&
     ((*(int *)(this + 0x90) == 0 && (*(int *)(this + 0xa8) == 0)))) goto LAB_101125c6;
  this_00 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCMenuBar_10205f48,
                               *(CObject **)(this + 0x6c));
  local_c = this_00;
  if (*(int *)(this + 0x8c) == 0) {
    this_01 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCPopupMenuBar_10205d98,
                                 *(CObject **)(this + 0x6c));
    if (((param_2 == 0) || (this_01 == (CObject *)0x0)) || (DAT_1020e500 != 0)) {
      if ((this_00 != (CObject *)0x0) &&
         (local_c = (CObject *)CMFCToolBar::GetDroppedDownMenu((CMFCToolBar *)this_00,(int *)0x0),
         local_c != (CObject *)0x0)) {
        pcVar1 = *(code **)(*(int *)local_c + 0x58);
        guard_check_icall();
        (*pcVar1)();
      }
      pcVar1 = *(code **)(*(int *)this + 0xcc);
      guard_check_icall(param_1);
      iVar4 = (*pcVar1)();
      if (iVar4 == 0) goto LAB_101125c6;
    }
    else {
      CMFCPopupMenuBar::StartPopupMenuTimer((CMFCPopupMenuBar *)this_01,this,1);
    }
    pCVar5 = (CMFCToolBarButton *)this;
    if (this_00 != (CObject *)0x0) goto LAB_10112582;
  }
  else {
    *(undefined4 *)(*(int *)(this + 0x8c) + 0x130) = 0;
    pcVar1 = *(code **)(**(int **)(this + 0x8c) + 0x60);
    guard_check_icall();
    (*pcVar1)();
    *(undefined4 *)(this + 0x8c) = 0;
    if (local_c != (CObject *)0x0) {
      this_00 = local_c;
      pCVar5 = (CMFCToolBarButton *)0x0;
LAB_10112582:
      CMFCToolBar::SetHot((CMFCToolBar *)this_00,pCVar5);
    }
  }
  if (*(int *)(this + 0x6c) != 0) {
    local_18._0_4_ = *(undefined4 *)(this + 0x54);
    local_18._4_4_ = *(undefined4 *)(this + 0x58);
    local_18._8_4_ = *(undefined4 *)(this + 0x5c);
    local_c = *(CObject **)(this + 0x60);
    pCVar3 = CMFCVisualManager::GetInstance();
    InflateRect((LPRECT)local_18,*(int *)(pCVar3 + 0x7c),*(int *)(pCVar3 + 0x7c));
    RedrawWindow(*(HWND *)(*(int *)(this + 0x6c) + 0x20),(RECT *)local_18,(HRGN)0x0,0x401);
  }
LAB_101125c6:
  iVar4 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar4;
}

