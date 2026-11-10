// rea decompile_all
// name: CMFCRibbonPanelMenuBar::AddButtons
// address: 0x4ad941
// body: available
// range: 0x4ad941-0x4ada4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCRibbonPanelMenuBar::AddButtons(class CMFCRibbonBar *,class
   CArray<class CMFCRibbonBaseElement *,class CMFCRibbonBaseElement *> const &,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCRibbonPanelMenuBar::AddButtons
          (CMFCRibbonPanelMenuBar *this,CMFCRibbonBar *param_1,
          CArray<CMFCRibbonBaseElement*,CMFCRibbonBaseElement*> *param_2,int param_3)

{
  code *pcVar1;
  undefined4 *puVar2;
  int *piVar3;
  int local_8;
  
  *(CMFCRibbonBar **)(this + 0xea0) = param_1;
  *(undefined4 *)(this + 0xdd4) = 1;
  *(CMFCRibbonPanelMenuBar **)(*(int *)(this + 0xea4) + 0x10c) = this;
  *(int *)(*(int *)(this + 0xea4) + 0x80) = param_3;
  *(undefined4 *)(*(int *)(this + 0xea4) + 0xb0) = 2;
  *(undefined4 *)(*(int *)(this + 0xea4) + 0xb4) = 2;
  CMFCRibbonPanel::RemoveAll(*(CMFCRibbonPanel **)(this + 0xea4));
  local_8 = 0;
  if (0 < *(int *)(param_2 + 8)) {
    do {
      puVar2 = (undefined4 *)FUN_004ab4cd(local_8);
      puVar2 = (undefined4 *)*puVar2;
      pcVar1 = *(code **)*puVar2;
      guard_check_icall();
      (*pcVar1)();
      piVar3 = (int *)FUN_00439696();
      pcVar1 = *(code **)(*piVar3 + 0x168);
      guard_check_icall(puVar2);
      (*pcVar1)();
      pcVar1 = *(code **)(*piVar3 + 0x170);
      guard_check_icall(puVar2);
      (*pcVar1)();
      piVar3[0x2e] = 1;
      pcVar1 = *(code **)(*piVar3 + 0x16c);
      guard_check_icall(this);
      (*pcVar1)();
      pcVar1 = *(code **)(**(int **)(this + 0xea4) + 0xcc);
      guard_check_icall(piVar3);
      (*pcVar1)();
      local_8 = local_8 + 1;
    } while (local_8 < *(int *)(param_2 + 8));
  }
  return;
}

