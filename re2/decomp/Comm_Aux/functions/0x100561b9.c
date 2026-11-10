// rea decompile_all
// name: FUN_100561b9
// address: 0x100561b9
// body: available
// range: 0x100561b9-0x10056248 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10056244 to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_100561b9(int *param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *in_ECX;
  
  if ((in_ECX[1] == 0) || (*(short *)(in_ECX + 1) == -1)) {
    uVar3 = 1;
  }
  else {
    if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_1004886a();
    }
    in_ECX[6] = 0;
    pcVar1 = *(code **)(*param_1 + 0xc);
    guard_check_icall(in_ECX[1],0xffffffff);
    uVar3 = (*pcVar1)();
    if ((param_2 != 0) && (in_ECX[6] == 0)) {
      iVar2 = *param_1;
      guard_check_icall(in_ECX[1],0);
      uVar4 = (**(code **)(iVar2 + 0xc))();
      pcVar1 = *(code **)*in_ECX;
      guard_check_icall(uVar4);
      (*pcVar1)();
    }
  }
  return uVar3;
}

