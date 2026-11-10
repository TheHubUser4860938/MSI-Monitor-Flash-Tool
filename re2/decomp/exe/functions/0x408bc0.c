// rea decompile_all
// name: FUN_00408bc0
// address: 0x408bc0
// body: available
// range: 0x408bc0-0x409469 inclusive
// range: 0x409470-0x4096d3 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4094c9 to 0x55c76b FUN_0055c76b (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void FUN_00408bc0(undefined4 param_1,ushort *param_2,undefined4 param_3,int *param_4)

{
  short sVar1;
  ushort uVar2;
  undefined4 *******pppppppuVar3;
  _Locimp *p_Var4;
  undefined4 *puVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  short *psVar9;
  undefined4 *******pppppppuVar10;
  ushort *******pppppppuVar11;
  ushort *******pppppppuVar12;
  uint uVar13;
  short *in_ECX;
  int iVar14;
  undefined4 extraout_ECX;
  ushort *puVar15;
  undefined4 extraout_ECX_00;
  undefined **ppuVar16;
  short *in_EDX;
  ushort *puVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined1 local_99c [16];
  undefined4 local_98c;
  undefined4 local_988;
  undefined1 local_984 [4];
  int *local_980;
  undefined1 local_97c [4];
  int *local_978;
  int local_974 [5];
  uint local_960;
  ushort *local_95c;
  int local_958 [15];
  int aiStack_91c [9];
  int local_8f8;
  undefined **local_8e4 [18];
  undefined4 local_89c;
  uint local_88c;
  uint local_888;
  undefined4 *******local_884 [4];
  undefined4 local_874;
  uint local_870;
  undefined8 local_86c;
  undefined4 local_864;
  uint local_854;
  uint local_850;
  undefined4 local_84c;
  uint local_83c;
  uint local_838;
  ushort *******local_834 [4];
  uint local_824;
  uint local_820;
  undefined1 local_81c [4];
  int *local_818;
  short local_814;
  undefined1 local_812 [2046];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0059c658;
  local_10 = ExceptionList;
  local_14 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_95c = param_2;
  local_818 = param_4;
  local_820 = 7;
  local_824 = 0;
  local_834[0] = (ushort *******)((uint)local_834[0] & 0xffff0000);
  FUN_00403fc0(&PTR_005e8934,0);
  local_850 = 7;
  local_854 = 0;
  local_864 = (ushort *)((uint)local_864._2_2_ << 0x10);
  local_888 = 7;
  local_88c = 0;
  local_89c = (ushort *)((uint)local_89c._2_2_ << 0x10);
  local_838 = 7;
  local_83c = 0;
  local_84c = (ushort *)((uint)local_84c._2_2_ << 0x10);
  local_8._0_1_ = 3;
  local_8._1_3_ = 0;
  local_958[0] = 0;
  FUN_00403fc0(&DAT_005e88c0,1);
  if (*in_ECX == 0) {
    iVar14 = 0;
  }
  else {
    psVar9 = in_ECX;
    do {
      sVar1 = *psVar9;
      psVar9 = psVar9 + 1;
    } while (sVar1 != 0);
    iVar14 = (int)psVar9 - (int)(in_ECX + 1) >> 1;
  }
  FUN_004067e0(in_ECX,iVar14);
  FUN_004067e0(&DAT_005e88c4,1);
  if (*in_EDX == 0) {
    iVar14 = 0;
  }
  else {
    psVar9 = in_EDX;
    do {
      sVar1 = *psVar9;
      psVar9 = psVar9 + 1;
    } while (sVar1 != 0);
    iVar14 = (int)psVar9 - (int)(in_EDX + 1) >> 1;
  }
  FUN_00403fc0(in_EDX,iVar14);
  uVar19 = 0xb8;
  piVar6 = local_958 + 1;
  uVar18 = 0;
  _memset(piVar6,0,0xb8);
  FUN_004098b0(local_818,piVar6,uVar18,uVar19);
  local_8._0_1_ = 4;
  local_86c = 0;
  p_Var4 = std::locale::_Locimp::_New_Locimp(false);
  local_86c = CONCAT44(p_Var4,(undefined4)local_86c);
  local_988 = 0xf;
  local_98c = 0;
  local_99c[0] = 0;
  FUN_004043e0(&DAT_005e87dd,0);
  local_8._0_1_ = 5;
  FUN_004072b0(local_99c,extraout_ECX);
  FUN_004033e0();
  local_8._0_1_ = 6;
  FUN_0040a6b0(local_81c,&local_86c);
  local_8 = CONCAT31(local_8._1_3_,7);
  if ((local_818 != (int *)0x0) &&
     (puVar5 = (undefined4 *)(**(code **)(*local_818 + 8))(), puVar5 != (undefined4 *)0x0)) {
    (**(code **)*puVar5)(1);
  }
  iVar14 = 0;
  if (local_8f8 != 0) {
    while( true ) {
      uVar18 = FUN_00402ad0(local_97c);
      local_8._0_1_ = 8;
      piVar6 = (int *)FUN_0040dcb0(uVar18);
      local_8._0_1_ = 9;
      if ((local_978 != (int *)0x0) &&
         (puVar5 = (undefined4 *)(**(code **)(*local_978 + 8))(), puVar5 != (undefined4 *)0x0)) {
        (**(code **)*puVar5)(1);
      }
      local_8 = CONCAT31(local_8._1_3_,6);
      (**(code **)(*piVar6 + 0x30))(10);
      piVar6 = (int *)FUN_0040c5f0(&local_814);
      if (((*(byte *)(*(int *)(*piVar6 + 4) + 0xc + (int)piVar6) & 6) != 0) || (iVar14 != 0)) break;
      if (local_814 == 0) {
        iVar14 = 0;
      }
      else {
        psVar9 = &local_814;
        do {
          sVar1 = *psVar9;
          psVar9 = psVar9 + 1;
        } while (sVar1 != 0);
        iVar14 = (int)psVar9 - (int)local_812 >> 1;
      }
      psVar9 = &local_814;
      FUN_00403fc0(psVar9,iVar14);
      if (local_83c != 0) {
        local_818 = (int *)0x20;
        uVar18 = FUN_0040be80(&local_818,psVar9,iVar14);
        uVar19 = 0;
        FUN_00405500(0,uVar18);
        local_818 = (int *)0x20;
        iVar14 = FUN_0040be10(&local_818,uVar19,uVar18);
        uVar7 = iVar14 + 1;
        if (local_83c < uVar7) {
LAB_004094c4:
                    /* WARNING: Subroutine does not return */
          FUN_0055c76b("invalid string position");
        }
        local_83c = uVar7;
        puVar15 = (ushort *)&local_84c;
        if (7 < local_838) {
          puVar15 = local_84c;
        }
        puVar15[uVar7] = 0;
      }
      puVar15 = (ushort *)&local_84c;
      if (7 < local_838) {
        puVar15 = local_84c;
      }
      puVar17 = (ushort *)&local_864;
      if (7 < local_850) {
        puVar17 = local_864;
      }
      uVar7 = local_83c;
      if (local_854 < local_83c) {
        uVar7 = local_854;
      }
      for (; uVar7 != 0; uVar7 = uVar7 - 1) {
        if (*puVar17 != *puVar15) {
          iVar8 = (-(uint)(*puVar17 < *puVar15) & 0xfffffffe) + 1;
          goto LAB_00408f8a;
        }
        puVar17 = puVar17 + 1;
        puVar15 = puVar15 + 1;
      }
      iVar8 = 0;
LAB_00408f8a:
      iVar14 = local_958[0];
      if (((iVar8 == 0) && (local_83c <= local_854)) && (local_854 == local_83c)) {
        while( true ) {
          uVar18 = FUN_00402ad0(local_984);
          local_8._0_1_ = 10;
          piVar6 = (int *)FUN_0040dcb0(uVar18);
          local_8._0_1_ = 0xb;
          if ((local_980 != (int *)0x0) &&
             (puVar5 = (undefined4 *)(**(code **)(*local_980 + 8))(), puVar5 != (undefined4 *)0x0))
          {
            (**(code **)*puVar5)(1);
          }
          local_8 = CONCAT31(local_8._1_3_,6);
          (**(code **)(*piVar6 + 0x30))(10);
          piVar6 = (int *)FUN_0040c5f0(&local_814);
          if (((*(byte *)(*(int *)(*piVar6 + 4) + 0xc + (int)piVar6) & 6) != 0) || (iVar14 != 0))
          break;
          if (local_814 == 0) {
            iVar14 = 0;
          }
          else {
            psVar9 = &local_814;
            do {
              sVar1 = *psVar9;
              psVar9 = psVar9 + 1;
            } while (sVar1 != 0);
            iVar14 = (int)psVar9 - (int)local_812 >> 1;
          }
          psVar9 = &local_814;
          FUN_00403fc0(psVar9,iVar14);
          if (local_83c != 0) {
            local_818 = (int *)0x20;
            uVar18 = FUN_0040be80(&local_818,psVar9,iVar14);
            uVar19 = 0;
            FUN_00405500(0,uVar18);
            local_818 = (int *)0x20;
            iVar14 = FUN_0040be10(&local_818,uVar19,uVar18);
            uVar7 = iVar14 + 1;
            if (local_83c < uVar7) goto LAB_004094c4;
            puVar15 = (ushort *)&local_84c;
            if (7 < local_838) {
              puVar15 = local_84c;
            }
            local_83c = uVar7;
            puVar15[uVar7] = 0;
          }
          local_870 = 7;
          local_874 = 0;
          local_884[0] = (undefined4 *******)((uint)local_884[0] & 0xffff0000);
          FUN_00403fc0(&DAT_005e88c8,1);
          uVar7 = local_870;
          pppppppuVar3 = local_884[0];
          local_8 = CONCAT31(local_8._1_3_,0xc);
          pppppppuVar10 = local_884;
          if (7 < local_870) {
            pppppppuVar10 = local_884[0];
          }
          pppppppuVar11 = (ushort *******)FUN_0040bfa0(pppppppuVar10,extraout_ECX_00,local_874);
          if (pppppppuVar11 == (ushort *******)0xffffffff) {
            if (7 < uVar7) {
              FUN_004053c0(pppppppuVar3,uVar7 + 1);
            }
            goto LAB_00409552;
          }
          iVar14 = 0;
          pppppppuVar12 = (ushort *******)FUN_004031a0(local_974,0,pppppppuVar11);
          if (local_834 != (ushort ********)pppppppuVar12) {
            if (7 < local_820) {
              FUN_004053c0(local_834[0],local_820 + 1);
            }
            local_820 = 7;
            local_824 = 0;
            local_834[0] = (ushort *******)((uint)local_834[0] & 0xffff0000);
            iVar14 = 0x4091e9;
            FUN_004041e0(pppppppuVar12);
            pppppppuVar11 = pppppppuVar12;
          }
          local_8 = CONCAT31(local_8._1_3_,0xc);
          if (7 < local_960) {
            pppppppuVar11 = (ushort *******)(local_960 + 1);
            iVar14 = local_974[0];
            FUN_004053c0(local_974[0],pppppppuVar11);
          }
          if (local_824 != 0) {
            local_818 = (int *)0x20;
            uVar18 = FUN_0040be80(&local_818,iVar14,pppppppuVar11);
            uVar19 = 0;
            FUN_00405500(0,uVar18);
            local_818 = (int *)0x20;
            iVar14 = FUN_0040be10(&local_818,uVar19,uVar18);
            uVar7 = iVar14 + 1;
            if (local_824 < uVar7) goto LAB_004094c4;
            local_824 = uVar7;
            pppppppuVar11 = (ushort *******)local_834;
            if (7 < local_820) {
              pppppppuVar11 = local_834[0];
            }
            *(ushort *)((int)pppppppuVar11 + uVar7 * 2) = 0;
          }
          pppppppuVar11 = (ushort *******)local_834;
          if (7 < local_820) {
            pppppppuVar11 = local_834[0];
          }
          puVar15 = (ushort *)&local_89c;
          if (7 < local_888) {
            puVar15 = local_89c;
          }
          uVar7 = local_824;
          if (local_88c < local_824) {
            uVar7 = local_88c;
          }
          for (; uVar7 != 0; uVar7 = uVar7 - 1) {
            if (*puVar15 != *(ushort *)pppppppuVar11) {
              iVar14 = (-(uint)(*puVar15 < *(ushort *)pppppppuVar11) & 0xfffffffe) + 1;
              goto LAB_004092d7;
            }
            puVar15 = puVar15 + 1;
            pppppppuVar11 = (ushort *******)((int)pppppppuVar11 + 2);
          }
          iVar14 = 0;
LAB_004092d7:
          if (((iVar14 == 0) && (local_824 <= local_88c)) && (local_88c == local_824)) {
            iVar14 = FUN_0040bf00(&DAT_005e88c8,pppppppuVar11,1);
            pppppppuVar11 = (ushort *******)0xffffffff;
            iVar14 = iVar14 + 1;
            pppppppuVar12 = (ushort *******)FUN_004031a0(local_974,iVar14,0xffffffff);
            if (local_834 != (ushort ********)pppppppuVar12) {
              if (7 < local_820) {
                FUN_004053c0(local_834[0],local_820 + 1);
              }
              local_820 = 7;
              local_824 = 0;
              local_834[0] = (ushort *******)((uint)local_834[0] & 0xffff0000);
              iVar14 = 0x409369;
              FUN_004041e0(pppppppuVar12);
              pppppppuVar11 = pppppppuVar12;
            }
            local_8 = CONCAT31(local_8._1_3_,0xc);
            if (7 < local_960) {
              pppppppuVar11 = (ushort *******)(local_960 + 1);
              iVar14 = local_974[0];
              FUN_004053c0(local_974[0],pppppppuVar11);
            }
            if (local_824 != 0) {
              local_818 = (int *)0x20;
              uVar18 = FUN_0040be80(&local_818,iVar14,pppppppuVar11);
              uVar19 = 0;
              FUN_00405500(0,uVar18);
              local_818 = (int *)0x20;
              iVar14 = FUN_0040be10(&local_818,uVar19,uVar18);
              uVar7 = iVar14 + 1;
              if (local_824 < uVar7) goto LAB_004094c4;
              local_824 = uVar7;
              pppppppuVar11 = (ushort *******)local_834;
              if (7 < local_820) {
                pppppppuVar11 = local_834[0];
              }
              *(ushort *)((int)pppppppuVar11 + uVar7 * 2) = 0;
            }
            pppppppuVar11 = (ushort *******)local_834;
            puVar15 = local_95c;
            if (7 < local_820) {
              pppppppuVar11 = local_834[0];
            }
            do {
              uVar2 = *(ushort *)pppppppuVar11;
              pppppppuVar11 = (ushort *******)((int)pppppppuVar11 + 2);
              *puVar15 = uVar2;
              puVar15 = puVar15 + 1;
            } while (uVar2 != 0);
            local_958[0] = 1;
            iVar14 = 1;
            if (7 < local_870) {
              FUN_004053c0(local_884[0],local_870 + 1);
            }
          }
          else {
            iVar14 = local_958[0];
            if (7 < local_870) {
              FUN_004053c0(local_884[0],local_870 + 1);
              iVar14 = local_958[0];
            }
          }
        }
      }
    }
    iVar8 = FUN_0040c360();
    if (iVar8 == 0) {
      uVar7 = *(uint *)((int)local_958 + *(int *)(local_958[1] + 4) + 0x10U);
      uVar13 = uVar7 | 6;
      if (*(int *)((int)aiStack_91c + *(int *)(local_958[1] + 4)) != 0) {
        uVar13 = uVar7 | 2;
      }
      FUN_00402a10(uVar13,0);
    }
    if (iVar14 == 0) {
      ppuVar16 = &PTR_005e8934;
      do {
        sVar1 = *(short *)ppuVar16;
        ppuVar16 = (undefined **)((int)ppuVar16 + 2);
        *(short *)((int)(local_95c + -0x2f449b) + (int)ppuVar16) = sVar1;
      } while (sVar1 != 0);
    }
  }
LAB_00409552:
  local_8._0_1_ = 0xf;
  if ((local_86c._4_4_ != (int *)0x0) &&
     (puVar5 = (undefined4 *)(**(code **)(*local_86c._4_4_ + 8))(), puVar5 != (undefined4 *)0x0)) {
    (**(code **)*puVar5)(1);
  }
  *(undefined ***)((int)local_958 + *(int *)(local_958[1] + 4) + 4U) =
       std::basic_ifstream<wchar_t,std::char_traits<wchar_t>_>::vftable;
  *(int *)((int)local_958 + *(int *)(local_958[1] + 4)) = *(int *)(local_958[1] + 4) + -0x70;
  FUN_0040a2b0();
  *(undefined ***)((int)local_958 + *(int *)(local_958[1] + 4) + 4U) =
       std::basic_istream<wchar_t,std::char_traits<wchar_t>_>::vftable;
  *(int *)((int)local_958 + *(int *)(local_958[1] + 4)) = *(int *)(local_958[1] + 4) + -0x18;
  local_8 = CONCAT31(local_8._1_3_,0x10);
  local_8e4[0] = std::ios_base::vftable;
  std::ios_base::_Ios_base_dtor((ios_base *)local_8e4);
  if (7 < local_838) {
    FUN_004053c0(local_84c,local_838 + 1);
  }
  local_838 = 7;
  local_84c = (ushort *)((uint)local_84c & 0xffff0000);
  local_83c = 0;
  if (7 < local_888) {
    FUN_004053c0(local_89c,local_888 + 1);
  }
  local_888 = 7;
  local_89c = (ushort *)((uint)local_89c & 0xffff0000);
  local_88c = 0;
  if (7 < local_850) {
    FUN_004053c0(local_864,local_850 + 1);
  }
  local_850 = 7;
  local_854 = 0;
  local_864 = (ushort *)((uint)local_864 & 0xffff0000);
  if (7 < local_820) {
    FUN_004053c0(local_834[0],local_820 + 1);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

