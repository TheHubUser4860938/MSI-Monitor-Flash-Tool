// rea decompile_all
// name: FUN_10044820
// address: 0x10044820
// body: available
// range: 0x10044820-0x10044927 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10044820(void)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  uint *puVar4;
  uint uVar5;
  int *in_ECX;
  undefined1 local_38 [32];
  undefined1 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101c3e9c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar1 = *(int **)(*(int *)(*in_ECX + 4) + 0x38 + (int)in_ECX);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(DAT_1023dfec ^ (uint)&stack0xfffffffc);
  }
  local_8 = 0;
  if (((*(int *)(*(int *)(*in_ECX + 4) + 0xc + (int)in_ECX) == 0) &&
      (piVar1 = *(int **)(*(int *)(*in_ECX + 4) + 0x3c + (int)in_ECX), piVar1 != (int *)0x0)) &&
     (piVar1 != in_ECX)) {
    FUN_1000c0d0();
  }
  uVar2 = *(uint *)(*(int *)(*in_ECX + 4) + 0xc + (int)in_ECX);
  local_18 = uVar2 == 0;
  local_8 = 1;
  if ((uVar2 & 6) == 0) {
    puVar4 = (uint *)FUN_10046090(local_38);
    if ((puVar4[2] + *puVar4 == -1) &&
       (puVar4[3] + puVar4[1] + (uint)CARRY4(puVar4[2],*puVar4) == -1)) {
      uVar2 = *(uint *)((int)in_ECX + *(int *)(*in_ECX + 4) + 0xc);
      uVar5 = uVar2 | 6;
      if (*(int *)((int)in_ECX + *(int *)(*in_ECX + 4) + 0x38) != 0) {
        uVar5 = uVar2 | 2;
      }
      FUN_100071e0(uVar5,0);
    }
  }
  local_8 = 2;
  cVar3 = thunk_FUN_101970f2();
  if (cVar3 == '\0') {
    FUN_1000c4a0();
  }
  local_8 = CONCAT31(local_8._1_3_,3);
  piVar1 = *(int **)(*(int *)(*in_ECX + 4) + 0x38 + (int)in_ECX);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = local_10;
  return;
}

