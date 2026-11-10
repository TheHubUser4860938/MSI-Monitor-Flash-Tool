// rea decompile_all
// name: FUN_00404f70
// address: 0x404f70
// body: available
// range: 0x404f70-0x4052fc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00404f70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5,undefined4 param_6,char *param_7,uint param_8)

{
  char cVar1;
  undefined4 uVar2;
  size_t sVar3;
  undefined1 uVar4;
  uint uVar5;
  size_t sVar6;
  lconv *plVar7;
  size_t sVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int *piVar11;
  char *****pppppcVar12;
  uint uVar13;
  undefined4 *****pppppuVar14;
  char *_Control;
  uint uVar15;
  char *****pppppcVar16;
  int iVar17;
  undefined1 local_58 [4];
  int *local_54;
  int *local_50;
  size_t local_4c;
  char ****local_48 [5];
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
  puStack_c = &LAB_0059bfdc;
  local_10 = ExceptionList;
  uVar5 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_4c = param_8;
  if ((param_8 == 0) || ((*param_7 != '+' && (*param_7 != '-')))) {
    uVar15 = 0;
  }
  else {
    uVar15 = 1;
  }
  if ((*(uint *)(param_5 + 0x14) & 0x3000) == 0x3000) {
    _Control = "pP";
    if (((uVar15 + 2 <= param_8) && (param_7[uVar15] == '0')) &&
       ((param_7[uVar15 + 1] == 'x' || (param_7[uVar15 + 1] == 'X')))) {
      uVar15 = uVar15 + 2;
    }
  }
  else {
    _Control = "eE";
  }
  local_14 = uVar5;
  sVar6 = _strcspn(param_7,_Control);
  local_18[0] = 0x2e;
  plVar7 = _localeconv();
  local_18[0] = CONCAT11(local_18[0]._1_1_,*plVar7->decimal_point);
  sVar8 = _strcspn(param_7,(char *)local_18);
  uVar9 = FUN_00402ad0(local_58);
  local_8 = 0;
  local_50 = (int *)FUN_00405f50(uVar9,uVar5);
  local_8 = 1;
  if ((local_54 != (int *)0x0) &&
     (puVar10 = (undefined4 *)(**(code **)(*local_54 + 8))(), puVar10 != (undefined4 *)0x0)) {
    (**(code **)*puVar10)(1);
  }
  local_8 = 0xffffffff;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = (undefined4 ****)((uint)local_30[0] & 0xffffff00);
  FUN_00404310(local_4c,0);
  local_8 = 2;
  pppppuVar14 = local_30;
  if (0xf < local_1c) {
    pppppuVar14 = (undefined4 *****)local_30[0];
  }
  (**(code **)(*local_50 + 0x1c))(param_7,param_7 + local_4c,pppppuVar14);
  uVar9 = FUN_00402ad0(local_58);
  local_8._0_1_ = 3;
  piVar11 = (int *)FUN_00406230(uVar9);
  local_8._0_1_ = 4;
  if ((local_54 != (int *)0x0) &&
     (puVar10 = (undefined4 *)(**(code **)(*local_54 + 8))(), puVar10 != (undefined4 *)0x0)) {
    (**(code **)*puVar10)(1);
  }
  local_8._0_1_ = 2;
  FUN_00405990(local_48);
  local_8 = CONCAT31(local_8._1_3_,5);
  uVar4 = (**(code **)(*piVar11 + 0x10))();
  sVar3 = local_4c;
  local_50 = (int *)CONCAT31(local_50._1_3_,uVar4);
  if (sVar8 != local_4c) {
    uVar4 = (**(code **)(*piVar11 + 0xc))();
    pppppuVar14 = local_30;
    if (0xf < local_1c) {
      pppppuVar14 = (undefined4 *****)local_30[0];
    }
    *(undefined1 *)((int)pppppuVar14 + sVar8) = uVar4;
  }
  if (sVar8 == sVar3) {
    sVar8 = sVar6;
  }
  pppppcVar16 = local_48;
  if (0xf < local_34) {
    pppppcVar16 = (char *****)local_48[0];
  }
  cVar1 = *(char *)pppppcVar16;
  uVar5 = local_20;
  while (((local_20 = uVar5, cVar1 != '\x7f' && (cVar1 = *(char *)pppppcVar16, '\0' < cVar1)) &&
         ((uint)(int)cVar1 < sVar8 - uVar15))) {
    sVar8 = sVar8 - (int)cVar1;
    FUN_00405d30(sVar8,1,local_50);
    pppppcVar12 = (char *****)((int)pppppcVar16 + 1);
    if (*(char *)((int)pppppcVar16 + 1) < '\x01') {
      pppppcVar12 = pppppcVar16;
    }
    cVar1 = *(char *)pppppcVar12;
    pppppcVar16 = pppppcVar12;
    uVar5 = local_20;
  }
  if (((*(int *)(param_5 + 0x24) < 0) ||
      ((*(int *)(param_5 + 0x24) < 1 && (*(int *)(param_5 + 0x20) == 0)))) ||
     (*(uint *)(param_5 + 0x20) <= uVar5)) {
    iVar17 = 0;
  }
  else {
    iVar17 = *(uint *)(param_5 + 0x20) - uVar5;
  }
  uVar13 = *(uint *)(param_5 + 0x14) & 0x1c0;
  if (uVar13 == 0x40) {
    pppppuVar14 = local_30;
    if (0xf < local_1c) {
      pppppuVar14 = (undefined4 *****)local_30[0];
    }
    puVar10 = (undefined4 *)FUN_00404b30(param_1,local_58,param_3,param_4,pppppuVar14,uVar15);
  }
  else if (uVar13 == 0x100) {
    pppppuVar14 = local_30;
    if (0xf < local_1c) {
      pppppuVar14 = (undefined4 *****)local_30[0];
    }
    puVar10 = (undefined4 *)FUN_00404b30(param_1,local_58,param_3,param_4,pppppuVar14,uVar15);
    puVar10 = (undefined4 *)FUN_00404ab0(param_1,local_58,*puVar10,puVar10[1],param_6,iVar17);
    iVar17 = 0;
  }
  else {
    puVar10 = (undefined4 *)FUN_00404ab0(param_1,local_58,param_3,param_4,param_6,iVar17);
    iVar17 = 0;
    pppppuVar14 = local_30;
    if (0xf < local_1c) {
      pppppuVar14 = (undefined4 *****)local_30[0];
    }
    puVar10 = (undefined4 *)FUN_00404b30(param_1,local_58,*puVar10,puVar10[1],pppppuVar14,uVar15);
  }
  local_4c = puVar10[1];
  pppppuVar14 = local_30;
  if (0xf < local_1c) {
    pppppuVar14 = (undefined4 *****)local_30[0];
  }
  puVar10 = (undefined4 *)
            FUN_00404b30(param_1,local_58,*puVar10,local_4c,(int)pppppuVar14 + uVar15,uVar5 - uVar15
                        );
  uVar9 = *puVar10;
  uVar2 = puVar10[1];
  *(undefined4 *)(param_5 + 0x20) = 0;
  *(undefined4 *)(param_5 + 0x24) = 0;
  FUN_00404ab0(param_1,param_2,uVar9,uVar2,param_6,iVar17);
  FUN_004033e0();
  FUN_004033e0();
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

