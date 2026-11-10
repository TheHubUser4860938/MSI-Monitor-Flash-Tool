// rea decompile_all
// name: CHandleMap::DeleteTemp
// address: 0x10019a5f
// body: available
// range: 0x10019a5f-0x10019acc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CHandleMap::DeleteTemp(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CHandleMap::DeleteTemp(CHandleMap *this)

{
  int iVar1;
  code *pcVar2;
  undefined1 local_10 [4];
  int local_c;
  int local_8;
  
  if (this != (CHandleMap *)0x0) {
    local_c = -(uint)(*(int *)(this + 0x44) != 0);
    while (local_c != 0) {
      FUN_10029e2e(&local_c,local_10,&local_8);
      iVar1 = *(int *)(this + 0x58);
      *(undefined4 *)(iVar1 + local_8) = 0;
      if (*(int *)(this + 0x5c) == 2) {
        ((undefined4 *)(iVar1 + local_8))[1] = 0;
      }
      pcVar2 = *(code **)(this + 0x18);
      guard_check_icall(local_8);
      (*pcVar2)();
    }
    CMapWordToOb::RemoveAll((CMapWordToOb *)(this + 0x38));
    CFixedAllocNoSync::FreeAll((CFixedAllocNoSync *)(this + 4));
  }
  return;
}

