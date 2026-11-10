// rea decompile_all
// name: FUN_10010e70
// address: 0x10010e70
// body: available
// range: 0x10010e70-0x10010f16 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10010f12 to 0x10003680 FUN_10003680 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_10010e70(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int *in_ECX;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  if (-1 < param_2) {
    iVar4 = param_2;
  }
  iVar3 = 0;
  if (-1 < param_3) {
    iVar3 = param_3;
  }
  if (0x7fffffff - iVar4 < iVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_10003680(0x80070216);
  }
  iVar1 = *(int *)(*in_ECX + -0xc);
  if (iVar1 < iVar3 + iVar4) {
    iVar3 = iVar1 - iVar4;
  }
  iVar5 = 0;
  if (iVar4 <= iVar1) {
    iVar5 = iVar3;
  }
  if ((iVar4 == 0) && (iVar5 == iVar1)) {
    FUN_10002fd0(in_ECX);
    return param_1;
  }
  if (*(int **)(*in_ECX + -0x10) != (int *)0x0) {
    iVar3 = (**(code **)(**(int **)(*in_ECX + -0x10) + 0x10))();
    if (iVar3 != 0) goto LAB_10010ef1;
  }
  piVar2 = (int *)FUN_10013071();
  iVar3 = (**(code **)(*piVar2 + 0x10))();
LAB_10010ef1:
  FUN_10002f50(*in_ECX + iVar4 * 2,iVar5,iVar3);
  return param_1;
}

