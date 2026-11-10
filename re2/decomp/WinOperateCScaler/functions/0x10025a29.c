// rea decompile_all
// name: FUN_10025a29
// address: 0x10025a29
// body: available
// range: 0x10025a29-0x10025a78 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10025a74 to 0x100256ec FUN_100256ec (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10025a29(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int in_ECX;
  
  if ((*(byte *)(in_ECX + 0x18) & 1) != 0) {
    if (*(uint *)(in_ECX + 0x2c) < *(int *)(in_ECX + 0x28) + 8U) {
      FUN_10025d69((*(int *)(in_ECX + 0x28) - *(int *)(in_ECX + 0x2c)) + 8);
    }
    puVar1 = *(undefined4 **)(in_ECX + 0x28);
    *param_1 = *puVar1;
    param_1[1] = puVar1[1];
    *(int *)(in_ECX + 0x28) = *(int *)(in_ECX + 0x28) + 8;
    return;
  }
  uVar2 = FUN_1001d272();
                    /* WARNING: Subroutine does not return */
  FUN_100256ec(4,uVar2);
}

