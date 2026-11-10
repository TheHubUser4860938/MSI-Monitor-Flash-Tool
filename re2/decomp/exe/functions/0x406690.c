// rea decompile_all
// name: FUN_00406690
// address: 0x406690
// body: available
// range: 0x406690-0x4067d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4067c5 to 0x55c74b FUN_0055c74b (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4067cf to 0x55c74b FUN_0055c74b (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00406690(undefined4 param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  int *in_ECX;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  
  uVar5 = 0xffffffff;
  if (param_2[4] != 0xffffffff) {
    uVar5 = param_2[4];
  }
  uVar2 = in_ECX[4];
  if (~uVar2 <= uVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_0055c74b("string too long");
  }
  uVar1 = uVar2 + uVar5;
  if (uVar5 != 0) {
    if (0x7ffffffe < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_0055c74b("string too long");
    }
    if ((uint)in_ECX[5] < uVar1) {
      FUN_00405a10(uVar1,uVar2);
      if (uVar1 == 0) {
        return;
      }
    }
    else if (uVar1 == 0) {
      in_ECX[4] = 0;
      if ((uint)in_ECX[5] < 8) {
        *(undefined2 *)in_ECX = 0;
        return;
      }
      *(undefined2 *)*in_ECX = 0;
      return;
    }
    piVar3 = in_ECX;
    piVar4 = in_ECX;
    if (7 < (uint)in_ECX[5]) {
      piVar3 = (int *)*in_ECX;
      piVar4 = (int *)*in_ECX;
    }
    if (in_ECX[4] != 0) {
      FUN_00572d00((int)piVar3 + uVar5 * 2,piVar4,in_ECX[4] * 2);
    }
    if (in_ECX == param_2) {
      piVar3 = in_ECX;
      piVar4 = in_ECX;
      if (7 < (uint)in_ECX[5]) {
        piVar3 = (int *)*in_ECX;
        piVar4 = (int *)*in_ECX;
      }
      if (uVar5 != 0) {
        FUN_00572d00(piVar3,piVar4,uVar5 * 2);
      }
    }
    else {
      if (7 < (uint)param_2[5]) {
        param_2 = (int *)*param_2;
      }
      piVar4 = in_ECX;
      if (7 < (uint)in_ECX[5]) {
        piVar4 = (int *)*in_ECX;
      }
      if (uVar5 != 0) {
        FUN_005734b0(piVar4,param_2,uVar5 * 2);
      }
    }
    in_ECX[4] = uVar1;
    if (7 < (uint)in_ECX[5]) {
      *(undefined2 *)(*in_ECX + uVar1 * 2) = 0;
      return;
    }
    *(undefined2 *)((int)in_ECX + uVar1 * 2) = 0;
  }
  return;
}

