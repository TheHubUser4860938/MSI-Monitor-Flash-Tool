// rea decompile_all
// name: __crt_stdio_output::is_wide_character_specifier<wchar_t>
// address: 0x101523dc
// body: available
// range: 0x101523dc-0x1015242a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    bool __cdecl __crt_stdio_output::is_wide_character_specifier<wchar_t>(unsigned
   __int64,wchar_t,enum __crt_stdio_output::length_modifier)
   
   Libraries: Visual Studio 2015 Debug, Visual Studio 2015 Release */

bool __cdecl
__crt_stdio_output::is_wide_character_specifier<wchar_t>
          (__uint64 param_1,wchar_t param_2,length_modifier param_3)

{
  bool bVar1;
  
  if (param_3 == 2) {
    return false;
  }
  if (((param_3 != 3) && (param_3 != 0xc)) && (param_3 != 0xd)) {
    bVar1 = false;
    if ((param_2 == L'c') || (param_2 == L's')) {
      bVar1 = true;
    }
    return ((param_1 & 4) != 0) == bVar1;
  }
  return true;
}

