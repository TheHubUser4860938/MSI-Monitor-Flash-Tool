// rea decompile_all
// name: OnCreate
// address: 0x1006c7e0
// body: available
// range: 0x1006c7e0-0x1006c95c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    protected: int __thiscall CMFCToolBar::OnCreate(struct tagCREATESTRUCTA *)
    protected: int __thiscall CMFCToolBar::OnCreate(struct tagCREATESTRUCTW *)
   
   Library: Visual Studio 2015 Release */

undefined4 OnCreate(void)

{
  code *pcVar1;
  int iVar2;
  AFX_GLOBAL_DATA *pAVar3;
  AFX_MODULE_STATE *pAVar4;
  HCURSOR pHVar5;
  CFrameWnd *pCVar6;
  CWnd *this;
  ulong uVar7;
  _AFX_THREAD_STATE *p_Var8;
  HPEN pHVar9;
  CMFCVisualManager *pCVar10;
  CMFCToolBar *in_ECX;
  
  iVar2 = FUN_100283ad();
  if (iVar2 != -1) {
    pAVar3 = GetGlobalData();
    if (*(int *)(pAVar3 + 0xf0) == 0) {
      AfxGetModuleState();
      pAVar4 = AfxGetModuleState();
      pHVar5 = LoadCursorW(*(HINSTANCE *)(pAVar4 + 0xc),(LPCWSTR)0x7904);
      pAVar3 = GetGlobalData();
      *(HCURSOR *)(pAVar3 + 0xf0) = pHVar5;
    }
    pAVar3 = GetGlobalData();
    if (*(int *)(pAVar3 + 0xf4) == 0) {
      AfxGetModuleState();
      pAVar4 = AfxGetModuleState();
      pHVar5 = LoadCursorW(*(HINSTANCE *)(pAVar4 + 0xc),(LPCWSTR)0x7905);
      pAVar3 = GetGlobalData();
      *(HCURSOR *)(pAVar3 + 0xf4) = pHVar5;
    }
    pAVar3 = GetGlobalData();
    if (*(int *)(pAVar3 + 0xfc) == 0) {
      AfxGetModuleState();
      pHVar5 = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f86);
      pAVar3 = GetGlobalData();
      *(HCURSOR *)(pAVar3 + 0xfc) = pHVar5;
    }
    pCVar6 = AFXGetParentFrame((CWnd *)in_ECX);
    if ((pCVar6 != (CFrameWnd *)0x0) &&
       ((pCVar6 = AFXGetParentFrame((CWnd *)in_ECX), this = DAT_1020b224,
        DAT_1020b224 != (CWnd *)0x0 ||
        (this = (CWnd *)CWnd::GetTopLevelFrame((CWnd *)pCVar6), this != (CWnd *)0x0)))) {
      uVar7 = CWnd::GetExStyle(this);
      CMFCToolBarImages::EnableRTL(uVar7 & 0x400000);
    }
    if ((*(int *)(in_ECX + 0xb9c) == 0) &&
       (p_Var8 = AfxGetThreadState(), *(int *)(p_Var8 + 0x160) != 0)) {
      CMFCToolBarDropTarget::Register((CMFCToolBarDropTarget *)(in_ECX + 0xc90),in_ECX);
    }
    pAVar3 = GetGlobalData();
    pHVar9 = CreatePen(0,1,*(COLORREF *)(pAVar3 + 0x28));
    CMenu::Attach((CMenu *)(in_ECX + 0xcec),(HMENU__ *)pHVar9);
    CTooltipManager::CreateToolTip((CToolTipCtrl **)(in_ECX + 0xd08),(CWnd *)in_ECX,2);
    pCVar10 = CMFCVisualManager::GetInstance();
    pcVar1 = *(code **)(*(int *)pCVar10 + 0xbc);
    guard_check_icall();
    iVar2 = (*pcVar1)();
    *(int *)(in_ECX + 0xbd8) = iVar2;
    if (iVar2 == 0) {
      SetWindowRgn(*(HWND *)(in_ECX + 0x20),(HRGN)0x0,0);
    }
    else {
      CMFCToolBar::SetRoundedRgn(in_ECX);
    }
    CObList::AddTail((CObList *)&DAT_10209d50,(CObject *)in_ECX);
    return 0;
  }
  return 0xffffffff;
}

