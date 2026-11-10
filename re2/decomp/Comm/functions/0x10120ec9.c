// rea decompile_all
// name: CMFCRibbonPanelMenuBar::OnUpdateCmdUI
// address: 0x10120ec9
// body: available
// range: 0x10120ec9-0x10120f79 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCRibbonPanelMenuBar::OnUpdateCmdUI(class CFrameWnd *,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCRibbonPanelMenuBar::OnUpdateCmdUI(CMFCRibbonPanelMenuBar *this,CFrameWnd *param_1,int param_2)

{
  CMFCRibbonBaseElement *pCVar1;
  code *pcVar2;
  CObject *pCVar3;
  CMFCRibbonCmdUI local_30 [20];
  CMFCRibbonPanelMenuBar *local_1c;
  
  CMFCRibbonCmdUI::CMFCRibbonCmdUI(local_30);
  if (*(int **)(this + 0xeb4) == (int *)0x0) {
    pcVar2 = *(code **)(**(int **)(this + 0xea4) + 0xf8);
  }
  else {
    pcVar2 = *(code **)(**(int **)(this + 0xeb4) + 200);
  }
  local_1c = this;
  guard_check_icall(local_30,param_1,param_2);
  (*pcVar2)();
  CWnd::UpdateDialogControls((CWnd *)this,(CCmdTarget *)param_1,param_2);
  if (param_2 == 0) {
    return;
  }
  if (*(int *)(this + 0xdf0) == 0) {
    return;
  }
  if (*(CMFCRibbonPanel **)(this + 0xea4) == (CMFCRibbonPanel *)0x0) {
    pCVar3 = *(CObject **)(this + 0xeb4);
    if (pCVar3 == (CObject *)0x0) goto LAB_10120f65;
  }
  else {
    pCVar1 = CMFCRibbonPanel::GetDroppedDown(*(CMFCRibbonPanel **)(this + 0xea4));
    if (pCVar1 != (CMFCRibbonBaseElement *)0x0) goto LAB_10120f65;
    pCVar3 = *(CObject **)(this + 0xea4);
  }
  CMFCRibbonBar::SetKeyboardNavigationLevel(*(CMFCRibbonBar **)(this + 0xea0),pCVar3,0);
LAB_10120f65:
  *(undefined4 *)(this + 0xdf0) = 0;
  CMFCPopupMenu::UpdateAllShadows((tagRECT *)0x0);
  return;
}

