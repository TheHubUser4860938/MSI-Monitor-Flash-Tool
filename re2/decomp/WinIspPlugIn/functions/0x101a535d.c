// rea decompile_all
// name: input_adapter_character_source<>
// address: 0x101a535d
// body: available
// range: 0x101a535d-0x101a538d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    public: __thiscall __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::console_input_adapter<char> >::input_adapter_character_source<class
   __crt_stdio_input::console_input_adapter<char> >(class
   __crt_stdio_input::console_input_adapter<char> * const,unsigned __int64,bool * const)
    public: __thiscall __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::console_input_adapter<wchar_t> >::input_adapter_character_source<class
   __crt_stdio_input::console_input_adapter<wchar_t> >(class
   __crt_stdio_input::console_input_adapter<wchar_t> * const,unsigned __int64,bool * const)
    public: __thiscall __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::stream_input_adapter<char> >::input_adapter_character_source<class
   __crt_stdio_input::stream_input_adapter<char> >(class
   __crt_stdio_input::stream_input_adapter<char> * const,unsigned __int64,bool * const)
    public: __thiscall __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::stream_input_adapter<wchar_t> >::input_adapter_character_source<class
   __crt_stdio_input::stream_input_adapter<wchar_t> >(class
   __crt_stdio_input::stream_input_adapter<wchar_t> * const,unsigned __int64,bool * const)
     6 names - too many to list
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void input_adapter_character_source<>
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4)

{
  undefined4 *in_ECX;
  
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  *in_ECX = param_1;
  in_ECX[2] = param_2;
  in_ECX[3] = param_3;
  in_ECX[6] = param_4;
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = 1;
  }
  return;
}

