// rea decompile_all
// name: FUN_100c7dfa
// address: 0x100c7dfa
// body: available
// range: 0x100c7dfa-0x100c7e93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100c7e8f to 0x1004a383 FUN_1004a383 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_100c7dfa(short param_1,char param_2,int *param_3,int param_4)

{
  code *pcVar1;
  int iVar2;
  undefined *puVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 *puVar6;
  
  if (param_3 != (int *)0x0) {
    pcVar1 = *(code **)(*param_3 + 0x1ac);
    guard_check_icall();
    iVar2 = (*pcVar1)();
    if (iVar2 != 0) {
      piVar5 = (int *)&DAT_102472c0;
      if (param_4 == 0) {
        piVar5 = &DAT_102472c4;
        puVar6 = &DAT_102472bc;
      }
      else {
        puVar6 = (undefined4 *)&DAT_102472b8;
      }
      puVar3 = &DAT_102472c8;
      if (param_4 == 0) {
        puVar3 = &DAT_102472cc;
      }
      FUN_100c8068(puVar6,puVar3,piVar5,iVar2);
      pcVar4 = (char *)*puVar6;
      if (pcVar4 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_1004a383();
      }
      iVar2 = 0;
      if (0 < *piVar5) {
        do {
          if ((*(short *)(pcVar4 + 2) == param_1) && (*pcVar4 == param_2)) {
            return 1;
          }
          iVar2 = iVar2 + 1;
          pcVar4 = pcVar4 + 6;
        } while (iVar2 < *piVar5);
      }
    }
  }
  return 0;
}

