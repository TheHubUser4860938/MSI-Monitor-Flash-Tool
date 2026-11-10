// rea decompile_all
// name: FUN_10036f30
// address: 0x10036f30
// body: available
// range: 0x10036f30-0x1003723b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10037039 to 0x100351a0 FUN_100351a0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_10036f30(void)

{
  wchar_t *pwVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int in_ECX;
  undefined4 uVar5;
  undefined **local_16c [44];
  CComboBox local_bc [136];
  undefined1 *local_34;
  undefined1 *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  wchar_t *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101a07ae;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_10036030();
  local_8 = 0;
  if (DAT_10206ddc == 0) {
LAB_100371d1:
    uVar5 = 0;
    goto LAB_100371d3;
  }
  if (DAT_1021ae2c == 2) {
LAB_10036f97:
    if ((DAT_1021ae38 == 0) || (puVar3 = DAT_10206dd4, *(int *)(DAT_1021ae34 + -6) == 0)) {
LAB_10036fff:
      if (DAT_1021ae2c != 1) goto LAB_100370d5;
LAB_10037008:
      if (DAT_10206ddc < 2) {
        FUN_10037240();
        uVar5 = 1;
        *(undefined4 *)(in_ECX + 0x2c) = local_2c;
        *(undefined4 *)(in_ECX + 0x34) = local_28;
        goto LAB_100371d3;
      }
      if (DAT_1021ae30 != 0) {
        FUN_1003fdf0(DAT_1021ae2c);
        local_8._0_1_ = 1;
        iVar4 = FUN_1004d03c();
        if (iVar4 != 2) goto LAB_1003713d;
        if (DAT_1021ae54 == 0) goto LAB_10037139;
        local_30 = &stack0xfffffe84;
        FUN_100352e0();
        local_34 = &stack0xfffffe80;
        local_8._0_1_ = 2;
        FUN_10034a50(&DAT_1021ae10);
        local_8._0_1_ = 1;
        FUN_10033a90();
        uVar5 = 0;
        goto LAB_10037194;
      }
      FUN_10037240();
    }
    else {
      do {
        if (puVar3 == (undefined4 *)0x0) {
          FUN_10034ea0();
          goto LAB_10036fff;
        }
        puVar3 = (undefined4 *)*puVar3;
        FUN_10037240();
        if (local_14 == (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_100351a0();
        }
        iVar4 = __wcsicmp(DAT_1021ae34,local_14);
      } while (iVar4 != 0);
    }
    uVar5 = 1;
    *(undefined4 *)(in_ECX + 0x2c) = local_2c;
    *(undefined4 *)(in_ECX + 0x34) = local_28;
  }
  else {
    if (DAT_1021ae2c == 1) {
      if (DAT_1021ae30 == 1) goto LAB_10036f97;
      goto LAB_10037008;
    }
LAB_100370d5:
    if (DAT_1021ae2c != 2) {
      WritePrivateProfileStringW(L"Comm_AUX",L"AUX_SelectDeviceInfo",DAT_1021ae34,&DAT_10212800);
      goto LAB_100371d1;
    }
    FUN_1003fdf0(2);
    local_8._0_1_ = 3;
    iVar4 = FUN_1004d03c();
    if (iVar4 == 2) {
      if (DAT_1021ae54 != 0) {
        local_34 = &stack0xfffffe84;
        FUN_100352e0();
        local_30 = &stack0xfffffe80;
        local_8._0_1_ = 4;
        FUN_10034a50(&DAT_1021ae10);
        local_8._0_1_ = 3;
        FUN_10033a90();
      }
LAB_10037139:
      uVar5 = 0;
    }
    else {
LAB_1003713d:
      FUN_10037d90();
      FUN_10037240();
      *(undefined4 *)(in_ECX + 0x2c) = local_2c;
      *(undefined4 *)(in_ECX + 0x34) = local_28;
      if (DAT_1021ae38 != 0) {
        FUN_10034940();
        WritePrivateProfileStringW(L"Comm_AUX",L"AUX_SelectDeviceInfo",DAT_1021ae34,&DAT_10212800);
      }
      uVar5 = 1;
    }
LAB_10037194:
    local_16c[0] = CMultiRTMonitorSelDlg::vftable;
    CComboBox::~CComboBox(local_bc);
    CDialog::~CDialog((CDialog *)local_16c);
  }
LAB_100371d3:
  local_8 = 0xffffffff;
  LOCK();
  pwVar1 = local_14 + -2;
  iVar4 = *(int *)pwVar1;
  *(int *)pwVar1 = *(int *)pwVar1 + -1;
  UNLOCK();
  if (iVar4 == 1 || iVar4 + -1 < 0) {
    (**(code **)(**(int **)(local_14 + -8) + 4))();
  }
  LOCK();
  piVar2 = (int *)(local_20 + -4);
  iVar4 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar4 == 1 || iVar4 + -1 < 0) {
    (**(code **)(**(int **)(local_20 + -0x10) + 4))();
  }
  LOCK();
  piVar2 = (int *)(local_24 + -4);
  iVar4 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar4 == 1 || iVar4 + -1 < 0) {
    (**(code **)(**(int **)(local_24 + -0x10) + 4))();
  }
  ExceptionList = local_10;
  return uVar5;
}

