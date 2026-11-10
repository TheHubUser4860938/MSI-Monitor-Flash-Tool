// rea decompile_all
// name: __crt_strtox::convert_hexadecimal_string_to_floating_type<double>
// address: 0x57f5a5
// body: available
// range: 0x57f5a5-0x57f5c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    enum SLD_STATUS __cdecl __crt_strtox::convert_hexadecimal_string_to_floating_type<double>(struct
   __crt_strtox::floating_point_string const &,double &)
   
   Library: Visual Studio 2015 Release */

SLD_STATUS __cdecl
__crt_strtox::convert_hexadecimal_string_to_floating_type<double>
          (floating_point_string *param_1,double *param_2)

{
  SLD_STATUS SVar1;
  undefined4 in_ECX;
  double *local_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  local_c = param_2;
  _local_8 = CONCAT31((int3)((uint)in_ECX >> 8),1);
  SVar1 = convert_hexadecimal_string_to_floating_type_common
                    (param_1,(floating_point_value *)&local_c);
  return SVar1;
}

