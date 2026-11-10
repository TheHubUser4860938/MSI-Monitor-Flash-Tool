// rea decompile_all
// name: __Getcoll
// address: 0x10169d8e
// body: available
// range: 0x10169d8e-0x10169dae inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __Getcoll
   
   Library: Visual Studio 2015 Release */

_Collvec __cdecl __Getcoll(void)

{
  wchar_t **ppwVar1;
  wchar_t *pwVar2;
  _Collvec _Var3;
  
  _Var3._Page = ____lc_collate_cp_func();
  ppwVar1 = ____lc_locale_name_func();
  pwVar2 = (wchar_t *)0x0;
  if (ppwVar1[1] != (wchar_t *)0x0) {
    pwVar2 = (wchar_t *)FUN_10176382(ppwVar1[1]);
  }
  _Var3._LocaleName = pwVar2;
  return _Var3;
}

