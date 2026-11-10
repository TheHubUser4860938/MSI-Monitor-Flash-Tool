// rea decompile_all
// name: FUN_00415e30
// address: 0x415e30
// body: available
// range: 0x415e30-0x415ed7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x415ec9 to 0x40ed80 FUN_0040ed80 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x415ed3 to 0x40ed80 FUN_0040ed80 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00415e30(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *in_ECX;
  uint uVar3;
  
  if (param_2 == 0) {
    FUN_00415d60();
    return;
  }
  if (param_1 != 0) {
    iVar1 = *in_ECX;
    uVar2 = *(uint *)(iVar1 + -0xc);
    uVar3 = param_1 - iVar1 >> 1;
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0040ed80(0x80070057);
    }
    if ((int)(1U - *(int *)(iVar1 + -4) | *(int *)(iVar1 + -8) - param_2) < 0) {
      FUN_0040eca0(param_2);
    }
    iVar1 = *in_ECX;
    if (uVar2 < uVar3) {
      FUN_0040f000(param_1,param_2 * 2);
    }
    else {
      FUN_00415dc0(iVar1,*(undefined4 *)(iVar1 + -8),iVar1 + uVar3 * 2,param_2);
    }
    if (param_2 <= *(int *)(*in_ECX + -8)) {
      *(int *)(*in_ECX + -0xc) = param_2;
      *(undefined2 *)(*in_ECX + param_2 * 2) = 0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0040ed80(0x80070057);
}

