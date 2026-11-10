// rea decompile_all
// name: FUN_10042360
// address: 0x10042360
// body: available
// range: 0x10042360-0x100430f8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10042d42 to 0x10180c59 FUN_10180c59 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void FUN_10042360(short *param_1,undefined4 param_2)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *******pppppppuVar5;
  uint uVar6;
  uint *puVar7;
  int extraout_ECX;
  ushort ******extraout_ECX_00;
  ushort *******pppppppuVar8;
  ushort *******extraout_ECX_01;
  undefined4 extraout_ECX_02;
  ushort *******pppppppuVar9;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  short *in_EDX;
  uint uVar10;
  undefined4 uVar11;
  short *psVar12;
  ushort *******pppppppuVar13;
  undefined4 *******pppppppuVar14;
  undefined1 *puVar15;
  undefined4 uVar16;
  ushort ******ppppppuVar17;
  undefined1 *puVar18;
  int local_a54;
  uint auStack_a48 [11];
  int aiStack_a1c [11];
  int local_9f0;
  undefined **local_9dc [17];
  int aiStack_998 [15];
  int aiStack_95c [9];
  int local_938;
  undefined **local_924 [18];
  undefined1 local_8dc [4];
  _Locimp *local_8d8;
  int local_8d4;
  int local_8d0;
  uint local_8cc;
  short *local_8c8;
  ushort *******local_8c4;
  int local_8c0;
  int local_8bc;
  int local_8b8;
  short *local_8b4;
  undefined1 local_8b0 [4];
  ushort ******local_8ac;
  short *local_8a8;
  uint local_8a4;
  undefined4 local_894;
  uint local_890;
  ushort *******local_88c [4];
  undefined4 local_87c;
  uint local_878;
  ushort *******local_874 [4];
  uint local_864;
  uint local_860;
  undefined4 *******local_85c [4];
  undefined4 local_84c;
  uint local_848;
  ushort *******local_844 [4];
  uint local_834;
  uint local_830;
  uint local_82c [4];
  undefined4 local_81c;
  uint local_818;
  short local_814;
  undefined1 local_812 [2046];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_101c3db3;
  local_10 = ExceptionList;
  local_14 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8a8 = param_1;
  local_830 = 7;
  local_834 = 0;
  local_844[0] = (ushort *******)((uint)local_844[0] & 0xffff0000);
  local_818 = 7;
  local_81c = 0;
  local_82c[0] = local_82c[0] & 0xffff0000;
  local_860 = 7;
  local_864 = 0;
  local_874[0] = (ushort *******)((uint)local_874[0] & 0xffff0000);
  local_890 = 7;
  local_894 = 0;
  local_8a4 = local_8a4 & 0xffff0000;
  local_8c4 = (ushort *******)0x0;
  local_8c0 = 0;
  local_8d4 = 0;
  local_8bc = 0;
  local_8 = 4;
  uStack_7 = 0;
  uVar10 = 0;
  local_8d0 = 0;
  local_8b8 = 0;
  local_878 = 7;
  local_87c = 0;
  local_88c[0] = (ushort *******)((uint)local_88c[0] & 0xffff0000);
  local_8b4 = in_EDX;
  FUN_10045540(&DAT_1021a6b4,1);
  local_8 = 5;
  local_8d8 = std::locale::_Locimp::_New_Locimp(false);
  local_848 = 0xf;
  local_84c = 0;
  local_85c[0] = (undefined4 *******)((uint)local_85c[0] & 0xffffff00);
  FUN_1000aa60(&DAT_1020e404,0);
  pppppppuVar14 = local_85c;
  _local_8 = CONCAT31(uStack_7,6);
  uVar11 = 0x100424af;
  iVar2 = extraout_ECX;
  FUN_10040040(pppppppuVar14,extraout_ECX);
  if (0xf < local_848) {
    iVar2 = local_848 + 1;
    uVar11 = 0x100424cd;
    pppppppuVar14 = local_85c[0];
    FUN_1000b630(local_85c[0],iVar2);
  }
  local_848 = 0xf;
  local_84c = 0;
  local_85c[0] = (undefined4 *******)((uint)local_85c[0] & 0xffffff00);
  local_8 = 7;
  FUN_10043dd0(param_2,uVar11,pppppppuVar14,iVar2);
  local_8 = 8;
  FUN_10044c80(local_8b0,local_8dc);
  local_8 = 9;
  if ((local_8ac != (ushort ******)0x0) &&
     (puVar3 = (undefined4 *)(*(code *)(*local_8ac)[2])(), puVar3 != (undefined4 *)0x0)) {
    (**(code **)*puVar3)(1);
  }
  _local_8 = CONCAT31(uStack_7,8);
  FUN_10045540(&DAT_1021a6ac,1);
  if (*local_8c8 == 0) {
    iVar2 = 0;
  }
  else {
    psVar12 = local_8c8;
    do {
      sVar1 = *psVar12;
      psVar12 = psVar12 + 1;
    } while (sVar1 != 0);
    iVar2 = (int)psVar12 - (int)(local_8c8 + 1) >> 1;
  }
  FUN_1002c850(local_8c8,iVar2);
  FUN_1002c850(&DAT_1021a6b0,1);
  if (*local_8b4 == 0) {
    iVar2 = 0;
  }
  else {
    psVar12 = local_8b4;
    do {
      sVar1 = *psVar12;
      psVar12 = psVar12 + 1;
    } while (sVar1 != 0);
    iVar2 = (int)psVar12 - (int)(local_8b4 + 1) >> 1;
  }
  FUN_10045540(local_8b4,iVar2);
  psVar12 = (short *)0x100425f2;
  pppppppuVar14 = (undefined4 *******)extraout_ECX_00;
  ppppppuVar17 = local_8ac;
  FUN_10046650(extraout_ECX_00,local_8ac);
  local_8c0 = 0;
  if (local_938 != 0) {
    psVar12 = &local_814;
    piVar4 = (int *)FUN_10044930(psVar12,pppppppuVar14,ppppppuVar17);
    if ((*(byte *)(*(int *)(*piVar4 + 4) + 0xc + (int)piVar4) & 6) == 0) {
      do {
        local_848 = 7;
        local_84c = 0;
        local_85c[0] = (undefined4 *******)((uint)local_85c[0] & 0xffff0000);
        if (local_814 == 0) {
          iVar2 = 0;
        }
        else {
          psVar12 = &local_814;
          do {
            sVar1 = *psVar12;
            psVar12 = psVar12 + 1;
          } while (sVar1 != 0);
          iVar2 = (int)psVar12 - (int)local_812 >> 1;
        }
        FUN_10045540(&local_814,iVar2);
        pppppppuVar5 = local_85c;
        local_8 = 10;
        pppppppuVar14 = (undefined4 *******)0x1004269c;
        FUN_10043840(pppppppuVar5);
        _local_8 = CONCAT31(uStack_7,8);
        if (7 < local_848) {
          pppppppuVar5 = (undefined4 *******)(local_848 + 1);
          pppppppuVar14 = local_85c[0];
          FUN_1000b5d0(local_85c[0],pppppppuVar5);
        }
        psVar12 = &local_814;
        piVar4 = (int *)FUN_10044930(psVar12,pppppppuVar14,pppppppuVar5);
      } while ((*(byte *)(*(int *)(*piVar4 + 4) + 0xc + (int)piVar4) & 6) == 0);
      local_8d4 = local_8bc;
    }
    ppppppuVar17 = (ushort ******)0x100426fa;
    iVar2 = FUN_10045a80();
    if (iVar2 == 0) {
      ppppppuVar17 = (ushort ******)0x0;
      uVar6 = *(uint *)((int)aiStack_998 + *(int *)(aiStack_998[1] + 4) + 0x10);
      pppppppuVar14 = (undefined4 *******)(uVar6 | 6);
      if (*(int *)((int)aiStack_95c + *(int *)(aiStack_998[1] + 4)) != 0) {
        pppppppuVar14 = (undefined4 *******)(uVar6 | 2);
      }
      psVar12 = (short *)0x10042729;
      FUN_100071e0(pppppppuVar14,0);
    }
  }
  FUN_10043cf0(param_2,psVar12,pppppppuVar14,ppppppuVar17);
  puVar18 = local_8dc;
  local_8 = 0xb;
  puVar15 = local_8b0;
  pppppppuVar13 = (ushort *******)0x10042760;
  FUN_10044c80(puVar15,puVar18);
  local_8 = 0xc;
  if (local_8ac != (ushort ******)0x0) {
    puVar18 = (undefined1 *)0x10042773;
    puVar3 = (undefined4 *)(*(code *)(*local_8ac)[2])();
    if (puVar3 != (undefined4 *)0x0) {
      puVar18 = (undefined1 *)0x1;
      puVar15 = (undefined1 *)0x1004277f;
      (**(code **)*puVar3)(1);
    }
  }
  _local_8 = CONCAT31(uStack_7,0xb);
  if (local_9f0 == 0) {
    uVar11 = FUN_10011b60();
    FUN_10011e10(uVar11);
    goto LAB_10042ed3;
  }
  local_8cc = (local_8c0 - (int)local_8c4) / 0x18;
  if (local_8cc == 0) {
LAB_10042d93:
    FUN_10044820(pppppppuVar13,puVar15,puVar18);
    FUN_10045540(&DAT_1021a6ac,1);
    if (*local_8c8 == 0) {
      iVar2 = 0;
    }
    else {
      psVar12 = local_8c8;
      do {
        sVar1 = *psVar12;
        psVar12 = psVar12 + 1;
      } while (sVar1 != 0);
      iVar2 = (int)psVar12 - (int)(local_8c8 + 1) >> 1;
    }
    FUN_1002c850(local_8c8,iVar2);
    FUN_1002c850(&DAT_1021a6cc,2);
    if (*local_8b4 == 0) {
      iVar2 = 0;
    }
    else {
      psVar12 = local_8b4;
      do {
        sVar1 = *psVar12;
        psVar12 = psVar12 + 1;
      } while (sVar1 != 0);
      iVar2 = (int)psVar12 - (int)(local_8b4 + 1) >> 1;
    }
    FUN_1002c850(local_8b4,iVar2);
    FUN_1002c850(&DAT_1021a6b4,1);
    if (*param_1 == 0) {
      iVar2 = 0;
    }
    else {
      psVar12 = param_1;
      do {
        sVar1 = *psVar12;
        psVar12 = psVar12 + 1;
      } while (sVar1 != 0);
      iVar2 = (int)psVar12 - (int)(param_1 + 1) >> 1;
    }
    FUN_1002c850(param_1,iVar2);
LAB_10042e6c:
    uVar11 = FUN_1003c500();
    FUN_1003c7c0(uVar11);
  }
  else {
    do {
      if (local_8cc == 0) break;
      pppppppuVar8 = local_8c4 + uVar10 * 6;
      if (local_844 != (ushort ********)pppppppuVar8) {
        puVar18 = (undefined1 *)0xffffffff;
        puVar15 = (undefined1 *)0x0;
        FUN_10046260(pppppppuVar8,0,0xffffffff);
        pppppppuVar13 = pppppppuVar8;
      }
      uVar10 = uVar10 + 1;
      if (local_834 != 0) {
        local_8ac = (ushort ******)0x20;
        uVar11 = FUN_10045340(&local_8ac,puVar15,puVar18);
        uVar16 = 0;
        FUN_10043a10(0,uVar11);
        local_8ac = (ushort ******)0x20;
        pppppppuVar13 = &local_8ac;
        iVar2 = FUN_100452d0(pppppppuVar13,uVar16,uVar11);
        uVar6 = iVar2 + 1;
        if (local_834 < uVar6) {
LAB_10042d3d:
                    /* WARNING: Subroutine does not return */
          FUN_10180c59("invalid string position");
        }
        local_834 = uVar6;
        pppppppuVar8 = (ushort *******)local_844;
        if (7 < local_830) {
          pppppppuVar8 = local_844[0];
        }
        *(ushort *)((int)pppppppuVar8 + uVar6 * 2) = 0;
      }
      pppppppuVar8 = (ushort *******)local_844;
      if (7 < local_830) {
        pppppppuVar8 = local_844[0];
      }
      pppppppuVar9 = (ushort *******)local_874;
      if (7 < local_860) {
        pppppppuVar9 = local_874[0];
      }
      uVar6 = local_834;
      if (local_864 < local_834) {
        uVar6 = local_864;
      }
      for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        if (*(ushort *)pppppppuVar9 != *(ushort *)pppppppuVar8) {
          iVar2 = (-(uint)(*(ushort *)pppppppuVar9 < *(ushort *)pppppppuVar8) & 0xfffffffe) + 1;
          goto LAB_100428c7;
        }
        pppppppuVar9 = (ushort *******)((int)pppppppuVar9 + 2);
        pppppppuVar8 = (ushort *******)((int)pppppppuVar8 + 2);
      }
      iVar2 = 0;
LAB_100428c7:
      if (((iVar2 == 0) && (local_834 <= local_864)) && (local_864 == local_834)) {
        puVar18 = (undefined1 *)FUN_1003c500();
        puVar15 = (undefined1 *)0x10042908;
        FUN_1003c7c0();
        local_8d0 = 1;
        param_1 = local_8a8;
        if (uVar10 < local_8cc) {
          pppppppuVar8 = local_8c4 + uVar10 * 6;
          pppppppuVar9 = local_8c4;
LAB_10042930:
          if (local_844 != (ushort ********)pppppppuVar8) {
            puVar18 = (undefined1 *)0xffffffff;
            puVar15 = (undefined1 *)0x0;
            FUN_10046260(pppppppuVar8,0,0xffffffff);
            pppppppuVar9 = extraout_ECX_01;
          }
          uVar10 = uVar10 + 1;
          pppppppuVar8 = pppppppuVar8 + 6;
          if (local_834 != 0) {
            local_8ac = (ushort ******)0x20;
            uVar11 = FUN_10045340(&local_8ac,puVar15,puVar18);
            uVar16 = 0;
            FUN_10043a10(0,uVar11);
            local_8ac = (ushort ******)0x20;
            iVar2 = FUN_100452d0(&local_8ac,uVar16,uVar11);
            uVar6 = iVar2 + 1;
            if (local_834 < uVar6) goto LAB_10042d3d;
            pppppppuVar9 = (ushort *******)local_844;
            if (7 < local_830) {
              pppppppuVar9 = local_844[0];
            }
            local_834 = uVar6;
            *(ushort *)((int)pppppppuVar9 + uVar6 * 2) = 0;
          }
          pppppppuVar13 = (ushort *******)local_88c;
          if (7 < local_878) {
            pppppppuVar13 = local_88c[0];
          }
          iVar2 = FUN_10045460(pppppppuVar13,pppppppuVar9,local_87c);
          if (iVar2 == -1) {
            param_1 = local_8a8;
            if (local_8b8 == 0) {
              local_8b8 = 1;
              if (*local_8b4 == 0) {
                iVar2 = 0;
              }
              else {
                psVar12 = local_8b4;
                do {
                  sVar1 = *psVar12;
                  psVar12 = psVar12 + 1;
                } while (sVar1 != 0);
                iVar2 = (int)psVar12 - (int)(local_8b4 + 1) >> 1;
              }
              FUN_10045540(local_8b4,iVar2);
              FUN_1002c850(&DAT_1021a6b4,1);
              param_1 = local_8a8;
              if (*local_8a8 == 0) {
                iVar2 = 0;
              }
              else {
                psVar12 = local_8a8;
                do {
                  sVar1 = *psVar12;
                  psVar12 = psVar12 + 1;
                } while (sVar1 != 0);
                iVar2 = (int)psVar12 - (int)(local_8a8 + 1) >> 1;
              }
              pppppppuVar13 = (ushort *******)0x10042ca0;
              FUN_1002c850(local_8a8,iVar2);
              uVar11 = FUN_1003c500();
              FUN_1003c7c0(uVar11);
            }
          }
          else {
            pppppppuVar13 = (ushort *******)local_85c;
            puVar7 = (uint *)FUN_100439d0(pppppppuVar13,0,iVar2);
            if (local_82c != puVar7) {
              if (7 < local_818) {
                pppppppuVar13 = (ushort *******)0x10042a3f;
                FUN_1000b5d0(local_82c[0],local_818 + 1);
              }
              local_818 = 7;
              local_81c = 0;
              local_82c[0] = local_82c[0] & 0xffff0000;
              FUN_10045640(puVar7);
            }
            _local_8 = CONCAT31(uStack_7,0xb);
            if (7 < local_848) {
              pppppppuVar13 = (ushort *******)0x10042a8a;
              FUN_1000b5d0(local_85c[0],local_848 + 1);
            }
            iVar2 = FUN_10009010(local_82c);
            if (iVar2 != 0) goto code_r0x10042abe;
            local_8b8 = 1;
            iVar2 = FUN_100453c0(&DAT_1021a6b4,extraout_ECX_02,1);
            puVar7 = (uint *)FUN_100439d0(local_85c,0,iVar2 + 1);
            if (local_82c != puVar7) {
              if (7 < local_818) {
                FUN_1000b5d0(local_82c[0],local_818 + 1);
              }
              local_818 = 7;
              local_81c = 0;
              local_82c[0] = local_82c[0] & 0xffff0000;
              FUN_10045640(puVar7);
            }
            _local_8 = CONCAT31(uStack_7,0xb);
            if (7 < local_848) {
              FUN_1000b5d0(local_85c[0],local_848 + 1);
            }
            param_1 = local_8a8;
            if (*local_8a8 == 0) {
              iVar2 = 0;
            }
            else {
              psVar12 = local_8a8;
              do {
                sVar1 = *psVar12;
                psVar12 = psVar12 + 1;
              } while (sVar1 != 0);
              iVar2 = (int)psVar12 - (int)(local_8a8 + 1) >> 1;
            }
            pppppppuVar13 = (ushort *******)0x10042bfc;
            FUN_1002c850(local_8a8,iVar2);
          }
          puVar18 = (undefined1 *)FUN_1003c500();
          puVar15 = (undefined1 *)0x10042cf5;
          FUN_1003c7c0();
        }
      }
      else {
        puVar18 = (undefined1 *)FUN_1003c500();
        puVar15 = (undefined1 *)0x10042d1f;
        FUN_1003c7c0();
        param_1 = local_8a8;
      }
LAB_10042d28:
    } while (uVar10 < local_8cc);
    if (local_8d0 == 0) goto LAB_10042d93;
    if (local_8b8 == 0) {
      FUN_10043b00(local_8b4);
      FUN_1002c850(&DAT_1021a6b4,1);
      FUN_1002c140(param_1);
      goto LAB_10042e6c;
    }
  }
  iVar2 = FUN_10045a80();
  if (iVar2 == 0) {
    uVar10 = *(uint *)((int)auStack_a48 + *(int *)(local_a54 + 4));
    uVar6 = uVar10 | 6;
    if (*(int *)((int)aiStack_a1c + *(int *)(local_a54 + 4)) != 0) {
      uVar6 = uVar10 | 2;
    }
    FUN_100071e0(uVar6,0);
  }
