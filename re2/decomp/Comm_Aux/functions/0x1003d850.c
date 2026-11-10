// rea decompile_all
// name: FUN_1003d850
// address: 0x1003d850
// body: available
// range: 0x1003d850-0x1003e167 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003d8b2 to 0x100351a0 FUN_100351a0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1003dee0 to 0x100351a0 FUN_100351a0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003d850(undefined4 param_1,undefined1 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_ECX;
  uint uVar5;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_00;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_01;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_02;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_03;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_00;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_01;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_04;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_05;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_06;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_07;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_08;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *pCVar6;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_02;
  uint uVar7;
  undefined1 *puVar8;
  int iVar9;
  code *pcVar10;
  int local_170;
  undefined4 *local_16c;
  int local_168;
  uint local_164;
  undefined1 *local_160;
  undefined1 *local_15c;
  int local_158;
  undefined1 *local_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  uint uStack_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined1 local_130 [268];
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  int local_14;
  
  puStack_20 = &stack0xfffffffc;
  local_14 = -1;
  puStack_18 = &LAB_101a0eda;
  local_1c = ExceptionList;
  local_24 = DAT_10206460 ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  local_16c = in_ECX;
  piVar1 = (int *)FUN_10048e90();
  if (piVar1 == (int *)0x0) {
LAB_1003d8ad:
                    /* WARNING: Subroutine does not return */
    FUN_100351a0();
  }
  puVar2 = (undefined4 *)(**(code **)(*piVar1 + 0xc))();
  local_14 = 0;
  local_158 = 0;
  _memset(local_130 + 1,0,0x100);
  local_164 = param_4 + 1;
  local_130[0] = param_2;
  FUN_10181570(local_130 + 1);
  local_168 = 0;
  iVar3 = (int)(local_164 + ((int)local_164 >> 0x1f & 0xfU)) >> 4;
  pcVar10 = Sleep_exref;
  if (0 < iVar3) {
    uVar7 = local_164 & 0x8000000f;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffff0) + 1;
    }
    local_160 = local_130;
    do {
      if ((uVar7 == 0) && (local_168 == iVar3 + -1)) {
        local_150 = in_ECX[1];
        uVar5 = 0;
        local_140 = 0;
        uStack_13c = 0;
        uStack_138 = 0;
        uStack_134 = 0;
        uStack_14c = 0;
        do {
          *(undefined1 *)((int)&local_140 + uVar5) = local_160[uVar5];
          uVar5 = uVar5 + 1;
        } while (uVar5 < 0x10);
      }
      else {
        local_150 = in_ECX[1];
        uVar5 = 0;
        local_140 = 0;
        uStack_13c = 0;
        uStack_138 = 0;
        uStack_134 = 0;
        uStack_14c = 4;
        do {
          *(undefined1 *)((int)&local_140 + uVar5) = local_160[uVar5];
          uVar5 = uVar5 + 1;
        } while (uVar5 < 0x10);
      }
      uStack_144 = param_1;
      uStack_148 = 0x10;
      iVar4 = (**(code **)(*(int *)*in_ECX + 0xb0))((int *)*in_ECX,&DAT_101e2428,0x20);
      if (iVar4 < 0) goto LAB_1003dd9e;
      if (local_158 == 0) {
        if (DAT_1021ae60 != 0) {
          (*pcVar10)();
        }
      }
      else {
        if ((local_158 != 0x46) && (local_158 != 0x48)) {
          if (DAT_1021ae54 != 1) goto LAB_1003dd9e;
          ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                    (this,(wchar_t *)&DAT_1021ae14);
          local_15c = &stack0xfffffe68;
          local_154 = &stack0xfffffe68;
          FUN_10034a50();
          local_14._0_1_ = 6;
          goto LAB_1003e142;
        }
        pCVar6 = this;
        if (DAT_1021ae54 == 1) {
          ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                    (this,(wchar_t *)&DAT_1021ae14,
                     L"SetDeviceData ErrorCode:  0x%x, WriteLength: 0x%x ");
          piVar1 = (int *)FUN_10048e90();
          if (piVar1 == (int *)0x0) goto LAB_1003d8ad;
          iVar4 = (**(code **)(*piVar1 + 0xc))();
          iVar4 = iVar4 + 0x10;
          iVar9 = 0;
          local_14._0_1_ = 1;
          pCVar6 = extraout_ECX;
          local_170 = iVar4;
          if (0 < param_4) {
            do {
              ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                        (pCVar6,(wchar_t *)&local_170);
              iVar4 = local_170;
              FUN_10034490();
              iVar9 = iVar9 + 1;
              pCVar6 = extraout_ECX_00;
            } while (iVar9 < param_4);
          }
          local_154 = &stack0xfffffe68;
          local_15c = &stack0xfffffe68;
          FUN_10034a50();
          local_15c = &stack0xfffffe64;
          local_14._0_1_ = 2;
          FUN_10034a50(&DAT_1021ae10);
          local_14._0_1_ = 1;
          FUN_10033a90();
          local_14 = (uint)local_14._1_3_ << 8;
          LOCK();
          piVar1 = (int *)(iVar4 + -4);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          pCVar6 = extraout_ECX_01;
          pcVar10 = Sleep_exref;
          if (iVar9 == 1 || iVar9 + -1 < 0) {
            (**(code **)(**(int **)(iVar4 + -0x10) + 4))();
            pCVar6 = extraout_ECX_02;
            pcVar10 = Sleep_exref;
          }
        }
        if ((DAT_1021ae20 != 0) && (local_158 == 0x48)) {
          if (DAT_1021ae54 == 1) {
            ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                      (pCVar6,(wchar_t *)&DAT_1021ae14);
            local_15c = &stack0xfffffe68;
            local_154 = &stack0xfffffe68;
            FUN_10034a50();
            local_154 = &stack0xfffffe64;
            local_14._0_1_ = 3;
            FUN_10034a50(&DAT_1021ae10);
            local_14 = (uint)local_14._1_3_ << 8;
            FUN_10033a90();
            pCVar6 = extraout_ECX_03;
          }
          if (DAT_1021ae80 == 0) {
            if (DAT_1021ae54 == 0) goto LAB_1003dd9e;
            ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                      (pCVar6,(wchar_t *)&DAT_1021ae14);
            local_15c = &stack0xfffffe68;
            local_154 = &stack0xfffffe68;
            FUN_10034a50();
            local_14._0_1_ = 4;
            goto LAB_1003e142;
          }
          iVar4 = 0;
          if (0 < DAT_1021ae24) {
            do {
              (*pcVar10)();
              iVar9 = (**(code **)(*(int *)*local_16c + 0xb0))
                                ((int *)*local_16c,&DAT_101e2428,0x20,&local_150);
              if (iVar9 < 0) goto LAB_1003dd9e;
              if (local_158 == 0) {
                if (DAT_1021ae54 == 1) {
                  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                            (this_00,(wchar_t *)&DAT_1021ae14);
                  local_15c = &stack0xfffffe68;
                  local_154 = &stack0xfffffe68;
                  FUN_10034a50();
                  local_154 = &stack0xfffffe64;
                  local_14._0_1_ = 5;
                  FUN_10034a50(&DAT_1021ae10);
                  local_14 = (uint)local_14._1_3_ << 8;
                  FUN_10033a90();
                }
              }
              else {
                (*pcVar10)();
              }
              iVar4 = iVar4 + 1;
            } while (iVar4 < DAT_1021ae24);
          }
        }
        (*pcVar10)();
        in_ECX = local_16c;
      }
      local_168 = local_168 + 1;
      local_160 = local_160 + 0x10;
    } while (local_168 < iVar3);
  }
  uVar7 = local_164 & 0x8000000f;
  if ((int)uVar7 < 0) {
    uVar7 = (uVar7 - 1 | 0xfffffff0) + 1;
  }
  if (uVar7 == 0) goto LAB_1003dd9e;
  local_150 = in_ECX[1];
  uVar5 = 0;
  uStack_14c = 0;
  uStack_144 = param_1;
  local_140 = 0;
  uStack_13c = 0;
  uStack_138 = 0;
  uStack_134 = 0;
  if (uVar7 != 0) {
    do {
      *(undefined1 *)((int)&local_140 + uVar5) = local_130[uVar5 + local_168 * 0x10];
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar7);
  }
  uStack_148 = uVar7;
  iVar3 = (**(code **)(*(int *)*in_ECX + 0xb0))((int *)*in_ECX,&DAT_101e2428,0x20);
  if (iVar3 < 0) {
    if (DAT_1021ae54 != 1) goto LAB_1003dd9e;
    ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
              (this_01,(wchar_t *)&DAT_1021ae14);
    local_15c = &stack0xfffffe68;
    local_154 = &stack0xfffffe68;
    FUN_10034a50();
    local_14._0_1_ = 0xd;
LAB_1003e142:
    local_154 = &stack0xfffffe64;
    FUN_10034a50(&DAT_1021ae10);
    local_14 = (uint)local_14._1_3_ << 8;
    FUN_10033a90();
  }
  else {
    if (local_158 == 0) {
      if (DAT_1021ae60 == 0) goto LAB_1003dd9e;
    }
    else {
      if ((local_158 != 0x46) && (local_158 != 0x48)) {
        if (DAT_1021ae54 != 1) goto LAB_1003dd9e;
        ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                  (this_01,(wchar_t *)&DAT_1021ae14);
        local_15c = &stack0xfffffe68;
        local_154 = &stack0xfffffe68;
        FUN_10034a50();
        local_14._0_1_ = 0xc;
        goto LAB_1003e142;
      }
      pCVar6 = this_01;
      if (DAT_1021ae54 == 1) {
        ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                  (this_01,(wchar_t *)&DAT_1021ae14,
                   L"SetDeviceData ErrorCode:  0x%x, WriteLength: 0x%x ");
        piVar1 = (int *)FUN_10048e90();
        if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_100351a0();
        }
        iVar3 = (**(code **)(*piVar1 + 0xc))();
        puVar8 = (undefined1 *)(iVar3 + 0x10);
        iVar3 = 0;
        local_14._0_1_ = 7;
        pCVar6 = extraout_ECX_04;
        local_160 = puVar8;
        if (0 < param_4) {
          do {
            ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                      (pCVar6,(wchar_t *)&local_160);
            puVar8 = local_160;
            FUN_10034490();
            iVar3 = iVar3 + 1;
            pCVar6 = extraout_ECX_05;
          } while (iVar3 < param_4);
        }
        local_15c = &stack0xfffffe68;
        local_154 = &stack0xfffffe68;
        FUN_10034a50();
        local_154 = &stack0xfffffe64;
        local_14._0_1_ = 8;
        FUN_10034a50(&DAT_1021ae10);
        local_14._0_1_ = 7;
        FUN_10033a90();
        local_14 = (uint)local_14._1_3_ << 8;
        LOCK();
        piVar1 = (int *)(puVar8 + -4);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        pCVar6 = extraout_ECX_06;
        pcVar10 = Sleep_exref;
        if (iVar3 == 1 || iVar3 + -1 < 0) {
          (**(code **)(**(int **)(puVar8 + -0x10) + 4))();
          pCVar6 = extraout_ECX_07;
          pcVar10 = Sleep_exref;
        }
      }
      if ((DAT_1021ae20 != 0) && (local_158 == 0x48)) {
        if (DAT_1021ae54 == 1) {
          ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                    (pCVar6,(wchar_t *)&DAT_1021ae14);
          local_15c = &stack0xfffffe68;
          local_154 = &stack0xfffffe68;
          FUN_10034a50();
          local_154 = &stack0xfffffe64;
          local_14._0_1_ = 9;
          FUN_10034a50(&DAT_1021ae10);
          local_14 = (uint)local_14._1_3_ << 8;
          FUN_10033a90();
          pCVar6 = extraout_ECX_08;
        }
        if (DAT_1021ae80 == 0) {
          if (DAT_1021ae54 == 0) goto LAB_1003dd9e;
          ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                    (pCVar6,(wchar_t *)&DAT_1021ae14);
          local_15c = &stack0xfffffe68;
          local_154 = &stack0xfffffe68;
          FUN_10034a50();
          local_14._0_1_ = 10;
          goto LAB_1003e142;
        }
        iVar3 = 0;
        if (0 < DAT_1021ae24) {
          do {
            (*pcVar10)();
            (**(code **)(*(int *)*local_16c + 0xb0))
                      ((int *)*local_16c,&DAT_101e2428,0x20,&local_150);
            if (local_158 == 0) {
              if (DAT_1021ae54 == 1) {
                ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                          (this_02,(wchar_t *)&DAT_1021ae14);
                local_15c = &stack0xfffffe68;
                local_154 = &stack0xfffffe68;
                FUN_10034a50();
                local_154 = &stack0xfffffe64;
                local_14._0_1_ = 0xb;
                FUN_10034a50(&DAT_1021ae10);
                local_14 = (uint)local_14._1_3_ << 8;
                FUN_10033a90();
              }
              goto LAB_1003dd9e;
            }
            (*pcVar10)();
            iVar3 = iVar3 + 1;
          } while (iVar3 < DAT_1021ae24);
        }
      }
    }
    (*pcVar10)();
  }
LAB_1003dd9e:
  local_14 = 0xffffffff;
  LOCK();
  piVar1 = puVar2 + 3;
  iVar3 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar3 == 1 || iVar3 + -1 < 0) {
    (**(code **)(*(int *)*puVar2 + 4))();
  }
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}

