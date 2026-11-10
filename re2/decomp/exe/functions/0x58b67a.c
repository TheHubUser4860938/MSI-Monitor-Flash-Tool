// rea decompile_all
// name: common_fsopen<wchar_t>
// address: 0x58b67a
// body: available
// range: 0x58b67a-0x58b720 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    struct _iobuf * __cdecl common_fsopen<wchar_t>(wchar_t const * const,wchar_t const * const,int)
   
   Library: Visual Studio 2015 Release */

_iobuf * __cdecl common_fsopen<wchar_t>(wchar_t *param_1,wchar_t *param_2,int param_3)

{
  int *piVar1;
  _iobuf *p_Var2;
  int local_20;
  
  if (((param_1 == (wchar_t *)0x0) || (param_2 == (wchar_t *)0x0)) || (*param_2 == L'\0')) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_0057662d();
  }
  else if (*param_1 == L'\0') {
    piVar1 = __errno();
    *piVar1 = 0x16;
  }
  else {
    __acrt_stdio_allocate_stream();
    if (local_20 != 0) {
      p_Var2 = (_iobuf *)FUN_00597d8a(param_1,param_2,param_3,local_20);
      FUN_0058b724();
      return p_Var2;
    }
    piVar1 = __errno();
    *piVar1 = 0x18;
  }
  return (_iobuf *)0x0;
}

