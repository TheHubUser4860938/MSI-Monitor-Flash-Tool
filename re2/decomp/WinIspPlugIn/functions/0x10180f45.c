// rea decompile_all
// name: std::locale::_Locimp::_Locimp_dtor
// address: 0x10180f45
// body: available
// range: 0x10180f45-0x10180fb9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    private: static void __cdecl std::locale::_Locimp::_Locimp_dtor(class std::locale::_Locimp *)
   
   Library: Visual Studio 2015 Release */

void __cdecl std::locale::_Locimp::_Locimp_dtor(_Locimp *param_1)

{
  code *pcVar1;
  int iVar2;
  _Lockit local_18 [4];
  int *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x10180f51;
  _Lockit::_Lockit(local_18,0);
  local_8 = 0;
  iVar2 = *(int *)(param_1 + 0xc);
  while (iVar2 != 0) {
    iVar2 = iVar2 + -1;
    local_14 = *(int **)(*(int *)(param_1 + 8) + iVar2 * 4);
    if (local_14 != (int *)0x0) {
      pcVar1 = *(code **)(*local_14 + 8);
      guard_check_icall();
      local_14 = (int *)(*pcVar1)();
      if (local_14 != (int *)0x0) {
        pcVar1 = *(code **)*local_14;
        guard_check_icall(1);
        (*pcVar1)();
      }
    }
  }
  FID_conflict__free(*(void **)(param_1 + 8));
  FUN_10180d1e();
  return;
}

