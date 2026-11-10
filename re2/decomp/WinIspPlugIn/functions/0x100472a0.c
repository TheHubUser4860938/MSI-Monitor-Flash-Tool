// rea decompile_all
// name: FUN_100472a0
// address: 0x100472a0
// body: available
// range: 0x100472a0-0x1004731e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1004731a to 0x10047550 FUN_10047550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100472a0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int *in_ECX;
  
  iVar2 = *in_ECX;
  iVar3 = *(int *)(iVar2 + -0xc);
  puVar4 = (undefined4 *)(**(code **)(**(int **)(iVar2 + -0x10) + 0x10))();
  iVar5 = (**(code **)*puVar4)(param_1,2);
  if (iVar5 != 0) {
    if (iVar3 < param_1) {
      param_1 = iVar3;
    }
    FUN_10047720(iVar2,param_1 * 2 + 2);
    *(int *)(iVar5 + 4) = iVar3;
    LOCK();
    piVar1 = (int *)(iVar2 + -4);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1 || iVar3 + -1 < 0) {
      (**(code **)(**(int **)(iVar2 + -0x10) + 4))((undefined4 *)(iVar2 + -0x10));
    }
    *in_ECX = iVar5 + 0x10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10047550();
}

