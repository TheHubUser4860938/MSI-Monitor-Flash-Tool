// rea decompile_all
// name: FUN_100037e0
// address: 0x100037e0
// body: available
// range: 0x100037e0-0x1000384e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000384a to 0x1015503c FUN_1015503c (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_100037e0(uint param_1,char param_2)

{
  uint uVar1;
  undefined4 *in_ECX;
  
  if (param_1 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_1015503c("string too long");
  }
  if ((uint)in_ECX[5] < param_1) {
    FUN_10003640(param_1,in_ECX[4]);
    return param_1 != 0;
  }
  if ((param_2 != '\0') && (param_1 < 0x10)) {
    uVar1 = in_ECX[4];
    if (param_1 < (uint)in_ECX[4]) {
      uVar1 = param_1;
    }
    FUN_10003850(1,uVar1);
    return param_1 != 0;
  }
  if (param_1 == 0) {
    in_ECX[4] = 0;
    if (0xf < (uint)in_ECX[5]) {
      in_ECX = (undefined4 *)*in_ECX;
    }
    *(undefined1 *)in_ECX = 0;
  }
  return param_1 != 0;
}

