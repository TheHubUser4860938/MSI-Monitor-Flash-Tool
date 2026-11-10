// rea decompile_all
// name: FUN_100447c0
// address: 0x100447c0
// body: available
// range: 0x100447c0-0x10045054 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10044800 to 0x100351a0 FUN_100351a0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x10044820 to 0x100351a0 FUN_100351a0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_100447c0(void)

{
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  int *piVar4;
  uint *in_ECX;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_00;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_01;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *pCVar5;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_02;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_03;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_04;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_05;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_00;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_01;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_06;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_07;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_02;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_03;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_04;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_08;
  ushort uVar6;
  int iVar7;
  uint *puVar8;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *pCStack_54;
  uint uStack_50;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *local_40;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *local_3c;
  int local_38;
  uint local_34;
  uint local_30;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *local_18;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> local_11;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101a1648;
  local_10 = ExceptionList;
  uStack_50 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar7 = 0;
  local_11 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>)0x0;
  pCStack_54 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)0x100447f5;
  piVar1 = (int *)FUN_10048e90();
  if (piVar1 == (int *)0x0) {
    pCStack_54 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)0x80004005;
                    /* WARNING: Subroutine does not return */
    FUN_100351a0();
  }
  pCStack_54 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)0x1004480a;
  local_38 = (**(code **)(*piVar1 + 0xc))();
  local_38 = local_38 + 0x10;
  pCStack_54 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)0x10044815;
  piVar1 = (int *)FUN_10048e90();
  if (piVar1 == (int *)0x0) {
    pCStack_54 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)0x80004005;
                    /* WARNING: Subroutine does not return */
    FUN_100351a0();
  }
  pCStack_54 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)0x1004482a;
  iVar2 = (**(code **)(*piVar1 + 0xc))();
  local_2c = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)(iVar2 + 0x10);
  local_8 = 0;
  pCStack_54 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)0x10044841;
  FUN_10047a40();
  pCStack_54 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)0x10044846;
  iVar2 = FUN_10001000();
  if (iVar2 == 0) {
    if (DAT_1021ae84 == 0) {
      pCStack_54 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)0x100448b9;
      iVar2 = FUN_10046b90();
      pCVar5 = extraout_ECX_00;
    }
    else {
      pCStack_54 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)0x100448b2;
      iVar2 = FUN_10046580();
      pCVar5 = extraout_ECX;
    }
    if (iVar2 == 0) {
      if (DAT_10212a0c != (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)0x0)
      {
        if (DAT_1021ae54 != 0) {
          pCStack_54 = DAT_10212a0c;
          ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                    (pCVar5,(wchar_t *)&DAT_1021ae14);
          local_20 = (undefined1 *)&pCStack_54;
          local_1c = (undefined1 *)&pCStack_54;
          FUN_10034a50();
          local_1c = &stack0xffffffa8;
          local_8._0_1_ = 3;
          FUN_10034a50(&DAT_1021ae10);
          local_8 = (uint)local_8._1_3_ << 8;
          FUN_10033a90();
          pCVar5 = extraout_ECX_01;
        }
        local_18 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)0x0;
        if (DAT_10212a0c !=
            (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)0x0) {
          puVar8 = &DAT_10212a64;
          do {
            if (DAT_1021ae54 != 0) {
              pCStack_54 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                           (*puVar8 >> 1 & 1);
              pCVar5 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       (*puVar8 >> 6 & 1);
              ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                        (pCVar5,(wchar_t *)&DAT_1021ae14,
                         L"nDisplayIds = %u displayId: =%u Connect Type:%d, isConnected:%d,isDyanmic:%d, isMultiStreamRootNode:%d\n"
                         ,local_18,puVar8[-1],puVar8[-2],pCVar5);
              local_20 = (undefined1 *)&pCStack_54;
              local_1c = (undefined1 *)&pCStack_54;
              FUN_10034a50();
              local_1c = &stack0xffffffa8;
              local_8._0_1_ = 4;
              FUN_10034a50(&DAT_1021ae10);
              local_8 = (uint)local_8._1_3_ << 8;
              FUN_10033a90();
              pCVar5 = extraout_ECX_02;
            }
            pCStack_54 = local_18;
            if (((puVar8[0xb] & 3) == 0) && ((*puVar8 & 2) == 0)) {
              if (DAT_1021ae54 == 0) goto LAB_10044f63;
              ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                        (pCVar5,(wchar_t *)&DAT_1021ae14);
              local_20 = (undefined1 *)&pCStack_54;
              local_1c = (undefined1 *)&pCStack_54;
              FUN_10034a50();
              local_1c = &stack0xffffffa8;
              local_8._0_1_ = 0xf;
LAB_10044f4a:
              FUN_10034a50(&DAT_1021ae10);
              local_8 = (uint)local_8._1_3_ << 8;
              FUN_10033a90();
              pCVar5 = extraout_ECX_08;
            }
            else {
              if (DAT_1021ae54 != 0) {
                ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                          (pCVar5,(wchar_t *)&DAT_1021ae14);
                local_20 = (undefined1 *)&pCStack_54;
                local_1c = (undefined1 *)&pCStack_54;
                FUN_10034a50();
                local_1c = &stack0xffffffa8;
                local_8._0_1_ = 5;
                FUN_10034a50(&DAT_1021ae10);
                local_8 = (uint)local_8._1_3_ << 8;
                FUN_10033a90();
                pCVar5 = extraout_ECX_03;
              }
              if (DAT_1021ae2c == 0) {
                pCVar5 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         ((int)local_18 * 0x84);
                iVar7 = 1;
                in_ECX[1] = *(uint *)(pCVar5 + 0x10212a60);
                *in_ECX = *(uint *)(pCVar5 + 0x10212a10);
                in_ECX[2] = *(uint *)(pCVar5 + 0x10212a14);
                goto LAB_10044fa3;
              }
              if (DAT_1021ae2c == 1) {
                in_ECX[1] = puVar8[-1];
                in_ECX[2] = puVar8[-0x14];
                *in_ECX = puVar8[-0x15];
                if (DAT_1021ae3c == 0) {
                  local_20 = (undefined1 *)0x1;
                }
                else {
                  pCStack_54 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *
                               )0x10044acf;
                  local_20 = (undefined1 *)FUN_10046330();
                  pCVar5 = extraout_ECX_04;
                  if (local_20 == (undefined1 *)0x0) goto LAB_10044f63;
                }
                if (DAT_1021ae44 == 0) {
                  puVar3 = (undefined1 *)0x1;
                }
                else {
                  local_1c = (undefined1 *)0x0;
                  if (DAT_1021ae4c == 0) {
                    uVar6 = 0;
                    do {
                      pCStack_54 = &local_11;
                      iVar7 = FUN_10045060((&DAT_101e24a0)[(uint)uVar6 * 3],0x23);
                      pCVar5 = this_00;
                      if (iVar7 != 0) {
                        local_1c = (undefined1 *)0x1;
                        puVar3 = local_1c;
                        if (DAT_1021ae54 == 0) goto LAB_10044c5e;
                        pCStack_54 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                      *)(uint)(byte)(&DAT_101e24a0)[(uint)uVar6 * 3];
                        ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::
                        Format(this_00,(wchar_t *)&DAT_1021ae14);
                        local_28 = (undefined1 *)&pCStack_54;
                        local_24 = (undefined1 *)&pCStack_54;
                        FUN_10034a50();
                        local_8._0_1_ = 7;
                        goto LAB_10044c3f;
                      }
                      uVar6 = uVar6 + 1;
                    } while (uVar6 < 7);
                  }
                  else if (DAT_1021ae54 != 0) {
                    pCStack_54 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                  *)(uint)DAT_1021ae50;
                    ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                              (pCVar5,(wchar_t *)&DAT_1021ae14);
                    local_24 = (undefined1 *)&pCStack_54;
                    local_28 = (undefined1 *)&pCStack_54;
                    FUN_10034a50();
                    local_28 = &stack0xffffffa8;
                    local_8._0_1_ = 6;
                    FUN_10034a50(&DAT_1021ae10);
                    local_8 = (uint)local_8._1_3_ << 8;
                    FUN_10033a90();
                    pCVar5 = extraout_ECX_05;
                  }
                  puVar3 = local_1c;
                  if (DAT_1021ae48 != 0) {
                    if (DAT_1021ae54 != 0) {
                      pCStack_54 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                    *)(uint)DAT_1021ae50;
                      ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::
                      Format(pCVar5,(wchar_t *)&DAT_1021ae14);
                      local_28 = (undefined1 *)&pCStack_54;
                      local_24 = (undefined1 *)&pCStack_54;
                      FUN_10034a50();
                      local_24 = &stack0xffffffa8;
                      local_8._0_1_ = 8;
                      FUN_10034a50(&DAT_1021ae10);
                      local_8 = (uint)local_8._1_3_ << 8;
                      FUN_10033a90();
                    }
                    pCStack_54 = &local_11;
                    iVar7 = FUN_10045060(DAT_1021ae50,0x23);
                    pCVar5 = this_01;
                    if (iVar7 == 0) {
                      puVar3 = local_1c;
                      if (DAT_1021ae54 != 0) {
                        pCStack_54 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                      *)(uint)DAT_1021ae50;
                        ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::
                        Format(this_01,(wchar_t *)&DAT_1021ae14);
                        local_28 = (undefined1 *)&pCStack_54;
                        local_24 = (undefined1 *)&pCStack_54;
                        FUN_10034a50();
                        local_8._0_1_ = 10;
                        goto LAB_10044c3f;
                      }
                    }
                    else {
                      local_1c = (undefined1 *)0x1;
                      puVar3 = local_1c;
                      if (DAT_1021ae54 != 0) {
                        pCStack_54 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                      *)(uint)DAT_1021ae50;
                        ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::
                        Format(this_01,(wchar_t *)&DAT_1021ae14);
                        local_28 = (undefined1 *)&pCStack_54;
                        local_24 = (undefined1 *)&pCStack_54;
                        FUN_10034a50();
                        local_8._0_1_ = 9;
LAB_10044c3f:
                        local_24 = &stack0xffffffa8;
                        FUN_10034a50(&DAT_1021ae10);
                        local_8 = (uint)local_8._1_3_ << 8;
                        FUN_10033a90();
                        puVar3 = local_1c;
                        pCVar5 = extraout_ECX_06;
                      }
                    }
                  }
                }
