// rea decompile_all
// name: FUN_004133b0
// address: 0x4133b0
// body: available
// range: 0x4133b0-0x4138eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4133f4 to 0x40ed80 FUN_0040ed80 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41341a to 0x40ed80 FUN_0040ed80 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x413440 to 0x40ed80 FUN_0040ed80 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x413466 to 0x40ed80 FUN_0040ed80 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004133b0(int param_1)

{
  LPCWSTR pWVar1;
  wchar_t *pwVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  BOOL BVar7;
  int in_ECX;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_00;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_00;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_01;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *pCVar8;
  LPCWSTR pWVar9;
  wchar_t *_Str1;
  bool bVar10;
  __uint64 _Var11;
  int *local_4c;
  undefined4 *local_48;
  undefined1 *local_44;
  int *local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  uint local_28;
  wchar_t *local_24;
  int local_20;
  LPCWSTR local_1c;
  int local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_0059d270;
  local_10 = ExceptionList;
  local_14 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  piVar3 = (int *)FUN_004295fe();
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0040ed80();
  }
  local_20 = (**(code **)(*piVar3 + 0xc))();
  local_20 = local_20 + 0x10;
  local_8._0_1_ = 1;
  piVar3 = (int *)FUN_004295fe();
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0040ed80();
  }
  piVar3 = (int *)(**(code **)(*piVar3 + 0xc))();
  local_8._0_1_ = 2;
  local_24 = (wchar_t *)(piVar3 + 4);
  piVar4 = (int *)FUN_004295fe();
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0040ed80();
  }
  piVar4 = (int *)(**(code **)(*piVar4 + 0xc))();
  local_8._0_1_ = 3;
  local_1c = (LPCWSTR)(piVar4 + 4);
  piVar5 = (int *)FUN_004295fe();
  if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0040ed80();
  }
  local_18 = (**(code **)(*piVar5 + 0xc))();
  local_18 = local_18 + 0x10;
  local_48 = (undefined4 *)(in_ECX + 0x174);
  local_8._0_1_ = 4;
  piVar5 = (int *)FUN_00414840(&local_4c);
  local_8._0_1_ = 5;
  local_44 = (undefined1 *)*piVar5;
  piVar5 = (int *)(local_20 + -0x10);
  if ((int *)((int)local_44 + -0x10) != piVar5) {
    local_40 = (int *)(local_20 + -4);
    if ((*(int *)(local_20 + -4) < 0) || (*(int *)((int)local_44 + -0x10) != *piVar5)) {
      FUN_00415e30(local_44);
    }
    else {
      local_44 = (undefined1 *)FUN_00415ee0();
      LOCK();
      iVar6 = *local_40;
      *local_40 = *local_40 + -1;
      UNLOCK();
      if (iVar6 == 1 || iVar6 + -1 < 0) {
        (**(code **)(*(int *)*piVar5 + 4))();
      }
      local_20 = (int)local_44 + 0x10;
    }
  }
  local_8._0_1_ = 4;
  LOCK();
  piVar5 = local_4c + -1;
  iVar6 = *piVar5;
  *piVar5 = *piVar5 + -1;
  UNLOCK();
  if (iVar6 == 1 || iVar6 + -1 < 0) {
    (**(code **)(*(int *)local_4c[-4] + 4))();
  }
  piVar5 = (int *)FUN_004147d0(&local_40);
  local_8._0_1_ = 6;
  local_44 = (undefined1 *)*piVar5;
  pWVar9 = (LPCWSTR)(piVar4 + 4);
  local_4c = piVar4;
  if ((int *)((int)local_44 + -0x10) != piVar4) {
    piVar5 = piVar4 + 3;
    if ((piVar4[3] < 0) || (*(int *)((int)local_44 + -0x10) != *piVar4)) {
      FUN_00415e30(local_44);
      pWVar9 = local_1c;
    }
    else {
      local_44 = (undefined1 *)FUN_00415ee0();
      LOCK();
      iVar6 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar6 == 1 || iVar6 + -1 < 0) {
        (**(code **)(*(int *)*local_4c + 4))();
      }
      local_1c = (LPCWSTR)((int)local_44 + 0x10);
      pWVar9 = local_1c;
    }
  }
  local_8._0_1_ = 4;
  LOCK();
  piVar4 = local_40 + -1;
  iVar6 = *piVar4;
  *piVar4 = *piVar4 + -1;
  UNLOCK();
  if (iVar6 == 1 || iVar6 + -1 < 0) {
    (**(code **)(*(int *)local_40[-4] + 4))();
  }
  piVar4 = (int *)FUN_00414840(&local_40);
  local_8._0_1_ = 7;
  local_44 = (undefined1 *)*piVar4;
  _Str1 = (wchar_t *)(piVar3 + 4);
  local_4c = piVar3;
  if ((int *)(local_44 + -0x10) != piVar3) {
    piVar4 = piVar3 + 3;
    if ((piVar3[3] < 0) || (*(int *)(local_44 + -0x10) != *piVar3)) {
      FUN_00415e30(local_44);
      _Str1 = local_24;
    }
    else {
      local_44 = (undefined1 *)FUN_00415ee0();
      LOCK();
      iVar6 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar6 == 1 || iVar6 + -1 < 0) {
        (**(code **)(*(int *)*local_4c + 4))();
      }
      local_24 = (wchar_t *)(local_44 + 0x10);
      _Str1 = local_24;
    }
  }
  local_8._0_1_ = 4;
  LOCK();
  piVar3 = local_40 + -1;
  iVar6 = *piVar3;
  *piVar3 = *piVar3 + -1;
  UNLOCK();
  if (iVar6 == 1 || iVar6 + -1 < 0) {
    (**(code **)(*(int *)local_40[-4] + 4))();
  }
  iVar6 = __wcsicmp(_Str1,L".bin");
  pCVar8 = this;
  if (iVar6 == 0) {
    local_28 = 0;
    ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
              (this,(wchar_t *)&local_18,L"Checksum from bin file name:%ls");
    local_4c = (int *)&stack0xffffff9c;
    FUN_00415c00(&local_18);
    FUN_00411180();
    FUN_00415460(&local_4c,&DAT_005e9e38);
    local_8._0_1_ = 8;
    FUN_00415f50();
    local_8._0_1_ = 4;
    piVar4 = local_4c + -4;
    LOCK();
    piVar3 = local_4c + -1;
    iVar6 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar6 == 1 || iVar6 + -1 < 0) {
      (**(code **)(*(int *)*piVar4 + 4))();
    }
    pWVar9 = local_1c;
    BVar7 = StrToIntExW(local_1c,1,(int *)&local_28);
    pCVar8 = extraout_ECX;
    if (BVar7 != 0) {
      local_2c = 0;
      local_3c = 0;
      uStack_38 = 0;
      uStack_34 = 0;
      uStack_30 = 0;
      CFile::CFile((CFile *)&local_3c);
      local_8._0_1_ = 9;
      CFile::Open((CFile *)&local_3c,(wchar_t *)*local_48,0x8000,(CFileException *)0x0);
      _Var11 = CFile::GetLength((CFile *)&local_3c);
      local_40 = (int *)FUN_00416444();
      _memset(local_40,0,(uint)_Var11 + 1);
      CFile::Read((CFile *)&local_3c,local_40,(uint)_Var11);
      CFile::Close((CFile *)&local_3c);
      local_48 = (undefined4 *)FUN_004119a0(local_40);
      ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                (this_00,(wchar_t *)&local_18,
                 L"Checksum from bin file name string to int:0x%x checksum from bin content:0x%x",
                 local_28);
      local_44 = &stack0xffffff9c;
      FUN_00415c00(&local_18);
      FUN_00411180();
      pCVar8 = extraout_ECX_00;
      if (local_40 != (int *)0x0) {
        FID_conflict__free(local_40);
        pCVar8 = extraout_ECX_01;
      }
      bVar10 = ((uint)local_48 & 0xffff) == local_28;
      if (bVar10) {
        ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                  (pCVar8,(wchar_t *)&local_18);
        local_48 = (undefined4 *)&stack0xffffff9c;
        FUN_00415c00(&local_18);
        FUN_00411180();
      }
      else {
        ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                  (pCVar8,(wchar_t *)&local_18);
        local_48 = (undefined4 *)&stack0xffffff9c;
        FUN_00415c00(&local_18);
        FUN_00411180();
      }
      local_40 = (int *)(uint)bVar10;
      FUN_00438358();
      goto LAB_00413837;
    }
  }
  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
            (pCVar8,(wchar_t *)&local_18);
  local_48 = (undefined4 *)&stack0xffffff9c;
  FUN_00415c00(&local_18);
  FUN_00411180();
  local_40 = (int *)0x0;
