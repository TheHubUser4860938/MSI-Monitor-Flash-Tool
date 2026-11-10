// rea decompile_all
// name: FUN_00415920
// address: 0x415920
// body: available
// range: 0x415920-0x4159c6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4159c2 to 0x40ed80 FUN_0040ed80 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00415920(undefined4 param_1,int param_2,int param_3)

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
    FUN_0040ed80(0x80070216);
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
    FUN_00415c00(in_ECX);
    return param_1;
  }
  if (*(int **)(*in_ECX + -0x10) != (int *)0x0) {
    iVar3 = (**(code **)(**(int **)(*in_ECX + -0x10) + 0x10))();
    if (iVar3 != 0) goto LAB_004159a1;
  }
  piVar2 = (int *)FUN_004295fe();
  iVar3 = (**(code **)(*piVar2 + 0x10))();
LAB_004159a1:
  FUN_004158a0(*in_ECX + iVar4 * 2,iVar5,iVar3);
  return param_1;
}

