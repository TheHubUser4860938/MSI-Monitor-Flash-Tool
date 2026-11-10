// rea decompile_all
// name: FUN_004064f0
// address: 0x4064f0
// body: available
// range: 0x4064f0-0x40659d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004064f0(int *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  bool bVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0059c19f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  bVar4 = false;
  if ((param_1 != (int *)0x0) && (*param_1 == 0)) {
    puVar2 = (undefined4 *)FUN_00416408(8,DAT_0060cff4 ^ (uint)&stack0xfffffffc);
    local_8 = 0;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      iVar1 = *(int *)(param_2 + 4);
      if (iVar1 == 0) {
        puVar3 = &DAT_005e87dd;
      }
      else {
        puVar3 = *(undefined1 **)(iVar1 + 0x18);
        if (puVar3 == (undefined1 *)0x0) {
          puVar3 = (undefined1 *)(iVar1 + 0x1c);
        }
      }
      FUN_00401f80(puVar3);
      bVar4 = true;
      puVar2[1] = 0;
      *puVar2 = std::num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::vftable;
    }
    *param_1 = (int)puVar2;
    if (bVar4) {
      FUN_00402070();
    }
  }
  ExceptionList = local_10;
  return 4;
}

