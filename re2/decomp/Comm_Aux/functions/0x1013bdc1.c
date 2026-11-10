// rea decompile_all
// name: CMFCRibbonMiniToolBar::OnTimer
// address: 0x1013bdc1
// body: available
// range: 0x1013bdc1-0x1013be31 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCRibbonMiniToolBar::OnTimer(unsigned int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCRibbonMiniToolBar::OnTimer(CMFCRibbonMiniToolBar *this,uint param_1)

{
  CMFCRibbonBaseElement *pCVar1;
  int iVar2;
  
  CMFCPopupMenu::OnTimer((CMFCPopupMenu *)this,param_1);
  if (param_1 == 0xec06) {
    if (*(int *)(this + 0x2040) == 0) {
      if ((*(CMFCRibbonPanel **)(this + 0x201c) != (CMFCRibbonPanel *)0x0) &&
         (pCVar1 = CMFCRibbonPanel::GetDroppedDown(*(CMFCRibbonPanel **)(this + 0x201c)),
         pCVar1 != (CMFCRibbonBaseElement *)0x0)) {
        *(undefined4 *)(this + 0x204c) = 1;
        return;
      }
      iVar2 = FUN_1013be32();
      if (iVar2 != 0) {
        SetLayeredWindowAttributes(*(HWND *)(this + 0x20),0,(BYTE)this[0x2044],2);
      }
    }
    else {
      KillTimer(*(HWND *)(this + 0x20),0xec06);
    }
  }
  return;
}

