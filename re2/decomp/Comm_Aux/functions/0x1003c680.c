// rea decompile_all
// name: FUN_1003c680
// address: 0x1003c680
// body: available
// range: 0x1003c680-0x1003d1be inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003c6be to 0x100351a0 FUN_100351a0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1003c6e5 to 0x100351a0 FUN_100351a0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1003c71e to 0x100351a0 FUN_100351a0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1003c73e to 0x100351a0 FUN_100351a0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003c680(void)

{
  int iVar1;
  undefined1 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  HRESULT HVar7;
  undefined1 *puVar8;
  int *piVar9;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_00;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_01;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *pCVar10;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_00;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_01;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_02;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_02;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_03;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_03;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_04;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_05;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_06;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_04;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_05;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_06;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_07;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_08;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_09;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_10;
  ushort uVar11;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *pCVar12;
  wchar_t *pwVar13;
  int local_74;
  int local_70;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *local_6c;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *local_54;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *local_50;
  int local_4c;
  int local_48;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *local_44;
  int local_40;
  int *local_3c;
  undefined1 *local_38;
  undefined1 local_31;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *local_30;
  undefined1 *local_2c;
  undefined1 *local_28;
  CLSID local_24;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101a0d3f;
  local_10 = ExceptionList;
  local_14 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  piVar3 = (int *)FUN_10048e90();
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_100351a0();
  }
  iVar4 = (**(code **)(*piVar3 + 0xc))();
  iVar4 = iVar4 + 0x10;
  local_8 = 0;
  local_48 = iVar4;
  piVar3 = (int *)FUN_10048e90();
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_100351a0();
  }
  iVar5 = (**(code **)(*piVar3 + 0xc))();
  iVar5 = iVar5 + 0x10;
  local_8._0_1_ = 1;
  local_70 = iVar5;
  FUN_100352e0();
  local_8._0_1_ = 2;
  local_31 = 0;
  piVar3 = (int *)FUN_10048e90();
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_100351a0();
  }
  local_5c = (**(code **)(*piVar3 + 0xc))();
  local_5c = local_5c + 0x10;
  piVar3 = (int *)FUN_10048e90();
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_100351a0();
  }
  iVar6 = (**(code **)(*piVar3 + 0xc))();
  iVar6 = iVar6 + 0x10;
  local_8._0_1_ = 3;
  uVar2 = (undefined1)local_8;
  local_8._0_1_ = 3;
  local_4c = iVar6;
  if (DAT_1021ae54 != 0) {
    ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
              (this,(wchar_t *)&DAT_1021ae14);
    local_3c = (int *)&stack0xffffff74;
    local_44 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
               &stack0xffffff74;
    FUN_10034a50();
    local_44 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
               &stack0xffffff70;
    local_8._0_1_ = 4;
    FUN_10034a50(&DAT_1021ae10);
    local_8._0_1_ = 3;
    FUN_10033a90();
    uVar2 = (undefined1)local_8;
  }
  local_8._0_1_ = uVar2;
  FUN_1003fa30();
  CoInitialize((LPVOID)0x0);
  HVar7 = CLSIDFromProgID(L"IgfxExt.CUIExternal",&local_24);
  if (HVar7 < 0) {
    if (DAT_1021ae54 != 0) {
      ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                (this_00,(wchar_t *)&DAT_1021ae14);
      local_2c = &stack0xffffff74;
      local_28 = &stack0xffffff74;
      FUN_10034a50();
      local_8._0_1_ = 6;
LAB_1003d0f0:
      local_28 = &stack0xffffff70;
      FUN_10034a50(&DAT_1021ae10);
      local_8._0_1_ = 3;
      FUN_10033a90();
    }
  }
  else {
    HVar7 = CoCreateInstance(&local_24,(LPUNKNOWN)0x0,0x15,(IID *)&DAT_101e2418,(LPVOID *)local_30);
    pCVar10 = extraout_ECX;
    if ((-1 < HVar7) && (pCVar10 = local_30, *(int *)local_30 != 0)) {
      *(int *)(local_30 + 8) = 0;
      local_44 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)0x1;
      do {
        FUN_10034940();
        ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                  (this_01,(wchar_t *)&local_70);
        iVar5 = local_70;
        FUN_10034490();
        iVar4 = local_48;
        local_40 = 0;
        do {
          piVar3 = (int *)FUN_10047eb4();
          local_8 = CONCAT31(local_8._1_3_,7);
          if (piVar3 == (int *)0x0) goto LAB_1003c880;
          piVar3[1] = 0;
          piVar3[2] = 1;
          iVar6 = Ordinal_2();
          *piVar3 = iVar6;
          if (iVar6 != 0) goto LAB_1003c882;
          if (iVar4 == 0) goto LAB_1003c882;
          do {
            FUN_1017fec0();
LAB_1003c880:
            piVar3 = (int *)0x0;
LAB_1003c882:
            local_8 = CONCAT31(local_8._1_3_,3);
            local_3c = piVar3;
          } while (piVar3 == (int *)0x0);
          local_8._0_1_ = 8;
          local_3c = (int *)(**(code **)(**(int **)local_30 + 0x30))
                                      (*(int **)local_30,*piVar3,local_40,&local_6c);
          local_8._0_1_ = 3;
          LOCK();
          piVar9 = piVar3 + 2;
          iVar6 = *piVar9;
          *piVar9 = *piVar9 + -1;
          UNLOCK();
          pCVar10 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                    (iVar6 + -1);
          if (pCVar10 == (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)0x0)
          {
            if (*piVar3 != 0) {
              Ordinal_6();
              *piVar3 = 0;
            }
            if ((void *)piVar3[1] != (void *)0x0) {
              FID_conflict__free((void *)piVar3[1]);
              piVar3[1] = 0;
            }
            FUN_1017ebcb();
            pCVar10 = extraout_ECX_00;
          }
          iVar6 = local_40;
          if ((int)local_3c < 0) {
            if (DAT_1021ae54 != 0) {
              ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                        ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         ((uint)local_44 & 0xffff),(wchar_t *)&DAT_1021ae14,
                         L"EnumAttachableDevices fail %d, Device name %d , Device type %d",local_3c)
              ;
              local_2c = &stack0xffffff74;
              local_28 = &stack0xffffff74;
              FUN_10034a50();
              local_28 = &stack0xffffff70;
              local_8._0_1_ = 9;
              FUN_10034a50(&DAT_1021ae10);
              local_8._0_1_ = 3;
              FUN_10033a90();
              pCVar10 = extraout_ECX_09;
            }
            break;
          }
          if (DAT_1021ae54 != 0) {
            ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                      (local_44,(wchar_t *)&DAT_1021ae14,
                       L"EnumAttachableDevices: ulDeviceType %d, ulStatus %d, Device name %d , Device type %d"
                       ,local_64,local_68);
            local_3c = (int *)&stack0xffffff74;
            local_38 = &stack0xffffff74;
            FUN_10034a50();
            local_38 = &stack0xffffff70;
            local_8._0_1_ = 10;
            FUN_10034a50(&DAT_1021ae10);
            local_8._0_1_ = 3;
            FUN_10033a90();
          }
          pCVar10 = local_68;
          if ((local_68 == (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)0x0
              ) && (local_64 == 0)) break;
          if ((((uint)local_68 & 1) != 0) ||
             ((((local_64 != 3 && (local_64 != 7)) && (local_64 != 2)) &&
              ((local_64 != 1 && (local_64 != 5)))))) goto LAB_1003cf02;
          if (DAT_1021ae2c == 0) {
            *(int *)(local_30 + 8) = 1;
            *(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> **)(local_30 + 4) =
                 local_6c;
            pCVar12 = local_30;
            goto LAB_1003cfef;
          }
          if (DAT_1021ae2c != 1) {
            FUN_10034940();
            local_54 = local_6c;
            local_58 = local_64;
            local_60 = iVar6;
            local_50 = local_68;
            if (((uint)local_68 & 0x100) == 0) {
              if (((uint)local_68 & 0x200) == 0) {
                pwVar13 = 
                L"Device Name:%s, Monitor Index:%d Monitor UID:%u, Device Type:%u, Device Status:0x%X"
                ;
              }
              else {
                pwVar13 = 
                L"Device Name:%s, Secondary Monitor Index:%d Monitor UID:%u, Device Type:%u, Device Status:0x%X"
                ;
              }
            }
            else {
              pwVar13 = 
              L"Device Name:%s, Primary Monitor Index:%d Monitor UID:%u, Device Type:%u, Device Status:0x%X"
              ;
            }
            ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                      (local_6c,(wchar_t *)&local_4c,pwVar13,local_5c,iVar6,local_6c);
            piVar9 = (int *)FUN_1003fc80();
            FUN_1003f820();
            piVar3 = piVar9;
            if (DAT_10206e74 != (int *)0x0) {
              *DAT_10206e74 = (int)piVar9;
              piVar3 = DAT_10206e70;
            }
            DAT_10206e70 = piVar3;
            pCVar10 = this_06;
            DAT_10206e74 = piVar9;
            if (DAT_1021ae54 != 0) {
              ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                        (this_06,(wchar_t *)&DAT_1021ae14);
              local_2c = &stack0xffffff74;
              local_28 = &stack0xffffff74;
              FUN_10034a50();
              local_8._0_1_ = 0x13;
              goto LAB_1003cee6;
            }
            goto LAB_1003cf59;
          }
          *(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> **)(local_30 + 4) =
               local_6c;
          if (DAT_1021ae3c == 0) {
            local_3c = (int *)0x1;
          }
          else {
            local_3c = (int *)FUN_1003f2b0();
            pCVar10 = extraout_ECX_01;
            if (local_3c == (int *)0x0) goto LAB_1003cf59;
          }
          pCVar10 = local_30;
          if (DAT_1021ae44 == 0) {
            puVar8 = (undefined1 *)0x1;
          }
          else {
            local_38 = (undefined1 *)0x0;
            if (DAT_1021ae4c == 0) {
              uVar11 = 0;
              do {
                iVar6 = FUN_1003e170((&DAT_101e23e8)[(uint)uVar11 * 3],0x23);
                if (iVar6 != 0) {
                  local_38 = (undefined1 *)0x1;
                  puVar8 = (undefined1 *)0x1;
                  pCVar10 = this_02;
                  if (DAT_1021ae54 != 0) {
                    ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                              (this_02,(wchar_t *)&DAT_1021ae14,
                               L"Intel graphic Add g_listAttachedDevices, slave:0x%02X, device name:%s"
                              );
                    local_2c = &stack0xffffff74;
                    local_28 = &stack0xffffff74;
                    FUN_10034a50();
                    local_28 = &stack0xffffff70;
                    local_8._0_1_ = 0xc;
                    FUN_10034a50(&DAT_1021ae10);
                    local_8._0_1_ = 3;
                    FUN_10033a90();
                    puVar8 = local_38;
                    pCVar10 = extraout_ECX_05;
                  }
                  goto LAB_1003cc3e;
                }
                uVar11 = uVar11 + 1;
                pCVar10 = local_30;
              } while (uVar11 < 7);
            }
            else if (DAT_1021ae54 != 0) {
              ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                        (local_30,(wchar_t *)&DAT_1021ae14);
              local_28 = &stack0xffffff74;
              local_2c = &stack0xffffff74;
              FUN_10034a50();
              local_2c = &stack0xffffff70;
              local_8._0_1_ = 0xb;
              FUN_10034a50(&DAT_1021ae10);
              local_8._0_1_ = 3;
              FUN_10033a90();
              pCVar10 = extraout_ECX_02;
            }
            puVar8 = local_38;
            if (DAT_1021ae48 != 0) {
              if (DAT_1021ae54 != 0) {
                ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                          (pCVar10,(wchar_t *)&DAT_1021ae14,
                           L"Intel graphic check extra slave:0x%02X, device name:%s");
                local_2c = &stack0xffffff74;
                local_28 = &stack0xffffff74;
                FUN_10034a50();
                local_28 = &stack0xffffff70;
                local_8._0_1_ = 0xd;
                FUN_10034a50(&DAT_1021ae10);
                local_8._0_1_ = 3;
                FUN_10033a90();
              }
              iVar6 = FUN_1003e170(DAT_1021ae50,0x23);
              if (iVar6 == 0) {
                puVar8 = local_38;
                pCVar10 = this_03;
                if (DAT_1021ae54 != 0) {
                  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                            (this_03,(wchar_t *)&DAT_1021ae14);
                  local_2c = &stack0xffffff74;
                  local_28 = &stack0xffffff74;
                  FUN_10034a50();
                  local_28 = &stack0xffffff70;
                  local_8._0_1_ = 0xf;
                  FUN_10034a50(&DAT_1021ae10);
                  local_8._0_1_ = 3;
                  FUN_10033a90();
                  puVar8 = local_38;
                  pCVar10 = extraout_ECX_04;
                }
              }
              else {
                local_38 = (undefined1 *)0x1;
                puVar8 = (undefined1 *)0x1;
                pCVar10 = this_03;
                if (DAT_1021ae54 != 0) {
                  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                            (this_03,(wchar_t *)&DAT_1021ae14);
                  local_2c = &stack0xffffff74;
                  local_28 = &stack0xffffff74;
                  FUN_10034a50();
                  local_28 = &stack0xffffff70;
                  local_8._0_1_ = 0xe;
                  FUN_10034a50(&DAT_1021ae10);
                  local_8._0_1_ = 3;
                  FUN_10033a90();
                  puVar8 = local_38;
                  pCVar10 = extraout_ECX_03;
                }
              }
            }
          }
LAB_1003cc3e:
          if ((local_3c == (int *)0x0) || (puVar8 == (undefined1 *)0x0)) {
LAB_1003cf02:
            if (DAT_1021ae54 != 0) {
              ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                        (local_44,(wchar_t *)&DAT_1021ae14,
                         L"Device name %d , Device type %d done...");
              local_2c = &stack0xffffff74;
              local_28 = &stack0xffffff74;
              FUN_10034a50();
              local_8._0_1_ = 0x14;
LAB_1003cf3d:
              local_28 = &stack0xffffff70;
              FUN_10034a50(&DAT_1021ae10);
              local_8._0_1_ = 3;
              FUN_10033a90();
              pCVar10 = extraout_ECX_08;
            }
          }
          else if (DAT_1021ae70 == 0) {
            FUN_10034940();
            local_54 = local_6c;
            local_58 = local_64;
            local_60 = local_40;
            local_50 = local_68;
            if (((uint)local_68 & 0x100) == 0) {
              if (((uint)local_68 & 0x200) == 0) {
                pwVar13 = 
                L"Device Name:%s, Monitor Index:%d Monitor UID:%u, Device Type:%u, Device Status:0x%X"
                ;
              }
              else {
                pwVar13 = 
                L"Device Name:%s, Secondary Monitor Index:%d Monitor UID:%u, Device Type:%u, Device Status:0x%X"
                ;
              }
            }
            else {
              pwVar13 = 
              L"Device Name:%s, Primary Monitor Index:%d Monitor UID:%u, Device Type:%u, Device Status:0x%X"
              ;
            }
            ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                      (local_6c,(wchar_t *)&local_4c,pwVar13,local_5c,local_40,local_6c);
            piVar9 = (int *)FUN_1003fc80();
            FUN_1003f820();
            piVar3 = piVar9;
            if (DAT_10206e74 != (int *)0x0) {
              *DAT_10206e74 = (int)piVar9;
              piVar3 = DAT_10206e70;
            }
            DAT_10206e70 = piVar3;
            pCVar10 = this_05;
            DAT_10206e74 = piVar9;
            if (DAT_1021ae54 != 0) {
              ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                        (this_05,(wchar_t *)&DAT_1021ae14);
              local_2c = &stack0xffffff74;
              local_28 = &stack0xffffff74;
              FUN_10034a50();
              local_8._0_1_ = 0x12;
LAB_1003cee6:
              local_28 = &stack0xffffff70;
              FUN_10034a50(&DAT_1021ae10);
              local_8._0_1_ = 3;
              FUN_10033a90();
              pCVar10 = extraout_ECX_07;
              goto LAB_1003cf02;
            }
          }
          else {
            iVar6 = FUN_1003ee10();
            if (iVar6 == 0) {
              pCVar10 = extraout_ECX_06;
              if (DAT_1021ae54 != 0) {
                local_2c = &stack0xffffff74;
                FUN_100352e0();
                local_8._0_1_ = 0x10;
                goto LAB_1003cf3d;
              }
            }
            else {
              FUN_10034940();
              local_54 = local_6c;
              local_58 = local_64;
              local_60 = local_40;
              local_50 = local_68;
              if (((uint)local_68 & 0x100) == 0) {
                if (((uint)local_68 & 0x200) == 0) {
                  pwVar13 = 
                  L"Device Name:%s, Monitor Index:%d Monitor UID:%u, Device Type:%u, Device Status:0x%X"
                  ;
                }
                else {
                  pwVar13 = 
                  L"Device Name:%s, Secondary Monitor Index:%d Monitor UID:%u, Device Type:%u, Device Status:0x%X"
                  ;
                }
              }
              else {
                pwVar13 = 
                L"Device Name:%s, Primary Monitor Index:%d Monitor UID:%u, Device Type:%u, Device Status:0x%X"
                ;
              }
              ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                        (local_6c,(wchar_t *)&local_4c,pwVar13,local_5c,local_40,local_6c);
              piVar9 = (int *)FUN_1003fc80();
              FUN_1003f820();
              piVar3 = piVar9;
              if (DAT_10206e74 != (int *)0x0) {
                *DAT_10206e74 = (int)piVar9;
                piVar3 = DAT_10206e70;
              }
              DAT_10206e70 = piVar3;
              pCVar10 = this_04;
              DAT_10206e74 = piVar9;
              if (DAT_1021ae54 != 0) {
                ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                          (this_04,(wchar_t *)&DAT_1021ae14);
                local_2c = &stack0xffffff74;
                local_28 = &stack0xffffff74;
                FUN_10034a50();
                local_8._0_1_ = 0x11;
                goto LAB_1003cee6;
              }
            }
          }
LAB_1003cf59:
          local_40 = local_40 + 1;
        } while (local_40 < 8);
        pCVar12 = local_30;
        if (*(int *)(local_30 + 8) != 0) goto LAB_1003cfff;
        local_44 = local_44 + 1;
      } while ((ushort)local_44 < 0xb);
