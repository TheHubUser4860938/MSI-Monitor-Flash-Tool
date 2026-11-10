// rea decompile_all
// name: ___DestructExceptionObject
// address: 0x1016a436
// body: available
// range: 0x1016a436-0x1016a495 inclusive
// range: 0x1016a4a7-0x1016a4c9 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___DestructExceptionObject
   
   Library: Visual Studio 2015 Release */

void ___DestructExceptionObject(int *param_1)

{
  byte *pbVar1;
  int *piVar2;
  code *pcVar3;
  
  if ((((param_1 != (int *)0x0) && (*param_1 == -0x1f928c9d)) && (param_1[4] == 3)) &&
     ((((param_1[5] == 0x19930520 || (param_1[5] == 0x19930521)) || (param_1[5] == 0x19930522)) &&
      (pbVar1 = (byte *)param_1[7], pbVar1 != (byte *)0x0)))) {
    if (*(int *)(pbVar1 + 4) == 0) {
      if (((*pbVar1 & 0x10) != 0) && (piVar2 = *(int **)param_1[6], piVar2 != (int *)0x0)) {
        pcVar3 = *(code **)(*piVar2 + 8);
        guard_check_icall(piVar2);
        (*pcVar3)();
      }
    }
    else {
      FID_conflict__CallMemberFunction2(param_1[6],*(int *)(pbVar1 + 4));
    }
  }
  return;
}

