// rea decompile_all
// name: _wcscoll
// address: 0x1015a950
// body: available
// range: 0x1015a950-0x1015a9c1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
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
  
  if (DAT_101de9bc != 0) {
    iVar3 = __wcscoll_l(_Str1,_Str2,(_locale_t)0x0);
    return iVar3;
  }
  if ((_Str1 == (wchar_t *)0x0) || (_Str2 == (wchar_t *)0x0)) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    FUN_1014f4c6();
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