LAB_1003cfef:
      if (*(int *)(pCVar12 + 8) == 0) {
        iVar6 = FUN_1003f500();
        *(int *)(pCVar12 + 8) = iVar6;
        pCVar10 = extraout_ECX_10;
      }
LAB_1003cfff:
      if (DAT_1021ae54 != 0) {
        if (*(int *)(pCVar12 + 8) == 0) {
          ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                    (pCVar10,(wchar_t *)&DAT_1021ae14);
          local_2c = &stack0xffffff74;
          local_28 = &stack0xffffff74;
          FUN_10034a50();
          local_8._0_1_ = 0x16;
        }
        else {
          ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                    (pCVar10,(wchar_t *)&DAT_1021ae14);
          local_2c = &stack0xffffff74;
          local_28 = &stack0xffffff74;
          FUN_10034a50();
          local_8._0_1_ = 0x15;
        }
        local_28 = &stack0xffffff70;
        FUN_10034a50(&DAT_1021ae10);
        local_8._0_1_ = 3;
        FUN_10033a90();
      }
      local_3c = *(int **)(pCVar12 + 8);
      iVar6 = local_4c;
      goto LAB_1003d113;
    }
    if (DAT_1021ae54 != 0) {
      ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                (pCVar10,(wchar_t *)&DAT_1021ae14);
      local_2c = &stack0xffffff74;
      local_28 = &stack0xffffff74;
      FUN_10034a50();
      local_8._0_1_ = 5;
      goto LAB_1003d0f0;
    }
  }
  local_3c = (int *)0x0;
