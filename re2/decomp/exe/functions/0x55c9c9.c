// rea decompile_all
// name: std::locale::_Init
// address: 0x55c9c9
// body: available
// range: 0x55c9c9-0x55ca56 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
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
  local_8 = 0x55c9d5;
  _Lockit::_Lockit(local_14,0);
  local_8 = 0;
  p_Var2 = DAT_00618848;
  if (DAT_00618848 == (_Locimp *)0x0) {
    p_Var2 = _Locimp::_New_Locimp(false);
    _Setgloballocale(p_Var2);
    *(undefined4 *)(p_Var2 + 0x10) = 0x3f;
    FUN_00409800(&DAT_005dbd24);
    pcVar1 = *(code **)(*(int *)p_Var2 + 4);
    DAT_00618844 = p_Var2;
    guard_check_icall();
    (*pcVar1)();
    _DAT_00618868 = DAT_00618844;
  }
  if (param_1) {
    pcVar1 = *(code **)(*(int *)p_Var2 + 4);
    guard_check_icall();
    (*pcVar1)();
  }
  FUN_0055c830();
  return p_Var2;
}

