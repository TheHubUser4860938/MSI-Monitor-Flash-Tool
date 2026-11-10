// rea decompile_all
// name: CMouseManager::Serialize
// address: 0x549c4d
// body: available
// range: 0x549c4d-0x549cf5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CMouseManager::Serialize(class CArchive &)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMouseManager::Serialize(CMouseManager *this,CArchive *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  if (((byte)param_1[0x18] & 1) == 0) {
    FUN_0043e915(*(undefined4 *)(this + 0x2c));
    local_8 = -(uint)(*(int *)(this + 0x2c) != 0);
    while (local_8 != 0) {
      FUN_0045cffa(&local_8,&local_c,&local_10);
      FUN_0043e915(local_c);
      FUN_0043e915(local_10);
    }
  }
  else {
    CMap<int,int,int,int>::RemoveAll((CMap<int,int,int,int> *)(this + 0x20));
    FUN_00450090(&local_8);
    iVar2 = local_8;
    if (0 < local_8) {
      do {
        FUN_00450090(&local_8);
        FUN_00450090(&local_c);
        puVar1 = (undefined4 *)FUN_00489126(local_8);
        *puVar1 = local_c;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return;
}

