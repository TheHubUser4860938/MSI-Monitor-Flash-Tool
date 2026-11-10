// rea decompile_all
// name: CMFCRibbonButton::OnLButtonUp
// address: 0x10105d8a
// body: available
// range: 0x10105d8a-0x10105e2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CMFCRibbonButton::OnLButtonUp(class CPoint)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCRibbonButton::OnLButtonUp(CMFCRibbonButton *this,LONG param_2,LONG param_3)

{
  RECT *lprc;
  code *pcVar1;
  POINT pt;
  POINT pt_00;
  bool bVar2;
  int iVar3;
  BOOL BVar4;
  
  if ((*(int *)(this + 0xd0) == 0) &&
     (iVar3 = CMFCRibbonBaseElement::IsMenuMode((CMFCRibbonBaseElement *)this), iVar3 == 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (*(int *)(this + 0xd4) != 0) {
    return;
  }
  if (!bVar2) {
    return;
  }
  if (*(int *)(this + 200) == 0) {
    return;
  }
  lprc = (RECT *)(this + 0x134);
  if (*(int *)(this + 0xe0) == 0) {
    BVar4 = IsRectEmpty(lprc);
    if (BVar4 != 0) goto LAB_10105e0d;
    pt_00.y = param_3;
    pt_00.x = param_2;
    iVar3 = PtInRect(lprc,pt_00);
  }
  else {
    BVar4 = IsRectEmpty(lprc);
    if (BVar4 != 0) {
      return;
    }
    pt.y = param_3;
    pt.x = param_2;
    BVar4 = PtInRect(lprc,pt);
    if (BVar4 == 0) {
      return;
    }
    iVar3 = CMFCRibbonBaseElement::IsMenuMode((CMFCRibbonBaseElement *)this);
  }
  if (iVar3 == 0) {
    return;
  }
LAB_10105e0d:
  pcVar1 = *(code **)(*(int *)this + 0x264);
  guard_check_icall(param_2,param_3);
  (*pcVar1)();
  return;
}

