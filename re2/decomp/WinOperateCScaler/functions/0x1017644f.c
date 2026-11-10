// rea decompile_all
// name: __strnicmp_l
// address: 0x1017644f
// body: available
// range: 0x1017644f-0x10176505 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __strnicmp_l
   
   Library: Visual Studio 2015 Release */

int __cdecl __strnicmp_l(char *_Str1,char *_Str2,size_t _MaxCount,_locale_t _Locale)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_14;
  localeinfo_struct local_10;
  char local_8;
  
  if (_MaxCount == 0) {
    iVar3 = 0;
  }
  else {
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,(__crt_locale_pointers *)_Locale);
    iVar3 = 0x7fffffff;
    if (((_Str1 == (char *)0x0) || (_Str2 == (char *)0x0)) || (0x7fffffff < _MaxCount)) {
      piVar1 = __errno();
      *piVar1 = 0x16;
      FUN_1016ec41();
    }
    else if ((local_10.locinfo)->locale_name[2] == (wchar_t *)0x0) {
      iVar3 = ___ascii_strnicmp(_Str1,_Str2,_MaxCount);
    }
    else {
      iVar4 = (int)_Str1 - (int)_Str2;
      do {
        iVar3 = __tolower_l((uint)(byte)_Str2[iVar4],&local_10);
        iVar2 = __tolower_l((uint)(byte)*_Str2,&local_10);
        _Str2 = _Str2 + 1;
        _MaxCount = _MaxCount - 1;
        if ((_MaxCount == 0) || (iVar3 == 0)) break;
      } while (iVar3 == iVar2);
      iVar3 = iVar3 - iVar2;
    }
    if (local_8 != '\0') {
      *(uint *)(local_14 + 0x350) = *(uint *)(local_14 + 0x350) & 0xfffffffd;
    }
  }
  return iVar3;
}

