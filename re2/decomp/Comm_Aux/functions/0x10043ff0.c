// rea decompile_all
// name: FUN_10043ff0
// address: 0x10043ff0
// body: available
// range: 0x10043ff0-0x10044373 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1004402c to 0x100351a0 FUN_100351a0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_10043ff0(void)

{
  wchar_t *pwVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int in_ECX;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_00;
  undefined4 uVar5;
  undefined **local_170 [44];
  CComboBox local_c0 [140];
  wchar_t *local_34;
  undefined4 local_30;
  undefined1 *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = -1;
  puStack_c = &LAB_101a153e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar3 = (int *)FUN_10048e90();
  if (piVar3 == (int *)0x0) {
LAB_10044027:
                    /* WARNING: Subroutine does not return */
    FUN_100351a0();
  }
  iVar4 = (**(code **)(*piVar3 + 0xc))();
  local_34 = (wchar_t *)(iVar4 + 0x10);
  local_8 = 0;
  if (DAT_10206ed4 == 0) {
LAB_1004433d:
    uVar5 = 0;
    goto LAB_1004433f;
  }
  if (DAT_1021ae54 != 0) {
    ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
              (this,(wchar_t *)&DAT_1021ae14);
    local_14 = &stack0xfffffe80;
    local_18 = &stack0xfffffe80;
    FUN_10034a50();
    local_18 = &stack0xfffffe7c;
    local_8._0_1_ = 1;
    FUN_10034a50(&DAT_1021ae10);
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_10033a90();
  }
  if (DAT_1021ae2c == 2) {
LAB_100440c3:
    if ((DAT_1021ae38 == 0) || (puVar2 = DAT_10206ecc, *(int *)(DAT_1021ae34 + -6) == 0)) {
LAB_10044133:
      if (DAT_1021ae2c != 1) goto LAB_10044241;
LAB_1004413c:
      if (DAT_10206ed4 < 2) {
        FUN_100403e0();
        *(undefined4 *)(in_ECX + 4) = local_30;
        if (DAT_1021ae54 != 0) {
          ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                    (this_00,(wchar_t *)&DAT_1021ae14);
          local_18 = &stack0xfffffe80;
          local_14 = &stack0xfffffe80;
          FUN_10034a50();
          local_14 = &stack0xfffffe7c;
          local_8._0_1_ = 2;
          FUN_10034a50(&DAT_1021ae10);
          local_8 = (uint)local_8._1_3_ << 8;
          FUN_10033a90();
        }
        uVar5 = 1;
        goto LAB_1004433f;
      }
      if (DAT_1021ae30 != 0) {
        FUN_1003fdf0(DAT_1021ae2c);
        local_8._0_1_ = 3;
        iVar4 = FUN_1004d03c();
        if (iVar4 != 2) goto LAB_100442aa;
        if (DAT_1021ae54 == 0) goto LAB_100442a6;
        local_18 = &stack0xfffffe80;
        FUN_100352e0();
        local_14 = &stack0xfffffe7c;
        local_8._0_1_ = 4;
        FUN_10034a50(&DAT_1021ae10);
        local_8._0_1_ = 3;
        FUN_10033a90();
        uVar5 = 0;
        goto LAB_10044300;
      }
      FUN_100403e0();
    }
    else {
      do {
        if (puVar2 == (undefined4 *)0x0) {
          FUN_10034ea0();
          goto LAB_10044133;
        }
        puVar2 = (undefined4 *)*puVar2;
        FUN_100403e0();
        if (local_34 == (wchar_t *)0x0) goto LAB_10044027;
        iVar4 = __wcsicmp(DAT_1021ae34,local_34);
      } while (iVar4 != 0);
    }
    uVar5 = 1;
    *(undefined4 *)(in_ECX + 4) = local_30;
  }
  else {
    if (DAT_1021ae2c == 1) {
      if (DAT_1021ae30 == 1) goto LAB_100440c3;
      goto LAB_1004413c;
    }
LAB_10044241:
    if (DAT_1021ae2c != 2) {
      WritePrivateProfileStringW(L"Comm_AUX",L"AUX_SelectDeviceInfo",DAT_1021ae34,&DAT_10212800);
      goto LAB_1004433d;
    }
    FUN_1003fdf0(2);
    local_8._0_1_ = 5;
    iVar4 = FUN_1004d03c();
    if (iVar4 == 2) {
      if (DAT_1021ae54 != 0) {
        local_18 = &stack0xfffffe80;
        FUN_100352e0();
        local_14 = &stack0xfffffe7c;
        local_8._0_1_ = 6;
        FUN_10034a50(&DAT_1021ae10);
        local_8._0_1_ = 5;
        FUN_10033a90();
      }
LAB_100442a6:
      uVar5 = 0;
    }
    else {
LAB_100442aa:
      FUN_10040690();
      FUN_100403e0();
      *(undefined4 *)(in_ECX + 4) = local_30;
      if (DAT_1021ae38 != 0) {
        FUN_10034940();
        WritePrivateProfileStringW(L"Comm_AUX",L"AUX_SelectDeviceInfo",DAT_1021ae34,&DAT_10212800);
      }
      uVar5 = 1;
    }
LAB_10044300:
    local_170[0] = CMultiRTMonitorSelDlg::vftable;
    CComboBox::~CComboBox(local_c0);
    CDialog::~CDialog((CDialog *)local_170);
  }
LAB_1004433f:
  local_8 = 0xffffffff;
  LOCK();
  pwVar1 = local_34 + -2;
  iVar4 = *(int *)pwVar1;
  *(int *)pwVar1 = *(int *)pwVar1 + -1;
  UNLOCK();
  if (iVar4 == 1 || iVar4 + -1 < 0) {
    (**(code **)(**(int **)(local_34 + -8) + 4))();
  }
  ExceptionList = local_10;
  return uVar5;
}

