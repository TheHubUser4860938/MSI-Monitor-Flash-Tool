// rea decompile_all
// name: FUN_10036bf0
// address: 0x10036bf0
// body: available
// range: 0x10036bf0-0x100375ed inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x1003706b) */
/* WARNING: Removing unreachable block (ram,0x10037070) */
/* WARNING: Removing unreachable block (ram,0x100370a1) */
/* WARNING: Removing unreachable block (ram,0x100370d3) */
/* WARNING: Removing unreachable block (ram,0x100370d7) */
/* WARNING: Removing unreachable block (ram,0x10037108) */

void FUN_10036bf0(void)

{
  char cVar1;
  int iVar2;
  undefined4 ****ppppuVar3;
  undefined4 ****ppppuVar4;
  char *pcVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  undefined4 extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int in_EDX;
  ushort uVar10;
  ushort uVar11;
  int iVar12;
  code *pcVar13;
  uint uVar14;
  int local_180;
  int local_178;
  undefined4 local_174;
  int local_160;
  int local_15c;
  int local_158;
  uint local_154;
  int local_150;
  undefined **local_14c;
  undefined4 ***local_148 [4];
  undefined4 local_138;
  uint local_134;
  uint local_130;
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
  uint local_c8;
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
  char local_30 [12];
  undefined1 local_24;
  undefined1 uStack_23;
  byte bStack_22;
  undefined1 uStack_21;
  undefined1 local_20;
  undefined1 uStack_1f;
  undefined1 local_1e;
  char local_1c;
  undefined1 uStack_1b;
  byte bStack_1a;
  undefined1 uStack_19;
  char local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101c3285;
  local_10 = ExceptionList;
  local_14 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_24 = 0x6e;
  uStack_23 = 0x51;
  bStack_22 = 0x84;
  uStack_21 = 3;
  local_150 = 0;
  local_20 = 0xf5;
  uStack_1f = 0x9c;
  local_1e = 0;
  local_1c = 'n';
  uStack_1b = 0x51;
  bStack_1a = 0x82;
  uStack_19 = 1;
  local_18 = -0xb;
  local_30[0] = '\0';
  local_30[1] = '\0';
  local_30[2] = '\0';
  local_30[3] = '\0';
  local_30[4] = '\0';
  local_30[5] = '\0';
  local_30[6] = '\0';
  local_30[7] = '\0';
  local_30[8] = 0;
  local_30[9] = 0;
  local_30[10] = 0;
  local_154 = DAT_1024be74;
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
  local_c8 = local_c8 & 0xffff0000;
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
  FUN_10048350(&local_100,L"Enter function read HP friends package version",local_14);
  FUN_10016860();
  FUN_10048350(&local_64,L"delay time between send cmd %d",DAT_1024be70);
  FUN_10016860();
  pcVar13 = Sleep_exref;
  if (0 < (int)local_154) {
LAB_10036d90:
    FUN_10048350(&local_100,L"Get HP friends package version retry count:%d",
                 (DAT_1024be74 - local_154) + 1);
    FUN_10016860();
    local_30[8] = 0;
    local_30[9] = 0;
    local_30[0] = '\0';
    local_30[1] = '\0';
    local_30[2] = '\0';
    local_30[3] = '\0';
    local_30[4] = '\0';
    local_30[5] = '\0';
    local_30[6] = '\0';
    local_30[7] = '\0';
    uVar10 = 0;
    local_30[10] = 0;
LAB_10036dd0:
    local_1e = (undefined1)uVar10;
    local_150 = (**(code **)(*DAT_10249d10 + 0x13c))
                          (CONCAT13(uStack_21,CONCAT12(bStack_22,CONCAT11(uStack_23,local_24))),
                           CONCAT13(local_20,CONCAT12(uStack_21,CONCAT11(bStack_22,uStack_23))),
                           bStack_22 & 0x7f,&uStack_21);
    if (local_150 == 0) {
      (*pcVar13)(DAT_1024be70);
      local_150 = (**(code **)(*DAT_10249d10 + 0x13c))
                            (CONCAT13(uStack_19,CONCAT12(bStack_1a,CONCAT11(uStack_1b,local_1c))),
                             CONCAT13(local_18,CONCAT12(uStack_19,CONCAT11(bStack_1a,uStack_1b))),
                             bStack_1a & 0x7f,&uStack_19);
      if (local_150 == 0) {
        (*pcVar13)(DAT_1024be70);
        local_30[8] = 0;
        local_30[9] = 0;
        local_30[0] = '\0';
        local_30[1] = '\0';
        local_30[2] = '\0';
        local_30[3] = '\0';
        local_30[4] = '\0';
        local_30[5] = '\0';
        local_30[6] = '\0';
        local_30[7] = '\0';
        local_30[10] = 0;
        iVar2 = (**(code **)(*DAT_10249d10 + 0x140))(0x6e,0x51,0xb,local_30);
        local_150 = iVar2;
        if (iVar2 == 0) {
          FUN_10048350(&local_cc,L"Read index %d: DDCCI cmd read data: ",uVar10);
          pcVar5 = local_30;
          iVar2 = 0xb;
          do {
            FUN_10048350(&local_64,L"0x%x,",*pcVar5);
            FUN_1002c980(local_60,0,0xffffffff);
            pcVar5 = pcVar5 + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
          FUN_10016860();
          pcVar13 = Sleep_exref;
          if ((local_30[0] == local_1c) && (local_30[4] == local_18)) goto code_r0x10036eeb;
        }
        else {
          FUN_10048350(&local_cc,L"DDCCI read fail, read index %d: DDCCI cmd read data: ",uVar10);
          pcVar5 = local_30;
          iVar8 = 0xb;
          do {
            FUN_10048350(&local_64,L"0x%x,",*pcVar5);
            FUN_1002c980(local_60,0,0xffffffff);
            pcVar5 = pcVar5 + 1;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
          FUN_10016860();
          FUN_10048350(&local_64,L"DDCCI read fail, error code:0x%x",iVar2);
          FUN_10016860();
          pcVar13 = Sleep_exref;
        }
      }
      else {
        FUN_10048350(&local_64,L"DDCCI write cmd 2 fail, error code:0x%x",local_150);
        FUN_10016860();
      }
    }
    else {
      FUN_10048350(&local_64,L"DDCCI write cmd 1 fail, error code:0x%x",local_150);
      FUN_10016860();
    }
    goto LAB_10036f30;
  }
LAB_10037022:
  if (local_154 != 0) {
    FUN_10048350(&local_64,L"HP 4 bytes version buff size: 0x%x",0);
    FUN_10016860();
    local_84 = 0;
    ppppuVar3 = local_94;
    if (7 < local_80) {
      ppppuVar3 = (undefined4 ****)local_94[0];
    }
    *(undefined2 *)ppppuVar3 = 0;
    FUN_10016860();
    local_84 = 0;
    ppppuVar3 = local_94;
    if (7 < local_80) {
      ppppuVar3 = (undefined4 ****)local_94[0];
    }
    *(undefined2 *)ppppuVar3 = 0;
    FUN_10048350(&local_100,L"HP 4 bytes version end:");
    FUN_10016860();
    FUN_10016860();
    FUN_10047dc0(L"MergeFWInfo.txt");
    local_8._0_1_ = 5;
    ppppuVar3 = local_148;
    if (7 < local_134) {
      ppppuVar3 = (undefined4 ****)local_148[0];
    }
    ppppuVar4 = local_94;
    if (7 < local_80) {
      ppppuVar4 = (undefined4 ****)local_94[0];
    }
    uVar14 = 0x10037184;
    FUN_10042360(ppppuVar4,ppppuVar3);
    local_160 = 0;
    local_15c = 0;
    local_150 = 0;
    local_158 = 0;
    local_8._0_1_ = 6;
    local_154 = 0;
    iVar2 = 0;
    pcVar5 = (char *)FUN_100486d0();
    local_104 = 0xf;
    local_108 = 0;
    local_118 = local_118 & 0xffffff00;
    if (*pcVar5 == '\0') {
      iVar8 = 0;
    }
    else {
      pcVar9 = pcVar5;
      do {
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      iVar8 = (int)pcVar9 - (int)(pcVar5 + 1);
    }
    FUN_1000aa60(pcVar5,iVar8);
    local_8 = CONCAT31(local_8._1_3_,7);
    piVar6 = (int *)FUN_100409e0(&DAT_1020ebe8,extraout_ECX);
    if (&local_160 != piVar6) {
      local_160 = *piVar6;
      local_15c = piVar6[1];
      local_158 = piVar6[2];
      *piVar6 = 0;
      piVar6[1] = 0;
      piVar6[2] = 0;
      local_150 = local_158;
    }
    iVar8 = 0;
    if (local_180 != 0) {
      FUN_1002d300(local_180,in_EDX);
      FUN_1002c430(local_180,(local_178 - local_180) / 0x18);
      iVar8 = extraout_ECX_00;
    }
    iVar12 = local_160;
    if (local_160 != local_15c) {
      while (iVar2 < 4) {
        uVar14 = uVar14 & 0xffffff00;
        FUN_1000ab60(iVar12,0,0xffffffff);
        iVar7 = FUN_100406e0(uVar14);
        iVar8 = extraout_ECX_01;
        if ((iVar7 == 0) || (iVar8 = extraout_ECX_01, 0xff < local_154)) break;
        iVar12 = iVar12 + 0x18;
        *(char *)(in_EDX + iVar2) = (char)local_154;
        iVar2 = iVar2 + 1;
        iVar8 = in_EDX;
        if (iVar12 == local_15c) break;
      }
    }
    if (0xf < local_104) {
      FUN_1000b630(local_118,local_104 + 1);
      iVar8 = extraout_ECX_02;
    }
    iVar2 = local_160;
    local_104 = 0xf;
    local_108 = 0;
    local_118 = local_118 & 0xffffff00;
    if (local_160 != 0) {
      FUN_1002d300(iVar8,local_174);
      FUN_1002c430(iVar2,(local_150 - iVar2) / 0x18);
    }
    local_14c = CCpRsString::vftable;
    if (0xf < local_11c) {
      FUN_1000b630(local_130,local_11c + 1);
    }
    local_11c = 0xf;
    local_120 = 0;
    local_130 = local_130 & 0xffffff00;
    if (7 < local_134) {
      FUN_1000b5d0(local_148[0],local_134 + 1);
    }
    local_134 = 7;
    local_138 = 0;
    local_148[0] = (undefined4 ***)((uint)local_148[0] & 0xffff0000);
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
    FUN_1000b5d0(local_c8,local_b4 + 1);
  }
  local_b4 = 7;
  local_c8 = local_c8 & 0xffff0000;
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
code_r0x10036eeb:
  uVar11 = 6;
  do {
    if (local_30[uVar11] == '\0') goto LAB_10037022;
    FUN_1002bc00(local_30 + uVar11);
    uVar11 = uVar11 + 1;
  } while (uVar11 < 10);
  uVar10 = uVar10 + 1;
  pcVar13 = Sleep_exref;
  if (0xff < uVar10) goto LAB_10036f30;
  goto LAB_10036dd0;
LAB_10036f30:
  local_154 = local_154 - 1;
  if ((int)local_154 < 1) goto LAB_10037022;
  goto LAB_10036d90;
}

