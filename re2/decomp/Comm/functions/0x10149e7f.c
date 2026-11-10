// rea decompile_all
// name: std::locale::_Init
// address: 0x10149e7f
// body: available
// range: 0x10149e7f-0x10149f0c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    private: static class std::locale::_Locimp * __cdecl std::locale::_Init(bool)
   
   Library: Visual Studio 2015 Release */

_Locimp * __cdecl std::locale::_Init(bool param_1)

{
  code *pcVar1;
  _Locimp *p_Var2;
  _Lockit local_14 [12];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x10149e8b;
  _Lockit::_Lockit(local_14,0);
  local_8 = 0;
  p_Var2 = DAT_101de3c0;
  if (DAT_101de3c0 == (_Locimp *)0x0) {
    p_Var2 = _Locimp::_New_Locimp(false);
    _Setgloballocale(p_Var2);
    *(undefined4 *)(p_Var2 + 0x10) = 0x3f;
    FUN_1000df00(&DAT_101a9b74);
    pcVar1 = *(code **)(*(int *)p_Var2 + 4);
    DAT_101de3bc = p_Var2;
    guard_check_icall();
    (*pcVar1)();
    _DAT_101de3e0 = DAT_101de3bc;
  }
  if (param_1) {
    pcVar1 = *(code **)(*(int *)p_Var2 + 4);
    guard_check_icall();
    (*pcVar1)();
  }
  FUN_10149ce6();
  return p_Var2;
}

