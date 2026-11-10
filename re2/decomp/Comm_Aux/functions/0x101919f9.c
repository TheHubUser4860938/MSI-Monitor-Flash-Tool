// rea decompile_all
// name: _wcspbrk
// address: 0x101919f9
// body: available
// range: 0x101919f9-0x10191a3d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    _wcspbrk
   
   Library: Visual Studio 2015 Release */

wchar_t * __cdecl _wcspbrk(wchar_t *_Str,wchar_t *_Control)

{
  wchar_t *pwVar1;
  wchar_t wVar2;
  
  if (*_Str != L'\0') {
    do {
      if (*_Control != L'\0') {
        pwVar1 = _Control;
        wVar2 = *_Control;
        do {
          if (wVar2 == *_Str) {
            return _Str;
          }
          pwVar1 = pwVar1 + 1;
          wVar2 = *pwVar1;
        } while (wVar2 != L'\0');
      }
      _Str = _Str + 1;
    } while (*_Str != L'\0');
  }
  return (wchar_t *)0x0;
}

