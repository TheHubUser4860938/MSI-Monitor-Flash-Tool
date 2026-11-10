// rea decompile_all
// name: type_case_integer_parse_into_buffer<>
// address: 0x1016f7aa
// body: available
// range: 0x1016f7aa-0x1016f81e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    private: void __thiscall __crt_stdio_output::output_processor<char,class
   __crt_stdio_output::console_output_adapter<char>,class
   __crt_stdio_output::format_validation_base<char,class
   __crt_stdio_output::console_output_adapter<char> >
   >::type_case_integer_parse_into_buffer<unsigned int>(unsigned int,unsigned int,bool)
    private: void __thiscall __crt_stdio_output::output_processor<char,class
   __crt_stdio_output::console_output_adapter<char>,class
   __crt_stdio_output::standard_base<char,class __crt_stdio_output::console_output_adapter<char> >
   >::type_case_integer_parse_into_buffer<unsigned int>(unsigned int,unsigned int,bool)
    private: void __thiscall __crt_stdio_output::output_processor<char,class
   __crt_stdio_output::stream_output_adapter<char>,class
   __crt_stdio_output::format_validation_base<char,class
   __crt_stdio_output::stream_output_adapter<char> > >::type_case_integer_parse_into_buffer<unsigned
   int>(unsigned int,unsigned int,bool)
    private: void __thiscall __crt_stdio_output::output_processor<char,class
   __crt_stdio_output::stream_output_adapter<char>,class
   __crt_stdio_output::standard_base<char,class __crt_stdio_output::stream_output_adapter<char> >
   >::type_case_integer_parse_into_buffer<unsigned int>(unsigned int,unsigned int,bool)
     12 names - too many to list
   
   Library: Visual Studio 2015 Release */

void type_case_integer_parse_into_buffer<>(uint param_1,uint param_2,char param_3)

{
  uint uVar1;
  int in_ECX;
  char cVar2;
  formatting_buffer *pfVar3;
  
  pfVar3 = *(formatting_buffer **)(in_ECX + 0x444);
  if (*(formatting_buffer **)(in_ECX + 0x444) == (formatting_buffer *)0x0) {
    pfVar3 = (formatting_buffer *)(in_ECX + 0x40);
  }
  uVar1 = __crt_stdio_output::formatting_buffer::count<char>((formatting_buffer *)(in_ECX + 0x40));
  *(formatting_buffer **)(in_ECX + 0x34) = pfVar3 + (uVar1 - 1);
  while ((0 < *(int *)(in_ECX + 0x28) || (param_1 != 0))) {
    cVar2 = (char)(param_1 % param_2) + '0';
    *(int *)(in_ECX + 0x28) = *(int *)(in_ECX + 0x28) + -1;
    if ('9' < cVar2) {
      cVar2 = cVar2 + ((param_3 == '\0') - 1U & 0xe0) + 0x27;
    }
    **(char **)(in_ECX + 0x34) = cVar2;
    *(int *)(in_ECX + 0x34) = *(int *)(in_ECX + 0x34) + -1;
    param_1 = param_1 / param_2;
  }
  *(int *)(in_ECX + 0x38) = (int)(pfVar3 + (uVar1 - 1)) - *(int *)(in_ECX + 0x34);
  *(int *)(in_ECX + 0x34) = *(int *)(in_ECX + 0x34) + 1;
  return;
}

