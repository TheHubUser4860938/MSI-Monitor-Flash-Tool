// rea decompile_all
// name: FUN_00415670
// address: 0x415670
// body: available
// range: 0x415670-0x415702 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4156aa to 0x40ed80 FUN_0040ed80 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00415670(uint param_1)

{
  int *piVar1;
  int iVar2;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0059d4f8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar1 = (int *)FUN_004295fe(DAT_0060cff4 ^ (uint)&stack0xfffffffc);
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0040ed80(0x80004005);
  }
  iVar2 = (**(code **)(*piVar1 + 0xc))();
  *in_ECX = iVar2 + 0x10;
  local_8 = 0;
  if ((param_1 == 0) || ((param_1 & 0xffff0000) != 0)) {
    FUN_004155e0(param_1);
  }
  else {
    iVar2 = FUN_00435fce(param_1 & 0xffff);
    if (iVar2 != 0) {
      FUN_004160f0(iVar2,param_1 & 0xffff);
    }
  }
  ExceptionList = local_10;
  return;
}

