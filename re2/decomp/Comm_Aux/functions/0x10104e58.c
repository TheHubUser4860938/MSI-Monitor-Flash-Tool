// rea decompile_all
// name: CMFCRibbonButton::OnLButtonDown
// address: 0x10104e58
// body: available
// range: 0x10104e58-0x10104ef1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CMFCRibbonButton::OnLButtonDown(class CPoint)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCRibbonButton::OnLButtonDown(CMFCRibbonButton *this,LONG param_2,LONG param_3)

{
  code *pcVar1;
  POINT pt;
  int iVar2;
  BOOL BVar3;
  
  CMFCRibbonBaseElement::OnLButtonDown((CMFCRibbonBaseElement *)this,param_2,param_3);
  pcVar1 = *(code **)(*(int *)this + 0x138);
  guard_check_icall();
  iVar2 = (*pcVar1)();
  if ((iVar2 != 0) &&
     (iVar2 = CMFCRibbonBaseElement::IsMenuMode((CMFCRibbonBaseElement *)this), iVar2 == 0)) {
    BVar3 = IsRectEmpty((RECT *)(this + 0x124));
    if ((BVar3 == 0) &&
       (pt.y = param_3, pt.x = param_2, BVar3 = PtInRect((RECT *)(this + 0x124),pt), BVar3 == 0)) {
      return;
    }
    if ((*(int *)(this + 0x168) == 0) || (*(int *)(this + 0xd4) == 0)) {
      if ((*(int *)(this + 0xd4) != 0) && (BVar3 = IsRectEmpty((RECT *)(this + 0x134)), BVar3 != 0))
      {
        return;
      }
      pcVar1 = *(code **)(*(int *)this + 0x13c);
      guard_check_icall();
      (*pcVar1)();
    }
  }
  return;
}

