// rea decompile_all
// name: FUN_1001b890
// address: 0x1001b890
// body: available
// range: 0x1001b890-0x1001ba41 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001ba1f to 0x1015505c FUN_1015505c (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1001ba29 to 0x1015505c FUN_1015505c (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1001ba33 to 0x1015503c FUN_1015503c (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1001ba3d to 0x1015503c FUN_1015503c (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001b890(int *param_1,int *param_2,int *param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  int *in_ECX;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = (uint)param_1;
  uVar4 = in_ECX[4];
  if (uVar4 < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_1015505c("invalid string position");
  }
  if ((uint)param_2[4] < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_1015505c("invalid string position");
  }
  uVar2 = param_2[4] - (int)param_3;
  uVar5 = (uint)param_4;
  if (uVar2 < param_4) {
    uVar5 = uVar2;
  }
  if (~uVar4 <= uVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_1015503c("string too long");
  }
  uVar2 = uVar4 + uVar5;
  if (uVar5 != 0) {
    if (0x7ffffffe < uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_1015503c("string too long");
    }
    if ((uint)in_ECX[5] < uVar2) {
      FUN_1000e790(uVar2,uVar4);
      if (uVar2 == 0) {
        return;
      }
    }
    else if (uVar2 == 0) {
      in_ECX[4] = 0;
      if ((uint)in_ECX[5] < 8) {
        *(undefined2 *)in_ECX = 0;
        return;
      }
      *(undefined2 *)*in_ECX = 0;
      return;
    }
    piVar3 = in_ECX;
    param_4 = in_ECX;
    if (7 < (uint)in_ECX[5]) {
      param_4 = (int *)*in_ECX;
      piVar3 = (int *)*in_ECX;
    }
    if (in_ECX[4] - (int)param_1 != 0) {
      FUN_1016b1e0((int)piVar3 + ((int)param_1 + uVar5) * 2,(int)param_4 + (int)param_1 * 2,
                   (in_ECX[4] - (int)param_1) * 2);
    }
    if (in_ECX == param_2) {
      uVar4 = (int)param_3 + uVar5;
      if (param_3 <= param_1) {
        uVar4 = (uint)param_3;
      }
      param_1 = in_ECX;
      param_3 = in_ECX;
      if (7 < (uint)in_ECX[5]) {
        param_3 = (int *)*in_ECX;
        param_1 = (int *)*in_ECX;
      }
      if (uVar5 != 0) {
        FUN_1016b1e0((int)param_1 + uVar1 * 2,(int)param_3 + uVar4 * 2,uVar5 * 2);
      }
    }
    else {
      if (7 < (uint)param_2[5]) {
        param_2 = (int *)*param_2;
      }
      param_1 = in_ECX;
      if (7 < (uint)in_ECX[5]) {
        param_1 = (int *)*in_ECX;
      }
      if (uVar5 != 0) {
        FUN_1016bba0((int)param_1 + uVar1 * 2,(int)param_2 + (int)param_3 * 2,uVar5 * 2);
      }
    }
    in_ECX[4] = uVar2;
    if (7 < (uint)in_ECX[5]) {
      *(undefined2 *)(*in_ECX + uVar2 * 2) = 0;
      return;
    }
    *(undefined2 *)((int)in_ECX + uVar2 * 2) = 0;
  }
  return;
}

