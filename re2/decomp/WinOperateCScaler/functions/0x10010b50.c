// rea decompile_all
// name: FUN_10010b50
// address: 0x10010b50
// body: available
// range: 0x10010b50-0x10010f25 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10010f03 to 0x1015505c FUN_1015505c (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x10010f0d to 0x1015505c FUN_1015505c (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x10010f17 to 0x1015503c FUN_1015503c (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x10010f21 to 0x1015503c FUN_1015503c (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10010b50(int *param_1,uint param_2,int *param_3,int *param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *in_ECX;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  int *local_c;
  
  uVar1 = (uint)param_1;
  if ((uint)in_ECX[4] < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_1015505c("invalid string position");
  }
  if ((uint)param_3[4] < param_4) {
                    /* WARNING: Subroutine does not return */
    FUN_1015505c("invalid string position");
  }
  uVar2 = in_ECX[4] - (int)param_1;
  if (uVar2 < param_2) {
    param_2 = uVar2;
  }
  uVar7 = param_3[4] - (int)param_4;
  if (uVar7 < param_5) {
    param_5 = uVar7;
  }
  if (~param_5 <= in_ECX[4] - param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1015503c("string too long");
  }
  uVar7 = (in_ECX[4] - param_2) + param_5;
  uVar2 = uVar2 - param_2;
  if ((uint)in_ECX[4] < uVar7) {
    if (uVar7 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_1015503c("string too long");
    }
    if ((uint)in_ECX[5] < uVar7) {
      FUN_10003640(uVar7,in_ECX[4]);
    }
    else if (uVar7 == 0) {
      in_ECX[4] = 0;
      local_c = in_ECX;
      if (0xf < (uint)in_ECX[5]) {
        local_c = (int *)*in_ECX;
      }
      *(undefined1 *)local_c = 0;
    }
  }
  if (param_5 == param_2) {
    if (0xf < (uint)param_3[5]) {
      param_3 = (int *)*param_3;
    }
    piVar6 = in_ECX;
    if (0xf < (uint)in_ECX[5]) {
      piVar6 = (int *)*in_ECX;
    }
    if (param_5 == 0) goto LAB_10010ed2;
    iVar3 = (int)param_4 + (int)param_3;
    iVar4 = (int)piVar6 + (int)param_1;
    uVar2 = param_5;
  }
  else {
    if (in_ECX != param_3) {
      local_c = in_ECX;
      if (0xf < (uint)in_ECX[5]) {
        local_c = (int *)*in_ECX;
      }
      param_1 = in_ECX;
      if (0xf < (uint)in_ECX[5]) {
        param_1 = (int *)*in_ECX;
      }
      if (uVar2 != 0) {
        FUN_1016b1e0((int)param_1 + param_5 + uVar1,(int)local_c + param_2 + uVar1,uVar2);
      }
      if (0xf < (uint)param_3[5]) {
        param_3 = (int *)*param_3;
      }
      piVar6 = in_ECX;
      if (0xf < (uint)in_ECX[5]) {
        piVar6 = (int *)*in_ECX;
      }
      if (param_5 != 0) {
        FUN_1016bba0((int)piVar6 + uVar1,(int)param_4 + (int)param_3,param_5);
      }
      goto LAB_10010ed2;
    }
    if (param_5 < param_2) {
      piVar6 = in_ECX;
      param_1 = in_ECX;
      if (0xf < (uint)in_ECX[5]) {
        param_1 = (int *)*in_ECX;
        piVar6 = (int *)*in_ECX;
      }
      if (param_5 != 0) {
        FUN_1016b1e0((int)piVar6 + uVar1,(int)param_1 + (int)param_4,param_5);
      }
      piVar6 = in_ECX;
      param_4 = in_ECX;
      if (0xf < (uint)in_ECX[5]) {
        param_4 = (int *)*in_ECX;
        piVar6 = (int *)*in_ECX;
      }
      if (uVar2 == 0) goto LAB_10010ed2;
      iVar3 = (int)param_4 + param_2 + uVar1;
      iVar4 = (int)piVar6 + param_5 + uVar1;
    }
    else if (param_1 < param_4) {
      if (param_4 < (int)param_1 + param_2) {
        piVar6 = in_ECX;
        param_3 = in_ECX;
        if (0xf < (uint)in_ECX[5]) {
          param_3 = (int *)*in_ECX;
          piVar6 = (int *)*in_ECX;
        }
        if (param_2 != 0) {
          FUN_1016b1e0((int)piVar6 + (int)param_1,(int)param_3 + (int)param_4,param_2);
        }
        piVar6 = in_ECX;
        param_3 = in_ECX;
        if (0xf < (uint)in_ECX[5]) {
          param_3 = (int *)*in_ECX;
          piVar6 = (int *)*in_ECX;
        }
        if (uVar2 != 0) {
          FUN_1016b1e0((int)piVar6 + param_5 + (int)param_1,(int)param_3 + param_2 + (int)param_1,
                       uVar2);
        }
        piVar6 = in_ECX;
        param_3 = in_ECX;
        if (0xf < (uint)in_ECX[5]) {
          param_3 = (int *)*in_ECX;
          piVar6 = (int *)*in_ECX;
        }
        uVar2 = param_5 - param_2;
        if (uVar2 == 0) goto LAB_10010ed2;
        iVar3 = (int)param_3 + param_5 + (int)param_4;
        iVar4 = (int)piVar6 + param_2 + (int)param_1;
      }
      else {
        piVar6 = in_ECX;
        param_1 = in_ECX;
        if (0xf < (uint)in_ECX[5]) {
          param_1 = (int *)*in_ECX;
          piVar6 = (int *)*in_ECX;
        }
        if (uVar2 != 0) {
          FUN_1016b1e0((int)piVar6 + param_5 + uVar1,(int)param_1 + param_2 + uVar1,uVar2);
        }
        piVar5 = in_ECX;
        piVar6 = in_ECX;
        if (0xf < (uint)in_ECX[5]) {
          piVar5 = (int *)*in_ECX;
          piVar6 = (int *)*in_ECX;
        }
        if (param_5 == 0) goto LAB_10010ed2;
        iVar3 = (int)piVar6 + param_5 + ((int)param_4 - param_2);
        iVar4 = (int)piVar5 + uVar1;
        uVar2 = param_5;
      }
    }
    else {
      piVar6 = in_ECX;
      param_1 = in_ECX;
      if (0xf < (uint)in_ECX[5]) {
        param_1 = (int *)*in_ECX;
        piVar6 = (int *)*in_ECX;
      }
      if (uVar2 != 0) {
        FUN_1016b1e0((int)piVar6 + param_5 + uVar1,(int)param_1 + param_2 + uVar1,uVar2);
      }
      piVar5 = in_ECX;
      piVar6 = in_ECX;
      if (0xf < (uint)in_ECX[5]) {
        piVar5 = (int *)*in_ECX;
        piVar6 = (int *)*in_ECX;
      }
      if (param_5 == 0) goto LAB_10010ed2;
      iVar3 = (int)param_4 + (int)piVar6;
      iVar4 = (int)piVar5 + uVar1;
      uVar2 = param_5;
    }
  }
  FUN_1016b1e0(iVar4,iVar3,uVar2);
LAB_10010ed2:
  in_ECX[4] = uVar7;
  if (0xf < (uint)in_ECX[5]) {
    *(undefined1 *)(*in_ECX + uVar7) = 0;
    return;
  }
  *(undefined1 *)((int)in_ECX + uVar7) = 0;
  return;
}

