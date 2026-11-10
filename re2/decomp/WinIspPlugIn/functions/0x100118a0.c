// rea decompile_all
// name: FUN_100118a0
// address: 0x100118a0
// body: available
// range: 0x100118a0-0x100119a5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001198d to 0x10180c59 FUN_10180c59 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x10011997 to 0x10180c39 FUN_10180c39 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x100119a1 to 0x10180c39 FUN_10180c39 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100118a0(uint param_1,int *param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int *in_ECX;
  int *piVar4;
  
  uVar3 = (uint)param_2;
  uVar2 = in_ECX[4];
  if (uVar2 < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_10180c59("invalid string position");
  }
  if (~uVar2 <= param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_10180c39("string too long");
  }
  uVar1 = uVar2 + (int)param_2;
  if (param_2 != (int *)0x0) {
    if (uVar1 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_10180c39("string too long");
    }
    if ((uint)in_ECX[5] < uVar1) {
      FUN_1000bf30(uVar1,uVar2);
      if (uVar1 == 0) {
        return;
      }
    }
    else if (uVar1 == 0) {
      in_ECX[4] = 0;
      if ((uint)in_ECX[5] < 0x10) {
        *(undefined1 *)in_ECX = 0;
        return;
      }
      *(undefined1 *)*in_ECX = 0;
      return;
    }
    piVar4 = in_ECX;
    param_2 = in_ECX;
    if (0xf < (uint)in_ECX[5]) {
      param_2 = (int *)*in_ECX;
      piVar4 = (int *)*in_ECX;
    }
    if (in_ECX[4] - param_1 != 0) {
      FUN_101971c0((int)piVar4 + uVar3 + param_1,(int)param_2 + param_1,in_ECX[4] - param_1);
    }
    FUN_1000b7e0(param_1,uVar3,param_3);
    in_ECX[4] = uVar1;
    if (0xf < (uint)in_ECX[5]) {
      *(undefined1 *)(*in_ECX + uVar1) = 0;
      return;
    }
    *(undefined1 *)((int)in_ECX + uVar1) = 0;
  }
  return;
}

