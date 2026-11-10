// rea decompile_all
// name: FUN_1002bc00
// address: 0x1002bc00
// body: available
// range: 0x1002bc00-0x1002bce2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002bcd4 to 0x10180c39 FUN_10180c39 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1002bcde to 0x10180c39 FUN_10180c39 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002bc00(undefined1 *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int *in_ECX;
  uint uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  
  puVar1 = (undefined1 *)in_ECX[1];
  if ((param_1 < puVar1) && (puVar5 = (undefined1 *)*in_ECX, puVar5 <= param_1)) {
    puVar4 = (undefined1 *)in_ECX[2];
    if ((puVar1 == puVar4) && (puVar4 == puVar1)) {
      if ((int)puVar5 - (int)puVar1 == 1) {
                    /* WARNING: Subroutine does not return */
        FUN_10180c39("vector<T> too long");
      }
      uVar3 = (int)puVar4 - (int)puVar5;
      puVar4 = (undefined1 *)0x0;
      if (uVar3 <= ~(uVar3 >> 1)) {
        puVar4 = (undefined1 *)((uVar3 >> 1) + uVar3);
      }
      puVar6 = puVar1 + (1 - (int)puVar5);
      if (puVar1 + (1 - (int)puVar5) <= puVar4) {
        puVar6 = puVar4;
      }
      FUN_1002c770(puVar6);
    }
    if ((undefined1 *)in_ECX[1] != (undefined1 *)0x0) {
      *(undefined1 *)in_ECX[1] = param_1[*in_ECX - (int)puVar5];
      in_ECX[1] = in_ECX[1] + 1;
      return;
    }
  }
  else {
    puVar5 = (undefined1 *)in_ECX[2];
    if ((puVar1 == puVar5) && (puVar5 == puVar1)) {
      iVar2 = *in_ECX;
      if (iVar2 - (int)puVar1 == 1) {
                    /* WARNING: Subroutine does not return */
        FUN_10180c39("vector<T> too long");
      }
      uVar3 = (int)puVar5 - iVar2;
      puVar5 = (undefined1 *)0x0;
      if (uVar3 <= ~(uVar3 >> 1)) {
        puVar5 = (undefined1 *)((uVar3 >> 1) + uVar3);
      }
      puVar4 = puVar1 + (1 - iVar2);
      if (puVar1 + (1 - iVar2) <= puVar5) {
        puVar4 = puVar5;
      }
      FUN_1002c770(puVar4);
    }
    if ((undefined1 *)in_ECX[1] != (undefined1 *)0x0) {
      *(undefined1 *)in_ECX[1] = *param_1;
    }
  }
  in_ECX[1] = in_ECX[1] + 1;
  return;
}

