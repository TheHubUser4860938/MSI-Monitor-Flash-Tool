// rea decompile_all
// name: _fputws
// address: 0x584e53
// body: available
// range: 0x584e53-0x584edc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _fputws
   
   Library: Visual Studio 2015 Release */

int __cdecl _fputws(wchar_t *_Str,FILE *_File)

{
  wint_t wVar1;
  int *piVar2;
  int iVar3;
  
  if ((_Str == (wchar_t *)0x0) || (_File == (FILE *)0x0)) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    FUN_0057662d();
    iVar3 = -1;
  }
  else {
    iVar3 = -1;
    __lock_file(_File);
    while( true ) {
      if (*_Str == L'\0') break;
      wVar1 = __fputwc_nolock(*_Str,_File);
      if (wVar1 == 0xffff) goto LAB_00584ec9;
      _Str = _Str + 1;
    }
    iVar3 = 0;
LAB_00584ec9:
    FUN_00584ee3();
  }
  return iVar3;
}

