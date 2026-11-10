// rea decompile_all
// name: FUN_10024ba0
// address: 0x10024ba0
// body: available
// range: 0x10024ba0-0x10025516 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x10025139) */
/* WARNING: Removing unreachable block (ram,0x10025140) */
/* WARNING: Removing unreachable block (ram,0x10025177) */
/* WARNING: Removing unreachable block (ram,0x10025223) */
/* WARNING: Removing unreachable block (ram,0x10025230) */
/* WARNING: Removing unreachable block (ram,0x10025267) */

void FUN_10024ba0(void)

{
  uint uVar1;
  undefined ***pppuVar2;
  undefined4 ****ppppuVar3;
  int iVar4;
  undefined4 ****ppppuVar5;
  ushort uVar6;
  ushort uVar7;
  char *pcVar8;
  code *pcVar9;
  wchar_t *pwVar10;
  int local_208;
  undefined1 local_200 [104];
  undefined **local_198;
  uint local_194;
  undefined4 local_184;
  uint local_180;
  uint local_17c;
  undefined4 local_16c;
  uint local_168;
  undefined **local_164;
  uint local_160;
  undefined4 local_150;
  uint local_14c;
  uint local_148;
  undefined4 local_138;
  uint local_134;
  undefined **local_130;
  undefined4 ***local_12c [4];
  undefined4 local_11c;
  uint local_118;
  uint local_114;
  undefined4 local_104;
  uint local_100;
  undefined **local_fc;
  undefined4 ***local_f8 [4];
  undefined4 local_e8;
  uint local_e4;
  uint local_e0;
  undefined4 local_d0;
  uint local_cc;
  undefined **local_c8;
  uint local_c4 [4];
  undefined4 local_b4;
  uint local_b0;
  uint local_ac;
  undefined4 local_9c;
  uint local_98;
  wchar_t local_94 [16];
  undefined4 local_74;
  wchar_t awStack_70 [18];
  wchar_t local_4c [14];
  char local_30 [12];
  undefined1 local_24;
  undefined1 uStack_23;
  byte bStack_22;
  undefined1 uStack_21;
  undefined1 local_20;
  undefined1 uStack_1f;
  undefined1 local_1e;
  undefined1 local_1c;
  undefined1 uStack_1b;
  byte bStack_1a;
  undefined1 uStack_19;
  undefined1 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_101c24d3;
  local_10 = ExceptionList;
  uVar1 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  builtin_wcsncpy(awStack_70,L"pUserDefined.txt",0x11);
  local_74._0_2_ = L'I';
  local_74._2_2_ = L's';
  builtin_wcsncpy(local_4c,L"HPScalerType",0xd);
  local_24 = 0x6e;
  uStack_23 = 0x51;
  bStack_22 = 0x84;
  uStack_21 = 3;
  local_20 = 0xf5;
  uStack_1f = 0x95;
  builtin_wcsncpy(local_94,L"UserDefinedInfo",0x10);
  local_1e = 0;
  local_1c = 0x6e;
  uStack_1b = 0x51;
  bStack_1a = 0x82;
  uStack_19 = 1;
  local_18 = 0xf5;
  local_30[9] = 0;
  local_30[10] = 0;
  local_30[0] = '\0';
  local_30[1] = '\0';
  local_30[2] = '\0';
  local_30[3] = '\0';
  local_30[4] = '\0';
  local_30[5] = '\0';
  local_30[6] = '\0';
  local_30[7] = '\0';
  local_30[8] = 0;
  local_208 = DAT_1024be74;
  local_118 = 7;
  local_11c = 0;
  local_12c[0] = (undefined4 ***)((uint)local_12c[0] & 0xffff0000);
  local_130 = CCpRsString::vftable;
  local_100 = 0xf;
  local_104 = 0;
  local_114 = local_114 & 0xffffff00;
  local_e4 = 7;
  local_e8 = 0;
  local_f8[0] = (undefined4 ***)((uint)local_f8[0] & 0xffff0000);
  local_fc = CCpRsString::vftable;
  local_cc = 0xf;
  local_d0 = 0;
  local_e0 = local_e0 & 0xffffff00;
  local_b0 = 7;
  local_b4 = 0;
  local_c4[0] = local_c4[0] & 0xffff0000;
  local_c8 = CCpRsString::vftable;
  local_98 = 0xf;
  local_9c = 0;
  local_ac = local_ac & 0xffffff00;
  local_180 = 7;
  local_184 = 0;
  local_194 = local_194 & 0xffff0000;
  local_198 = CCpRsString::vftable;
  local_168 = 0xf;
  local_16c = 0;
  local_17c = local_17c & 0xffffff00;
  local_14c = 7;
  local_150 = 0;
  local_160 = local_160 & 0xffff0000;
  local_164 = CCpRsString::vftable;
  local_134 = 0xf;
  local_138 = 0;
  local_148 = local_148 & 0xffffff00;
  local_8 = 5;
  uStack_7 = 0;
  local_14 = uVar1;
  FUN_100075b0(local_200);
  _local_8 = CONCAT31(uStack_7,6);
  pppuVar2 = (undefined ***)FUN_10047dc0(&local_74,uVar1);
  if (&local_130 != pppuVar2) {
    if (pppuVar2 == (undefined ***)0x0) {
      ppppuVar3 = (undefined4 ****)0x0;
    }
    else {
      ppppuVar3 = (undefined4 ****)(pppuVar2 + 1);
    }
    if (local_12c != ppppuVar3) {
      if (7 < local_118) {
        FUN_1000b5d0(local_12c[0],local_118 + 1);
      }
      local_118 = 7;
      local_12c[0] = (undefined4 ***)((uint)local_12c[0] & 0xffff0000);
      local_11c = 0;
      FUN_10045640(ppppuVar3);
    }
  }
  FUN_10048130();
  _local_8 = CONCAT31(uStack_7,5);
  FUN_10048130();
  FUN_10048350(&local_164,L"Enter Function GetHPScalerType");
  FUN_10016860();
  FUN_10048350(&local_c8,L"delay time between send cmd %d",DAT_1024be70);
  FUN_10016860();
LAB_10024e9d:
  do {
    pcVar9 = Sleep_exref;
    if (local_208 < 1) {
LAB_10025112:
      local_e8 = 0;
      ppppuVar3 = local_f8;
      if (7 < local_e4) {
        ppppuVar3 = (undefined4 ****)local_f8[0];
      }
      *(undefined2 *)ppppuVar3 = 0;
      FUN_10048350(&local_164,L"GetHPScalerType End:");
      FUN_10016860();
      FUN_10016860();
      FUN_10048350(&local_c8,L"HP Scaler Type Buff Size: 0x%x",0);
      FUN_10016860();
      ppppuVar3 = local_12c;
      if (7 < local_118) {
        ppppuVar3 = (undefined4 ****)local_12c[0];
      }
      ppppuVar5 = local_f8;
      if (7 < local_e4) {
        ppppuVar5 = (undefined4 ****)local_f8[0];
      }
      FUN_10042360(ppppuVar5,ppppuVar3);
      local_e8 = 0;
      ppppuVar3 = local_f8;
      if (7 < local_e4) {
        ppppuVar3 = (undefined4 ****)local_f8[0];
      }
      *(undefined2 *)ppppuVar3 = 0;
      FUN_10016860();
      local_164 = CCpRsString::vftable;
      if (0xf < local_134) {
        FUN_1000b630(local_148,local_134 + 1);
      }
      local_134 = 0xf;
      local_138 = 0;
      local_148 = local_148 & 0xffffff00;
      if (7 < local_14c) {
        FUN_1000b5d0(local_160,local_14c + 1);
      }
      local_14c = 7;
      local_160 = local_160 & 0xffff0000;
      local_150 = 0;
      local_198 = CCpRsString::vftable;
      if (0xf < local_168) {
        FUN_1000b630(local_17c,local_168 + 1);
      }
      local_168 = 0xf;
      local_16c = 0;
      local_17c = local_17c & 0xffffff00;
      if (7 < local_180) {
        FUN_1000b5d0(local_194,local_180 + 1);
      }
      local_180 = 7;
      local_194 = local_194 & 0xffff0000;
      local_184 = 0;
      local_c8 = CCpRsString::vftable;
      if (0xf < local_98) {
        FUN_1000b630(local_ac,local_98 + 1);
      }
      local_98 = 0xf;
      local_9c = 0;
      local_ac = local_ac & 0xffffff00;
      if (7 < local_b0) {
        FUN_1000b5d0(local_c4[0],local_b0 + 1);
      }
      local_b0 = 7;
      local_c4[0] = local_c4[0] & 0xffff0000;
      local_b4 = 0;
      local_fc = CCpRsString::vftable;
      if (0xf < local_cc) {
        FUN_1000b630(local_e0,local_cc + 1);
      }
      local_cc = 0xf;
      local_d0 = 0;
      local_e0 = local_e0 & 0xffffff00;
      if (7 < local_e4) {
        FUN_1000b5d0(local_f8[0],local_e4 + 1);
      }
      local_e4 = 7;
      local_f8[0] = (undefined4 ***)((uint)local_f8[0] & 0xffff0000);
      local_e8 = 0;
      local_130 = CCpRsString::vftable;
      if (0xf < local_100) {
        FUN_1000b630(local_114,local_100 + 1);
      }
      local_100 = 0xf;
      local_104 = 0;
      local_114 = local_114 & 0xffffff00;
      if (7 < local_118) {
        FUN_1000b5d0(local_12c[0],local_118 + 1);
      }
      local_118 = 7;
      local_11c = 0;
      local_12c[0] = (undefined4 ***)((uint)local_12c[0] & 0xffff0000);
      FUN_1002c3c0();
      ExceptionList = local_10;
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
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
    FUN_10048350(&local_164,L"Get hp scaler type retry count:%d",(DAT_1024be74 - local_208) + 1);
    FUN_10016860();
    uVar6 = 0;
    do {
      local_1e = (undefined1)uVar6;
      iVar4 = (**(code **)(*DAT_10249d10 + 0x13c))
                        (CONCAT13(uStack_21,CONCAT12(bStack_22,CONCAT11(uStack_23,local_24))),
                         CONCAT13(local_20,CONCAT12(uStack_21,CONCAT11(bStack_22,uStack_23))),
                         bStack_22 & 0x7f,&uStack_21);
      if (iVar4 != 0) {
        pwVar10 = L"DDCCI write cmd 1 fail, index: 0x%x, error code:0x%x";
LAB_100250c6:
        FUN_10048350(&local_c8,pwVar10,uVar6,iVar4);
        FUN_10016860();
        local_208 = local_208 + -1;
        goto LAB_10024e9d;
      }
      (*pcVar9)(DAT_1024be70);
      iVar4 = (**(code **)(*DAT_10249d10 + 0x13c))
                        (CONCAT13(uStack_19,CONCAT12(bStack_1a,CONCAT11(uStack_1b,local_1c))),
                         CONCAT13(local_18,CONCAT12(uStack_19,CONCAT11(bStack_1a,uStack_1b))),
                         bStack_1a & 0x7f,&uStack_19);
      if (iVar4 != 0) {
        pwVar10 = L"DDCCI write cmd 2 fail, index: 0x%x, error code:0x%x";
        goto LAB_100250c6;
      }
      (*pcVar9)(DAT_1024be70);
      iVar4 = (**(code **)(*DAT_10249d10 + 0x140))(0x6e,0x51,0xb,local_30);
      if (iVar4 != 0) {
        pwVar10 = L"DDCCI read fail, index: 0x%x, error code:0x%x";
        goto LAB_100250c6;
      }
      FUN_10048350(&local_198,L"Read Index %d: DDCCI Cmd Read Data: ",uVar6);
      pcVar8 = local_30;
      iVar4 = 0xb;
      do {
        FUN_10048350(&local_c8,L"0x%x,",*pcVar8);
        FUN_1002c980(local_c4,0,0xffffffff);
        pcVar8 = pcVar8 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      FUN_10016860();
      if ((local_30[0] != 'n') || (local_30[4] != -0xb)) {
        FUN_10048350(&local_164,L"Data invalid!, Retry");
        FUN_10016860();
        local_208 = local_208 + -1;
        goto LAB_10024e9d;
      }
      uVar7 = 6;
      do {
        if (local_30[uVar7] == '\0') goto LAB_10025112;
        FUN_1002bc00(local_30 + uVar7);
        uVar7 = uVar7 + 1;
      } while (uVar7 < 10);
      uVar6 = uVar6 + 1;
      pcVar9 = Sleep_exref;
    } while (uVar6 < 0x100);
    local_208 = local_208 + -1;
  } while( true );
}

