// rea decompile_all
// name: __crt_stdio_input::input_processor<wchar_t,__crt_stdio_input::string_input_adapter<wchar_t>_>::write_floating_point<float>
// address: 0x10178976
// body: available
// range: 0x10178976-0x101789ac inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    private: bool __thiscall __crt_stdio_input::input_processor<wchar_t,class
   __crt_stdio_input::string_input_adapter<wchar_t> >::write_floating_point<float>(float const &)
   
   Library: Visual Studio 2015 Release */

bool __thiscall
__crt_stdio_input::input_processor<wchar_t,__crt_stdio_input::string_input_adapter<wchar_t>_>::
write_floating_point<float>
          (input_processor<wchar_t,__crt_stdio_input::string_input_adapter<wchar_t>_> *this,
          float *param_1)

{
  float *pfVar1;
  int *piVar2;
  
  *(int *)(this + 0x54) = *(int *)(this + 0x54) + 4;
  pfVar1 = *(float **)(*(int *)(this + 0x54) + -4);
  if (pfVar1 != (float *)0x0) {
    *(int *)(this + 0x58) = *(int *)(this + 0x58) + 1;
    *pfVar1 = *param_1;
  }
  else {
    piVar2 = __errno();
    *piVar2 = 0x16;
    FUN_1016ec41();
  }
  return pfVar1 != (float *)0x0;
}

