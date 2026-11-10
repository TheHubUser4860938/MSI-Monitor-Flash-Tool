// rea decompile_all
// name: FUN_004149c0
// address: 0x4149c0
// body: available
// range: 0x4149c0-0x414ab3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x414a1b to 0x40ed80 FUN_0040ed80 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004149c0(uint param_1)

{
  uint uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0059d460;
  local_10 = ExceptionList;
  uVar1 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((*(int **)(*in_ECX + -0x10) == (int *)0x0) ||
     (piVar2 = (int *)(**(code **)(**(int **)(*in_ECX + -0x10) + 0x10))(uVar1), piVar2 == (int *)0x0
     )) {
    piVar2 = (int *)FUN_004295fe();
    piVar2 = (int *)(**(code **)(*piVar2 + 0x10))();
    if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0040ed80(0x80004005);
    }
  }
  puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0xc))();
  local_8 = 0;
  if ((param_1 == 0) || ((param_1 & 0xffff0000) != 0)) {
    FUN_004155e0(param_1);
  }
  else {
    iVar4 = FUN_00435fce(param_1 & 0xffff);
    if (iVar4 != 0) {
      FUN_004160f0(iVar4,param_1 & 0xffff);
    }
  }
  local_8 = 1;
  FUN_004157a0(puVar3 + 4,puVar3[1]);
  local_8 = 0xffffffff;
  LOCK();
  piVar2 = puVar3 + 3;
  iVar4 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar4 == 1 || iVar4 + -1 < 0) {
    (**(code **)(*(int *)*puVar3 + 4))(puVar3);
  }
  ExceptionList = local_10;
  __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return;
}

