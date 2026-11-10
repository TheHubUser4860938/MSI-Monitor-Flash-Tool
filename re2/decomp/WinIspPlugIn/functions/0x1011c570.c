// rea decompile_all
// name: FUN_1011c570
// address: 0x1011c570
// body: available
// range: 0x1011c570-0x1011c5e6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1011c5e2 to 0x10065c9f FUN_10065c9f (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_1011c570(uint param_1,int param_2,int param_3)

{
  code *pcVar1;
  int *in_ECX;
  uint uVar2;
  bool bVar3;
  
  uVar2 = in_ECX[6];
  if (param_3 != 0) {
    if (param_3 != 1) {
      if (param_3 != 2) {
        return uVar2;
      }
      if ((-1 < param_2) && ((0 < param_2 || (param_1 != 0)))) goto LAB_1011c5dd;
      uVar2 = in_ECX[8];
    }
    bVar3 = CARRY4(uVar2,param_1);
    param_1 = uVar2 + param_1;
    param_2 = param_2 + (uint)bVar3;
  }
  if ((0 < param_2) || (-1 < param_2)) {
    if ((uint)in_ECX[8] < param_1) {
      pcVar1 = *(code **)(*in_ECX + 0x68);
      guard_check_icall(param_1);
      (*pcVar1)();
    }
    in_ECX[6] = param_1;
    return param_1;
  }
LAB_1011c5dd:
                    /* WARNING: Subroutine does not return */
  FUN_10065c9f(9,0xffffffff,0);
}

