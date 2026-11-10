// rea decompile_all
// name: output_adapter_data<>
// address: 0x57707f
// body: available
// range: 0x57707f-0x5770ba inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    protected: __thiscall __crt_stdio_output::output_adapter_data<char,class
   __crt_stdio_output::stream_output_adapter<char> >::output_adapter_data<char,class
   __crt_stdio_output::stream_output_adapter<char> >(class
   __crt_stdio_output::stream_output_adapter<char> const &,unsigned __int64,char const *
   const,struct __crt_locale_pointers * const,char * const)
    protected: __thiscall __crt_stdio_output::output_adapter_data<char,class
   __crt_stdio_output::string_output_adapter<char> >::output_adapter_data<char,class
   __crt_stdio_output::string_output_adapter<char> >(class
   __crt_stdio_output::string_output_adapter<char> const &,unsigned __int64,char const *
   const,struct __crt_locale_pointers * const,char * const)
   
   Library: Visual Studio 2015 Release */

void output_adapter_data<>
               (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6)

{
  common_data<char> *in_ECX;
  
  __crt_stdio_output::common_data<char>::common_data<char>(in_ECX);
  *(undefined4 *)(in_ECX + 0x448) = *param_1;
  *(undefined4 *)in_ECX = param_2;
  *(undefined4 *)(in_ECX + 4) = param_3;
  *(undefined4 *)(in_ECX + 8) = param_5;
  *(undefined4 *)(in_ECX + 0x10) = param_4;
  *(undefined4 *)(in_ECX + 0x14) = param_6;
  return;
}

