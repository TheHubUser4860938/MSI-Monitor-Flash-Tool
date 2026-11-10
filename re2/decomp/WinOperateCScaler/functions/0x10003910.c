// rea decompile_all
// name: FUN_10003910
// address: 0x10003910
// body: available
// range: 0x10003910-0x10003a06 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100039ee to 0x1015505c FUN_1015505c (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x100039f8 to 0x1015503c FUN_1015503c (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x10003a02 to 0x1015503c FUN_1015503c (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10003910(undefined4 *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int *in_ECX;
  int *piVar3;
  
  if ((uint)param_1[4] < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1015505c("invalid string position");
  }
  uVar1 = in_ECX[4];
  uVar2 = param_1[4] - param_2;
  if (uVar2 < param_3) {
    param_3 = uVar2;
  }
  if (~uVar1 <= param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_1015503c("string too long");
  }
  uVar2 = uVar1 + param_3;
  if (param_3 != 0) {
    if (uVar2 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_1015503c("string too long");
    }
    if ((uint)in_ECX[5] < uVar2) {
      FUN_10003640(uVar2,uVar1);
      if (uVar2 == 0) {
        return;
      }
    }
    else if (uVar2 == 0) {
      in_ECX[4] = 0;
      if (0xf < (uint)in_ECX[5]) {
        *(undefined1 *)*in_ECX = 0;
        return;
      }
      *(undefined1 *)in_ECX = 0;
      return;
    }
    if (0xf < (uint)param_1[5]) {
      param_1 = (undefined4 *)*param_1;
    }
    piVar3 = in_ECX;
    if (0xf < (uint)in_ECX[5]) {
      piVar3 = (int *)*in_ECX;
    }
    if (param_3 != 0) {
      FUN_1016bba0(in_ECX[4] + (int)piVar3,param_2 + (int)param_1,param_3);
    }
    in_ECX[4] = uVar2;
    if (0xf < (uint)in_ECX[5]) {
      *(undefined1 *)(*in_ECX + uVar2) = 0;
      return;
    }
    *(undefined1 *)((int)in_ECX + uVar2) = 0;
  }
  return;
}

