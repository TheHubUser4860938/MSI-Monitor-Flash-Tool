// rea decompile_all
// name: CMFCToolBar::RebuildAccelerationKeys
// address: 0x10099cdb
// body: available
// range: 0x10099cdb-0x10099d82 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCToolBar::RebuildAccelerationKeys(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCToolBar::RebuildAccelerationKeys(CMFCToolBar *this)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint local_10;
  int local_c;
  WCHAR local_8;
  undefined2 local_6;
  
  CMap<int,int,int,int>::RemoveAll((CMap<int,int,int,int> *)(this + 0xd20));
  local_c = *(int *)(this + 0xc40);
  while( true ) {
    if (local_c == 0) {
      return;
    }
    piVar2 = (int *)FUN_10034920(&local_c);
    iVar1 = *piVar2;
    if (iVar1 == 0) break;
    if (((*(byte *)(iVar1 + 0x24) & 1) == 0) && (*(int *)(iVar1 + 8) != 0)) {
      iVar3 = FUN_10034010(0x26,0);
      if ((-1 < iVar3) && (iVar3 < *(int *)(*(int *)(iVar1 + 0x2c) + -0xc) + -1)) {
        local_8 = FUN_10034290(iVar3 + 1);
        local_6 = 0;
        CharUpperW(&local_8);
        local_10 = (uint)(ushort)local_8;
        piVar2 = (int *)FUN_100c768f(&local_10);
        *piVar2 = iVar1;
      }
    }
  }
  return;
}

