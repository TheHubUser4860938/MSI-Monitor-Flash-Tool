// rea decompile_all
// name: FUN_10013560
// address: 0x10013560
// body: available
// range: 0x10013560-0x100144c8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10013560(void)

{
  int *piVar1;
  int *_Memory;
  undefined1 uVar2;
  undefined2 uVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  uint uVar7;
  undefined4 uVar8;
  int *piVar9;
  void *pvVar10;
  int *piVar11;
  int *in_ECX;
  int iVar12;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  int *extraout_ECX_07;
  int *piVar13;
  undefined4 *****pppppuVar14;
  int *piVar15;
  size_t _Size;
  undefined4 uVar16;
  int local_1f4;
  int aiStack_19c [15];
  int aiStack_160 [9];
  int local_13c;
  undefined **local_128 [18];
  uint local_e0;
  int *local_dc;
  void *local_d8;
  int *local_d4;
  int *local_d0;
  int *local_cc;
  undefined1 local_94 [24];
  undefined **local_7c;
  undefined4 ****local_78 [4];
  uint local_68;
  uint local_64;
  undefined1 local_60;
  undefined4 local_50;
  undefined4 local_4c;
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
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_101c1987;
  local_10 = ExceptionList;
  uVar4 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  piVar15 = (int *)0x0;
  local_d8 = (void *)0x0;
  local_e0 = 0;
  local_cc = (int *)0x0;
  local_dc = (int *)0x0;
  local_d0 = (int *)0x0;
  local_30 = 7;
  local_34 = 0;
  local_44 = 0;
  local_48 = CCpRsString::vftable;
  local_18 = 0xf;
  local_1c = 0;
  local_2c = 0;
  local_64 = 7;
  local_68 = 0;
  local_78[0] = (undefined4 ****)((uint)local_78[0] & 0xffff0000);
  local_7c = CCpRsString::vftable;
  local_4c = 0xf;
  local_50 = 0;
  local_60 = 0;
  local_8 = 1;
  uStack_7 = 0;
  local_14 = uVar4;
  FUN_10009270(in_ECX);
  local_8 = 2;
  FUN_10048350(&local_48,L"---ISP eeprom begin---",uVar4);
  FUN_1003fc00();
  FUN_10016860();
  if (in_ECX[1] != 0) {
    if (in_ECX[0x10d] == 1) {
      if ((short)in_ECX[0x85] == 0) {
        iVar12 = 0;
      }
      else {
        piVar6 = in_ECX + 0x85;
        do {
          iVar12 = *piVar6;
          piVar6 = (int *)((int)piVar6 + 2);
        } while ((short)iVar12 != 0);
        iVar12 = (int)piVar6 - ((int)in_ECX + 0x216) >> 1;
      }
      FUN_10045540(in_ECX + 0x85,iVar12);
      uVar16 = 1;
      uVar8 = extraout_ECX;
      uVar5 = FUN_100486d0(1,extraout_ECX);
      FUN_10009210(uVar5,uVar16,uVar8);
    }
    else {
      if ((short)in_ECX[2] == 0) {
        iVar12 = 0;
      }
      else {
        piVar6 = in_ECX + 2;
        do {
          iVar12 = *piVar6;
          piVar6 = (int *)((int)piVar6 + 2);
        } while ((short)iVar12 != 0);
        iVar12 = (int)piVar6 - ((int)in_ECX + 10) >> 1;
      }
      FUN_10045540(in_ECX + 2,iVar12);
      uVar16 = 1;
      uVar8 = extraout_ECX_00;
      uVar5 = FUN_100486d0(1,extraout_ECX_00);
      FUN_10009210(uVar5,uVar16,uVar8);
    }
    if (local_13c == 0) goto LAB_10014425;
    FUN_10009c90(0,0,2);
    piVar6 = (int *)FUN_10009bb0(local_94);
    piVar13 = (int *)(piVar6[2] + *piVar6);
    local_cc = piVar13;
    FUN_10009c90(0,0,0);
    piVar6 = (int *)FUN_100491e5(piVar13);
    local_d0 = piVar6;
    _memset(piVar6,0xff,(size_t)piVar13);
    FUN_10009ec0(piVar6,local_cc,0);
    iVar12 = FUN_1000b310();
    if (iVar12 == 0) {
      uVar4 = *(uint *)((int)aiStack_19c + *(int *)(aiStack_19c[1] + 4) + 0x10);
      uVar7 = uVar4 | 6;
      if (*(int *)((int)aiStack_160 + *(int *)(aiStack_19c[1] + 4)) != 0) {
        uVar7 = uVar4 | 2;
      }
      FUN_100071e0(uVar7,0);
    }
  }
  if ((DAT_1024a1f8 == 1) &&
     (iVar12 = FUN_100149b0(*(undefined1 *)((int)in_ECX + 0x439)), iVar12 != 0)) {
    FUN_10048350(&local_48,L"SetI2COverAuxSpeed Fail, ErrorCode:0x%x",iVar12);
    FUN_1003fc00();
    FUN_10016860();
    if (local_d0 != (int *)0x0) {
      FID_conflict__free(local_d0);
    }
  }
  else {
    (**(code **)(*DAT_10249d10 + 0x44))(2);
    iVar12 = FUN_1001bbd0();
    if ((iVar12 == 0) && (iVar12 = FUN_10016b00(), pvVar10 = local_d8, iVar12 == 0)) {
      FUN_10048350(&local_48,L"ScalerType: 0x%x",local_d8);
      FUN_10016860();
      *in_ECX = (int)pvVar10;
      if ((pvVar10 == (void *)0x1) || (pvVar10 == (void *)0x2)) {
        iVar12 = FUN_100146b0(&local_e0);
        if (iVar12 == 0) {
          piVar13 = (int *)0x10013916;
          FUN_10048350(&local_48,L"Fw version before ISP: 0x%x",local_e0 & 0xffff);
          FUN_1003fc00();
          FUN_10016860();
          piVar6 = local_d0;
          if ((((local_d8 == (void *)0x1) && (in_ECX[1] != 0)) && (in_ECX[0x84] != 0)) &&
             (((*local_d0 & 0x20000000) != 0 && (iVar12 = FUN_100161b0(local_d0), iVar12 == 0)))) {
            FID_conflict__free(piVar6);
          }
          else {
            iVar12 = FUN_10014b20();
            if (iVar12 == 0) {
              if (in_ECX[1] != 0) {
                if (in_ECX[0x10d] == 1) {
                  FUN_10048240(L"ISP EDID only, EDID file: ");
                  piVar6 = in_ECX + 0x85;
                }
                else {
                  FUN_10048240(L"ISP Fw, Fw file: ");
                  piVar6 = in_ECX + 2;
                }
                FUN_10048240(piVar6);
                uVar8 = FUN_10047bd0(&local_7c);
                FUN_100481b0(uVar8);
                FUN_10048130();
                FUN_1003fc00();
                FUN_10016860();
                piVar6 = (int *)0x10013a44;
                FUN_10048350(&local_48,L"Begin ISP Fw, please wait for a moment");
                FUN_1003fc00();
                FUN_10016860();
                local_d8 = (void *)0x0;
                if (0 < in_ECX[0x107]) {
                  do {
                    iVar12 = (**(code **)(*DAT_10249d10 + 0x14))();
                    if (iVar12 == 1) {
                      iVar12 = FUN_100149b0(*(undefined1 *)((int)in_ECX + 0x439));
                      if (iVar12 != 0) goto LAB_10013d4c;
                      if (*in_ECX == 2) {
                        (**(code **)(*DAT_10249d10 + 0xf0))(0x10,0xe1);
                        (**(code **)(*DAT_10249d10 + 0xc4))(0x9f,0x10);
                        uVar8 = 1;
LAB_10013aec:
                        (**(code **)(*DAT_10249d10 + 0xc4))(0x10b1,uVar8);
                        uVar8 = extraout_ECX_02;
                      }
                      else {
                        uVar8 = extraout_ECX_01;
                        if (*in_ECX == 1) {
                          (**(code **)(*DAT_10249d10 + 0xc4))(0x9f,0x10);
                          uVar8 = 0x20;
                          goto LAB_10013aec;
                        }
                      }
                      piVar15 = local_d0;
                      iVar12 = FUN_10014cd0(uVar8,(char)in_ECX[0x10e],local_d0,local_cc);
                      piVar11 = local_cc;
                      if (iVar12 != 0) goto LAB_10013d68;
                      piVar9 = (int *)FUN_100491e5(local_cc);
                      local_dc = piVar9;
                      _memset(piVar9,0,(size_t)piVar11);
                      piVar13 = (int *)(uint)*(byte *)(in_ECX + 0x10e);
                      piVar6 = piVar13;
                      iVar12 = FUN_10015000(piVar13,piVar13,piVar9,piVar11);
                      piVar11 = local_d0;
                      piVar1 = local_cc;
                      piVar15 = piVar9;
                      if (iVar12 != 0) {
                        if (piVar9 != (int *)0x0) {
                          FID_conflict__free(piVar9);
                        }
                        if (local_d0 != (int *)0x0) {
                          FID_conflict__free(local_d0);
                        }
                        goto LAB_10014425;
                      }
                    }
                    else {
                      FUN_10014bd0(0);
                      piVar15 = local_d0;
                      iVar12 = FUN_10015510(piVar13,piVar6,local_d0,local_cc);
                      piVar11 = local_cc;
                      if (iVar12 != 0) goto LAB_10013d68;
                      piVar9 = (int *)FUN_100491e5(local_cc);
                      piVar6 = (int *)0x0;
                      piVar13 = piVar9;
                      local_dc = piVar9;
                      _memset(piVar9,0,(size_t)piVar11);
                      iVar12 = FUN_10015230(piVar13,piVar6,piVar9,piVar11);
                      piVar11 = local_d0;
                      piVar1 = local_cc;
                      piVar15 = piVar9;
                      if (iVar12 != 0) {
                        if (piVar9 != (int *)0x0) {
                          FID_conflict__free(piVar9);
                        }
                        goto LAB_10013d4c;
                      }
                    }
                    while (_Memory = local_d0, local_d4 = piVar1 + -1, (int *)0x3 < piVar1) {
                      if (*piVar9 != *piVar11) goto LAB_10013c2c;
                      piVar9 = piVar9 + 1;
                      piVar11 = piVar11 + 1;
                      piVar1 = local_d4;
                    }
                    if (local_d4 == (int *)0xfffffffc) {
LAB_10013cda:
                      if (in_ECX[0x10d] == 1) {
                        uVar2 = FUN_10041090();
                        *(undefined1 *)((int)in_ECX + 0x442) = uVar2;
                      }
                      else {
                        uVar3 = FUN_100410f0();
                        *(undefined2 *)(in_ECX + 0x110) = uVar3;
                        FUN_10048350(&local_7c,L"Checksum Vaule After ISP: 0x%x",uVar3);
                        FUN_10016860();
                      }
                      if (_Memory != (int *)0x0) {
                        FID_conflict__free(_Memory);
                        local_d0 = (int *)0x0;
                      }
                      break;
                    }
LAB_10013c2c:
                    if (((char)*piVar9 == (char)*piVar11) &&
                       ((local_d4 == (int *)0xfffffffd ||
                        ((*(char *)((int)piVar9 + 1) == *(char *)((int)piVar11 + 1) &&
                         ((local_d4 == (int *)0xfffffffe ||
                          ((*(char *)((int)piVar9 + 2) == *(char *)((int)piVar11 + 2) &&
                           ((local_d4 == (int *)0xffffffff ||
                            (*(char *)((int)piVar9 + 3) == *(char *)((int)piVar11 + 3)))))))))))))
                    goto LAB_10013cda;
                    if (local_d0 != (int *)0x0) {
                      FID_conflict__free(local_d0);
                      local_d0 = (int *)0x0;
                    }
                    local_d8 = (void *)((int)local_d8 + 1);
                  } while ((int)local_d8 < in_ECX[0x107]);
                }
                piVar6 = local_d0;
                if (in_ECX[0x107] <= (int)local_d8) {
                  if (in_ECX[0x10d] == 1) {
                    uVar2 = FUN_10041090();
                    *(undefined1 *)((int)in_ECX + 0x442) = uVar2;
                  }
                  else {
                    uVar3 = FUN_100410f0();
                    *(undefined2 *)(in_ECX + 0x110) = uVar3;
                  }
                  if (piVar15 != (int *)0x0) {
                    FID_conflict__free(piVar15);
                  }
                  if (piVar6 != (int *)0x0) {
                    FID_conflict__free(piVar6);
                  }
                  FUN_10048350(&local_48,L"ISP first eeprom fail!");
                  FUN_1003fc00();
                  FUN_10016860();
                  goto LAB_10014425;
                }
                if ((in_ECX[0x10d] == 1) && ((int *)0xb < local_cc)) {
                  FUN_10048350(&local_48,L"ProductID: 0x%x 0x%x",*(char *)((int)piVar15 + 0xb),
                               *(char *)((int)piVar15 + 10));
                  FUN_1003fc00();
                  FUN_10016860();
                }
                if (piVar15 != (int *)0x0) {
                  FID_conflict__free(piVar15);
                  local_dc = (int *)0x0;
                }
              }
              piVar15 = local_d0;
              iVar12 = FUN_10015170(local_d0);
              if (iVar12 != 0) {
                uVar8 = extraout_ECX_03;
                if (piVar15 != (int *)0x0) {
                  FID_conflict__free(piVar15);
                  local_d0 = (int *)0x0;
                  uVar8 = extraout_ECX_04;
                }
                FUN_10009270(uVar8);
                local_8 = 3;
                FUN_10048240(in_ECX + 0x85);
                uVar16 = 1;
                uVar8 = extraout_ECX_05;
                uVar5 = FUN_100486d0(1,extraout_ECX_05);
                FUN_10009210(uVar5,uVar16,uVar8);
                if (local_1f4 == 0) {
                  FUN_10007f80();
                  goto LAB_10014425;
                }
                FUN_10009c90(0,0,2);
                piVar15 = (int *)FUN_10009bb0(local_94);
                _Size = piVar15[2] + *piVar15;
                FUN_10009c90(0,0,0);
                pvVar10 = (void *)FUN_100491e5(_Size);
                local_d8 = pvVar10;
                _memset(pvVar10,0,_Size);
                FUN_10009ec0(pvVar10,_Size,0);
                FUN_100091d0();
                local_cc = (int *)FUN_100491e5(0x200);
                _memset(local_cc,0xff,0x200);
                FUN_10009140(pvVar10);
                local_8 = 4;
                FUN_100482a0(local_94);
                local_8 = 3;
                FUN_10009080();
                piVar15 = (int *)FUN_100491e5(-(uint)((int)((ulonglong)local_68 * 2 >> 0x20) != 0) |
                                              (uint)((ulonglong)local_68 * 2));
                pppppuVar14 = local_78;
                if (7 < local_64) {
                  pppppuVar14 = (undefined4 *****)local_78[0];
                }
                local_d4 = piVar15;
                FUN_10197c50(piVar15,pppppuVar14,local_68 * 2);
                piVar13 = local_cc;
                piVar6 = local_d4;
                uVar4 = 0x10013fc7;
                local_d4 = (int *)FUN_10041160(local_cc);
                if (piVar6 != (int *)0x0) {
                  FID_conflict__free(piVar6);
                }
                if ((local_d4 == (int *)0x0) || (((uint)local_d4 & 0x7f) != 0)) {
                  if (local_d8 != (void *)0x0) {
                    FID_conflict__free(local_d8);
                  }
                  if (piVar13 != (int *)0x0) {
                    FID_conflict__free(piVar13);
                  }
LAB_10014365:
                  FUN_10007f80();
                  goto LAB_10014425;
                }
                if (local_d8 != (void *)0x0) {
                  FID_conflict__free(local_d8);
                }
                local_d8 = (void *)0x0;
                piVar6 = local_dc;
                if (0 < in_ECX[0x107]) {
                  do {
                    iVar12 = (**(code **)(*DAT_10249d10 + 0x14))();
                    if (iVar12 == 1) {
                      FUN_10014bd0(2);
                      iVar12 = FUN_100149b0(*(undefined1 *)((int)in_ECX + 0x43b));
                      piVar15 = local_cc;
                      piVar13 = local_d0;
                      if (iVar12 == 0) {
                        iVar12 = FUN_10014e70(extraout_ECX_06,*(undefined1 *)((int)in_ECX + 0x43a),
                                              local_cc,local_d4);
                        piVar6 = local_d4;
                        if (iVar12 != 0) {
                          if (piVar15 == (int *)0x0) goto LAB_10014365;
                          FID_conflict__free(piVar15);
                          FUN_10007f80();
                          goto LAB_10014425;
                        }
                        piVar11 = (int *)FUN_100491e5(local_d4);
                        _memset(piVar11,0,(size_t)piVar6);
                        uVar4 = (uint)*(byte *)((int)in_ECX + 0x43a);
                        piVar15 = extraout_ECX_07;
                        iVar12 = FUN_100150c0(extraout_ECX_07,uVar4,piVar11,piVar6);
                        if (iVar12 != 0) goto LAB_10014259;
                        iVar12 = FUN_100149b0(*(undefined1 *)((int)in_ECX + 0x439));
                        piVar13 = local_d0;
                        piVar9 = local_cc;
                        piVar1 = local_d4;
                        piVar6 = piVar11;
                        if (iVar12 == 0) goto joined_r0x10014126;
                      }
LAB_1001426c:
                      if (piVar13 == (int *)0x0) goto LAB_10014365;
                      FID_conflict__free(piVar13);
                      FUN_10007f80();
                      goto LAB_10014425;
                    }
                    FUN_10014bd0(0);
                    iVar12 = FUN_10015ad0(piVar15,uVar4,piVar13,local_d4);
                    piVar6 = local_d4;
                    piVar13 = local_cc;
                    if (iVar12 != 0) goto LAB_1001426c;
                    piVar11 = (int *)FUN_100491e5(local_d4);
                    uVar4 = 0;
                    piVar15 = piVar11;
                    _memset(piVar11,0,(size_t)piVar6);
                    iVar12 = FUN_10015f20(piVar15,uVar4,piVar11,piVar6);
                    piVar9 = local_cc;
                    piVar1 = local_d4;
                    piVar6 = piVar11;
                    if (iVar12 != 0) {
LAB_10014259:
                      piVar13 = local_cc;
                      if (piVar11 != (int *)0x0) {
                        FID_conflict__free(piVar11);
                        piVar13 = local_cc;
                      }
                      goto LAB_1001426c;
                    }
joined_r0x10014126:
                    while (piVar13 = piVar1 + -1, (int *)0x3 < piVar1) {
                      if (*piVar11 != *piVar9) goto LAB_10014142;
                      piVar11 = piVar11 + 1;
                      piVar9 = piVar9 + 1;
                      piVar1 = piVar13;
                    }
                    if (piVar13 == (int *)0xfffffffc) {
LAB_1001422f:
                      uVar2 = FUN_10041090();
                      *(undefined1 *)((int)in_ECX + 0x442) = uVar2;
                      piVar13 = (int *)0x0;
                      if (local_cc != (int *)0x0) {
                        FID_conflict__free(local_cc);
                        piVar13 = (int *)0x0;
                      }
                      break;
                    }
LAB_10014142:
                    if (((char)*piVar11 == (char)*piVar9) &&
                       ((piVar13 == (int *)0xfffffffd ||
                        ((*(char *)((int)piVar11 + 1) == *(char *)((int)piVar9 + 1) &&
                         ((piVar13 == (int *)0xfffffffe ||
                          ((*(char *)((int)piVar11 + 2) == *(char *)((int)piVar9 + 2) &&
                           ((piVar13 == (int *)0xffffffff ||
                            (*(char *)((int)piVar11 + 3) == *(char *)((int)piVar9 + 3)))))))))))))
                    goto LAB_1001422f;
                    if (in_ECX[0x107] <= (int)local_d8) {
                      uVar2 = FUN_10041090();
                      *(undefined1 *)((int)in_ECX + 0x442) = uVar2;
                      if (piVar6 != (int *)0x0) {
                        FID_conflict__free(piVar6);
                      }
                      if (local_cc != (int *)0x0) {
                        FID_conflict__free(local_cc);
                      }
                      FUN_10007f80();
                      goto LAB_10014425;
                    }
                    if (local_cc != (int *)0x0) {
                      FID_conflict__free(local_cc);
                      local_cc = (int *)0x0;
                    }
                    local_d8 = (void *)((int)local_d8 + 1);
                    piVar13 = local_cc;
                  } while ((int)local_d8 < in_ECX[0x107]);
                }
                if (piVar6 != (int *)0x0) {
                  FID_conflict__free(piVar6);
                }
                if (piVar13 != (int *)0x0) {
                  FID_conflict__free(piVar13);
                }
                local_8 = 2;
                FUN_10007f80();
                piVar15 = local_d0;
              }
              if ((*in_ECX == 2) || (*in_ECX == 1)) {
                (**(code **)(*DAT_10249d10 + 0xc4))(0x9f,0x10);
                (**(code **)(*DAT_10249d10 + 0xc4))(0x10b1,0);
              }
              FUN_10014b90();
              Sleep(1000);
              iVar12 = FUN_100151c0();
              if (iVar12 == 0) {
                FUN_10016520();
                Sleep(in_ECX[0x10f]);
                iVar12 = (**(code **)(*DAT_10249d10 + 0x14))();
                if ((iVar12 == 1) &&
                   (iVar12 = FUN_100149b0(*(undefined1 *)((int)in_ECX + 0x439)), iVar12 != 0)) {
LAB_10013d68:
                  if (piVar15 != (int *)0x0) {
                    FID_conflict__free(piVar15);
                  }
                }
                else {
                  iVar12 = FUN_1001bbd0();
                  if ((iVar12 == 0) && (iVar12 = FUN_100146b0(&local_e0), iVar12 == 0)) {
                    FUN_10048350(&local_48,L"Fw version after ISP: 0x%x",local_e0 & 0xffff);
                    FUN_1003fc00();
                    FUN_10016860();
                    FUN_10016520();
                    FUN_10048350(&local_48,L"---ISP eeprom end---");
                    FUN_1003fc00();
                    FUN_10016860();
                  }
                }
              }
              else {
                FUN_10048350(&local_48,L"Check I2C master status fail!");
                FUN_1003fc00();
                FUN_10016860();
              }
            }
            else {
              if (local_d0 != (int *)0x0) {
                FID_conflict__free(local_d0);
              }
              FUN_10048350(&local_48,L"Reset boot loader fail!");
              FUN_1003fc00();
              FUN_10016860();
            }
          }
        }
        else {
          if (local_d0 != (int *)0x0) {
            FID_conflict__free(local_d0);
          }
          FUN_10048350(&local_48,L"Get Fw version fail!");
          FUN_1003fc00();
          FUN_10016860();
        }
      }
      else {
        FUN_10048350(&local_48,L"ScalerType is not RL6156 or RL6246!");
        FUN_1003fc00();
        FUN_10016860();
        if (local_d0 != (int *)0x0) {
          FID_conflict__free(local_d0);
        }
      }
    }
    else {
LAB_10013d4c:
      if (local_d0 != (int *)0x0) {
        FID_conflict__free(local_d0);
      }
    }
  }
LAB_10014425:
  *(undefined ***)((int)aiStack_19c + *(int *)(aiStack_19c[1] + 4) + 4) =
       std::basic_ifstream<char,std::char_traits<char>_>::vftable;
  *(int *)((int)aiStack_19c + *(int *)(aiStack_19c[1] + 4)) = *(int *)(aiStack_19c[1] + 4) + -0x70;
  FUN_10009b00();
  *(undefined ***)((int)aiStack_19c + *(int *)(aiStack_19c[1] + 4) + 4) =
       std::basic_istream<char,std::char_traits<char>_>::vftable;
  *(int *)((int)aiStack_19c + *(int *)(aiStack_19c[1] + 4)) = *(int *)(aiStack_19c[1] + 4) + -0x18;
  _local_8 = CONCAT31(uStack_7,5);
  local_128[0] = std::ios_base::vftable;
  std::ios_base::_Ios_base_dtor((ios_base *)local_128);
  FUN_10048130();
  FUN_10048130();
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

