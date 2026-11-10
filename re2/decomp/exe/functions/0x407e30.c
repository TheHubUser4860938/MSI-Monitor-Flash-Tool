// rea decompile_all
// name: FUN_00407e30
// address: 0x407e30
// body: available
// range: 0x407e30-0x407eed inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_00407e30(undefined8 *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_0059c345;
  local_10 = ExceptionList;
  uVar3 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = 0;
  local_8 = 1;
  piVar1 = *(int **)(*(int *)(in_ECX + 0x30) + 4);
  *(int **)((int)param_1 + 4) = piVar1;
  (**(code **)(*piVar1 + 4))(uVar3);
  iVar2 = *(int *)(in_ECX + 0x30);
  local_8 = 2;
  piVar1 = *(int **)(iVar2 + 4);
  if (piVar1 != *(int **)(param_2 + 4)) {
    puVar4 = (undefined4 *)(**(code **)(*piVar1 + 8))();
    if (puVar4 != (undefined4 *)0x0) {
      (**(code **)*puVar4)(1);
    }
    piVar1 = *(int **)(param_2 + 4);
    *(int **)(iVar2 + 4) = piVar1;
    (**(code **)(*piVar1 + 4))();
  }
  local_8 = local_8 & 0xffffff00;
  for (puVar4 = *(undefined4 **)(in_ECX + 0x2c); puVar4 != (undefined4 *)0x0;
      puVar4 = (undefined4 *)*puVar4) {
    (*(code *)puVar4[2])(1);
  }
  ExceptionList = local_10;
  return param_1;
}

