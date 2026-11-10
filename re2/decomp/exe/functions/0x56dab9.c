// rea decompile_all
// name: std::_Copy_unchecked1<char*,std::ostreambuf_iterator<char,std::char_traits<char>_>_>
// address: 0x56dab9
// body: available
// range: 0x56dab9-0x56daf8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    class std::ostreambuf_iterator<char,struct std::char_traits<char> > __cdecl
   std::_Copy_unchecked1<char *,class std::ostreambuf_iterator<char,struct std::char_traits<char> >
   >(char *,char *,class std::ostreambuf_iterator<char,struct std::char_traits<char> >,struct
   std::_General_ptr_iterator_tag)
   
   Library: Visual Studio 2015 Release */

void __cdecl
std::_Copy_unchecked1<char*,std::ostreambuf_iterator<char,std::char_traits<char>_>_>
          (undefined4 *param_1,undefined1 *param_2,undefined1 *param_3,undefined4 param_4,
          undefined4 param_5)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  uVar2 = ~-(uint)(param_3 < param_2) & (int)param_3 - (int)param_2;
  if (uVar2 != 0) {
    do {
      FUN_004059b0(*param_2);
      param_2 = param_2 + 1;
      uVar1 = uVar1 + 1;
    } while (uVar1 != uVar2);
  }
  *param_1 = param_4;
  param_1[1] = param_5;
  return;
}

