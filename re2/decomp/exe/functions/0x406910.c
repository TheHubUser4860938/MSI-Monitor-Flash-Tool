// rea decompile_all
// name: FUN_00406910
// address: 0x406910
// body: available
// range: 0x406910-0x406a16 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4069fe to 0x55c76b FUN_0055c76b (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x406a08 to 0x55c74b FUN_0055c74b (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x406a12 to 0x55c74b FUN_0055c74b (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00406910(undefined4 *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int *in_ECX;
  int *piVar3;
  
  if ((uint)param_1[4] < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_0055c76b("invalid string position");
  }
  uVar1 = in_ECX[4];
  uVar2 = param_1[4] - param_2;
  if (uVar2 < param_3) {
    param_3 = uVar2;
  }
  if (~uVar1 <= param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_0055c74b("string too long");
  }
  uVar2 = uVar1 + param_3;
  if (param_3 != 0) {
    if (0x7ffffffe < uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_0055c74b("string too long");
    }
    if ((uint)in_ECX[5] < uVar2) {
      FUN_00405a10(uVar2,uVar1);
      if (uVar2 == 0) {
        return;
      }
    }
    else if (uVar2 == 0) {
      in_ECX[4] = 0;
      if (7 < (uint)in_ECX[5]) {
        *(undefined2 *)*in_ECX = 0;
        return;
      }
      *(undefined2 *)in_ECX = 0;
      return;
    }
    if (7 < (uint)param_1[5]) {
      param_1 = (undefined4 *)*param_1;
    }
    piVar3 = in_ECX;
    if (7 < (uint)in_ECX[5]) {
      piVar3 = (int *)*in_ECX;
    }
    if (param_3 != 0) {
      FUN_005734b0((int)piVar3 + in_ECX[4] * 2,(int)param_1 + param_2 * 2,param_3 * 2);
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

