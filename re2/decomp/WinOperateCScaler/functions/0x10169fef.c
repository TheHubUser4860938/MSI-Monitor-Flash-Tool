// rea decompile_all
// name: __Strxfrm
// address: 0x10169fef
// body: available
// range: 0x10169fef-0x1016a09a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __Strxfrm
   
   Library: Visual Studio 2015 Release */

size_t __cdecl __Strxfrm(char *_String1,char *_End1,char *param_3,char *param_4,_Collvec *param_5)

{
  wchar_t **ppwVar1;
  UINT _CchDest;
  _locale_t _Plocinfo;
  LPCSTR pCVar2;
  LPCSTR pCVar3;
  LPCSTR _LpSrcStr;
  BOOL unaff_EDI;
  LPSTR _LpDestStr;
  
  _LpSrcStr = param_4 + -(int)param_3;
  _LpDestStr = _End1 + -(int)_String1;
  if (param_5 == (_Collvec *)0x0) {
    ppwVar1 = ____lc_locale_name_func();
    _Plocinfo = (_locale_t)ppwVar1[1];
    _CchDest = ____lc_collate_cp_func();
  }
  else {
    _Plocinfo = (_locale_t)param_5->_LocaleName;
    _CchDest = param_5->_Page;
  }
  if ((_Plocinfo == (_locale_t)0x0) && (_CchDest == 0)) {
    pCVar3 = _LpSrcStr;
    if (_LpSrcStr <= _LpDestStr) {
      FUN_1016bba0(_String1,param_3,_LpSrcStr);
    }
  }
  else {
    pCVar2 = (LPCSTR)___crtLCMapStringA(_Plocinfo,(LPCWSTR)0x400,(DWORD)param_3,_LpSrcStr,0,
                                        (LPSTR)0x0,_CchDest,1,unaff_EDI);
    pCVar3 = (LPCSTR)0xffffffff;
    if ((pCVar2 != (LPCSTR)0x0) && (pCVar3 = pCVar2, (int)pCVar2 <= (int)_LpDestStr)) {
      ___crtLCMapStringA(_Plocinfo,(LPCWSTR)0x400,(DWORD)param_3,_LpSrcStr,(int)_String1,_LpDestStr,
                         _CchDest,1,unaff_EDI);
    }
  }
  return (size_t)pCVar3;
}

