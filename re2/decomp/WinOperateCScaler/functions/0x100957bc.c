// rea decompile_all
// name: FUN_100957bc
// address: 0x100957bc
// body: available
// range: 0x100957bc-0x10095888 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

bool FUN_100957bc(undefined4 param_1,int param_2)

{
  LPCWSTR lpString2;
  int iVar1;
  LPWSTR lpString1;
  int in_ECX;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this;
  bool bVar2;
  LPCWSTR local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0x100957c8;
  if ((((*(uint *)(in_ECX + 0x24) & 0x40000) == 0) && (DAT_102015bc != 0)) && (param_2 != 0)) {
    iVar1 = FUN_100187a0(*(int *)(in_ECX + 0x2c) + -0x10);
    local_14[0] = (LPCWSTR)(iVar1 + 0x10);
    local_8 = 0;
    if (((*(int *)(in_ECX + 0x78) == 0) && (*(int *)(in_ECX + 0x7c) == 0)) &&
       ((*(int *)(in_ECX + 0x80) == 0 &&
        (iVar1 = CMap<CDocument*,CDocument*,ATL::CStringT<char,StrTraitMFC<char,ATL::ChTraitsCRT<char>_>_>,char_const*>
                 ::Lookup((CMap<CDocument*,CDocument*,ATL::CStringT<char,StrTraitMFC<char,ATL::ChTraitsCRT<char>_>_>,char_const*>
                           *)&PTR_vftable_102017cc,*(CDocument **)(in_ECX + 0x70),
                          (CStringT<char,StrTraitMFC<char,ATL::ChTraitsCRT<char>_>_> *)local_14),
        iVar1 == 0)))) {
      ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                (this,(wchar_t *)local_14,L"Hex={%02X,%02X,%02X}",(uint)*(byte *)(in_ECX + 0x70),
                 (uint)*(byte *)(in_ECX + 0x71),(uint)*(byte *)(in_ECX + 0x72));
    }
    lpString2 = local_14[0];
    lpString1 = (LPWSTR)FUN_10175686(*(int *)(local_14[0] + -6) + 1,2);
    *(LPWSTR *)(param_2 + 0x24) = lpString1;
    bVar2 = lpString1 != (LPWSTR)0x0;
    if (bVar2) {
      lstrcpyW(lpString1,lpString2);
    }
    ATL::CStringData::Release((CStringData *)(lpString2 + -8));
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