LAB_00413837:
  local_8._0_1_ = 3;
  LOCK();
  piVar3 = (int *)(local_18 + -4);
  iVar6 = *piVar3;
  *piVar3 = *piVar3 + -1;
  UNLOCK();
  if (iVar6 == 1 || iVar6 + -1 < 0) {
    (**(code **)(**(int **)(local_18 + -0x10) + 4))();
  }
  local_8._0_1_ = 2;
  LOCK();
  pWVar1 = pWVar9 + -2;
  iVar6 = *(int *)pWVar1;
  *(int *)pWVar1 = *(int *)pWVar1 + -1;
  UNLOCK();
  if (iVar6 == 1 || iVar6 + -1 < 0) {
    (**(code **)(**(int **)(pWVar9 + -8) + 4))();
  }
  local_8._0_1_ = 1;
  LOCK();
  pwVar2 = _Str1 + -2;
  iVar6 = *(int *)pwVar2;
  *(int *)pwVar2 = *(int *)pwVar2 + -1;
  UNLOCK();
  if (iVar6 == 1 || iVar6 + -1 < 0) {
    (**(code **)(**(int **)(_Str1 + -8) + 4))();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  LOCK();
  piVar3 = (int *)(local_20 + -4);
  iVar6 = *piVar3;
  *piVar3 = *piVar3 + -1;
  UNLOCK();
  if (iVar6 == 1 || iVar6 + -1 < 0) {
    (**(code **)(**(int **)(local_20 + -0x10) + 4))();
  }
  local_8 = 0xffffffff;
  LOCK();
  piVar3 = (int *)(param_1 + -4);
  iVar6 = *piVar3;
  *piVar3 = *piVar3 + -1;
  UNLOCK();
  if (iVar6 == 1 || iVar6 + -1 < 0) {
    (**(code **)(**(int **)(param_1 + -0x10) + 4))();
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

