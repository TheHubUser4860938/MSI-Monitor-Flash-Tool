// rea decompile_all
// name: CPane::SetDockState
// address: 0x10082b52
// body: available
// range: 0x10082b52-0x10082c01 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CPane::SetDockState(class CDockingManager *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CPane::SetDockState(CPane *this,CDockingManager *param_1)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  tagRECT *ptVar6;
  
  if (*(int *)(this + 0x2a8) == 0) {
    pcVar1 = *(code **)(*(int *)param_1 + 0x28);
    guard_check_icall(*(undefined4 *)(this + 0x1f8),1);
    piVar3 = (int *)(*pcVar1)();
    if (piVar3 != (int *)0x0) {
      ptVar6 = (tagRECT *)(this + 0x218);
      pcVar1 = *(code **)(*piVar3 + 0x2ac);
      guard_check_icall();
      uVar4 = (*pcVar1)();
      CDockingManager::DockPane(param_1,(CBasePane *)this,uVar4,ptVar6);
    }
    if (*(int **)(this + 0xb8) != (int *)0x0) {
      iVar2 = **(int **)(this + 0xb8);
      pcVar1 = *(code **)(*(int *)this + 0x1ac);
      guard_check_icall(1,0);
      uVar5 = (*pcVar1)();
      guard_check_icall(this,uVar5);
      (**(code **)(iVar2 + 0x2a0))();
      if (*(CDockingPanesRow **)(this + 0xbc) != (CDockingPanesRow *)0x0) {
        CDockingPanesRow::ExpandStretchedPanes(*(CDockingPanesRow **)(this + 0xbc));
      }
    }
  }
  return;
}

