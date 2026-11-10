// rea decompile_all
// name: FUN_10094b9b
// address: 0x10094b9b
// body: available
// range: 0x10094b9b-0x10094c09 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10094c05 to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10094b9b(undefined4 param_1,undefined4 *param_2)

{
  code *pcVar1;
  int *piVar2;
  int **ppiVar3;
  int *local_18;
  int *local_14;
  int *local_10;
  int *local_c;
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  if (param_2 != (undefined4 *)0x0) {
    piVar2 = (int *)FUN_10094903(param_1);
    if (piVar2 == (int *)0x0) {
      local_18 = piVar2;
      ppiVar3 = &local_18;
      local_14 = piVar2;
      local_10 = piVar2;
      local_c = piVar2;
    }
    else {
      pcVar1 = *(code **)(*piVar2 + 0x88);
      guard_check_icall(&local_18);
      ppiVar3 = (int **)(*pcVar1)();
    }
    *param_2 = *ppiVar3;
    param_2[1] = ppiVar3[1];
    param_2[2] = ppiVar3[2];
    param_2[3] = ppiVar3[3];
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1004886a();
}

