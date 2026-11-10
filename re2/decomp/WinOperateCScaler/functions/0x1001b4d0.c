// rea decompile_all
// name: FUN_1001b4d0
// address: 0x1001b4d0
// body: available
// range: 0x1001b4d0-0x1001b6c9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001b4d0(undefined4 param_1,undefined4 param_2,int *param_3,int param_4,undefined1 param_5,
                 char param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 ****ppppuVar4;
  int *in_ECX;
  int iVar5;
  undefined1 local_5c [8];
  undefined4 local_54 [5];
  uint local_40;
  undefined1 local_3c [4];
  int *local_38;
  int *local_34;
  undefined4 local_30;
  undefined4 ***local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101960f2;
  local_10 = ExceptionList;
  local_14 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_30 = CONCAT31(local_30._1_3_,param_5);
  if ((*(uint *)(param_4 + 0x14) & 0x4000) == 0) {
    (**(code **)(*in_ECX + 0x24))(param_1,param_2,param_3,param_4,local_30,param_6,local_14);
  }
  else {
    local_34 = in_ECX;
    uVar2 = FUN_100103a0(local_3c);
    local_8 = 0;
    FUN_100193f0(uVar2);
    local_8 = 1;
    if ((local_38 != (int *)0x0) &&
       (puVar3 = (undefined4 *)(**(code **)(*local_38 + 8))(), puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = (undefined4 ***)((uint)local_2c[0] & 0xffffff00);
    local_8 = 2;
    if (param_6 == '\0') {
      ppppuVar4 = (undefined4 ****)FUN_1001b740(local_54);
    }
    else {
      ppppuVar4 = (undefined4 ****)FUN_1001ba50(local_54);
    }
    if (local_2c != ppppuVar4) {
      if (0xf < local_18) {
        FUN_10003d70(local_2c[0],local_18 + 1);
      }
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = (undefined4 ***)((uint)local_2c[0] & 0xffffff00);
      FUN_100035d0(ppppuVar4);
    }
    local_8 = CONCAT31(local_8._1_3_,2);
    if (0xf < local_40) {
      FUN_10003d70(local_54[0],local_40 + 1);
    }
    if ((*(int *)(param_4 + 0x24) < 0) ||
       (((*(int *)(param_4 + 0x24) < 1 && (*(int *)(param_4 + 0x20) == 0)) ||
        (*(uint *)(param_4 + 0x20) <= local_1c)))) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(uint *)(param_4 + 0x20) - local_1c;
    }
    if ((*(uint *)(param_4 + 0x14) & 0x1c0) != 0x40) {
      puVar3 = (undefined4 *)FUN_1001abd0(local_34,local_3c,param_2,param_3,local_30,iVar5);
      iVar5 = 0;
      param_2 = *puVar3;
      param_3 = (int *)puVar3[1];
    }
    ppppuVar4 = local_2c;
    if (0xf < local_18) {
      ppppuVar4 = (undefined4 ****)local_2c[0];
    }
    local_38 = param_3;
    puVar3 = (undefined4 *)FUN_1001ab50(local_34,local_5c,param_2,param_3,ppppuVar4,local_1c);
    uVar2 = *puVar3;
    uVar1 = puVar3[1];
    *(undefined4 *)(param_4 + 0x20) = 0;
    *(undefined4 *)(param_4 + 0x24) = 0;
    FUN_1001abd0(local_34,param_1,uVar2,uVar1,local_30,iVar5);
    if (0xf < local_18) {
      FUN_10003d70(local_2c[0],local_18 + 1);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

