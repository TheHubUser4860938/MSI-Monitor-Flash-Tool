// rea decompile_all
// name: FUN_1003f500
// address: 0x1003f500
// body: available
// range: 0x1003f500-0x1003f816 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003f53c to 0x100351a0 FUN_100351a0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1003f55c to 0x100351a0 FUN_100351a0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_1003f500(void)

{
  wchar_t *pwVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int in_ECX;
  undefined4 uVar5;
  undefined **local_168 [44];
  CComboBox local_b8 [140];
  int local_2c;
  undefined4 local_24;
  wchar_t *local_1c;
  undefined1 *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101a104e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar3 = (int *)FUN_10048e90();
  if (piVar3 == (int *)0x0) {
LAB_1003f537:
                    /* WARNING: Subroutine does not return */
    FUN_100351a0();
  }
  local_2c = (**(code **)(*piVar3 + 0xc))();
  local_2c = local_2c + 0x10;
  piVar3 = (int *)FUN_10048e90();
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_100351a0();
  }
  iVar4 = (**(code **)(*piVar3 + 0xc))();
  local_1c = (wchar_t *)(iVar4 + 0x10);
  local_8 = 0;
  if (DAT_10206e78 == 0) {
LAB_1003f7c6:
    uVar5 = 0;
    goto LAB_1003f7c8;
  }
  if (DAT_1021ae2c == 2) {
LAB_1003f59f:
    if ((DAT_1021ae38 == 0) || (puVar2 = DAT_10206e70, *(int *)(DAT_1021ae34 + -6) == 0)) {
LAB_1003f60e:
      if (DAT_1021ae2c != 1) goto LAB_1003f6ce;
LAB_1003f617:
      if (DAT_10206e78 < 2) {
        FUN_1003f820();
        uVar5 = 1;
        *(undefined4 *)(in_ECX + 4) = local_24;
        goto LAB_1003f7c8;
      }
      if (DAT_1021ae30 != 0) {
        FUN_1003fdf0(DAT_1021ae2c);
        local_8._0_1_ = 1;
        iVar4 = FUN_1004d03c();
        if (iVar4 != 2) goto LAB_1003f738;
        if (DAT_1021ae54 == 0) goto LAB_1003f734;
        local_14 = &stack0xfffffe88;
        FUN_100352e0();
        local_18 = &stack0xfffffe84;
        local_8._0_1_ = 2;
        FUN_10034a50(&DAT_1021ae10);
        local_8._0_1_ = 1;
        FUN_10033a90();
        uVar5 = 0;
        goto LAB_1003f789;
      }
      FUN_1003f820();
    }
    else {
      do {
        if (puVar2 == (undefined4 *)0x0) {
          FUN_10034ea0();
          goto LAB_1003f60e;
        }
        puVar2 = (undefined4 *)*puVar2;
        FUN_1003f820();
        if (local_1c == (wchar_t *)0x0) goto LAB_1003f537;
        iVar4 = __wcsicmp(DAT_1021ae34,local_1c);
      } while (iVar4 != 0);
    }
    uVar5 = 1;
    *(undefined4 *)(in_ECX + 4) = local_24;
  }
  else {
    if (DAT_1021ae2c == 1) {
      if (DAT_1021ae30 == 1) goto LAB_1003f59f;
      goto LAB_1003f617;
    }
LAB_1003f6ce:
    if (DAT_1021ae2c != 2) {
      WritePrivateProfileStringW(L"Comm_AUX",L"AUX_SelectDeviceInfo",DAT_1021ae34,&DAT_10212800);
      goto LAB_1003f7c6;
    }
    FUN_1003fdf0(2);
    local_8._0_1_ = 3;
    iVar4 = FUN_1004d03c();
    if (iVar4 == 2) {
      if (DAT_1021ae54 != 0) {
        local_18 = &stack0xfffffe88;
        FUN_100352e0();
        local_14 = &stack0xfffffe84;
        local_8._0_1_ = 4;
        FUN_10034a50(&DAT_1021ae10);
        local_8._0_1_ = 3;
        FUN_10033a90();
      }
LAB_1003f734:
      uVar5 = 0;
    }
    else {
LAB_1003f738:
      FUN_1003fab0();
      FUN_1003f820();
      *(undefined4 *)(in_ECX + 4) = local_24;
      if (DAT_1021ae38 != 0) {
        FUN_10034940();
        WritePrivateProfileStringW(L"Comm_AUX",L"AUX_SelectDeviceInfo",DAT_1021ae34,&DAT_10212800);
      }
      uVar5 = 1;
    }
LAB_1003f789:
    local_168[0] = CMultiRTMonitorSelDlg::vftable;
    CComboBox::~CComboBox(local_b8);
    CDialog::~CDialog((CDialog *)local_168);
  }
LAB_1003f7c8:
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
  piVar3 = (int *)(local_2c + -4);
  iVar4 = *piVar3;
  *piVar3 = *piVar3 + -1;
  UNLOCK();
  if (iVar4 == 1 || iVar4 + -1 < 0) {
    (**(code **)(**(int **)(local_2c + -0x10) + 4))();
  }
  ExceptionList = local_10;
  return uVar5;
}

