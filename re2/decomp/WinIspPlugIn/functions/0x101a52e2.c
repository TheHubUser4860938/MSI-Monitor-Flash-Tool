// rea decompile_all
// name: __crt_stdio_input::input_processor<wchar_t,__crt_stdio_input::string_input_adapter<wchar_t>_>::write_floating_point<double>
// address: 0x101a52e2
// body: available
// range: 0x101a52e2-0x101a531e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    private: bool __thiscall __crt_stdio_input::input_processor<wchar_t,class
   __crt_stdio_input::string_input_adapter<wchar_t> >::write_floating_point<double>(double const &)
   
   Library: Visual Studio 2015 Release */

bool __thiscall
__crt_stdio_input::input_processor<wchar_t,__crt_stdio_input::string_input_adapter<wchar_t>_>::
write_floating_point<double>
          (input_processor<wchar_t,__crt_stdio_input::string_input_adapter<wchar_t>_> *this,
          double *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  
  *(int *)(this + 0x54) = *(int *)(this + 0x54) + 4;
  puVar1 = *(undefined4 **)(*(int *)(this + 0x54) + -4);
  if (puVar1 != (undefined4 *)0x0) {
    *(int *)(this + 0x58) = *(int *)(this + 0x58) + 1;
    *puVar1 = *(undefined4 *)param_1;
    puVar1[1] = *(undefined4 *)((int)param_1 + 4);
  }
  else {
    piVar2 = __errno();
    *piVar2 = 0x16;
    FUN_1019ab61();
  }
  return puVar1 != (undefined4 *)0x0;
}

