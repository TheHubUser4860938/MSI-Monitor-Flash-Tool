// rea decompile_all
// name: FUN_1003d5a0
// address: 0x1003d5a0
// body: available
// range: 0x1003d5a0-0x1003d845 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003d5f4 to 0x100351a0 FUN_100351a0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003d5a0(undefined4 param_1,undefined4 param_2,wchar_t *param_3)

{
  wchar_t *pwVar1;
  int *piVar2;
  wchar_t *pwVar3;
  int iVar4;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this;
  wchar_t *pwStack_7c;
  int *piStack_78;
  undefined *puStack_74;
  undefined4 uStack_70;
  undefined4 *puStack_6c;
  wchar_t **ppwStack_68;
  uint uStack_64;
  wchar_t *local_50;
  undefined1 *local_4c;
  undefined4 *local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  wchar_t *pwStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  int local_14;
  
  puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  puStack_18 = &LAB_101a0e18;
  local_1c = ExceptionList;
  uStack_64 = DAT_10206460 ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  ppwStack_68 = (wchar_t **)0x1003d5e9;
  local_24 = uStack_64;
  piVar2 = (int *)FUN_10048e90();
  if (piVar2 == (int *)0x0) {
    ppwStack_68 = (wchar_t **)0x80004005;
                    /* WARNING: Subroutine does not return */
    puStack_6c = (undefined4 *)0x1003d5f9;
    FUN_100351a0();
  }
  ppwStack_68 = (wchar_t **)0x1003d600;
  pwVar3 = (wchar_t *)(**(code **)(*piVar2 + 0xc))();
  local_14 = 0;
  ppwStack_68 = &local_50;
  puStack_6c = &local_44;
  local_50 = (wchar_t *)0x0;
  local_44 = local_48[1];
  uStack_38 = param_1;
  pwStack_3c = param_3;
  piStack_78 = (int *)*local_48;
  uStack_70 = 0x20;
  local_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_40 = 9;
  puStack_74 = &DAT_101e2428;
  pwStack_7c = (wchar_t *)0x1003d657;
  iVar4 = (**(code **)(*piStack_78 + 0xac))();
  if ((iVar4 < 0) || (local_50 != (wchar_t *)0x0)) {
    if (local_50 == (wchar_t *)0x43) {
      if (DAT_1021ae54 != 1) goto LAB_1003d808;
      pwStack_7c = L"Invalid AUX device!\n";
      ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                (this,(wchar_t *)&DAT_1021ae14);
      local_48 = &pwStack_7c;
      local_4c = (undefined1 *)&pwStack_7c;
      FUN_10034a50();
      local_4c = &stack0xffffff80;
      local_14._0_1_ = 1;
    }
    else {
      if (local_50 == (wchar_t *)0x44) {
        if (DAT_1021ae54 != 1) goto LAB_1003d808;
        pwStack_7c = L"Invalid AUX address!\n";
        ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                  (this,(wchar_t *)&DAT_1021ae14);
        local_4c = (undefined1 *)&pwStack_7c;
        local_48 = &pwStack_7c;
        FUN_10034a50();
        local_14._0_1_ = 2;
      }
      else if (local_50 == (wchar_t *)0x45) {
        if (DAT_1021ae54 != 1) goto LAB_1003d808;
        pwStack_7c = L"Invalid AUX data size!\n";
        ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                  (this,(wchar_t *)&DAT_1021ae14);
        local_4c = (undefined1 *)&pwStack_7c;
        local_48 = &pwStack_7c;
        FUN_10034a50();
        local_14._0_1_ = 3;
      }
      else if (local_50 == (wchar_t *)0x46) {
        if (DAT_1021ae54 != 1) goto LAB_1003d808;
        pwStack_7c = L"Native AUX transaction defer!\n";
        ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                  (this,(wchar_t *)&DAT_1021ae14);
        local_4c = (undefined1 *)&pwStack_7c;
        local_48 = &pwStack_7c;
        FUN_10034a50();
        local_14._0_1_ = 4;
      }
      else if (local_50 == (wchar_t *)0x47) {
        if (DAT_1021ae54 != 1) goto LAB_1003d808;
        pwStack_7c = L"AUX Transaction timer out!\n";
        ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                  (this,(wchar_t *)&DAT_1021ae14);
        local_4c = (undefined1 *)&pwStack_7c;
        local_48 = &pwStack_7c;
        FUN_10034a50();
        local_14._0_1_ = 5;
      }
      else {
        if (DAT_1021ae54 != 1) goto LAB_1003d808;
        pwStack_7c = local_50;
        ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                  (this,(wchar_t *)&DAT_1021ae14);
        local_4c = (undefined1 *)&pwStack_7c;
        local_48 = &pwStack_7c;
        FUN_10034a50();
        local_14._0_1_ = 6;
      }
      local_48 = (undefined4 *)&stack0xffffff80;
    }
    FUN_10034a50(&DAT_1021ae10);
    local_14 = (uint)local_14._1_3_ << 8;
    FUN_10033a90();
  }
  else if (pwStack_3c != (wchar_t *)0x0) {
    pwStack_7c = pwStack_3c;
    FUN_10181570(param_2);
  }
LAB_1003d808:
  local_14 = 0xffffffff;
  LOCK();
  pwVar1 = pwVar3 + 6;
  iVar4 = *(int *)pwVar1;
  *(int *)pwVar1 = *(int *)pwVar1 + -1;
  UNLOCK();
  if (iVar4 == 1 || iVar4 + -1 < 0) {
    pwStack_7c = pwVar3;
    (**(code **)(**(int **)pwVar3 + 4))();
  }
  ExceptionList = local_1c;
  uStack_70 = 0x1003d83d;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}

