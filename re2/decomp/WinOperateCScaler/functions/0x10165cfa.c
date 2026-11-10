// rea decompile_all
// name: FUN_10165cfa
// address: 0x10165cfa
// body: available
// range: 0x10165cfa-0x10165da1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10165d96 to 0x10161577 FUN_10161577 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x10165d9d to 0x1016156c FUN_1016156c (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10165cfa(uint param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  undefined4 *in_ECX;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  uVar2 = in_ECX[4];
  if (uVar2 < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_10161577();
  }
  if (~uVar2 <= param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1016156c();
  }
  iVar1 = uVar2 + param_2;
  if ((param_2 != 0) && (cVar3 = FUN_101557a2(iVar1,0), cVar3 != '\0')) {
    puVar5 = in_ECX;
    if (7 < (uint)in_ECX[5]) {
      puVar5 = (undefined4 *)*in_ECX;
    }
    puVar4 = in_ECX;
    if (7 < (uint)in_ECX[5]) {
      puVar4 = (undefined4 *)*in_ECX;
    }
    move((int)puVar4 + (param_1 + param_2) * 2,(int)puVar5 + param_1 * 2,in_ECX[4] - param_1);
    FUN_10019f60(param_1,param_2,param_3);
    in_ECX[4] = iVar1;
    if (7 < (uint)in_ECX[5]) {
      in_ECX = (undefined4 *)*in_ECX;
    }
    *(undefined2 *)((int)in_ECX + iVar1 * 2) = 0;
  }
  return;
}

