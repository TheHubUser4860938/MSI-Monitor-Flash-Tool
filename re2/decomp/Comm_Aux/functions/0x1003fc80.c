// rea decompile_all
// name: FUN_1003fc80
// address: 0x1003fc80
// body: available
// range: 0x1003fc80-0x1003fd2e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003fd16 to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1003fd20 to 0x100351a0 FUN_100351a0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1003fd2a to 0x100351a0 FUN_100351a0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_1003fc80(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int in_ECX;
  undefined4 *puVar4;
  
  if (*(int *)(in_ECX + 0x10) == 0) {
    iVar1 = FUN_1004d74a(in_ECX + 0x14,*(undefined4 *)(in_ECX + 0x18),0x20);
    iVar3 = *(int *)(in_ECX + 0x18);
    puVar4 = (undefined4 *)(iVar3 * 0x20 + iVar1 + -0x18);
    while (iVar3 = iVar3 + -1, -1 < iVar3) {
      *puVar4 = *(undefined4 *)(in_ECX + 0x10);
      *(undefined4 **)(in_ECX + 0x10) = puVar4;
      puVar4 = puVar4 + -8;
    }
  }
  puVar4 = *(undefined4 **)(in_ECX + 0x10);
  if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1004886a();
  }
  *(undefined4 *)(in_ECX + 0x10) = *puVar4;
  puVar4[1] = param_1;
  *puVar4 = 0;
  *(int *)(in_ECX + 0xc) = *(int *)(in_ECX + 0xc) + 1;
  if (puVar4 != (undefined4 *)0xfffffff8) {
    piVar2 = (int *)FUN_10048e90();
    if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_100351a0(0x80004005);
    }
    iVar3 = (**(code **)(*piVar2 + 0xc))();
    puVar4[3] = iVar3 + 0x10;
    piVar2 = (int *)FUN_10048e90();
    if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_100351a0(0x80004005);
    }
    iVar3 = (**(code **)(*piVar2 + 0xc))();
    puVar4[7] = iVar3 + 0x10;
  }
  return puVar4;
}

