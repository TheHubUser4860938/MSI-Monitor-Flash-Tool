// rea decompile_all
// name: CMFCPopupMenu::ShowAllCommands
// address: 0x1008e9aa
// body: available
// range: 0x1008e9aa-0x1008eab7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CMFCPopupMenu::ShowAllCommands(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCPopupMenu::ShowAllCommands(CMFCPopupMenu *this)

{
  code *pcVar1;
  CObject *pCVar2;
  CMFCToolBar *this_00;
  BOOL BVar3;
  
  pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBarMenuButton_10201a04,
                              *(CObject **)(this + 0x158));
  if (pCVar2 != (CObject *)0x0) {
    pcVar1 = *(code **)(*(int *)this + 0x1c8);
    guard_check_icall();
    this_00 = (CMFCToolBar *)(*pcVar1)();
    CMFCToolBar::SetHot(this_00,(CMFCToolBarButton *)0x0);
    CMFCMenuBar::SetShowAllCommands(1);
    FUN_100f84b9(2);
    CWnd::ShowWindow((CWnd *)this,0);
    *(undefined4 *)(this + 0xf48) = 0;
    if (((CGdiObject *)(this + 0x1060) != (CGdiObject *)0x0) && (*(int *)(this + 0x1064) != 0)) {
      CGdiObject::DeleteObject((CGdiObject *)(this + 0x1060));
    }
    if (((CGdiObject *)(this + 0x1068) != (CGdiObject *)0x0) && (*(int *)(this + 0x106c) != 0)) {
      CGdiObject::DeleteObject((CGdiObject *)(this + 0x1068));
    }
    *(undefined4 *)(this + 0x138) = *(undefined4 *)(this + 0x140);
    *(undefined4 *)(this + 0x13c) = *(undefined4 *)(this + 0x144);
    pcVar1 = *(code **)(*(int *)this + 500);
    guard_check_icall();
    (*pcVar1)();
    if (*(int *)(this + 0xf7c) != 0) {
      AdjustScroll(this,0);
      SetScrollBar(this);
    }
    UpdateBottomWindows(this,0);
    CWnd::ShowWindow((CWnd *)this,4);
    if (*(int *)(pCVar2 + 0x6c) != 0) {
      BVar3 = IsWindow(*(HWND *)(*(int *)(pCVar2 + 0x6c) + 0x20));
      if (BVar3 != 0) {
        InvalidateRect(*(HWND *)(*(int *)(pCVar2 + 0x6c) + 0x20),(RECT *)(pCVar2 + 0x54),1);
        UpdateWindow(*(HWND *)(*(int *)(pCVar2 + 0x6c) + 0x20));
      }
    }
  }
  return;
}

