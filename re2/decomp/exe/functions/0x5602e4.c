// rea decompile_all
// name: FID_conflict:_Getvals<wchar_t>
// address: 0x5602e4
// body: available
// range: 0x5602e4-0x56034f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Different Base Names
    protected: void __thiscall std::_Mpunct<wchar_t>::_Getvals<wchar_t>(wchar_t,struct lconv const
   *)
    protected: void __thiscall std::_Mpunct<wchar_t>::_Getvals(wchar_t,struct lconv const *)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release */

void FID_conflict__Getvals<wchar_t>(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  int in_ECX;
  
  if (*(char *)(in_ECX + 0x28) == '\0') {
    uVar1 = *(undefined4 *)(param_2 + 0x3c);
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 0x38);
  }
  uVar1 = FUN_00567fdf(uVar1);
  *(undefined4 *)(in_ECX + 0x10) = uVar1;
  ppuVar2 = &PTR_005e8934;
  if (*(byte *)(param_2 + 0x2e) < 5) {
    ppuVar2 = *(undefined ***)(param_2 + 0x48);
  }
  uVar1 = FUN_00567fdf(ppuVar2);
  *(undefined4 *)(in_ECX + 0x14) = uVar1;
  puVar3 = &DAT_005dd57c;
  if (*(byte *)(param_2 + 0x2f) < 5) {
    puVar3 = *(undefined **)(param_2 + 0x4c);
  }
  uVar1 = FUN_00567fdf(puVar3);
  *(undefined4 *)(in_ECX + 0x18) = uVar1;
  *(undefined2 *)(in_ECX + 0xc) = **(undefined2 **)(param_2 + 0x40);
  *(undefined2 *)(in_ECX + 0xe) = **(undefined2 **)(param_2 + 0x44);
  return;
}

