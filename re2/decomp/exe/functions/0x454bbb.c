// rea decompile_all
// name: CMFCToolBar::OnChangeHot
// address: 0x454bbb
// body: available
// range: 0x454bbb-0x454ea0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCToolBar::OnChangeHot(int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCToolBar::OnChangeHot(CMFCToolBar *this,int param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  byte bVar3;
  CMFCToolBarMenuButton *pCVar4;
  CObject *pCVar5;
  AFX_GLOBAL_DATA *pAVar6;
  HWND pHVar7;
  CWnd *pCVar8;
  int iVar9;
  ANIMATION_TYPE AVar10;
  
  if ((*(int *)(this + 0xbf8) == param_1) && (-1 < *(int *)(this + 0xbf8))) {
    param_1 = -1;
  }
  *(int *)(this + 0xbf8) = param_1;
  pCVar4 = GetDroppedDownMenu(this,(int *)0x0);
  if (pCVar4 == (CMFCToolBarMenuButton *)0x0) {
    if (DAT_00614ed8 == 0) {
      pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCMenuBar_0060c730,(CObject *)this);
      if (pCVar5 == (CObject *)0x0) {
        return;
      }
      pAVar6 = GetGlobalData();
      if (*(int *)(pAVar6 + 0x19c) == 0) {
        return;
      }
      pHVar7 = GetFocus();
      pCVar8 = CWnd::FromHandle(pHVar7);
      if (pCVar8 != (CWnd *)this) {
        return;
      }
      iVar9 = AccGetChildIdByButtonIndex(this,*(int *)(this + 0xbf8));
      if (iVar9 < 1) {
        return;
      }
      NotifyWinEvent(0x8005,*(HWND *)(this + 0x20),-4,iVar9);
      return;
    }
  }
  else {
    pcVar2 = *(code **)(*(int *)pCVar4 + 0xec);
    guard_check_icall();
    iVar9 = (*pcVar2)();
    if (iVar9 != 0) {
      return;
    }
  }
  if ((param_1 < 0) || (*(int *)(this + 0xc48) <= param_1)) {
    *(undefined4 *)(this + 0xbf8) = 0xffffffff;
    if (pCVar4 == (CMFCToolBarMenuButton *)0x0) {
      return;
    }
    if (DAT_00614ed8 == 0) {
      return;
    }
    if (DAT_00614edc != 0) {
      return;
    }
    pcVar2 = *(code **)(*(int *)pCVar4 + 0x58);
    guard_check_icall();
    (*pcVar2)();
    return;
  }
  pCVar5 = (CObject *)FUN_00452f94(param_1);
  pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBarMenuButton_0060c6d0,pCVar5);
  if (pCVar5 == (CObject *)pCVar4) {
    if (DAT_00614ed8 == 0) goto LAB_00454dd6;
    if (pCVar4 != (CMFCToolBarMenuButton *)0x0) {
      pcVar2 = *(code **)(*(int *)pCVar4 + 0x70);
      guard_check_icall();
      iVar9 = (*pcVar2)();
      if (iVar9 != 0) {
        pcVar2 = *(code **)(*(int *)pCVar4 + 0x58);
        guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  else {
    bVar3 = 0;
    AVar10 = CMFCPopupMenu::GetAnimationType(0);
    if (pCVar4 != (CMFCToolBarMenuButton *)0x0) {
      uVar1 = *(undefined4 *)(this + 0xbf0);
      if (DAT_00614ed8 == 0) {
        *(undefined4 *)(this + 0xbf0) = 0xffffffff;
      }
      pcVar2 = *(code **)(*(int *)pCVar4 + 0x58);
      guard_check_icall();
      (*pcVar2)();
      *(undefined4 *)(this + 0xbf0) = uVar1;
      bVar3 = 1;
    }
    if ((pCVar5 != (CObject *)0x0) &&
       ((DAT_00614ed8 == 0 ||
        (iVar9 = FUN_0043970d(&PTR_s_CMFCToolBarSystemMenuButton_0060c958), iVar9 == 0)))) {
      DAT_00616b28 = DAT_00616b28 & ~-(uint)bVar3;
      pcVar2 = *(code **)(*(int *)pCVar5 + 0x20);
      guard_check_icall(this,1);
      (*pcVar2)();
      DAT_00616b28 = AVar10;
    }
  }
  if ((DAT_00614ed8 != 0) && (*(int *)(this + 0xc00) < 0)) {
    *(undefined4 *)(this + 0xbf4) = *(undefined4 *)(this + 0xbf8);
    if (*(int *)(this + 0xbf0) != -1) {
      InvalidateButton(this,*(int *)(this + 0xbf0));
    }
    iVar9 = FUN_00452f94(*(undefined4 *)(this + 0xbf4));
    if (iVar9 == 0) {
      return;
    }
    if ((*(byte *)(iVar9 + 0x24) & 1) == 0) {
      InvalidateButton(this,*(int *)(this + 0xbf4));
    }
    else {
      *(undefined4 *)(this + 0xbf4) = 0xffffffff;
    }
  }
LAB_00454dd6:
  if ((-1 < *(int *)(this + 0xbf8)) && (*(int *)(this + 0xbf8) != *(int *)(this + 0xbf0))) {
    pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCMenuBar_0060c730,(CObject *)this);
    if ((pCVar5 != (CObject *)0x0) &&
       (((pAVar6 = GetGlobalData(), *(int *)(pAVar6 + 0x19c) != 0 && (*(int *)(this + 0xbf0) == -1))
        && (iVar9 = AccGetChildIdByButtonIndex(this,*(int *)(this + 0xbf8)), 0 < iVar9)))) {
      NotifyWinEvent(0x8005,*(HWND *)(this + 0x20),-4,iVar9);
    }
    if (-1 < *(int *)(this + 0xbf0)) {
      InvalidateButton(this,*(int *)(this + 0xbf0));
    }
    *(int *)(this + 0xbf0) = *(int *)(this + 0xbf8);
    InvalidateButton(this,*(int *)(this + 0xbf8));
    UpdateWindow(*(HWND *)(this + 0x20));
  }
  return;
}

