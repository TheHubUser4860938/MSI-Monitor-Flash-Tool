// rea decompile_all
// name: _wcstok
// address: 0x10047a34
// body: available
// range: 0x10047a34-0x10047ade inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    _wcstok
   
   Library: Visual Studio 2008 Release */

wchar_t * __cdecl _wcstok(wchar_t *_Str,wchar_t *_Delim)

{
  wchar_t wVar1;
  _ptiddata p_Var2;
  wchar_t *pwVar3;
  wchar_t wVar4;
  wchar_t *pwVar5;
  
  p_Var2 = __getptd();
  if (_Str == (wchar_t *)0x0) {
    _Str = p_Var2->_wtoken;
  }
  wVar4 = *_Str;
  if (wVar4 != L'\0') {
    wVar1 = *_Delim;
    pwVar3 = _Delim;
    do {
      while ((wVar1 != L'\0' && (wVar1 != wVar4))) {
        wVar1 = pwVar3[1];
        pwVar3 = pwVar3 + 1;
      }
      if (*pwVar3 == L'\0') break;
      _Str = _Str + 1;
      wVar4 = *_Str;
      wVar1 = *_Delim;
      pwVar3 = _Delim;
    } while (wVar4 != L'\0');
  }
  pwVar3 = _Str;
  if (*_Str != L'\0') {
    do {
      pwVar5 = _Delim;
      if (*_Delim != L'\0') {
        wVar4 = *_Delim;
        do {
          if (wVar4 == *pwVar3) break;
          pwVar5 = pwVar5 + 1;
          wVar4 = *pwVar5;
        } while (wVar4 != L'\0');
      }
      if (*pwVar5 != L'\0') {
        *pwVar3 = L'\0';
        pwVar3 = pwVar3 + 1;
        break;
      }
      pwVar3 = pwVar3 + 1;
    } while (*pwVar3 != L'\0');
  }
  p_Var2->_wtoken = pwVar3;
  return (wchar_t *)(-(uint)(_Str != pwVar3) & (uint)_Str);
}

