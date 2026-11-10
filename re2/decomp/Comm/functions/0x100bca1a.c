// rea decompile_all
// name: CDockingPanesRow::FindFirstVisiblePane
// address: 0x100bca1a
// body: available
// range: 0x100bca1a-0x100bca8d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: class CPane * __thiscall CDockingPanesRow::FindFirstVisiblePane(int)
   
   Library: Visual Studio 2015 Release */

CPane * __thiscall CDockingPanesRow::FindFirstVisiblePane(CDockingPanesRow *this,int param_1)

{
  code *pcVar1;
  CPane *pCVar2;
  undefined4 *puVar3;
  int iVar4;
  int local_8;
  
  if (*(int *)(this + 0x30) == 0) {
    pCVar2 = (CPane *)0x0;
  }
  else {
    if (param_1 == 0) {
      local_8 = *(int *)(this + 0x2c);
    }
    else {
      local_8 = *(int *)(this + 0x28);
    }
    do {
      if (local_8 == 0) {
        return (CPane *)0x0;
      }
      if (param_1 == 0) {
        puVar3 = (undefined4 *)FUN_1002e90e(&local_8);
      }
      else {
        puVar3 = (undefined4 *)FUN_1002466e(&local_8);
      }
      pCVar2 = (CPane *)*puVar3;
      if (*(int *)(this + 4) != 0) {
        return pCVar2;
      }
      pcVar1 = *(code **)(*(int *)pCVar2 + 0x17c);
      guard_check_icall();
      iVar4 = (*pcVar1)();
    } while (iVar4 == 0);
  }
  return pCVar2;
}

