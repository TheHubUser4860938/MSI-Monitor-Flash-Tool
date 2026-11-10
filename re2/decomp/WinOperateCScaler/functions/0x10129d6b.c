// rea decompile_all
// name: CMFCRibbonPanelMenuBar::~CMFCRibbonPanelMenuBar
// address: 0x10129d6b
// body: available
// range: 0x10129d6b-0x10129ef7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual __thiscall CMFCRibbonPanelMenuBar::~CMFCRibbonPanelMenuBar(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCRibbonPanelMenuBar::~CMFCRibbonPanelMenuBar(CMFCRibbonPanelMenuBar *this)

{
  CMFCRibbonBar *pCVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  CWnd *pCVar6;
  BOOL BVar7;
  tagRECT local_24;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_101a1566;
  local_10 = ExceptionList;
  uVar4 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined ***)this = vftable;
  local_14 = uVar4;
  if (*(int *)(this + 0xea4) != 0) {
    pCVar1 = *(CMFCRibbonBar **)(this + 0xea0);
    if ((pCVar1 != (CMFCRibbonBar *)0x0) && (*(int *)(pCVar1 + 0x848) == *(int *)(this + 0xea4))) {
      CMFCRibbonBar::DeactivateKeyboardFocus(pCVar1,0);
    }
    if (*(int **)(this + 0xea4) != (int *)0x0) {
      pcVar2 = *(code **)(**(int **)(this + 0xea4) + 4);
      guard_check_icall(1,uVar4);
      (*pcVar2)();
    }
  }
  if (*(int *)(this + 0xeb4) != 0) {
    pCVar1 = *(CMFCRibbonBar **)(this + 0xea0);
    if ((pCVar1 != (CMFCRibbonBar *)0x0) && (*(int *)(pCVar1 + 0x848) == *(int *)(this + 0xeb4))) {
      CMFCRibbonBar::DeactivateKeyboardFocus(pCVar1,0);
    }
    if (*(int **)(this + 0xeb4) != (int *)0x0) {
      pcVar2 = *(code **)(**(int **)(this + 0xeb4) + 4);
      guard_check_icall(1,uVar4);
      (*pcVar2)();
    }
    pCVar1 = *(CMFCRibbonBar **)(this + 0xea0);
    if ((pCVar1 != (CMFCRibbonBar *)0x0) && (iVar3 = *(int *)(pCVar1 + 0x7a8), iVar3 != 0)) {
      iVar5 = CMFCRibbonBar::IsQuickAccessToolbarOnTop(pCVar1);
      if (iVar5 == 0) {
        *(undefined4 *)(iVar3 + 0x170) = 0;
        *(undefined4 *)(iVar3 + 0x158) = 0;
        local_24.left = *(LONG *)(iVar3 + 0x104);
        local_24.top = *(LONG *)(iVar3 + 0x108);
        local_24.right = *(LONG *)(iVar3 + 0x10c);
        local_24.bottom = *(LONG *)(*(int *)(this + 0xea0) + 0xe28);
        InflateRect(&local_24,1,1);
        RedrawWindow(*(HWND *)(*(int *)(this + 0xea0) + 0x20),&local_24,(HRGN)0x0,0x105);
      }
    }
  }
  iVar3 = DAT_1020b0e4;
  if ((*(int *)(this + 0xdec) != 0) && (DAT_1020b0e4 != 0)) {
    pCVar6 = CWnd::FromHandlePermanent(*(HWND__ **)(DAT_1020b0e4 + 0x20));
    if (pCVar6 != (CWnd *)0x0) {
      BVar7 = IsWindowVisible(*(HWND *)(iVar3 + 0x20));
      if (BVar7 != 0) {
        CMFCPopupMenu::UpdateAllShadows((tagRECT *)0x0);
      }
    }
  }
  CScrollBar::~CScrollBar((CScrollBar *)(this + 0xe20));
  CMFCPopupMenuBar::~CMFCPopupMenuBar((CMFCPopupMenuBar *)this);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

