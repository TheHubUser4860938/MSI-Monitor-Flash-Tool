// rea decompile_all
// name: FUN_10041aa0
// address: 0x10041aa0
// body: available
// range: 0x10041aa0-0x10041c50 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10041aa0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FARPROC pFVar1;
  int iVar2;
  int in_ECX;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_00;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_00;
  undefined1 local_c4 [4];
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_a4;
  undefined1 local_a0 [136];
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101a1336;
  local_10 = ExceptionList;
  local_18 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar2 = *(int *)(in_ECX + 4);
  _memset(local_c4,0,0xac);
  local_a4 = param_3;
  local_c0 = 2;
  local_b8 = param_1;
  local_bc = 1;
  FUN_10181570(local_a0);
  if (iVar2 != 0) {
    this_00 = extraout_ECX;
    if (((DAT_10212a08 == (HMODULE)0x0) ||
        (pFVar1 = GetProcAddress(DAT_10212a08,"ctlAUXAccess"), this_00 = extraout_ECX_00,
        pFVar1 == (FARPROC)0x0)) || (iVar2 = (*pFVar1)(), this_00 = this, iVar2 != 0)) {
      if (DAT_1021ae54 == 1) {
        ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                  (this_00,(wchar_t *)&DAT_1021ae14,
                   L"ctlAUXAccess for Native Aux DPCD WRITE 0x%X returned failure code: 0x%X\n");
        FUN_10034a50();
        local_8 = 0;
        FUN_10034a50(&DAT_1021ae10);
        local_8 = 0xffffffff;
        FUN_10033a90();
      }
    }
    else if (DAT_1021ae54 == 1) {
      ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                (this,(wchar_t *)&DAT_1021ae14,
                 L"ctlAUXAccess for Native Aux DPCD WRITE 0x%X returned Success code: 0x%X\n");
      FUN_10034a50();
      local_8 = 1;
      FUN_10034a50(&DAT_1021ae10);
      local_8 = 0xffffffff;
      FUN_10033a90();
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}

