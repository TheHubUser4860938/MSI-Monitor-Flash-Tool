// rea decompile_all
// name: FUN_1005ce12
// address: 0x1005ce12
// body: available
// range: 0x1005ce12-0x1005ce9d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1005ce99 to 0x1004a383 FUN_1004a383 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005ce12(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int in_ECX;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  piVar2 = *(int **)(in_ECX + 4);
  if ((piVar2 != (int *)0x0) && (iVar6 = *param_1, iVar6 != 0)) {
    if ((iVar6 != -1) || (uVar3 = 0, piVar1 = piVar2, *(int *)(in_ECX + 8) == 0)) {
LAB_1005ce4a:
      iVar4 = *(int *)(iVar6 + 8);
      if (iVar4 == 0) {
        uVar3 = *(uint *)(in_ECX + 8);
        uVar5 = *(uint *)(iVar6 + 0xc) % uVar3 + 1;
        if (uVar5 < uVar3) {
          piVar2 = piVar2 + uVar5;
          do {
            iVar4 = *piVar2;
            if (iVar4 != 0) break;
            uVar5 = uVar5 + 1;
            piVar2 = piVar2 + 1;
          } while (uVar5 < uVar3);
        }
      }
      *param_1 = iVar4;
      FUN_100475f0(iVar6);
      FUN_100475f0(iVar6 + 4);
      return;
    }
    do {
      iVar6 = *piVar1;
      if (iVar6 != 0) goto LAB_1005ce4a;
      uVar3 = uVar3 + 1;
      piVar1 = piVar1 + 1;
    } while (uVar3 < *(uint *)(in_ECX + 8));
  }
                    /* WARNING: Subroutine does not return */
  FUN_1004a383();
}

