// rea decompile_all
// name: _wmemcpy_s
// address: 0x57c175
// body: available
// range: 0x57c175-0x57c1f8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    _wmemcpy_s
   
   Library: Visual Studio 2015 Release */

errno_t __cdecl _wmemcpy_s(wchar_t *_S1,rsize_t _N1,wchar_t *_S2,rsize_t _N)

{
  errno_t eVar1;
  int *piVar2;
  
  if (_N == 0) {
    eVar1 = 0;
  }
  else if (_S1 == (wchar_t *)0x0) {
    piVar2 = __errno();
    eVar1 = 0x16;
    *piVar2 = 0x16;
    FUN_0057662d();
  }
  else if ((_S2 == (wchar_t *)0x0) || (_N1 < _N)) {
    _wmemset(_S1,L'\0',_N1);
    if (_S2 == (wchar_t *)0x0) {
      piVar2 = __errno();
      eVar1 = 0x16;
    }
    else {
      if (_N <= _N1) {
        return 0x16;
      }
      piVar2 = __errno();
      eVar1 = 0x22;
    }
    *piVar2 = eVar1;
    FUN_0057662d();
  }
  else {
    FUN_005734b0(_S1,_S2,_N * 2);
    eVar1 = 0;
  }
  return eVar1;
}

