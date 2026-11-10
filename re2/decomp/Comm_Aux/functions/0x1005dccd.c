// rea decompile_all
// name: CMFCControlContainer::UTF8ToString
// address: 0x1005dccd
// body: available
// range: 0x1005dccd-0x1005dd4a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: static int __stdcall CMFCControlContainer::UTF8ToString(char const *,class
   ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> > > &,int)
   
   Library: Visual Studio 2015 Release */

int CMFCControlContainer::UTF8ToString
              (char *param_1,
              CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *param_2,
              int param_3)

{
  longlong lVar1;
  int cchWideChar;
  LPWSTR lpWideCharStr;
  
  cchWideChar = MultiByteToWideChar(0xfde9,0,param_1,param_3,(LPWSTR)0x0,0);
  if (cchWideChar < 1) {
    cchWideChar = 0;
  }
  else {
    lVar1 = (ulonglong)(cchWideChar + 1) * 2;
    lpWideCharStr =
         (LPWSTR)FUN_10047ef0(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1);
    _memset(lpWideCharStr,0,cchWideChar * 2 + 2);
    MultiByteToWideChar(0xfde9,0,param_1,param_3,lpWideCharStr,cchWideChar);
    FUN_100352a0(lpWideCharStr);
    FID_conflict__free(lpWideCharStr);
  }
  return cchWideChar;
}

