// rea decompile_all
// name: CMFCRibbonBar::ShowSysMenu
// address: 0x101282c4
// body: available
// range: 0x101282c4-0x10128486 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCRibbonBar::ShowSysMenu(class CPoint const &)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCRibbonBar::ShowSysMenu(CMFCRibbonBar *this,CPoint *param_1)

{
  int iVar1;
  HWND pHVar2;
  CWnd *pCVar3;
  HMENU pHVar4;
  CMenu *pCVar5;
  BOOL BVar6;
  ulong uVar7;
  UINT uIDEnableItem;
  
  pHVar2 = GetParent(*(HWND *)(this + 0x20));
  pCVar3 = CWnd::FromHandle(pHVar2);
  if ((pCVar3 != (CWnd *)0x0) && (*(int *)(pCVar3 + 0x20) != 0)) {
    pHVar4 = GetSystemMenu(*(HWND *)(pCVar3 + 0x20),0);
    pCVar5 = CMenu::FromHandle(pHVar4);
    if ((pCVar5 != (CMenu *)0x0) && (*(int *)(pCVar5 + 4) != 0)) {
      SetMenuDefaultItem(*(HMENU *)(pCVar5 + 4),0xf060,0);
      pHVar2 = GetParent(*(HWND *)(this + 0x20));
      pCVar3 = CWnd::FromHandle(pHVar2);
      BVar6 = IsZoomed(*(HWND *)(pCVar3 + 0x20));
      if (BVar6 == 0) {
        EnableMenuItem(*(HMENU *)(pCVar5 + 4),0xf120,3);
        EnableMenuItem(*(HMENU *)(pCVar5 + 4),0xf000,0);
        EnableMenuItem(*(HMENU *)(pCVar5 + 4),0xf010,0);
        uIDEnableItem = 0xf030;
      }
      else {
        EnableMenuItem(*(HMENU *)(pCVar5 + 4),0xf000,3);
        EnableMenuItem(*(HMENU *)(pCVar5 + 4),0xf010,3);
        EnableMenuItem(*(HMENU *)(pCVar5 + 4),0xf030,3);
        uIDEnableItem = 0xf120;
      }
      EnableMenuItem(*(HMENU *)(pCVar5 + 4),uIDEnableItem,0);
      pHVar2 = GetParent(*(HWND *)(this + 0x20));
      pCVar3 = CWnd::FromHandle(pHVar2);
      uVar7 = CWnd::GetExStyle(pCVar3);
      if ((uVar7 & 0x10000) == 0) {
        DeleteMenu(*(HMENU *)(pCVar5 + 4),0xf120,0);
        DeleteMenu(*(HMENU *)(pCVar5 + 4),0xf030,0);
      }
      pHVar2 = GetParent(*(HWND *)(this + 0x20));
      pCVar3 = CWnd::FromHandle(pHVar2);
      uVar7 = CWnd::GetExStyle(pCVar3);
      if ((uVar7 & 0x20000) == 0) {
        DeleteMenu(*(HMENU *)(pCVar5 + 4),0xf020,0);
      }
      if (DAT_1020b26c == (int *)0x0) {
        pCVar3 = CWnd::GetOwner((CWnd *)this);
        pHVar2 = (HWND)0x0;
        if (pCVar3 != (CWnd *)0x0) {
          pHVar2 = *(HWND *)(pCVar3 + 0x20);
        }
        TrackPopupMenu(*(HMENU *)(pCVar5 + 4),4,*(int *)param_1,*(int *)(param_1 + 4),0,pHVar2,
                       (RECT *)0x0);
      }
      else {
        pHVar2 = GetParent(*(HWND *)(this + 0x20));
        pCVar3 = CWnd::FromHandle(pHVar2);
        iVar1 = *DAT_1020b26c;
        guard_check_icall(*(undefined4 *)(pCVar5 + 4),*(undefined4 *)param_1,
                          *(undefined4 *)(param_1 + 4),pCVar3,1,1,0);
        (**(code **)(iVar1 + 0xc))();
      }
    }
  }
  return;
}

