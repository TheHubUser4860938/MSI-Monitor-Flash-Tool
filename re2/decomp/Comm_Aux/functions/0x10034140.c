// rea decompile_all
// name: FUN_10034140
// address: 0x10034140
// body: available
// range: 0x10034140-0x10034223 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10034193 to 0x100351a0 FUN_100351a0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10034140(uint param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101a0510;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if ((*(int **)(*in_ECX + -0x10) == (int *)0x0) ||
     (piVar1 = (int *)(**(code **)(**(int **)(*in_ECX + -0x10) + 0x10))
                                (DAT_10206460 ^ (uint)&stack0xfffffffc), piVar1 == (int *)0x0)) {
    piVar1 = (int *)FUN_10048e90();
    piVar1 = (int *)(**(code **)(*piVar1 + 0x10))();
    if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_100351a0(0x80004005);
    }
  }
  puVar2 = (undefined4 *)(**(code **)(*piVar1 + 0xc))();
  local_8 = 0;
  if ((param_1 == 0) || ((param_1 & 0xffff0000) != 0)) {
    FUN_10034740(param_1);
  }
  else {
    iVar3 = FUN_10048ace(param_1 & 0xffff);
    if (iVar3 != 0) {
      FUN_10034d90(iVar3,param_1 & 0xffff);
    }
  }
  local_8 = 1;
  FUN_10034490(puVar2 + 4,puVar2[1]);
  local_8 = 0xffffffff;
  LOCK();
  piVar1 = puVar2 + 3;
  iVar3 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar3 == 1 || iVar3 + -1 < 0) {
    (**(code **)(*(int *)*puVar2 + 4))(puVar2);
  }
  ExceptionList = local_10;
  return;
}

