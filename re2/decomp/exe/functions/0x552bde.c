// rea decompile_all
// name: CMFCTasksPane::SetCaptionButtons
// address: 0x552bde
// body: available
// range: 0x552bde-0x552c96 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: virtual void __thiscall CMFCTasksPane::SetCaptionButtons(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCTasksPane::SetCaptionButtons(CMFCTasksPane *this)

{
  CMFCCaptionButton *pCVar1;
  undefined4 uVar2;
  CMFCCaptionMenuButton *this_00;
  int iVar3;
  
  CDockablePane::SetCaptionButtons((CDockablePane *)this);
  pCVar1 = (CMFCCaptionButton *)FUN_00416408(0x30);
  if (pCVar1 == (CMFCCaptionButton *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CMFCCaptionButton::CMFCCaptionButton(pCVar1,0x17,1);
  }
  FUN_0051de93(*(undefined4 *)(this + 0x33c),uVar2);
  pCVar1 = (CMFCCaptionButton *)FUN_00416408(0x30);
  if (pCVar1 == (CMFCCaptionButton *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CMFCCaptionButton::CMFCCaptionButton(pCVar1,0x18,1);
  }
  FUN_0051de93(*(undefined4 *)(this + 0x33c),uVar2);
  this_00 = (CMFCCaptionMenuButton *)FUN_00416408(0x3c);
  if (this_00 == (CMFCCaptionMenuButton *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = CMFCCaptionMenuButton::CMFCCaptionMenuButton(this_00,0x19,0);
  }
  *(undefined4 *)(iVar3 + 0x34) = 0;
  FUN_0051de93(*(undefined4 *)(this + 0x33c),iVar3);
  return;
}

