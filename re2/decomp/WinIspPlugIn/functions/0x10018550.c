// rea decompile_all
// name: FUN_10018550
// address: 0x10018550
// body: available
// range: 0x10018550-0x1001888a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void FUN_10018550(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 extraout_ECX;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 local_a38;
  undefined1 local_a34 [1220];
  int local_570;
  undefined4 local_56c;
  undefined4 local_568 [306];
  int local_a0;
  undefined4 local_9c;
  undefined1 local_98 [8];
  undefined4 *local_90;
  undefined4 local_8c;
  int *local_88;
  undefined4 local_84;
  uint local_80;
  int *local_7c;
  undefined1 local_34;
  undefined1 uStack_33;
  undefined2 uStack_32;
  undefined4 uStack_30;
  undefined1 uStack_2c;
  byte bStack_2b;
  undefined2 uStack_2a;
  undefined1 uStack_28;
  undefined2 uStack_27;
  undefined1 uStack_25;
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  puStack_18 = &LAB_101c1bd8;
  local_1c = ExceptionList;
  uVar2 = DAT_1023dfec ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  bStack_2b = 0;
  uStack_2a = 0;
  uStack_28 = 0;
  uStack_27 = 0;
  uStack_33 = 0;
  uStack_32 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_25 = 0;
  local_568[0] = 0;
  local_a0 = 0;
  local_9c = 0;
  local_24 = uVar2;
  _memset(local_568 + 1,0xff,0x4c4);
  local_a38 = 0;
  local_570 = 0;
  local_56c = 0;
  _memset(local_a34,0xff,0x4c4);
  if ((DAT_1024a2f0 == 0) && ((DAT_1024a1f8 == 1 || (DAT_1024a1f8 == 0x13)))) {
    local_7c = (int *)CONCAT31(local_7c._1_3_,0x4a);
  }
  else {
    local_7c = (int *)CONCAT31(local_7c._1_3_,0x6e);
  }
  piVar1 = local_7c;
  local_34 = 0x77;
  uStack_33 = 1;
  iVar3 = (**(code **)(*DAT_10249d10 + 0x13c))(local_7c,0x71,2,&local_34,uVar2);
  if (iVar3 == 0) {
    Sleep(200);
    local_34 = 0;
    uStack_33 = 0;
    uStack_32 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    bStack_2b = 0;
    uStack_2a = 0;
    uStack_28 = 0;
    uStack_27 = 0;
    uStack_25 = 0;
    iVar3 = (**(code **)(*DAT_10249d10 + 0x140))(piVar1,0x71,0x10,&local_34);
    if (iVar3 == 0) {
      uVar2 = (uint)bStack_2b;
      DAT_1024a2ec = uVar2;
      local_80 = uVar2;
      FUN_10048350(&DAT_1024a13c,L"Get Program Start Bank:%d! ",uVar2);
      FUN_10016860();
      local_a0 = (DAT_1024a2d0 + uVar2) * 0x10000 + -0x1000;
      _memset(local_568 + 1,0xff,0x4c4);
      local_568[1] = 0x5a535452;
      local_568[0] = 4;
      puVar5 = local_568;
      puVar6 = &DAT_1024a654;
      for (iVar3 = 0x134; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      _memset(local_a34,0xff,0x4c4);
      local_a34[0] = 0x55;
      local_570 = local_a0 + 4;
      local_a38 = 4;
      local_88 = (int *)0x0;
      puVar5 = &local_a38;
      puVar6 = &DAT_1024aff4;
      for (iVar3 = 0x134; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      local_84 = 0;
      local_88 = (int *)FUN_1000c2b0();
      local_14 = 0;
      local_90 = (undefined4 *)0x0;
      local_8c = 0;
      local_90 = (undefined4 *)FUN_1000c2b0();
      local_14 = CONCAT31(local_14._1_3_,1);
      FUN_1000b550();
      FUN_1000c880(&DAT_1024a2cc,local_80);
      uVar2 = local_80;
      local_7c = (int *)*local_88;
      if (local_7c != local_88) {
        do {
          local_80 = local_7c[4] + uVar2;
          uVar4 = FUN_1000c6d0(local_7c + 5);
          local_14._0_1_ = 2;
          iVar3 = FUN_1000cb30(uVar4);
          FUN_1000cb60(local_98,extraout_ECX,iVar3 + 0x10,iVar3);
          local_14 = CONCAT31(local_14._1_3_,1);
          FUN_10048130();
          FUN_1000a700();
        } while (local_7c != local_88);
      }
      FUN_1000b550();
      FUN_1000c880(&local_90,local_80);
      local_7c = (int *)*local_90;
      FUN_1000b550();
      FID_conflict__free(local_90);
      local_7c = (int *)*local_88;
      FUN_1000b550();
      FID_conflict__free(local_88);
    }
  }
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}

