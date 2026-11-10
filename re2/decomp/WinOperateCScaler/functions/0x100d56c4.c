// rea decompile_all
// name: CMFCRibbonBaseElement::SetText
// address: 0x100d56c4
// body: available
// range: 0x100d56c4-0x100d5764 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCRibbonBaseElement::SetText(wchar_t const *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCRibbonBaseElement::SetText(CMFCRibbonBaseElement *this,wchar_t *param_1)

{
  CSimpleStringT<wchar_t,0> *this_00;
  int iVar1;
  undefined4 uVar2;
  int local_18;
  int local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x100d56d0;
  if (param_1 == (wchar_t *)0x0) {
    param_1 = L"";
  }
  this_00 = (CSimpleStringT<wchar_t,0> *)(this + 0x60);
  ATL::CSimpleStringT<wchar_t,0>::Append(this_00,param_1);
  iVar1 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Find
                    ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)this_00,
                     L'\n',0);
  if (-1 < iVar1) {
    uVar2 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Mid
                      ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)this_00
                       ,(int)local_14);
    local_8 = 0;
    FUN_10018680(uVar2);
    local_8 = 0xffffffff;
    ATL::CStringData::Release((CStringData *)(local_14[0] + -0x10));
    uVar2 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Left
                      ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)this_00
                       ,(int)&local_18);
    local_8 = 1;
    FUN_10018680(uVar2);
    local_8 = 0xffffffff;
    ATL::CStringData::Release((CStringData *)(local_18 + -0x10));
  }
  FUN_10018fc0();
  FUN_10019070();
  return;
}

