// rea decompile_all
// name: __Wcsxfrm
// address: 0x571a54
// body: available
// range: 0x571a54-0x571b19 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __Wcsxfrm
   
   Library: Visual Studio 2015 Release */

size_t __cdecl
__Wcsxfrm(wchar_t *_String1,wchar_t *_End1,wchar_t *param_3,wchar_t *param_4,_Collvec *param_5)

{
  LPCWSTR _LocaleName;
  LPWSTR _LpDestStr;
  uint uVar1;
  uint uVar2;
  uint _CchSrc;
  
  uVar2 = (int)_End1 - (int)_String1 >> 1;
  _CchSrc = (int)param_4 - (int)param_3 >> 1;
  if (param_5 == (_Collvec *)0x0) {
    param_5 = (_Collvec *)____lc_locale_name_func();
  }
  _LocaleName = param_5->_LocaleName;
  if (_LocaleName == (LPCWSTR)0x0) {
    uVar1 = _CchSrc;
    if (_CchSrc <= uVar2) {
      FUN_005734b0(_String1,param_3,_CchSrc * 2);
    }
  }
  else {
    _LpDestStr = (LPWSTR)__malloc_base(uVar2);
    uVar1 = 0xffffffff;
    if (_LpDestStr != (LPWSTR)0x0) {
      uVar1 = ___crtLCMapStringW(_LocaleName,0x400,param_3,_CchSrc,_LpDestStr,uVar2);
      if (uVar1 == 0) {
        uVar1 = ___crtLCMapStringW(_LocaleName,0x400,param_3,_CchSrc,(LPWSTR)0x0,0);
        if (uVar1 == 0) {
          uVar1 = 0x7fffffff;
        }
      }
      else {
        uVar2 = 0;
        if (uVar1 != 0) {
          do {
            _String1[uVar2] = (ushort)*(byte *)(uVar2 + (int)_LpDestStr);
            uVar2 = uVar2 + 1;
          } while (uVar2 < uVar1);
        }
      }
      FID_conflict__free(_LpDestStr);
    }
  }
  return uVar1;
}

