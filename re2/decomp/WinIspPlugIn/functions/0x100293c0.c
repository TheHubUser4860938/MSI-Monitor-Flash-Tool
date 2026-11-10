// rea decompile_all
// name: FUN_100293c0
// address: 0x100293c0
// body: available
// range: 0x100293c0-0x100299e4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100293c0(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 extraout_ECX;
  byte bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 local_efc;
  undefined1 local_ef8;
  undefined4 local_ef7;
  undefined4 local_a34;
  undefined4 local_a30;
  undefined1 local_a28 [8];
  int *local_a20;
  undefined4 local_a1c;
  undefined4 *local_a18;
  uint local_a14;
  uint local_a10;
  byte local_a09;
  int *local_a08;
  undefined4 local_a04;
  undefined1 local_a00 [1220];
  undefined4 local_53c;
  undefined4 local_538;
  undefined4 local_534;
  undefined1 local_530 [1220];
  undefined4 local_6c;
  undefined4 local_68;
  char local_24;
  undefined8 local_23;
  undefined4 local_1b;
  undefined2 local_17;
  undefined1 local_15;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101c279e;
  local_10 = ExceptionList;
  uVar2 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_24 = '\0';
  local_1b = 0;
  local_23 = 0;
  local_17 = 0;
  local_15 = 0;
  local_534 = 0;
  local_6c = 0;
  local_68 = 0;
  local_14 = uVar2;
  _memset(local_530,0xff,0x4c4);
  local_a04 = 0;
  local_53c = 0;
  local_538 = 0;
  _memset(local_a00,0xff,0x4c4);
  local_efc = 0;
  local_a34 = 0;
  local_a30 = 0;
  _memset(&local_ef8,0xff,0x4c4);
  local_a20 = (int *)0x0;
  local_a1c = 0;
  local_a20 = (int *)FUN_1000c2b0(uVar2);
  local_8 = 0;
  local_a18 = (undefined4 *)0x0;
  local_a14 = 0;
  local_a18 = (undefined4 *)FUN_1000c2b0();
  local_8 = CONCAT31(local_8._1_3_,1);
  iVar3 = (**(code **)(*DAT_10249d10 + 0x14))();
  if (iVar3 != 8) {
    FUN_10048350(&DAT_1024a13c,L"The Comm Type Must be TypeCUSB, ErrorCode: 0x%x",0x13);
    FUN_1003fc00();
    FUN_10016860();
    goto LAB_10029977;
  }
  FUN_10048350(&DAT_1024a13c,L"Begin to Ask for User Start Bank!");
  FUN_10016860();
  iVar3 = (**(code **)(*DAT_10249d10 + 0x220))(0x45,2,0,5,&local_24);
  if ((iVar3 != 0) || (local_24 != 'E')) goto LAB_10029977;
  bVar5 = local_23._2_1_;
  local_a09 = local_23._2_1_;
  local_a10 = (uint)(ushort)((ushort)local_23._1_1_ * 0x100 + (ushort)(byte)local_23);
  iVar3 = (**(code **)(*DAT_10249d10 + 0x220))(0x45,4,0,5,&local_24);
  if ((iVar3 != 0) || (local_24 != 'E')) goto LAB_10029977;
  uVar6 = CONCAT31(CONCAT21(CONCAT11((byte)local_23,local_23._1_1_),local_23._2_1_),local_23._3_1_);
  FUN_10048350(&DAT_1024a13c,L"Ask for User Flag address: ulFlagAddr 0x%X",uVar6);
  FUN_10016860();
  local_a34 = uVar6;
  _memset(&local_ef8,0xff,0x4c4);
  local_ef8 = 0xaa;
  if (DAT_1024a2f4 == 2) {
    local_ef7 = 0xffffaaaa;
  }
  else if ((DAT_1024be80 != 0) || (DAT_1024a3b8 != 0)) {
    local_ef7._0_2_ = CONCAT11(0xaa,(undefined1)local_ef7);
  }
  local_efc = 5;
  puVar8 = &local_efc;
  puVar9 = &DAT_1024a654;
  for (iVar3 = 0x134; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  FUN_10007610(&local_a20);
  if ((DAT_1024a2d8 == 2) || ((DAT_1024a2d8 == 1 && (DAT_1024a2dc == 4)))) {
    iVar3 = (**(code **)(*DAT_10249d10 + 0x220))(0x45,3,0,5,&local_24);
    if ((iVar3 != 0) || (local_24 != 'E')) goto LAB_10029977;
    uVar6 = CONCAT31(CONCAT21(CONCAT11((byte)local_23,local_23._1_1_),local_23._2_1_),local_23._3_1_
                    );
    local_6c = uVar6;
    FUN_10048350(&DAT_1024a13c,L"Ask for ulKeyAddr address: ulFlagStartAddr 0x%X",uVar6);
    FUN_10016860();
    iVar3 = (**(code **)(*DAT_10249d10 + 0x220))(0x45,5,0,5,&local_24);
    if ((iVar3 != 0) || (local_24 != 'E')) goto LAB_10029977;
    uVar7 = CONCAT31(CONCAT21(CONCAT11((byte)local_23,local_23._1_1_),local_23._2_1_),local_23._3_1_
                    );
    local_6c = uVar6;
    FUN_10048350(&DAT_1024a13c,L"Ask for ulKeyAddr address: ulFlagStartAddr 0x%X",uVar6);
    FUN_10016860();
    local_53c = uVar7;
    FUN_10048350(&DAT_1024a13c,L"Ask for ulSigAddr address: ulSigAddr 0x%X",uVar7);
    FUN_10016860();
    piVar1 = local_a20;
    local_a08 = local_a20;
    FUN_1000ccd0();
    iVar3 = FUN_10020110(&local_a04);
    if (iVar3 != 0) goto LAB_10029977;
    local_a08 = piVar1;
    puVar8 = &local_534;
    puVar9 = &DAT_1024b4c4;
    for (iVar3 = 0x134; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    puVar8 = &local_a04;
    puVar9 = &DAT_1024b994;
    for (iVar3 = 0x134; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    FUN_1000ccd0();
    FUN_1002bd50(local_a08 + 4);
    bVar5 = local_a09;
  }
  uVar2 = local_a10 & 0xffff;
  DAT_1024a2ec = uVar2;
  if (bVar5 != 0) {
    uVar4 = (uint)bVar5;
    if (DAT_1024a2d8 == 2) {
      if (uVar4 != local_a14) {
LAB_10029938:
        FUN_10048350(&DAT_1024a13c,L"FW size check Error : FW:%d Actual:%d",uVar4,local_a14);
        FUN_10016860();
        goto LAB_10029977;
      }
    }
    else if (uVar4 < local_a14) goto LAB_10029938;
  }
  local_a08 = (int *)*local_a20;
  if (local_a08 != local_a20) {
    do {
      local_a10 = local_a08[4] + uVar2;
      uVar6 = FUN_1000c6d0(local_a08 + 5);
      local_8._0_1_ = 2;
      iVar3 = FUN_1000cb30(uVar6);
      FUN_1000cb60(local_a28,extraout_ECX,iVar3 + 0x10,iVar3);
      local_8 = CONCAT31(local_8._1_3_,1);
      FUN_10048130();
      FUN_1000a700();
    } while (local_a08 != local_a20);
  }
  FUN_1000b550();
  FUN_1000c880(&local_a18,local_a10);
  FUN_10048350(&DAT_1024a13c,L"SetupIspProgramAddressOneBankMode end : enumError 0x%X",0);
  FUN_10016860();
LAB_10029977:
  local_a08 = (int *)*local_a18;
  FUN_1000b550();
  FID_conflict__free(local_a18);
  local_a08 = (int *)*local_a20;
  FUN_1000b550();
  FID_conflict__free(local_a20);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

