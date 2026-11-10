// rea decompile_all
// name: COleVariant::COleVariant
// address: 0x4c8ccb
// body: available
// range: 0x4c8ccb-0x4c8d1c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: __thiscall COleVariant::COleVariant(wchar_t const *,unsigned short)
   
   Library: Visual Studio 2015 Release */

void __thiscall COleVariant::COleVariant(COleVariant *this,wchar_t *param_1,ushort param_2)

{
  int iVar1;
  wchar_t *pwVar2;
  CFixedStringT<ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>,256>
  local_238 [560];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x228;
  local_8 = 0x4c8cda;
  *(undefined4 *)(this + 8) = 0;
  *(undefined2 *)this = 8;
  if (param_1 != (wchar_t *)0x0) {
    iVar1 = ATL::
            CFixedStringT<ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>,256>
            ::
            CFixedStringT<ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>,256>
                      (local_238,param_1);
    local_8 = 0;
    pwVar2 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::AllocSysString
                       ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                        (iVar1 + 0xc));
    *(wchar_t **)(this + 8) = pwVar2;
    ATL::CFixedStringT<ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>,256>
    ::~CFixedStringT<ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>,256>
              (local_238);
  }
  FUN_0055bae6();
  return;
}

