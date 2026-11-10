// rea decompile_all
// name: state_case_normal_tchar
// address: 0x10170479
// body: available
// range: 0x10170479-0x101704d9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    private: bool __thiscall __crt_stdio_output::output_processor<char,class
   __crt_stdio_output::string_output_adapter<char>,class
   __crt_stdio_output::format_validation_base<char,class
   __crt_stdio_output::string_output_adapter<char> > >::state_case_normal_tchar(char)
    private: bool __thiscall __crt_stdio_output::output_processor<char,class
   __crt_stdio_output::string_output_adapter<char>,class
   __crt_stdio_output::positional_parameter_base<char,class
   __crt_stdio_output::string_output_adapter<char> > >::state_case_normal_tchar(char)
    private: bool __thiscall __crt_stdio_output::output_processor<char,class
   __crt_stdio_output::string_output_adapter<char>,class
   __crt_stdio_output::standard_base<char,class __crt_stdio_output::string_output_adapter<char> >
   >::state_case_normal_tchar(char)
   
   Library: Visual Studio 2015 Release */

uint state_case_normal_tchar(void)

{
  int *piVar1;
  uint uVar2;
  undefined1 *puVar3;
  int in_ECX;
  
  *(undefined1 *)(in_ECX + 0x3c) = 0;
  puVar3 = *(undefined1 **)**(undefined4 **)(in_ECX + 8);
  if ((*(ushort *)(puVar3 + (uint)*(byte *)(in_ECX + 0x31) * 2) & 0x8000) != 0) {
    __crt_stdio_output::string_output_adapter<char>::write_character
              ((string_output_adapter<char> *)(in_ECX + 0x448),*(byte *)(in_ECX + 0x31),
               (int *)(in_ECX + 0x18));
    *(undefined1 *)(in_ECX + 0x31) = **(undefined1 **)(in_ECX + 0x10);
    puVar3 = *(undefined1 **)(in_ECX + 0x10) + 1;
    *(undefined1 **)(in_ECX + 0x10) = puVar3;
    if (*(char *)(in_ECX + 0x31) == '\0') {
      piVar1 = __errno();
      *piVar1 = 0x16;
      uVar2 = FUN_1016ec41();
      return uVar2 & 0xffffff00;
    }
  }
  return CONCAT31((int3)((uint)puVar3 >> 8),1);
}

