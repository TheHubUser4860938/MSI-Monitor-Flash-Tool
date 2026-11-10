// rea decompile_all
// name: FUN_0057e523
// address: 0x57e523
// body: available
// range: 0x57e523-0x57e583 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x57e583 with no resolved callee; its no-return basis is unknown.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


wchar_t * FUN_0057e523(wchar_t *param_1)

{
  rsize_t _SizeInWords;
  wchar_t wVar1;
  code *pcVar2;
  wchar_t *pwVar3;
  errno_t eVar4;
  
  if (param_1 == (wchar_t *)0x0) {
    return (wchar_t *)0x0;
  }
  pwVar3 = param_1;
  do {
    wVar1 = *pwVar3;
    pwVar3 = pwVar3 + 1;
  } while (wVar1 != L'\0');
  _SizeInWords = ((int)pwVar3 - (int)(param_1 + 1) >> 1) + 1;
  pwVar3 = (wchar_t *)FUN_0057b8a2(_SizeInWords * 2);
  if ((pwVar3 != (wchar_t *)0x0) && (eVar4 = _wcscpy_s(pwVar3,_SizeInWords,param_1), eVar4 != 0)) {
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    pcVar2 = (code *)swi(3);
    pwVar3 = (wchar_t *)(*pcVar2)();
    return pwVar3;
  }
  return pwVar3;
}

