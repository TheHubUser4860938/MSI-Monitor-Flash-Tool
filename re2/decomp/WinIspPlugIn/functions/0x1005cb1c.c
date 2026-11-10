// rea decompile_all
// name: FreeAssoc
// address: 0x1005cb1c
// body: available
// range: 0x1005cb1c-0x1005cb4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    protected: void __thiscall CMap<class ATL::CStringT<char,class StrTraitMFC<char,class
   ATL::ChTraitsCRT<char> > >,char const *,class CDocument *,class CDocument *>::FreeAssoc(class
   CMap<class ATL::CStringT<char,class StrTraitMFC<char,class ATL::ChTraitsCRT<char> > >,char const
   *,class CDocument *,class CDocument *>::CAssoc *)
    protected: void __thiscall CMap<class ATL::CStringT<char,class StrTraitMFC<char,class
   ATL::ChTraitsCRT<char> > >,char const *,class CObList *,class CObList *>::FreeAssoc(class
   CMap<class ATL::CStringT<char,class StrTraitMFC<char,class ATL::ChTraitsCRT<char> > >,char const
   *,class CObList *,class CObList *>::CAssoc *)
    protected: void __thiscall CMap<class ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class
   ATL::ChTraitsCRT<wchar_t> > >,wchar_t const *,class CDocument *,class CDocument
   *>::FreeAssoc(class CMap<class ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class
   ATL::ChTraitsCRT<wchar_t> > >,wchar_t const *,class CDocument *,class CDocument *>::CAssoc *)
    protected: void __thiscall CMap<class ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class
   ATL::ChTraitsCRT<wchar_t> > >,wchar_t const *,class CObList *,class CObList *>::FreeAssoc(class
   CMap<class ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> >
   >,wchar_t const *,class CObList *,class CObList *>::CAssoc *)
   
   Library: Visual Studio 2015 Release */

void FreeAssoc(int param_1)

{
  CMap<ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>,wchar_t_const*,CDocument*,CDocument*>
  *pCVar1;
  CMap<ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>,wchar_t_const*,CDocument*,CDocument*>
  *in_ECX;
  
  FUN_100476d0();
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(in_ECX + 0x10);
  pCVar1 = in_ECX + 0xc;
  *(int *)pCVar1 = *(int *)pCVar1 + -1;
  *(int *)(in_ECX + 0x10) = param_1;
  if (*(int *)pCVar1 == 0) {
    CMap<ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>,wchar_t_const*,CDocument*,CDocument*>
    ::RemoveAll(in_ECX);
  }
  return;
}

