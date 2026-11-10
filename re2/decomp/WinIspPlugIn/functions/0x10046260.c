// rea decompile_all
// name: FUN_10046260
// address: 0x10046260
// body: available
// range: 0x10046260-0x10046379 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10046361 to 0x10180c59 FUN_10180c59 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1004636b to 0x10180c59 FUN_10180c59 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x10046375 to 0x10180c39 FUN_10180c39 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10046260(int *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int *in_ECX;
  int *piVar2;
  
  if ((uint)param_1[4] < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_10180c59("invalid string position");
  }
  uVar1 = param_1[4] - param_2;
  if (uVar1 < param_3) {
    param_3 = uVar1;
  }
  if (in_ECX == param_1) {
    param_3 = param_2 + param_3;
    if (param_3 <= (uint)in_ECX[4]) {
      in_ECX[4] = param_3;
      if (7 < (uint)in_ECX[5]) {
        in_ECX = (int *)*in_ECX;
      }
      *(undefined2 *)((int)in_ECX + param_3 * 2) = 0;
      FUN_10043a10(0,param_2);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_10180c59("invalid string position");
  }
  if (0x7ffffffe < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_10180c39("string too long");
  }
  if ((uint)in_ECX[5] < param_3) {
    FUN_1000bdc0(param_3,in_ECX[4]);
    if (param_3 == 0) {
      return;
    }
  }
  else if (param_3 == 0) {
    in_ECX[4] = 0;
    if (7 < (uint)in_ECX[5]) {
      *(undefined2 *)*in_ECX = 0;
      return;
    }
    *(undefined2 *)in_ECX = 0;
    return;
  }
  if (7 < (uint)param_1[5]) {
    param_1 = (int *)*param_1;
  }
  piVar2 = in_ECX;
  if (7 < (uint)in_ECX[5]) {
    piVar2 = (int *)*in_ECX;
  }
  if (param_3 != 0) {
    FUN_10197c50(piVar2,(int)param_1 + param_2 * 2,param_3 * 2);
  }
  in_ECX[4] = param_3;
  if ((uint)in_ECX[5] < 8) {
    *(undefined2 *)((int)in_ECX + param_3 * 2) = 0;
    return;
  }
  *(undefined2 *)(*in_ECX + param_3 * 2) = 0;
  return;
}

