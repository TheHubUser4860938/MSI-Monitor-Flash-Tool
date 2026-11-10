// rea decompile_all
// name: __Strcoll
// address: 0x10169daf
// body: available
// range: 0x10169daf-0x10169e41 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __Strcoll
   
   Library: Visual Studio 2015 Release */

int __cdecl __Strcoll(char *param_1,char *param_2,char *param_3,char *param_4,_Collvec *param_5)

{
  wchar_t **ppwVar1;
  UINT _CchCount2;
  LPCSTR _Size;
  int iVar2;
  int *piVar3;
  _locale_t _Plocinfo;
  LPCSTR _LpString1;
  int unaff_EDI;
  LPCSTR _LpString2;
  
  _LpString1 = param_2 + -(int)param_1;
  _LpString2 = param_4 + -(int)param_3;
  if (param_5 == (_Collvec *)0x0) {
    ppwVar1 = ____lc_locale_name_func();
    _Plocinfo = (_locale_t)ppwVar1[1];
    _CchCount2 = ____lc_collate_cp_func();
  }
  else {
    _Plocinfo = (_locale_t)param_5->_LocaleName;
    _CchCount2 = param_5->_Page;
  }
  if (_Plocinfo == (_locale_t)0x0) {
    _Size = _LpString1;
    if ((int)_LpString2 <= (int)_LpString1) {
      _Size = _LpString2;
    }
    iVar2 = _memcmp(param_1,param_3,(size_t)_Size);
    if ((iVar2 == 0) && (_LpString1 != _LpString2)) {
      iVar2 = (uint)((int)_LpString2 <= (int)_LpString1) * 2 + -1;
    }
  }
  else {
    iVar2 = ___crtCompareStringA
                      (_Plocinfo,(LPCWSTR)0x1000,(DWORD)param_1,_LpString1,(int)param_3,_LpString2,
                       _CchCount2,unaff_EDI);
    if (iVar2 == 0) {
      piVar3 = __errno();
      *piVar3 = 0x16;
      iVar2 = 0x7fffffff;
    }
    else {
      iVar2 = iVar2 + -2;
    }
  }
  return iVar2;
}

