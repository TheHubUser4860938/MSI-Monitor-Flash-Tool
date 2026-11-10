// rea decompile_all
// name: CMFCToolBarsToolsPropertyPage::OnKillActive
// address: 0x10138ce7
// body: available
// range: 0x10138ce7-0x10138d20 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10138d1c to 0x1002d6d2 CPropertyPage::OnKillActive (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMFCToolBarsToolsPropertyPage::OnKillActive(void)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCToolBarsToolsPropertyPage::OnKillActive(CMFCToolBarsToolsPropertyPage *this)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = *(code **)(**(int **)(this + 0x1460) + 0x18c);
  guard_check_icall(DAT_101dc968 + 4);
  iVar2 = (*pcVar1)();
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = CPropertyPage::OnKillActive((CPropertyPage *)this);
  return iVar2;
}

