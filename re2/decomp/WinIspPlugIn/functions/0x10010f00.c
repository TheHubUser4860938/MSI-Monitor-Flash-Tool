// rea decompile_all
// name: FUN_10010f00
// address: 0x10010f00
// body: available
// range: 0x10010f00-0x100112b8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10010f00(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5,undefined4 param_6,char *param_7,uint param_8)

{
  char cVar1;
  size_t sVar2;
  undefined1 uVar3;
  uint uVar4;
  size_t sVar5;
  lconv *plVar6;
  size_t sVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int *piVar10;
  char *****pppppcVar11;
  uint uVar12;
  undefined4 *****pppppuVar13;
  num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_> *pnVar14;
  char *_Control;
  uint uVar15;
  char *****pppppcVar16;
  int iVar17;
  undefined1 *puVar18;
  undefined4 uVar19;
  int iVar20;
  undefined1 local_58 [4];
  int *local_54;
  int *local_50;
  undefined2 local_4c [2];
  size_t local_48;
  char ****local_44 [4];
  undefined4 local_34;
  uint local_30;
  undefined4 ****local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101c174c;
  local_10 = ExceptionList;
  uVar4 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_48 = param_8;
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
  local_14 = uVar4;
  sVar5 = _strcspn(param_7,_Control);
  local_4c[0] = 0x2e;
  plVar6 = _localeconv();
  local_4c[0] = CONCAT11(local_4c[0]._1_1_,*plVar6->decimal_point);
  sVar7 = _strcspn(param_7,(char *)local_4c);
  uVar8 = FUN_100072b0(local_58);
  local_8 = 0;
  local_50 = (int *)FUN_1000c530(uVar8,uVar4);
  local_8 = 1;
  if ((local_54 != (int *)0x0) &&
     (puVar9 = (undefined4 *)(**(code **)(*local_54 + 8))(), puVar9 != (undefined4 *)0x0)) {
    (**(code **)*puVar9)(1);
  }
  local_8 = 0xffffffff;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (undefined4 ****)((uint)local_2c[0] & 0xffffff00);
  FUN_1000a990(local_48,0);
  local_8 = 2;
  pppppuVar13 = local_2c;
  if (0xf < local_18) {
    pppppuVar13 = (undefined4 *****)local_2c[0];
  }
  (**(code **)(*local_50 + 0x1c))(param_7,param_7 + local_48,pppppuVar13);
  uVar8 = FUN_100072b0(local_58);
  local_8._0_1_ = 3;
  piVar10 = (int *)FUN_10012020(uVar8);
  local_8._0_1_ = 4;
  if ((local_54 != (int *)0x0) &&
     (puVar9 = (undefined4 *)(**(code **)(*local_54 + 8))(), puVar9 != (undefined4 *)0x0)) {
    (**(code **)*puVar9)(1);
  }
  local_8._0_1_ = 2;
  FUN_100113f0(local_44);
  local_8 = CONCAT31(local_8._1_3_,5);
  uVar3 = (**(code **)(*piVar10 + 0x10))();
  sVar2 = local_48;
  local_50 = (int *)CONCAT31(local_50._1_3_,uVar3);
  if (sVar7 != local_48) {
    uVar3 = (**(code **)(*piVar10 + 0xc))();
    pppppuVar13 = local_2c;
    if (0xf < local_18) {
      pppppuVar13 = (undefined4 *****)local_2c[0];
    }
    *(undefined1 *)((int)pppppuVar13 + sVar7) = uVar3;
  }
  if (sVar7 == sVar2) {
    sVar7 = sVar5;
  }
  pppppcVar16 = local_44;
  if (0xf < local_30) {
    pppppcVar16 = (char *****)local_44[0];
  }
  cVar1 = *(char *)pppppcVar16;
  uVar4 = local_1c;
  while (((local_1c = uVar4, cVar1 != '\x7f' && (cVar1 = *(char *)pppppcVar16, '\0' < cVar1)) &&
         ((uint)(int)cVar1 < sVar7 - uVar15))) {
    sVar7 = sVar7 - (int)cVar1;
    FUN_100118a0(sVar7,1,local_50);
    pppppcVar11 = (char *****)((int)pppppcVar16 + 1);
    if (*(char *)((int)pppppcVar16 + 1) < '\x01') {
      pppppcVar11 = pppppcVar16;
    }
    cVar1 = *(char *)pppppcVar11;
    pppppcVar16 = pppppcVar11;
    uVar4 = local_1c;
  }
  if (((*(int *)(param_5 + 0x24) < 0) ||
      ((*(int *)(param_5 + 0x24) < 1 && (*(int *)(param_5 + 0x20) == 0)))) ||
     (*(uint *)(param_5 + 0x20) <= uVar4)) {
    iVar17 = 0;
  }
  else {
    iVar17 = *(uint *)(param_5 + 0x20) - uVar4;
  }
  uVar12 = *(uint *)(param_5 + 0x14) & 0x1c0;
  if (uVar12 == 0x40) {
    pppppuVar13 = local_2c;
    if (0xf < local_18) {
      pppppuVar13 = (undefined4 *****)local_2c[0];
    }
    puVar9 = (undefined4 *)FUN_10010a90(param_1,local_58,param_3,param_4,pppppuVar13,uVar15);
  }
  else if (uVar12 == 0x100) {
    pppppuVar13 = local_2c;
    if (0xf < local_18) {
      pppppuVar13 = (undefined4 *****)local_2c[0];
    }
    pnVar14 = (num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_> *)
              FUN_10010a90(param_1,local_58,param_3,param_4,pppppuVar13,uVar15);
    puVar9 = (undefined4 *)
             std::num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::_Rep
                       (pnVar14,param_1,local_58,*(undefined4 *)pnVar14,*(undefined4 *)(pnVar14 + 4)
                        ,param_6,iVar17);
    iVar17 = 0;
  }
  else {
    puVar18 = local_58;
    uVar8 = param_1;
    uVar19 = param_6;
    iVar20 = iVar17;
    puVar9 = (undefined4 *)
             std::num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::_Rep();
    iVar17 = 0;
    pppppuVar13 = local_2c;
    if (0xf < local_18) {
      pppppuVar13 = (undefined4 *****)local_2c[0];
    }
    puVar9 = (undefined4 *)
             FUN_10010a90(param_1,local_58,*puVar9,puVar9[1],pppppuVar13,uVar15,uVar8,puVar18,
                          param_3,param_4,uVar19,iVar20);
  }
  local_48 = puVar9[1];
  pppppuVar13 = local_2c;
  if (0xf < local_18) {
    pppppuVar13 = (undefined4 *****)local_2c[0];
  }
  puVar9 = (undefined4 *)
           FUN_10010a90(param_1,local_58,*puVar9,local_48,(int)pppppuVar13 + uVar15,uVar4 - uVar15);
  pnVar14 = (num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_> *)*puVar9;
  uVar8 = puVar9[1];
  *(undefined4 *)(param_5 + 0x20) = 0;
  *(undefined4 *)(param_5 + 0x24) = 0;
  std::num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::_Rep
            (pnVar14,param_1,param_2,pnVar14,uVar8,param_6,iVar17);
  if (0xf < local_30) {
    FUN_1000b630(local_44[0],local_30 + 1);
  }
  local_30 = 0xf;
  local_34 = 0;
  local_44[0] = (char ****)((uint)local_44[0] & 0xffffff00);
  if (0xf < local_18) {
    FUN_1000b630(local_2c[0],local_18 + 1);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

