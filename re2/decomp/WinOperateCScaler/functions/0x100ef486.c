// rea decompile_all
// name: CMFCRibbonRichEditCtrl::OnKillFocus
// address: 0x100ef486
// body: available
// range: 0x100ef486-0x100ef534 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCRibbonRichEditCtrl::OnKillFocus(class CWnd *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCRibbonRichEditCtrl::OnKillFocus(CMFCRibbonRichEditCtrl *this,CWnd *param_1)

{
  code *pcVar1;
  
  FUN_100283ad();
  *(undefined4 *)(*(int *)(this + 0x80) + 0x1e4) = 0;
  pcVar1 = *(code **)(**(int **)(this + 0x80) + 0x1b8);
  guard_check_icall();
  (*pcVar1)();
  CRichEditCtrl::SetSel((CRichEditCtrl *)this,0,0);
  RedrawWindow(*(HWND *)(this + 0x20),(RECT *)0x0,(HRGN)0x0,0x105);
  CWnd::GetWindowTextW
            ((CWnd *)this,
             (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)(this + 0x90));
  FUN_10018680((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)(this + 0x90));
  if (*(int *)(*(CMFCRibbonBaseElement **)(this + 0x80) + 0x1e8) != 0) {
    CMFCRibbonBaseElement::NotifyCommand(*(CMFCRibbonBaseElement **)(this + 0x80),1);
    *(undefined4 *)(*(int *)(this + 0x80) + 0x1e8) = 1;
  }
  pcVar1 = *(code **)(**(int **)(this + 0x80) + 0x224);
  guard_check_icall(0);
  (*pcVar1)();
  return;
}

