// rea decompile_all
// name: CMFCShellTreeCtrl::OnDestroy
// address: 0x1004db35
// body: available
// range: 0x1004db35-0x1004db4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1004db4b to 0x10050ae7 CTreeCtrl::OnDestroy (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCShellTreeCtrl::OnDestroy(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCShellTreeCtrl::OnDestroy(CMFCShellTreeCtrl *this)

{
  CMFCShellListCtrl *pCVar1;
  
  pCVar1 = GetRelatedList(this);
  if (pCVar1 != (CMFCShellListCtrl *)0x0) {
    *(undefined4 *)(pCVar1 + 0x160) = 0;
  }
  CTreeCtrl::OnDestroy((CTreeCtrl *)this);
  return;
}

