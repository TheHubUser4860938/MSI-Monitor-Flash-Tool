// rea decompile_all
// name: FUN_1016ac68
// address: 0x1016ac68
// body: available
// range: 0x1016ac68-0x1016ad02 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1016acfe to 0x1018011c FUN_1018011c (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_1016ac68(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  int local_c;
  int local_8;
  
  if (param_2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1018011c();
  }
  iVar7 = *param_2;
  uVar6 = 0;
  if (0 < iVar7) {
    local_8 = 0;
    piVar1 = *(int **)(*(int *)(param_1 + 0x1c) + 0xc);
    iVar2 = *piVar1;
    do {
      if (0 < iVar2) {
        iVar3 = param_2[1];
        local_c = iVar2;
        piVar5 = piVar1;
        do {
          piVar5 = piVar5 + 1;
          iVar4 = ___TypeMatch(iVar3 + local_8,*piVar5,*(undefined4 *)(param_1 + 0x1c));
          if (iVar4 != 0) {
            uVar6 = 1;
            break;
          }
          local_c = local_c + -1;
        } while (0 < local_c);
      }
      local_8 = local_8 + 0x10;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  return uVar6;
}

