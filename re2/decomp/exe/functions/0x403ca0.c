// rea decompile_all
// name: FUN_00403ca0
// address: 0x403ca0
// body: available
// range: 0x403ca0-0x403e4a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00403ca0(undefined4 param_1,undefined4 param_2,int *param_3,int param_4,undefined1 param_5,
                 char param_6)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int *in_ECX;
  undefined1 local_54 [24];
  undefined4 local_3c;
  undefined1 local_38 [4];
  int *local_34;
  undefined4 local_30;
  uint local_2c;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0059bf26;
  local_10 = ExceptionList;
  local_14 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_3c = param_1;
  local_30 = CONCAT31(local_30._1_3_,param_5);
  if ((*(uint *)(param_4 + 0x14) & 0x4000) == 0) {
    (**(code **)(*in_ECX + 0x24))(param_1,param_2,param_3,param_4,local_30,param_6,local_14);
  }
  else {
    uVar1 = FUN_00402ad0(local_38);
    local_8 = 0;
    FUN_00406230(uVar1);
    local_8 = 1;
    if ((local_34 != (int *)0x0) &&
       (puVar2 = (undefined4 *)(**(code **)(*local_34 + 8))(), puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c = local_2c & 0xffffff00;
    local_8 = 2;
    if (param_6 == '\0') {
      uVar1 = FUN_00404a40(local_54);
    }
    else {
      uVar1 = FUN_00404a20(local_54);
    }
    FUN_00403450(uVar1);
    FUN_004033e0();
    if ((*(uint *)(param_4 + 0x14) & 0x1c0) != 0x40) {
      iVar3 = FUN_00404ab0();
      param_3 = *(int **)(iVar3 + 4);
    }
    local_34 = param_3;
    FUN_00404b30();
    *(undefined4 *)(param_4 + 0x20) = 0;
    *(undefined4 *)(param_4 + 0x24) = 0;
    FUN_00404ab0();
    FUN_004033e0();
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

