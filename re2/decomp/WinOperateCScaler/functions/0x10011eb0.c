// rea decompile_all
// name: FUN_10011eb0
// address: 0x10011eb0
// body: available
// range: 0x10011eb0-0x10011fcb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10011fc7 to 0x1015503c FUN_1015503c (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_10011eb0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int in_ECX;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar2 = *param_1;
  do {
    if (iVar2 == 0) {
      return 0;
    }
    piVar3 = *(int **)(in_ECX + 8);
    if ((param_1 < piVar3) && (piVar6 = *(int **)(in_ECX + 4), piVar6 <= param_1)) {
      piVar1 = *(int **)(in_ECX + 0xc);
      if ((piVar3 == piVar1) && ((int)piVar1 - (int)piVar3 >> 4 == 0)) {
        iVar2 = (int)piVar3 - (int)piVar6 >> 4;
        if (iVar2 == 0xfffffff) {
LAB_10011fc2:
                    /* WARNING: Subroutine does not return */
          FUN_1015503c("vector<T> too long");
        }
        uVar7 = iVar2 + 1;
        uVar4 = (int)piVar1 - *(int *)(in_ECX + 4) >> 4;
        uVar5 = 0;
        if (uVar4 <= 0xfffffff - (uVar4 >> 1)) {
          uVar5 = (uVar4 >> 1) + uVar4;
        }
        if (uVar7 <= uVar5) {
          uVar7 = uVar5;
        }
        FUN_10012760(uVar7);
      }
      piVar3 = *(int **)(in_ECX + 8);
      if (piVar3 != (int *)0x0) {
        piVar6 = (int *)(((int)param_1 - (int)piVar6 & 0xfffffff0U) + *(int *)(in_ECX + 4));
        iVar2 = *piVar6;
        iVar8 = piVar6[1];
        iVar9 = piVar6[2];
        iVar10 = piVar6[3];
LAB_10011fa1:
        *piVar3 = iVar2;
        piVar3[1] = iVar8;
        piVar3[2] = iVar9;
        piVar3[3] = iVar10;
      }
    }
    else {
      piVar6 = *(int **)(in_ECX + 0xc);
      if ((piVar3 == piVar6) && ((int)piVar6 - (int)piVar3 >> 4 == 0)) {
        iVar2 = (int)piVar3 - *(int *)(in_ECX + 4) >> 4;
        if (iVar2 == 0xfffffff) goto LAB_10011fc2;
        uVar7 = iVar2 + 1;
        uVar4 = (int)piVar6 - *(int *)(in_ECX + 4) >> 4;
        uVar5 = 0;
        if (uVar4 <= 0xfffffff - (uVar4 >> 1)) {
          uVar5 = (uVar4 >> 1) + uVar4;
        }
        if (uVar7 <= uVar5) {
          uVar7 = uVar5;
        }
        FUN_10012760(uVar7);
      }
      piVar3 = *(int **)(in_ECX + 8);
      if (piVar3 != (int *)0x0) {
        iVar2 = *param_1;
        iVar8 = param_1[1];
        iVar9 = param_1[2];
        iVar10 = param_1[3];
        goto LAB_10011fa1;
      }
    }
    *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + 0x10;
    param_1 = param_1 + 4;
    iVar2 = *param_1;
  } while( true );
}

