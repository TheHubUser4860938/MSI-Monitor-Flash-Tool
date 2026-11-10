// rea decompile_all
// name: FUN_004044e0
// address: 0x4044e0
// body: available
// range: 0x4044e0-0x4045ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4045e7 to 0x55c76b FUN_0055c76b (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4045f1 to 0x55c76b FUN_0055c76b (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4045fb to 0x55c74b FUN_0055c74b (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004044e0(int *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int *in_ECX;
  int *piVar2;
  
  if ((uint)param_1[4] < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_0055c76b("invalid string position");
  }
  uVar1 = param_1[4] - param_2;
  if (uVar1 < param_3) {
    param_3 = uVar1;
  }
  if (in_ECX == param_1) {
    param_3 = param_2 + param_3;
    if ((uint)in_ECX[4] < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_0055c76b("invalid string position");
    }
    in_ECX[4] = param_3;
    if (0xf < (uint)in_ECX[5]) {
      *(undefined1 *)(*in_ECX + param_3) = 0;
      FUN_00405630(0,param_2);
      return;
    }
    *(undefined1 *)((int)in_ECX + param_3) = 0;
    FUN_00405630(0,param_2);
    return;
  }
  if (param_3 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_0055c74b("string too long");
  }
  if ((uint)in_ECX[5] < param_3) {
    FUN_00405b80(param_3,in_ECX[4]);
    if (param_3 == 0) {
      return;
    }
  }
  else if (param_3 == 0) {
    in_ECX[4] = 0;
    if (0xf < (uint)in_ECX[5]) {
      *(undefined1 *)*in_ECX = 0;
      return;
    }
    *(undefined1 *)in_ECX = 0;
    return;
  }
  if (0xf < (uint)param_1[5]) {
    param_1 = (int *)*param_1;
  }
  piVar2 = in_ECX;
  if (0xf < (uint)in_ECX[5]) {
    piVar2 = (int *)*in_ECX;
  }
  if (param_3 != 0) {
    FUN_005734b0(piVar2,(int)param_1 + param_2,param_3);
  }
  in_ECX[4] = param_3;
  if ((uint)in_ECX[5] < 0x10) {
    *(undefined1 *)((int)in_ECX + param_3) = 0;
    return;
  }
  *(undefined1 *)(*in_ECX + param_3) = 0;
  return;
}

