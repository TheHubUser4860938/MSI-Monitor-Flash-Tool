// rea decompile_all
// name: parse_floating_point<>
// address: 0x10176bee
// body: available
// range: 0x10176bee-0x10176c68 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    enum SLD_STATUS __cdecl __crt_strtox::parse_floating_point<class
   __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::console_input_adapter<wchar_t> >,float>(struct __crt_locale_pointers *
   const,class __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::console_input_adapter<wchar_t> >,float * const)
    enum SLD_STATUS __cdecl __crt_strtox::parse_floating_point<class
   __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::stream_input_adapter<wchar_t> >,float>(struct __crt_locale_pointers *
   const,class __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::stream_input_adapter<wchar_t> >,float * const)
    enum SLD_STATUS __cdecl __crt_strtox::parse_floating_point<class
   __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::string_input_adapter<wchar_t> >,float>(struct __crt_locale_pointers *
   const,class __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::string_input_adapter<wchar_t> >,float * const)
   
   Library: Visual Studio 2015 Release */

void parse_floating_point<>(int param_1)

{
  float *pfVar1;
  int *piVar2;
  floating_point_parse_result fVar3;
  int in_stack_00000018;
  int in_stack_0000001c;
  undefined1 *in_stack_00000020;
  float *in_stack_00000028;
  floating_point_string local_314 [780];
  uint local_8;
  
  pfVar1 = in_stack_00000028;
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  if ((in_stack_00000028 == (float *)0x0) || (param_1 == 0)) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    FUN_1016ec41();
  }
  else {
    fVar3 = parse_floating_point_from_source<>(param_1,&stack0x00000008,local_314);
    __crt_strtox::parse_floating_point_write_result<float>(fVar3,local_314,pfVar1);
  }
  if ((in_stack_00000020 != (undefined1 *)0x0) && (in_stack_00000018 == 0 && in_stack_0000001c == 0)
     ) {
    *in_stack_00000020 = 0;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

