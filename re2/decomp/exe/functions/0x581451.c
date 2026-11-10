// rea decompile_all
// name: __crt_stdio_input::input_processor<wchar_t,__crt_stdio_input::string_input_adapter<wchar_t>_>::input_processor<wchar_t,__crt_stdio_input::string_input_adapter<wchar_t>_>
// address: 0x581451
// body: available
// range: 0x581451-0x581498 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: __thiscall __crt_stdio_input::input_processor<wchar_t,class
   __crt_stdio_input::string_input_adapter<wchar_t> >::input_processor<wchar_t,class
   __crt_stdio_input::string_input_adapter<wchar_t> >(class
   __crt_stdio_input::string_input_adapter<wchar_t> const &,unsigned __int64,wchar_t const *
   const,struct __crt_locale_pointers * const,char * const)
   
   Library: Visual Studio 2015 Release */

input_processor<wchar_t,__crt_stdio_input::string_input_adapter<wchar_t>_> * __thiscall
__crt_stdio_input::input_processor<wchar_t,__crt_stdio_input::string_input_adapter<wchar_t>_>::
input_processor<wchar_t,__crt_stdio_input::string_input_adapter<wchar_t>_>
          (input_processor<wchar_t,__crt_stdio_input::string_input_adapter<wchar_t>_> *this,
          string_input_adapter<wchar_t> *param_1,__uint64 param_2,wchar_t *param_3,
          __crt_locale_pointers *param_4,char *param_5)

{
  undefined4 in_stack_00000008;
  
  *(undefined4 *)this = in_stack_00000008;
  *(undefined4 *)(this + 4) = (undefined4)param_2;
  *(undefined4 *)(this + 8) = *(undefined4 *)param_1;
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 8);
  format_string_parser<wchar_t>::format_string_parser<wchar_t>
            ((format_string_parser<wchar_t> *)(this + 0x18),
             CONCAT44((undefined4)param_2,in_stack_00000008),param_2._4_4_);
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  *(wchar_t **)(this + 0x50) = param_3;
  *(__crt_locale_pointers **)(this + 0x54) = param_4;
  return this;
}