LAB_10042ed3:
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)local_9dc);
  local_8 = 0xf;
  local_9dc[0] = std::ios_base::vftable;
  std::ios_base::_Ios_base_dtor((ios_base *)local_9dc);
  *(undefined ***)((int)aiStack_998 + *(int *)(aiStack_998[1] + 4) + 4) =
       std::basic_ifstream<wchar_t,std::char_traits<wchar_t>_>::vftable;
  *(int *)((int)aiStack_998 + *(int *)(aiStack_998[1] + 4)) = *(int *)(aiStack_998[1] + 4) + -0x70;
  FUN_10044710();
  *(undefined ***)((int)aiStack_998 + *(int *)(aiStack_998[1] + 4) + 4) =
       std::basic_istream<wchar_t,std::char_traits<wchar_t>_>::vftable;
  *(int *)((int)aiStack_998 + *(int *)(aiStack_998[1] + 4)) = *(int *)(aiStack_998[1] + 4) + -0x18;
  local_8 = 0x10;
  local_924[0] = std::ios_base::vftable;
  std::ios_base::_Ios_base_dtor((ios_base *)local_924);
  _local_8 = CONCAT31(uStack_7,0x11);
  uVar11 = 0;
  if ((local_8d8 != (_Locimp *)0x0) &&
     (puVar3 = (undefined4 *)(**(code **)(*(int *)local_8d8 + 8))(), uVar11 = extraout_ECX_03,
     puVar3 != (undefined4 *)0x0)) {
    (**(code **)*puVar3)(1);
    uVar11 = extraout_ECX_04;
  }
  if (7 < local_878) {
    FUN_1000b5d0(local_88c[0],local_878 + 1);
    uVar11 = extraout_ECX_05;
  }
  pppppppuVar13 = local_8c4;
  local_878 = 7;
  local_87c = 0;
  local_88c[0] = (ushort *******)((uint)local_88c[0] & 0xffff0000);
  if (local_8c4 != (ushort *******)0x0) {
    FUN_10046650(uVar11,local_8ac);
    FUN_1002c430(pppppppuVar13,(local_8d4 - (int)pppppppuVar13) / 0x18);
  }
  if (7 < local_890) {
    FUN_1000b5d0(local_8a4,local_890 + 1);
  }
  local_890 = 7;
  local_8a4 = local_8a4 & 0xffff0000;
  local_894 = 0;
  if (7 < local_860) {
    FUN_1000b5d0(local_874[0],local_860 + 1);
  }
  local_860 = 7;
  local_874[0] = (ushort *******)((uint)local_874[0] & 0xffff0000);
  local_864 = 0;
  if (7 < local_818) {
    FUN_1000b5d0(local_82c[0],local_818 + 1);
  }
  local_818 = 7;
  local_81c = 0;
  local_82c[0] = local_82c[0] & 0xffff0000;
  if (7 < local_830) {
    FUN_1000b5d0(local_844[0],local_830 + 1);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
code_r0x10042abe:
  puVar18 = (undefined1 *)FUN_1003c500();
  puVar15 = (undefined1 *)0x10042ac9;
  FUN_1003c7c0();
  pppppppuVar9 = (ushort *******)(local_8c0 - (int)local_8c4);
  param_1 = local_8a8;
  if ((uint)((int)pppppppuVar9 / 0x18) <= uVar10) goto LAB_10042d28;
  goto LAB_10042930;
}

