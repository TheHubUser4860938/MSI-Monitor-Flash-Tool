// rea decompile_all
// name: FUN_10038850
// address: 0x10038850
// body: available
// range: 0x10038850-0x1003933e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10038850(void)

{
  uint uVar1;
  uint uVar2;
  undefined ***pppuVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined **ppuVar9;
  int iVar10;
  wchar_t *pwVar11;
  char cVar12;
  undefined4 uVar13;
  int local_384 [14];
  int aiStack_34c [14];
  undefined **local_314 [18];
  int local_2cc;
  undefined4 uStack_2c8;
  int iStack_2c4;
  uint uStack_2c0;
  int local_2bc;
  undefined4 uStack_2b8;
  int iStack_2b4;
  uint uStack_2b0;
  uint local_2a8;
  undefined ***local_2a4;
  undefined1 local_2a0 [52];
  undefined **local_26c;
  undefined2 local_268;
  undefined4 local_258;
  undefined4 local_254;
  undefined1 local_250;
  undefined4 local_240;
  undefined4 local_23c;
  undefined **local_238;
  undefined4 local_234;
  undefined4 local_224;
  uint local_220;
  undefined1 local_21c;
  undefined4 local_20c;
  undefined4 local_208;
  undefined **local_204;
  undefined4 local_200;
  undefined4 local_1f0;
  uint local_1ec;
  undefined1 local_1e8;
  undefined4 local_1d8;
  undefined4 local_1d4;
  uint local_1d0;
  int local_1cc;
  undefined1 local_1c8;
  undefined4 local_1c7;
  undefined **local_1c0;
  undefined4 local_1bc;
  undefined4 local_1ac;
  uint local_1a8;
  undefined1 local_1a4;
  undefined4 local_194;
  undefined4 local_190;
  char local_18c [260];
  wchar_t local_88 [22];
  undefined4 local_5c;
  wchar_t awStack_58 [12];
  wchar_t local_40 [22];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar7 = DAT_1024a2e4;
  iVar10 = DAT_1024a2e0;
  local_8 = 0xffffffff;
  puStack_c = &LAB_101c3423;
  local_10 = ExceptionList;
  uVar2 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1d0 = 0;
  local_1cc = 0;
  local_1c8 = 0;
  local_1c7 = 0;
  local_14 = uVar2;
  _memset(local_18c,0,0x100);
  uVar1 = DAT_1024bed4;
  local_1ec = 7;
  local_1f0 = 0;
  local_200 = (undefined **)((uint)local_200._2_2_ << 0x10);
  local_204 = CCpRsString::vftable;
  local_1d4 = 0xf;
  local_1d8 = 0;
  local_1e8 = 0;
  local_220 = 7;
  local_224 = 0;
  local_234 = (undefined4 *)((uint)local_234._2_2_ << 0x10);
  local_238 = CCpRsString::vftable;
  local_208 = 0xf;
  local_20c = 0;
  local_21c = 0;
  local_1a8 = 7;
  local_1ac = 0;
  local_1bc = (undefined4 *)((uint)local_1bc._2_2_ << 0x10);
  local_1c0 = CCpRsString::vftable;
  local_190 = 0xf;
  local_194 = 0;
  local_1a4 = 0;
  local_254 = 7;
  local_258 = 0;
  local_268 = 0;
  local_26c = CCpRsString::vftable;
  local_23c = 0xf;
  local_240 = 0;
  local_250 = 0;
  local_8._0_1_ = 3;
  local_8._1_3_ = 0;
  builtin_wcsncpy(local_40 + 10,L"ReadVersion",0xc);
  builtin_wcsncpy(local_88,L"ProjectID",10);
  builtin_wcsncpy(local_40,L"FWVersion",10);
  builtin_wcsncpy(local_88 + 10,L"CurrentBank",0xc);
  builtin_wcsncpy(awStack_58,L"SubVersion",0xb);
  local_2a8 = DAT_1024bed4;
  local_5c._0_2_ = L'F';
  local_5c._2_2_ = L'W';
  local_2cc = _DAT_1024bec4;
  uStack_2c8 = _DAT_1024bec8;
  iStack_2c4 = _DAT_1024becc;
  uStack_2c0 = _DAT_1024bed0;
  local_2bc = _DAT_1024bec4;
  uStack_2b8 = _DAT_1024bec8;
  iStack_2b4 = _DAT_1024becc;
  uStack_2b0 = _DAT_1024bed0;
  pppuVar3 = (undefined ***)FUN_100075b0(local_2a0);
  if (&local_204 != pppuVar3) {
    if (pppuVar3 == (undefined ***)0x0) {
      local_2a4 = (undefined ***)0x0;
    }
    else {
      local_2a4 = pppuVar3 + 1;
    }
    if ((undefined ***)&local_200 != local_2a4) {
      if (7 < local_1ec) {
        FUN_1000b5d0(local_200,local_1ec + 1);
      }
      local_1ec = 7;
      local_200 = (undefined **)((uint)local_200 & 0xffff0000);
      local_1f0 = 0;
      FUN_10045640(local_2a4);
    }
    local_8._0_1_ = 3;
  }
  FUN_10048130(uVar2);
  pwVar11 = L"ISPVersion.txt";
  FUN_1002c850(L"ISPVersion.txt",0xe);
  uVar13 = 0x10038aea;
  uVar4 = FUN_100486d0();
  FUN_1000d0a0(uVar4,0x12,pwVar11,uVar13);
  local_8 = CONCAT31(local_8._1_3_,5);
  iVar5 = FUN_1000b310();
  if (iVar5 == 0) {
    uVar2 = *(uint *)((int)local_384 + *(int *)(local_384[0] + 4) + 0xc);
    uVar6 = uVar2 | 6;
    if (*(int *)((int)aiStack_34c + *(int *)(local_384[0] + 4)) != 0) {
      uVar6 = uVar2 | 2;
    }
    FUN_100071e0(uVar6,0);
  }
  if (iVar10 == 7) {
    local_1cc = 1;
  }
  else {
    if (iVar10 == 8) {
      if (iVar7 == 1) {
        FUN_10038750();
      }
      else if (iVar7 == 2) {
        FUN_100383f0();
      }
      else if (iVar7 == 3) {
        FUN_10034c90();
      }
      else if (iVar7 == 4) {
        FUN_10036280();
      }
      else if (iVar7 == 5) {
        FUN_100375f0();
      }
      goto LAB_1003927f;
    }
    if ((iVar10 == 3) && (iStack_2c4 != 0)) {
      iVar7 = FUN_1001f640(local_2cc,uStack_2c8,iStack_2c4,uStack_2c0,uVar1);
      uVar1 = uStack_2b0;
      iVar10 = local_2bc;
      if (iVar7 == 0) {
        uVar2 = 0;
        if (uStack_2b0 != 0) {
          do {
            local_1ac = 0;
            puVar8 = &local_1bc;
            if (7 < local_1a8) {
              puVar8 = local_1bc;
            }
            *(undefined2 *)puVar8 = 0;
            if (iVar10 == 0) {
              cVar12 = local_18c[uVar2];
              if (cVar12 != '\0') {
                pwVar11 = L"%c";
                goto LAB_10038ce7;
              }
            }
            else {
              if (iVar10 == 1) {
                cVar12 = local_18c[uVar2];
                pwVar11 = L"0x%x ";
              }
              else {
                cVar12 = local_18c[uVar2];
                pwVar11 = L"%d ";
              }
LAB_10038ce7:
              FUN_10048350(&local_1c0,pwVar11,cVar12);
            }
            FUN_1002c980(&local_1bc,0,0xffffffff);
            uVar2 = uVar2 + 1;
          } while (uVar2 < uVar1);
        }
        FUN_1003bf20();
        uVar4 = FUN_1003c280();
        FUN_1003c7c0(uVar4);
        if (DAT_1024a368 != 0) {
          ppuVar9 = (undefined **)&local_200;
          if (7 < local_1ec) {
            ppuVar9 = local_200;
          }
          puVar8 = &local_234;
          if (7 < local_220) {
            puVar8 = local_234;
          }
          FUN_10042360(puVar8,ppuVar9);
        }
        if (local_2a8 != 0) {
          local_224 = 0;
          puVar8 = &local_234;
          if (7 < local_220) {
            puVar8 = local_234;
          }
          uVar2 = 0;
          *(undefined2 *)puVar8 = 0;
          if (local_2a8 != 0) {
            iVar7 = uVar1 - 0x18c;
            do {
              local_1ac = 0;
              puVar8 = &local_1bc;
              if (7 < local_1a8) {
                puVar8 = local_1bc;
              }
              *(undefined2 *)puVar8 = 0;
              if (iVar10 == 0) {
                cVar12 = local_18c[uVar2 + iVar7 + 0x18c];
                if (cVar12 != '\0') {
                  pwVar11 = L"%c";
                  goto LAB_10038e19;
                }
              }
              else {
                if (iVar10 == 1) {
                  cVar12 = local_18c[uVar2 + iVar7 + 0x18c];
                  pwVar11 = L"0x%x ";
                }
                else {
                  cVar12 = local_18c[uVar2 + iVar7 + 0x18c];
                  pwVar11 = L"%d ";
                }
LAB_10038e19:
                FUN_10048350(&local_1c0,pwVar11,cVar12);
              }
              FUN_1002c980(&local_1bc,0,0xffffffff);
              uVar2 = uVar2 + 1;
            } while (uVar2 < local_2a8);
          }
          FUN_1003bf20();
          uVar4 = FUN_1003c280();
          FUN_1003c7c0(uVar4);
          if (DAT_1024a368 != 0) {
            ppuVar9 = (undefined **)&local_200;
            if (7 < local_1ec) {
              ppuVar9 = local_200;
            }
            puVar8 = &local_234;
            if (7 < local_220) {
              puVar8 = local_234;
            }
            FUN_10042360(puVar8,ppuVar9);
          }
        }
      }
      else {
        FUN_10048350(&local_1c0,L"Get FW Version From Flash Setting Fail, Error Code: 0x%x\n",iVar7)
        ;
        FUN_1003fc00();
        FUN_10016860();
      }
      goto LAB_1003927f;
    }
  }
  iVar7 = FUN_1001f6a0();
  if (iVar7 == 0) {
    if (local_1cc == 0) {
      if (((DAT_1024a2d4 != 7) && (iVar10 != 5)) && (iVar10 != 6)) {
        FUN_10048350(&local_1c0,L"0x%x",local_1d0 & 0xffff);
        if (DAT_1024a368 != 0) {
          ppuVar9 = (undefined **)&local_200;
          if (7 < local_1ec) {
            ppuVar9 = local_200;
          }
          puVar8 = &local_1bc;
          if (7 < local_1a8) {
            puVar8 = local_1bc;
          }
          FUN_10042360(puVar8,ppuVar9);
        }
        FUN_1003bf20();
        uVar4 = FUN_1003c280();
        FUN_1003c7c0(uVar4);
      }
      FUN_10048350(&local_1c0,L"0x%02x",local_1d0 >> 0x10 & 0xff);
      if (DAT_1024a368 != 0) {
        ppuVar9 = (undefined **)&local_200;
        if (7 < local_1ec) {
          ppuVar9 = local_200;
        }
        puVar8 = &local_1bc;
        if (7 < local_1a8) {
          puVar8 = local_1bc;
        }
        FUN_10042360(puVar8,ppuVar9);
      }
      FUN_1003bf20();
      uVar4 = FUN_1003c280();
      FUN_1003c7c0(uVar4);
      FUN_10048350(&local_1c0,L"0x%02x",local_1d0 >> 0x18);
      if (DAT_1024a368 != 0) {
        ppuVar9 = (undefined **)&local_200;
        if (7 < local_1ec) {
          ppuVar9 = local_200;
        }
        puVar8 = &local_1bc;
        if (7 < local_1a8) {
          puVar8 = local_1bc;
        }
        FUN_10042360(puVar8,ppuVar9);
      }
      FUN_1003bf20();
      uVar4 = FUN_1003c280();
      FUN_1003c7c0(uVar4);
    }
    else {
      FUN_10048350(&local_1c0,L"0x%02x",local_1c8);
      if (DAT_1024a368 != 0) {
        ppuVar9 = (undefined **)&local_200;
        if (7 < local_1ec) {
          ppuVar9 = local_200;
        }
        puVar8 = &local_1bc;
        if (7 < local_1a8) {
          puVar8 = local_1bc;
        }
        FUN_10042360(puVar8,ppuVar9);
      }
      FUN_1003c500();
      FUN_1003bf20();
      uVar4 = FUN_1003c280();
      FUN_1003c7c0(uVar4);
      iVar7 = 0;
      iVar10 = 2;
      do {
        FUN_10048350(&local_26c,L"Bank%d_%s",iVar7,local_40);
        FUN_10048350(&local_1c0,L"0x%02x",*(undefined1 *)((int)&local_1c7 + iVar7));
        if (DAT_1024a368 != 0) {
          ppuVar9 = (undefined **)&local_200;
          if (7 < local_1ec) {
            ppuVar9 = local_200;
          }
          puVar8 = &local_1bc;
          if (7 < local_1a8) {
            puVar8 = local_1bc;
          }
          FUN_10042360(puVar8,ppuVar9);
        }
        FUN_1003c280();
        FUN_1003bf20();
        uVar4 = FUN_1003c280();
        FUN_1003c7c0(uVar4);
        FUN_10048350(&local_26c,L"Bank%d_%s",iVar7,&local_5c);
        FUN_10048350(&local_1c0,L"0x%02x",*(undefined1 *)((int)&local_1c7 + iVar7 + 2));
        if (DAT_1024a368 != 0) {
          ppuVar9 = (undefined **)&local_200;
          if (7 < local_1ec) {
            ppuVar9 = local_200;
          }
          puVar8 = &local_1bc;
          if (7 < local_1a8) {
            puVar8 = local_1bc;
          }
          FUN_10042360(puVar8,ppuVar9);
        }
        FUN_1003c280();
        FUN_1003bf20();
        uVar4 = FUN_1003c280();
        FUN_1003c7c0(uVar4);
        iVar7 = iVar7 + 1;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
  }
  else {
    FUN_10048350(&local_1c0,L"Get FW Version Fail, Error Code: 0x%x\n",iVar7);
    FUN_1003fc00();
    FUN_10016860();
  }
LAB_1003927f:
  *(undefined ***)((int)local_384 + *(int *)(local_384[0] + 4)) =
       std::basic_ifstream<char,std::char_traits<char>_>::vftable;
  *(int *)((int)local_384 + *(int *)(local_384[0] + 4) + -4) = *(int *)(local_384[0] + 4) + -0x70;
  FUN_10009b00();
  *(undefined ***)((int)local_384 + *(int *)(local_384[0] + 4)) =
       std::basic_istream<char,std::char_traits<char>_>::vftable;
  *(int *)((int)local_384 + *(int *)(local_384[0] + 4) + -4) = *(int *)(local_384[0] + 4) + -0x18;
  local_8 = CONCAT31(local_8._1_3_,6);
  local_314[0] = std::ios_base::vftable;
  std::ios_base::_Ios_base_dtor((ios_base *)local_314);
  FUN_10048130();
  FUN_10048130();
  FUN_10048130();
  FUN_10048130();
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

