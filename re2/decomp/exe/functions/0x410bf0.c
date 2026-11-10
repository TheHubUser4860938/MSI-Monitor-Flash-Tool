// rea decompile_all
// name: FUN_00410bf0
// address: 0x410bf0
// body: available
// range: 0x410bf0-0x41117c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x410c41 to 0x40ed80 FUN_0040ed80 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x410c68 to 0x40ed80 FUN_0040ed80 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x410c8c to 0x40ed80 FUN_0040ed80 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x410cb7 to 0x40ed80 FUN_0040ed80 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x410db8 to 0x40ed80 FUN_0040ed80 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x410fa4 to 0x40ed80 FUN_0040ed80 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00410bf0(undefined4 *param_1,undefined4 param_2)

{
  LPCWSTR pWVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  BOOL BVar8;
  wchar_t *pwVar9;
  bool bVar10;
  wchar_t *pwVar11;
  int local_518;
  int local_514;
  int local_510;
  CFileDialog local_50c [1256];
  int local_24;
  wchar_t *local_20;
  LPCWSTR local_1c;
  wchar_t *local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0059ce7c;
  local_10 = ExceptionList;
  uVar2 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_18 = (wchar_t *)0x0;
  local_14 = uVar2;
  piVar3 = (int *)FUN_004295fe(uVar2);
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0040ed80(0x80004005);
  }
  iVar4 = (**(code **)(*piVar3 + 0xc))();
  local_18 = (wchar_t *)(iVar4 + 0x10);
  local_8 = 0;
  piVar3 = (int *)FUN_004295fe(uVar2);
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0040ed80(0x80004005);
  }
  iVar4 = (**(code **)(*piVar3 + 0xc))();
  pwVar9 = (wchar_t *)(iVar4 + 0x10);
  local_8._0_1_ = 1;
  local_20 = pwVar9;
  piVar3 = (int *)FUN_004295fe(uVar2);
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0040ed80(0x80004005);
  }
  iVar4 = (**(code **)(*piVar3 + 0xc))();
  iVar4 = iVar4 + 0x10;
  local_8._0_1_ = 2;
  local_1c = (LPCWSTR)0x0;
  local_24 = iVar4;
  piVar3 = (int *)FUN_004295fe();
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0040ed80(0x80004005);
  }
  iVar5 = (**(code **)(*piVar3 + 0xc))();
  local_1c = (LPCWSTR)(iVar5 + 0x10);
  local_8._0_1_ = 3;
  _memset(local_50c,0,0x4e8);
  CFileDialog::CFileDialog
            (local_50c,1,(wchar_t *)0x0,(wchar_t *)0x0,0,(wchar_t *)*param_1,(CWnd *)0x0,0,1);
  local_8._0_1_ = 4;
  iVar5 = CFileDialog::DoModal(local_50c);
  if (iVar5 == 1) {
    FUN_00415f50(param_1);
    uVar6 = CFileDialog::GetPathName(local_50c);
    local_8._0_1_ = 5;
    FUN_00415f50(uVar6);
    local_8._0_1_ = 4;
    LOCK();
    piVar3 = (int *)(local_518 + -4);
    iVar4 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar4 == 1 || iVar4 + -1 < 0) {
      (**(code **)(**(int **)(local_518 + -0x10) + 4))((undefined4 *)(local_518 + -0x10));
    }
    FUN_00415f50(param_2);
    FUN_00414d90();
    uVar6 = FUN_00414ce0();
    FUN_00415f50(uVar6);
    iVar4 = *(int *)(local_1c + -6);
    if (iVar4 < 5) {
      bVar10 = false;
    }
    else {
      iVar5 = iVar4 + -4;
      if ((iVar5 < 0) || (iVar4 < iVar5)) {
LAB_00410db3:
                    /* WARNING: Subroutine does not return */
        FUN_0040ed80(0x80070057);
      }
      bVar10 = local_1c[iVar5] == L'.';
    }
    iVar5 = FUN_00436bfe();
    iVar4 = local_24;
    local_510 = 0;
    local_514 = *(int *)(iVar5 + 0x18) * 2;
    iVar5 = 0;
    while( true ) {
      if ((((iVar5 < 0) || (*(int *)(iVar4 + -0xc) <= iVar5)) ||
          (iVar7 = FUN_005733fe(iVar4 + iVar5 * 2,0x7c), iVar7 == 0)) ||
         (iVar7 = iVar7 - iVar4 >> 1, iVar7 == -1)) goto LAB_0041106f;
      local_510 = local_510 + 1;
      if (local_510 == local_514) break;
      iVar5 = iVar7 + 1;
    }
    uVar6 = FUN_00415920(&local_514,iVar5,iVar7 - iVar5);
    local_8._0_1_ = 6;
    FUN_00415f50(uVar6);
    local_8._0_1_ = 4;
    LOCK();
    piVar3 = (int *)(local_514 + -4);
    iVar5 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar5 == 1 || iVar5 + -1 < 0) {
      (**(code **)(**(int **)(local_514 + -0x10) + 4))((undefined4 *)(local_514 + -0x10));
    }
    FUN_00414d90();
    uVar6 = FUN_00414ce0();
    FUN_00415f50(uVar6);
    local_510 = 1;
    iVar5 = *(int *)(local_18 + -6);
    if ((0 < iVar5) || (local_510 = iVar5, 0 < iVar5)) {
      iVar5 = iVar5 - local_510;
      if (1 < *(int *)(local_18 + -2)) {
        FUN_0040ebd0(*(undefined4 *)(local_18 + -6));
      }
      iVar7 = iVar5 * 2 + 2;
      FUN_00415320(local_18,iVar7,local_18 + local_510,iVar7);
      if ((iVar5 < 0) || (*(int *)(local_18 + -4) < iVar5)) goto LAB_00410db3;
      *(int *)(local_18 + -6) = iVar5;
      local_18[iVar5] = L'\0';
    }
    if (bVar10) {
      uVar6 = FUN_00414840(&local_514,4);
      local_8._0_1_ = 7;
      FUN_00415f50(uVar6);
      local_8._0_1_ = 4;
      LOCK();
      piVar3 = (int *)(local_514 + -4);
      iVar5 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar5 == 1 || iVar5 + -1 < 0) {
        (**(code **)(**(int **)(local_514 + -0x10) + 4))((undefined4 *)(local_514 + -0x10));
      }
      pwVar9 = local_20;
      if (local_18 == (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0040ed80(0x80004005);
      }
      iVar5 = __wcsicmp(local_20,local_18);
      if (iVar5 == 0) goto LAB_00411112;
      iVar5 = *(int *)(local_18 + -6);
      pwVar11 = local_18;
      if ((iVar5 != *(int *)(pwVar9 + -6)) || (iVar7 = 0, iVar5 < 1)) goto LAB_00411042;
      goto LAB_00410fd2;
    }
    BVar8 = PathFileExistsW(local_1c);
    if (BVar8 == 0) {
      FUN_004157a0(local_18,*(undefined4 *)(local_18 + -6));
      BVar8 = PathFileExistsW(local_1c);
      if (BVar8 == 0) goto LAB_00411129;
    }
  }
