// rea decompile_all
// name: FUN_1003a3e0
// address: 0x1003a3e0
// body: available
// range: 0x1003a3e0-0x1003a622 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003a472 to 0x100351a0 FUN_100351a0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_1003a3e0(uint param_1,undefined4 param_2,ushort param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_00;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_00;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101a0bf0;
  local_10 = ExceptionList;
  if ((param_4 == 0) && (param_3 != 0)) {
    return 0x801;
  }
  if (DAT_1021ae40 < param_3) {
    return 0x807;
  }
  ExceptionList = &local_10;
  if (DAT_1021ae58 != 0) {
    piVar1 = (int *)FUN_10048e90();
    if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_100351a0();
    }
    iVar2 = (**(code **)(*piVar1 + 0xc))();
    iVar2 = iVar2 + 0x10;
    local_8 = 0;
    param_4 = iVar2;
    ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
              (this,(wchar_t *)&DAT_1021ae14);
    iVar3 = 0;
    this_00 = extraout_ECX;
    if (param_3 != 0) {
      do {
        ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                  (this_00,(wchar_t *)&param_4);
        iVar2 = param_4;
        FUN_10034490();
        iVar3 = iVar3 + 1;
        this_00 = extraout_ECX_00;
      } while (iVar3 < (int)(uint)param_3);
    }
    FUN_10034a50();
    local_8._0_1_ = 1;
    FUN_10034a50(&DAT_1021ae10);
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_10033a90();
    local_8 = 0xffffffff;
    LOCK();
    piVar1 = (int *)(iVar2 + -4);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1 || iVar3 + -1 < 0) {
      (**(code **)(**(int **)(iVar2 + -0x10) + 4))();
    }
  }
  if (DAT_1021ae1c == 2) {
    iVar2 = FUN_100363d0(param_1,param_2);
    if (iVar2 == 0) {
      ExceptionList = local_10;
      return 0x803;
    }
  }
  else if (DAT_1021ae1c == 1) {
    if (DAT_1021aff4 == 2) {
      iVar2 = FUN_10041ed0(param_1 & 0xff,param_2);
    }
    else {
      iVar2 = FUN_1003d850(param_1 & 0xff,param_2);
    }
    if (iVar2 == 0) {
      ExceptionList = local_10;
      return 0x803;
    }
  }
  else {
    if (DAT_1021ae1c != 3) {
      ExceptionList = local_10;
      return 0x804;
    }
    iVar2 = FUN_100452c0(param_1,param_2);
    if (iVar2 == 0) {
      ExceptionList = local_10;
      return 0x803;
    }
  }
  ExceptionList = local_10;
  return 0;
}

