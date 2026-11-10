// rea decompile_all
// name: FUN_10039e50
// address: 0x10039e50
// body: available
// range: 0x10039e50-0x1003a3d0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_10039e50(void)

{
  int iVar1;
  int iVar2;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *in_ECX;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_00;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_01;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_02;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_00;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_01;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_03;
  wchar_t *pwStack_20;
  uint uStack_1c;
  undefined1 *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101a0bc0;
  local_10 = ExceptionList;
  uStack_1c = DAT_10206460 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (DAT_1021ae54 != 0) {
    pwStack_20 = L"---------------AUXInitialDev-------------";
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
  if (DAT_1021ae18 != 1) {
    if (DAT_1021ae18 != 2) {
      ExceptionList = local_10;
      return 0x800;
    }
    if (DAT_1021ae54 != 0) {
      pwStack_20 = L"AUX DETECT MANUAL!!!";
      ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)0x2,
                 (wchar_t *)&DAT_1021ae14);
      local_18 = (undefined1 *)&pwStack_20;
      local_14 = (undefined1 *)&pwStack_20;
      FUN_10034a50();
      local_14 = &stack0xffffffdc;
      local_8 = 9;
      FUN_10034a50(&DAT_1021ae10);
      local_8 = 0xffffffff;
      FUN_10033a90();
    }
    if (DAT_1021ae1c == 1) {
      pwStack_20 = 
      L"ᯫ\xf883甂뤌꽬အ䟨ﾱ\xebff뤊꾸အ믨¤蔀痀㤼吅↮༐಄\xfffe棿䛈သᑨ↮\xe810꣌\xffff쒃謄觌\xec65䶉棰긔အ៨ﾧ쟿ﱅ\n"
      ;
      iVar2 = FUN_10039c00();
      this_03 = extraout_ECX;
    }
    else if (DAT_1021ae1c == 2) {
      pwStack_20 = L"૫뢹↯\xe810꒻";
      iVar2 = FUN_10035440();
      this_03 = extraout_ECX_00;
    }
    else {
      pwStack_20 = 
      L"삅㱵Թ깔အ萏\xfe0c\xffff졨Ṇ栐긔အ쳨ﾨ菿ӄ첋斉觬\xf04dᑨ↮\xe810ꜗ\xffff䗇ૼ"
      ;
      iVar2 = FUN_100447c0();
      this_03 = extraout_ECX_01;
    }
    if (iVar2 != 0) {
      if (DAT_1021ae54 != 0) {
        pwStack_20 = L"AUX DETECT MANUAL success!";
        ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                  (this_03,(wchar_t *)&DAT_1021ae14);
        local_18 = (undefined1 *)&pwStack_20;
        local_14 = (undefined1 *)&pwStack_20;
        FUN_10034a50();
        local_14 = &stack0xffffffdc;
        local_8 = 0xb;
        FUN_10034a50(&DAT_1021ae10);
        local_8 = 0xffffffff;
        FUN_10033a90();
      }
      if (DAT_1021ae5c == 0) {
        ExceptionList = local_10;
        return 0;
      }
      if (1 < DAT_10206e78) {
        ExceptionList = local_10;
        return 0x1d;
      }
      if (1 < DAT_10206ddc) {
        ExceptionList = local_10;
        return 0x1d;
      }
      if (1 < DAT_10206f10) {
        ExceptionList = local_10;
        return 0x1d;
      }
LAB_1003a1d6:
      if (DAT_10206ed4 < 2) {
        ExceptionList = local_10;
        return 0;
      }
      ExceptionList = local_10;
      return 0x1d;
    }
    if (DAT_1021ae54 == 0) {
      ExceptionList = local_10;
      return 0x800;
    }
    pwStack_20 = L"AUX DETECT MANUAL fail!";
    ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
              (this_03,(wchar_t *)&DAT_1021ae14);
    local_18 = (undefined1 *)&pwStack_20;
    local_14 = (undefined1 *)&pwStack_20;
    FUN_10034a50();
    local_8 = 10;
LAB_1003a102:
    local_14 = &stack0xffffffdc;
    FUN_10034a50(&DAT_1021ae10);
    local_8 = 0xffffffff;
    FUN_10033a90();
    ExceptionList = local_10;
    return 0x800;
  }
  if (DAT_1021ae54 != 0) {
    pwStack_20 = L"AUX DETECT AUTO!!!";
    ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
              ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)0x1,
               (wchar_t *)&DAT_1021ae14);
    local_18 = (undefined1 *)&pwStack_20;
    local_14 = (undefined1 *)&pwStack_20;
    FUN_10034a50();
    local_14 = &stack0xffffffdc;
    local_8 = 1;
    FUN_10034a50(&DAT_1021ae10);
    local_8 = 0xffffffff;
    FUN_10033a90();
  }
  pwStack_20 = L"삅蔏ʻ";
  iVar2 = FUN_10035440();
  if (iVar2 != 0) {
    if (DAT_1021ae54 != 0) {
      pwStack_20 = L"AMD AUX!!!";
      ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                (this,(wchar_t *)&DAT_1021ae14);
      local_18 = (undefined1 *)&pwStack_20;
      local_14 = (undefined1 *)&pwStack_20;
      FUN_10034a50();
      local_14 = &stack0xffffffdc;
      local_8 = 8;
      FUN_10034a50(&DAT_1021ae10);
      local_8 = 0xffffffff;
      FUN_10033a90();
    }
    DAT_1021ae1c = 2;
    if (DAT_1021ae5c == 0) {
      DAT_1021ae1c = 2;
      ExceptionList = local_10;
      return 0;
    }
    if (DAT_10206ddc < 2) {
      DAT_1021ae1c = 2;
      ExceptionList = local_10;
      return 0;
    }
    ExceptionList = local_10;
    return 0x1d;
  }
  if (DAT_1021ae54 != 0) {
    pwStack_20 = L"not find AMD graphics!!!";
    ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
              (this,(wchar_t *)&DAT_1021ae14);
    local_18 = (undefined1 *)&pwStack_20;
    local_14 = (undefined1 *)&pwStack_20;
    FUN_10034a50();
    local_14 = &stack0xffffffdc;
    local_8 = 2;
    FUN_10034a50(&DAT_1021ae10);
    local_8 = 0xffffffff;
    FUN_10033a90();
  }
  pwStack_20 = L"삅蔏ƚ";
  iVar2 = FUN_10039c00();
  if (iVar2 == 0) {
    if (DAT_1021ae54 != 0) {
      pwStack_20 = L"not find Intel graphics!!!";
      ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                (this_00,(wchar_t *)&DAT_1021ae14);
      local_18 = (undefined1 *)&pwStack_20;
      local_14 = (undefined1 *)&pwStack_20;
      FUN_10034a50();
      local_14 = &stack0xffffffdc;
      local_8 = 3;
      FUN_10034a50(&DAT_1021ae10);
      local_8 = 0xffffffff;
      FUN_10033a90();
    }
    pwStack_20 = L"삅萏\x84";
    iVar2 = FUN_100447c0();
    if (iVar2 == 0) {
      if (DAT_1021ae54 == 0) {
        ExceptionList = local_10;
        return 0x800;
      }
      pwStack_20 = L"not find Nvidia graphics!!!";
      ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                (this_01,(wchar_t *)&DAT_1021ae14);
      local_18 = (undefined1 *)&pwStack_20;
      local_14 = (undefined1 *)&pwStack_20;
      FUN_10034a50();
      local_14 = &stack0xffffffdc;
      local_8 = 5;
      FUN_10034a50(&DAT_1021ae10);
      local_8 = 0xffffffff;
      FUN_10033a90();
      ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                (this_02,(wchar_t *)&DAT_1021ae14,L"not find any graphics!!!");
      local_18 = (undefined1 *)&pwStack_20;
      local_14 = (undefined1 *)&pwStack_20;
      FUN_10034a50();
      local_8 = 6;
      goto LAB_1003a102;
    }
    DAT_1021ae1c = 3;
    iVar2 = DAT_10206f10;
    iVar1 = DAT_1021aff4;
    if (DAT_1021ae54 != 0) {
      pwStack_20 = L"NVIDIA AUX!!!";
      ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                (this_01,(wchar_t *)&DAT_1021ae14);
      local_18 = (undefined1 *)&pwStack_20;
      local_14 = (undefined1 *)&pwStack_20;
      FUN_10034a50();
      local_14 = &stack0xffffffdc;
      local_8 = 4;
      FUN_10034a50(&DAT_1021ae10);
      local_8 = 0xffffffff;
      FUN_10033a90();
      iVar2 = DAT_10206f10;
      iVar1 = DAT_1021aff4;
    }
  }
  else {
    DAT_1021ae1c = 1;
    if (DAT_1021ae54 != 0) {
      pwStack_20 = L"INTEL AUX!!!";
      ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                (this_00,(wchar_t *)&DAT_1021ae14);
      local_18 = (undefined1 *)&pwStack_20;
      local_14 = (undefined1 *)&pwStack_20;
      FUN_10034a50();
      local_14 = &stack0xffffffdc;
      local_8 = 7;
      FUN_10034a50(&DAT_1021ae10);
      local_8 = 0xffffffff;
      FUN_10033a90();
    }
    iVar2 = DAT_10206e78;
    iVar1 = 1;
    if (DAT_1021aff4 != 1) {
      if (DAT_1021ae5c == 0) {
        ExceptionList = local_10;
        return 0;
      }
      goto LAB_1003a1d6;
    }
  }
  if ((DAT_1021ae5c != 0) && (1 < iVar2)) {
    DAT_1021aff4 = iVar1;
    ExceptionList = local_10;
    return 0x1d;
  }
  ExceptionList = local_10;
  DAT_1021aff4 = iVar1;
  return 0;
}

