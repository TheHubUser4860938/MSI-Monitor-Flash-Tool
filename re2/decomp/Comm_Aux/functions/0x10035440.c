// rea decompile_all
// name: FUN_10035440
// address: 0x10035440
// body: available
// range: 0x10035440-0x10036025 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100354aa to 0x100351a0 FUN_100351a0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_10035440(void)

{
  int *piVar1;
  HMODULE pHVar2;
  FARPROC pFVar3;
  void *pvVar4;
  int iVar5;
  undefined1 *puVar6;
  int *in_ECX;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_00;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_00;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_01;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_02;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_03;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_01;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_02;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_03;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_04;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_05;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_06;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_07;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_08;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_04;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_05;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_09;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_10;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_11;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *pCVar7;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_06;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_07;
  ushort uVar8;
  undefined1 *puVar9;
  int iVar10;
  int local_50;
  int local_4c;
  int local_40;
  undefined1 *local_3c;
  undefined1 *local_38;
  undefined4 *local_34;
  undefined4 *local_30;
  undefined1 *local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *local_20;
  undefined1 *local_1c;
  undefined1 *local_18;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101a0680;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[0xf] = 0;
  FUN_10036030();
  local_8 = 0;
  FUN_10037cf0();
  piVar1 = (int *)FUN_10048e90();
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_100351a0();
  }
  local_30 = (undefined4 *)(**(code **)(*piVar1 + 0xc))();
  local_34 = local_30 + 4;
  local_8 = CONCAT31(local_8._1_3_,1);
  pHVar2 = LoadLibraryW(L"atiadlxx.dll");
  in_ECX[7] = (int)pHVar2;
  pCVar7 = extraout_ECX;
  if (pHVar2 == (HMODULE)0x0) {
    pHVar2 = LoadLibraryW(L"atiadlxy.dll");
    in_ECX[7] = (int)pHVar2;
    pCVar7 = extraout_ECX_00;
  }
  if ((HMODULE)in_ECX[7] == (HMODULE)0x0) {
    if (DAT_1021ae54 == 1) {
      ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                (pCVar7,(wchar_t *)&DAT_1021ae14);
      local_2c = &stack0xffffff94;
      local_28 = &stack0xffffff94;
      FUN_10034a50();
      local_8._0_1_ = 2;
      local_28 = &stack0xffffff90;
LAB_10035f89:
      FUN_10034a50(&DAT_1021ae10);
      local_8 = CONCAT31(local_8._1_3_,1);
      FUN_10033a90();
    }
  }
  else {
    in_ECX[0xe] = 0;
    pFVar3 = GetProcAddress((HMODULE)in_ECX[7],"ADL_Main_Control_Create");
    *in_ECX = (int)pFVar3;
    pFVar3 = GetProcAddress((HMODULE)in_ECX[7],"ADL_Main_Control_Destroy");
    in_ECX[1] = (int)pFVar3;
    pFVar3 = GetProcAddress((HMODULE)in_ECX[7],"ADL_Adapter_NumberOfAdapters_Get");
    in_ECX[2] = (int)pFVar3;
    pFVar3 = GetProcAddress((HMODULE)in_ECX[7],"ADL_Adapter_AdapterInfo_Get");
    in_ECX[3] = (int)pFVar3;
    pFVar3 = GetProcAddress((HMODULE)in_ECX[7],"ADL_Display_DisplayInfo_Get");
    in_ECX[4] = (int)pFVar3;
    if ((((*in_ECX == 0) || (in_ECX[1] == 0)) || (in_ECX[2] == 0)) ||
       ((in_ECX[3] == 0 || (pFVar3 == (FARPROC)0x0)))) {
      if (DAT_1021ae54 == 1) {
        ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                  (this,(wchar_t *)&DAT_1021ae14);
        local_3c = &stack0xffffff94;
        local_38 = &stack0xffffff94;
        FUN_10034a50();
        local_38 = &stack0xffffff90;
        local_8._0_1_ = 3;
        goto LAB_10035f89;
      }
    }
    else {
      pFVar3 = GetProcAddress((HMODULE)in_ECX[7],"ADL_Display_NativeAUXChannel_Access");
      in_ECX[5] = (int)pFVar3;
      if (pFVar3 == (FARPROC)0x0) {
        if (DAT_1021ae54 == 1) {
          ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                    (this_00,(wchar_t *)&DAT_1021ae14);
          local_2c = &stack0xffffff94;
          local_28 = &stack0xffffff94;
          FUN_10034a50();
          local_8._0_1_ = 4;
          local_28 = &stack0xffffff90;
          goto LAB_10035f89;
        }
      }
      else {
        pFVar3 = GetProcAddress((HMODULE)in_ECX[7],"ADL_Display_DDCBlockAccess_Get");
        in_ECX[6] = (int)pFVar3;
        if (in_ECX[5] == 0) {
          if (DAT_1021ae54 == 1) {
            ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                      (this_01,(wchar_t *)&DAT_1021ae14);
            local_2c = &stack0xffffff94;
            local_28 = &stack0xffffff94;
            FUN_10034a50();
            local_8._0_1_ = 5;
            local_28 = &stack0xffffff90;
            goto LAB_10035f89;
          }
        }
        else {
          iVar10 = (*(code *)*in_ECX)();
          if (iVar10 == 0) {
            piVar1 = in_ECX + 10;
            iVar10 = (*(code *)in_ECX[2])();
            if (iVar10 == 0) {
              in_ECX[0xf] = 1;
              if (DAT_1021ae54 == 1) {
                ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                          (this_03,(wchar_t *)&DAT_1021ae14);
                local_2c = &stack0xffffff94;
                local_28 = &stack0xffffff94;
                FUN_10034a50();
                local_28 = &stack0xffffff90;
                local_8._0_1_ = 8;
                FUN_10034a50(&DAT_1021ae10);
                local_8 = CONCAT31(local_8._1_3_,1);
                FUN_10033a90();
              }
              if (0 < *piVar1) {
                pvVar4 = (void *)FUN_10188e7e();
                in_ECX[8] = (int)pvVar4;
                _memset(pvVar4,0,*piVar1 * 0x624);
                (*(code *)in_ECX[3])(in_ECX[8],*piVar1 * 0x624);
              }
              in_ECX[0xe] = 0;
              local_2c = (undefined1 *)0x0;
              if (0 < *piVar1) {
                local_20 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)0x0
                ;
                do {
                  in_ECX[0xb] = *(int *)(local_20 + in_ECX[8] + 4);
                  pvVar4 = (void *)in_ECX[9];
                  if (pvVar4 != (void *)0x0) {
                    FID_conflict__free(pvVar4);
                    in_ECX[9] = 0;
                  }
                  iVar10 = (*(code *)in_ECX[4])
                                     (*(undefined4 *)(local_20 + in_ECX[8] + 4),in_ECX + 0xc);
                  if (iVar10 == 0) {
                    pCVar7 = extraout_ECX_01;
                    if (DAT_1021ae54 == 1) {
                      iVar10 = in_ECX[8];
                      ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::
                      Format(local_20,(wchar_t *)&DAT_1021ae14,
                             L"Adapter_Index: 0x%X, Adpater_BusNo: 0x%X, Adpater_DeviceNo: 0x%X, Adpater_FunNo: 0x%X, Adapter_VendorID: 0x%X\n Display number: 0x%X"
                             ,in_ECX[0xb],*(undefined4 *)(local_20 + iVar10 + 0x108),
                             *(undefined4 *)(local_20 + iVar10 + 0x10c),
                             *(undefined4 *)(local_20 + iVar10 + 0x110));
                      local_28 = &stack0xffffff94;
                      local_24 = &stack0xffffff94;
                      FUN_10034a50();
                      local_24 = &stack0xffffff90;
                      local_8._0_1_ = 9;
                      FUN_10034a50(&DAT_1021ae10);
                      local_8 = CONCAT31(local_8._1_3_,1);
                      FUN_10033a90();
                      pCVar7 = extraout_ECX_02;
                    }
                    iVar10 = 0;
                    if (0 < in_ECX[0xc]) {
                      local_24 = &DAT_10211ff8;
                      local_1c = (undefined1 *)0x0;
                      do {
                        puVar9 = local_1c;
                        if (DAT_1021ae54 == 1) {
                          iVar5 = in_ECX[9];
                          ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::
                          Format(pCVar7,(wchar_t *)&DAT_1021ae14,
                                 L"iNumDisplays: 0x%X,  iDisplayType: 0x%X, iDisplayOutputType: 0x%X\n iDisplayConnector: 0x%X, iDisplayInfoMask:0x%X, iDisplayInfoValue:0x%X\r\n"
                                 ,iVar10,*(undefined4 *)(local_1c + iVar5 + 0x214),
                                 *(undefined4 *)(local_1c + iVar5 + 0x218),
                                 *(undefined4 *)(local_1c + iVar5 + 0x21c));
                          local_28 = &stack0xffffff94;
                          local_18 = &stack0xffffff94;
                          FUN_10034a50();
                          local_18 = &stack0xffffff90;
                          local_8._0_1_ = 10;
                          FUN_10034a50(&DAT_1021ae10);
                          local_8 = CONCAT31(local_8._1_3_,1);
                          FUN_10033a90();
                        }
                        pCVar7 = *(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                   **)(puVar9 + in_ECX[9] + 0x224);
                        if (((byte)pCVar7 & 3) == 3) {
                          if (DAT_1021ae54 == 1) {
                            ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                            ::Format(pCVar7,(wchar_t *)&DAT_1021ae14,
                                     L"iNumDisplays: 0x%X,  iDisplayInfoValue:0x%X Check Success \r\n"
                                    );
                            local_28 = &stack0xffffff94;
                            local_18 = &stack0xffffff94;
                            FUN_10034a50();
                            local_18 = &stack0xffffff90;
                            local_8._0_1_ = 0xc;
                            FUN_10034a50(&DAT_1021ae10);
                            local_8 = CONCAT31(local_8._1_3_,1);
                            FUN_10033a90();
                          }
                          pCVar7 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                    *)in_ECX[0xb];
                          if (pCVar7 == *(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                          **)(puVar9 + in_ECX[9] + 8)) {
                            if (DAT_1021ae54 == 1) {
                              ATL::
                              CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::
                              Format(pCVar7,(wchar_t *)&DAT_1021ae14,
                                     L"iNumDisplays: 0x%X,  iAdapterIndex:0x%X  lpAdlDisplayInfo[j].displayID.iDisplayLogicalAdapterIndex :0x%X Check Success\r\n"
                                     ,iVar10);
                              local_28 = &stack0xffffff94;
                              local_18 = &stack0xffffff94;
                              FUN_10034a50();
                              local_18 = &stack0xffffff90;
                              local_8._0_1_ = 0xe;
                              FUN_10034a50(&DAT_1021ae10);
                              local_8 = CONCAT31(local_8._1_3_,1);
                              FUN_10033a90();
                              pCVar7 = extraout_ECX_05;
                            }
                            in_ECX[0xd] = *(int *)(puVar9 + in_ECX[9]);
                            if (DAT_1021ae54 == 1) {
                              ATL::
                              CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::
                              Format(pCVar7,(wchar_t *)&DAT_1021ae14,
                                     L"Find iNumDisplays: 0x%X,   iAdapterIndex:0x%X, iDisplayIndex:0x%X"
                                     ,iVar10);
                              local_28 = &stack0xffffff94;
                              local_18 = &stack0xffffff94;
                              FUN_10034a50();
                              local_18 = &stack0xffffff90;
                              local_8._0_1_ = 0xf;
                              FUN_10034a50(&DAT_1021ae10);
                              local_8 = CONCAT31(local_8._1_3_,1);
                              FUN_10033a90();
                            }
                            FUN_10188f3a(local_24,0x80);
                            if (DAT_1021ae2c == 0) {
                              in_ECX[0xe] = 1;
                              goto LAB_10035f26;
                            }
                            if (DAT_1021ae3c == 0) {
                              local_28 = (undefined1 *)0x1;
                              pCVar7 = extraout_ECX_06;
                            }
                            else {
                              local_28 = (undefined1 *)FUN_10037830();
                              pCVar7 = extraout_ECX_07;
                              if (local_28 == (undefined1 *)0x0) goto LAB_10035ccd;
                            }
                            if (DAT_1021ae44 == 0) {
                              puVar6 = (undefined1 *)0x1;
                            }
                            else {
                              local_18 = (undefined1 *)0x0;
                              if (DAT_1021ae4c == 0) {
                                uVar8 = 0;
                                do {
                                  iVar5 = FUN_100364f0((&DAT_101e22dc)[(uint)uVar8 * 3],0x23);
                                  pCVar7 = this_04;
                                  if (iVar5 != 0) {
                                    local_18 = (undefined1 *)0x1;
                                    puVar6 = (undefined1 *)0x1;
                                    if (DAT_1021ae54 == 0) goto LAB_10035c6c;
                                    ATL::
                                    CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                    ::Format(this_04,(wchar_t *)&DAT_1021ae14);
                                    local_3c = &stack0xffffff94;
                                    local_38 = &stack0xffffff94;
                                    FUN_10034a50();
                                    local_8._0_1_ = 0x11;
                                    goto LAB_10035c4d;
                                  }
                                  uVar8 = uVar8 + 1;
                                } while (uVar8 < 7);
                              }
                              else if (DAT_1021ae54 != 0) {
                                ATL::
                                CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::
                                Format(pCVar7,(wchar_t *)&DAT_1021ae14);
                                local_38 = &stack0xffffff94;
                                local_3c = &stack0xffffff94;
                                FUN_10034a50();
                                local_3c = &stack0xffffff90;
                                local_8._0_1_ = 0x10;
                                FUN_10034a50(&DAT_1021ae10);
                                local_8 = CONCAT31(local_8._1_3_,1);
                                FUN_10033a90();
                                pCVar7 = extraout_ECX_08;
                              }
                              puVar6 = local_18;
                              if (DAT_1021ae48 != 0) {
                                if (DAT_1021ae54 != 0) {
                                  ATL::
                                  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                  ::Format(pCVar7,(wchar_t *)&DAT_1021ae14);
                                  local_3c = &stack0xffffff94;
                                  local_38 = &stack0xffffff94;
                                  FUN_10034a50();
                                  local_38 = &stack0xffffff90;
                                  local_8._0_1_ = 0x12;
                                  FUN_10034a50(&DAT_1021ae10);
                                  local_8 = CONCAT31(local_8._1_3_,1);
                                  FUN_10033a90();
                                }
                                iVar5 = FUN_100364f0(DAT_1021ae50,0x23);
                                pCVar7 = this_05;
                                if (iVar5 == 0) {
                                  puVar6 = local_18;
                                  if (DAT_1021ae54 != 0) {
                                    ATL::
                                    CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                    ::Format(this_05,(wchar_t *)&DAT_1021ae14);
                                    local_3c = &stack0xffffff94;
                                    local_38 = &stack0xffffff94;
                                    FUN_10034a50();
                                    local_8._0_1_ = 0x14;
                                    goto LAB_10035c4d;
                                  }
                                }
                                else {
                                  local_18 = (undefined1 *)0x1;
                                  puVar6 = (undefined1 *)0x1;
                                  if (DAT_1021ae54 != 0) {
                                    ATL::
                                    CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                    ::Format(this_05,(wchar_t *)&DAT_1021ae14);
                                    local_3c = &stack0xffffff94;
                                    local_38 = &stack0xffffff94;
                                    FUN_10034a50();
                                    local_8._0_1_ = 0x13;
LAB_10035c4d:
                                    local_38 = &stack0xffffff90;
                                    FUN_10034a50(&DAT_1021ae10);
                                    local_8 = CONCAT31(local_8._1_3_,1);
                                    FUN_10033a90();
                                    puVar6 = local_18;
                                    pCVar7 = extraout_ECX_09;
                                  }
                                }
                              }
                            }
LAB_10035c6c:
                            puVar9 = local_1c;
                            if ((local_28 != (undefined1 *)0x0) && (puVar6 != (undefined1 *)0x0)) {
                              if (DAT_1021ae70 == 0) {
                                FUN_10034740();
                                FUN_10034740();
                                ATL::
                                CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::
                                Format((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                        *)in_ECX[9],(wchar_t *)&local_40,
                                       L"Monitor Name:%s, DisplayManufacturerName:%s, Adapter ID:%d, DisplayID:%d"
                                       ,local_50,local_4c);
                                FUN_10037c50();
                                pCVar7 = this_07;
                                if (DAT_1021ae54 != 0) {
                                  ATL::
                                  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                  ::Format(this_07,(wchar_t *)&DAT_1021ae14);
                                  local_3c = &stack0xffffff94;
                                  local_38 = &stack0xffffff94;
                                  FUN_10034a50();
                                  local_38 = &stack0xffffff90;
                                  local_8._0_1_ = 0x17;
LAB_10035924:
                                  FUN_10034a50(&DAT_1021ae10);
                                  local_8 = CONCAT31(local_8._1_3_,1);
                                  FUN_10033a90();
                                  pCVar7 = extraout_ECX_03;
                                }
                              }
                              else {
                                iVar5 = FUN_10037390();
                                puVar9 = local_1c;
                                if (iVar5 == 0) {
                                  pCVar7 = extraout_ECX_10;
                                  if (DAT_1021ae54 != 0) {
                                    local_3c = &stack0xffffff94;
                                    FUN_100352e0();
                                    local_38 = &stack0xffffff90;
                                    local_8._0_1_ = 0x15;
                                    FUN_10034a50(&DAT_1021ae10);
                                    local_8 = CONCAT31(local_8._1_3_,1);
                                    FUN_10033a90();
                                    pCVar7 = extraout_ECX_11;
                                    puVar9 = local_1c;
                                  }
                                }
                                else {
                                  FUN_10034740();
                                  FUN_10034740();
                                  ATL::
                                  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                  ::Format((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                            *)in_ECX[9],(wchar_t *)&local_40,
                                           L"Monitor Name:%s, DisplayManufacturerName:%s, Adapter ID:%d, DisplayID:%d"
                                           ,local_50,local_4c);
                                  FUN_10037c50();
                                  pCVar7 = this_06;
                                  if (DAT_1021ae54 != 0) {
                                    ATL::
                                    CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                    ::Format(this_06,(wchar_t *)&DAT_1021ae14);
                                    local_3c = &stack0xffffff94;
                                    local_38 = &stack0xffffff94;
                                    FUN_10034a50();
                                    local_38 = &stack0xffffff90;
                                    local_8._0_1_ = 0x16;
                                    goto LAB_10035924;
                                  }
                                }
                              }
                            }
                          }
                          else if (DAT_1021ae54 == 1) {
                            ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                            ::Format(pCVar7,(wchar_t *)&DAT_1021ae14,
                                     L"iNumDisplays: 0x%X,  iAdapterIndex:0x%X  lpAdlDisplayInfo[j].displayID.iDisplayLogicalAdapterIndex :0x%X Discard\r\n"
                                     ,iVar10);
                            local_28 = &stack0xffffff94;
                            local_1c = &stack0xffffff94;
                            FUN_10034a50();
                            local_1c = &stack0xffffff90;
                            local_8._0_1_ = 0xd;
                            FUN_10034a50(&DAT_1021ae10);
                            local_8 = CONCAT31(local_8._1_3_,1);
                            FUN_10033a90();
                            pCVar7 = extraout_ECX_04;
                          }
                        }
                        else if (DAT_1021ae54 == 1) {
                          ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::
                          Format(pCVar7,(wchar_t *)&DAT_1021ae14,
                                 L"iNumDisplays: 0x%X,  iDisplayInfoValue:0x%X Discard\r\n");
                          local_28 = &stack0xffffff94;
                          local_1c = &stack0xffffff94;
                          FUN_10034a50();
                          local_1c = &stack0xffffff90;
                          local_8._0_1_ = 0xb;
                          goto LAB_10035924;
                        }
LAB_10035ccd:
                        local_24 = local_24 + 0x80;
                        iVar10 = iVar10 + 1;
                        local_1c = puVar9 + 0x228;
                      } while (iVar10 < in_ECX[0xc]);
                    }
                    if (in_ECX[0xe] != 0) goto LAB_10035f36;
                  }
                  local_2c = local_2c + 1;
                  local_20 = local_20 + 0x624;
                } while ((int)local_2c < in_ECX[10]);
              }
LAB_10035f26:
              if (in_ECX[0xe] == 0) {
                iVar10 = FUN_10036f30();
                in_ECX[0xe] = iVar10;
              }
LAB_10035f36:
              if ((void *)in_ECX[8] != (void *)0x0) {
                FID_conflict__free((void *)in_ECX[8]);
                in_ECX[8] = 0;
              }
              iVar10 = in_ECX[0xe];
              goto LAB_10035fa1;
            }
            if (DAT_1021ae54 == 1) {
              ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                        (this_03,(wchar_t *)&DAT_1021ae14);
              local_2c = &stack0xffffff94;
              local_28 = &stack0xffffff94;
              FUN_10034a50();
              local_28 = &stack0xffffff90;
              local_8._0_1_ = 7;
              goto LAB_10035f89;
            }
          }
          else if (DAT_1021ae54 == 1) {
            ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                      (this_02,(wchar_t *)&DAT_1021ae14);
            local_2c = &stack0xffffff94;
            local_28 = &stack0xffffff94;
            FUN_10034a50();
            local_8._0_1_ = 6;
            local_28 = &stack0xffffff90;
            goto LAB_10035f89;
          }
        }
      }
    }
  }
  iVar10 = 0;
LAB_10035fa1:
  local_8 = local_8 & 0xffffff00;
  LOCK();
  piVar1 = local_30 + 3;
  iVar5 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar5 == 1 || iVar5 + -1 < 0) {
    (**(code **)(*(int *)*local_30 + 4))();
  }
  local_8 = 0xffffffff;
  LOCK();
  piVar1 = (int *)(local_40 + -4);
  iVar5 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar5 == 1 || iVar5 + -1 < 0) {
    (**(code **)(**(int **)(local_40 + -0x10) + 4))();
  }
  LOCK();
  piVar1 = (int *)(local_4c + -4);
  iVar5 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar5 == 1 || iVar5 + -1 < 0) {
    (**(code **)(**(int **)(local_4c + -0x10) + 4))();
  }
  LOCK();
  piVar1 = (int *)(local_50 + -4);
  iVar5 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar5 == 1 || iVar5 + -1 < 0) {
    (**(code **)(**(int **)(local_50 + -0x10) + 4))();
  }
  ExceptionList = local_10;
  return iVar10;
}

