// rea decompile_all
// name: FUN_10039c00
// address: 0x10039c00
// body: available
// range: 0x10039c00-0x10039e4c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_10039c00(void)

{
  int iVar1;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *in_ECX;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_00;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_01;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_02;
  wchar_t *pwStack_20;
  uint uStack_1c;
  undefined1 *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101a0b38;
  local_10 = ExceptionList;
  uStack_1c = DAT_10206460 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  DAT_1021aff4 = 0;
  if (DAT_1021ae54 != 0) {
    pwStack_20 = DAT_1021ae64;
    ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
              (in_ECX,(wchar_t *)&DAT_1021ae14);
    local_14 = (undefined1 *)&pwStack_20;
    local_18 = (undefined1 *)&pwStack_20;
    FUN_10034a50();
    local_18 = &stack0xffffffdc;
    local_8 = 0;
    FUN_10034a50(&DAT_1021ae10);
    local_8 = 0xffffffff;
    FUN_10033a90();
  }
  if (DAT_1021ae64 == (wchar_t *)0x0) {
    if (DAT_1021ae68 == 1) {
      pwStack_20 = L"삅萏\x89";
      iVar1 = FUN_1003c680();
      if (iVar1 == 0) {
        ExceptionList = local_10;
        return 0;
      }
      if (DAT_1021ae54 == 0) {
        DAT_1021aff4 = 1;
        ExceptionList = local_10;
        return 1;
      }
      pwStack_20 = L"CUI SDK Success";
      ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                (this_01,(wchar_t *)&DAT_1021ae14);
      local_18 = (undefined1 *)&pwStack_20;
      local_14 = (undefined1 *)&pwStack_20;
      FUN_10034a50();
      local_8 = 3;
      goto LAB_10039d5a;
    }
    if (DAT_1021ae68 != 2) {
      ExceptionList = local_10;
      return 0;
    }
    pwStack_20 = 
    L"삅㵴㶃깔အༀ\xea84\xfffe棿䒰သᑨ↮\xe810귕\xffff쒃謄觌\xec65䶉棰긔အ⃨ﾬ쟿ﱅ\x04"
    ;
    iVar1 = FUN_100412e0();
    if (iVar1 == 0) {
      ExceptionList = local_10;
      return 0;
    }
    if (DAT_1021ae54 == 0) {
      DAT_1021aff4 = 2;
      ExceptionList = local_10;
      return 1;
    }
    pwStack_20 = L"Control SDK Success";
    ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
              (this_02,(wchar_t *)&DAT_1021ae14);
    local_18 = (undefined1 *)&pwStack_20;
    local_14 = (undefined1 *)&pwStack_20;
    FUN_10034a50();
    local_8 = 4;
  }
  else {
    pwStack_20 = 
    L"삅煴㶃깔အ琀桊䒰သᑨ↮\xe810꼵\xffff쒃謄觌\xec65䶉棰긔အ胨ﾭ쟿ﱅ\x01";
    iVar1 = FUN_100412e0();
    if (iVar1 == 0) {
      pwStack_20 = L"삅萏Ė";
      iVar1 = FUN_1003c680();
      if (iVar1 == 0) {
        ExceptionList = local_10;
        return 0;
      }
      if (DAT_1021ae54 == 0) {
        DAT_1021aff4 = 1;
        ExceptionList = local_10;
        return 1;
      }
      pwStack_20 = L"CUI SDK Success";
      ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                (this_00,(wchar_t *)&DAT_1021ae14);
      local_18 = (undefined1 *)&pwStack_20;
      local_14 = (undefined1 *)&pwStack_20;
      FUN_10034a50();
      local_8 = 2;
LAB_10039d5a:
      local_14 = &stack0xffffffdc;
      FUN_10034a50(&DAT_1021ae10);
      local_8 = 0xffffffff;
      FUN_10033a90();
      DAT_1021aff4 = 1;
      ExceptionList = local_10;
      return 1;
    }
    if (DAT_1021ae54 == 0) {
      DAT_1021aff4 = 2;
      ExceptionList = local_10;
      return 1;
    }
    pwStack_20 = L"Control SDK Success";
    ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
              (this,(wchar_t *)&DAT_1021ae14);
    local_18 = (undefined1 *)&pwStack_20;
    local_14 = (undefined1 *)&pwStack_20;
    FUN_10034a50();
    local_8 = 1;
  }
  local_14 = &stack0xffffffdc;
  FUN_10034a50(&DAT_1021ae10);
  local_8 = 0xffffffff;
  FUN_10033a90();
  DAT_1021aff4 = 2;
  ExceptionList = local_10;
  return 1;
}

