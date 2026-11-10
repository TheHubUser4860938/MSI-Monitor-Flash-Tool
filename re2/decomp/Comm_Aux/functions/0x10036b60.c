// rea decompile_all
// name: FUN_10036b60
// address: 0x10036b60
// body: available
// range: 0x10036b60-0x10036e22 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10036b98 to 0x100351a0 FUN_100351a0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x10036bbf to 0x100351a0 FUN_100351a0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x10036be3 to 0x100351a0 FUN_100351a0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x10036c07 to 0x100351a0 FUN_100351a0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10036b60(int param_1,int param_2,
                 CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this;
  wchar_t *pwStack_38;
  uint uStack_34;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101a0758;
  local_10 = ExceptionList;
  uStack_34 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  pwStack_38 = L"좋즅ੵը@\xe880\xe603\xffffƋ僿茌Ⴠ䖉쟰ﱅ";
  piVar2 = (int *)FUN_10048e90();
  if (piVar2 == (int *)0x0) {
    pwStack_38 = (wchar_t *)0x80004005;
                    /* WARNING: Subroutine does not return */
    FUN_100351a0();
  }
  pwStack_38 = L"삃褐\xf045䗇ü";
  local_14 = (**(code **)(*piVar2 + 0xc))();
  local_14 = local_14 + 0x10;
  local_8 = 0;
  pwStack_38 = (wchar_t *)0x10036bb4;
  piVar2 = (int *)FUN_10048e90();
  if (piVar2 == (int *)0x0) {
    pwStack_38 = (wchar_t *)0x80004005;
                    /* WARNING: Subroutine does not return */
    FUN_100351a0();
  }
  pwStack_38 = (wchar_t *)0x10036bc9;
  local_20 = (**(code **)(*piVar2 + 0xc))();
  local_20 = local_20 + 0x10;
  local_8._0_1_ = 1;
  pwStack_38 = (wchar_t *)0x10036bd8;
  piVar2 = (int *)FUN_10048e90();
  if (piVar2 == (int *)0x0) {
    pwStack_38 = (wchar_t *)0x80004005;
                    /* WARNING: Subroutine does not return */
    FUN_100351a0();
  }
  pwStack_38 = (wchar_t *)0x10036bed;
  iVar3 = (**(code **)(*piVar2 + 0xc))();
  iVar3 = iVar3 + 0x10;
  local_8._0_1_ = 2;
  pwStack_38 = (wchar_t *)0x10036bfc;
  local_18 = iVar3;
  piVar2 = (int *)FUN_10048e90();
  if (piVar2 == (int *)0x0) {
    pwStack_38 = (wchar_t *)0x80004005;
                    /* WARNING: Subroutine does not return */
    FUN_100351a0();
  }
  pwStack_38 = (wchar_t *)0x10036c11;
  local_1c = (**(code **)(*piVar2 + 0xc))();
  local_1c = local_1c + 0x10;
  local_8 = CONCAT31(local_8._1_3_,3);
  if (param_2 == 0) {
    pwStack_38 = L"敒摡";
LAB_10036c33:
    FUN_10034740();
    iVar3 = local_18;
  }
  else if (param_2 == 1) {
    pwStack_38 = L"Write";
    goto LAB_10036c33;
  }
  if (param_1 == 0) {
    pwStack_38 = L"䭏";
  }
  else {
    pwStack_38 = L"慆汩";
  }
  FUN_10034740();
  iVar1 = local_1c;
  pwStack_38 = (wchar_t *)(uint)(byte)param_3[2];
  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
            (param_3,(wchar_t *)&local_20,
             L"I2C Over AUX-CH %s %s!!\n\n ADL_Status: %d\n\n Address: 0x%X\n\n %sSize: %d\n\n Data[0]: 0x%X"
             ,iVar3,local_1c,param_1,(uint)(byte)param_3[1],iVar3);
  if (param_1 == 4) {
    pwStack_38 = L"All OK, but need to wait.\n";
  }
  else if (param_1 == 3) {
    pwStack_38 = L"All OK, but need restart.\n";
  }
  else if (param_1 == 2) {
    pwStack_38 = L"All OK but need mode change.\n";
  }
  else if (param_1 == 1) {
    pwStack_38 = L"All OK, but with warning.\n";
  }
  else if (param_1 == -1) {
    pwStack_38 = 
    L"Generic Error. Most likely one or more of the Escape calls to the driver failed!\n";
  }
  else if (param_1 == -2) {
    pwStack_38 = L"ADL not initialized.\n";
  }
  else if (param_1 == -3) {
    pwStack_38 = L"One of the parameter passed is invalid.\n";
  }
  else if (param_1 == -4) {
    pwStack_38 = L"One of the parameter size is invalid.\n";
  }
  else if (param_1 == -5) {
    pwStack_38 = L"Invalid ADL index passed.\n";
  }
  else if (param_1 == -6) {
    pwStack_38 = L"Invalid controller index passed.\n";
  }
  else if (param_1 == -7) {
    pwStack_38 = L"Invalid display index passed.\n";
  }
  else if (param_1 == -8) {
    pwStack_38 = L"Function not supported by the driver.\n";
  }
  else if (param_1 == -9) {
    pwStack_38 = L"Null Pointer error.\n";
  }
  else if (param_1 == -10) {
    pwStack_38 = L"Call can\'t be made due to disabled adapter.\n";
  }
  else if (param_1 == -0xb) {
    pwStack_38 = L"Invalid Callback.\n";
  }
  else {
    if (param_1 != -0xc) goto LAB_10036d5a;
    pwStack_38 = L"Display Resource conflict.\n";
  }
  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
            (this,(wchar_t *)&local_14);
LAB_10036d5a:
  if (DAT_1021ae54 != 0) {
    FUN_10033d60(&pwStack_38,&local_14);
    local_8._0_1_ = 4;
    FUN_10034a50(&DAT_1021ae10);
    local_8 = CONCAT31(local_8._1_3_,3);
    FUN_10033a90();
  }
  pwStack_38 = (wchar_t *)(iVar1 + -0x10);
  local_8._0_1_ = 2;
  LOCK();
  piVar2 = (int *)(iVar1 + -4);
  iVar1 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar1 == 1 || iVar1 + -1 < 0) {
    (**(code **)(**(int **)pwStack_38 + 4))();
  }
  local_8._0_1_ = 1;
  pwStack_38 = (wchar_t *)(iVar3 + -0x10);
  LOCK();
  piVar2 = (int *)(iVar3 + -4);
  iVar3 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar3 == 1 || iVar3 + -1 < 0) {
    (**(code **)(**(int **)pwStack_38 + 4))();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  pwStack_38 = (wchar_t *)(local_20 + -0x10);
  LOCK();
  piVar2 = (int *)(local_20 + -4);
  iVar3 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar3 == 1 || iVar3 + -1 < 0) {
    (**(code **)(**(int **)pwStack_38 + 4))();
  }
  local_8 = 0xffffffff;
  pwStack_38 = (wchar_t *)(local_14 + -0x10);
  LOCK();
  piVar2 = (int *)(local_14 + -4);
  iVar3 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar3 == 1 || iVar3 + -1 < 0) {
    (**(code **)(**(int **)pwStack_38 + 4))();
  }
  ExceptionList = local_10;
  return;
}

