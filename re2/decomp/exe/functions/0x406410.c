// rea decompile_all
// name: FUN_00406410
// address: 0x406410
// body: available
// range: 0x406410-0x4064e9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00406410(int *param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0059c170;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  bVar2 = false;
  if ((param_1 != (int *)0x0) && (*param_1 == 0)) {
    puVar3 = (undefined4 *)FUN_00416408(0x18,DAT_0060cff4 ^ (uint)&stack0xfffffffc);
    local_8 = 0;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(undefined8 *)(puVar3 + 4) = 0;
      iVar1 = *(int *)(param_2 + 4);
      if (iVar1 == 0) {
        puVar4 = &DAT_005e87dd;
      }
      else {
        puVar4 = *(undefined1 **)(iVar1 + 0x18);
        if (puVar4 == (undefined1 *)0x0) {
          puVar4 = (undefined1 *)(iVar1 + 0x1c);
        }
      }
      uVar5 = FUN_00401f80(puVar4);
      bVar2 = true;
      puVar3[1] = 0;
      local_8 = 2;
      *puVar3 = std::numpunct<char>::vftable;
      FUN_00406ae0(uVar5,1);
    }
    *param_1 = (int)puVar3;
    if (bVar2) {
      FUN_00402070();
    }
  }
  ExceptionList = local_10;
  return 4;
}

