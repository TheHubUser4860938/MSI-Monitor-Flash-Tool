// rea decompile_all
// name: FUN_10009bb0
// address: 0x10009bb0
// body: available
// range: 0x10009bb0-0x10009c82 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_10009bb0(undefined4 *param_1)

{
  int *piVar1;
  int *in_ECX;
  undefined4 extraout_ECX;
  undefined4 uVar2;
  undefined4 extraout_ECX_00;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101c0e7c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar1 = *(int **)(*(int *)(*in_ECX + 4) + 0x38 + (int)in_ECX);
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(DAT_1023dfec ^ (uint)&stack0xfffffffc);
    uVar2 = extraout_ECX;
  }
  local_8 = 0;
  FUN_1000b870(uVar2);
  local_8 = 1;
  if ((*(byte *)(*(int *)(*in_ECX + 4) + 0xc + (int)in_ECX) & 6) == 0) {
    FUN_1000b4f0(param_1,0,0,1,extraout_ECX_00);
    local_8 = 2;
  }
  else {
    *param_1 = 0xffffffff;
    param_1[1] = 0xffffffff;
    param_1[2] = 0;
    param_1[3] = 0;
    *(undefined8 *)(param_1 + 4) = 0;
    local_8 = 3;
  }
  piVar1 = *(int **)(*(int *)(*in_ECX + 4) + 0x38 + (int)in_ECX);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = local_10;
  return param_1;
}

