// rea decompile_all
// name: FUN_1016b2c5
// address: 0x1016b2c5
// body: available
// range: 0x1016b2c5-0x1016b335 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1016b331 to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_1016b2c5(int param_1)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  int iVar3;
  int local_8;
  
  if (param_1 < 0) {
    FUN_1016b0e4(0);
  }
  else {
    local_8 = *(int *)(in_ECX + 0x84);
    do {
      if (local_8 == 0) {
        return 0;
      }
      piVar2 = (int *)FUN_10034920(&local_8);
      iVar1 = *piVar2;
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1004886a();
      }
      if (*(int *)(iVar1 + 4) == 0) {
        iVar3 = *(int *)(iVar1 + 0x34);
      }
      else {
        iVar3 = *(int *)(iVar1 + 0x38);
      }
    } while (iVar3 != param_1);
    FUN_1016b0e4(iVar1);
  }
  return 1;
}

