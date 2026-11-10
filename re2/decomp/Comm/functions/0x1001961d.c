// rea decompile_all
// name: CStringT<>
// address: 0x1001961d
// body: available
// range: 0x1001961d-0x1001965b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    public: __thiscall ATL::CStringT<char,class StrTraitMFC<char,class ATL::ChTraitsCRT<char> >
   >::CStringT<char,class StrTraitMFC<char,class ATL::ChTraitsCRT<char> > >(char const *,struct
   ATL::IAtlStringMgr *)
    public: __thiscall ATL::CStringT<char,class StrTraitMFC<char,class ATL::ChTraitsCRT<char> >
   >::CStringT<char,class StrTraitMFC<char,class ATL::ChTraitsCRT<char> > >(wchar_t const *,struct
   ATL::IAtlStringMgr *)
    public: __thiscall ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class
   ATL::ChTraitsCRT<wchar_t> > >::CStringT<wchar_t,class StrTraitMFC<wchar_t,class
   ATL::ChTraitsCRT<wchar_t> > >(char const *,struct ATL::IAtlStringMgr *)
    public: __thiscall ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class
   ATL::ChTraitsCRT<wchar_t> > >::CStringT<wchar_t,class StrTraitMFC<wchar_t,class
   ATL::ChTraitsCRT<wchar_t> > >(wchar_t const *,struct ATL::IAtlStringMgr *)
   
   Library: Visual Studio */

void CStringT<>(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  
  FUN_10003190(param_2);
  cVar1 = FUN_100033c0(param_1);
  if (cVar1 == '\0') {
    FUN_10003780(param_1);
  }
  return;
}

