// rea decompile_all
// name: FUN_10005b90
// address: 0x10005b90
// body: available
// range: 0x10005b90-0x10005c21 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10005bd8 to 0x10038e31 FUN_10038e31 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x10005c07 to 0x10002610 FUN_10002610 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_10005b90(undefined4 param_1)

{
  int in_EAX;
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  
  if (*(int *)(in_EAX + 0x10) == 0) {
    iVar1 = FUN_1003a0b3((undefined4 *)(in_EAX + 0x14),*(int *)(in_EAX + 0x18),0x1c);
    iVar4 = *(int *)(in_EAX + 0x18);
    puVar2 = (undefined4 *)(iVar1 + -0x18 + iVar4 * 0x1c);
    while (iVar4 = iVar4 + -1, -1 < iVar4) {
      *puVar2 = *(undefined4 *)(in_EAX + 0x10);
      *(undefined4 **)(in_EAX + 0x10) = puVar2;
      puVar2 = puVar2 + -7;
    }
  }
  puVar2 = *(undefined4 **)(in_EAX + 0x10);
  if (puVar2 != (undefined4 *)0x0) {
    *(undefined4 *)(in_EAX + 0x10) = *puVar2;
    puVar2[1] = param_1;
    *puVar2 = 0;
    *(int *)(in_EAX + 0xc) = *(int *)(in_EAX + 0xc) + 1;
    if (puVar2 != (undefined4 *)0xfffffff8) {
      piVar3 = (int *)FUN_10038f10();
      if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_10002610((undefined4 *)0x80004005);
      }
      iVar4 = (**(code **)(*piVar3 + 0xc))();
      puVar2[3] = iVar4 + 0x10;
    }
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10038e31();
}

