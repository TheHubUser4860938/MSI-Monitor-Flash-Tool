// rea decompile_all
// name: CMFCRibbonBaseElement::UpdateTooltipInfo
// address: 0x46eb00
// body: available
// range: 0x46eb00-0x46ebcf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCRibbonBaseElement::UpdateTooltipInfo(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCRibbonBaseElement::UpdateTooltipInfo(CMFCRibbonBaseElement *this)

{
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_00;
  undefined4 uVar1;
  int iVar2;
  wchar_t *local_14;
  
  if (((*(int *)(this + 0x100) != 0) && (*(int *)(this + 0xa4) != 0)) &&
     (*(int *)(this + 0xa4) != -1)) {
    uVar1 = FUN_004295fe();
    FUN_0040eb30(uVar1);
    uVar1 = *(undefined4 *)(this + 0xa4);
    iVar2 = FUN_00435fce(uVar1);
    if ((iVar2 != 0) && (iVar2 = FUN_004160f0(iVar2,uVar1), iVar2 != 0)) {
      this_00 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)(this + 0x6c);
      FUN_00415d60();
      FUN_00415d60();
      if (*(int *)(local_14 + -6) != 0) {
        AfxExtractSubString((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                            (this + 0x70),local_14,0,L'\n');
        AfxExtractSubString(this_00,local_14,1,L'\n');
        ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Replace
                  (this_00,L"&&",L"\x01\x01");
        ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Remove
                  (this_00,L'&');
        ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Replace
                  (this_00,L"\x01\x01",L"&");
      }
    }
    FUN_0040efa0();
  }
  return;
}

