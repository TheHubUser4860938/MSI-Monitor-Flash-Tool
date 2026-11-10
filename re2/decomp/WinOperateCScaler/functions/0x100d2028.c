// rea decompile_all
// name: FUN_100d2028
// address: 0x100d2028
// body: available
// range: 0x100d2028-0x100d20a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100d209f to 0x1001d023 FUN_1001d023 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100d2028(int param_1,int param_2)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (param_1 != 0) {
    piVar2 = (int *)FUN_100972dc(&param_1);
    piVar2 = (int *)*piVar2;
    pcVar1 = *(code **)(*piVar2 + 0x58);
    guard_check_icall();
    iVar3 = (*pcVar1)();
    if (((iVar3 != 0) || (param_2 != 0)) && (iVar3 = piVar2[3], param_1 != 0)) {
      do {
        puVar4 = (undefined4 *)FUN_100972dc(&param_1);
        pcVar1 = *(code **)(*(int *)*puVar4 + 0x38);
        guard_check_icall(-iVar3);
        (*pcVar1)();
      } while (param_1 != 0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1001d023();
}

