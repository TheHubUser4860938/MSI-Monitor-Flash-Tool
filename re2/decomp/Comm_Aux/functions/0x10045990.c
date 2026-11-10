// rea decompile_all
// name: FUN_10045990
// address: 0x10045990
// body: available
// range: 0x10045990-0x10045e88 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100459cc to 0x100351a0 FUN_100351a0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x100459ec to 0x100351a0 FUN_100351a0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_10045990(void)

{
  wchar_t *pwVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 *in_ECX;
  undefined4 uVar5;
  undefined **local_168 [44];
  CComboBox local_b8 [140];
  undefined4 local_2c;
  int local_28;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *local_24;
  undefined4 local_20;
  wchar_t *local_1c;
  undefined1 *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101a16c6;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar3 = (int *)FUN_10048e90();
  if (piVar3 == (int *)0x0) {
LAB_100459c7:
                    /* WARNING: Subroutine does not return */
    FUN_100351a0();
  }
  local_28 = (**(code **)(*piVar3 + 0xc))();
  local_28 = local_28 + 0x10;
  piVar3 = (int *)FUN_10048e90();
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_100351a0();
  }
  iVar4 = (**(code **)(*piVar3 + 0xc))();
  local_1c = (wchar_t *)(iVar4 + 0x10);
  local_8 = 0;
  if (DAT_10206f10 == 0) {
LAB_10045e38:
    uVar5 = 0;
    goto LAB_10045e3a;
  }
  if (DAT_1021ae2c == 2) {
LAB_10045a2f:
    if ((DAT_1021ae38 == 0) || (puVar2 = DAT_10206f08, *(int *)(DAT_1021ae34 + -6) == 0)) {
LAB_10045aa2:
      if (DAT_1021ae2c != 1) goto LAB_10045ce3;
LAB_10045aab:
      if (DAT_10206f10 < 2) {
        FUN_10040570();
        in_ECX[1] = local_2c;
        *in_ECX = local_24;
        in_ECX[2] = local_20;
        if (DAT_1021ae54 != 0) {
          ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                    (local_24,(wchar_t *)&DAT_1021ae14,
                     L"Select HGPU:0x%X m_unoutputID= %u m_hDisplay = 0x%X",local_24);
          local_18 = &stack0xfffffe88;
          local_14 = &stack0xfffffe88;
          FUN_10034a50();
          local_14 = &stack0xfffffe84;
          local_8._0_1_ = 2;
          FUN_10034a50(&DAT_1021ae10);
          local_8 = (uint)local_8._1_3_ << 8;
          FUN_10033a90();
          uVar5 = 1;
          goto LAB_10045e3a;
        }
      }
      else {
        if (DAT_1021ae30 != 0) {
          FUN_1003fdf0(DAT_1021ae2c);
          local_8._0_1_ = 4;
          iVar4 = FUN_1004d03c();
          if (iVar4 != 2) {
            FUN_100406c0();
            FUN_10040570();
            in_ECX[1] = local_2c;
            *in_ECX = local_24;
            in_ECX[2] = local_20;
            if (DAT_1021ae54 != 0) {
              ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                        (local_24,(wchar_t *)&DAT_1021ae14,
                         L"Select HGPU:0x%X m_unoutputID= %u m_hDisplay = 0x%X",local_24);
              local_18 = &stack0xfffffe88;
              local_14 = &stack0xfffffe88;
              FUN_10034a50();
              local_14 = &stack0xfffffe84;
              local_8._0_1_ = 6;
              FUN_10034a50(&DAT_1021ae10);
              local_8._0_1_ = 4;
              goto LAB_10045dbc;
            }
            goto LAB_10045dc4;
          }
          if (DAT_1021ae54 == 0) goto LAB_10045d48;
          local_18 = &stack0xfffffe88;
          FUN_100352e0();
          local_14 = &stack0xfffffe84;
          local_8._0_1_ = 5;
          FUN_10034a50(&DAT_1021ae10);
          local_8._0_1_ = 4;
          FUN_10033a90();
          uVar5 = 0;
          goto LAB_10045dfb;
        }
        FUN_10040570();
        in_ECX[1] = local_2c;
        *in_ECX = local_24;
        in_ECX[2] = local_20;
        if (DAT_1021ae54 != 0) {
          ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                    (local_24,(wchar_t *)&DAT_1021ae14,
                     L"Select HGPU:0x%X m_unoutputID= %u m_hDisplay = 0x%X",local_24);
          local_18 = &stack0xfffffe88;
          local_14 = &stack0xfffffe88;
          FUN_10034a50();
          local_14 = &stack0xfffffe84;
          local_8._0_1_ = 3;
          goto LAB_10045be5;
        }
      }
    }
    else {
      do {
        if (puVar2 == (undefined4 *)0x0) {
          FUN_10034ea0();
          goto LAB_10045aa2;
        }
        puVar2 = (undefined4 *)*puVar2;
        FUN_10040570();
        if (local_1c == (wchar_t *)0x0) goto LAB_100459c7;
        iVar4 = __wcsicmp(DAT_1021ae34,local_1c);
      } while (iVar4 != 0);
      in_ECX[1] = local_2c;
      *in_ECX = local_24;
      in_ECX[2] = local_20;
      if (DAT_1021ae54 != 0) {
        ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                  (local_24,(wchar_t *)&DAT_1021ae14,
                   L"Select HGPU:0x%X m_unoutputID= %u m_hDisplay = 0x%X",local_24);
        local_14 = &stack0xfffffe88;
        local_18 = &stack0xfffffe88;
        FUN_10034a50();
        local_18 = &stack0xfffffe84;
        local_8._0_1_ = 1;
LAB_10045be5:
        FUN_10034a50(&DAT_1021ae10);
        local_8 = (uint)local_8._1_3_ << 8;
        FUN_10033a90();
      }
    }
    uVar5 = 1;
  }
  else {
    if (DAT_1021ae2c == 1) {
      if (DAT_1021ae30 == 1) goto LAB_10045a2f;
      goto LAB_10045aab;
    }
LAB_10045ce3:
    if (DAT_1021ae2c != 2) {
      WritePrivateProfileStringW(L"Comm_AUX",L"AUX_SelectDeviceInfo",DAT_1021ae34,&DAT_10212800);
      goto LAB_10045e38;
    }
    FUN_1003fdf0(2);
    local_8._0_1_ = 7;
    iVar4 = FUN_1004d03c();
    if (iVar4 == 2) {
      if (DAT_1021ae54 != 0) {
        local_18 = &stack0xfffffe88;
        FUN_100352e0();
        local_14 = &stack0xfffffe84;
        local_8._0_1_ = 8;
        FUN_10034a50(&DAT_1021ae10);
        local_8._0_1_ = 7;
        FUN_10033a90();
      }
LAB_10045d48:
      uVar5 = 0;
    }
    else {
      FUN_100406c0();
      FUN_10040570();
      in_ECX[1] = local_2c;
      *in_ECX = local_24;
      in_ECX[2] = local_20;
      if (DAT_1021ae54 != 0) {
        ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                  (local_24,(wchar_t *)&DAT_1021ae14,
                   L"Select HGPU:0x%X m_unoutputID= %u m_hDisplay = 0x%X",local_24);
        local_18 = &stack0xfffffe88;
        local_14 = &stack0xfffffe88;
        FUN_10034a50();
        local_14 = &stack0xfffffe84;
        local_8._0_1_ = 9;
        FUN_10034a50(&DAT_1021ae10);
        local_8._0_1_ = 7;
LAB_10045dbc:
        FUN_10033a90();
      }
LAB_10045dc4:
      if (DAT_1021ae38 != 0) {
        FUN_10034940();
        WritePrivateProfileStringW(L"Comm_AUX",L"AUX_SelectDeviceInfo",DAT_1021ae34,&DAT_10212800);
      }
      uVar5 = 1;
    }
LAB_10045dfb:
    local_168[0] = CMultiRTMonitorSelDlg::vftable;
    CComboBox::~CComboBox(local_b8);
    CDialog::~CDialog((CDialog *)local_168);
  }
LAB_10045e3a:
  local_8 = 0xffffffff;
  LOCK();
  pwVar1 = local_1c + -2;
  iVar4 = *(int *)pwVar1;
  *(int *)pwVar1 = *(int *)pwVar1 + -1;
  UNLOCK();
  if (iVar4 == 1 || iVar4 + -1 < 0) {
    (**(code **)(**(int **)(local_1c + -8) + 4))();
  }
  LOCK();
  piVar3 = (int *)(local_28 + -4);
  iVar4 = *piVar3;
  *piVar3 = *piVar3 + -1;
  UNLOCK();
  if (iVar4 == 1 || iVar4 + -1 < 0) {
    (**(code **)(**(int **)(local_28 + -0x10) + 4))();
  }
  ExceptionList = local_10;
  return uVar5;
}

