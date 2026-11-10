// rea decompile_all
// name: FUN_100412e0
// address: 0x100412e0
// body: available
// range: 0x100412e0-0x10041a39 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1004131d to 0x100351a0 FUN_100351a0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_100412e0(void)

{
  bool bVar1;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *pCVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *in_ECX;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX;
  uint uVar8;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_00;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_01;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_02;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_03;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_04;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_00;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_01;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_05;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_06;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *pCVar9;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_07;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_02;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_03;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_04;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_08;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_09;
  byte *pbVar10;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *pCStack_5c;
  uint uStack_58;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *local_48;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *local_44;
  int local_40;
  int local_3c;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  uint local_1c;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *local_18;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101a1300;
  local_10 = ExceptionList;
  uStack_58 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  pCStack_5c = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)0x10041312;
  local_18 = in_ECX;
  piVar3 = (int *)FUN_10048e90();
  if (piVar3 == (int *)0x0) {
    pCStack_5c = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)0x80004005;
                    /* WARNING: Subroutine does not return */
    FUN_100351a0();
  }
  pCStack_5c = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)0x10041327;
  iVar4 = (**(code **)(*piVar3 + 0xc))();
  local_44 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)(iVar4 + 0x10);
  local_8 = 0;
  local_11 = 0;
  pCStack_5c = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)0x10041342;
  FUN_100444a0();
  pCStack_5c = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)0x1004134c;
  FUN_100444a0();
  *(int *)in_ECX = 0;
  pCStack_5c = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)0x10041359;
  iVar4 = FUN_10040700();
  if ((iVar4 == 0) && (*(int *)(in_ECX + 8) != 0)) {
    local_1c = 0;
    pCVar9 = extraout_ECX;
    if (*(int *)(in_ECX + 8) != 0) {
      do {
        if (((int)local_1c < *(int *)(in_ECX + 0x1c)) && (-1 < (int)local_1c)) {
          puVar5 = *(undefined4 **)(in_ECX + 0x14);
          for (uVar8 = local_1c; uVar8 != 0; uVar8 = uVar8 - 1) {
            puVar5 = (undefined4 *)*puVar5;
          }
        }
        else {
          puVar5 = (undefined4 *)0x0;
        }
        pCStack_5c = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     (puVar5 + 2);
        FUN_100403e0();
        pCVar2 = local_2c;
        iVar4 = local_3c;
        pCVar9 = this;
        if (DAT_1021ae54 != 0) {
          pCStack_5c = local_2c;
          ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                    (this,(wchar_t *)&DAT_1021ae14,
                     L"nDisplayIds = %u  Connect Type:%d ProtocolConverterType %d\n",local_1c);
          local_20 = (undefined1 *)&pCStack_5c;
          local_24 = (undefined1 *)&pCStack_5c;
          FUN_10034a50();
          local_24 = &stack0xffffffa0;
          local_8._0_1_ = 1;
          FUN_10034a50(&DAT_1021ae10);
          local_8 = (uint)local_8._1_3_ << 8;
          FUN_10033a90();
          pCVar9 = extraout_ECX_00;
        }
        if (DAT_1021ae74 == 0) {
LAB_10041461:
          if (((iVar4 != 1) && (iVar4 != 5)) && (iVar4 != 2)) goto LAB_1004194f;
          if (DAT_1021ae54 != 0) {
            pCStack_5c = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         0x101e620c;
            ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                      (pCVar9,(wchar_t *)&DAT_1021ae14);
            local_24 = (undefined1 *)&pCStack_5c;
            local_20 = (undefined1 *)&pCStack_5c;
            FUN_10034a50();
            local_20 = &stack0xffffffa0;
            local_8._0_1_ = 4;
            FUN_10034a50(&DAT_1021ae10);
            local_8 = (uint)local_8._1_3_ << 8;
            FUN_10033a90();
            pCVar9 = extraout_ECX_02;
          }
          if (DAT_1021ae2c == 0) {
            *(int *)in_ECX = 1;
            *(int *)(in_ECX + 4) = local_40;
            goto LAB_10041970;
          }
          if (DAT_1021ae2c != 1) {
            piVar7 = (int *)FUN_10044690();
            pCStack_5c = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         &local_48;
            FUN_100403e0();
            piVar3 = piVar7;
            if (DAT_10206ed0 != (int *)0x0) {
              *DAT_10206ed0 = (int)piVar7;
              piVar3 = DAT_10206ecc;
            }
            DAT_10206ecc = piVar3;
            pCVar9 = this_04;
            DAT_10206ed0 = piVar7;
            if (DAT_1021ae54 == 0) goto LAB_1004194f;
            pCStack_5c = local_44;
            ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                      (this_04,(wchar_t *)&DAT_1021ae14);
            local_28 = (undefined1 *)&pCStack_5c;
            local_24 = (undefined1 *)&pCStack_5c;
            FUN_10034a50();
            local_8._0_1_ = 0xd;
            goto LAB_10041933;
          }
          *(int *)(local_18 + 4) = local_40;
          if (DAT_1021ae3c == 0) {
            local_20 = (undefined1 *)0x1;
          }
          else {
            pCStack_5c = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         0x100414ee;
            local_20 = (undefined1 *)FUN_10043900();
            pCVar9 = extraout_ECX_03;
            in_ECX = local_18;
            if (local_20 == (undefined1 *)0x0) goto LAB_1004194f;
          }
          pCVar9 = local_18;
          if (DAT_1021ae44 == 0) {
            bVar1 = true;
            in_ECX = local_18;
          }
          else {
            bVar1 = false;
            if (DAT_1021ae4c == 0) {
              pbVar10 = &DAT_101e2460;
              iVar4 = 7;
              do {
                pCStack_5c = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                             0x1;
                iVar6 = FUN_100422e0(*pbVar10,0x23);
                if ((iVar6 != 0) && (bVar1 = true, DAT_1021ae54 != 0)) {
                  pCStack_5c = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *
                               )(uint)*pbVar10;
                  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                            (this_00,(wchar_t *)&DAT_1021ae14);
                  local_28 = (undefined1 *)&pCStack_5c;
                  local_24 = (undefined1 *)&pCStack_5c;
                  FUN_10034a50();
                  local_24 = &stack0xffffffa0;
                  local_8._0_1_ = 6;
                  FUN_10034a50(&DAT_1021ae10);
                  local_8 = (uint)local_8._1_3_ << 8;
                  FUN_10033a90();
                }
                pbVar10 = pbVar10 + 3;
                iVar4 = iVar4 + -1;
              } while (iVar4 != 0);
              pCVar9 = local_18;
              in_ECX = local_18;
              if (bVar1) goto LAB_10041791;
            }
            else if (DAT_1021ae54 != 0) {
              pCStack_5c = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                           (uint)DAT_1021ae50;
              ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                        (local_18,(wchar_t *)&DAT_1021ae14);
              local_24 = (undefined1 *)&pCStack_5c;
              local_28 = (undefined1 *)&pCStack_5c;
              FUN_10034a50();
              local_28 = &stack0xffffffa0;
              local_8._0_1_ = 5;
              FUN_10034a50(&DAT_1021ae10);
              local_8 = (uint)local_8._1_3_ << 8;
              FUN_10033a90();
              pCVar9 = extraout_ECX_04;
            }
            in_ECX = local_18;
            if (DAT_1021ae48 != 0) {
              if (DAT_1021ae54 != 0) {
                pCStack_5c = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                             (uint)DAT_1021ae50;
                ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                          (pCVar9,(wchar_t *)&DAT_1021ae14);
                local_28 = (undefined1 *)&pCStack_5c;
                local_24 = (undefined1 *)&pCStack_5c;
                FUN_10034a50();
                local_24 = &stack0xffffffa0;
                local_8._0_1_ = 7;
                FUN_10034a50(&DAT_1021ae10);
                local_8 = (uint)local_8._1_3_ << 8;
                FUN_10033a90();
              }
              in_ECX = local_18;
              pCStack_5c = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)0x1
              ;
              iVar4 = FUN_100422e0(DAT_1021ae50,0x23);
              if (iVar4 == 0) {
                pCVar9 = this_01;
                if (DAT_1021ae54 != 0) {
                  pCStack_5c = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *
                               )(uint)DAT_1021ae50;
                  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                            (this_01,(wchar_t *)&DAT_1021ae14);
                  local_28 = (undefined1 *)&pCStack_5c;
                  local_24 = (undefined1 *)&pCStack_5c;
                  FUN_10034a50();
                  local_24 = &stack0xffffffa0;
                  local_8._0_1_ = 9;
                  FUN_10034a50(&DAT_1021ae10);
                  local_8 = (uint)local_8._1_3_ << 8;
                  FUN_10033a90();
                  pCVar9 = extraout_ECX_06;
                }
              }
              else {
                bVar1 = true;
                pCVar9 = this_01;
                if (DAT_1021ae54 != 0) {
                  pCStack_5c = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *
                               )(uint)DAT_1021ae50;
                  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                            (this_01,(wchar_t *)&DAT_1021ae14);
                  local_28 = (undefined1 *)&pCStack_5c;
                  local_24 = (undefined1 *)&pCStack_5c;
                  FUN_10034a50();
                  local_24 = &stack0xffffffa0;
                  local_8._0_1_ = 8;
                  FUN_10034a50(&DAT_1021ae10);
                  local_8 = (uint)local_8._1_3_ << 8;
                  FUN_10033a90();
                  pCVar9 = extraout_ECX_05;
                }
              }
            }
          }