LAB_1003d113:
  local_8 = CONCAT31(local_8._1_3_,2);
  LOCK();
  piVar3 = (int *)(iVar6 + -4);
  iVar1 = *piVar3;
  *piVar3 = *piVar3 + -1;
  UNLOCK();
  if (iVar1 == 1 || iVar1 + -1 < 0) {
    (**(code **)(**(int **)(iVar6 + -0x10) + 4))();
  }
  LOCK();
  piVar3 = (int *)(local_5c + -4);
  iVar6 = *piVar3;
  *piVar3 = *piVar3 + -1;
  UNLOCK();
  if (iVar6 == 1 || iVar6 + -1 < 0) {
    (**(code **)(**(int **)(local_5c + -0x10) + 4))();
  }
  local_8._0_1_ = 1;
  LOCK();
  piVar3 = (int *)(local_74 + -4);
  iVar6 = *piVar3;
  *piVar3 = *piVar3 + -1;
  UNLOCK();
  if (iVar6 == 1 || iVar6 + -1 < 0) {
    (**(code **)(**(int **)(local_74 + -0x10) + 4))();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  LOCK();
  piVar3 = (int *)(iVar5 + -4);
  iVar6 = *piVar3;
  *piVar3 = *piVar3 + -1;
  UNLOCK();
  if (iVar6 == 1 || iVar6 + -1 < 0) {
    (**(code **)(**(int **)(iVar5 + -0x10) + 4))();
  }
  local_8 = 0xffffffff;
  LOCK();
  piVar3 = (int *)(iVar4 + -4);
  iVar5 = *piVar3;
  *piVar3 = *piVar3 + -1;
  UNLOCK();
  if (iVar5 == 1 || iVar5 + -1 < 0) {
    (**(code **)(**(int **)(iVar4 + -0x10) + 4))();
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

