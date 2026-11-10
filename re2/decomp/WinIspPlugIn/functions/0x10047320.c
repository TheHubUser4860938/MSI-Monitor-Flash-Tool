// rea decompile_all
// name: FUN_10047320
// address: 0x10047320
// body: available
// range: 0x10047320-0x10047356 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10047352 to 0x10047550 FUN_10047550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10047320(int param_1)

{
  int iVar1;
  int *in_ECX;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(*in_ECX + -0x10);
  if ((*(int *)(*in_ECX + -8) < param_1) && (0 < param_1)) {
    iVar1 = (**(code **)(*(int *)*puVar2 + 8))(puVar2,param_1,2);
    if (iVar1 != 0) {
      *in_ECX = iVar1 + 0x10;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_10047550();
}

