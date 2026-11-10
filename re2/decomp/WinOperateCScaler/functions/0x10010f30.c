// rea decompile_all
// name: FUN_10010f30
// address: 0x10010f30
// body: available
// range: 0x10010f30-0x1001111a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10011102 to 0x1015505c FUN_1015505c (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1001110c to 0x1015503c FUN_1015503c (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x10011116 to 0x1015503c FUN_1015503c (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10010f30(uint param_1,int *param_2,int *param_3,uint param_4)

{
  int *piVar1;
  int *in_ECX;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int *local_8;
  
  if (param_3 != (int *)0x0) {
    uVar5 = in_ECX[5];
    piVar1 = in_ECX;
    if (0xf < uVar5) {
      piVar1 = (int *)*in_ECX;
    }
    if (piVar1 <= param_3) {
      piVar1 = in_ECX;
      if (0xf < uVar5) {
        piVar1 = (int *)*in_ECX;
      }
      if (param_3 < (int *)(in_ECX[4] + (int)piVar1)) {
        piVar1 = in_ECX;
        if (0xf < uVar5) {
          piVar1 = (int *)*in_ECX;
        }
        FUN_10010b50(param_1,param_2,in_ECX,(int)param_3 - (int)piVar1,param_4);
        return;
      }
    }
  }
  uVar5 = in_ECX[4];
  if (uVar5 < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_1015505c("invalid string position");
  }
  uVar3 = uVar5 - param_1;
  uVar2 = (uint)param_2;
  if (uVar3 < param_2) {
    uVar2 = uVar3;
  }
  if (uVar5 - uVar2 < ~param_4) {
    iVar4 = uVar3 - uVar2;
    if (param_4 < uVar2) {
      param_2 = in_ECX;
      local_8 = in_ECX;
      if (0xf < (uint)in_ECX[5]) {
        param_2 = (int *)*in_ECX;
        local_8 = (int *)*in_ECX;
      }
      if (iVar4 != 0) {
        FUN_1016b1e0((int)local_8 + param_4 + param_1,(int)param_2 + uVar2 + param_1,iVar4);
      }
    }
    uVar5 = (in_ECX[4] - uVar2) + param_4;
    if ((param_4 != 0) || (uVar2 != 0)) {
      if (uVar5 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
        FUN_1015503c("string too long");
      }
      if ((uint)in_ECX[5] < uVar5) {
        FUN_10003640(uVar5,in_ECX[4]);
        if (uVar5 == 0) {
          return;
        }
      }
      else if (uVar5 == 0) {
        in_ECX[4] = 0;
        if ((uint)in_ECX[5] < 0x10) {
          *(undefined1 *)in_ECX = 0;
          return;
        }
        *(undefined1 *)*in_ECX = 0;
        return;
      }
      if (uVar2 < param_4) {
        param_2 = in_ECX;
        local_8 = in_ECX;
        if (0xf < (uint)in_ECX[5]) {
          param_2 = (int *)*in_ECX;
          local_8 = (int *)*in_ECX;
        }
        if (iVar4 != 0) {
          FUN_1016b1e0((int)local_8 + param_4 + param_1,(int)param_2 + uVar2 + param_1,iVar4);
        }
      }
      piVar1 = in_ECX;
      if (0xf < (uint)in_ECX[5]) {
        piVar1 = (int *)*in_ECX;
      }
      if (param_4 != 0) {
        FUN_1016bba0((int)piVar1 + param_1,param_3,param_4);
      }
      in_ECX[4] = uVar5;
      if (0xf < (uint)in_ECX[5]) {
        *(undefined1 *)(*in_ECX + uVar5) = 0;
        return;
      }
      *(undefined1 *)((int)in_ECX + uVar5) = 0;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1015503c("string too long");
}

