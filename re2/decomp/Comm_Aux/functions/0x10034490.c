// rea decompile_all
// name: FUN_10034490
// address: 0x10034490
// body: available
// range: 0x10034490-0x10034554 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003453c to 0x100351a0 FUN_100351a0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x10034546 to 0x100351a0 FUN_100351a0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x10034550 to 0x100351a0 FUN_100351a0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10034490(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int *in_ECX;
  int iVar3;
  uint uVar4;
  
  uVar4 = param_1 - *in_ECX >> 1;
  uVar1 = *(uint *)(*in_ECX + -0xc);
  if (-1 < param_2) {
    if (param_1 == 0) {
      param_2 = 0;
    }
    else {
      param_2 = FUN_10187c15(param_1,param_2);
    }
    if (0x7fffffff - param_2 < (int)uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_100351a0(0x80070057);
    }
    iVar3 = uVar1 + param_2;
    if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_100351a0(0x80070057);
    }
    if ((int)(1U - *(int *)(*in_ECX + -4) | *(int *)(*in_ECX + -8) - iVar3) < 0) {
      FUN_10034ff0(iVar3);
    }
    iVar2 = *in_ECX + uVar4 * 2;
    if (uVar1 < uVar4) {
      iVar2 = param_1;
    }
    FUN_10035100(iVar2,param_2 * 2);
    if (iVar3 <= *(int *)(*in_ECX + -8)) {
      *(int *)(*in_ECX + -0xc) = iVar3;
      *(undefined2 *)(*in_ECX + iVar3 * 2) = 0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_100351a0(0x80070057);
}

