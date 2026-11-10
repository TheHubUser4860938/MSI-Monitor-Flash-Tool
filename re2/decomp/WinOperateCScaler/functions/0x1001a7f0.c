// rea decompile_all
// name: FUN_1001a7f0
// address: 0x1001a7f0
// body: available
// range: 0x1001a7f0-0x1001ab48 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001a7f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5,undefined4 param_6,char *param_7,uint param_8)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  char ****ppppcVar8;
  undefined4 ****ppppuVar9;
  uint uVar10;
  char ****ppppcVar11;
  int iVar12;
  undefined1 local_60 [4];
  int local_5c;
  undefined4 local_58;
  undefined1 local_54 [4];
  int *local_50;
  int *local_4c;
  int *local_48;
  char ***local_44 [4];
  undefined4 local_34;
  uint local_30;
  undefined4 ***local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1019606c;
  local_10 = ExceptionList;
  uVar5 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_58 = param_2;
  local_5c = param_5;
  local_48 = (int *)param_7;
  if ((param_8 == 0) || ((*param_7 != '+' && (*param_7 != '-')))) {
    uVar10 = 0;
  }
  else {
    uVar10 = 1;
  }
  if (((((*(uint *)(param_5 + 0x14) & 0xe00) == 0x800) && (uVar10 + 2 <= param_8)) &&
      (param_7[uVar10] == '0')) && ((param_7[uVar10 + 1] == 'x' || (param_7[uVar10 + 1] == 'X')))) {
    uVar10 = uVar10 + 2;
  }
  local_14 = uVar5;
  uVar6 = FUN_100103a0(local_54);
  local_8 = 0;
  local_4c = (int *)FUN_10005f00(uVar6,uVar5);
  local_8 = 1;
  if ((local_50 != (int *)0x0) &&
     (puVar7 = (undefined4 *)(**(code **)(*local_50 + 8))(), puVar7 != (undefined4 *)0x0)) {
    (**(code **)*puVar7)(1);
  }
  local_8 = 0xffffffff;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (undefined4 ***)((uint)local_2c[0] & 0xffffff00);
  FUN_1001ad30(param_8,0);
  ppppuVar9 = local_2c;
  if (0xf < local_18) {
    ppppuVar9 = (undefined4 ****)local_2c[0];
  }
  local_8 = 2;
  (**(code **)(*local_4c + 0x1c))(local_48,(char *)((int)local_48 + param_8),ppppuVar9);
  uVar6 = FUN_100103a0(local_54);
  local_8._0_1_ = 3;
  local_48 = (int *)FUN_100193f0(uVar6);
  local_8._0_1_ = 4;
  if ((local_50 != (int *)0x0) &&
     (puVar7 = (undefined4 *)(**(code **)(*local_50 + 8))(), puVar7 != (undefined4 *)0x0)) {
    (**(code **)*puVar7)(1);
  }
  local_8._0_1_ = 2;
  FUN_1001b760(local_44);
  local_8 = CONCAT31(local_8._1_3_,5);
  ppppcVar11 = local_44;
  if (0xf < local_30) {
    ppppcVar11 = (char ****)local_44[0];
  }
  if ((*(char *)ppppcVar11 != '\x7f') && ('\0' < *(char *)ppppcVar11)) {
    uVar4 = (**(code **)(*local_48 + 0x10))();
    cVar1 = *(char *)ppppcVar11;
    local_48 = (int *)CONCAT31(local_48._1_3_,uVar4);
    while (((cVar1 != '\x7f' && (cVar1 = *(char *)ppppcVar11, '\0' < cVar1)) &&
           ((uint)(int)cVar1 < param_8 - uVar10))) {
      param_8 = param_8 - (int)cVar1;
      FUN_1001b780(param_8,1,local_48);
      ppppcVar8 = (char ****)((int)ppppcVar11 + 1);
      if (*(char *)((int)ppppcVar11 + 1) < '\x01') {
        ppppcVar8 = ppppcVar11;
      }
      cVar1 = *(char *)ppppcVar8;
      ppppcVar11 = ppppcVar8;
    }
  }
  iVar3 = local_5c;
  local_48 = (int *)local_1c;
  if (((*(int *)(local_5c + 0x24) < 0) ||
      ((*(int *)(local_5c + 0x24) < 1 && (*(int *)(local_5c + 0x20) == 0)))) ||
     (*(uint *)(local_5c + 0x20) <= local_1c)) {
    iVar12 = 0;
  }
  else {
    iVar12 = *(uint *)(local_5c + 0x20) - local_1c;
  }
  uVar5 = *(uint *)(local_5c + 0x14) & 0x1c0;
  if (uVar5 == 0x40) {
    ppppuVar9 = local_2c;
    if (0xf < local_18) {
      ppppuVar9 = (undefined4 ****)local_2c[0];
    }
    puVar7 = (undefined4 *)FUN_1001ab50(param_1,local_54,param_3,param_4,ppppuVar9,uVar10);
  }
  else if (uVar5 == 0x100) {
    ppppuVar9 = local_2c;
    if (0xf < local_18) {
      ppppuVar9 = (undefined4 ****)local_2c[0];
    }
    puVar7 = (undefined4 *)FUN_1001ab50(param_1,local_54,param_3,param_4,ppppuVar9,uVar10);
    puVar7 = (undefined4 *)FUN_1001abd0(param_1,local_54,*puVar7,puVar7[1],param_6,iVar12);
    iVar12 = 0;
  }
  else {
    puVar7 = (undefined4 *)FUN_1001abd0(param_1,local_54,param_3,param_4,param_6,iVar12);
    iVar12 = 0;
    ppppuVar9 = local_2c;
    if (0xf < local_18) {
      ppppuVar9 = (undefined4 ****)local_2c[0];
    }
    puVar7 = (undefined4 *)FUN_1001ab50(param_1,local_54,*puVar7,puVar7[1],ppppuVar9,uVar10);
  }
  local_4c = (int *)puVar7[1];
  ppppuVar9 = local_2c;
  if (0xf < local_18) {
    ppppuVar9 = (undefined4 ****)local_2c[0];
  }
  puVar7 = (undefined4 *)
           FUN_1001ab50(param_1,local_60,*puVar7,local_4c,(int)ppppuVar9 + uVar10,
                        (int)local_48 - uVar10);
  uVar6 = *puVar7;
  uVar2 = puVar7[1];
  *(undefined4 *)(iVar3 + 0x20) = 0;
  *(undefined4 *)(iVar3 + 0x24) = 0;
  FUN_1001abd0(param_1,local_58,uVar6,uVar2,param_6,iVar12);
  if (0xf < local_30) {
    FUN_10003d70(local_44[0],local_30 + 1);
  }
  local_30 = 0xf;
  local_34 = 0;
  local_44[0] = (char ***)((uint)local_44[0] & 0xffffff00);
  if (0xf < local_18) {
    FUN_10003d70(local_2c[0],local_18 + 1);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

