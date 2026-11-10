// rea decompile_all
// name: CPaneContainer::StoreRecentDockSiteInfo
// address: 0x10125c89
// body: available
// range: 0x10125c89-0x10125cf8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CPaneContainer::StoreRecentDockSiteInfo(class CDockablePane *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CPaneContainer::StoreRecentDockSiteInfo(CPaneContainer *this,CDockablePane *param_1)

{
  code *pcVar1;
  CPaneDivider *pCVar2;
  int iVar3;
  
  pCVar2 = CDockablePane::GetDefaultPaneDivider(param_1);
  if (pCVar2 != (CPaneDivider *)0x0) {
    pcVar1 = *(code **)(*(int *)param_1 + 0x228);
    guard_check_icall(0);
    iVar3 = (*pcVar1)();
    if (iVar3 == 0) {
      pcVar1 = *(code **)(*(int *)pCVar2 + 0x1dc);
      guard_check_icall();
      iVar3 = (*pcVar1)();
      if (iVar3 != 0) {
        return;
      }
    }
  }
  pcVar1 = *(code **)(*(int *)(param_1 + 0x1e4) + 0xc);
  guard_check_icall(this,0);
  (*pcVar1)();
  return;
}

