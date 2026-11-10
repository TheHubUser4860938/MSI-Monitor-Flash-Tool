// rea decompile_all
// name: FUN_1003fd30
// address: 0x1003fd30
// body: available
// range: 0x1003fd30-0x1003fdd6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003fdc9 to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1003fdd2 to 0x1004e3b5 FUN_1004e3b5 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003fd30(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int in_EDX;
  uint uVar3;
  uint uVar4;
  undefined4 local_8;
  
  if (in_EDX == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1004886a();
  }
  if ((~*(uint *)(in_ECX + 0x18) & 1) != 0) {
    local_8 = 1;
    do {
      uVar4 = 0x5555555;
      if (local_8 < 0x5555555) {
        uVar4 = local_8;
      }
      FUN_1004e1ed(in_EDX,uVar4 * 0x18);
      in_EDX = in_EDX + uVar4 * 0x18;
      local_8 = local_8 - uVar4;
    } while (local_8 != 0);
    return;
  }
  uVar4 = 1;
  while( true ) {
    uVar3 = 0x5555555;
    if (uVar4 < 0x5555555) {
      uVar3 = uVar4;
    }
    iVar1 = uVar3 * 0x18;
    iVar2 = FUN_1004dfd7(in_EDX,iVar1);
    if (iVar2 != iVar1) break;
    in_EDX = in_EDX + iVar1;
    uVar4 = uVar4 - uVar3;
    if (uVar4 == 0) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1004e3b5(3,0);
}

