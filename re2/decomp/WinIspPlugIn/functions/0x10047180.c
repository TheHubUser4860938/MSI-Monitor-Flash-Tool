// rea decompile_all
// name: FUN_10047180
// address: 0x10047180
// body: available
// range: 0x10047180-0x10047230 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100471ba to 0x10047680 FUN_10047680 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10047180(short *param_1)

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
  puStack_c = &LAB_101c4038;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar2 = (int *)FUN_10049868(DAT_1023dfec ^ (uint)&stack0xfffffffc);
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10047680(0x80004005);
  }
  iVar3 = (**(code **)(*piVar2 + 0xc))();
  *in_ECX = iVar3 + 0x10;
  local_8 = 0;
  if (param_1 == (short *)0x0) {
    iVar3 = 0;
  }
  else {
    if (((uint)param_1 & 0xffff0000) == 0) {
      iVar3 = FUN_1004c4e6((uint)param_1 & 0xffff);
      if (iVar3 == 0) {
        ExceptionList = local_10;
        return;
      }
      FUN_10047070(iVar3,(uint)param_1 & 0xffff);
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
  FUN_100474a0(param_1,iVar3);
  ExceptionList = local_10;
  return;
}

