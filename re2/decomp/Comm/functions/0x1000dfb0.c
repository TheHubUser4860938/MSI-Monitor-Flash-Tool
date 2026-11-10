// rea decompile_all
// name: FUN_1000dfb0
// address: 0x1000dfb0
// body: available
// range: 0x1000dfb0-0x1000e056 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000e052 to 0x10149c41 FUN_10149c41 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000dfb0(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int *in_ECX;
  int iVar4;
  
  uVar2 = in_ECX[4];
  if (uVar2 < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_10149c41("invalid string position");
  }
  if (param_2 < uVar2 - param_1) {
    if (param_2 != 0) {
      piVar3 = in_ECX;
      if (7 < (uint)in_ECX[5]) {
        piVar3 = (int *)*in_ECX;
      }
      iVar4 = uVar2 - param_2;
      iVar1 = (int)piVar3 + param_1 * 2;
      if (iVar4 - param_1 != 0) {
        FUN_1014ad80(iVar1,iVar1 + param_2 * 2,(iVar4 - param_1) * 2);
      }
      in_ECX[4] = iVar4;
      if (7 < (uint)in_ECX[5]) {
        *(undefined2 *)(*in_ECX + iVar4 * 2) = 0;
        return;
      }
      *(undefined2 *)((int)in_ECX + iVar4 * 2) = 0;
    }
    return;
  }
  in_ECX[4] = param_1;
  if ((uint)in_ECX[5] < 8) {
    *(undefined2 *)((int)in_ECX + param_1 * 2) = 0;
    return;
  }
  *(undefined2 *)(*in_ECX + param_1 * 2) = 0;
  return;
}

