// rea decompile_all
// name: parse_floating_point_possible_nan<>
// address: 0x1018c908
// body: available
// range: 0x1018c908-0x1018ca33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    enum __crt_strtox::floating_point_parse_result __cdecl
   __crt_strtox::parse_floating_point_possible_nan<wchar_t,class
   __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::console_input_adapter<wchar_t> >,unsigned __int64>(wchar_t &,class
   __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::console_input_adapter<wchar_t> > &,unsigned __int64)
    enum __crt_strtox::floating_point_parse_result __cdecl
   __crt_strtox::parse_floating_point_possible_nan<wchar_t,class
   __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::stream_input_adapter<wchar_t> >,unsigned __int64>(wchar_t &,class
   __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::stream_input_adapter<wchar_t> > &,unsigned __int64)
    enum __crt_strtox::floating_point_parse_result __cdecl
   __crt_strtox::parse_floating_point_possible_nan<wchar_t,class
   __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::string_input_adapter<wchar_t> >,unsigned __int64>(wchar_t &,class
   __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::string_input_adapter<wchar_t> > &,unsigned __int64)
   
   Libraries: Visual Studio 2015 Debug, Visual Studio 2015 Release */

int parse_floating_point_possible_nan<>
              (wchar_t *param_1,
              input_adapter_character_source<__crt_stdio_input::string_input_adapter<wchar_t>_>
              *param_2)

{
  char cVar1;
  wchar_t wVar2;
  uint uVar3;
  int iVar4;
  int local_8;
  
  iVar4 = 0;
  local_8 = 6;
  do {
    if ((*param_1 != *(wchar_t *)((int)&DAT_101de390 + iVar4)) &&
       (*param_1 != *(wchar_t *)((int)&DAT_101de398 + iVar4))) {
      FID_conflict_operator__();
      return 7;
    }
    wVar2 = __crt_strtox::
            input_adapter_character_source<__crt_stdio_input::string_input_adapter<wchar_t>_>::get
                      (param_2);
    iVar4 = iVar4 + 2;
    *param_1 = wVar2;
  } while (iVar4 != 6);
  __crt_strtox::input_adapter_character_source<__crt_stdio_input::string_input_adapter<wchar_t>_>::
  unget(param_2,wVar2);
  wVar2 = __crt_strtox::
          input_adapter_character_source<__crt_stdio_input::string_input_adapter<wchar_t>_>::get
                    (param_2);
  *param_1 = wVar2;
  if (wVar2 == L'(') {
    wVar2 = __crt_strtox::
            input_adapter_character_source<__crt_stdio_input::string_input_adapter<wchar_t>_>::get
                      (param_2);
    *param_1 = wVar2;
    cVar1 = parse_floating_point_possible_nan_is_snan<>(param_1,param_2);
    if (cVar1 == '\0') {
      cVar1 = parse_floating_point_possible_nan_is_ind<>(param_1,param_2);
      if (cVar1 == '\0') {
        if (*param_1 == L')') {
          return 4;
        }
        do {
          uVar3 = (uint)(ushort)*param_1;
          if (*param_1 == L'\0') break;
          if ((((9 < uVar3 - 0x30) && (0x19 < uVar3 - 0x61)) && (0x19 < uVar3 - 0x41)) &&
             (uVar3 != 0x5f)) goto LAB_1018c979;
          wVar2 = __crt_strtox::
                  input_adapter_character_source<__crt_stdio_input::string_input_adapter<wchar_t>_>
                  ::get(param_2);
          *param_1 = wVar2;
        } while (wVar2 != L')');
        if (*param_1 == L')') {
          return 4;
        }
        goto LAB_1018c979;
      }
    }
    else {
      local_8 = 5;
    }
    __crt_strtox::input_adapter_character_source<__crt_stdio_input::string_input_adapter<wchar_t>_>
    ::unget(param_2,*param_1);
  }
  else {
LAB_1018c979:
    cVar1 = FID_conflict_operator__();
    local_8 = (-(uint)(cVar1 != '\0') & 0xfffffffd) + 7;
  }
  return local_8;
}

