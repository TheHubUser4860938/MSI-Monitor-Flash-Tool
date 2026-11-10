// rea decompile_all
// name: Rep
// address: 0x568d40
// body: available
// range: 0x568d40-0x568d6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    private: class std::ostreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> >
   __cdecl std::num_put<unsigned short,class std::ostreambuf_iterator<unsigned short,struct
   std::char_traits<unsigned short> > >::_Rep(class std::ostreambuf_iterator<unsigned short,struct
   std::char_traits<unsigned short> >,unsigned short,unsigned int)const 
    private: class std::ostreambuf_iterator<wchar_t,struct std::char_traits<wchar_t> > __cdecl
   std::num_put<wchar_t,class std::ostreambuf_iterator<wchar_t,struct std::char_traits<wchar_t> >
   >::_Rep(class std::ostreambuf_iterator<wchar_t,struct std::char_traits<wchar_t>
   >,wchar_t,unsigned int)const 
   
   Library: Visual Studio 2015 Release */

void Rep(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
        undefined4 param_5,int param_6)

{
  for (; param_6 != 0; param_6 = param_6 + -1) {
    FID_conflict_operator_(param_5);
  }
  *param_2 = param_3;
  param_2[1] = param_4;
  return;
}

