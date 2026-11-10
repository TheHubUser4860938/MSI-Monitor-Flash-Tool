// rea decompile_all
// name: type_case_s_compute_narrow_string_length
// address: 0x578910
// body: available
// range: 0x578910-0x57894f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    private: int __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t> >
   >::type_case_s_compute_narrow_string_length(int,wchar_t)const 
    private: int __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t> >
   >::type_case_s_compute_narrow_string_length(int,wchar_t)const 
    private: int __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> >
   >::type_case_s_compute_narrow_string_length(int,wchar_t)const 
    private: int __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> >
   >::type_case_s_compute_narrow_string_length(int,wchar_t)const 
     6 names - too many to list
   
   Libraries: Visual Studio 2015 Debug, Visual Studio 2015 Release */

int type_case_s_compute_narrow_string_length(int param_1)

{
  int in_ECX;
  byte *pbVar1;
  int iVar2;
  
  iVar2 = 0;
  pbVar1 = *(byte **)(in_ECX + 0x34);
  if (0 < param_1) {
    do {
      if (*pbVar1 == 0) {
        return iVar2;
      }
      if ((*(ushort *)(*(int *)**(undefined4 **)(in_ECX + 8) + (uint)*pbVar1 * 2) & 0x8000) != 0) {
        pbVar1 = pbVar1 + 1;
      }
      pbVar1 = pbVar1 + 1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_1);
  }
  return iVar2;
}

