// rea decompile_all
// name: FUN_10046b90
// address: 0x10046b90
// body: available
// range: 0x10046b90-0x1004786c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10047868 to 0x100351a0 FUN_100351a0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void FUN_10046b90(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  int *piVar5;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_00;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_01;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_02;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_03;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_04;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_05;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_06;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_07;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_08;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_00;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_09;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_10;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_01;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *pCVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  bool bVar10;
  uint *local_1cc;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *local_1c4;
  uint local_1c0;
  int local_1bc;
  undefined4 *local_1b8;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *local_1b4;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *local_1b0;
  uint local_1ac;
  uint local_1a8;
  undefined4 *local_1a4;
  undefined1 *local_1a0;
  undefined1 *local_19c;
  undefined4 local_198 [18];
  undefined4 local_150;
  uint local_14c;
  uint local_148;
  uint local_144;
  undefined4 local_140 [11];
  undefined4 local_114 [64];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101a189d;
  local_10 = ExceptionList;
  local_14 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  _memset(local_114,0,0x100);
  local_1c4 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)0x0;
  local_1ac = 0;
  local_1a8 = 0;
  DAT_10212a0c = 0;
  _memset(&DAT_10212a10,0,0x8400);
  iVar1 = FUN_10003580(local_114,&local_1c4);
  if (iVar1 == 0) {
    if (local_1c4 != (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)0x0) {
      if (DAT_1021ae54 != 0) {
        ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                  (this,(wchar_t *)&DAT_1021ae14);
        local_1a0 = &stack0xfffffe1c;
        local_1b0 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                    &stack0xfffffe1c;
        FUN_10034a50();
        local_1b0 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                    &stack0xfffffe18;
        local_8 = 1;
        FUN_10034a50(&DAT_1021ae10);
        local_8 = 0xffffffff;
        FUN_10033a90();
      }
      DAT_10212a0c = 0;
      local_1b0 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)0x0;
      if (local_1c4 != (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)0x0) {
        local_1b8 = local_114;
        local_1bc = 0;
        do {
          iVar1 = local_1bc;
          if (DAT_1021ae54 != 0) {
            ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                      (local_1b0,(wchar_t *)&DAT_1021ae14);
            local_1a0 = &stack0xfffffe1c;
            local_1a4 = (undefined4 *)&stack0xfffffe1c;
            FUN_10034a50();
            local_1a4 = (undefined4 *)&stack0xfffffe18;
            local_8 = 2;
            FUN_10034a50(&DAT_1021ae10);
            local_8 = 0xffffffff;
            FUN_10033a90();
          }
          local_1ac = 0;
          iVar2 = FUN_10005260(*local_1b8,0);
          if (iVar2 == 0) {
            if (DAT_1021ae54 != 0) {
              ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                        (this_00,(wchar_t *)&DAT_1021ae14);
              local_1a0 = &stack0xfffffe1c;
              local_1a4 = (undefined4 *)&stack0xfffffe1c;
              FUN_10034a50();
              local_1a4 = (undefined4 *)&stack0xfffffe18;
              local_8 = 4;
              FUN_10034a50(&DAT_1021ae10);
              local_8 = 0xffffffff;
              FUN_10033a90();
            }
            if (local_1ac != 0) {
              puVar3 = (undefined4 *)FUN_10188e7e();
              local_1a4 = puVar3;
              if (puVar3 == (undefined4 *)0x0) {
                if (DAT_1021ae54 != 0) {
                  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                            (this_01,(wchar_t *)&DAT_1021ae14);
                  local_1a4 = (undefined4 *)&stack0xfffffe1c;
                  local_1a0 = &stack0xfffffe1c;
                  FUN_10034a50();
                  local_8 = 5;
                  goto LAB_10046e05;
                }
              }
              else {
                _memset(puVar3,0,local_1ac << 4);
                *puVar3 = 0x10010;
                iVar2 = FUN_10005260(*local_1b8,puVar3,&local_1ac,1);
                if (iVar2 == 0) {
                  local_1c0 = 0;
                  if (local_1ac != 0) {
                    local_1b4 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                 *)(puVar3 + 3);
                    local_1cc = &DAT_10212a64;
                    do {
                      if (DAT_1021ae54 != 0) {
                        ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::
                        Format(local_1b4,(wchar_t *)&DAT_1021ae14,
                               L"\n nDisplayIds = %u displayId: =%u Connect Type:%d isConnected:%d \n"
                               ,local_1c0,*(undefined4 *)(local_1b4 + -4));
                        local_1a0 = &stack0xfffffe1c;
                        local_19c = &stack0xfffffe1c;
                        FUN_10034a50();
                        local_19c = &stack0xfffffe18;
                        local_8 = 7;
                        FUN_10034a50(&DAT_1021ae10);
                        local_8 = 0xffffffff;
                        FUN_10033a90();
                      }
                      _memset(local_198,0,0x84);
                      puVar3 = local_1b8;
                      local_198[0] = *local_1b8;
                      local_148 = *(uint *)(local_1b4 + -4);
                      local_150 = 0x10010;
                      local_14c = *(uint *)(local_1b4 + -8);
                      local_144 = local_144 ^ (*(uint *)local_1b4 ^ local_144) & 1;
                      local_144 = local_144 ^ (*(uint *)local_1b4 ^ local_144) & 2;
                      local_144 = local_144 ^ (*(uint *)local_1b4 ^ local_144) & 4;
                      local_144 = local_144 ^ (*(uint *)local_1b4 ^ local_144) & 0x40;
                      iVar1 = FUN_10016ca0(*(uint *)(local_1b4 + -4),local_198 + 1);
                      if (iVar1 == 0) {
                        FUN_1000fc50();
                        local_140[0] = 0x1002c;
                        iVar1 = FUN_100105d0(local_198[1],local_148,local_140);
                        pCVar6 = this_04;
                        if (iVar1 == 0) {
LAB_100472fa:
                          if (DAT_1021ae54 != 0) {
                            ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                            ::Format(pCVar6,(wchar_t *)&DAT_1021ae14,
                                     L"Find display %d,  HGPU:0x%X m_unoutputID= %u m_hDisplay = 0x%X \n"
                                     ,DAT_10212a0c,*puVar3);
                            local_1a0 = &stack0xfffffe1c;
                            local_19c = &stack0xfffffe1c;
                            FUN_10034a50();
                            local_19c = &stack0xfffffe18;
                            local_8 = 0xd;
                            FUN_10034a50(&DAT_1021ae10);
                            local_8 = 0xffffffff;
                            FUN_10033a90();
                          }
                        }
                        else {
                          if (DAT_1021ae54 != 0) {
                            ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                            ::Format(this_04,(wchar_t *)&DAT_1021ae14,
                                     L"NvAPI_GetDisplayPortInfo() failed at index:%d.\nReturn Error : %d"
                                    );
                            local_1a0 = &stack0xfffffe1c;
                            local_19c = &stack0xfffffe1c;
                            FUN_10034a50();
                            local_8 = 9;
                            local_19c = &stack0xfffffe18;
                            FUN_10034a50(&DAT_1021ae10);
                            local_8 = 0xffffffff;
                            FUN_10033a90();
                          }
                          ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::
                          Format((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                  *)(local_144 & 1),(wchar_t *)&DAT_1021ae14,
                                 L"isDynamic:%d isMultiStreamRootNode:%d isConnected:%d\n",
                                 (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                  *)(local_144 & 1));
                          local_1a0 = &stack0xfffffe1c;
                          local_19c = &stack0xfffffe1c;
                          FUN_10034a50();
                          local_19c = &stack0xfffffe18;
                          local_8 = 10;
                          FUN_10034a50(&DAT_1021ae10);
                          local_8 = 0xffffffff;
                          FUN_10033a90();
                          if ((local_144 & 2) == 0) {
                            if (DAT_1021ae54 != 0) {
                              ATL::
                              CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::
                              Format(this_05,(wchar_t *)&DAT_1021ae14);
                              local_1a0 = &stack0xfffffe1c;
                              local_19c = &stack0xfffffe1c;
                              FUN_10034a50();
                              local_8 = 0xb;
LAB_100472d8:
                              local_19c = &stack0xfffffe18;
                              FUN_10034a50(&DAT_1021ae10);
                              local_8 = 0xffffffff;
                              FUN_10033a90();
                              pCVar6 = extraout_ECX;
                              goto LAB_100472fa;
                            }
                          }
                          else if (DAT_1021ae54 != 0) {
                            ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                            ::Format((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                      *)(*local_1cc & 1),(wchar_t *)&DAT_1021ae14,
                                     L"NvAPI_GetDisplayPortInfo() Fail isDynamic :%d, :isMultiStreamRootNode%d May Be Mst\n"
                                    );
                            local_1a0 = &stack0xfffffe1c;
                            local_19c = &stack0xfffffe1c;
                            FUN_10034a50();
                            local_8 = 0xc;
                            goto LAB_100472d8;
                          }
                        }
                        iVar2 = DAT_10212a0c;
                        iVar1 = DAT_10212a0c * 0x21;
                        _memset(&DAT_10212a10 + iVar1,0,0x84);
                        pCVar6 = local_1b4;
                        local_1a8 = 0;
                        DAT_10212a0c = iVar2 + 1;
                        bVar10 = DAT_1021ae54 != 0;
                        puVar3 = local_198;
                        puVar8 = &DAT_10212a10 + iVar1;
                        for (iVar2 = 0x21; iVar2 != 0; iVar2 = iVar2 + -1) {
                          *puVar8 = *puVar3;
                          puVar3 = puVar3 + 1;
                          puVar8 = puVar8 + 1;
                        }
                        if (bVar10) {
                          ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::
                          Format((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                  *)0x0,(wchar_t *)&DAT_1021ae14);
                          local_1a0 = &stack0xfffffe1c;
                          local_19c = &stack0xfffffe1c;
                          FUN_10034a50();
                          local_19c = &stack0xfffffe18;
                          local_8 = 0xe;
                          FUN_10034a50(&DAT_1021ae10);
                          local_8 = 0xffffffff;
                          FUN_10033a90();
                        }
                        iVar1 = FUN_1000ca00(*(uint *)(pCVar6 + -4));
                        if (iVar1 == 0) {
                          if (DAT_1021ae54 != 0) {
                            ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                            ::Format(this_06,(wchar_t *)&DAT_1021ae14);
                            local_1a0 = &stack0xfffffe1c;
                            local_19c = &stack0xfffffe1c;
                            FUN_10034a50();
                            local_19c = &stack0xfffffe18;
                            local_8 = 0x10;
                            FUN_10034a50(&DAT_1021ae10);
                            local_8 = 0xffffffff;
                            FUN_10033a90();
                          }
                          if (local_1a8 != 0) {
                            puVar4 = (undefined1 *)FUN_10188e7e();
                            local_1a0 = puVar4;
                            if (puVar4 == (undefined1 *)0x0) {
                              if (DAT_1021ae54 != 0) {
                                ATL::
                                CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::
                                Format(this_07,(wchar_t *)&DAT_1021ae14);
                                local_1a0 = &stack0xfffffe1c;
                                local_19c = &stack0xfffffe1c;
                                FUN_10034a50();
                                local_8 = 0x11;
                                goto LAB_1004710c;
                              }
                            }
                            else {
                              _memset(puVar4,0,local_1a8 * 0x70);
                              *local_1a4 = 0x10070;
                              iVar1 = FUN_1000ca00(*(uint *)(pCVar6 + -4),puVar4,&local_1a8);
                              if (iVar1 == 0) {
                                pCVar6 = this_08;
                                if (DAT_1021ae54 != 0) {
                                  ATL::
                                  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                  ::Format(this_08,(wchar_t *)&DAT_1021ae14);
                                  local_19c = &stack0xfffffe1c;
                                  FUN_10034a50();
                                  local_8 = 0x13;
                                  FUN_10034a50(&DAT_1021ae10);
                                  local_8 = 0xffffffff;
                                  FUN_10033a90();
                                  pCVar6 = extraout_ECX_00;
                                }
                                uVar7 = 0;
                                uVar9 = local_1a8;
                                if (local_1a8 != 0) {
                                  do {
                                    iVar1 = local_1bc;
                                    if (DAT_1021ae54 != 0) {
                                      ATL::
                                      CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                      ::Format(pCVar6,(wchar_t *)&DAT_1021ae14,
                                               L"DP Node %d Info: version %d,  displayId:0x%X flags= %u nodeType = 0x%X \n"
                                               ,uVar7,*(undefined4 *)(puVar4 + local_1bc),
                                               *(undefined4 *)(puVar4 + local_1bc + 4),
                                               *(undefined4 *)(puVar4 + local_1bc + 0x60));
                                      local_19c = &stack0xfffffe1c;
                                      FUN_10034a50();
                                      local_19c = &stack0xfffffe18;
                                      local_8 = 0x14;
                                      FUN_10034a50(&DAT_1021ae10);
                                      local_8 = 0xffffffff;
                                      FUN_10033a90();
                                      ATL::
                                      CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                      ::Format(this_09,(wchar_t *)&DAT_1021ae14,
                                               L"DP Node %d Info: auxAddress.hopCount%d  Addreess\n"
                                               ,uVar7,*(undefined4 *)(puVar4 + iVar1 + 0x10));
                                      uVar9 = 0;
                                      if (*(int *)(puVar4 + local_1bc + 0x10) != 0) {
                                        do {
                                          piVar5 = (int *)FUN_10048e90();
                                          if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
                                            FUN_100351a0();
                                          }
                                          iVar1 = (**(code **)(*piVar5 + 0xc))();
                                          local_19c = (undefined1 *)(iVar1 + 0x10);
                                          local_8 = 0x15;
                                          ATL::
                                          CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                          ::Format(this_10,(wchar_t *)&local_19c);
                                          puVar4 = local_19c;
                                          FUN_10034490();
                                          local_8 = 0xffffffff;
                                          LOCK();
                                          piVar5 = (int *)(puVar4 + -4);
                                          iVar1 = *piVar5;
                                          *piVar5 = *piVar5 + -1;
                                          UNLOCK();
                                          if (iVar1 == 1 || iVar1 + -1 < 0) {
                                            (**(code **)(**(int **)(puVar4 + -0x10) + 4))();
                                          }
                                          uVar9 = uVar9 + 1;
                                          puVar4 = local_1a0;
                                        } while (uVar9 < *(uint *)(local_1a0 + local_1bc + 0x10));
                                      }
                                      FUN_10034490();
                                      local_19c = &stack0xfffffe1c;
                                      FUN_10034a50();
                                      local_19c = &stack0xfffffe18;
                                      local_8 = 0x16;
                                      FUN_10034a50(&DAT_1021ae10);
                                      local_8 = 0xffffffff;
                                      FUN_10033a90();
                                      uVar9 = local_1a8;
                                      pCVar6 = extraout_ECX_01;
                                    }
                                    uVar7 = uVar7 + 1;
                                  } while (uVar7 < uVar9);
                                }
                                FID_conflict__free(puVar4);
                              }
                              else if (DAT_1021ae54 != 0) {
                                ATL::
                                CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::
                                Format(this_08,(wchar_t *)&DAT_1021ae14);
                                local_1a0 = &stack0xfffffe1c;
                                local_19c = &stack0xfffffe1c;
                                FUN_10034a50();
                                local_8 = 0x12;
                                goto LAB_1004710c;
                              }
                            }
                          }
                        }
                        else if (DAT_1021ae54 != 0) {
                          ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::
                          Format(this_06,(wchar_t *)&DAT_1021ae14);
                          local_1a0 = &stack0xfffffe1c;
                          local_19c = &stack0xfffffe1c;
                          FUN_10034a50();
                          local_8 = 0xf;
                          goto LAB_1004710c;
                        }
                      }
                      else if (DAT_1021ae54 != 0) {
                        ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::
                        Format(this_03,(wchar_t *)&DAT_1021ae14,
                               L"\nNvAPI_DISP_GetDisplayHandleFromDisplayId() failed at index:%d.\nReturn Error : %d"
                              );
                        local_1a0 = &stack0xfffffe1c;
                        local_19c = &stack0xfffffe1c;
                        FUN_10034a50();
                        local_8 = 8;
LAB_1004710c:
                        local_19c = &stack0xfffffe18;
                        FUN_10034a50(&DAT_1021ae10);
                        local_8 = 0xffffffff;
                        FUN_10033a90();
                      }
                      local_1c0 = local_1c0 + 1;
                      local_1cc = local_1cc + 0x21;
                      local_1b4 = local_1b4 + 0x10;
                      iVar1 = local_1bc;
                      puVar3 = local_1a4;
                    } while (local_1c0 < local_1ac);
                  }
                }
                else if (DAT_1021ae54 != 0) {
                  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                            (this_02,(wchar_t *)&DAT_1021ae14);
                  local_1a4 = (undefined4 *)&stack0xfffffe1c;
                  local_1a0 = &stack0xfffffe1c;
                  FUN_10034a50();
                  local_1a4 = (undefined4 *)&stack0xfffffe18;
                  local_8 = 6;
                  FUN_10034a50(&DAT_1021ae10);
                  local_8 = 0xffffffff;
                  FUN_10033a90();
                }
                FID_conflict__free(puVar3);
              }
            }
          }
          else if (DAT_1021ae54 != 0) {
            ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                      (this_00,(wchar_t *)&DAT_1021ae14);
            local_1a0 = &stack0xfffffe1c;
            local_1a4 = (undefined4 *)&stack0xfffffe1c;
            FUN_10034a50();
            local_8 = 3;
LAB_10046e05:
            local_1a4 = (undefined4 *)&stack0xfffffe18;
            FUN_10034a50(&DAT_1021ae10);
            local_8 = 0xffffffff;
            FUN_10033a90();
          }
          local_1bc = iVar1 + 0x70;
          local_1b0 = local_1b0 + 1;
          local_1b8 = local_1b8 + 1;
        } while (local_1b0 < local_1c4);
      }
    }
  }
  else if (DAT_1021ae54 != 0) {
    ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
              (this,(wchar_t *)&DAT_1021ae14);
    local_1a0 = &stack0xfffffe1c;
    local_1b0 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                &stack0xfffffe1c;
    FUN_10034a50();
    local_1b0 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                &stack0xfffffe18;
    local_8 = 0;
    FUN_10034a50(&DAT_1021ae10);
    local_8 = 0xffffffff;
    FUN_10033a90();
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

