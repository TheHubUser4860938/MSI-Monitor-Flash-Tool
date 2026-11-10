// rea decompile_all
// name: find_next_state
// address: 0x101526a5
// body: available
// range: 0x101526a5-0x101526db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    private: enum __crt_stdio_output::state __thiscall
   __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> > >::find_next_state(wchar_t,enum
   __crt_stdio_output::state)const 
    private: enum __crt_stdio_output::state __thiscall
   __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t> > >::find_next_state(wchar_t,enum
   __crt_stdio_output::state)const 
   
   Library: Visual Studio 2015 Release */

byte find_next_state(ushort param_1,int param_2)

{
  uint uVar1;
  
  if ((ushort)(param_1 - 0x20) < 0x5b) {
    uVar1 = (byte)(&DAT_101ac3d8)[param_1] & 0xf;
  }
  else {
    uVar1 = 0;
  }
  return (byte)(&DAT_101ac3f8)[param_2 + uVar1 * 9] >> 4;
}

