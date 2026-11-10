// rea decompile_all
// name: CDockingPanesRow::RemovePane
// address: 0x100bdad5
// body: available
// range: 0x100bdad5-0x100bdb84 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CDockingPanesRow::RemovePane(class CPane *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CDockingPanesRow::RemovePane(CDockingPanesRow *this,CPane *param_1)

{
  code *pcVar1;
  __POSITION *p_Var2;
  int iVar3;
  CDockingPanesRow *local_8;
  
  local_8 = this;
  p_Var2 = CObList::Find((CObList *)(this + 0x24),(CObject *)param_1,(__POSITION *)0x0);
  if (p_Var2 != (__POSITION *)0x0) {
    local_8 = (CDockingPanesRow *)0x0;
    pcVar1 = *(code **)(*(int *)param_1 + 0x2ac);
    guard_check_icall(0xffff,&local_8);
    (*pcVar1)();
    FUN_10029c32(p_Var2);
    *(undefined4 *)(param_1 + 0xbc) = 0;
    if (*(int *)(this + 0x30) == 0) {
      CDockSite::RemoveRow(*(CDockSite **)(this + 0x44),this);
    }
    else {
      FixupVirtualRects(this,true,param_1);
      ExpandStretchedPanes(this);
      pcVar1 = *(code **)(*(int *)this + 0x44);
      guard_check_icall(0);
      (*pcVar1)();
      iVar3 = GetMaxPaneSize(this,0);
      if (iVar3 < *(int *)(this + 0xc)) {
        CDockSite::ResizeRow(*(CDockSite **)(this + 0x44),this,iVar3,1);
        *(int *)(this + 0xc) = iVar3;
      }
    }
  }
  return;
}

