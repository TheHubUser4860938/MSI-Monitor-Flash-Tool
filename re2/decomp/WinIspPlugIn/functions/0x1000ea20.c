// rea decompile_all
// name: FUN_1000ea20
// address: 0x1000ea20
// body: available
// range: 0x1000ea20-0x1000ee14 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x1000ecd0) */
/* WARNING: Removing unreachable block (ram,0x1000ecd6) */
/* WARNING: Removing unreachable block (ram,0x1000ece1) */
/* WARNING: Removing unreachable block (ram,0x1000ecf4) */
/* WARNING: Removing unreachable block (ram,0x1000ecef) */
/* WARNING: Removing unreachable block (ram,0x1000ecf8) */
/* WARNING: Removing unreachable block (ram,0x1000ecfe) */
/* WARNING: Removing unreachable block (ram,0x1000ed08) */
/* WARNING: Removing unreachable block (ram,0x1000ed16) */
/* WARNING: Removing unreachable block (ram,0x1000ed18) */
/* WARNING: Removing unreachable block (ram,0x1000ed2f) */
/* WARNING: Removing unreachable block (ram,0x1000ec81) */
/* WARNING: Removing unreachable block (ram,0x1000ecc5) */
/* WARNING: Removing unreachable block (ram,0x1000ec9f) */
/* WARNING: Removing unreachable block (ram,0x1000ed41) */
/* WARNING: Removing unreachable block (ram,0x1000ed47) */

void FUN_1000ea20(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  uint *puVar4;
  undefined4 uVar5;
  undefined4 extraout_ECX;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined1 local_90 [4];
  undefined4 local_8c;
  undefined4 *local_88;
  undefined4 local_84;
  undefined4 *local_80;
  undefined4 local_7c [5];
  uint local_68;
  undefined **local_64;
  uint local_60;
  undefined4 local_50;
  uint local_4c;
  uint local_48;
  undefined4 local_38;
  uint local_34;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101c1445;
  local_10 = ExceptionList;
  local_18 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8c = param_2;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  local_4c = 7;
  local_50 = 0;
  local_60 = local_60 & 0xffff0000;
  local_64 = CCpRsString::vftable;
  local_34 = 0xf;
  local_38 = 0;
  local_48 = local_48 & 0xffffff00;
  local_8._0_1_ = 3;
  local_8._1_3_ = 0;
  local_88 = (undefined4 *)0x0;
  local_84 = 0;
  local_88 = (undefined4 *)FUN_100119b0(local_18);
  local_8 = CONCAT31(local_8._1_3_,4);
  FUN_1000ee50(&local_88,param_2);
  puVar4 = (uint *)FUN_1000e7a0(local_7c,param_1,extraout_ECX);
  if (local_30 != puVar4) {
    if (0xf < local_1c) {
      FUN_1000b630(local_30[0],local_1c + 1);
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_1000af70(puVar4);
  }
  local_8._0_1_ = 4;
  if (0xf < local_68) {
    FUN_1000b630(local_7c[0],local_68 + 1);
  }
  uVar5 = FUN_10048c90(local_7c,local_30);
  local_8._0_1_ = 6;
  FUN_10046260(uVar5,0,0xffffffff);
  local_8 = CONCAT31(local_8._1_3_,4);
  if (7 < local_68) {
    FUN_1000b5d0(local_7c[0],local_68 + 1);
  }
  cVar3 = *(char *)((int)local_88[1] + 0xd);
  puVar7 = (undefined4 *)local_88[1];
  puVar1 = local_88;
  while (puVar6 = puVar7, cVar3 == '\0') {
    cVar3 = FUN_10047f60();
    if (cVar3 == '\0') {
      puVar7 = (undefined4 *)*puVar6;
    }
    else {
      puVar7 = (undefined4 *)puVar6[2];
      puVar6 = puVar1;
    }
    cVar3 = *(char *)((int)puVar7 + 0xd);
    puVar1 = puVar6;
  }
  cVar3 = *(char *)((int)local_88[1] + 0xd);
  puVar7 = (undefined4 *)local_88[1];
  puVar6 = local_88;
  while (local_80 = puVar6, cVar3 == '\0') {
    cVar3 = FUN_10047f60();
    if (cVar3 == '\0') {
      puVar6 = (undefined4 *)puVar7[2];
    }
    else {
      puVar6 = (undefined4 *)*puVar7;
      local_80 = puVar7;
    }
    cVar3 = *(char *)((int)puVar6 + 0xd);
    puVar7 = puVar6;
    puVar6 = local_80;
  }
  while (puVar1 != puVar6) {
    FUN_1000f240(puVar1 + 0x11);
    if (*(char *)((int)puVar1 + 0xd) == '\0') {
      puVar7 = (undefined4 *)puVar1[2];
      if (*(char *)((int)puVar7 + 0xd) == '\0') {
        cVar3 = *(char *)((int)*puVar7 + 0xd);
        puVar1 = puVar7;
        puVar7 = (undefined4 *)*puVar7;
        while (cVar3 == '\0') {
          cVar3 = *(char *)((int)*puVar7 + 0xd);
          puVar1 = puVar7;
          puVar7 = (undefined4 *)*puVar7;
        }
      }
      else {
        cVar3 = *(char *)((int)puVar1[1] + 0xd);
        puVar2 = (undefined4 *)puVar1[1];
        puVar7 = puVar1;
        while ((puVar1 = puVar2, cVar3 == '\0' && (puVar7 == (undefined4 *)puVar1[2]))) {
          cVar3 = *(char *)((int)puVar1[1] + 0xd);
          puVar2 = (undefined4 *)puVar1[1];
          puVar7 = puVar1;
        }
      }
    }
  }
  FUN_100107a0(local_90,*local_88,local_88);
  FID_conflict__free(local_88);
  local_8 = CONCAT31(local_8._1_3_,8);
  FUN_1000fb20();
  FUN_1000fc10();
  local_64 = CCpRsString::vftable;
  if (0xf < local_34) {
    FUN_1000b630(local_48,local_34 + 1);
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48 = local_48 & 0xffffff00;
  if (7 < local_4c) {
    FUN_1000b5d0(local_60,local_4c + 1);
  }
  local_4c = 7;
  local_50 = 0;
  local_60 = local_60 & 0xffff0000;
  if (0xf < local_1c) {
    FUN_1000b630(local_30[0],local_1c + 1);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}

