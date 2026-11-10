// rea decompile_all
// name: CDockingPanesRow::GetGroupFromPane
// address: 0x100bce34
// body: available
// range: 0x100bce34-0x100bcebc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CDockingPanesRow::GetGroupFromPane(class CPane *,class CObList &)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CDockingPanesRow::GetGroupFromPane(CDockingPanesRow *this,CPane *param_1,CObList *param_2)

{
  CObject *pCVar1;
  int *piVar2;
  undefined4 *puVar3;
  CDockingPanesRow *local_8;
  
  local_8 = this;
  local_8 = (CDockingPanesRow *)
            CObList::Find((CObList *)(this + 0x24),(CObject *)param_1,(__POSITION *)0x0);
  do {
    if (local_8 == (CDockingPanesRow *)0x0) {
      return;
    }
    piVar2 = (int *)FUN_1002e90e(&local_8);
  } while (*(int *)(*piVar2 + 0x114) == 0);
  if (local_8 == (CDockingPanesRow *)0x0) {
    local_8 = *(CDockingPanesRow **)(this + 0x28);
  }
  else {
    FUN_1002466e(&local_8);
  }
  do {
    if (local_8 == (CDockingPanesRow *)0x0) {
      return;
    }
    puVar3 = (undefined4 *)FUN_1002466e(&local_8);
    pCVar1 = (CObject *)*puVar3;
    CObList::AddTail(param_2,pCVar1);
  } while (*(int *)(pCVar1 + 0x118) == 0);
  return;
}

