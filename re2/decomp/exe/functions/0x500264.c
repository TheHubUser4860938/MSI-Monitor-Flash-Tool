// rea decompile_all
// name: CAutoHideDockSite::RepositionPanes
// address: 0x500264
// body: available
// range: 0x500264-0x5002e0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CAutoHideDockSite::RepositionPanes(class CRect &)
   
   Library: Visual Studio 2015 Release */

void __thiscall CAutoHideDockSite::RepositionPanes(CAutoHideDockSite *this,CRect *param_1)

{
  CDockingPanesRow *this_00;
  int iVar1;
  code *pcVar2;
  AFX_GLOBAL_DATA *pAVar3;
  CMFCVisualManager *pCVar4;
  int iVar5;
  
  if (*(int *)(this + 0x138) != 0) {
    this_00 = *(CDockingPanesRow **)(*(int *)(this + 0x130) + 8);
    iVar5 = *(int *)this_00;
    pAVar3 = GetGlobalData();
    iVar1 = *(int *)(pAVar3 + 0x1bc);
    pAVar3 = GetGlobalData();
    guard_check_icall(*(int *)(this + 0x150) + iVar1,*(undefined4 *)(pAVar3 + 0x1b8));
    (**(code **)(iVar5 + 0x2c))();
    pCVar4 = CMFCVisualManager::GetInstance();
    pcVar2 = *(code **)(*(int *)pCVar4 + 0x1ac);
    guard_check_icall();
    iVar5 = (*pcVar2)();
    if (iVar5 != 0) {
      CDockingPanesRow::RedrawAll(this_00);
    }
  }
  return;
}

