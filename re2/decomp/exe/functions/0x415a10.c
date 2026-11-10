// rea decompile_all
// name: FUN_00415a10
// address: 0x415a10
// body: available
// range: 0x415a10-0x415ac0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x415a4a to 0x40ed80 FUN_0040ed80 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00415a10(short *param_1)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  int *in_ECX;
  short *psVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0059d4f8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar2 = (int *)FUN_004295fe(DAT_0060cff4 ^ (uint)&stack0xfffffffc);
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0040ed80(0x80004005);
  }
  iVar3 = (**(code **)(*piVar2 + 0xc))();
  *in_ECX = iVar3 + 0x10;
  local_8 = 0;
  if (param_1 == (short *)0x0) {
    iVar3 = 0;
  }
  else {
    if (((uint)param_1 & 0xffff0000) == 0) {
      iVar3 = FUN_00435fce((uint)param_1 & 0xffff);
      if (iVar3 == 0) {
        ExceptionList = local_10;
        return;
      }
      FUN_004160f0(iVar3,(uint)param_1 & 0xffff);
      ExceptionList = local_10;
      return;
    }
    psVar4 = param_1;
    do {
      sVar1 = *psVar4;
      psVar4 = psVar4 + 1;
    } while (sVar1 != 0);
    iVar3 = (int)psVar4 - (int)(param_1 + 1) >> 1;
  }
  FUN_00415e30(param_1,iVar3);
  ExceptionList = local_10;
  return;
}

