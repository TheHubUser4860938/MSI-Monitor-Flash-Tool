// rea decompile_all
// name: CMFCToolBar::OnChangeHot
// address: 0x10097e23
// body: available
// range: 0x10097e23-0x10098108 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
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
    if (DAT_10245ca8 == 0) {
      pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCMenuBar_1023dad8,(CObject *)this);
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
    if (DAT_10245ca8 == 0) {
      return;
    }
    if (DAT_10245cac != 0) {
      return;
    }
    pcVar2 = *(code **)(*(int *)pCVar4 + 0x58);
    guard_check_icall();
    (*pcVar2)();
    return;
  }
  pCVar5 = (CObject *)FUN_1009640a(param_1);
  pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBarMenuButton_1023d9fc,pCVar5);
  if (pCVar5 == (CObject *)pCVar4) {
    if (DAT_10245ca8 == 0) goto LAB_1009803e;
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
      if (DAT_10245ca8 == 0) {
        *(undefined4 *)(this + 0xbf0) = 0xffffffff;
      }
      pcVar2 = *(code **)(*(int *)pCVar4 + 0x58);
      guard_check_icall();
      (*pcVar2)();
      *(undefined4 *)(this + 0xbf0) = uVar1;
      bVar3 = 1;
    }
    if ((pCVar5 != (CObject *)0x0) &&
       ((DAT_10245ca8 == 0 ||
        (iVar9 = FUN_10051e53(&PTR_s_CMFCToolBarSystemMenuButton_1023db10), iVar9 == 0)))) {
      DAT_102470ac = DAT_102470ac & ~-(uint)bVar3;
      pcVar2 = *(code **)(*(int *)pCVar5 + 0x20);
      guard_check_icall(this,1);
      (*pcVar2)();
      DAT_102470ac = AVar10;
    }
  }
  if ((DAT_10245ca8 != 0) && (*(int *)(this + 0xc00) < 0)) {
    *(undefined4 *)(this + 0xbf4) = *(undefined4 *)(this + 0xbf8);
    if (*(int *)(this + 0xbf0) != -1) {
      InvalidateButton(this,*(int *)(this + 0xbf0));
    }
    iVar9 = FUN_1009640a(*(undefined4 *)(this + 0xbf4));
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
LAB_1009803e:
  if ((-1 < *(int *)(this + 0xbf8)) && (*(int *)(this + 0xbf8) != *(int *)(this + 0xbf0))) {
    pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCMenuBar_1023dad8,(CObject *)this);
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

