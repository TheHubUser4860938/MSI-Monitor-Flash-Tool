// rea decompile_all
// name: CHandleMap::DeleteTemp
// address: 0x4c8a3f
// body: available
// range: 0x4c8a3f-0x4c8aac inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
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
      FUN_004c8514(&local_c,local_10,&local_8);
      iVar1 = *(int *)(this + 0x58);
      *(undefined4 *)(iVar1 + local_8) = 0;
      if (*(int *)(this + 0x5c) == 2) {
        ((undefined4 *)(iVar1 + local_8))[1] = 0;
      }
      pcVar2 = *(code **)(this + 0x18);
      guard_check_icall(local_8);
      (*pcVar2)();
    }
    CMapPtrToPtr::RemoveAll((CMapPtrToPtr *)(this + 0x38));
    CFixedAllocNoSync::FreeAll((CFixedAllocNoSync *)(this + 4));
  }
  return;
}

