// rea decompile_all
// name: FUN_10043900
// address: 0x10043900
// body: available
// range: 0x10043900-0x10043b49 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_10043900(void)

{
  bool bVar1;
  int iVar2;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_00;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *pCVar3;
  uint uStack_2c;
  uint uStack_28;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101a0858;
  local_10 = ExceptionList;
  uStack_28 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  bVar1 = false;
  local_14 = (uint *)((uint)local_14 & 0xff000000);
  uStack_2c = 3;
  iVar2 = FUN_10041c60(0x400);
  pCVar3 = extraout_ECX;
  if (iVar2 != 0) {
    pCVar3 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_14;
    if (DAT_1021ae6c == 0) {
      if (((short)local_14 == -0x2000) && (local_14._2_1_ == 0x4c)) {
        if (DAT_1021ae54 != 0) {
          uStack_2c = 0x4c;
          ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                    (pCVar3,(wchar_t *)&DAT_1021ae14,
                     L"Check DPCD table 0x400 success, dpcd value: %02X, %02X, %02X",
                     (uint)local_14 & 0xff);
          local_14 = &uStack_2c;
          FUN_10034a50();
          local_8 = 0;
          FUN_10034a50(&DAT_1021ae10);
          local_8 = 0xffffffff;
          FUN_10033a90();
          ExceptionList = local_10;
          return 1;
        }
        ExceptionList = local_10;
        return 1;
      }
    }
    else if (((short)local_14 == 0) && (local_14._2_1_ == 0)) {
      bVar1 = true;
    }
  }
  if (DAT_1021ae54 != 0) {
    uStack_2c = (uint)local_14._2_1_;
    ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
              (pCVar3,(wchar_t *)&DAT_1021ae14,
               L"Check DPCD table 0x400 fail, dpcd value: %02X, %02X, %02X",(uint)local_14 & 0xff);
    FUN_10034a50();
    local_8 = 1;
    FUN_10034a50(&DAT_1021ae10);
    local_8 = 0xffffffff;
    FUN_10033a90();
  }
  local_14 = (uint *)((uint)local_14 & 0xff000000);
  uStack_2c = 3;
  iVar2 = FUN_10041c60(0x500);
  pCVar3 = extraout_ECX_00;
  if (iVar2 != 0) {
    pCVar3 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_14;
    if (((short)local_14 == -0x2000) && (local_14._2_1_ == 0x4c)) {
      if (DAT_1021ae6c != 1) {
        ExceptionList = local_10;
        return 1;
      }
      if (!bVar1) {
        ExceptionList = local_10;
        return 0;
      }
      ExceptionList = local_10;
      return 1;
    }
  }
  if (DAT_1021ae54 != 0) {
    uStack_2c = (uint)local_14._2_1_;
    ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
              (pCVar3,(wchar_t *)&DAT_1021ae14,
               L"Check DPCD table 0x500 fail, dpcd value: %02X, %02X, %02X",(uint)local_14 & 0xff);
    FUN_10034a50();
    local_8 = 2;
    FUN_10034a50(&DAT_1021ae10);
    local_8 = 0xffffffff;
    FUN_10033a90();
  }
  ExceptionList = local_10;
  return 0;
}

