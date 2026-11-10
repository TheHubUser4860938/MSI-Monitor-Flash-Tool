// rea decompile_all
// name: FUN_10014b00
// address: 0x10014b00
// body: available
// range: 0x10014b00-0x10014c25 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * FUN_10014b00(undefined1 *param_1,uint param_2)

{
  int iVar1;
  undefined4 in_stack_00000018;
  uint in_stack_0000001c;
  undefined4 in_stack_00000020;
  uint in_stack_00000034;
  undefined1 local_38 [8];
  undefined4 uStack_30;
  undefined4 *puStack_2c;
  uint local_28;
  int local_24;
  uint uStack_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10195960;
  local_10 = ExceptionList;
  uStack_20 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 1;
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = 0;
  FUN_10003b40(&param_2,0,0xffffffff);
  iVar1 = FUN_10014c30();
  if (iVar1 == 0) {
    FUN_100055b0(local_38,&stack0x00000020,&param_2);
    FUN_10018a30(param_1);
    if (0xf < in_stack_0000001c) {
      local_24 = in_stack_0000001c + 1;
      local_28 = param_2;
      puStack_2c = (undefined4 *)0x10014bed;
      FUN_10003d70();
    }
  }
  else {
    local_24 = 0xffffffff;
    local_28 = 0;
    puStack_2c = &param_2;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    uStack_30 = 0x10014b86;
    FUN_10003b40();
    if (0xf < in_stack_0000001c) {
      local_24 = in_stack_0000001c + 1;
      local_28 = param_2;
      puStack_2c = (undefined4 *)0x10014b9b;
      FUN_10003d70();
    }
  }
  if (0xf < in_stack_00000034) {
    local_24 = in_stack_00000034 + 1;
    in_stack_0000001c = 0xf;
    in_stack_00000018 = 0;
    param_2 = param_2 & 0xffffff00;
    puStack_2c = (undefined4 *)0x10014c14;
    local_28 = in_stack_00000020;
    FUN_10003d70();
  }
  ExceptionList = local_10;
  return param_1;
}

