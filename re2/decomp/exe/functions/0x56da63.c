// rea decompile_all
// name: _Copy_no_deprecate1<>
// address: 0x56da63
// body: available
// range: 0x56da63-0x56da92 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    class std::ostreambuf_iterator<char,struct std::char_traits<char> > __cdecl
   std::_Copy_no_deprecate1<char *,class std::ostreambuf_iterator<char,struct std::char_traits<char>
   > >(char *,char *,class std::ostreambuf_iterator<char,struct std::char_traits<char> >,struct
   std::input_iterator_tag,struct std::_Any_tag)
    class std::ostreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> > __cdecl
   std::_Copy_no_deprecate1<wchar_t *,class std::ostreambuf_iterator<unsigned short,struct
   std::char_traits<unsigned short> > >(wchar_t *,wchar_t *,class std::ostreambuf_iterator<unsigned
   short,struct std::char_traits<unsigned short> >,struct std::input_iterator_tag,struct
   std::_Any_tag)
    class std::ostreambuf_iterator<wchar_t,struct std::char_traits<wchar_t> > __cdecl
   std::_Copy_no_deprecate1<wchar_t *,class std::ostreambuf_iterator<wchar_t,struct
   std::char_traits<wchar_t> > >(wchar_t *,wchar_t *,class std::ostreambuf_iterator<wchar_t,struct
   std::char_traits<wchar_t> >,struct std::input_iterator_tag,struct std::_Any_tag)
   
   Library: Visual Studio 2015 Release */

undefined4 *
_Copy_no_deprecate1<>
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5)

{
  undefined4 *puVar1;
  undefined1 local_c [8];
  
  puVar1 = (undefined4 *)
           std::_Copy_unchecked<char*,std::ostreambuf_iterator<char,std::char_traits<char>_>_>
                     (local_c,param_2,param_3,param_4,param_5);
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  return param_1;
}

