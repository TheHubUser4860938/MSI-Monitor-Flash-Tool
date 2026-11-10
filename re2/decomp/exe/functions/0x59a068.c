// rea decompile_all
// name: __strnicoll_l
// address: 0x59a068
// body: available
// range: 0x59a068-0x59a131 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __strnicoll_l
   
   Library: Visual Studio 2015 Release */

int __cdecl __strnicoll_l(char *_Str1,char *_Str2,size_t _MaxCount,_locale_t _Locale)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int local_14;
  localeinfo_struct local_10;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,(__crt_locale_pointers *)_Locale);
  if (_MaxCount == 0) {
    iVar3 = 0;
  }
  else if ((_Str1 == (char *)0x0) || (_Str2 == (char *)0x0)) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_0057662d();
    iVar3 = 0x7fffffff;
  }
  else {
    iVar3 = 0x7fffffff;
    if (_MaxCount < 0x80000000) {
      if ((local_10.locinfo)->locale_name[1] == (wchar_t *)0x0) {
        iVar3 = __strnicmp_l(_Str1,_Str2,_MaxCount,&local_10);
      }
      else {
        iVar2 = ___acrt_CompareStringA
                          (&local_10,(local_10.locinfo)->locale_name[1],0x1001,_Str1,_MaxCount,_Str2
                           ,_MaxCount,(local_10.locinfo)->lc_category[0].locale);
        if (iVar2 == 0) {
          piVar1 = __errno();
          *piVar1 = 0x16;
        }
        else {
          iVar3 = iVar2 + -2;
        }
      }
    }
    else {
      piVar1 = __errno();
      *piVar1 = 0x16;
      FUN_0057662d();
    }
  }
  if (local_8 != '\0') {
    *(uint *)(local_14 + 0x350) = *(uint *)(local_14 + 0x350) & 0xfffffffd;
  }
  return iVar3;
}

