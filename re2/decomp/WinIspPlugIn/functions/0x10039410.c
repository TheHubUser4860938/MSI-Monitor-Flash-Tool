// rea decompile_all
// name: FUN_10039410
// address: 0x10039410
// body: available
// range: 0x10039410-0x10039d41 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10039410(void)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  undefined1 uVar4;
  uint uVar5;
  undefined ***pppuVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  undefined4 ******ppppppuVar10;
  int in_ECX;
  int iVar11;
  short *psVar12;
  undefined4 ******ppppppuVar13;
  undefined4 *puVar14;
  undefined4 uVar15;
  wchar_t *pwVar16;
  int local_2dc;
  uint auStack_2d0 [11];
  int aiStack_2a4 [32];
  char local_221;
  undefined1 local_220 [52];
  undefined **local_1ec;
  undefined2 local_1e8;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined1 local_1d0;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined **local_1b8;
  undefined2 local_1b4;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined1 local_19c;
  undefined4 local_18c;
  undefined4 local_188;
  undefined1 local_184 [4];
  undefined4 *****local_180 [4];
  int local_170;
  uint local_16c;
  undefined **local_150;
  undefined4 *****local_14c [4];
  undefined4 local_13c;
  uint local_138;
  undefined1 local_134;
  undefined4 local_124;
  undefined4 local_120;
  undefined **local_11c;
  undefined4 *****local_118 [4];
  undefined4 local_108;
  uint local_104;
  undefined1 local_100;
  undefined4 local_f0;
  undefined4 local_ec;
  wchar_t local_e8 [24];
  undefined8 local_b8;
  undefined2 local_b0;
  wchar_t local_ac [8];
  undefined8 local_9c;
  undefined2 local_94;
  wchar_t local_90 [16];
  undefined8 local_70;
  undefined2 local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined2 local_50;
  wchar_t local_4c [8];
  undefined8 local_3c;
  undefined2 local_34;
  undefined1 local_30;
  undefined4 local_2f;
  uint uStack_2b;
  undefined4 uStack_27;
  undefined4 uStack_23;
  undefined8 local_1f;
  undefined1 local_17;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  iVar3 = DAT_1024bec0;
  puStack_c = &LAB_101c34c8;
  local_10 = ExceptionList;
  uVar5 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_221 = '\0';
  local_30 = 0;
  local_2f = 0;
  uStack_2b = 0;
  uStack_27 = 0;
  uStack_23 = 0;
  local_17 = 0;
  local_1f = 0;
  local_1d4 = 7;
  local_1d8 = 0;
  local_1e8 = 0;
  local_1ec = CCpRsString::vftable;
  local_1bc = 0xf;
  local_1c0 = 0;
  local_1d0 = 0;
  local_138 = 7;
  local_13c = 0;
  local_14c[0] = (undefined4 *****)((uint)local_14c[0] & 0xffff0000);
  local_150 = CCpRsString::vftable;
  local_120 = 0xf;
  local_124 = 0;
  local_134 = 0;
  local_104 = 7;
  local_108 = 0;
  local_118[0] = (undefined4 *****)((uint)local_118[0] & 0xffff0000);
  local_11c = CCpRsString::vftable;
  local_ec = 0xf;
  local_f0 = 0;
  local_100 = 0;
  local_1a0 = 7;
  local_1a4 = 0;
  local_1b4 = 0;
  local_1b8 = CCpRsString::vftable;
  local_188 = 0xf;
  local_18c = 0;
  local_19c = 0;
  local_8 = 3;
  uStack_7 = 0;
  local_14 = uVar5;
  FUN_1002ddb0(local_184);
  local_8 = 4;
  uVar4 = local_8;
  local_8 = 4;
  local_54 = 0x740078;
  local_64 = 0x570046;
  uStack_60 = 0x6e0049;
  uStack_5c = 0x6f0066;
  uStack_58 = 0x74002e;
  local_50 = 0;
  builtin_wcsncpy(local_4c,L"DualBank",8);
  local_34 = 0;
  local_3c = 0x6f0066006e0049;
  local_94 = 0;
  builtin_wcsncpy(local_e8,L"DualBankSupport",0x10);
  local_68 = 0;
  builtin_wcsncpy(local_ac,L"DualBank",8);
  local_9c = 0x65007000790054;
  builtin_wcsncpy(local_90,L"RunArea",8);
  builtin_wcsncpy(local_90 + 8,L"User1Ver",8);
  local_70 = 0x6e006f00690073;
  builtin_wcsncpy(local_e8 + 0x10,L"User2Ver",8);
  local_b8 = 0x6e006f00690073;
  local_b0 = 0;
  if (in_ECX == 0) goto LAB_10039cee;
  pppuVar6 = (undefined ***)FUN_100075b0(local_220);
  if (&local_150 != pppuVar6) {
    if (pppuVar6 == (undefined ***)0x0) {
      ppppppuVar13 = (undefined4 ******)0x0;
    }
    else {
      ppppppuVar13 = (undefined4 ******)(pppuVar6 + 1);
    }
    if (local_14c != ppppppuVar13) {
      if (7 < local_138) {
        FUN_1000b5d0(local_14c[0],local_138 + 1);
      }
      local_138 = 7;
      local_13c = 0;
      local_14c[0] = (undefined4 *****)((uint)local_14c[0] & 0xffff0000);
      FUN_10045640(ppppppuVar13);
    }
    local_8 = 4;
  }
  FUN_10048130(uVar5);
  if ((short)local_64 == 0) {
    iVar11 = 0;
  }
  else {
    psVar12 = (short *)&local_64;
    do {
      sVar1 = *psVar12;
      psVar12 = psVar12 + 1;
    } while (sVar1 != 0);
    iVar11 = (int)psVar12 - ((int)&local_64 + 2) >> 1;
  }
  puVar14 = &local_64;
  FUN_1002c850(puVar14,iVar11);
  if (DAT_1024a368 != 0) {
    uVar15 = 0x10039713;
    uVar7 = FUN_100486d0();
    FUN_1000d0a0(uVar7,0x12,puVar14,uVar15);
    _local_8 = CONCAT31(uStack_7,6);
    iVar11 = FUN_1000b310();
    if (iVar11 == 0) {
      uVar2 = *(uint *)((int)auStack_2d0 + *(int *)(local_2dc + 4));
      uVar8 = uVar2 | 6;
      if (*(int *)((int)aiStack_2a4 + *(int *)(local_2dc + 4)) != 0) {
        uVar8 = uVar2 | 2;
      }
      FUN_100071e0(uVar8,0);
    }
    local_8 = 4;
    FUN_10007f80();
  }
  iVar11 = (**(code **)(*DAT_10249d10 + 0x14))();
  if (iVar11 == 8) {
    iVar11 = FUN_10029d70();
  }
  else {
    iVar11 = FUN_10017720();
    uVar4 = local_8;
    if (((iVar11 != 0) || (iVar11 = FUN_10017780(), uVar4 = local_8, iVar11 != 0)) ||
       ((iVar11 = (**(code **)(*DAT_10249d10 + 0x14))(), iVar11 == 2 &&
        ((DAT_1024a384 != 0 && (iVar11 = FUN_10019030(), uVar4 = local_8, iVar11 != 0))))))
    goto LAB_10039cee;
    iVar11 = 0;
    if (local_221 == 'j') {
      iVar11 = FUN_10022ea0();
    }
    else if (local_221 == 'n') {
      iVar11 = FUN_10022c30();
    }
    iVar9 = (**(code **)(*DAT_10249d10 + 0x14))();
    if ((iVar9 == 2) && (DAT_1024a384 != 0)) {
      FUN_10019030();
    }
  }
  uVar4 = local_8;
  if (iVar11 != 0) goto LAB_10039cee;
  if (iVar3 == 0) {
    if ((char)local_2f == '\0') {
      uVar7 = FUN_1003bf20();
      FUN_1003c7c0(uVar7);
      FUN_10048240(&DAT_102199b4);
    }
    else {
      FUN_10048240(&DAT_102199bc);
      uVar7 = FUN_1003bf20();
      FUN_1003c7c0(uVar7);
    }
    if (DAT_1024a368 != 0) {
      ppppppuVar13 = local_14c;
      if (7 < local_138) {
        ppppppuVar13 = (undefined4 ******)local_14c[0];
      }
      ppppppuVar10 = local_118;
      if (7 < local_104) {
        ppppppuVar10 = (undefined4 ******)local_118[0];
      }
      FUN_10042360(ppppppuVar10,ppppppuVar13);
    }
  }
  if ((char)local_2f == '\x01') {
    if (iVar3 == 0) {
      if (local_2f._1_1_ < 0x10) {
        pwVar16 = (wchar_t *)(&PTR_u_Flash_Partition_1_Bank_Boot___Us_1020eb34)[local_2f._1_1_];
LAB_10039917:
        FUN_10048240(pwVar16);
      }
      else if (local_2f._1_1_ == 0xff) {
        pwVar16 = L"Flash Partition(Boot + User)";
        goto LAB_10039917;
      }
      if (DAT_1024a368 != 0) {
        ppppppuVar13 = local_14c;
        if (7 < local_138) {
          ppppppuVar13 = (undefined4 ******)local_14c[0];
        }
        ppppppuVar10 = local_118;
        if (7 < local_104) {
          ppppppuVar10 = (undefined4 ******)local_118[0];
        }
        FUN_10042360(ppppppuVar10,ppppppuVar13);
      }
      FUN_1003bf20();
      uVar7 = FUN_1003c280();
      FUN_1003c7c0(uVar7);
    }
    if (local_170 == 0) {
      FUN_10048350(&local_11c,L"%d.%02d");
    }
    else {
      ppppppuVar13 = local_180;
      if (7 < local_16c) {
        ppppppuVar13 = (undefined4 ******)local_180[0];
      }
      FUN_10048350(&local_11c,L"%ls %d.%02d",ppppppuVar13,local_2f >> 0x18,uStack_2b & 0xff);
    }
    if (DAT_1024a368 != 0) {
      ppppppuVar13 = local_14c;
      if (7 < local_138) {
        ppppppuVar13 = (undefined4 ******)local_14c[0];
      }
      ppppppuVar10 = local_118;
      if (7 < local_104) {
        ppppppuVar10 = (undefined4 ******)local_118[0];
      }
      FUN_10042360(ppppppuVar10,ppppppuVar13);
    }
    FUN_1003bf20();
    uVar7 = FUN_1003c280();
    FUN_1003c7c0(uVar7);
    if ((local_2f._1_1_ == '\x01') || (local_2f._1_1_ == '\x02')) {
      if (local_170 == 0) {
        FUN_10048350(&local_11c,L"%d.%02d");
      }
      else {
        ppppppuVar13 = local_180;
        if (7 < local_16c) {
          ppppppuVar13 = (undefined4 ******)local_180[0];
        }
        FUN_10048350(&local_11c,L"%ls %d.%02d",ppppppuVar13,uStack_2b >> 8 & 0xff,
                     uStack_2b >> 0x10 & 0xff);
      }
      if (DAT_1024a368 != 0) {
        ppppppuVar13 = local_14c;
        if (7 < local_138) {
          ppppppuVar13 = (undefined4 ******)local_14c[0];
        }
        ppppppuVar10 = local_118;
        if (7 < local_104) {
          ppppppuVar10 = (undefined4 ******)local_118[0];
        }
        FUN_10042360(ppppppuVar10,ppppppuVar13);
      }
      FUN_1003bf20();
      uVar7 = FUN_1003c280();
      FUN_1003c7c0(uVar7);
      if (local_2f._2_1_ == '\0') {
        FUN_10048350(&local_11c,L"Boot");
      }
      else {
        FUN_10048350(&local_11c,L"User%d",local_2f._2_1_);
      }
      if (DAT_1024a368 != 0) {
        ppppppuVar13 = local_14c;
        if (7 < local_138) {
          ppppppuVar13 = (undefined4 ******)local_14c[0];
        }
        ppppppuVar10 = local_118;
        if (7 < local_104) {
          ppppppuVar10 = (undefined4 ******)local_118[0];
        }
        FUN_10042360(ppppppuVar10,ppppppuVar13);
      }
    }
    else {
      if ((local_2f._1_1_ != '\0') && (uVar4 = local_8, local_2f._1_1_ != '\x03'))
      goto LAB_10039cee;
      if (local_2f._2_1_ == '\0') {
        FUN_10048350(&local_11c,L"Boot");
      }
      else {
        FUN_10048350(&local_11c,L"User%d",local_2f._2_1_);
      }
      if (DAT_1024a368 != 0) {
        ppppppuVar13 = local_14c;
        if (7 < local_138) {
          ppppppuVar13 = (undefined4 ******)local_14c[0];
        }
        ppppppuVar10 = local_118;
        if (7 < local_104) {
          ppppppuVar10 = (undefined4 ******)local_118[0];
        }
        FUN_10042360(ppppppuVar10,ppppppuVar13);
      }
    }
LAB_10039cce:
    FUN_1003bf20();
    uVar7 = FUN_1003c280();
  }
  else {
    if ((local_2f._3_1_ != -1) || ((char)uStack_2b != -1)) {
      if (local_170 == 0) {
        FUN_10048350(&local_11c,L"%d.%02d");
      }
      else {
        ppppppuVar13 = local_180;
        if (7 < local_16c) {
          ppppppuVar13 = (undefined4 ******)local_180[0];
        }
        FUN_10048350(&local_11c,L"%ls %d.%02d",ppppppuVar13,local_2f._3_1_,uStack_2b & 0xff);
      }
      if (DAT_1024a368 != 0) {
        ppppppuVar13 = local_14c;
        if (7 < local_138) {
          ppppppuVar13 = (undefined4 ******)local_14c[0];
        }
        ppppppuVar10 = local_118;
        if (7 < local_104) {
          ppppppuVar10 = (undefined4 ******)local_118[0];
        }
        FUN_10042360(ppppppuVar10,ppppppuVar13);
      }
      goto LAB_10039cce;
    }
    uVar7 = FUN_1003bf20();
  }
  FUN_1003c7c0(uVar7);
  uVar4 = local_8;
LAB_10039cee:
  local_8 = uVar4;
  FUN_10048130(uVar5);
  FUN_10048130();
  FUN_10048130();
  FUN_10048130();
  FUN_10048130();
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

