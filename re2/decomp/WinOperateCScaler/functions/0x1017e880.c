// rea decompile_all
// name: common_ftell<__int64>
// address: 0x1017e880
// body: available
// range: 0x1017e880-0x1017e8eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __int64 __cdecl common_ftell<__int64>(class __crt_stdio_stream)
   
   Library: Visual Studio 2015 Release */

__int64 __cdecl common_ftell<__int64>(FILE *param_1)

{
  int *piVar1;
  __int64 _Var2;
  
  if (param_1 == (FILE *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_1016ec41();
    _Var2 = -1;
  }
  else {
    __lock_file(param_1);
    _Var2 = common_ftell_nolock<__int64>(param_1);
    FUN_1017e8f2();
  }
  return _Var2;
}

