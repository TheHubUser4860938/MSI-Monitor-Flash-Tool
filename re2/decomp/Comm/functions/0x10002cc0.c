// rea decompile_all
// name: FUN_10002cc0
// address: 0x10002cc0
// body: available
// range: 0x10002cc0-0x10002d85 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10002d22 to 0x10003680 FUN_10003680 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_10002cc0(int *param_1,int *param_2,short *param_3)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  short *psVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1016d5d9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int **)(*param_2 + -0x10) != (int *)0x0) {
    piVar2 = (int *)(**(code **)(**(int **)(*param_2 + -0x10) + 0x10))
                              (DAT_101d3fec ^ (uint)&stack0xfffffffc);
    if (piVar2 != (int *)0x0) goto LAB_10002d27;
  }
  piVar2 = (int *)FUN_10013071();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x10))();
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10003680(0x80004005);
  }
LAB_10002d27:
  iVar3 = (**(code **)(*piVar2 + 0xc))();
  *param_1 = iVar3 + 0x10;
  local_8 = 0;
  if (param_3 == (short *)0x0) {
    iVar3 = 0;
  }
  else {
    psVar4 = param_3;
    do {
      sVar1 = *psVar4;
      psVar4 = psVar4 + 1;
    } while (sVar1 != 0);
    iVar3 = (int)psVar4 - (int)(param_3 + 1) >> 1;
  }
  FUN_10002ed0(param_1,*param_2,*(undefined4 *)(*param_2 + -0xc),param_3,iVar3);
  ExceptionList = local_10;
  return param_1;
}

