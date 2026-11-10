// rea decompile_all
// name: FUN_1003759d
// address: 0x1003759d
// body: available
// range: 0x1003759d-0x10037617 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10037613 to 0x1001d023 FUN_1001d023 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_1003759d(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int in_ECX;
  undefined4 *puVar2;
  int iVar3;
  
  if (*(int *)(in_ECX + 0x10) == 0) {
    iVar1 = FUN_1003af5c(in_ECX + 0x14,*(undefined4 *)(in_ECX + 0x18),0x18);
    iVar3 = *(int *)(in_ECX + 0x18);
    puVar2 = (undefined4 *)(iVar3 * 0x18 + iVar1 + -0x10);
    while (iVar3 = iVar3 + -1, -1 < iVar3) {
      *puVar2 = *(undefined4 *)(in_ECX + 0x10);
      *(undefined4 **)(in_ECX + 0x10) = puVar2;
      puVar2 = puVar2 + -6;
    }
  }
  puVar2 = *(undefined4 **)(in_ECX + 0x10);
  if (puVar2 != (undefined4 *)0x0) {
    *(undefined4 *)(in_ECX + 0x10) = *puVar2;
    puVar2[1] = param_1;
    *puVar2 = param_2;
    *(int *)(in_ECX + 0xc) = *(int *)(in_ECX + 0xc) + 1;
    if (puVar2 + 2 != (undefined4 *)0x0) {
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
    }
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1001d023();
}

