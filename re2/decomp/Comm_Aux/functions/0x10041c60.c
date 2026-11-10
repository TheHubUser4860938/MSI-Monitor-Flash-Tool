// rea decompile_all
// name: FUN_10041c60
// address: 0x10041c60
// body: available
// range: 0x10041c60-0x10041ec3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10041c60(undefined4 param_1,undefined4 param_2,uint param_3)

{
  FARPROC pFVar1;
  int iVar2;
  int in_ECX;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_00;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_01;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *pCVar3;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_02;
  uint uVar4;
  undefined1 local_c4 [4];
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  uint local_a4;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101a1381;
  local_10 = ExceptionList;
  local_18 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  _memset(local_c4,0,0xac);
  local_c0 = 1;
  local_b8 = param_1;
  local_a4 = param_3;
  local_bc = 1;
  if (*(int *)(in_ECX + 4) != 0) {
    pCVar3 = extraout_ECX;
    if (((DAT_10212a08 == (HMODULE)0x0) ||
        (pFVar1 = GetProcAddress(DAT_10212a08,"ctlAUXAccess"), pCVar3 = extraout_ECX_00,
        pFVar1 == (FARPROC)0x0)) || (iVar2 = (*pFVar1)(), pCVar3 = this, iVar2 != 0)) {
      if (DAT_1021ae54 == 1) {
        ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                  (pCVar3,(wchar_t *)&DAT_1021ae14,
                   L"hDisplayOutput 0x%X, ctlAUXAccess for Native Aux DPCD 0x%X Read returned failure code: 0x%X\n"
                   ,*(undefined4 *)(in_ECX + 4));
        FUN_10034a50();
        local_8 = 0;
        FUN_10034a50(&DAT_1021ae10);
        local_8 = 0xffffffff;
        FUN_10033a90();
      }
    }
    else {
      if (DAT_1021ae54 == 1) {
        ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                  (this,(wchar_t *)&DAT_1021ae14,
                   L"ctlAUXAccess for Native Aux DPCD 0x%X Read returned Success code: 0x%X\n");
        FUN_10034a50();
        local_8 = 1;
        FUN_10034a50(&DAT_1021ae10);
        local_8 = 0xffffffff;
        FUN_10033a90();
        if ((DAT_1021ae54 == 1) && (local_a4 != 0)) {
          uVar4 = 0;
          pCVar3 = extraout_ECX_01;
          do {
            ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                      (pCVar3,(wchar_t *)&DAT_1021ae14,L"Read data[%d] = : 0x%X\n");
            FUN_10034a50();
            local_8 = 2;
            FUN_10034a50(&DAT_1021ae10);
            local_8 = 0xffffffff;
            FUN_10033a90();
            uVar4 = uVar4 + 1;
            pCVar3 = extraout_ECX_02;
          } while (uVar4 < local_a4);
        }
      }
      FUN_10181570(param_2);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}

