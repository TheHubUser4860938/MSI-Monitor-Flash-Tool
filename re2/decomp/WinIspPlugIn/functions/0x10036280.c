// rea decompile_all
// name: FUN_10036280
// address: 0x10036280
// body: available
// range: 0x10036280-0x10036be3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x100367a8) */
/* WARNING: Removing unreachable block (ram,0x100367b0) */
/* WARNING: Removing unreachable block (ram,0x100367e1) */
/* WARNING: Removing unreachable block (ram,0x10036929) */
/* WARNING: Removing unreachable block (ram,0x10036930) */
/* WARNING: Removing unreachable block (ram,0x10036961) */

void FUN_10036280(void)

{
  int iVar1;
  int iVar2;
  undefined4 ****ppppuVar3;
  undefined4 ****ppppuVar4;
  ushort uVar5;
  int iVar6;
  ushort uVar7;
  undefined4 *puVar8;
  code *pcVar9;
  int iVar10;
  undefined **local_168;
  uint local_164;
  undefined4 local_154;
  uint local_150;
  uint local_14c;
  undefined4 local_13c;
  uint local_138;
  undefined **local_134;
  undefined4 ***local_130 [4];
  undefined4 local_120;
  uint local_11c;
  uint local_118;
  undefined4 local_108;
  uint local_104;
  undefined **local_100;
  uint local_fc;
  undefined4 local_ec;
  uint local_e8;
  uint local_e4;
  undefined4 local_d4;
  uint local_d0;
  undefined **local_cc;
  uint local_c8 [4];
  undefined4 local_b8;
  uint local_b4;
  uint local_b0;
  undefined4 local_a0;
  uint local_9c;
  undefined **local_98;
  undefined4 ***local_94 [4];
  undefined4 local_84;
  uint local_80;
  uint local_7c;
  undefined4 local_6c;
  uint local_68;
  undefined **local_64;
  uint local_60 [4];
  undefined4 local_50;
  uint local_4c;
  uint local_48;
  undefined4 local_38;
  uint local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined1 uStack_28;
  undefined1 uStack_27;
  undefined1 uStack_26;
  byte local_24 [8];
  char local_1c [8];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar1 = DAT_1024a2e8;
  puStack_c = &LAB_101c31fa;
  local_10 = ExceptionList;
  local_14 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_24[0] = 0x6e;
  local_24[1] = 0x51;
  local_24[2] = 0x84;
  local_24[3] = 3;
  local_24[4] = 0xf5;
  local_24[5] = 0x9d;
  local_24[6] = 0;
  local_1c[0] = 'n';
  local_1c[1] = 0x51;
  local_1c[2] = 0x82;
  local_1c[3] = 1;
  local_1c[4] = -0xb;
  local_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_27 = 0;
  uStack_26 = 0;
  local_e8 = 7;
  local_ec = 0;
  local_fc = local_fc & 0xffff0000;
  local_100 = CCpRsString::vftable;
  local_d0 = 0xf;
  local_d4 = 0;
  local_e4 = local_e4 & 0xffffff00;
  local_4c = 7;
  local_50 = 0;
  local_60[0] = local_60[0] & 0xffff0000;
  local_64 = CCpRsString::vftable;
  local_34 = 0xf;
  local_38 = 0;
  local_48 = local_48 & 0xffffff00;
  local_b4 = 7;
  local_b8 = 0;
  local_c8[0] = local_c8[0] & 0xffff0000;
  local_cc = CCpRsString::vftable;
  local_9c = 0xf;
  local_a0 = 0;
  local_b0 = local_b0 & 0xffffff00;
  local_80 = 7;
  local_84 = 0;
  local_94[0] = (undefined4 ***)((uint)local_94[0] & 0xffff0000);
  local_98 = CCpRsString::vftable;
  local_68 = 0xf;
  local_6c = 0;
  local_7c = local_7c & 0xffffff00;
  local_8 = 4;
  FUN_10048350(&local_100,L"Enter function read HP 4 bytes version",local_14);
  FUN_10016860();
  FUN_10048350(&local_64,L"delay time between send cmd %d",DAT_1024be70);
  FUN_10016860();
  if ((iVar1 == 1) || (iVar1 == 3)) {
    FUN_10035530();
  }
  FUN_10048350(&local_64,L"Get HP 4bytes version");
  FUN_10016860();
  FUN_10048350(&local_64,L"Set Cmd:");
  iVar6 = 0;
  do {
    FUN_10048350(&local_cc,L"0x%x,",local_24[iVar6]);
    FUN_1002c980(local_c8,0,0xffffffff);
    iVar6 = iVar6 + 1;
  } while (iVar6 < 7);
  FUN_10016860();
  FUN_10048350(&local_64,L"Get info cmd:");
  iVar6 = 0;
  do {
    FUN_10048350(&local_cc,L"0x%x,",local_1c[iVar6]);
    FUN_1002c980(local_c8,0,0xffffffff);
    iVar6 = iVar6 + 1;
  } while (iVar6 < 5);
  FUN_10016860();
  pcVar9 = Sleep_exref;
  iVar6 = DAT_1024be74;
  do {
    Sleep_exref = pcVar9;
    if (iVar6 < 1) {
LAB_1003677b:
      if (iVar6 != 0) {
        local_84 = 0;
        ppppuVar4 = local_94;
        if (7 < local_80) {
          ppppuVar4 = (undefined4 ****)local_94[0];
        }
        *(undefined2 *)ppppuVar4 = 0;
        FUN_10048350(&local_100,L"HP 4 bytes version end:");
        FUN_10016860();
        FUN_10016860();
        FUN_10048350(&local_64,L"HP 4 bytes version buff size: 0x%x",0);
        FUN_10016860();
        FUN_100075b0(&local_168);
        local_8._0_1_ = 5;
        FUN_10047dc0(L"ISPVersion.txt");
        local_8 = CONCAT31(local_8._1_3_,7);
        local_168 = CCpRsString::vftable;
        if (0xf < local_138) {
          FUN_1000b630(local_14c,local_138 + 1);
        }
        local_138 = 0xf;
        local_13c = 0;
        local_14c = local_14c & 0xffffff00;
        if (7 < local_150) {
          FUN_1000b5d0(local_164,local_150 + 1);
        }
        local_150 = 7;
        local_164 = local_164 & 0xffff0000;
        ppppuVar4 = local_130;
        if (7 < local_11c) {
          ppppuVar4 = (undefined4 ****)local_130[0];
        }
        ppppuVar3 = local_94;
        if (7 < local_80) {
          ppppuVar3 = (undefined4 ****)local_94[0];
        }
        local_154 = 0;
        FUN_10042360(ppppuVar3,ppppuVar4);
        local_84 = 0;
        ppppuVar4 = local_94;
        if (7 < local_80) {
          ppppuVar4 = (undefined4 ****)local_94[0];
        }
        *(undefined2 *)ppppuVar4 = 0;
        FUN_10016860();
        if ((iVar1 == 2) || (iVar1 == 3)) {
          FUN_10035ad0();
        }
        local_134 = CCpRsString::vftable;
        if (0xf < local_104) {
          FUN_1000b630(local_118,local_104 + 1);
        }
        local_104 = 0xf;
        local_108 = 0;
        local_118 = local_118 & 0xffffff00;
        if (7 < local_11c) {
          FUN_1000b5d0(local_130[0],local_11c + 1);
        }
        local_11c = 7;
        local_120 = 0;
        local_130[0] = (undefined4 ***)((uint)local_130[0] & 0xffff0000);
      }
      local_98 = CCpRsString::vftable;
      if (0xf < local_68) {
        FUN_1000b630(local_7c,local_68 + 1);
      }
      local_68 = 0xf;
      local_6c = 0;
      local_7c = local_7c & 0xffffff00;
      if (7 < local_80) {
        FUN_1000b5d0(local_94[0],local_80 + 1);
      }
      local_80 = 7;
      local_94[0] = (undefined4 ***)((uint)local_94[0] & 0xffff0000);
      local_84 = 0;
      local_cc = CCpRsString::vftable;
      if (0xf < local_9c) {
        FUN_1000b630(local_b0,local_9c + 1);
      }
      local_9c = 0xf;
      local_a0 = 0;
      local_b0 = local_b0 & 0xffffff00;
      if (7 < local_b4) {
        FUN_1000b5d0(local_c8[0],local_b4 + 1);
      }
      local_b4 = 7;
      local_c8[0] = local_c8[0] & 0xffff0000;
      local_b8 = 0;
      local_64 = CCpRsString::vftable;
      if (0xf < local_34) {
        FUN_1000b630(local_48,local_34 + 1);
      }
      local_34 = 0xf;
      local_38 = 0;
      local_48 = local_48 & 0xffffff00;
      if (7 < local_4c) {
        FUN_1000b5d0(local_60[0],local_4c + 1);
      }
      local_4c = 7;
      local_60[0] = local_60[0] & 0xffff0000;
      local_50 = 0;
      local_100 = CCpRsString::vftable;
      if (0xf < local_d0) {
        FUN_1000b630(local_e4,local_d0 + 1);
      }
      local_d0 = 0xf;
      local_d4 = 0;
      local_e4 = local_e4 & 0xffffff00;
      if (7 < local_e8) {
        FUN_1000b5d0(local_fc,local_e8 + 1);
      }
      local_e8 = 7;
      local_ec = 0;
      local_fc = local_fc & 0xffff0000;
      FUN_1002c3c0();
      ExceptionList = local_10;
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
    FUN_10048350(&local_100,L"Get HP 4bytes version retry count:%d",(DAT_1024be74 - iVar6) + 1);
    FUN_10016860();
    uStack_28 = 0;
    uStack_27 = 0;
    local_30 = 0;
    uStack_2c = 0;
    uVar5 = 0;
    uStack_26 = 0;
    while( true ) {
      local_24[6] = (byte)uVar5;
      iVar2 = (**(code **)(*DAT_10249d10 + 0x13c))
                        (CONCAT13(local_24[3],
                                  CONCAT12(local_24[2],CONCAT11(local_24[1],local_24[0]))),
                         CONCAT13(local_24[4],
                                  CONCAT12(local_24[3],CONCAT11(local_24[2],local_24[1]))),
                         local_24[2] & 0x7f,local_24 + 3);
      if (iVar2 != 0) {
        FUN_10048350(&local_64,L"DDCCI write cmd 1 fail, error code:0x%x",iVar2);
        FUN_10016860();
        goto LAB_10036680;
      }
      (*pcVar9)(DAT_1024be70);
      iVar2 = (**(code **)(*DAT_10249d10 + 0x13c))
                        (CONCAT13(local_1c[3],
                                  CONCAT12(local_1c[2],CONCAT11(local_1c[1],local_1c[0]))),
                         CONCAT13(local_1c[4],
                                  CONCAT12(local_1c[3],CONCAT11(local_1c[2],local_1c[1]))),
                         local_1c[2] & 0x7f,local_1c + 3);
      if (iVar2 != 0) {
        FUN_10048350(&local_64,L"DDCCI write cmd 2 fail, error code:0x%x",iVar2);
        FUN_10016860();
        goto LAB_10036680;
      }
      (*pcVar9)(DAT_1024be70);
      uStack_28 = 0;
      uStack_27 = 0;
      local_30 = 0;
      uStack_2c = 0;
      uStack_26 = 0;
      iVar2 = (**(code **)(*DAT_10249d10 + 0x140))(0x6e,0x51,0xb,&local_30);
      if (iVar2 != 0) break;
      FUN_10048350(&local_cc,L"Read index %d: DDCCI cmd read data: ",uVar5);
      puVar8 = &local_30;
      iVar2 = 0xb;
      do {
        FUN_10048350(&local_64,L"0x%x,",*(undefined1 *)puVar8);
        FUN_1002c980(local_60,0,0xffffffff);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      FUN_10016860();
      if (((char)local_30 != local_1c[0]) || ((char)uStack_2c != local_1c[4])) goto LAB_10036680;
      uVar7 = 6;
      do {
        if (*(char *)((int)&local_30 + (uint)uVar7) == '\0') goto LAB_1003677b;
        FUN_1002bc00((int)&local_30 + (uint)uVar7);
        uVar7 = uVar7 + 1;
      } while (uVar7 < 10);
      uVar5 = uVar5 + 1;
      pcVar9 = Sleep_exref;
      if (0xff < uVar5) goto LAB_10036680;
    }
    FUN_10048350(&local_cc,L"DDCCI read fail, read index %d: DDCCI cmd read data: ",uVar5);
    puVar8 = &local_30;
    iVar10 = 0xb;
    do {
      FUN_10048350(&local_64,L"0x%x,",*(undefined1 *)puVar8);
      FUN_1002c980(local_60,0,0xffffffff);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
    FUN_10016860();
    FUN_10048350(&local_64,L"DDCCI read fail, error code:0x%x",iVar2);
    FUN_10016860();
LAB_10036680:
    iVar6 = iVar6 + -1;
    pcVar9 = Sleep_exref;
  } while( true );
}

