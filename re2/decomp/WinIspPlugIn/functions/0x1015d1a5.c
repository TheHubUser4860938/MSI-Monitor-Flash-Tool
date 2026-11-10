// rea decompile_all
// name: CPaneDivider::AddRecentPane
// address: 0x1015d1a5
// body: available
// range: 0x1015d1a5-0x1015d238 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual class CDockablePane * __thiscall CPaneDivider::AddRecentPane(class CDockablePane
   *)
   
   Library: Visual Studio 2015 Release */

CDockablePane * __thiscall CPaneDivider::AddRecentPane(CPaneDivider *this,CDockablePane *param_1)

{
  CPaneContainer *pCVar1;
  CPaneContainer *pCVar2;
  CDockablePane *pCVar3;
  code *pcVar4;
  
  pCVar1 = CRecentDockSiteInfo::GetRecentPaneContainer((CRecentDockSiteInfo *)(param_1 + 0x1e4),1);
  pCVar2 = CRecentDockSiteInfo::GetRecentTabContainer((CRecentDockSiteInfo *)(param_1 + 0x1e4),1);
  if (pCVar1 == (CPaneContainer *)0x0) {
    if (pCVar2 == (CPaneContainer *)0x0) {
      return (CDockablePane *)0x0;
    }
    pcVar4 = *(code **)(**(int **)(this + 0x168) + 0x20);
    guard_check_icall(param_1,pCVar2);
    pCVar3 = (CDockablePane *)(*pcVar4)();
    pcVar4 = *(code **)(*(int *)this + 0x290);
  }
  else {
    pcVar4 = *(code **)(**(int **)(this + 0x168) + 0x20);
    guard_check_icall(param_1,pCVar1);
    pCVar3 = (CDockablePane *)(*pcVar4)();
    pcVar4 = *(code **)(*(int *)this + 0x290);
    pCVar2 = pCVar1;
  }
  guard_check_icall(param_1,pCVar2);
  (*pcVar4)();
  return pCVar3;
}

