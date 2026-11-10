// rea decompile_all
// name: FUN_00404bb0
// address: 0x404bb0
// body: available
// range: 0x404bb0-0x404edc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00404bb0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5,undefined4 param_6,char *param_7,uint param_8)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  char ****ppppcVar7;
  undefined4 ****ppppuVar8;
  uint uVar9;
  char ****ppppcVar10;
  int iVar11;
  undefined1 local_54 [4];
  int *local_50;
  int *local_4c;
  int *local_48;
  char ***local_44 [5];
  uint local_30;
  undefined4 ***local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0059bf7c;
  local_10 = ExceptionList;
  uVar4 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_48 = (int *)param_7;
  if ((param_8 == 0) || ((*param_7 != '+' && (*param_7 != '-')))) {
    uVar9 = 0;
  }
  else {
    uVar9 = 1;
  }
  if (((((*(uint *)(param_5 + 0x14) & 0xe00) == 0x800) && (uVar9 + 2 <= param_8)) &&
      (param_7[uVar9] == '0')) && ((param_7[uVar9 + 1] == 'x' || (param_7[uVar9 + 1] == 'X')))) {
    uVar9 = uVar9 + 2;
  }
  local_14 = uVar4;
  uVar5 = FUN_00402ad0(local_54);
  local_8 = 0;
  local_4c = (int *)FUN_00405f50(uVar5,uVar4);
  local_8 = 1;
  if ((local_50 != (int *)0x0) &&
     (puVar6 = (undefined4 *)(**(code **)(*local_50 + 8))(), puVar6 != (undefined4 *)0x0)) {
    (**(code **)*puVar6)(1);
  }
  local_8 = 0xffffffff;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (undefined4 ***)((uint)local_2c[0] & 0xffffff00);
  FUN_00404310(param_8,0);
  local_8 = 2;
  ppppuVar8 = local_2c;
  if (0xf < local_18) {
    ppppuVar8 = (undefined4 ****)local_2c[0];
  }
  (**(code **)(*local_4c + 0x1c))(local_48,(char *)((int)local_48 + param_8),ppppuVar8);
  uVar5 = FUN_00402ad0(local_54);
  local_8._0_1_ = 3;
  local_48 = (int *)FUN_00406230(uVar5);
  local_8._0_1_ = 4;
  if ((local_50 != (int *)0x0) &&
     (puVar6 = (undefined4 *)(**(code **)(*local_50 + 8))(), puVar6 != (undefined4 *)0x0)) {
    (**(code **)*puVar6)(1);
  }
  local_8._0_1_ = 2;
  FUN_00405990(local_44);
  local_8 = CONCAT31(local_8._1_3_,5);
  ppppcVar10 = local_44;
  if (0xf < local_30) {
    ppppcVar10 = (char ****)local_44[0];
  }
  if ((*(char *)ppppcVar10 != '\x7f') && ('\0' < *(char *)ppppcVar10)) {
    uVar3 = (**(code **)(*local_48 + 0x10))();
    cVar1 = *(char *)ppppcVar10;
    local_48 = (int *)CONCAT31(local_48._1_3_,uVar3);
    while (((cVar1 != '\x7f' && (cVar1 = *(char *)ppppcVar10, '\0' < cVar1)) &&
           ((uint)(int)cVar1 < param_8 - uVar9))) {
      param_8 = param_8 - (int)cVar1;
      FUN_00405d30(param_8,1,local_48);
      ppppcVar7 = (char ****)((int)ppppcVar10 + 1);
      if (*(char *)((int)ppppcVar10 + 1) < '\x01') {
        ppppcVar7 = ppppcVar10;
      }
      cVar1 = *(char *)ppppcVar7;
      ppppcVar10 = ppppcVar7;
    }
  }
  local_48 = (int *)local_1c;
  if (((*(int *)(param_5 + 0x24) < 0) ||
      ((*(int *)(param_5 + 0x24) < 1 && (*(int *)(param_5 + 0x20) == 0)))) ||
     (*(uint *)(param_5 + 0x20) <= local_1c)) {
    iVar11 = 0;
  }
  else {
    iVar11 = *(uint *)(param_5 + 0x20) - local_1c;
  }
  uVar4 = *(uint *)(param_5 + 0x14) & 0x1c0;
  if (uVar4 == 0x40) {
    ppppuVar8 = local_2c;
    if (0xf < local_18) {
      ppppuVar8 = (undefined4 ****)local_2c[0];
    }
    puVar6 = (undefined4 *)FUN_00404b30(param_1,local_54,param_3,param_4,ppppuVar8,uVar9);
  }
  else if (uVar4 == 0x100) {
    ppppuVar8 = local_2c;
    if (0xf < local_18) {
      ppppuVar8 = (undefined4 ****)local_2c[0];
    }
    puVar6 = (undefined4 *)FUN_00404b30(param_1,local_54,param_3,param_4,ppppuVar8,uVar9);
    puVar6 = (undefined4 *)FUN_00404ab0(param_1,local_54,*puVar6,puVar6[1],param_6,iVar11);
    iVar11 = 0;
  }
  else {
    puVar6 = (undefined4 *)FUN_00404ab0(param_1,local_54,param_3,param_4,param_6,iVar11);
    iVar11 = 0;
    ppppuVar8 = local_2c;
    if (0xf < local_18) {
      ppppuVar8 = (undefined4 ****)local_2c[0];
    }
    puVar6 = (undefined4 *)FUN_00404b30(param_1,local_54,*puVar6,puVar6[1],ppppuVar8,uVar9);
  }
  local_4c = (int *)puVar6[1];
  ppppuVar8 = local_2c;
  if (0xf < local_18) {
    ppppuVar8 = (undefined4 ****)local_2c[0];
  }
  puVar6 = (undefined4 *)
           FUN_00404b30(param_1,local_54,*puVar6,local_4c,(int)ppppuVar8 + uVar9,
                        (int)local_48 - uVar9);
  uVar5 = *puVar6;
  uVar2 = puVar6[1];
  *(undefined4 *)(param_5 + 0x20) = 0;
  *(undefined4 *)(param_5 + 0x24) = 0;
  FUN_00404ab0(param_1,param_2,uVar5,uVar2,param_6,iVar11);
  FUN_004033e0();
  FUN_004033e0();
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

