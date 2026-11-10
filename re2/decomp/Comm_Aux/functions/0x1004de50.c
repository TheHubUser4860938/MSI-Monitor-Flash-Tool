// rea decompile_all
// name: CArchive::Flush
// address: 0x1004de50
// body: available
// range: 0x1004de50-0x1004defa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CArchive::Flush(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CArchive::Flush(CArchive *this)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (((byte)this[0x18] & 1) == 0) {
    if (*(int *)(this + 8) == 0) {
      iVar1 = *(int *)(this + 0x30);
      if (*(int *)(this + 0x28) != iVar1) {
        pcVar2 = *(code **)(**(int **)(this + 0x24) + 0x3c);
        guard_check_icall(iVar1,*(int *)(this + 0x28) - iVar1);
        (*pcVar2)();
      }
    }
    else {
      if (*(int *)(this + 0x28) != *(int *)(this + 0x30)) {
        iVar1 = **(int **)(this + 0x24);
        guard_check_icall(2,*(int *)(this + 0x28) - *(int *)(this + 0x30),0,0);
        (**(code **)(iVar1 + 0x54))();
      }
      iVar1 = **(int **)(this + 0x24);
      guard_check_icall(1,*(undefined4 *)(this + 0x20),this + 0x30,this + 0x2c);
      (**(code **)(iVar1 + 0x54))();
    }
    uVar4 = *(undefined4 *)(this + 0x30);
  }
  else {
    if (*(int *)(this + 0x2c) != *(int *)(this + 0x28)) {
      iVar3 = *(int *)(this + 0x28) - *(int *)(this + 0x2c);
      iVar1 = **(int **)(this + 0x24);
      guard_check_icall(iVar3,iVar3 >> 0x1f,1);
      (**(code **)(iVar1 + 0x2c))();
    }
    uVar4 = *(undefined4 *)(this + 0x2c);
  }
  *(undefined4 *)(this + 0x28) = uVar4;
  return;
}

