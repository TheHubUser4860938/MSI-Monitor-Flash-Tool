// rea decompile_all
// name: FUN_10041810
// address: 0x10041810
// body: available
// range: 0x10041810-0x10041bfb inclusive
// range: 0x10041c00-0x100422c6 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1004210c to 0x10180c59 FUN_10180c59 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10041810(short *param_1,ushort *param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  short sVar2;
  ushort uVar3;
  undefined4 ****ppppuVar4;
  undefined4 *puVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  short *psVar9;
  ushort *****pppppuVar10;
  uint uVar11;
  short *in_ECX;
  int iVar12;
  undefined4 extraout_ECX;
  ushort *****pppppuVar13;
  ushort *puVar14;
  undefined4 extraout_ECX_00;
  short *in_EDX;
  ushort *puVar15;
  undefined4 uVar16;
  undefined1 *puVar17;
  undefined4 *****pppppuVar18;
  undefined4 uVar19;
  undefined1 *puVar20;
  int local_98c [14];
  int aiStack_954 [9];
  int local_930;
  undefined **local_91c [18];
  undefined1 local_8d4 [4];
  _Locimp *local_8d0;
  ushort *local_8cc;
  undefined1 local_8c8 [4];
  int *local_8c4;
  int local_8c0;
  undefined4 ****local_8bc [5];
  uint local_8a8;
  uint local_8a4 [4];
  undefined4 local_894;
  uint local_890;
  undefined4 local_88c;
  uint local_87c;
  uint local_878;
  undefined4 ****local_874 [4];
  undefined4 local_864;
  uint local_860;
  undefined4 local_85c;
  uint local_84c;
  uint local_848;
  undefined4 local_844;
  uint local_834;
  uint local_830;
  ushort ****local_82c [4];
  uint local_81c;
  uint local_818;
  undefined4 local_814;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101c3ce6;
  local_10 = ExceptionList;
  local_14 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8cc = param_2;
  local_818 = 7;
  local_81c = 0;
  local_82c[0] = (ushort ****)((uint)local_82c[0] & 0xffff0000);
  FUN_10045540(&PTR_1020e6b0,0);
  local_848 = 7;
  local_84c = 0;
  local_85c = (ushort *)((uint)local_85c._2_2_ << 0x10);
  local_878 = 7;
  local_87c = 0;
  local_88c = (ushort *)((uint)local_88c._2_2_ << 0x10);
  local_830 = 7;
  local_834 = 0;
  local_844 = (ushort *)((uint)local_844._2_2_ << 0x10);
  local_8._0_1_ = 3;
  local_8._1_3_ = 0;
  local_8c0 = 0;
  FUN_10045540(&DAT_1021a6ac,1);
  if (*in_ECX == 0) {
    iVar12 = 0;
  }
  else {
    psVar9 = in_ECX;
    do {
      sVar2 = *psVar9;
      psVar9 = psVar9 + 1;
    } while (sVar2 != 0);
    iVar12 = (int)psVar9 - (int)(in_ECX + 1) >> 1;
  }
  FUN_1002c850(in_ECX,iVar12);
  FUN_1002c850(&DAT_1021a6b0,1);
  if (*in_EDX == 0) {
    iVar12 = 0;
  }
  else {
    psVar9 = in_EDX;
    do {
      sVar2 = *psVar9;
      psVar9 = psVar9 + 1;
    } while (sVar2 != 0);
    iVar12 = (int)psVar9 - (int)(in_EDX + 1) >> 1;
  }
  uVar16 = 0x1004195c;
  FUN_10045540(in_EDX,iVar12);
  FUN_10043dd0(param_4,uVar16,in_EDX,iVar12);
  local_8._0_1_ = 4;
  local_8d0 = std::locale::_Locimp::_New_Locimp(false);
  local_890 = 0xf;
  local_894 = 0;
  local_8a4[0] = local_8a4[0] & 0xffffff00;
  FUN_1000aa60(&DAT_1020e404,0);
  local_8 = CONCAT31(local_8._1_3_,5);
  FUN_10040040(local_8a4,extraout_ECX);
  if (0xf < local_890) {
    FUN_1000b630(local_8a4[0],local_890 + 1);
  }
  local_890 = 0xf;
  local_894 = 0;
  local_8a4[0] = local_8a4[0] & 0xffffff00;
  puVar20 = local_8d4;
  local_8._0_1_ = 6;
  puVar17 = local_8c8;
  FUN_10044c80(puVar17,puVar20);
  local_8._0_1_ = 7;
  if (local_8c4 != (int *)0x0) {
    puVar20 = (undefined1 *)0x10041a37;
    puVar5 = (undefined4 *)(**(code **)(*local_8c4 + 8))();
    if (puVar5 != (undefined4 *)0x0) {
      puVar20 = (undefined1 *)0x1;
      puVar17 = (undefined1 *)0x10041a43;
      (**(code **)*puVar5)(1);
    }
  }
  local_8._0_1_ = 6;
  if (local_930 == 0) {
    psVar9 = param_1;
    do {
      sVar2 = *psVar9;
      psVar9 = psVar9 + 1;
      *(short *)((int)local_8cc + (-2 - (int)param_1) + (int)psVar9) = sVar2;
    } while (sVar2 != 0);
  }
  else {
    piVar6 = (int *)FUN_10044930(&local_814,puVar17,puVar20);
    iVar12 = 0;
    bVar1 = *(byte *)(*(int *)(*piVar6 + 4) + 0xc + (int)piVar6);
    while (((bVar1 & 6) == 0 && (iVar12 == 0))) {
      if ((short)local_814 == 0) {
        pppppuVar13 = (ushort *****)0x0;
      }
      else {
        psVar9 = (short *)&local_814;
        do {
          sVar2 = *psVar9;
          psVar9 = psVar9 + 1;
        } while (sVar2 != 0);
        pppppuVar13 = (ushort *****)((int)psVar9 - ((int)&local_814 + 2) >> 1);
      }
      pppppuVar18 = (undefined4 *****)&local_814;
      FUN_10045540(pppppuVar18,pppppuVar13);
      if (local_834 != 0) {
        local_8c4 = (int *)0x20;
        pppppuVar13 = (ushort *****)FUN_10045340(&local_8c4,pppppuVar18,pppppuVar13);
        pppppuVar18 = (undefined4 *****)0x0;
        FUN_10043a10(0,pppppuVar13);
        local_8c4 = (int *)0x20;
        iVar12 = FUN_100452d0(&local_8c4,pppppuVar18,pppppuVar13);
        uVar7 = iVar12 + 1;
        if (local_834 < uVar7) {
LAB_10042107:
                    /* WARNING: Subroutine does not return */
          FUN_10180c59("invalid string position");
        }
        local_834 = uVar7;
        puVar14 = (ushort *)&local_844;
        if (7 < local_830) {
          puVar14 = local_844;
        }
        puVar14[uVar7] = 0;
      }
      puVar14 = (ushort *)&local_844;
      if (7 < local_830) {
        puVar14 = local_844;
      }
      puVar15 = (ushort *)&local_85c;
      if (7 < local_848) {
        puVar15 = local_85c;
      }
      uVar7 = local_834;
      if (local_84c < local_834) {
        uVar7 = local_84c;
      }
      for (; uVar7 != 0; uVar7 = uVar7 - 1) {
        if (*puVar15 != *puVar14) {
          iVar8 = (-(uint)(*puVar15 < *puVar14) & 0xfffffffe) + 1;
          goto LAB_10041ba6;
        }
        puVar15 = puVar15 + 1;
        puVar14 = puVar14 + 1;
      }
      iVar8 = 0;
LAB_10041ba6:
      iVar12 = local_8c0;
      if (((iVar8 == 0) && (local_834 <= local_84c)) && (local_84c == local_834)) {
        piVar6 = (int *)FUN_10044930(&local_814,pppppuVar18,pppppuVar13);
        bVar1 = *(byte *)(*(int *)(*piVar6 + 4) + 0xc + (int)piVar6);
        iVar12 = local_8c0;
        while (((bVar1 & 6) == 0 && (iVar12 == 0))) {
          if ((short)local_814 == 0) {
            iVar12 = 0;
          }
          else {
            psVar9 = (short *)&local_814;
            do {
              sVar2 = *psVar9;
              psVar9 = psVar9 + 1;
            } while (sVar2 != 0);
            iVar12 = (int)psVar9 - ((int)&local_814 + 2) >> 1;
          }
          puVar5 = &local_814;
          FUN_10045540(puVar5,iVar12);
          if (local_834 != 0) {
            local_8c4 = (int *)0x20;
            uVar16 = FUN_10045340(&local_8c4,puVar5,iVar12);
            uVar19 = 0;
            FUN_10043a10(0,uVar16);
            local_8c4 = (int *)0x20;
            iVar12 = FUN_100452d0(&local_8c4,uVar19,uVar16);
            uVar7 = iVar12 + 1;
            if (local_834 < uVar7) goto LAB_10042107;
            puVar14 = (ushort *)&local_844;
            if (7 < local_830) {
              puVar14 = local_844;
            }
            local_834 = uVar7;
            puVar14[uVar7] = 0;
          }
          local_860 = 7;
          local_864 = 0;
          local_874[0] = (undefined4 ****)((uint)local_874[0] & 0xffff0000);
          FUN_10045540(&DAT_1021a6b4,1);
          uVar7 = local_860;
          ppppuVar4 = local_874[0];
          local_8._0_1_ = 8;
          pppppuVar18 = local_874;
          if (7 < local_860) {
            pppppuVar18 = (undefined4 *****)local_874[0];
          }
          pppppuVar13 = (ushort *****)FUN_10045460(pppppuVar18,extraout_ECX_00,local_864);
          if (pppppuVar13 == (ushort *****)0xffffffff) {
            if (7 < uVar7) {
              FUN_1000b5d0(ppppuVar4,uVar7 + 1);
            }
            goto LAB_10042145;
          }
          pppppuVar18 = (undefined4 *****)0x0;
          pppppuVar10 = (ushort *****)FUN_100439d0(local_8bc,0,pppppuVar13);
          if (local_82c != pppppuVar10) {
            if (7 < local_818) {
              FUN_1000b5d0(local_82c[0],local_818 + 1);
            }
            local_818 = 7;
            local_81c = 0;
            local_82c[0] = (ushort ****)((uint)local_82c[0] & 0xffff0000);
            pppppuVar18 = (undefined4 *****)0x10041da3;
            FUN_10045640(pppppuVar10);
            pppppuVar13 = pppppuVar10;
          }
          local_8._0_1_ = 8;
          if (7 < local_8a8) {
            pppppuVar13 = (ushort *****)(local_8a8 + 1);
            pppppuVar18 = (undefined4 *****)local_8bc[0];
            FUN_1000b5d0(local_8bc[0],pppppuVar13);
          }
          if (local_81c != 0) {
            local_8c4 = (int *)0x20;
            pppppuVar13 = (ushort *****)FUN_10045340(&local_8c4,pppppuVar18,pppppuVar13);
            pppppuVar18 = (undefined4 *****)0x0;
            FUN_10043a10(0,pppppuVar13);
            local_8c4 = (int *)0x20;
            iVar12 = FUN_100452d0(&local_8c4,pppppuVar18,pppppuVar13);
            uVar7 = iVar12 + 1;
            if (local_81c < uVar7) goto LAB_10042107;
            local_81c = uVar7;
            pppppuVar10 = local_82c;
            if (7 < local_818) {
              pppppuVar10 = (ushort *****)local_82c[0];
            }
            *(ushort *)((int)pppppuVar10 + uVar7 * 2) = 0;
          }
          pppppuVar10 = local_82c;
          if (7 < local_818) {
            pppppuVar10 = (ushort *****)local_82c[0];
          }
          puVar14 = (ushort *)&local_88c;
          if (7 < local_878) {
            puVar14 = local_88c;
          }
          uVar7 = local_81c;
          if (local_87c < local_81c) {
            uVar7 = local_87c;
          }
          for (; uVar7 != 0; uVar7 = uVar7 - 1) {
            if (*puVar14 != *(ushort *)pppppuVar10) {
              iVar12 = (-(uint)(*puVar14 < *(ushort *)pppppuVar10) & 0xfffffffe) + 1;
              goto LAB_10041e8d;
            }
            puVar14 = puVar14 + 1;
            pppppuVar10 = (ushort *****)((int)pppppuVar10 + 2);
          }
          iVar12 = 0;
LAB_10041e8d:
          if (((iVar12 == 0) && (local_81c <= local_87c)) && (local_87c == local_81c)) {
            iVar12 = FUN_100453c0(&DAT_1021a6b4,pppppuVar10,1);
            pppppuVar13 = (ushort *****)0xffffffff;
            pppppuVar18 = (undefined4 *****)(iVar12 + 1);
            pppppuVar10 = (ushort *****)FUN_100439d0(local_8bc,pppppuVar18,0xffffffff);
            if (local_82c != pppppuVar10) {
              if (7 < local_818) {
                FUN_1000b5d0(local_82c[0],local_818 + 1);
              }
              local_818 = 7;
              local_81c = 0;
              local_82c[0] = (ushort ****)((uint)local_82c[0] & 0xffff0000);
              pppppuVar18 = (undefined4 *****)0x10041f1f;
              FUN_10045640(pppppuVar10);
              pppppuVar13 = pppppuVar10;
            }
            local_8._0_1_ = 8;
            if (7 < local_8a8) {
              pppppuVar13 = (ushort *****)(local_8a8 + 1);
              pppppuVar18 = (undefined4 *****)local_8bc[0];
              FUN_1000b5d0(local_8bc[0],pppppuVar13);
            }
            if (local_81c != 0) {
              local_8c4 = (int *)0x20;
              pppppuVar13 = (ushort *****)FUN_10045340(&local_8c4,pppppuVar18,pppppuVar13);
              pppppuVar18 = (undefined4 *****)0x0;
              FUN_10043a10(0,pppppuVar13);
              local_8c4 = (int *)0x20;
              iVar12 = FUN_100452d0(&local_8c4,pppppuVar18,pppppuVar13);
              uVar7 = iVar12 + 1;
              if (local_81c < uVar7) goto LAB_10042107;
              local_81c = uVar7;
              pppppuVar10 = local_82c;
              if (7 < local_818) {
                pppppuVar10 = (ushort *****)local_82c[0];
              }
              *(ushort *)((int)pppppuVar10 + uVar7 * 2) = 0;
            }
            pppppuVar10 = local_82c;
            puVar14 = local_8cc;
            if (7 < local_818) {
              pppppuVar10 = (ushort *****)local_82c[0];
            }
            do {
              uVar3 = *(ushort *)pppppuVar10;
              pppppuVar10 = (ushort *****)((int)pppppuVar10 + 2);
              *puVar14 = uVar3;
              puVar14 = puVar14 + 1;
            } while (uVar3 != 0);
            local_8._0_1_ = 6;
            local_8c0 = 1;
            iVar12 = 1;
            if (7 < local_860) {
              pppppuVar13 = (ushort *****)(local_860 + 1);
              pppppuVar18 = (undefined4 *****)local_874[0];
              FUN_1000b5d0(local_874[0],pppppuVar13);
            }
          }
          else {
            local_8._0_1_ = 6;
            iVar12 = local_8c0;
            if (7 < local_860) {
              pppppuVar13 = (ushort *****)(local_860 + 1);
              pppppuVar18 = (undefined4 *****)local_874[0];
              FUN_1000b5d0(local_874[0],pppppuVar13);
              iVar12 = local_8c0;
            }
          }
          piVar6 = (int *)FUN_10044930(&local_814,pppppuVar18,pppppuVar13);
          bVar1 = *(byte *)(*(int *)(*piVar6 + 4) + 0xc + (int)piVar6);
        }
      }
      piVar6 = (int *)FUN_10044930(&local_814,pppppuVar18,pppppuVar13);
      bVar1 = *(byte *)(*(int *)(*piVar6 + 4) + 0xc + (int)piVar6);
    }
    iVar8 = FUN_10045a80();
    if (iVar8 == 0) {
      uVar7 = *(uint *)((int)local_98c + *(int *)(local_98c[0] + 4) + 0xc);
      uVar11 = uVar7 | 6;
      if (*(int *)((int)aiStack_954 + *(int *)(local_98c[0] + 4)) != 0) {
        uVar11 = uVar7 | 2;
      }
      FUN_100071e0(uVar11,0);
    }
    if (iVar12 == 0) {
      psVar9 = param_1;
      do {
        sVar2 = *psVar9;
        psVar9 = psVar9 + 1;
        *(short *)((int)local_8cc + (-2 - (int)param_1) + (int)psVar9) = sVar2;
      } while (sVar2 != 0);
    }
  }
