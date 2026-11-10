// rea decompile_all
// name: parse_floating_point_possible_infinity<>
// address: 0x1018c839
// body: available
// range: 0x1018c839-0x1018c907 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    enum __crt_strtox::floating_point_parse_result __cdecl
   __crt_strtox::parse_floating_point_possible_infinity<wchar_t,class
   __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::console_input_adapter<wchar_t> >,unsigned __int64>(wchar_t &,class
   __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::console_input_adapter<wchar_t> > &,unsigned __int64)
    enum __crt_strtox::floating_point_parse_result __cdecl
   __crt_strtox::parse_floating_point_possible_infinity<wchar_t,class
   __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::stream_input_adapter<wchar_t> >,unsigned __int64>(wchar_t &,class
   __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::stream_input_adapter<wchar_t> > &,unsigned __int64)
    enum __crt_strtox::floating_point_parse_result __cdecl
   __crt_strtox::parse_floating_point_possible_infinity<wchar_t,class
   __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::string_input_adapter<wchar_t> >,unsigned __int64>(wchar_t &,class
   __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::string_input_adapter<wchar_t> > &,unsigned __int64)
   
   Libraries: Visual Studio 2015 Debug, Visual Studio 2015 Release */

char parse_floating_point_possible_infinity<>
               (wchar_t *param_1,
               input_adapter_character_source<__crt_stdio_input::string_input_adapter<wchar_t>_>
               *param_2)

{
  char cVar1;
  wchar_t wVar2;
  int iVar3;
  int local_8;
  
  iVar3 = 0;
  local_8 = 0;
  while ((*param_1 == *(wchar_t *)((int)&DAT_101de368 + local_8) ||
         (*param_1 == *(wchar_t *)((int)&DAT_101de370 + local_8)))) {
    wVar2 = __crt_strtox::
            input_adapter_character_source<__crt_stdio_input::string_input_adapter<wchar_t>_>::get
                      (param_2);
    local_8 = local_8 + 2;
    *param_1 = wVar2;
    if (local_8 == 6) {
      __crt_strtox::
      input_adapter_character_source<__crt_stdio_input::string_input_adapter<wchar_t>_>::unget
                (param_2,wVar2);
      wVar2 = __crt_strtox::
              input_adapter_character_source<__crt_stdio_input::string_input_adapter<wchar_t>_>::get
                        (param_2);
      *param_1 = wVar2;
      while ((*param_1 == *(wchar_t *)((int)L"INITY" + iVar3) ||
             (*param_1 == *(wchar_t *)((int)L"inity" + iVar3)))) {
        wVar2 = __crt_strtox::
                input_adapter_character_source<__crt_stdio_input::string_input_adapter<wchar_t>_>::
                get(param_2);
        iVar3 = iVar3 + 2;
        *param_1 = wVar2;
        if (iVar3 == 10) {
          __crt_strtox::
          input_adapter_character_source<__crt_stdio_input::string_input_adapter<wchar_t>_>::unget
                    (param_2,wVar2);
          return '\x03';
        }
      }
      cVar1 = FID_conflict_operator__();
      return (cVar1 == '\0') * '\x04' + '\x03';
    }
  }
  FID_conflict_operator__();
  return '\a';
}

