// rea decompile_all
// name: CMFCTabCtrl::GetTabArea
// address: 0x1006472f
// body: available
// range: 0x1006472f-0x10064764 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCTabCtrl::GetTabArea(class CRect &,class CRect &)const 
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCTabCtrl::GetTabArea(CMFCTabCtrl *this,CRect *param_1,CRect *param_2)

{
  SetRectEmpty((LPRECT)param_1);
  SetRectEmpty((LPRECT)param_2);
  if (*(int *)(this + 0x90) != 1) {
    param_1 = param_2;
  }
  *(undefined4 *)param_1 = *(undefined4 *)(this + 0x2dc);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + 0x2e0);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(this + 0x2e4);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(this + 0x2e8);
  return;
}