LAB_10041791:
          if ((local_20 != (undefined1 *)0x0) && (bVar1)) {
            if (DAT_1021ae70 == 0) {
              piVar7 = (int *)FUN_10044690();
              pCStack_5c = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                           &local_48;
              FUN_100403e0();
              piVar3 = piVar7;
              if (DAT_10206ed0 != (int *)0x0) {
                *DAT_10206ed0 = (int)piVar7;
                piVar3 = DAT_10206ecc;
              }
              DAT_10206ecc = piVar3;
              pCVar9 = this_03;
              DAT_10206ed0 = piVar7;
              if (DAT_1021ae54 != 0) {
                pCStack_5c = local_44;
                ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                          (this_03,(wchar_t *)&DAT_1021ae14);
                local_28 = (undefined1 *)&pCStack_5c;
                local_24 = (undefined1 *)&pCStack_5c;
                FUN_10034a50();
                local_8._0_1_ = 0xc;
                goto LAB_10041933;
              }
            }
            else {
              pCStack_5c = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                           0x100417b7;
              iVar4 = FUN_10043b50();
              if (iVar4 == 0) {
                pCVar9 = extraout_ECX_07;
                if (DAT_1021ae54 != 0) {
                  local_28 = (undefined1 *)&pCStack_5c;
                  pCStack_5c = extraout_ECX_07;
                  FUN_100352e0();
                  local_8._0_1_ = 10;
LAB_10041933:
                  local_24 = &stack0xffffffa0;
                  goto LAB_10041939;
                }
              }
              else {
                piVar7 = (int *)FUN_10044690();
                pCStack_5c = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                             &local_48;
                FUN_100403e0();
                piVar3 = piVar7;
                if (DAT_10206ed0 != (int *)0x0) {
                  *DAT_10206ed0 = (int)piVar7;
                  piVar3 = DAT_10206ecc;
                }
                DAT_10206ecc = piVar3;
                pCVar9 = this_02;
                DAT_10206ed0 = piVar7;
                if (DAT_1021ae54 != 0) {
                  pCStack_5c = local_44;
                  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                            (this_02,(wchar_t *)&DAT_1021ae14);
                  local_28 = (undefined1 *)&pCStack_5c;
                  local_24 = (undefined1 *)&pCStack_5c;
                  FUN_10034a50();
                  local_8._0_1_ = 0xb;
                  goto LAB_10041933;
                }
              }
            }
          }
        }
        else {
          if (((uint)pCVar2 & 1) != 0) {
            if (DAT_1021ae54 != 0) {
              pCStack_5c = local_48;
              ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                        (pCVar9,(wchar_t *)&DAT_1021ae14);
              local_24 = (undefined1 *)&pCStack_5c;
              local_20 = (undefined1 *)&pCStack_5c;
              FUN_10034a50();
              local_20 = &stack0xffffffa0;
              local_8._0_1_ = 2;
              FUN_10034a50(&DAT_1021ae10);
              local_8 = (uint)local_8._1_3_ << 8;
              FUN_10033a90();
              pCVar9 = extraout_ECX_01;
            }
            goto LAB_10041461;
          }
          if (DAT_1021ae54 == 0) goto LAB_1004194f;
          pCStack_5c = local_48;
          ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                    (pCVar9,(wchar_t *)&DAT_1021ae14);
          local_24 = (undefined1 *)&pCStack_5c;
          local_20 = (undefined1 *)&pCStack_5c;
          FUN_10034a50();
          local_20 = &stack0xffffffa0;
          local_8._0_1_ = 3;
LAB_10041939:
          FUN_10034a50(&DAT_1021ae10);
          local_8 = (uint)local_8._1_3_ << 8;
          FUN_10033a90();
          pCVar9 = extraout_ECX_08;
        }
