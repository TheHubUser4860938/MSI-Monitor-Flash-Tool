// rea decompile_all
// name: FUN_10029e2e
// address: 0x10029e2e
// body: available
// range: 0x10029e2e-0x10029ead inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10029ea9 to 0x10012a3f FUN_10012a3f (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10029e2e(int *param_1,int *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int in_ECX;
  int *piVar4;
  int iVar5;
  
  piVar4 = (int *)*param_1;
  if (piVar4 != (int *)0x0) {
    if ((piVar4 == (int *)0xffffffff) && (uVar1 = 0, *(int *)(in_ECX + 8) != 0)) {
      piVar3 = *(int **)(in_ECX + 4);
      while (piVar4 = (int *)*piVar3, piVar4 == (int *)0x0) {
        uVar1 = uVar1 + 1;
        piVar3 = piVar3 + 1;
        if (*(uint *)(in_ECX + 8) <= uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_10012a3f();
        }
      }
    }
    iVar5 = *piVar4;
    if (iVar5 == 0) {
      uVar2 = HashKey<unsigned_long>(piVar4[1]);
      uVar1 = *(uint *)(in_ECX + 8);
      uVar2 = uVar2 % uVar1 + 1;
      if (uVar2 < uVar1) {
        piVar3 = (int *)(*(int *)(in_ECX + 4) + uVar2 * 4);
        do {
          iVar5 = *piVar3;
          if (iVar5 != 0) break;
          uVar2 = uVar2 + 1;
          piVar3 = piVar3 + 1;
        } while (uVar2 < uVar1);
      }
    }
    *param_1 = iVar5;
    *param_2 = piVar4[1];
    *param_3 = piVar4[2];
  }
  return;
}

