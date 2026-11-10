// rea decompile_all
// name: FUN_10019640
// address: 0x10019640
// body: available
// range: 0x10019640-0x10019def inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10019640(void)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 extraout_ECX;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 local_efc;
  undefined1 local_ef8;
  undefined4 local_ef7;
  undefined4 local_a34;
  undefined4 local_a30;
  undefined1 local_a2c [8];
  undefined4 *local_a24;
  uint local_a20;
  undefined4 *local_a1c;
  int local_a18;
  byte local_a11;
  undefined4 *local_a10;
  undefined4 *local_a0c;
  undefined1 local_a05;
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
  puStack_c = &LAB_101c1c1e;
  local_10 = ExceptionList;
  uVar2 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_24 = '\0';
  local_1b = 0;
  local_23 = 0;
  local_17 = 0;
  local_15 = 0;
  local_a05 = 0;
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
  iVar4 = DAT_1024be74;
  local_a1c = (undefined4 *)0x0;
  local_a18 = 0;
  local_a1c = (undefined4 *)FUN_1000c2b0(uVar2);
  local_8 = 0;
  local_a24 = (undefined4 *)0x0;
  local_a20 = 0;
  local_a24 = (undefined4 *)FUN_1000c2b0();
  local_8 = CONCAT31(local_8._1_3_,1);
  local_a11 = 0;
  local_a10 = (undefined4 *)0x0;
  if (((DAT_1024a2d4 == 5) || (DAT_1024a2d4 == 6)) || (DAT_1024a2d4 == 7)) {
    if (0 < iVar4) {
      while( true ) {
        local_a05 = 2;
        local_a0c = (undefined4 *)(**(code **)(*DAT_10249d10 + 0x74))(0x6a,0xca,1,&local_a05,0);
        if (local_a0c != (undefined4 *)0x0) break;
        Sleep(DAT_1024be70);
        iVar3 = (**(code **)(*DAT_10249d10 + 0x78))(0x6a,0xca,5,&local_24,0);
        FUN_10048350(&DAT_1024a13c,
                     L"Ask for Start bank  enumError:0x%X data: 0x%02X, 0x%02X,0x%02x, Fw code size: 0x%02X"
                     ,iVar3,local_24,(byte)local_23,local_23._1_1_,local_23._2_1_);
        FUN_10016860();
        if ((local_24 == -0x36) && (iVar3 == 0)) {
          local_a10 = (undefined4 *)
                      (uint)(ushort)((ushort)local_23._1_1_ * 0x100 + (ushort)(byte)local_23);
          local_a11 = local_23._2_1_;
          if ((0 < iVar4) && (iVar4 = DAT_1024be74, 0 < DAT_1024be74)) goto LAB_10019910;
          break;
        }
        iVar4 = iVar4 + -1;
        if (iVar4 < 1) break;
      }
    }
    goto LAB_1001985f;
  }
LAB_10019a58:
  FUN_1000b550();
  FUN_1000c880(&DAT_1024a2cc,local_a10);
  if ((DAT_1024a2d8 == 2) || ((DAT_1024a2d8 == 1 && (DAT_1024a2dc == 4)))) {
    iVar4 = DAT_1024be74;
    if (0 < DAT_1024be74) {
      while( true ) {
        local_a05 = 3;
        local_a0c = (undefined4 *)(**(code **)(*DAT_10249d10 + 0x74))(0x6a,0xca,1,&local_a05,0);
        if (local_a0c != (undefined4 *)0x0) break;
        Sleep(100);
        iVar3 = (**(code **)(*DAT_10249d10 + 0x78))(0x6a,0xca,5,&local_24,0);
        if ((local_24 == -0x36) && (iVar3 == 0)) {
          uVar6 = CONCAT31(CONCAT21(CONCAT11((byte)local_23,local_23._1_1_),local_23._2_1_),
                           local_23._3_1_);
          if (0 < iVar4) {
            local_6c = uVar6;
            FUN_10048350(&DAT_1024a13c,L"Ask for ulKeyAddr address: ulFlagStartAddr 0x%X",uVar6);
            FUN_10016860();
            iVar4 = DAT_1024be74;
            if (0 < DAT_1024be74) goto LAB_10019b70;
          }
          break;
        }
        iVar4 = iVar4 + -1;
        if (iVar4 < 1) break;
      }
    }
    goto LAB_1001985f;
  }
