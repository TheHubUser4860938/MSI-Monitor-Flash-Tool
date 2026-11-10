// rea decompile_all
// name: FUN_1001a070
// address: 0x1001a070
// body: available
// range: 0x1001a070-0x1001a428 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001a070(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5,undefined4 param_6,char *param_7,uint param_8)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  size_t sVar4;
  undefined1 uVar5;
  uint uVar6;
  lconv *plVar7;
  size_t sVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int *piVar11;
  char *****pppppcVar12;
  undefined4 *****pppppuVar13;
  char *_Control;
  uint uVar14;
  char *****pppppcVar15;
  int iVar16;
  undefined1 local_6c [4];
  int local_68;
  undefined4 local_64;
  size_t local_60;
  int *local_5c;
  undefined1 local_58 [4];
  int *local_54;
  int *local_50;
  size_t local_4c;
  char ****local_48 [4];
  undefined4 local_38;
  uint local_34;
  undefined4 ****local_30 [4];
  uint local_20;
  uint local_1c;
  undefined2 local_18 [2];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10195f6c;
  local_10 = ExceptionList;
  uVar6 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_64 = param_2;
  local_68 = param_5;
  local_5c = (int *)param_7;
  local_4c = param_8;
  if ((param_8 == 0) || ((*param_7 != '+' && (*param_7 != '-')))) {
    uVar14 = 0;
  }
  else {
    uVar14 = 1;
  }
  if ((*(uint *)(param_5 + 0x14) & 0x3000) == 0x3000) {
    _Control = "pP";
    if (((uVar14 + 2 <= param_8) && (param_7[uVar14] == '0')) &&
       ((param_7[uVar14 + 1] == 'x' || (param_7[uVar14 + 1] == 'X')))) {
      uVar14 = uVar14 + 2;
    }
  }
  else {
    _Control = "eE";
  }
  local_14 = uVar6;
  local_60 = _strcspn(param_7,_Control);
  local_18[0] = 0x2e;
  plVar7 = _localeconv();
  local_18[0] = CONCAT11(local_18[0]._1_1_,*plVar7->decimal_point);
  sVar8 = _strcspn(param_7,(char *)local_18);
  uVar9 = FUN_100103a0(local_58);
  local_8 = 0;
  local_50 = (int *)FUN_10005f00(uVar9,uVar6);
  local_8 = 1;
  if ((local_54 != (int *)0x0) &&
     (puVar10 = (undefined4 *)(**(code **)(*local_54 + 8))(), puVar10 != (undefined4 *)0x0)) {
    (**(code **)*puVar10)(1);
  }
  local_8 = 0xffffffff;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = (undefined4 ****)((uint)local_30[0] & 0xffffff00);
  FUN_1001ad30(local_4c,0);
  pppppuVar13 = local_30;
  if (0xf < local_1c) {
    pppppuVar13 = (undefined4 *****)local_30[0];
  }
  local_8 = 2;
  (**(code **)(*local_50 + 0x1c))(local_5c,(char *)((int)local_5c + local_4c),pppppuVar13);
  uVar9 = FUN_100103a0(local_58);
  local_8._0_1_ = 3;
  piVar11 = (int *)FUN_100193f0(uVar9);
  local_8._0_1_ = 4;
  local_5c = piVar11;
  if ((local_54 != (int *)0x0) &&
     (puVar10 = (undefined4 *)(**(code **)(*local_54 + 8))(), puVar10 != (undefined4 *)0x0)) {
    (**(code **)*puVar10)(1);
  }
  local_8._0_1_ = 2;
  FUN_1001b760(local_48);
  local_8 = CONCAT31(local_8._1_3_,5);
  uVar5 = (**(code **)(*piVar11 + 0x10))();
  sVar4 = local_4c;
  local_50 = (int *)CONCAT31(local_50._1_3_,uVar5);
  if (sVar8 != local_4c) {
    uVar5 = (**(code **)(*local_5c + 0xc))();
    pppppuVar13 = local_30;
    if (0xf < local_1c) {
      pppppuVar13 = (undefined4 *****)local_30[0];
    }
    *(undefined1 *)((int)pppppuVar13 + sVar8) = uVar5;
  }
  if (sVar8 == sVar4) {
    sVar8 = local_60;
  }
  pppppcVar15 = local_48;
  if (0xf < local_34) {
    pppppcVar15 = (char *****)local_48[0];
  }
  cVar1 = *(char *)pppppcVar15;
  iVar3 = local_68;
  while (((local_68 = iVar3, cVar1 != '\x7f' && (cVar1 = *(char *)pppppcVar15, '\0' < cVar1)) &&
         ((uint)(int)cVar1 < sVar8 - uVar14))) {
    sVar8 = sVar8 - (int)cVar1;
    FUN_1001b780(sVar8,1,local_50);
    pppppcVar12 = (char *****)((int)pppppcVar15 + 1);
    if (*(char *)((int)pppppcVar15 + 1) < '\x01') {
      pppppcVar12 = pppppcVar15;
    }
    cVar1 = *(char *)pppppcVar12;
    pppppcVar15 = pppppcVar12;
    iVar3 = local_68;
  }
  if (((*(int *)(iVar3 + 0x24) < 0) ||
      ((*(int *)(iVar3 + 0x24) < 1 && (*(int *)(iVar3 + 0x20) == 0)))) ||
     (*(uint *)(iVar3 + 0x20) <= local_20)) {
    iVar16 = 0;
  }
  else {
    iVar16 = *(uint *)(iVar3 + 0x20) - local_20;
  }
  uVar6 = *(uint *)(iVar3 + 0x14) & 0x1c0;
  local_60 = local_20;
  if (uVar6 == 0x40) {
    pppppuVar13 = local_30;
    if (0xf < local_1c) {
      pppppuVar13 = (undefined4 *****)local_30[0];
    }
    puVar10 = (undefined4 *)FUN_1001ab50(param_1,local_58,param_3,param_4,pppppuVar13,uVar14);
  }
  else if (uVar6 == 0x100) {
    pppppuVar13 = local_30;
    if (0xf < local_1c) {
      pppppuVar13 = (undefined4 *****)local_30[0];
    }
    puVar10 = (undefined4 *)FUN_1001ab50(param_1,local_58,param_3,param_4,pppppuVar13,uVar14);
    puVar10 = (undefined4 *)FUN_1001abd0(param_1,local_58,*puVar10,puVar10[1],param_6,iVar16);
    iVar16 = 0;
  }
  else {
    puVar10 = (undefined4 *)FUN_1001abd0(param_1,local_58,param_3,param_4,param_6,iVar16);
    iVar16 = 0;
    pppppuVar13 = local_30;
    if (0xf < local_1c) {
      pppppuVar13 = (undefined4 *****)local_30[0];
    }
    puVar10 = (undefined4 *)FUN_1001ab50(param_1,local_58,*puVar10,puVar10[1],pppppuVar13,uVar14);
  }
  local_4c = puVar10[1];
  pppppuVar13 = local_30;
  if (0xf < local_1c) {
    pppppuVar13 = (undefined4 *****)local_30[0];
  }
  puVar10 = (undefined4 *)
            FUN_1001ab50(param_1,local_6c,*puVar10,local_4c,(int)pppppuVar13 + uVar14,
                         local_60 - uVar14);
  uVar9 = *puVar10;
  uVar2 = puVar10[1];
  *(undefined4 *)(iVar3 + 0x20) = 0;
  *(undefined4 *)(iVar3 + 0x24) = 0;
  FUN_1001abd0(param_1,local_64,uVar9,uVar2,param_6,iVar16);
  if (0xf < local_34) {
    FUN_10003d70(local_48[0],local_34 + 1);
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = (char ****)((uint)local_48[0] & 0xffffff00);
  if (0xf < local_1c) {
    FUN_10003d70(local_30[0],local_1c + 1);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

