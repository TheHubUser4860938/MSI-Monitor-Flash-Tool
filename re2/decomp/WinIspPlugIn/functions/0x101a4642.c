// rea decompile_all
// name: parse_floating_point_possible_nan_is_ind<>
// address: 0x101a4642
// body: available
// range: 0x101a4642-0x101a4681 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    bool __cdecl __crt_strtox::parse_floating_point_possible_nan_is_ind<wchar_t,class
   __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::console_input_adapter<wchar_t> > >(wchar_t &,class
   __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::console_input_adapter<wchar_t> > &)
    bool __cdecl __crt_strtox::parse_floating_point_possible_nan_is_ind<wchar_t,class
   __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::stream_input_adapter<wchar_t> > >(wchar_t &,class
   __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::stream_input_adapter<wchar_t> > &)
    bool __cdecl __crt_strtox::parse_floating_point_possible_nan_is_ind<wchar_t,class
   __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::string_input_adapter<wchar_t> > >(wchar_t &,class
   __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::string_input_adapter<wchar_t> > &)
   
   Libraries: Visual Studio 2015 Debug, Visual Studio 2015 Release */

undefined4
parse_floating_point_possible_nan_is_ind<>
          (wchar_t *param_1,
          input_adapter_character_source<__crt_stdio_input::string_input_adapter<wchar_t>_> *param_2
          )

{
  wchar_t wVar1;
  uint uVar2;
  undefined2 extraout_var;
  undefined1 uVar3;
  int iVar4;
  
  uVar3 = 0;
  iVar4 = 0;
  do {
    wVar1 = *param_1;
    uVar2 = (uint)(ushort)wVar1;
    if ((wVar1 != *(wchar_t *)((int)&DAT_10204ec0 + iVar4)) &&
       (wVar1 != *(wchar_t *)((int)&DAT_10204ec8 + iVar4))) goto LAB_101a467b;
    wVar1 = __crt_strtox::
            input_adapter_character_source<__crt_stdio_input::string_input_adapter<wchar_t>_>::get
                      (param_2);
    uVar2 = CONCAT22(extraout_var,wVar1);
    iVar4 = iVar4 + 2;
    *param_1 = wVar1;
  } while (iVar4 != 8);
  uVar3 = 1;
LAB_101a467b:
  return CONCAT31((int3)(uVar2 >> 8),uVar3);
}

