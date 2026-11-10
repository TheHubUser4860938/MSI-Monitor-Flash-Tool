// rea decompile_all
// name: FUN_00414ed0
// address: 0x414ed0
// body: available
// range: 0x414ed0-0x414f8d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x414f7a to 0x55c72e FUN_0055c72e (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x414f7f to 0x55c72e FUN_0055c72e (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x414f84 to 0x57663d FUN_0057663d (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x414f89 to 0x57663d FUN_0057663d (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00414ed0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *in_ECX;
  uint uVar4;
  
  if (param_1 == 0) {
    uVar4 = 0;
  }
  else {
    if (0x3ffffff < param_1) {
                    /* WARNING: Subroutine does not return */
      FUN_0055c72e();
    }
    uVar4 = param_1 * 0x40;
    if (uVar4 < 0x1000) {
      uVar4 = FUN_00416408(uVar4);
      if (uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0057663d();
      }
    }
    else {
      if (uVar4 + 0x23 <= uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_0055c72e();
      }
      iVar3 = FUN_00416408(uVar4 + 0x23);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0057663d();
      }
      uVar4 = iVar3 + 0x23U & 0xffffffe0;
      *(int *)(uVar4 - 4) = iVar3;
    }
  }
  FUN_00572d00(uVar4,*in_ECX,in_ECX[1] - *in_ECX);
  uVar1 = *in_ECX;
  uVar2 = in_ECX[1];
  if (uVar1 != 0) {
    FUN_00414e70(uVar1,(int)(in_ECX[2] - uVar1) >> 6);
  }
  in_ECX[2] = param_1 * 0x40 + uVar4;
  in_ECX[1] = (uVar2 - uVar1 & 0xffffffc0) + uVar4;
  *in_ECX = uVar4;
  return;
}

