// rea decompile_all
// name: FUN_0040e090
// address: 0x40e090
// body: available
// range: 0x40e090-0x40e17a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40e160 to 0x40e1ab FUN_0040e1ab (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x40e179 to 0x40e1ab FUN_0040e1ab (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0040e090(undefined1 param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  char cVar4;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0059c9ec;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar1 = *(int **)(*(int *)(*in_ECX + 4) + 0x38 + (int)in_ECX);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  local_8 = 0;
  if (((*(int *)(*(int *)(*in_ECX + 4) + 0xc + (int)in_ECX) == 0) &&
      (piVar1 = *(int **)(*(int *)(*in_ECX + 4) + 0x3c + (int)in_ECX), piVar1 != (int *)0x0)) &&
     (piVar1 != in_ECX)) {
    FUN_004057c0();
  }
  local_8 = 1;
  if (*(int *)(*(int *)(*in_ECX + 4) + 0xc + (int)in_ECX) == 0) {
    local_8 = 2;
    piVar1 = *(int **)(*(int *)(*in_ECX + 4) + 0x38 + (int)in_ECX);
    if (*(int *)piVar1[8] != 0) {
      iVar2 = *(int *)piVar1[0xc];
      if (0 < iVar2) {
        *(int *)piVar1[0xc] = iVar2 + -1;
        puVar3 = *(undefined1 **)piVar1[8];
        *(undefined1 **)piVar1[8] = puVar3 + 1;
        *puVar3 = param_1;
        FUN_0040e1ab();
        return;
      }
    }
    (**(code **)(*piVar1 + 0xc))(param_1);
    FUN_0040e1ab();
    return;
  }
  FUN_00402a10(*(uint *)((int)in_ECX + *(int *)(*in_ECX + 4) + 0xc) | 4,0);
  local_8 = 4;
  cVar4 = thunk_FUN_00572c70();
  if (cVar4 == '\0') {
    FUN_00405890();
  }
  local_8 = CONCAT31(local_8._1_3_,5);
  piVar1 = *(int **)(*(int *)(*in_ECX + 4) + 0x38 + (int)in_ECX);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = local_10;
  return;
}

