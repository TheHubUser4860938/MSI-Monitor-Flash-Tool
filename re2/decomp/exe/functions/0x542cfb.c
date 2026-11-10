// rea decompile_all
// name: NewAssoc
// address: 0x542cfb
// body: available
// range: 0x542cfb-0x542d5c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    protected: struct CMapStringToOb::CAssoc * __thiscall CMapStringToOb::NewAssoc(void)
    protected: struct CMapStringToPtr::CAssoc * __thiscall CMapStringToPtr::NewAssoc(void)
   
   Library: Visual Studio 2015 Release */

undefined4 * NewAssoc(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined4 *puVar3;
  int iVar4;
  
  if (*(int *)(in_ECX + 0x10) == 0) {
    iVar1 = FUN_0043f1b6(in_ECX + 0x14,*(undefined4 *)(in_ECX + 0x18),0x10);
    iVar4 = *(int *)(in_ECX + 0x18);
    puVar3 = (undefined4 *)(iVar4 * 0x10 + iVar1 + -8);
    while (iVar4 = iVar4 + -1, -1 < iVar4) {
      *puVar3 = *(undefined4 *)(in_ECX + 0x10);
      *(undefined4 **)(in_ECX + 0x10) = puVar3;
      puVar3 = puVar3 + -4;
    }
  }
  puVar3 = *(undefined4 **)(in_ECX + 0x10);
  uVar2 = *puVar3;
  *(int *)(in_ECX + 0xc) = *(int *)(in_ECX + 0xc) + 1;
  *(undefined4 *)(in_ECX + 0x10) = uVar2;
  if (puVar3 != (undefined4 *)0xfffffff8) {
    uVar2 = FUN_004295fe();
    FUN_0040eb30(uVar2);
  }
  puVar3[3] = 0;
  return puVar3;
}

