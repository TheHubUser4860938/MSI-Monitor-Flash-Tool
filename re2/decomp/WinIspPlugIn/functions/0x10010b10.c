// rea decompile_all
// name: FUN_10010b10
// address: 0x10010b10
// body: available
// range: 0x10010b10-0x10010e68 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10010b10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5,undefined4 param_6,char *param_7,uint param_8)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char ****ppppcVar6;
  undefined4 ****ppppuVar7;
  num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_> *pnVar8;
  uint uVar9;
  char ****ppppcVar10;
  int iVar11;
  undefined1 *puVar12;
  undefined4 uVar13;
  int iVar14;
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
  puStack_c = &LAB_101c16ec;
  local_10 = ExceptionList;
  uVar3 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
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
  local_14 = uVar3;
  uVar4 = FUN_100072b0(local_54);
  local_8 = 0;
  local_4c = (int *)FUN_1000c530(uVar4,uVar3);
  local_8 = 1;
  if ((local_50 != (int *)0x0) &&
     (puVar5 = (undefined4 *)(**(code **)(*local_50 + 8))(), puVar5 != (undefined4 *)0x0)) {
    (**(code **)*puVar5)(1);
  }
  local_8 = 0xffffffff;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (undefined4 ***)((uint)local_2c[0] & 0xffffff00);
  FUN_1000a990(param_8,0);
  local_8 = 2;
  ppppuVar7 = local_2c;
  if (0xf < local_18) {
    ppppuVar7 = (undefined4 ****)local_2c[0];
  }
  (**(code **)(*local_4c + 0x1c))(local_48,(char *)((int)local_48 + param_8),ppppuVar7);
  uVar4 = FUN_100072b0(local_54);
  local_8._0_1_ = 3;
  local_48 = (int *)FUN_10012020(uVar4);
  local_8._0_1_ = 4;
  if ((local_50 != (int *)0x0) &&
     (puVar5 = (undefined4 *)(**(code **)(*local_50 + 8))(), puVar5 != (undefined4 *)0x0)) {
    (**(code **)*puVar5)(1);
  }
  local_8._0_1_ = 2;
  FUN_100113f0(local_44);
  local_8 = CONCAT31(local_8._1_3_,5);
  ppppcVar10 = local_44;
  if (0xf < local_30) {
    ppppcVar10 = (char ****)local_44[0];
  }
  if ((*(char *)ppppcVar10 != '\x7f') && ('\0' < *(char *)ppppcVar10)) {
    uVar2 = (**(code **)(*local_48 + 0x10))();
    cVar1 = *(char *)ppppcVar10;
    local_48 = (int *)CONCAT31(local_48._1_3_,uVar2);
    while (((cVar1 != '\x7f' && (cVar1 = *(char *)ppppcVar10, '\0' < cVar1)) &&
           ((uint)(int)cVar1 < param_8 - uVar9))) {
      param_8 = param_8 - (int)cVar1;
      FUN_100118a0(param_8,1,local_48);
      ppppcVar6 = (char ****)((int)ppppcVar10 + 1);
      if (*(char *)((int)ppppcVar10 + 1) < '\x01') {
        ppppcVar6 = ppppcVar10;
      }
      cVar1 = *(char *)ppppcVar6;
      ppppcVar10 = ppppcVar6;
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
  uVar3 = *(uint *)(param_5 + 0x14) & 0x1c0;
  if (uVar3 == 0x40) {
    ppppuVar7 = local_2c;
    if (0xf < local_18) {
      ppppuVar7 = (undefined4 ****)local_2c[0];
    }
    puVar5 = (undefined4 *)FUN_10010a90(param_1,local_54,param_3,param_4,ppppuVar7,uVar9);
  }
  else if (uVar3 == 0x100) {
    ppppuVar7 = local_2c;
    if (0xf < local_18) {
      ppppuVar7 = (undefined4 ****)local_2c[0];
    }
    pnVar8 = (num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_> *)
             FUN_10010a90(param_1,local_54,param_3,param_4,ppppuVar7,uVar9);
    puVar5 = (undefined4 *)
             std::num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::_Rep
                       (pnVar8,param_1,local_54,*(undefined4 *)pnVar8,*(undefined4 *)(pnVar8 + 4),
                        param_6,iVar11);
    iVar11 = 0;
  }
  else {
    puVar12 = local_54;
    uVar4 = param_1;
    uVar13 = param_6;
    iVar14 = iVar11;
    puVar5 = (undefined4 *)
             std::num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::_Rep();
    iVar11 = 0;
    ppppuVar7 = local_2c;
    if (0xf < local_18) {
      ppppuVar7 = (undefined4 ****)local_2c[0];
    }
    puVar5 = (undefined4 *)
             FUN_10010a90(param_1,local_54,*puVar5,puVar5[1],ppppuVar7,uVar9,uVar4,puVar12,param_3,
                          param_4,uVar13,iVar14);
  }
  local_4c = (int *)puVar5[1];
  ppppuVar7 = local_2c;
  if (0xf < local_18) {
    ppppuVar7 = (undefined4 ****)local_2c[0];
  }
  puVar5 = (undefined4 *)
           FUN_10010a90(param_1,local_54,*puVar5,local_4c,(int)ppppuVar7 + uVar9,
                        (int)local_48 - uVar9);
  pnVar8 = (num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_> *)*puVar5;
  uVar4 = puVar5[1];
  *(undefined4 *)(param_5 + 0x20) = 0;
  *(undefined4 *)(param_5 + 0x24) = 0;
  std::num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::_Rep
            (pnVar8,param_1,param_2,pnVar8,uVar4,param_6,iVar11);
  if (0xf < local_30) {
    FUN_1000b630(local_44[0],local_30 + 1);
  }
  local_30 = 0xf;
  local_34 = 0;
  local_44[0] = (char ***)((uint)local_44[0] & 0xffffff00);
  if (0xf < local_18) {
    FUN_1000b630(local_2c[0],local_18 + 1);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

