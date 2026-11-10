// rea decompile_all
// name: FUN_10025fc0
// address: 0x10025fc0
// body: available
// range: 0x10025fc0-0x10026d74 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10025fc0(void)

{
  undefined4 uVar1;
  uint uVar2;
  undefined ***pppuVar3;
  int iVar4;
  undefined4 ******ppppppuVar5;
  undefined4 ******ppppppuVar6;
  int iVar7;
  undefined4 local_214;
  uint local_200;
  undefined4 local_1fc;
  uint local_1e8;
  undefined **local_1e4;
  uint local_1e0;
  undefined4 local_1d0;
  uint local_1cc;
  uint local_1c8;
  undefined4 local_1b8;
  uint local_1b4;
  undefined **local_1b0;
  undefined4 *****local_1ac [4];
  undefined4 local_19c;
  uint local_198;
  uint local_194;
  undefined4 local_184;
  uint local_180;
  undefined **local_17c;
  undefined4 *****local_178 [4];
  undefined4 local_168;
  uint local_164;
  uint local_160;
  undefined4 local_150;
  uint local_14c;
  undefined **local_148;
  uint local_144;
  undefined4 local_134;
  uint local_130;
  uint local_12c;
  undefined4 local_11c;
  uint local_118;
  undefined **local_114;
  undefined4 *****local_110 [4];
  undefined4 local_100;
  uint local_fc;
  uint local_f8;
  undefined4 local_e8;
  uint local_e4;
  undefined **local_e0;
  uint local_dc [4];
  undefined4 local_cc;
  uint local_c8;
  uint local_c4;
  undefined4 local_b4;
  uint local_b0;
  wchar_t local_ac [16];
  undefined4 local_8c;
  wchar_t awStack_88 [18];
  wchar_t local_64 [8];
  undefined8 local_54;
  undefined2 local_4c;
  undefined1 local_48;
  undefined4 local_47;
  undefined2 local_43;
  undefined1 local_40;
  undefined1 uStack_3f;
  byte bStack_3e;
  undefined1 uStack_3d;
  char local_3c;
  undefined1 uStack_3b;
  undefined1 local_3a;
  undefined1 local_38;
  undefined1 uStack_37;
  byte bStack_36;
  undefined1 uStack_35;
  undefined1 local_34;
  undefined1 local_30;
  undefined1 uStack_2f;
  byte bStack_2e;
  undefined1 uStack_2d;
  undefined1 local_2c;
  undefined1 local_28;
  undefined1 uStack_27;
  byte bStack_26;
  undefined1 uStack_25;
  char local_24;
  undefined1 uStack_23;
  char local_22;
  undefined4 local_20;
  char cStack_1c;
  undefined1 uStack_1b;
  undefined1 uStack_1a;
  undefined1 uStack_19;
  undefined1 uStack_18;
  undefined1 uStack_17;
  undefined1 uStack_16;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar7 = DAT_1024be74;
  puStack_c = &LAB_101c25b9;
  local_10 = ExceptionList;
  uVar2 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8c._0_2_ = L'I';
  local_8c._2_2_ = L's';
  builtin_wcsncpy(awStack_88,L"pUserDefined.txt",0x11);
  local_4c = 0;
  uStack_17 = 0;
  uStack_16 = 0;
  builtin_wcsncpy(local_ac,L"UserDefinedInfo",0x10);
  local_48 = 0;
  local_47 = 0;
  local_43 = 0;
  local_198 = 7;
  local_19c = 0;
  local_1ac[0] = (undefined4 *****)((uint)local_1ac[0] & 0xffff0000);
  builtin_wcsncpy(local_64,L"HPFwName",8);
  local_1b0 = CCpRsString::vftable;
  local_54 = 0x6f0066006e0049;
  local_20 = 0;
  cStack_1c = '\0';
  uStack_1b = 0;
  uStack_1a = 0;
  uStack_19 = 0;
  uStack_18 = 0;
  local_180 = 0xf;
  local_184 = 0;
  local_194 = local_194 & 0xffffff00;
  local_164 = 7;
  local_168 = 0;
  local_178[0] = (undefined4 *****)((uint)local_178[0] & 0xffff0000);
  local_17c = CCpRsString::vftable;
  local_14c = 0xf;
  local_150 = 0;
  local_160 = local_160 & 0xffffff00;
  local_c8 = 7;
  local_cc = 0;
  local_dc[0] = local_dc[0] & 0xffff0000;
  local_e0 = CCpRsString::vftable;
  local_b0 = 0xf;
  local_b4 = 0;
  local_c4 = local_c4 & 0xffffff00;
  local_fc = 7;
  local_100 = 0;
  local_110[0] = (undefined4 *****)((uint)local_110[0] & 0xffff0000);
  local_114 = CCpRsString::vftable;
  local_e4 = 0xf;
  local_e8 = 0;
  local_f8 = local_f8 & 0xffffff00;
  local_130 = 7;
  local_134 = 0;
  local_144 = local_144 & 0xffff0000;
  local_148 = CCpRsString::vftable;
  local_118 = 0xf;
  local_11c = 0;
  local_12c = local_12c & 0xffffff00;
  local_8._0_1_ = 4;
  local_8._1_3_ = 0;
  local_14 = uVar2;
  FUN_100075b0(&local_1e4);
  local_8 = CONCAT31(local_8._1_3_,5);
  pppuVar3 = (undefined ***)FUN_10047dc0(&local_8c,uVar2);
  if (&local_1b0 != pppuVar3) {
    if (pppuVar3 == (undefined ***)0x0) {
      ppppppuVar6 = (undefined4 ******)0x0;
    }
    else {
      ppppppuVar6 = (undefined4 ******)(pppuVar3 + 1);
    }
    if (local_1ac != ppppppuVar6) {
      if (7 < local_198) {
        FUN_1000b5d0(local_1ac[0],local_198 + 1);
      }
      local_198 = 7;
      local_19c = 0;
      local_1ac[0] = (undefined4 *****)((uint)local_1ac[0] & 0xffff0000);
      FUN_10045640(ppppppuVar6);
    }
  }
  FUN_10048130();
  local_8 = CONCAT31(local_8._1_3_,4);
  FUN_10048130();
  FUN_10048350(&local_148,L"Enter Function Get HP Fw Name Info");
  FUN_10016860();
  FUN_10048350(&local_e0,L"delay time between send cmd %d",DAT_1024be70);
  FUN_10016860();
  local_40 = 0x6e;
  uStack_3f = 0x51;
  bStack_3e = 0x84;
  uStack_3d = 3;
  local_3c = -8;
  uStack_3b = 0x8e;
  local_3a = 0;
  local_38 = 0x6e;
  uStack_37 = 0x51;
  bStack_36 = 0x82;
  uStack_35 = 1;
  local_34 = 0xf8;
  for (; 0 < iVar7; iVar7 = iVar7 + -1) {
    FUN_10048350(&local_148,L"Get HP fw name info first cmd retry count:%d",
                 (DAT_1024be74 - iVar7) + 1);
    FUN_10016860();
    local_20 = 0;
    cStack_1c = '\0';
    uStack_1b = 0;
    uStack_1a = 0;
    uStack_19 = 0;
    uStack_18 = 0;
    uStack_17 = 0;
    uStack_16 = 0;
    iVar4 = (**(code **)(*DAT_10249d10 + 0x13c))
                      (CONCAT13(uStack_3d,CONCAT12(bStack_3e,CONCAT11(uStack_3f,local_40))),
                       CONCAT13(local_3c,CONCAT12(uStack_3d,CONCAT11(bStack_3e,uStack_3f))),
                       bStack_3e & 0x7f,&uStack_3d);
    if (iVar4 == 0) {
      Sleep(DAT_1024be70);
      iVar4 = (**(code **)(*DAT_10249d10 + 0x13c))
                        (CONCAT13(uStack_35,CONCAT12(bStack_36,CONCAT11(uStack_37,local_38))),
                         CONCAT13(local_34,CONCAT12(uStack_35,CONCAT11(bStack_36,uStack_37))),
                         bStack_36 & 0x7f,&uStack_35);
      if (iVar4 == 0) {
        Sleep(DAT_1024be70);
        iVar4 = (**(code **)(*DAT_10249d10 + 0x140))(0x6e,0x51,0xb,&local_20);
        if (iVar4 == 0) {
          FUN_10048350(&local_148,L"First cmd read buffer:");
          FUN_10016860();
          local_100 = 0;
          ppppppuVar6 = local_110;
          if (7 < local_fc) {
            ppppppuVar6 = (undefined4 ******)local_110[0];
          }
          iVar4 = 0;
          *(undefined2 *)ppppppuVar6 = 0;
          do {
            FUN_10048350(&local_e0,L"0x%x,",*(undefined1 *)((int)&local_20 + iVar4));
            FUN_1002c980(local_dc,0,0xffffffff);
            iVar4 = iVar4 + 1;
          } while (iVar4 < 0xb);
          FUN_10016860();
          if (((char)local_20 == 'n') && (cStack_1c == local_3c)) {
            local_48 = uStack_19;
            local_47 = CONCAT31(local_47._1_3_,uStack_17);
            if (0 < iVar7) {
              local_28 = 0x6e;
              uStack_27 = 0x51;
              bStack_26 = 0x84;
              uStack_25 = 3;
              local_24 = -0xb;
              uStack_23 = 0x9e;
              local_22 = '\0';
              local_30 = 0x6e;
              uStack_2f = 0x51;
              bStack_2e = 0x82;
              uStack_2d = 1;
              local_2c = 0xf5;
              iVar7 = DAT_1024be74;
              goto joined_r0x100266e4;
            }
            break;
          }
        }
        else {
          FUN_10048350(&local_e0,L"DDCCI read fail, error code:0x%x",iVar4);
          FUN_10016860();
        }
      }
      else {
        FUN_10048350(&local_e0,L"DDCCI write first cmd 2 fail, error code:0x%x",iVar4);
        FUN_10016860();
      }
    }
    else {
      FUN_10048350(&local_e0,L"DDCCI write first cmd 1 fail, error code:0x%x",iVar4);
      FUN_10016860();
    }
  }
LAB_10026474:
  local_148 = CCpRsString::vftable;
  if (0xf < local_118) {
    FUN_1000b630(local_12c,local_118 + 1);
  }
  local_118 = 0xf;
  local_11c = 0;
  local_12c = local_12c & 0xffffff00;
  if (7 < local_130) {
    FUN_1000b5d0(local_144,local_130 + 1);
  }
  local_130 = 7;
  local_144 = local_144 & 0xffff0000;
  local_134 = 0;
  if (0xf < local_e4) {
    FUN_1000b630(local_f8,local_e4 + 1);
  }
  if (7 < local_fc) {
    FUN_1000b5d0(local_110[0],local_fc + 1);
  }
  local_e0 = CCpRsString::vftable;
  if (0xf < local_b0) {
    FUN_1000b630(local_c4,local_b0 + 1);
  }
  local_b0 = 0xf;
  local_b4 = 0;
  local_c4 = local_c4 & 0xffffff00;
  if (7 < local_c8) {
    FUN_1000b5d0(local_dc[0],local_c8 + 1);
  }
  local_c8 = 7;
  local_dc[0] = local_dc[0] & 0xffff0000;
  local_cc = 0;
  local_17c = CCpRsString::vftable;
  if (0xf < local_14c) {
    FUN_1000b630(local_160,local_14c + 1);
  }
  local_14c = 0xf;
  local_150 = 0;
  local_160 = local_160 & 0xffffff00;
  if (7 < local_164) {
    FUN_1000b5d0(local_178[0],local_164 + 1);
  }
  local_164 = 7;
  local_178[0] = (undefined4 *****)((uint)local_178[0] & 0xffff0000);
  local_168 = 0;
  local_1b0 = CCpRsString::vftable;
  if (0xf < local_180) {
    FUN_1000b630(local_194,local_180 + 1);
  }
  local_180 = 0xf;
  local_184 = 0;
  local_194 = local_194 & 0xffffff00;
  if (7 < local_198) {
    FUN_1000b5d0(local_1ac[0],local_198 + 1);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
joined_r0x100266e4:
  if (iVar7 < 1) goto LAB_10026474;
  FUN_10048350(&local_148,L"Get HP fw name info second cmd retry count:%d",
               (DAT_1024be74 - iVar7) + 1);
  FUN_10016860();
  local_20 = 0;
  cStack_1c = '\0';
  uStack_1b = 0;
  uStack_1a = 0;
  uStack_19 = 0;
  uStack_18 = 0;
  uStack_17 = 0;
  uStack_16 = 0;
  iVar4 = (**(code **)(*DAT_10249d10 + 0x13c))
                    (CONCAT13(uStack_25,CONCAT12(bStack_26,CONCAT11(uStack_27,local_28))),
                     CONCAT13(local_24,CONCAT12(uStack_25,CONCAT11(bStack_26,uStack_27))),
                     bStack_26 & 0x7f,&uStack_25);
  if (iVar4 == 0) {
    Sleep(DAT_1024be70);
    iVar4 = (**(code **)(*DAT_10249d10 + 0x13c))
                      (CONCAT13(uStack_2d,CONCAT12(bStack_2e,CONCAT11(uStack_2f,local_30))),
                       CONCAT13(local_2c,CONCAT12(uStack_2d,CONCAT11(bStack_2e,uStack_2f))),
                       bStack_2e & 0x7f,&uStack_2d);
    if (iVar4 == 0) {
      Sleep(DAT_1024be70);
      iVar4 = (**(code **)(*DAT_10249d10 + 0x140))(0x6e,0x51,0xb,&local_20);
      if (iVar4 == 0) {
        FUN_10048350(&local_148,L"Second cmd read buffer:");
        FUN_10016860();
        local_100 = 0;
        ppppppuVar6 = local_110;
        if (7 < local_fc) {
          ppppppuVar6 = (undefined4 ******)local_110[0];
        }
        iVar4 = 0;
        *(undefined2 *)ppppppuVar6 = 0;
        do {
          FUN_10048350(&local_e0,L"0x%x,",*(undefined1 *)((int)&local_20 + iVar4));
          FUN_1002c980(local_dc,0,0xffffffff);
          iVar4 = iVar4 + 1;
        } while (iVar4 < 0xb);
        FUN_10016860();
        uVar1 = local_47;
        if (((char)local_20 == 'n') && (cStack_1c == local_24)) {
          local_47._3_1_ = SUB41(uVar1,3);
          local_47._0_3_ = CONCAT12(uStack_17,CONCAT11(uStack_1a,(undefined1)local_47));
          if (0 < iVar7) {
            local_22 = local_22 + '\x01';
            iVar7 = DAT_1024be74;
            goto joined_r0x100268d4;
          }
          goto LAB_10026474;
        }
      }
      else {
        FUN_10048350(&local_e0,L"DDCCI read fail, error code:0x%x",iVar4);
        FUN_10016860();
      }
    }
    else {
      FUN_10048350(&local_e0,L"DDCCI write second cmd 2 fail, error code:0x%x",iVar4);
      FUN_10016860();
    }
  }
  else {
    FUN_10048350(&local_e0,L"DDCCI write second cmd 1 fail, error code:0x%x",iVar4);
    FUN_10016860();
  }
  iVar7 = iVar7 + -1;
  goto joined_r0x100266e4;
joined_r0x100268d4:
  if (iVar7 < 1) goto LAB_10026474;
  FUN_10048350(&local_148,L"Get HP fw name info third cmd retry count:%d",(DAT_1024be74 - iVar7) + 1
              );
  FUN_10016860();
  local_20 = 0;
  cStack_1c = '\0';
  uStack_1b = 0;
  uStack_1a = 0;
  uStack_19 = 0;
  uStack_18 = 0;
  uStack_17 = 0;
  uStack_16 = 0;
  iVar4 = (**(code **)(*DAT_10249d10 + 0x13c))
                    (CONCAT13(uStack_25,CONCAT12(bStack_26,CONCAT11(uStack_27,local_28))),
                     CONCAT13(local_24,CONCAT12(uStack_25,CONCAT11(bStack_26,uStack_27))),
                     bStack_26 & 0x7f,&uStack_25);
  if (iVar4 == 0) {
    Sleep(DAT_1024be70);
    iVar4 = (**(code **)(*DAT_10249d10 + 0x13c))
                      (CONCAT13(uStack_2d,CONCAT12(bStack_2e,CONCAT11(uStack_2f,local_30))),
                       CONCAT13(local_2c,CONCAT12(uStack_2d,CONCAT11(bStack_2e,uStack_2f))),
                       bStack_2e & 0x7f,&uStack_2d);
    if (iVar4 == 0) {
      Sleep(DAT_1024be70);
      iVar4 = (**(code **)(*DAT_10249d10 + 0x140))(0x6e,0x51,0xb,&local_20);
      if (iVar4 == 0) {
        FUN_10048350(&local_148,L"Third cmd read buffer:");
        FUN_10016860();
        local_100 = 0;
        ppppppuVar6 = local_110;
        if (7 < local_fc) {
          ppppppuVar6 = (undefined4 ******)local_110[0];
        }
        iVar4 = 0;
        *(undefined2 *)ppppppuVar6 = 0;
        do {
          FUN_10048350(&local_e0,L"0x%x,",*(undefined1 *)((int)&local_20 + iVar4));
          FUN_1002c980(local_dc,0,0xffffffff);
          iVar4 = iVar4 + 1;
        } while (iVar4 < 0xb);
        FUN_10016860();
        if (((char)local_20 == 'n') && (cStack_1c == local_24)) {
          local_47 = CONCAT13(uStack_1a,(undefined3)local_47);
          local_43 = CONCAT11(uStack_17,uStack_19);
          if (0 < iVar7) {
            FUN_10048350(&local_148,L"Target buffer:");
            FUN_1003fc00();
            FUN_10016860();
            local_100 = 0;
            ppppppuVar6 = local_110;
            if (7 < local_fc) {
              ppppppuVar6 = (undefined4 ******)local_110[0];
            }
            iVar7 = 0;
            *(undefined2 *)ppppppuVar6 = 0;
            do {
              FUN_10048350(&local_e0,L"0x%x,",(&local_48)[iVar7]);
              FUN_1002c980(local_dc,0,0xffffffff);
              iVar7 = iVar7 + 1;
            } while (iVar7 < 7);
            FUN_10016860();
            local_100 = 0;
            ppppppuVar6 = local_110;
            if (7 < local_fc) {
              ppppppuVar6 = (undefined4 ******)local_110[0];
            }
            iVar7 = 0;
            *(undefined2 *)ppppppuVar6 = 0;
            do {
              FUN_10048350(&local_e0,L"_%02x",(&local_48)[iVar7]);
              FUN_1002c980(local_dc,0,0xffffffff);
              iVar7 = iVar7 + 1;
            } while (iVar7 < 7);
            local_1cc = 7;
            local_1d0 = 0;
            local_1e0 = local_1e0 & 0xffff0000;
            local_1e4 = CCpRsString::vftable;
            local_1b4 = 0xf;
            local_1b8 = 0;
            local_1c8 = local_1c8 & 0xffffff00;
            local_8 = CONCAT31(local_8._1_3_,7);
            FUN_10025520();
            pppuVar3 = (undefined ***)FUN_10047bd0(&local_114);
            if (&local_17c != pppuVar3) {
              if (pppuVar3 == (undefined ***)0x0) {
                ppppppuVar6 = (undefined4 ******)0x0;
              }
              else {
                ppppppuVar6 = (undefined4 ******)(pppuVar3 + 1);
              }
              if (local_178 != ppppppuVar6) {
                if (7 < local_164) {
                  FUN_1000b5d0(local_178[0],local_164 + 1);
                }
                local_164 = 7;
                local_168 = 0;
                local_178[0] = (undefined4 *****)((uint)local_178[0] & 0xffff0000);
                FUN_10045640(ppppppuVar6);
              }
              local_8 = CONCAT31(local_8._1_3_,7);
            }
            if (0xf < local_1e8) {
              FUN_1000b630(local_1fc,local_1e8 + 1);
            }
            if (7 < local_200) {
              FUN_1000b5d0(local_214,local_200 + 1);
            }
            ppppppuVar6 = local_1ac;
            if (7 < local_198) {
              ppppppuVar6 = (undefined4 ******)local_1ac[0];
            }
            ppppppuVar5 = local_178;
            if (7 < local_164) {
              ppppppuVar5 = (undefined4 ******)local_178[0];
            }
            FUN_10042360(ppppppuVar5,ppppppuVar6);
            FUN_10016860();
            if (0xf < local_1b4) {
              FUN_1000b630(local_1c8,local_1b4 + 1);
            }
            if (7 < local_1cc) {
              FUN_1000b5d0(local_1e0,local_1cc + 1);
            }
          }
          goto LAB_10026474;
        }
      }
      else {
        FUN_10048350(&local_e0,L"DDCCI read fail, error code:0x%x",iVar4);
        FUN_10016860();
      }
    }
    else {
      FUN_10048350(&local_e0,L"DDCCI write third cmd 2 fail, error code:0x%x",iVar4);
      FUN_10016860();
    }
  }
  else {
    FUN_10048350(&local_e0,L"DDCCI write third cmd 1 fail, error code:0x%x",iVar4);
    FUN_10016860();
  }
  iVar7 = iVar7 + -1;
  goto joined_r0x100268d4;
}