LAB_1004194f:
        local_1c = local_1c + 1;
      } while (local_1c < *(uint *)(in_ECX + 8));
    }
    if (*(int *)in_ECX == 0) {
      pCStack_5c = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)0x1004196e;
      iVar4 = FUN_10043ff0();
      *(int *)in_ECX = iVar4;
      pCVar9 = extraout_ECX_09;
    }
LAB_10041970:
    if (DAT_1021ae54 != 0) {
      if (*(int *)in_ECX == 0) {
        pCStack_5c = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     0x101e4f10;
        ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                  (pCVar9,(wchar_t *)&DAT_1021ae14);
        local_28 = (undefined1 *)&pCStack_5c;
        local_24 = (undefined1 *)&pCStack_5c;
        FUN_10034a50();
        local_8._0_1_ = 0xf;
      }
      else {
        pCStack_5c = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     0x101e4ec0;
        ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                  (pCVar9,(wchar_t *)&DAT_1021ae14);
        local_28 = (undefined1 *)&pCStack_5c;
        local_24 = (undefined1 *)&pCStack_5c;
        FUN_10034a50();
        local_8._0_1_ = 0xe;
      }
      local_24 = &stack0xffffffa0;
      FUN_10034a50(&DAT_1021ae10);
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_10033a90();
    }
    iVar4 = *(int *)in_ECX;
  }
  else {
    iVar4 = 0;
  }
  local_8 = 0xffffffff;
  pCStack_5c = local_44 + -0x10;
  LOCK();
  pCVar9 = local_44 + -4;
  iVar6 = *(int *)pCVar9;
  *(int *)pCVar9 = *(int *)pCVar9 + -1;
  UNLOCK();
  if (iVar6 == 1 || iVar6 + -1 < 0) {
    (**(code **)(**(int **)pCStack_5c + 4))();
  }
  ExceptionList = local_10;
  return iVar4;
}

