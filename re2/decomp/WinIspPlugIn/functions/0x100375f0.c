// rea decompile_all
// name: FUN_100375f0
// address: 0x100375f0
// body: available
// range: 0x100375f0-0x10037be9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100375f0(void)

{
  int iVar1;
  undefined ***pppuVar2;
  undefined4 *****pppppuVar3;
  code *pcVar4;
  int iVar5;
  undefined4 *****pppppuVar6;
  int iVar7;
  undefined4 local_128;
  uint local_114;
  undefined4 local_110;
  uint local_fc;
  undefined **local_f8;
  undefined4 ****local_f4 [4];
  undefined4 local_e4;
  uint local_e0;
  uint local_dc;
  undefined4 local_cc;
  uint local_c8;
  undefined **local_c4;
  uint local_c0 [4];
  undefined4 local_b0;
  uint local_ac;
  uint local_a8;
  undefined4 local_98;
  uint local_94;
  undefined **local_90;
  uint local_8c;
  undefined4 local_7c;
  uint local_78;
  uint local_74;
  undefined4 local_64;
  uint local_60;
  undefined **local_5c;
  undefined4 ****local_58 [4];
  undefined4 local_48;
  uint local_44;
  uint local_40;
  undefined4 local_30;
  uint local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined1 uStack_20;
  undefined1 uStack_1f;
  undefined1 uStack_1e;
  undefined1 uStack_1d;
  undefined1 local_1c;
  char cStack_1b;
  undefined2 uStack_1a;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar7 = DAT_1024be74;
  puStack_c = &LAB_101c32df;
  local_10 = ExceptionList;
  local_14 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1c = 0x6a;
  cStack_1b = 'z';
  uStack_1a = 0x108;
  local_18 = 0;
  local_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1f = 0;
  uStack_1e = 0;
  uStack_1d = 0;
  local_78 = 7;
  local_7c = 0;
  local_8c = local_8c & 0xffff0000;
  local_90 = CCpRsString::vftable;
  local_60 = 0xf;
  local_64 = 0;
  local_74 = local_74 & 0xffffff00;
  local_44 = 7;
  local_48 = 0;
  local_58[0] = (undefined4 ****)((uint)local_58[0] & 0xffff0000);
  local_5c = CCpRsString::vftable;
  local_2c = 0xf;
  local_30 = 0;
  local_40 = local_40 & 0xffffff00;
  local_e0 = 7;
  local_e4 = 0;
  local_f4[0] = (undefined4 ****)((uint)local_f4[0] & 0xffff0000);
  local_f8 = CCpRsString::vftable;
  local_c8 = 0xf;
  local_cc = 0;
  local_dc = local_dc & 0xffffff00;
  local_ac = 7;
  local_b0 = 0;
  local_c0[0] = local_c0[0] & 0xffff0000;
  local_c4 = CCpRsString::vftable;
  local_94 = 0xf;
  local_98 = 0;
  local_a8 = local_a8 & 0xffffff00;
  local_8 = 3;
  FUN_10048350(&local_90,L"Enter function ReadUserDefinedVersionOfHPAricaVersion",local_14);
  FUN_10016860();
  pcVar4 = Sleep_exref;
  do {
    if (iVar7 < 1) {
LAB_10037908:
      local_c4 = CCpRsString::vftable;
      if (0xf < local_94) {
        FUN_1000b630(local_a8,local_94 + 1);
      }
      local_94 = 0xf;
      local_98 = 0;
      local_a8 = local_a8 & 0xffffff00;
      if (7 < local_ac) {
        FUN_1000b5d0(local_c0[0],local_ac + 1);
      }
      local_ac = 7;
      local_c0[0] = local_c0[0] & 0xffff0000;
      local_b0 = 0;
      local_f8 = CCpRsString::vftable;
      if (0xf < local_c8) {
        FUN_1000b630(local_dc,local_c8 + 1);
      }
      local_c8 = 0xf;
      local_cc = 0;
      local_dc = local_dc & 0xffffff00;
      if (7 < local_e0) {
        FUN_1000b5d0(local_f4[0],local_e0 + 1);
      }
      local_e0 = 7;
      local_f4[0] = (undefined4 ****)((uint)local_f4[0] & 0xffff0000);
      local_e4 = 0;
      local_5c = CCpRsString::vftable;
      if (0xf < local_2c) {
        FUN_1000b630(local_40,local_2c + 1);
      }
      local_2c = 0xf;
      local_30 = 0;
      local_40 = local_40 & 0xffffff00;
      if (7 < local_44) {
        FUN_1000b5d0(local_58[0],local_44 + 1);
      }
      local_44 = 7;
      local_58[0] = (undefined4 ****)((uint)local_58[0] & 0xffff0000);
      local_48 = 0;
      local_90 = CCpRsString::vftable;
      if (0xf < local_60) {
        FUN_1000b630(local_74,local_60 + 1);
      }
      local_60 = 0xf;
      local_64 = 0;
      local_74 = local_74 & 0xffffff00;
      if (7 < local_78) {
        FUN_1000b5d0(local_8c,local_78 + 1);
      }
      ExceptionList = local_10;
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
    local_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    uStack_1f = 0;
    uStack_1e = 0;
    uStack_1d = 0;
    FUN_10048350(&local_90,L"Get HP Arica version retry count:%d",(DAT_1024be74 - iVar7) + 1);
    FUN_10016860();
    iVar1 = (**(code **)(*DAT_10249d10 + 0x74))
                      (CONCAT22(uStack_1a,CONCAT11(cStack_1b,local_1c)),
                       CONCAT13((undefined1)local_18,CONCAT21(uStack_1a,cStack_1b)),6,&uStack_1a,0);
    if (iVar1 == 0) {
      (*pcVar4)(DAT_1024be70);
      iVar1 = (**(code **)(*DAT_10249d10 + 0x78))
                        (CONCAT22(uStack_1a,CONCAT11(cStack_1b,local_1c)),
                         CONCAT13((undefined1)local_18,CONCAT21(uStack_1a,cStack_1b)),0xc,&local_28,
                         0);
      if (iVar1 == 0) {
        FUN_10048350(&local_90,L"HP arica cmd read buff: ");
        iVar1 = 0;
        do {
          FUN_10048350(&local_c4,L"0x%x, ",*(undefined1 *)((int)&local_28 + iVar1));
          FUN_1002c980(local_c0,0,0xffffffff);
          iVar1 = iVar1 + 1;
        } while (iVar1 < 0xc);
        FUN_10016860();
        pcVar4 = Sleep_exref;
        if (((char)local_28 == cStack_1b) && ((char)uStack_24 == -0x56)) {
          if (0 < iVar7) {
            FUN_10048350(&local_f8,L"%d.%d",uStack_1f,uStack_1e);
            pppuVar2 = (undefined ***)FUN_10047dc0(L"ISPVersion.txt");
            if (&local_5c != pppuVar2) {
              if (pppuVar2 == (undefined ***)0x0) {
                pppppuVar6 = (undefined4 *****)0x0;
              }
              else {
                pppppuVar6 = (undefined4 *****)(pppuVar2 + 1);
              }
              if (local_58 != pppppuVar6) {
                if (7 < local_44) {
                  FUN_1000b5d0(local_58[0],local_44 + 1);
                }
                local_44 = 7;
                local_48 = 0;
                local_58[0] = (undefined4 ****)((uint)local_58[0] & 0xffff0000);
                FUN_10045640(pppppuVar6);
              }
              local_8 = CONCAT31(local_8._1_3_,3);
            }
            if (0xf < local_fc) {
              FUN_1000b630(local_110,local_fc + 1);
            }
            if (7 < local_114) {
              FUN_1000b5d0(local_128,local_114 + 1);
            }
            pppppuVar6 = local_58;
            if (7 < local_44) {
              pppppuVar6 = (undefined4 *****)local_58[0];
            }
            pppppuVar3 = local_f4;
            if (7 < local_e0) {
              pppppuVar3 = (undefined4 *****)local_f4[0];
            }
            FUN_10042360(pppppuVar3,pppppuVar6);
          }
          goto LAB_10037908;
        }
      }
      else {
        FUN_10048350(&local_90,L"Read data fail, read data: ");
        iVar5 = 0;
        do {
          FUN_10048350(&local_c4,L"0x%x, ",*(undefined1 *)((int)&local_28 + iVar5));
          FUN_1002c980(local_c0,0,0xffffffff);
          iVar5 = iVar5 + 1;
        } while (iVar5 < 0xc);
        FUN_10016860();
        FUN_10048350(&local_90,L"DDCCI read cmd fail, error code:0x%x, , release dev",iVar1);
        FUN_10016860();
        (**(code **)(*DAT_10249d10 + 0x10c))();
        pcVar4 = Sleep_exref;
        Sleep(DAT_1024be70);
      }
    }
    else {
      FUN_10048350(&local_90,L"I2c write cmd fail, error code:0x%x, release dev",iVar1);
      FUN_10016860();
      (**(code **)(*DAT_10249d10 + 0x10c))();
      (*pcVar4)(DAT_1024be70);
    }
    iVar7 = iVar7 + -1;
  } while( true );
}