LAB_10044c5e:
                if ((local_20 != (undefined1 *)0x0) && (puVar3 != (undefined1 *)0x0)) {
                  if (DAT_1021ae70 == 0) {
                    pCStack_54 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                  *)(puVar8 + -0x13);
                    FUN_10034740();
                    pCStack_54 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                  *)puVar8[-1];
                    local_40 = local_18;
                    local_34 = puVar8[-0x15];
                    local_30 = puVar8[-0x14];
                    local_3c = pCStack_54;
                    ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                              (pCStack_54,(wchar_t *)&local_2c,L"Device Name:%s, Output ID:%u");
                    piVar4 = (int *)FUN_10047c50();
                    pCStack_54 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                  *)&local_40;
                    FUN_10040570();
                    piVar1 = piVar4;
                    if (DAT_10206f0c != (int *)0x0) {
                      *DAT_10206f0c = (int)piVar4;
                      piVar1 = DAT_10206f08;
                    }
                    DAT_10206f08 = piVar1;
                    pCVar5 = this_03;
                    DAT_10206f0c = piVar4;
                    if (DAT_1021ae54 != 0) {
                      pCStack_54 = local_2c;
                      ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::
                      Format(this_03,(wchar_t *)&DAT_1021ae14);
                      local_28 = (undefined1 *)&pCStack_54;
                      local_24 = (undefined1 *)&pCStack_54;
                      FUN_10034a50();
                      local_8._0_1_ = 0xd;
                      goto LAB_10044f44;
                    }
                  }
                  else {
                    pCStack_54 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                  *)0x10044c84;
                    iVar7 = FUN_10045e90();
                    if (iVar7 == 0) {
                      pCVar5 = extraout_ECX_07;
                      if (DAT_1021ae54 != 0) {
                        local_28 = (undefined1 *)&pCStack_54;
                        pCStack_54 = extraout_ECX_07;
                        FUN_100352e0();
                        local_8._0_1_ = 0xb;
LAB_10044f44:
                        local_24 = &stack0xffffffa8;
                        goto LAB_10044f4a;
                      }
                    }
                    else {
                      pCStack_54 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                    *)(puVar8 + -0x13);
                      FUN_10034740();
                      pCStack_54 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                    *)puVar8[-1];
                      local_40 = local_18;
                      local_34 = puVar8[-0x15];
                      local_30 = puVar8[-0x14];
                      local_3c = pCStack_54;
                      ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::
                      Format(pCStack_54,(wchar_t *)&local_2c,L"Device Name:%s, Output ID:%u");
                      piVar4 = (int *)FUN_10047c50();
                      pCStack_54 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                    *)&local_40;
                      FUN_10040570();
                      piVar1 = piVar4;
                      if (DAT_10206f0c != (int *)0x0) {
                        *DAT_10206f0c = (int)piVar4;
                        piVar1 = DAT_10206f08;
                      }
                      DAT_10206f08 = piVar1;
                      pCVar5 = this_02;
                      DAT_10206f0c = piVar4;
                      if (DAT_1021ae54 != 0) {
                        pCStack_54 = local_2c;
                        ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::
                        Format(this_02,(wchar_t *)&DAT_1021ae14);
                        local_28 = (undefined1 *)&pCStack_54;
                        local_24 = (undefined1 *)&pCStack_54;
                        FUN_10034a50();
                        local_8._0_1_ = 0xc;
                        goto LAB_10044f44;
                      }
                    }
                  }
                }
              }
              else {
                pCStack_54 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                             (puVar8 + -0x13);
                FUN_10034740();
                pCStack_54 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                             puVar8[-1];
                local_40 = local_18;
                local_34 = puVar8[-0x15];
                local_30 = puVar8[-0x14];
                local_3c = pCStack_54;
                ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                          (pCStack_54,(wchar_t *)&local_2c,L"Device Name:%s, Output ID:%u");
                piVar4 = (int *)FUN_10047c50();
                pCStack_54 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                             &local_40;
                FUN_10040570();
                piVar1 = piVar4;
                if (DAT_10206f0c != (int *)0x0) {
                  *DAT_10206f0c = (int)piVar4;
                  piVar1 = DAT_10206f08;
                }
                DAT_10206f08 = piVar1;
                pCVar5 = this_04;
                DAT_10206f0c = piVar4;
                if (DAT_1021ae54 != 0) {
                  pCStack_54 = local_2c;
                  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                            (this_04,(wchar_t *)&DAT_1021ae14);
                  local_28 = (undefined1 *)&pCStack_54;
                  local_24 = (undefined1 *)&pCStack_54;
                  FUN_10034a50();
                  local_8._0_1_ = 0xe;
                  goto LAB_10044f44;
                }
              }
            }