LAB_0041106f:
  CFileDialog::~CFileDialog(local_50c);
  local_8._0_1_ = 2;
  LOCK();
  pWVar1 = local_1c + -2;
  iVar5 = *(int *)pWVar1;
  *(int *)pWVar1 = *(int *)pWVar1 + -1;
  UNLOCK();
  if (iVar5 + -1 < 1) {
    (**(code **)(**(int **)(local_1c + -8) + 4))(local_1c + -8);
  }
  local_8._0_1_ = 1;
  LOCK();
  piVar3 = (int *)(iVar4 + -4);
  iVar5 = *piVar3;
  *piVar3 = *piVar3 + -1;
  UNLOCK();
  if (iVar5 == 1 || iVar5 + -1 < 0) {
    (**(code **)(**(int **)(iVar4 + -0x10) + 4))((undefined4 *)(iVar4 + -0x10));
  }
  local_8 = (uint)local_8._1_3_ << 8;
  LOCK();
  pwVar11 = pwVar9 + -2;
  iVar4 = *(int *)pwVar11;
  *(int *)pwVar11 = *(int *)pwVar11 + -1;
  UNLOCK();
  if (iVar4 == 1 || iVar4 + -1 < 0) {
    (**(code **)(**(int **)(pwVar9 + -8) + 4))(pwVar9 + -8);
  }
  local_8 = 0xffffffff;
  LOCK();
  pwVar9 = local_18 + -2;
  iVar4 = *(int *)pwVar9;
  *(int *)pwVar9 = *(int *)pwVar9 + -1;
  UNLOCK();
  if (iVar4 == 1 || iVar4 + -1 < 0) {
    (**(code **)(**(int **)(local_18 + -8) + 4))(local_18 + -8);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
  while( true ) {
    iVar5 = *(int *)(pwVar11 + -6);
    iVar7 = iVar7 + 1;
    if (iVar5 <= iVar7) break;
LAB_00410fd2:
    if ((iVar7 < 0) || (iVar5 < iVar7)) goto LAB_00410db3;
    if (pwVar11[iVar7] == L'*') {
      iVar5 = *(int *)(pwVar9 + -6);
      if (iVar5 <= iVar7) goto LAB_00410db3;
      if (1 < *(int *)(pwVar9 + -2)) {
        FUN_0040ebd0(iVar5);
        pwVar9 = local_20;
      }
      pwVar9[iVar7] = L'*';
      if ((iVar5 < 0) || (*(int *)(pwVar9 + -4) < iVar5)) goto LAB_00410db3;
      *(int *)(pwVar9 + -6) = iVar5;
      pwVar9[iVar5] = L'\0';
      pwVar11 = local_18;
    }
  }
LAB_00411042:
  iVar5 = __wcsicmp(pwVar9,pwVar11);
  if (iVar5 == 0) {
LAB_00411112:
    BVar8 = PathFileExistsW(local_1c);
    if (BVar8 != 0) goto LAB_0041106f;
LAB_00411129:
    pwVar11 = L"File does\'t exist!";
  }
  else {
    pwVar11 = L"File\'s postfix is different from filter!";
  }
  MessageBoxExW((HWND)0x0,pwVar11,L"MSI Firmware Update Utility",0x30,0x409);
  goto LAB_0041106f;
}

