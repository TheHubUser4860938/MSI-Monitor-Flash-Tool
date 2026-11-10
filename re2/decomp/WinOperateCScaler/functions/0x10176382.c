// rea decompile_all
// name: FUN_10176382
// address: 0x10176382
// body: available
// range: 0x10176382-0x101763e2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x101763e2 with no resolved callee; its no-return basis is unknown.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


wchar_t * FUN_10176382(wchar_t *param_1)

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
  pwVar3 = (wchar_t *)FUN_10174be6(_SizeInWords * 2);
  if ((pwVar3 != (wchar_t *)0x0) && (eVar4 = _wcscpy_s(pwVar3,_SizeInWords,param_1), eVar4 != 0)) {
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    pcVar2 = (code *)swi(3);
    pwVar3 = (wchar_t *)(*pcVar2)();
    return pwVar3;
  }
  return pwVar3;
}

