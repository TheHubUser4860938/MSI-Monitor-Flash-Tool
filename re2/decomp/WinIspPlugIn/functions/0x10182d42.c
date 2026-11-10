// rea decompile_all
// name: std::locale::_Locimp::_Locimp_Addfac
// address: 0x10182d42
// body: available
// range: 0x10182d42-0x10182e03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10182d86 to 0x10180c1c FUN_10180c1c (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    private: static void __cdecl std::locale::_Locimp::_Locimp_Addfac(class std::locale::_Locimp
   *,class std::locale::facet *,unsigned int)
   
   Library: Visual Studio 2015 Release */

void __cdecl std::locale::_Locimp::_Locimp_Addfac(_Locimp *param_1,facet *param_2,uint param_3)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  _Lockit local_18 [4];
  int *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x10182d4e;
  _Lockit::_Lockit(local_18,0);
  local_8 = 0;
  if (*(uint *)(param_1 + 0xc) <= param_3) {
    uVar3 = param_3 + 1;
    if (uVar3 < 0x28) {
      uVar3 = 0x28;
    }
    iVar2 = __realloc_base(*(undefined4 *)(param_1 + 8),uVar3 << 2);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_10180c1c();
    }
    *(int *)(param_1 + 8) = iVar2;
    while (*(uint *)(param_1 + 0xc) < uVar3) {
      *(undefined4 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0xc) * 4) = 0;
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
    }
  }
  pcVar1 = *(code **)(*(int *)param_2 + 4);
  guard_check_icall();
  (*pcVar1)();
  local_14 = *(int **)(*(int *)(param_1 + 8) + param_3 * 4);
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
  *(facet **)(*(int *)(param_1 + 8) + param_3 * 4) = param_2;
  FUN_10180d1e();
  return;
}

