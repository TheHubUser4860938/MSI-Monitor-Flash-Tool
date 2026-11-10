// rea decompile_all
// name: FUN_004119f0
// address: 0x4119f0
// body: available
// range: 0x4119f0-0x41209a inclusive
// range: 0x4120a0-0x412259 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x411d54 to 0x40ed80 FUN_0040ed80 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00411c52) */
/* WARNING: Removing unreachable block (ram,0x00411c86) */
/* WARNING: Removing unreachable block (ram,0x004121d9) */
/* WARNING: Removing unreachable block (ram,0x00412229) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004119f0(void)

{
  uint uVar1;
  short sVar2;
  short *psVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int in_ECX;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_00;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *pCVar7;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_01;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX;
  uint uVar8;
  ushort *****pppppuVar9;
  undefined ***pppuVar10;
  short *psVar11;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *pCVar12;
  uint local_14c;
  uint local_e0 [8];
  undefined **local_c0;
  ushort ****local_bc [4];
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *local_ac;
  uint local_a8;
  undefined1 local_a4;
  undefined4 local_94;
  undefined4 local_90;
  undefined **local_8c;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *local_88 [4];
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *local_78;
  uint local_74;
  undefined1 local_70;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined **local_4c;
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  undefined1 local_30;
  undefined4 local_20;
  undefined4 local_1c;
  short *local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0059d00f;
  local_10 = ExceptionList;
  local_14 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_e0[0] = 0;
  local_e0[1] = 0;
  local_e0[2] = 0;
  local_e0[3] = 0;
  local_e0[4] = 0;
  local_e0[5] = 0;
  local_e0[6] = 0;
  local_e0[7] = 0;
  local_34 = 7;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffff0000;
  local_4c = CCpRsString::vftable;
  local_1c = 0xf;
  local_20 = 0;
  local_30 = 0;
  local_a8 = 7;
  local_ac = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)0x0;
  local_bc[0] = (ushort ****)((uint)local_bc[0] & 0xffff0000);
  local_c0 = CCpRsString::vftable;
  local_90 = 0xf;
  local_94 = 0;
  local_a4 = 0;
  local_74 = 7;
  local_78 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)0x0;
  local_88[0] = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                ((uint)local_88[0] & 0xffff0000);
  local_8c = CCpRsString::vftable;
  local_5c = 0xf;
  local_60 = 0;
  local_70 = 0;
  local_58 = 0;
  local_50 = 0;
  local_8 = 5;
  if (*(int *)(in_ECX + 0x18c) == 0) {
    if (*(int *)(in_ECX + 0x188) == 0) {
      FUN_00403fc0();
      FUN_00408420();
      goto LAB_004120e5;
    }
    FUN_00403fc0();
    FUN_00408420();
  }
  if (*(int *)(in_ECX + 0x188) == 0) {
    FUN_00403fc0();
    FUN_00408420();
  }
  sVar2 = **(short **)(in_ECX + 0x174);
  psVar3 = *(short **)(in_ECX + 0x174);
  while (sVar2 != 0) {
    sVar2 = *psVar3;
    psVar3 = psVar3 + 1;
  }
  FUN_00403fc0();
  FUN_00402f80();
  FUN_004040c0(local_48,0,0xffffffff);
  FUN_00408380();
  FUN_00408520();
  iVar4 = FUN_00412330();
  if (iVar4 != 0) {
    ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
              (this,(wchar_t *)&DAT_00619614);
    FUN_00402f80();
    FUN_00408420();
    goto LAB_004120e5;
  }
  _DAT_006194dc = 4;
  PostMessageW(*(HWND *)(in_ECX + 0x20),0x590,0,4);
  piVar5 = (int *)FUN_004295fe();
  if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0040ed80();
  }
  iVar4 = (**(code **)(*piVar5 + 0xc))();
  local_18 = (short *)(iVar4 + 0x10);
  local_8._0_1_ = 6;
  FUN_00415c80();
  local_8._0_1_ = 7;
  FUN_00415f50();
  local_8 = CONCAT31(local_8._1_3_,6);
  LOCK();
  piVar5 = (int *)(local_14c + -4);
  iVar4 = *piVar5;
  *piVar5 = *piVar5 + -1;
  UNLOCK();
  if (iVar4 == 1 || iVar4 + -1 < 0) {
    (**(code **)(**(int **)(local_14c + -0x10) + 4))();
  }
  psVar11 = local_18;
  sVar2 = *local_18;
  psVar3 = local_18;
  while (sVar2 != 0) {
    sVar2 = *psVar3;
    psVar3 = psVar3 + 1;
  }
  FUN_00403fc0();
  iVar4 = FUN_00410270();
  if (iVar4 == 0) {
    if (*(int *)(in_ECX + 0x188) != 0) {
      pCVar7 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)0x0;
      uVar8 = 0;
      iVar4 = 0;
      do {
        uVar1 = *(uint *)((int)local_e0 + iVar4 + 0x10);
        if (uVar1 < *(uint *)((int)local_e0 + iVar4)) break;
        if ((*(uint *)((int)local_e0 + iVar4) != uVar1) ||
           (pCVar7 = pCVar7 + 1,
           pCVar7 == (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)0x4)) {
          ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                    (pCVar7,(wchar_t *)&DAT_00619614);
          FUN_00402f80();
          FUN_00408420();
          goto LAB_004120c9;
        }
        uVar8 = uVar8 + 1;
        iVar4 = iVar4 + 4;
      } while (uVar8 < 4);
      FUN_00402f20();
      FUN_00408420();
    }
    _DAT_006194dc = 8;
    PostMessageW(*(HWND *)(in_ECX + 0x20),0x590,0,8);
    iVar4 = FUN_004108f0();
    if (iVar4 == 0) {
      _DAT_006194dc = 0xc;
      PostMessageW(*(HWND *)(in_ECX + 0x20),0x590,0,0xc);
      if (*(int *)(in_ECX + 0x18c) != 0) {
        FUN_00402f80();
        FUN_00408420();
        pCVar7 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                 (local_58._4_4_ - (int)(undefined ***)local_58);
        local_14c = 0;
        uVar8 = (int)pCVar7 / 0x34;
        if (uVar8 != 0) {
          iVar4 = 0;
          pppuVar10 = (undefined ***)local_58;
          do {
            if ((&local_8c != pppuVar10) &&
               (local_88 !=
                (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> **)
                (-(uint)(pppuVar10 != (undefined ***)0x0) & (uint)(pppuVar10 + 1)))) {
              FUN_004040c0();
            }
            FUN_00402f80();
            FUN_00408420();
            pCVar7 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)local_88;
            if (7 < local_74) {
              pCVar7 = local_88[0];
            }
            pppppuVar9 = local_bc;
            if (7 < local_a8) {
              pppppuVar9 = (ushort *****)local_bc[0];
            }
            pCVar12 = local_78;
            if (local_ac < local_78) {
              pCVar12 = local_ac;
            }
            for (; pCVar12 !=
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)0x0;
                pCVar12 = pCVar12 + -1) {
              if (*(ushort *)pppppuVar9 != *(ushort *)pCVar7) {
                iVar6 = (-(uint)(*(ushort *)pppppuVar9 < *(ushort *)pCVar7) & 0xfffffffe) + 1;
                goto LAB_00412033;
              }
              pppppuVar9 = (ushort *****)((int)pppppuVar9 + 2);
              pCVar7 = pCVar7 + 2;
            }
            iVar6 = 0;
LAB_00412033:
            if (((iVar6 == 0) && (pCVar7 = local_ac, local_78 <= local_ac)) &&
               (local_ac == local_78)) {
              FUN_00402f20();
              FUN_00408420();
              iVar4 = iVar4 + 1;
              pCVar7 = extraout_ECX;
            }
            pppuVar10 = pppuVar10 + 0xd;
            local_14c = local_14c + 1;
          } while (local_14c < uVar8);
          psVar11 = local_18;
          if (iVar4 == 1) goto LAB_004120c9;
        }
        ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                  (pCVar7,(wchar_t *)&DAT_00619614);
      }
    }
    else {
      ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                (this_01,(wchar_t *)&DAT_00619614);
      FUN_00402f80();
      FUN_00408420();
    }
  }
  else {
    ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
              (this_00,(wchar_t *)&DAT_00619614);
    FUN_00402f80();
    FUN_00408420();
  }
LAB_004120c9:
  local_8 = CONCAT31(local_8._1_3_,5);
  LOCK();
  piVar5 = (int *)(psVar11 + -2);
  iVar4 = *piVar5;
  *piVar5 = *piVar5 + -1;
  UNLOCK();
  if (iVar4 == 1 || iVar4 + -1 < 0) {
    (**(code **)(**(int **)(psVar11 + -8) + 4))();
  }
LAB_004120e5:
  FUN_00414bf0();
  local_8c = CCpRsString::vftable;
  FUN_004033e0();
  if (7 < local_74) {
    FUN_004053c0();
  }
  local_74 = 7;
  local_78 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)0x0;
  local_88[0] = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                ((uint)local_88[0] & 0xffff0000);
  local_c0 = CCpRsString::vftable;
  FUN_004033e0();
  if (7 < local_a8) {
    FUN_004053c0();
  }
  local_a8 = 7;
  local_ac = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)0x0;
  local_bc[0] = (ushort ****)((uint)local_bc[0] & 0xffff0000);
  local_4c = CCpRsString::vftable;
  FUN_004033e0();
  if (7 < local_34) {
    FUN_004053c0();
  }
  local_34 = 7;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffff0000;
  FUN_004033e0();
  FUN_004033e0();
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

