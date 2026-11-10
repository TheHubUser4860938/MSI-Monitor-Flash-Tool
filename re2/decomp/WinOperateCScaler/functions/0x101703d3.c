// rea decompile_all
// name: state_case_normal_common
// address: 0x101703d3
// body: available
// range: 0x101703d3-0x101703fc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    private: bool __thiscall __crt_stdio_output::output_processor<char,class
   __crt_stdio_output::string_output_adapter<char>,class
   __crt_stdio_output::format_validation_base<char,class
   __crt_stdio_output::string_output_adapter<char> > >::state_case_normal_common(void)
    private: bool __thiscall __crt_stdio_output::output_processor<char,class
   __crt_stdio_output::string_output_adapter<char>,class
   __crt_stdio_output::standard_base<char,class __crt_stdio_output::string_output_adapter<char> >
   >::state_case_normal_common(void)
   
   Library: Visual Studio 2015 Release */

undefined4 state_case_normal_common(void)

{
  undefined4 uVar1;
  undefined3 extraout_var;
  int in_ECX;
  
  uVar1 = state_case_normal_tchar(0);
  if ((char)uVar1 == '\0') {
    return uVar1;
  }
  __crt_stdio_output::string_output_adapter<char>::write_character
            ((string_output_adapter<char> *)(in_ECX + 0x448),*(char *)(in_ECX + 0x31),
             (int *)(in_ECX + 0x18));
  return CONCAT31(extraout_var,1);
}

