// rea decompile_all
// name: FUN_100a132a
// address: 0x100a132a
// body: available
// range: 0x100a132a-0x100a13e9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100a13e5 to 0x1004a383 FUN_1004a383 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_100a132a(undefined4 param_1,COleDataObject *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int in_ECX;
  undefined4 *puVar5;
  
  if (*(int *)(in_ECX + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1004a383();
  }
  if ((DAT_10245ca8 != 0) &&
     (iVar2 = COleDataObject::IsDataAvailable(param_2,DAT_10247bb0,(tagFORMATETC *)0x0), iVar2 != 0)
     ) {
    pcVar1 = *(code **)(**(int **)(in_ECX + 0x38) + 0x2b8);
    guard_check_icall(param_2,param_3,param_4,param_5);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  if (*(int **)(in_ECX + 0x38) != (int *)0x0) {
    puVar5 = &param_4;
    pcVar1 = *(code **)(**(int **)(in_ECX + 0x38) + 0x218);
    guard_check_icall(puVar5);
    iVar2 = (*pcVar1)();
    if (iVar2 != -1) {
      pcVar1 = *(code **)(**(int **)(in_ECX + 0x38) + 0x20c);
      guard_check_icall(puVar5);
      iVar4 = (*pcVar1)();
      if (iVar2 != iVar4) {
        pcVar1 = *(code **)(**(int **)(in_ECX + 0x38) + 0x214);
        guard_check_icall(iVar2);
        (*pcVar1)();
      }
    }
  }
  return 0;
}

