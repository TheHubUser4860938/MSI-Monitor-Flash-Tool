// rea decompile_all
// name: FUN_10036880
// address: 0x10036880
// body: available
// range: 0x10036880-0x10036b5e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100368cb to 0x100351a0 FUN_100351a0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x100368f2 to 0x100351a0 FUN_100351a0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x10036916 to 0x100351a0 FUN_100351a0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1003693a to 0x100351a0 FUN_100351a0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10036880(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_00;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *pCVar4;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *pCStack_68;
  uint uStack_64;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101a0708;
  local_10 = ExceptionList;
  uStack_64 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_3c = param_2;
  uStack_38 = param_3;
  iStack_34 = param_4;
  uStack_30 = param_5;
  local_2c = param_6;
  uStack_28 = param_7;
  uStack_24 = param_8;
  uStack_20 = param_9;
  pCStack_68 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)0x100368c0;
  local_14 = uStack_64;
  piVar2 = (int *)FUN_10048e90();
  if (piVar2 == (int *)0x0) {
    pCStack_68 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)0x80004005;
                    /* WARNING: Subroutine does not return */
    FUN_100351a0();
  }
  pCStack_68 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)0x100368d5;
  local_40 = (**(code **)(*piVar2 + 0xc))();
  local_40 = local_40 + 0x10;
  local_8 = 0;
  pCStack_68 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)0x100368e7;
  piVar2 = (int *)FUN_10048e90();
  if (piVar2 == (int *)0x0) {
    pCStack_68 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)0x80004005;
                    /* WARNING: Subroutine does not return */
    FUN_100351a0();
  }
  pCStack_68 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)0x100368fc;
  local_4c = (**(code **)(*piVar2 + 0xc))();
  local_4c = local_4c + 0x10;
  local_8._0_1_ = 1;
  pCStack_68 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)0x1003690b;
  piVar2 = (int *)FUN_10048e90();
  if (piVar2 == (int *)0x0) {
    pCStack_68 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)0x80004005;
                    /* WARNING: Subroutine does not return */
    FUN_100351a0();
  }
  pCStack_68 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)0x10036920;
  iVar3 = (**(code **)(*piVar2 + 0xc))();
  iVar3 = iVar3 + 0x10;
  local_8._0_1_ = 2;
  pCStack_68 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)0x1003692f;
  local_44 = iVar3;
  piVar2 = (int *)FUN_10048e90();
  if (piVar2 == (int *)0x0) {
    pCStack_68 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)0x80004005;
                    /* WARNING: Subroutine does not return */
    FUN_100351a0();
  }
  pCStack_68 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)0x10036944;
  local_48 = (**(code **)(*piVar2 + 0xc))();
  local_48 = local_48 + 0x10;
  local_8 = CONCAT31(local_8._1_3_,3);
  if (iStack_34 == 0) {
    pCStack_68 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&DAT_101e301c
    ;
LAB_10036966:
    FUN_10034740();
    iVar3 = local_44;
  }
  else if (iStack_34 == 1) {
    pCStack_68 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)0x101e3024;
    goto LAB_10036966;
  }
  if (param_1 == 0) {
    pCStack_68 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)0x2;
  }
  else {
    pCStack_68 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)0x4;
  }
  FUN_100351f0();
  iVar1 = local_48;
  pCStack_68 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
               (int)(char)uStack_28;
  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
            (this,(wchar_t *)&local_4c,
             L"Native AUX-CH %s %s!!\n\n ADL_Status: %d\n\n Address: 0x%X\n\n %sSize: %d\n\n Data[0]: 0x%X"
             ,iVar3,local_48,param_1,uStack_30,iVar3);
  if (param_1 == 4) {
    pCStack_68 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)0x101e30e8;
  }
  else if (param_1 == 3) {
    pCStack_68 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)0x101e3120;
  }
  else if (param_1 == 2) {
    pCStack_68 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)0x101e3158;
  }
  else if (param_1 == 1) {
    pCStack_68 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)0x101e3194;
  }
  else if (param_1 == -1) {
    pCStack_68 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)0x101e31d0;
  }
  else if (param_1 == -2) {
    pCStack_68 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)0x101e3274;
  }
  else if (param_1 == -3) {
    pCStack_68 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)0x101e32a0;
  }
  else if (param_1 == -4) {
    pCStack_68 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)0x101e32f8;
  }
  else if (param_1 == -5) {
    pCStack_68 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)0x101e3348;
  }
  else if (param_1 == -6) {
    pCStack_68 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)0x101e3380;
  }
  else if (param_1 == -7) {
    pCStack_68 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)0x101e33c4;
  }
  else if (param_1 == -8) {
    pCStack_68 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)0x101e3408;
  }
  else if (param_1 == -9) {
    pCStack_68 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)0x101e3458;
  }
  else if (param_1 == -10) {
    pCStack_68 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)0x101e3488;
  }
  else if (param_1 == -0xb) {
    pCStack_68 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)0x101e34e4;
  }
  else {
    pCVar4 = this_00;
    if (param_1 != -0xc) goto LAB_10036a8c;
    pCStack_68 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)0x101e350c;
  }
  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
            (this_00,(wchar_t *)&local_40);
  pCVar4 = extraout_ECX;
LAB_10036a8c:
  if (DAT_1021ae54 != 0) {
    pCStack_68 = pCVar4;
    FUN_10033d60(&pCStack_68,&local_40);
    local_8._0_1_ = 4;
    FUN_10034a50(&DAT_1021ae10);
    local_8 = CONCAT31(local_8._1_3_,3);
    FUN_10033a90();
  }
  pCVar4 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)(iVar1 + -0x10);
  local_8._0_1_ = 2;
  LOCK();
  piVar2 = (int *)(iVar1 + -4);
  iVar1 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar1 == 1 || iVar1 + -1 < 0) {
    pCStack_68 = pCVar4;
    (**(code **)(**(int **)pCVar4 + 4))();
  }
  local_8._0_1_ = 1;
  LOCK();
  piVar2 = (int *)(iVar3 + -4);
  iVar1 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar1 == 1 || iVar1 + -1 < 0) {
    pCStack_68 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                 (iVar3 + -0x10);
    (**(code **)(**(int **)(iVar3 + -0x10) + 4))();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  LOCK();
  piVar2 = (int *)(local_4c + -4);
  iVar3 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar3 == 1 || iVar3 + -1 < 0) {
    pCStack_68 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                 (local_4c + -0x10);
    (**(code **)(**(int **)(local_4c + -0x10) + 4))();
  }
  local_8 = 0xffffffff;
  LOCK();
  piVar2 = (int *)(local_40 + -4);
  iVar3 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar3 == 1 || iVar3 + -1 < 0) {
    pCStack_68 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                 (local_40 + -0x10);
    (**(code **)(**(int **)(local_40 + -0x10) + 4))();
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

