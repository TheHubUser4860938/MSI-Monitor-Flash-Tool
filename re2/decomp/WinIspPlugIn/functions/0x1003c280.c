// rea decompile_all
// name: FUN_1003c280
// address: 0x1003c280
// body: available
// range: 0x1003c280-0x1003c454 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003c453 to 0x1003c485 FUN_1003c485 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003c280(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  short *psVar5;
  char cVar6;
  short sVar7;
  int *in_ECX;
  undefined4 *in_EDX;
  int iVar8;
  undefined8 uVar9;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101c385c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar1 = in_EDX[4];
  iVar2 = *(int *)(*in_ECX + 4);
  iVar8 = *(int *)(iVar2 + 0x24 + (int)in_ECX);
  uVar3 = *(uint *)(iVar2 + 0x20 + (int)in_ECX);
  if ((iVar8 < 0) || (((iVar8 < 1 && (uVar3 == 0)) || (uVar3 <= uVar1)))) {
    iVar8 = 0;
  }
  else {
    iVar8 = uVar3 - uVar1;
  }
  piVar4 = *(int **)(iVar2 + 0x38 + (int)in_ECX);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 4))();
  }
  local_8 = 0;
  if (((*(int *)(*(int *)(*in_ECX + 4) + 0xc + (int)in_ECX) == 0) &&
      (piVar4 = *(int **)(*(int *)(*in_ECX + 4) + 0x3c + (int)in_ECX), piVar4 != (int *)0x0)) &&
     (piVar4 != in_ECX)) {
    FUN_1000c0d0();
  }
  local_8 = 1;
  if (*(int *)(*(int *)(*in_ECX + 4) + 0xc + (int)in_ECX) != 0) {
    FUN_100071e0(*(uint *)((int)in_ECX + *(int *)(*in_ECX + 4) + 0xc) | 4,0);
    local_8 = 4;
    cVar6 = thunk_FUN_101970f2();
    if (cVar6 == '\0') {
      FUN_1000c4a0();
    }
    local_8 = CONCAT31(local_8._1_3_,5);
    piVar4 = *(int **)(*(int *)(*in_ECX + 4) + 0x38 + (int)in_ECX);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 8))();
    }
    ExceptionList = local_10;
    return;
  }
  local_8 = 2;
  if ((*(uint *)(*(int *)(*in_ECX + 4) + 0x14 + (int)in_ECX) & 0x1c0) != 0x40) {
    for (; iVar8 != 0; iVar8 = iVar8 + -1) {
      piVar4 = *(int **)(*(int *)(*in_ECX + 4) + 0x38 + (int)in_ECX);
      sVar7 = *(short *)(*(int *)(*in_ECX + 4) + 0x40 + (int)in_ECX);
      if ((*(int *)piVar4[8] == 0) || (*(int *)piVar4[0xc] < 1)) {
        sVar7 = (**(code **)(*piVar4 + 0xc))(sVar7);
      }
      else {
        *(int *)piVar4[0xc] = *(int *)piVar4[0xc] + -1;
        psVar5 = *(short **)piVar4[8];
        *(short **)piVar4[8] = psVar5 + 1;
        *psVar5 = sVar7;
      }
      if (sVar7 == -1) goto LAB_1003c3e0;
    }
  }
  if (7 < (uint)in_EDX[5]) {
    in_EDX = (undefined4 *)*in_EDX;
  }
  uVar9 = FUN_10010600(in_EDX,uVar1,0);
  if (((uint)uVar9 == uVar1) && ((int)((ulonglong)uVar9 >> 0x20) == 0)) {
LAB_1003c3e0:
    do {
      if (iVar8 == 0) break;
      piVar4 = *(int **)(*(int *)(*in_ECX + 4) + 0x38 + (int)in_ECX);
      sVar7 = *(short *)(*(int *)(*in_ECX + 4) + 0x40 + (int)in_ECX);
      if ((*(int *)piVar4[8] == 0) || (*(int *)piVar4[0xc] < 1)) {
        sVar7 = (**(code **)(*piVar4 + 0xc))(sVar7);
      }
      else {
        *(int *)piVar4[0xc] = *(int *)piVar4[0xc] + -1;
        psVar5 = *(short **)piVar4[8];
        *(short **)piVar4[8] = psVar5 + 1;
        *psVar5 = sVar7;
      }
      if (sVar7 == -1) break;
      iVar8 = iVar8 + -1;
    } while( true );
  }
  iVar2 = *(int *)(*in_ECX + 4);
  *(undefined4 *)(iVar2 + 0x20 + (int)in_ECX) = 0;
  *(undefined4 *)(iVar2 + 0x24 + (int)in_ECX) = 0;
  FUN_1003c485();
  return;
}

