// rea decompile_all
// name: FUN_004065b0
// address: 0x4065b0
// body: available
// range: 0x4065b0-0x406666 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x406658 to 0x55c74b FUN_0055c74b (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x406662 to 0x55c74b FUN_0055c74b (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004065b0(uint param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  int *in_ECX;
  
  uVar2 = in_ECX[4];
  if (~uVar2 <= param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_0055c74b("string too long");
  }
  uVar1 = uVar2 + param_1;
  if (param_1 != 0) {
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
    FUN_004054b0(in_ECX[4],param_1,param_2);
    in_ECX[4] = uVar1;
    if (7 < (uint)in_ECX[5]) {
      *(undefined2 *)(*in_ECX + uVar1 * 2) = 0;
      return;
    }
    *(undefined2 *)((int)in_ECX + uVar1 * 2) = 0;
  }
  return;
}

