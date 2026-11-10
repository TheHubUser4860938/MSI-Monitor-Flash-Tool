// rea decompile_all
// name: __crt_stdio_input::input_processor<wchar_t,__crt_stdio_input::string_input_adapter<wchar_t>_>::process_floating_point_specifier_t<float>
// address: 0x101562a0
// body: available
// range: 0x101562a0-0x10156307 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    private: bool __thiscall __crt_stdio_input::input_processor<wchar_t,class
   __crt_stdio_input::string_input_adapter<wchar_t>
   >::process_floating_point_specifier_t<float>(void)
   
   Library: Visual Studio 2015 Release */

bool __thiscall
__crt_stdio_input::input_processor<wchar_t,__crt_stdio_input::string_input_adapter<wchar_t>_>::
process_floating_point_specifier_t<float>
          (input_processor<wchar_t,__crt_stdio_input::string_input_adapter<wchar_t>_> *this)

{
  bool bVar1;
  int iVar2;
  undefined1 auStack_38 [28];
  undefined4 uStack_1c;
  float local_c;
  char local_5;
  
  local_5 = '\0';
  local_c = 0.0;
  make_input_adapter_character_source<>
            (auStack_38,this + 8,*(undefined4 *)(this + 0x38),*(undefined4 *)(this + 0x3c),&local_5)
  ;
  iVar2 = parse_floating_point<>(*(undefined4 *)(this + 0x50));
  if ((local_5 == '\0') || (iVar2 == 1)) {
    bVar1 = false;
  }
  else if (this[0x30] ==
           (input_processor<wchar_t,__crt_stdio_input::string_input_adapter<wchar_t>_>)0x0) {
    uStack_1c = 0x101562ff;
    bVar1 = write_floating_point<float>(this,&local_c);
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}

