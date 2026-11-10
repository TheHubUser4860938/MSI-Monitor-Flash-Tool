// rea decompile_all
// name: GetIconToolTip
// address: 0x1013e5a8
// body: available
// range: 0x1013e5a8-0x1013e650 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    protected: virtual class ATL::CStringT<char,class StrTraitMFC<char,class ATL::ChTraitsCRT<char>
   > > __thiscall CMFCRibbonColorButton::GetIconToolTip(class CMFCRibbonGalleryIcon const *)const 
    protected: virtual class ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class
   ATL::ChTraitsCRT<wchar_t> > > __thiscall CMFCRibbonColorButton::GetIconToolTip(class
   CMFCRibbonGalleryIcon const *)const 
   
   Library: Visual Studio 2015 Release */

int * GetIconToolTip(int *param_1,int param_2)

{
  CDocument *pCVar1;
  undefined4 uVar2;
  int iVar3;
  CMFCRibbonColorButton *in_ECX;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this;
  int local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x1013e5b4;
  pCVar1 = (CDocument *)CMFCRibbonColorButton::GetColorByIndex(in_ECX,*(int *)(param_2 + 0x1c8));
  if (pCVar1 == (CDocument *)0xffffffff) {
    FUN_1014dee1(param_1,param_2);
  }
  else {
    uVar2 = FUN_10048e90();
    FUN_10034c30(uVar2);
    local_8 = 0;
    iVar3 = CMap<CDocument*,CDocument*,ATL::CStringT<char,StrTraitMFC<char,ATL::ChTraitsCRT<char>_>_>,char_const*>
            ::Lookup((CMap<CDocument*,CDocument*,ATL::CStringT<char,StrTraitMFC<char,ATL::ChTraitsCRT<char>_>_>,char_const*>
                      *)&PTR_vftable_10205c34,pCVar1,
                     (CStringT<char,StrTraitMFC<char,ATL::ChTraitsCRT<char>_>_> *)local_14);
    if (iVar3 == 0) {
      ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                (this,(wchar_t *)local_14,L"Hex={%02X,%02X,%02X}",(uint)pCVar1 & 0xff,
                 (uint)pCVar1 >> 8 & 0xff,(uint)pCVar1 >> 0x10 & 0xff);
    }
    iVar3 = FUN_100349e0(local_14[0] + -0x10);
    *param_1 = iVar3 + 0x10;
    FUN_10034f00();
  }
  return param_1;
}

