// rea decompile_all
// name: FID_conflict:operator=
// address: 0x10003700
// body: available
// range: 0x10003700-0x1000373e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Different Base Names
    public: class ATL::CSimpleStringT<wchar_t,0> & __thiscall
   ATL::CSimpleStringT<wchar_t,0>::operator=(wchar_t const *)
    public: class ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class ATL::ChTraitsOS<wchar_t> > >
   & __thiscall ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class ATL::ChTraitsOS<wchar_t> >
   >::operator=(wchar_t const *)
    public: class ATL::CSimpleStringT<wchar_t,0> & __thiscall
   ATL::CSimpleStringT<wchar_t,0>::operator+=(wchar_t const *)
    public: class ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class ATL::ChTraitsOS<wchar_t> > >
   & __thiscall ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class ATL::ChTraitsOS<wchar_t> >
   >::operator+=(wchar_t const *)
   
   Library: Visual Studio 2008 Release */

void * __thiscall FID_conflict_operator_(void *this,short *param_1)

{
  short sVar1;
  short *psVar2;
  
  if (param_1 == (short *)0x0) {
    FUN_10002660(this,(void *)0x0,0);
    return this;
  }
  psVar2 = param_1;
  do {
    sVar1 = *psVar2;
    psVar2 = psVar2 + 1;
  } while (sVar1 != 0);
  FUN_10002660(this,param_1,(int)psVar2 - (int)(param_1 + 1) >> 1);
  return this;
}