LAB_10044f63:
            local_18 = local_18 + 1;
            puVar8 = puVar8 + 0x21;
          } while (local_18 < DAT_10212a0c);
          iVar7 = 0;
        }
LAB_10044fa3:
        if (DAT_1021ae54 == 1) {
          pCStack_54 = DAT_10206f10;
          ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                    (pCVar5,(wchar_t *)&DAT_1021ae14,L"Detect dispaly count:%d, %d!");
          local_28 = (undefined1 *)&pCStack_54;
          local_24 = (undefined1 *)&pCStack_54;
          FUN_10034a50();
          local_24 = &stack0xffffffa8;
          local_8._0_1_ = 0x10;
          FUN_10034a50(&DAT_1021ae10);
          local_8 = (uint)local_8._1_3_ << 8;
          FUN_10033a90();
        }
        if (iVar7 == 0) {
          pCStack_54 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       0x10045003;
          iVar7 = FUN_10045990();
        }
        goto LAB_10045005;
      }
    }
    else if (DAT_1021ae54 != 0) {
      pCStack_54 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)0x101e6cec;
      ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                (pCVar5,(wchar_t *)&DAT_1021ae14);
      local_20 = (undefined1 *)&pCStack_54;
      local_1c = (undefined1 *)&pCStack_54;
      FUN_10034a50();
      local_1c = &stack0xffffffa8;
      local_8._0_1_ = 2;
      FUN_10034a50(&DAT_1021ae10);
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_10033a90();
      iVar7 = 0;
      goto LAB_10045005;
    }
  }
  else if (DAT_1021ae54 == 1) {
    pCStack_54 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)0x101e6cbc;
    ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
              (this,(wchar_t *)&DAT_1021ae14);
    local_20 = (undefined1 *)&pCStack_54;
    local_1c = (undefined1 *)&pCStack_54;
    FUN_10034a50();
    local_1c = &stack0xffffffa8;
    local_8._0_1_ = 1;
    FUN_10034a50(&DAT_1021ae10);
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_10033a90();
    iVar7 = 0;
    goto LAB_10045005;
  }
  iVar7 = 0;
LAB_10045005:
  local_8 = 0xffffffff;
  pCStack_54 = local_2c + -0x10;
  LOCK();
  pCVar5 = local_2c + -4;
  iVar2 = *(int *)pCVar5;
  *(int *)pCVar5 = *(int *)pCVar5 + -1;
  UNLOCK();
  if (iVar2 == 1 || iVar2 + -1 < 0) {
    (**(code **)(**(int **)pCStack_54 + 4))();
  }
  pCStack_54 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
               (local_38 + -0x10);
  LOCK();
  piVar1 = (int *)(local_38 + -4);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1 || iVar2 + -1 < 0) {
    (**(code **)(**(int **)pCStack_54 + 4))();
  }
  ExceptionList = local_10;
  return iVar7;
}