LAB_10042145:
  local_8._0_1_ = 0xb;
  if ((local_8d0 != (_Locimp *)0x0) &&
     (puVar5 = (undefined4 *)(**(code **)(*(int *)local_8d0 + 8))(), puVar5 != (undefined4 *)0x0)) {
    (**(code **)*puVar5)(1);
  }
  *(undefined ***)((int)local_98c + *(int *)(local_98c[0] + 4)) =
       std::basic_ifstream<wchar_t,std::char_traits<wchar_t>_>::vftable;
  *(int *)((int)local_98c + *(int *)(local_98c[0] + 4) + -4) = *(int *)(local_98c[0] + 4) + -0x70;
  FUN_10044710();
  *(undefined ***)((int)local_98c + *(int *)(local_98c[0] + 4)) =
       std::basic_istream<wchar_t,std::char_traits<wchar_t>_>::vftable;
  *(int *)((int)local_98c + *(int *)(local_98c[0] + 4) + -4) = *(int *)(local_98c[0] + 4) + -0x18;
  local_8 = CONCAT31(local_8._1_3_,0xc);
  local_91c[0] = std::ios_base::vftable;
  std::ios_base::_Ios_base_dtor((ios_base *)local_91c);
  if (7 < local_830) {
    FUN_1000b5d0(local_844,local_830 + 1);
  }
  local_830 = 7;
  local_844 = (ushort *)((uint)local_844 & 0xffff0000);
  local_834 = 0;
  if (7 < local_878) {
    FUN_1000b5d0(local_88c,local_878 + 1);
  }
  local_878 = 7;
  local_88c = (ushort *)((uint)local_88c & 0xffff0000);
  local_87c = 0;
  if (7 < local_848) {
    FUN_1000b5d0(local_85c,local_848 + 1);
  }
  local_848 = 7;
  local_84c = 0;
  local_85c = (ushort *)((uint)local_85c & 0xffff0000);
  if (7 < local_818) {
    FUN_1000b5d0(local_82c[0],local_818 + 1);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

