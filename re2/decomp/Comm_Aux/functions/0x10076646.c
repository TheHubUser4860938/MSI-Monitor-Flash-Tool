// rea decompile_all
// name: CMFCPropertyGridCtrl::ReposProperties
// address: 0x10076646
// body: available
// range: 0x10076646-0x10076700 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCPropertyGridCtrl::ReposProperties(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCPropertyGridCtrl::ReposProperties(CMFCPropertyGridCtrl *this)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  CMFCPropertyGridCtrl *local_8;
  
  local_8 = this;
  CList<tagPOINT,tagPOINT>::RemoveAll((CList<tagPOINT,tagPOINT> *)(this + 0x3bc));
  if (((CToolTipCtrl *)(this + 0x80) != (CToolTipCtrl *)0x0) && (*(int *)(this + 0xa0) != 0)) {
    while (0 < *(int *)(this + 0x340)) {
      CToolTipCtrl::DelTool((CToolTipCtrl *)(this + 0x80),(CWnd *)this,*(uint *)(this + 0x340));
      *(int *)(this + 0x340) = *(int *)(this + 0x340) + -1;
    }
  }
  local_8 = (CMFCPropertyGridCtrl *)
            ((*(int *)(this + 0x32c) - *(int *)(this + 0x35c) * *(int *)(this + 0x354)) + -1);
  if (*(int *)(this + 0x304) == 0) {
    puVar2 = *(undefined4 **)(this + 0x3a4);
    while (puVar2 != (undefined4 *)0x0) {
      puVar1 = puVar2 + 2;
      puVar2 = (undefined4 *)*puVar2;
      CMFCPropertyGridProperty::Reposition((CMFCPropertyGridProperty *)*puVar1,(int *)&local_8);
    }
  }
  else {
    puVar2 = *(undefined4 **)(this + 0x3a4);
    while (puVar2 != (undefined4 *)0x0) {
      puVar1 = puVar2 + 2;
      puVar2 = (undefined4 *)*puVar2;
      CMFCPropertyGridProperty::AddTerminalProp
                ((CMFCPropertyGridProperty *)*puVar1,
                 (CList<CMFCPropertyGridProperty*,CMFCPropertyGridProperty*> *)(this + 0x3bc));
    }
    puVar2 = *(undefined4 **)(this + 0x3c0);
    while (puVar2 != (undefined4 *)0x0) {
      puVar1 = puVar2 + 2;
      puVar2 = (undefined4 *)*puVar2;
      CMFCPropertyGridProperty::Reposition((CMFCPropertyGridProperty *)*puVar1,(int *)&local_8);
    }
  }
  return;
}

