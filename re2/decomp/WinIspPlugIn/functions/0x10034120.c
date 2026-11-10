// rea decompile_all
// name: FUN_10034120
// address: 0x10034120
// body: available
// range: 0x10034120-0x10034c8e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10034120(void)

{
  uint uVar1;
  void *pvVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  int local_1e0 [3];
  void *local_1d4;
  undefined4 local_1d0;
  DWORD local_1cc;
  int local_1c8;
  undefined1 *local_1c4;
  undefined4 local_1c0;
  int local_1bc;
  uint local_1b8;
  void *local_1b4;
  int local_1b0;
  int local_1ac;
  undefined4 local_1a8;
  int *local_1a4;
  undefined4 local_1a0;
  void *local_19c;
  int *local_198;
  int *local_194;
  undefined **local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined **local_48;
  undefined2 local_44;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101c302d;
  local_10 = ExceptionList;
  local_14 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1c8 = 0;
  local_1b8 = 0;
  local_1c0 = 0;
  local_30 = 7;
  local_34 = 0;
  local_44 = 0;
  local_48 = CCpRsString::vftable;
  local_18 = 0xf;
  local_1c = 0;
  local_2c = 0;
  local_8 = 0;
  FUN_1000d890();
  local_58 = CCpTransform::vftable;
  local_50 = 0;
  local_54 = 0;
  local_1a8 = 0;
  local_19c = (void *)0x0;
  local_1e0[0] = 0;
  local_1e0[1] = 0;
  local_1e0[2] = 0;
  local_8._0_1_ = 3;
  local_1a4 = (int *)0x0;
  local_1a0 = 0;
  local_1a4 = (int *)FUN_1000c2b0();
  local_8._0_1_ = 4;
  local_1b4 = (void *)0x0;
  local_1b0 = 0;
  local_1b4 = (void *)FUN_1000d7a0();
  local_8._0_1_ = 5;
  local_1d4 = (void *)0x0;
  local_1d0 = 0;
  local_1d4 = (void *)FUN_100119b0();
  local_8 = CONCAT31(local_8._1_3_,6);
  FUN_1002bdf0();
  iVar5 = DAT_1024a2d8;
  iVar6 = DAT_1024a2d4;
  local_1bc = DAT_1024a2d4;
  local_1ac = DAT_1024a2d8;
  FUN_10048350();
  FUN_10016860();
  FUN_10048350(&local_48,
               L" enumActionType : %d, enumSignType:%d, enumIspMode:%d, enumOneBankMode:%d ",iVar6,
               iVar5,DAT_1024a2f4);
  FUN_10016860();
  local_1cc = GetTickCount();
  iVar4 = FUN_10023760();
  if (iVar4 == 0) {
    FUN_1002b9a0();
    if (local_1b0 == 0) {
      FUN_10048350();
      FUN_1003fc00();
      FUN_10016860();
    }
    else if (((((iVar5 != 1) && (iVar5 != 2)) && (iVar6 != 5)) && ((iVar6 != 6 && (iVar6 != 7)))) ||
            (iVar5 = FUN_10018f10(), iVar5 == 0)) {
      FUN_1000b550();
      FUN_1000c880();
      iVar5 = FUN_1001bbd0();
      if ((iVar5 == 0) && (iVar5 = FUN_10016b00(), iVar5 == 0)) {
        iVar5 = FUN_1001aa50();
        if (iVar5 == 0) {
          iVar5 = FUN_10017300();
          if (iVar5 == 0) {
            iVar5 = FUN_1001a050();
            if (iVar5 == 0) {
              (**(code **)(*DAT_10249d10 + 0x94))();
              iVar5 = FUN_1001d560();
              if (iVar5 == 0) {
                FUN_1000da90();
                local_8._0_1_ = 7;
                FUN_10048350();
                local_8 = CONCAT31(local_8._1_3_,6);
                FUN_10048130();
                FUN_1003fc00();
                FUN_10016860();
                iVar5 = FUN_1001db90();
                if (iVar5 == 0) {
                  iVar5 = FUN_1001db20();
                  if (iVar5 == 0) {
                    iVar5 = FUN_1001ad20();
                    if (iVar5 == 0) {
                      iVar5 = FUN_1001e8f0();
                      if (iVar5 == 0) {
                        iVar5 = FUN_1001dfa0();
                        if (iVar5 == 0) {
                          iVar5 = FUN_100203d0();
                          if (iVar5 == 0) {
                            FUN_10007610();
                            iVar5 = FUN_1002b8b0();
                            if (iVar5 == 0) {
                              FUN_1001dfa0();
                              FUN_10048350();
                              FUN_1003fc00();
                              FUN_10016860();
                              goto LAB_10034b99;
                            }
                            _DAT_1024a1b4 = 1;
                            DAT_1024a1bc = 1;
                            DAT_1024a1c0 = DAT_1024a370;
                            local_19c = (void *)FUN_100491e5();
                            if (local_19c == (void *)0x0) goto LAB_10034b99;
                            local_198 = local_1a4;
                            bVar8 = local_1a4 == (int *)*local_1a4;
                            while (piVar3 = local_198, pvVar2 = local_19c, !bVar8) {
                              _memset(local_19c,0xff,0x10000);
                              local_1c4 = &stack0xfffffe00;
                              FUN_1003be80(local_1e0);
                              local_8._0_1_ = 8;
                              local_194 = piVar3;
                              FUN_1000ccd0();
                              FUN_1000cac0(local_194 + 5);
                              local_194 = piVar3;
                              FUN_1000ccd0();
                              local_8 = CONCAT31(local_8._1_3_,6);
                              iVar6 = FUN_1001e4c0(&local_1b8,pvVar2,local_194[4]);
                              if (iVar6 != 0) {
                                FID_conflict__free(local_19c);
                                FUN_1001dfa0();
                                local_198 = piVar3;
                                FUN_1000ccd0();
                                FUN_10048350(&local_48);
                                goto LAB_10034b91;
                              }
                              local_194 = piVar3;
                              FUN_1000ccd0();
                              uVar1 = local_1b8;
                              iVar6 = local_1c8;
                              FUN_10048350(&local_48,
                                           L"Bank: 0x%x, ProLen: 0x%x, SectorErase: 0x%x, SectorEraseCount: 0x%x"
                                           ,local_194[4]);
                              FUN_10016860();
                              if (iVar6 == 0) {
                                local_194 = piVar3;
                                FUN_1000ccd0();
                                iVar6 = local_1bc;
                                if (((local_1bc != 7) || (DAT_1024b4c0 != 1)) ||
                                   ((DAT_1024b4be & 0xff) != local_194[4])) {
                                  local_194 = piVar3;
                                  FUN_1000ccd0();
                                  iVar5 = FUN_1003e9c0();
                                  if (iVar5 != 0) {
                                    FID_conflict__free(local_19c);
                                    FUN_1001dfa0();
                                    local_198 = piVar3;
                                    FUN_1000ccd0();
                                    FUN_10048350(&local_48);
                                    goto LAB_10034b91;
                                  }
                                }
                              }
                              else {
                                uVar7 = 0;
                                iVar6 = local_1bc;
                                if (uVar1 != 0) {
                                  do {
                                    local_194 = piVar3;
                                    FUN_1000ccd0();
                                    iVar6 = FUN_1003e610();
                                    if (iVar6 != 0) {
                                      FID_conflict__free(local_19c);
                                      FUN_1001dfa0();
                                      local_198 = piVar3;
                                      FUN_1000ccd0();
                                      FUN_10048350(&local_48,
                                                                                                      
                                                  L" Sector %d Erase In Bank %d Fail!, ErrorCode: 0x%x"
                                                  );
                                      goto LAB_10034b91;
                                    }
                                    uVar7 = uVar7 + 1;
                                    iVar6 = local_1bc;
                                  } while (uVar7 < local_1b8);
                                }
                              }
                              local_194 = piVar3;
                              FUN_1000ccd0();
                              FUN_10048350();
                              if (DAT_1024e460 == 0) {
LAB_10034813:
                                FUN_10016860();
                              }
                              else if (DAT_1024e460 == 1) {
                                FUN_1003fc00();
                                goto LAB_10034813;
                              }
                              local_194 = piVar3;
                              FUN_1000ccd0();
                              iVar5 = FUN_1003e2a0(local_194[4] << 0x10,local_1c0);
                              if (iVar5 != 0) {
                                FID_conflict__free(local_19c);
                                FUN_1001dfa0();
                                local_198 = piVar3;
                                FUN_1000ccd0();
                                FUN_10048350(&local_48);
                                goto LAB_10034b91;
                              }
                              local_194 = piVar3;
                              FUN_1000ccd0();
                              FUN_10048350();
                              if (DAT_1024e460 == 0) {
LAB_100348a0:
                                FUN_10016860();
                              }
                              else if (DAT_1024e460 == 1) {
                                FUN_1003fc00();
                                goto LAB_100348a0;
                              }
                              FUN_1000ccd0();
                              bVar8 = local_198 == (int *)*local_1a4;
                            }
                            FID_conflict__free(local_19c);
                            iVar5 = local_1ac;
                            iVar4 = FUN_10021040();
                            if (iVar4 != 0) {
                              FUN_1001dfa0();
                              FUN_10048350();
                              goto LAB_10034b99;
                            }
                            iVar4 = FUN_1001e7c0();
                            if (iVar4 != 0) {
                              FUN_10048350();
                              FUN_10016860();
                            }
                            iVar4 = FUN_1001dfa0();
                            if (iVar4 != 0) {
                              FUN_10048350();
                              FUN_10016860();
                            }
                            if (((iVar5 == 1) || (iVar5 == 2)) ||
                               ((iVar6 == 5 || ((iVar6 == 6 || (iVar6 == 7)))))) {
                              FUN_10018fa0();
                            }
                            else {
                              FUN_1001b8f0();
                            }
                            FUN_1002d7c0();
                            DAT_1024a1bc = 0;
                            DAT_1024a1c0 = 0;
                            FUN_10048350();
                            FUN_1003fc00();
                            GetTickCount();
                            FUN_10048350();
                            FUN_10016860();
                            FUN_10048350();
                          }
                          else {
                            FUN_1001dfa0();
                            FUN_10048350();
                          }
                        }
                        else {
                          FUN_10048350();
                        }
                      }
                      else {
                        FUN_10048350();
                        FUN_1003fc00();
                      }
                    }
                    else {
                      FUN_10048350();
                      FUN_1003fc00();
                    }
                  }
                  else {
                    FUN_10048350();
                    FUN_1003fc00();
                  }
                }
                else {
                  FUN_10048350();
                  FUN_1003fc00();
                }
              }
              else {
                FUN_10048350();
                FUN_1003fc00();
              }
            }
            else {
              FUN_10048350();
              FUN_1003fc00();
            }
          }
          else {
            FUN_10048350();
            FUN_1003fc00();
          }
        }
        else {
          FUN_10048350();
          FUN_1003fc00();
        }
LAB_10034b91:
        FUN_10016860();
      }
    }
  }
LAB_10034b99:
  FUN_100107a0();
  FID_conflict__free(local_1d4);
  FUN_1000d260();
  FID_conflict__free(local_1b4);
  local_1ac = *local_1a4;
  FUN_1000b550();
  FID_conflict__free(local_1a4);
  if (local_1e0[0] != 0) {
    FUN_1002c430();
  }
  FUN_10048130();
  FUN_10048130();
  FUN_10048130();
  FUN_10048130();
  FUN_10048130();
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

