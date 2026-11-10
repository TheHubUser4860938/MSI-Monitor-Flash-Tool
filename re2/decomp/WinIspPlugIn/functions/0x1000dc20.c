// rea decompile_all
// name: FUN_1000dc20
// address: 0x1000dc20
// body: available
// range: 0x1000dc20-0x1000df6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000dc20(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 ***pppuVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  undefined **local_80;
  undefined2 local_7c [8];
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 local_64;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c [5];
  uint local_38;
  undefined4 **local_34 [4];
  int local_24;
  uint local_20;
  undefined8 local_1c;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_101c12e0;
  local_10 = ExceptionList;
  local_14 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = (undefined4 **)((uint)local_34[0] & 0xffffff00);
  local_68 = 7;
  local_6c = 0;
  local_7c[0] = 0;
  local_80 = CCpRsString::vftable;
  local_50 = 0xf;
  local_54 = 0;
  local_64 = 0;
  local_8 = 1;
  uStack_7 = 0;
  *param_2 = *param_1;
  uVar1 = *(undefined8 *)(param_1 + 1);
  pcVar7 = (char *)(param_1 + 3);
  local_1c._0_4_ = (undefined4)uVar1;
  param_2[1] = (undefined4)local_1c;
  local_1c._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
  param_2[2] = local_1c._4_4_;
  if (*pcVar7 == '\0') {
    iVar5 = 0;
  }
  else {
    pcVar8 = pcVar7;
    do {
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
    iVar5 = (int)pcVar8 - ((int)param_1 + 0xd);
  }
  local_1c = uVar1;
  FUN_1000aa60(pcVar7,iVar5);
  iVar5 = local_24 + 1;
  uVar3 = FUN_10048c90(local_4c,local_34);
  local_8 = 2;
  FUN_10046260(uVar3,0,0xffffffff);
  _local_8 = CONCAT31(uStack_7,1);
  if (7 < local_38) {
    FUN_1000b5d0(local_4c[0],local_38 + 1);
  }
  if (((undefined ***)(param_2 + 3) != &local_80) && (param_2 + 4 != (undefined4 *)local_7c)) {
    FUN_10046260(local_7c,0,0xffffffff);
  }
  pcVar7 = pcVar7 + iVar5;
  local_24 = 0;
  pppuVar4 = local_34;
  if (0xf < local_20) {
    pppuVar4 = (undefined4 ***)local_34[0];
  }
  local_1c = 0;
  *(undefined1 *)pppuVar4 = 0;
  *(undefined2 *)(param_2 + 0x10) = *(undefined2 *)pcVar7;
  *(char *)((int)param_2 + 0x42) = pcVar7[2];
  param_2[0x11] = *(undefined4 *)(pcVar7 + 3);
  param_2[0x12] = *(undefined4 *)(pcVar7 + 7);
  param_2[0x13] = *(undefined4 *)(pcVar7 + 0xb);
  param_2[0x14] = *(undefined4 *)(pcVar7 + 0xf);
  param_2[0x15] = *(undefined4 *)(pcVar7 + 0x13);
  pcVar8 = pcVar7 + 0x1b;
  param_2[0x16] = *(undefined4 *)(pcVar7 + 0x17);
  if (*pcVar8 == '\0') {
    iVar5 = 0;
  }
  else {
    pcVar6 = pcVar8;
    do {
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    iVar5 = (int)pcVar6 - (int)(pcVar7 + 0x1c);
  }
  FUN_1000aa60(pcVar8,iVar5);
  iVar5 = local_24 + 1;
  local_1c = CONCAT44(iVar5,(undefined4)local_1c);
  uVar3 = FUN_10048c90(local_4c,local_34);
  local_8 = 3;
  FUN_10046260(uVar3,0,0xffffffff);
  _local_8 = CONCAT31(uStack_7,1);
  if (7 < local_38) {
    FUN_1000b5d0(local_4c[0],local_38 + 1);
  }
  if (((undefined ***)(param_2 + 0x17) != &local_80) && (param_2 + 0x18 != (undefined4 *)local_7c))
  {
    FUN_10046260(local_7c,0,0xffffffff);
  }
  pcVar8 = pcVar8 + iVar5;
  local_24 = 0;
  pppuVar4 = local_34;
  if (0xf < local_20) {
    pppuVar4 = (undefined4 ***)local_34[0];
  }
  *(undefined1 *)pppuVar4 = 0;
  pcVar7 = pcVar8 + 4;
  param_2[0x24] = *(undefined4 *)pcVar8;
  if (*pcVar7 == '\0') {
    iVar5 = 0;
  }
  else {
    pcVar6 = pcVar7;
    do {
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    iVar5 = (int)pcVar6 - (int)(pcVar8 + 5);
  }
  FUN_1000aa60(pcVar7,iVar5);
  iVar5 = local_24 + 1;
  uVar3 = FUN_10048c90(local_4c,local_34);
  local_8 = 4;
  FUN_10046260(uVar3,0,0xffffffff);
  _local_8 = CONCAT31(uStack_7,1);
  if (7 < local_38) {
    FUN_1000b5d0(local_4c[0],local_38 + 1);
  }
  if (((undefined ***)(param_2 + 0x25) != &local_80) && (param_2 + 0x26 != (undefined4 *)local_7c))
  {
    FUN_10046260(local_7c,0,0xffffffff);
  }
  pcVar7 = pcVar7 + iVar5;
  if (*pcVar7 == '\0') {
    iVar5 = 0;
  }
  else {
    pcVar8 = pcVar7;
    do {
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
    iVar5 = (int)pcVar8 - (int)(pcVar7 + 1);
  }
  FUN_1000aa60(pcVar7,iVar5);
  uVar3 = FUN_10048c90(local_4c,local_34);
  local_8 = 5;
  FUN_10046260(uVar3,0,0xffffffff);
  _local_8 = CONCAT31(uStack_7,1);
  if (7 < local_38) {
    FUN_1000b5d0(local_4c[0],local_38 + 1);
  }
  if (((undefined ***)(param_2 + 0x32) != &local_80) && (param_2 + 0x33 != (undefined4 *)local_7c))
  {
    FUN_10046260(local_7c,0,0xffffffff);
  }
  FUN_10048130();
  if (0xf < local_20) {
    FUN_1000b630(local_34[0],local_20 + 1);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

