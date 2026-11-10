// rea decompile_all
// name: FUN_1000f6c0
// address: 0x1000f6c0
// body: available
// range: 0x1000f6c0-0x1000f781 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000f780 to 0x1000f7b2 FUN_1000f7b2 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000f6c0(undefined4 param_1,int param_2,int param_3)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  int *in_ECX;
  uint uVar4;
  longlong lVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101c158c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar4 = 0;
  piVar1 = *(int **)(*(int *)(*in_ECX + 4) + 0x38 + (int)in_ECX);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  local_8 = 0;
  if (((*(int *)(*(int *)(*in_ECX + 4) + 0xc + (int)in_ECX) == 0) &&
      (piVar1 = *(int **)(*(int *)(*in_ECX + 4) + 0x3c + (int)in_ECX), piVar1 != (int *)0x0)) &&
     (piVar1 != in_ECX)) {
    FUN_1000c0d0();
  }
  if (*(int *)(*(int *)(*in_ECX + 4) + 0xc + (int)in_ECX) == 0) {
    if ((-1 < param_3) && ((0 < param_3 || (param_2 != 0)))) {
      local_8 = 2;
      lVar5 = FUN_10010600(param_1,param_2,param_3);
      if (lVar5 != CONCAT44(param_3,param_2)) {
        FUN_1000f7b2();
        return;
      }
    }
  }
  else {
    uVar4 = 4;
  }
  local_8 = 1;
  if (uVar4 != 0) {
    uVar4 = *(uint *)((int)in_ECX + *(int *)(*in_ECX + 4) + 0xc) | uVar4;
    uVar3 = uVar4 | 4;
    if (*(int *)((int)in_ECX + *(int *)(*in_ECX + 4) + 0x38) != 0) {
      uVar3 = uVar4;
    }
    FUN_100071e0(uVar3,0);
  }
  local_8 = 4;
  cVar2 = thunk_FUN_101970f2();
  if (cVar2 == '\0') {
    FUN_1000c4a0();
  }
  local_8 = CONCAT31(local_8._1_3_,5);
  piVar1 = *(int **)(*(int *)(*in_ECX + 4) + 0x38 + (int)in_ECX);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = local_10;
  return;
}

