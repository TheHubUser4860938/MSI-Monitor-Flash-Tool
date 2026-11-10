// rea decompile_all
// name: std::money_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::_Put
// address: 0x10167cdf
// body: available
// range: 0x10167cdf-0x10167d15 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    private: static class std::ostreambuf_iterator<char,struct std::char_traits<char> > __cdecl
   std::money_put<char,class std::ostreambuf_iterator<char,struct std::char_traits<char> >
   >::_Put(class std::ostreambuf_iterator<char,struct std::char_traits<char> >,class
   std::_String_const_iterator<class std::_String_val<struct std::_Simple_types<char> > >,unsigned
   int)
   
   Library: Visual Studio 2015 Release */

void __cdecl
std::money_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::_Put
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3,char *param_4,int param_5)

{
  int iVar1;
  
  for (iVar1 = param_5; iVar1 != 0; iVar1 = iVar1 + -1) {
    ostreambuf_iterator<char,std::char_traits<char>_>::operator=
              ((ostreambuf_iterator<char,std::char_traits<char>_> *)&param_2,*param_4);
    param_4 = param_4 + 1;
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}

