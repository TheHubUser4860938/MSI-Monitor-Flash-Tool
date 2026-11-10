// rea decompile_all
// name: __crt_strtox::parse_floating_point_possible_nan_is_ind<char,__crt_strtox::c_string_character_source<char>_>
// address: 0x588306
// body: available
// range: 0x588306-0x588341 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    bool __cdecl __crt_strtox::parse_floating_point_possible_nan_is_ind<char,class
   __crt_strtox::c_string_character_source<char> >(char &,class
   __crt_strtox::c_string_character_source<char> &)
   
   Library: Visual Studio 2015 Release */

bool __cdecl
__crt_strtox::
parse_floating_point_possible_nan_is_ind<char,__crt_strtox::c_string_character_source<char>_>
          (char *param_1,c_string_character_source<char> *param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  while ((*param_1 == (&DAT_005e00f8)[iVar2] || (*param_1 == (&DAT_005e00fc)[iVar2]))) {
    cVar1 = **(char **)param_2;
    iVar2 = iVar2 + 1;
    *(char **)param_2 = *(char **)param_2 + 1;
    *param_1 = cVar1;
    if (iVar2 == 4) {
      return true;
    }
  }
  return false;
}

