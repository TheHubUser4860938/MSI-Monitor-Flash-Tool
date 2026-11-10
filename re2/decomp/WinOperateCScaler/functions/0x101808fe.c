// rea decompile_all
// name: common_fsopen<char>
// address: 0x101808fe
// body: available
// range: 0x101808fe-0x101809a4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    struct _iobuf * __cdecl common_fsopen<char>(char const * const,char const * const,int)
   
   Library: Visual Studio 2015 Release */

_iobuf * __cdecl common_fsopen<char>(char *param_1,char *param_2,int param_3)

{
  int *piVar1;
  _iobuf *p_Var2;
  int local_20;
  
  if (((param_1 == (char *)0x0) || (param_2 == (char *)0x0)) || (*param_2 == '\0')) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_1016ec41();
  }
  else if (*param_1 == '\0') {
    piVar1 = __errno();
    *piVar1 = 0x16;
  }
  else {
    __acrt_stdio_allocate_stream();
    if (local_20 != 0) {
      p_Var2 = (_iobuf *)FUN_1018d8c0(param_1,param_2,param_3,local_20);
      FUN_101809a8();
      return p_Var2;
    }
    piVar1 = __errno();
    *piVar1 = 0x18;
  }
  return (_iobuf *)0x0;
}

