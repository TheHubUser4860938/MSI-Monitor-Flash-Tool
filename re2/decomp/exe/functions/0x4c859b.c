// rea decompile_all
// name: FUN_004c859b
// address: 0x4c859b
// body: available
// range: 0x4c859b-0x4c85e0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4c85dc to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004c859b(ulong param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int in_ECX;
  
  if (in_ECX == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00429127();
  }
  if (*(int *)(in_ECX + 4) != 0) {
    uVar1 = HashKey<unsigned_long>(param_1);
    for (puVar2 = *(undefined4 **)(*(int *)(in_ECX + 4) + (uVar1 % *(uint *)(in_ECX + 8)) * 4);
        puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)*puVar2) {
      if (puVar2[1] == param_1) {
        return puVar2[2];
      }
    }
  }
  return 0;
}