LAB_10019cb7:
  uVar2 = (uint)local_a10 & 0xffff;
  DAT_1024a2ec = uVar2;
  if (0x1ff < local_a18 + uVar2) goto LAB_1001985f;
  local_a10 = (undefined4 *)*local_a1c;
  if (local_a10 != local_a1c) {
    do {
      local_a0c = (undefined4 *)(local_a10[4] + uVar2);
      uVar6 = FUN_1000c6d0(local_a10 + 5);
      local_8._0_1_ = 2;
      iVar4 = FUN_1000cb30(uVar6);
      FUN_1000cb60(local_a2c,extraout_ECX,iVar4 + 0x10,iVar4);
      local_8 = CONCAT31(local_8._1_3_,1);
      FUN_10048130();
      FUN_1000a700();
    } while (local_a10 != local_a1c);
  }
  FUN_1000b550();
  FUN_1000c880(&local_a24,local_a10);
  if (local_a11 != 0) {
    uVar2 = (uint)local_a11;
    if (DAT_1024a2d8 == 2) {
      if (uVar2 != local_a20) {
LAB_10019dc8:
        FUN_10048350(&DAT_1024a13c,L"FW size check Error : FW:%d Actual:%d",uVar2,local_a20);
        FUN_10016860();
        goto LAB_1001985f;
      }
    }
    else if (uVar2 < local_a20) goto LAB_10019dc8;
  }
  FUN_10048350(&DAT_1024a13c,L"SetupIspProgramAddressOneBankMode end : enumError 0x%X",0);
  FUN_10016860();
LAB_1001985f:
  local_a10 = (undefined4 *)*local_a24;
  FUN_1000b550();
  FID_conflict__free(local_a24);
  local_a10 = (undefined4 *)*local_a1c;
  FUN_1000b550();
  FID_conflict__free(local_a1c);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
LAB_10019910:
  local_a05 = 4;
  local_a0c = (undefined4 *)(**(code **)(*DAT_10249d10 + 0x74))(0x6a,0xca,1,&local_a05,0);
  if (local_a0c == (undefined4 *)0x0) {
    Sleep(DAT_1024be70);
    iVar3 = (**(code **)(*DAT_10249d10 + 0x78))(0x6a,0xca,5,&local_24,0);
    FUN_10048350(&DAT_1024a13c,L"Ask for User Flag address , enumError:0x%X data: 0x%02X",iVar3,
                 local_24);
    FUN_10016860();
    if ((local_24 != -0x36) || (iVar3 != 0)) goto LAB_10019992;
    uVar6 = CONCAT31(CONCAT21(CONCAT11((byte)local_23,local_23._1_1_),local_23._2_1_),local_23._3_1_
                    );
    if (0 < iVar4) {
      FUN_10048350(&DAT_1024a13c,L"Ask for User Flag address: ulFlagAddr 0x%X",uVar6);
      FUN_10016860();
      local_a34 = uVar6;
      _memset(&local_ef8,0xff,0x4c4);
      local_ef8 = 0xaa;
      local_efc = 5;
      if (DAT_1024a2f4 == 2) {
        local_ef7 = 0xffffaaaa;
      }
      else {
        uVar1 = local_ef7._1_1_;
        if (DAT_1024be80 != 0) {
          uVar1 = 0xaa;
        }
        local_ef7._0_2_ = CONCAT11(uVar1,(undefined1)local_ef7);
      }
      puVar5 = &local_efc;
      puVar7 = &DAT_1024a654;
      for (iVar4 = 0x134; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar7 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      }
      goto LAB_10019a58;
    }
  }
  goto LAB_1001985f;
LAB_10019992:
  iVar4 = iVar4 + -1;
  if (iVar4 < 1) goto LAB_1001985f;
  goto LAB_10019910;
LAB_10019b70:
  local_a05 = 5;
  local_a0c = (undefined4 *)(**(code **)(*DAT_10249d10 + 0x74))(0x6a,0xca,1,&local_a05,0);
  if (local_a0c == (undefined4 *)0x0) {
    Sleep(DAT_1024be70);
    iVar3 = (**(code **)(*DAT_10249d10 + 0x78))(0x6a,0xca,5,&local_24,0);
    if ((local_24 != -0x36) || (iVar3 != 0)) goto LAB_10019bce;
    uVar6 = CONCAT31(CONCAT21(CONCAT11((byte)local_23,local_23._1_1_),local_23._2_1_),local_23._3_1_
                    );
    if (0 < iVar4) {
      local_53c = uVar6;
      FUN_10048350(&DAT_1024a13c,L"Ask for ulSigAddr address: ulSigAddr 0x%X",uVar6);
      FUN_10016860();
      puVar5 = local_a1c;
      local_a0c = local_a1c;
      FUN_1000ccd0();
      local_a0c = (undefined4 *)FUN_10020110(&local_a04);
      if (local_a0c == (undefined4 *)0x0) {
        local_a0c = puVar5;
        puVar5 = &local_534;
        puVar7 = &DAT_1024b4c4;
        for (iVar4 = 0x134; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar7 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar7 = puVar7 + 1;
        }
        puVar5 = &local_a04;
        puVar7 = &DAT_1024b994;
        for (iVar4 = 0x134; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar7 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar7 = puVar7 + 1;
        }
        FUN_1000ccd0();
        FUN_1002bd50(local_a0c + 4);
        goto LAB_10019cb7;
      }
    }
  }
  goto LAB_1001985f;
LAB_10019bce:
  iVar4 = iVar4 + -1;
  if (iVar4 < 1) goto LAB_1001985f;
  goto LAB_10019b70;
}

