// rea decompile_all
// name: CMFCVisualManagerOffice2003::GetSmartDockingHighlightToneColor
// address: 0x10111c24
// body: available
// range: 0x10111c24-0x10111c82 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10111c7e to 0x1005496f FUN_1005496f (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual unsigned long __thiscall
   CMFCVisualManagerOffice2003::GetSmartDockingHighlightToneColor(void)
   
   Library: Visual Studio 2015 Release */

ulong __thiscall
CMFCVisualManagerOffice2003::GetSmartDockingHighlightToneColor(CMFCVisualManagerOffice2003 *this)

{
  code *pcVar1;
  AFX_GLOBAL_DATA *pAVar2;
  int iVar3;
  ulong uVar4;
  
  pAVar2 = GetGlobalData();
  if (8 < *(int *)(pAVar2 + 0x1ac)) {
    pAVar2 = GetGlobalData();
    iVar3 = AFX_GLOBAL_DATA::IsHighContrastMode(pAVar2);
    if (iVar3 == 0) {
      pcVar1 = *(code **)(*(int *)this + 0x28);
      guard_check_icall();
      iVar3 = (*pcVar1)();
      if (iVar3 == 1) {
        return 0xf17b3d;
      }
      if (iVar3 == 2) {
        return 0x6d92be;
      }
      if (iVar3 == 3) {
        return 0xa98286;
      }
    }
  }
  uVar4 = FUN_1005496f();
  return uVar4;
}

