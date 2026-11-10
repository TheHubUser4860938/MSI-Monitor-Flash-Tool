// rea decompile_all
// name: FUN_00405d30
// address: 0x405d30
// body: available
// range: 0x405d30-0x405e35 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x405e1d to 0x55c76b FUN_0055c76b (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x405e27 to 0x55c74b FUN_0055c74b (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x405e31 to 0x55c74b FUN_0055c74b (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00405d30(uint param_1,int *param_2,undefined4 param_3)

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
    FUN_0055c76b("invalid string position");
  }
  if (~uVar2 <= param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_0055c74b("string too long");
  }
  uVar1 = uVar2 + (int)param_2;
  if (param_2 != (int *)0x0) {
    if (uVar1 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_0055c74b("string too long");
    }
    if ((uint)in_ECX[5] < uVar1) {
      FUN_00405b80(uVar1,uVar2);
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
      FUN_00572d00((int)piVar4 + uVar3 + param_1,(int)param_2 + param_1,in_ECX[4] - param_1);
    }
    FUN_004055f0(param_1,uVar3,param_3);
    in_ECX[4] = uVar1;
    if (0xf < (uint)in_ECX[5]) {
      *(undefined1 *)(*in_ECX + uVar1) = 0;
      return;
    }
    *(undefined1 *)((int)in_ECX + uVar1) = 0;
  }
  return;
}

