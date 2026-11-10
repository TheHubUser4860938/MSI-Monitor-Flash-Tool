// rea decompile_all
// name: CSmartDockingStandaloneGuide::Highlight
// address: 0x10163819
// body: available
// range: 0x10163819-0x1016388a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CSmartDockingStandaloneGuide::Highlight(int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CSmartDockingStandaloneGuide::Highlight(CSmartDockingStandaloneGuide *this,int param_1)

{
  AFX_SMARTDOCK_THEME AVar1;
  HBITMAP__ *pHVar2;
  
  if (*(int *)(this + 0x2e0) == param_1) {
    CSmartDockingStandaloneGuideWnd::UpdateLayered((CSmartDockingStandaloneGuideWnd *)(this + 8));
  }
  else {
    *(int *)(this + 0x2e0) = param_1;
    CSmartDockingStandaloneGuideWnd::Highlight
              ((CSmartDockingStandaloneGuideWnd *)(this + 8),param_1);
    if ((*(int *)(this + 0x2e8) == 0) || (AVar1 = GetVMTheme(), AVar1 == 2)) {
      pHVar2 = *(HBITMAP__ **)(this + 0x130);
      if (pHVar2 == (HBITMAP__ *)0x0) {
        pHVar2 = *(HBITMAP__ **)(this + 300);
      }
      if ((param_1 != 0) && (pHVar2 = *(HBITMAP__ **)(this + 0x244), pHVar2 == (HBITMAP__ *)0x0)) {
        pHVar2 = *(HBITMAP__ **)(this + 300);
      }
      CSmartDockingStandaloneGuideWnd::Assign
                ((CSmartDockingStandaloneGuideWnd *)(this + 8),pHVar2,1);
    }
  }
  return;
}

