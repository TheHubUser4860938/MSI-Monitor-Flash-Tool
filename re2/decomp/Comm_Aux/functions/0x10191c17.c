// rea decompile_all
// name: __wcscoll_l
// address: 0x10191c17
// body: available
// range: 0x10191c17-0x10191cc4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __wcscoll_l
   
   Library: Visual Studio 2015 Release */

int __cdecl __wcscoll_l(wchar_t *_Str1,wchar_t *_Str2,_locale_t _Locale)

{
  wchar_t wVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  int local_14;
  int local_10;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,(__crt_locale_pointers *)_Locale);
  if ((_Str1 == (wchar_t *)0x0) || (_Str2 == (wchar_t *)0x0)) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    FUN_10184721();
  }
  else {
    if (*(int *)(local_10 + 0xa4) == 0) {
      do {
        wVar1 = *_Str1;
        bVar5 = (ushort)wVar1 < (ushort)*_Str2;
        if (wVar1 != *_Str2) {
LAB_10191c7d:
          uVar4 = -(uint)bVar5 | 1;
          goto LAB_10191cb1;
        }
        if (wVar1 == L'\0') break;
        wVar1 = _Str1[1];
        bVar5 = (ushort)wVar1 < (ushort)_Str2[1];
        if (wVar1 != _Str2[1]) goto LAB_10191c7d;
        _Str1 = _Str1 + 2;
        _Str2 = _Str2 + 2;
      } while (wVar1 != L'\0');
      uVar4 = 0;
      goto LAB_10191cb1;
    }
    iVar3 = ___acrt_CompareStringW
                      (*(int *)(local_10 + 0xa4),0x1000,_Str1,0xffffffff,_Str2,0xffffffff);
    if (iVar3 != 0) {
      uVar4 = iVar3 - 2;
      goto LAB_10191cb1;
    }
    piVar2 = __errno();
    *piVar2 = 0x16;
  }
  uVar4 = 0x7fffffff;
LAB_10191cb1:
  if (local_8 != '\0') {
    *(uint *)(local_14 + 0x350) = *(uint *)(local_14 + 0x350) & 0xfffffffd;
  }
  return uVar4;
}

