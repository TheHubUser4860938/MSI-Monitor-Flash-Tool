// rea decompile_all
// name: CMultiPaneFrameWnd::OnCheckEmptyState
// address: 0x100f8324
// body: available
// range: 0x100f8324-0x100f83b1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: long __thiscall CMultiPaneFrameWnd::OnCheckEmptyState(unsigned int,long)
   
   Library: Visual Studio 2015 Release */

long __thiscall
CMultiPaneFrameWnd::OnCheckEmptyState(CMultiPaneFrameWnd *this,uint param_1,long param_2)

{
  CPaneContainerManager *this_00;
  CPaneContainer *this_01;
  code *pcVar1;
  int iVar2;
  
  if (*(CPaneContainer **)(this + 0x1cc) != (CPaneContainer *)0x0) {
    CPaneContainer::ReleaseEmptyPaneContainer(*(CPaneContainer **)(this + 0x1cc));
  }
  this_00 = (CPaneContainerManager *)(this + 400);
  iVar2 = CPaneContainerManager::GetNodeCount(this_00);
  if (iVar2 == 0) {
LAB_100f8393:
    CPaneFrameWnd::OnCancelMode((CPaneFrameWnd *)this);
    pcVar1 = *(code **)(*(int *)this + 0x60);
    guard_check_icall();
    (*pcVar1)();
  }
  else {
    iVar2 = CPaneContainerManager::GetNodeCount(this_00);
    if (((iVar2 == 1) &&
        (this_01 = *(CPaneContainer **)(this + 0x1cc), this_01 != (CPaneContainer *)0x0)) &&
       (*(int *)(this_01 + 0x30) == 0)) {
      iVar2 = CPaneContainer::IsEmpty(this_01);
      if (iVar2 != 0) goto LAB_100f8393;
    }
    pcVar1 = *(code **)(*(int *)this_00 + 0x54);
    guard_check_icall();
    iVar2 = (*pcVar1)();
    if (iVar2 == 0) {
      CWnd::ShowWindow((CWnd *)this,0);
      CPaneFrameWnd::OnCancelMode((CPaneFrameWnd *)this);
    }
  }
  return 0;
}

