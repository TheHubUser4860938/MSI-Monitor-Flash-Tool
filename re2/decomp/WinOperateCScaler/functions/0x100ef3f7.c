// rea decompile_all
// name: CMFCRibbonEdit::OnKey
// address: 0x100ef3f7
// body: available
// range: 0x100ef3f7-0x100ef485 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMFCRibbonEdit::OnKey(int)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCRibbonEdit::OnKey(CMFCRibbonEdit *this,int param_1)

{
  CWnd *this_00;
  code *pcVar1;
  int iVar2;
  BOOL BVar3;
  CMFCRibbonBar *this_01;
  
  if (*(int *)(this + 0xd4) == 0) {
    BVar3 = IsRectEmpty((RECT *)(this + 0x74));
    if (BVar3 == 0) {
      this_01 = CMFCRibbonBaseElement::GetTopLevelRibbonBar((CMFCRibbonBaseElement *)this);
      if (this_01 != (CMFCRibbonBar *)0x0) {
        CMFCRibbonBar::HideKeyTips(this_01);
      }
      if (((param_1 == 0) && (this_00 = *(CWnd **)(this + 0x1f0), this_00 != (CWnd *)0x0)) &&
         (*(int *)(this_00 + 0x20) != 0)) {
        CWnd::SetFocus(this_00);
        if (*(int *)(*(int *)(this + 0x1ec) + -0xc) != 0) {
          CRichEditCtrl::SetSel(*(CRichEditCtrl **)(this + 0x1f0),0,-1);
        }
      }
      else {
        pcVar1 = *(code **)(*(int *)this + 0x298);
        guard_check_icall();
        (*pcVar1)();
      }
      iVar2 = 1;
    }
    else {
      iVar2 = CMFCRibbonBaseElement::OnKey((CMFCRibbonBaseElement *)this,param_1);
    }
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}

