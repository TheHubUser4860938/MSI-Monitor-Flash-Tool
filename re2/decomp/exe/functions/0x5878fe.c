// rea decompile_all
// name: _wcscoll
// address: 0x5878fe
// body: available
// range: 0x5878fe-0x58796f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    _wcscoll
   
   Library: Visual Studio 2015 Release */

int __cdecl _wcscoll(wchar_t *_Str1,wchar_t *_Str2)

{
  wchar_t wVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  if (DAT_00618f2c != 0) {
    iVar3 = __wcscoll_l(_Str1,_Str2,(_locale_t)0x0);
    return iVar3;
  }
  if ((_Str1 == (wchar_t *)0x0) || (_Str2 == (wchar_t *)0x0)) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    FUN_0057662d();
    return 0x7fffffff;
  }
  while( true ) {
    wVar1 = *_Str1;
    bVar4 = (ushort)wVar1 < (ushort)*_Str2;
    if (wVar1 != *_Str2) break;
    if (wVar1 == L'\0') {
      return 0;
    }
    wVar1 = _Str1[1];
    bVar4 = (ushort)wVar1 < (ushort)_Str2[1];
    if (wVar1 != _Str2[1]) break;
    _Str1 = _Str1 + 2;
    _Str2 = _Str2 + 2;
    if (wVar1 == L'\0') {
      return 0;
    }
  }
  return -(uint)bVar4 | 1;
}

