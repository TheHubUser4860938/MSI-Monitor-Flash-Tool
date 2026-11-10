// rea decompile_all
// name: FUN_1003c500
// address: 0x1003c500
// body: available
// range: 0x1003c500-0x1003c710 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003c70f to 0x1003c741 FUN_1003c741 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003c500(void)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  char cVar4;
  short sVar5;
  int *in_ECX;
  uint uVar6;
  short *psVar7;
  short *in_EDX;
  undefined8 uVar8;
  int local_34;
  int iStack_30;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101c389c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*in_EDX == 0) {
    uVar6 = 0;
  }
  else {
    psVar7 = in_EDX;
    do {
      sVar5 = *psVar7;
      psVar7 = psVar7 + 1;
    } while (sVar5 != 0);
    uVar6 = (int)psVar7 - (int)(in_EDX + 1) >> 1;
  }
  iVar1 = *(int *)(*in_ECX + 4);
  iStack_30 = *(int *)(iVar1 + 0x24 + (int)in_ECX);
  uVar2 = *(uint *)(iVar1 + 0x20 + (int)in_ECX);
  if ((iStack_30 < 0) ||
     ((iStack_30 < 1 && (((uVar2 == 0 || (iStack_30 < 0)) || ((iStack_30 < 1 && (uVar2 <= uVar6)))))
      ))) {
    iStack_30 = 0;
    local_34 = 0;
  }
  else {
    local_34 = uVar2 - uVar6;
    iStack_30 = iStack_30 - (uint)(uVar2 < uVar6);
  }
  piVar3 = *(int **)(iVar1 + 0x38 + (int)in_ECX);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))();
  }
  local_8 = 0;
  if (((*(int *)(*(int *)(*in_ECX + 4) + 0xc + (int)in_ECX) == 0) &&
      (piVar3 = *(int **)(*(int *)(*in_ECX + 4) + 0x3c + (int)in_ECX), piVar3 != (int *)0x0)) &&
     (piVar3 != in_ECX)) {
    FUN_1000c0d0();
  }
  local_8 = 1;
  if (*(int *)(*(int *)(*in_ECX + 4) + 0xc + (int)in_ECX) != 0) {
    FUN_100071e0(*(uint *)((int)in_ECX + *(int *)(*in_ECX + 4) + 0xc) | 4,0);
    local_8 = 4;
    cVar4 = thunk_FUN_101970f2();
    if (cVar4 == '\0') {
      FUN_1000c4a0();
    }
    local_8 = CONCAT31(local_8._1_3_,5);
    piVar3 = *(int **)(*(int *)(*in_ECX + 4) + 0x38 + (int)in_ECX);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))();
    }
    ExceptionList = local_10;
    return;
  }
  local_8 = 2;
  if ((*(uint *)(*(int *)(*in_ECX + 4) + 0x14 + (int)in_ECX) & 0x1c0) != 0x40) {
    for (; (-1 < iStack_30 && ((0 < iStack_30 || (local_34 != 0)))); local_34 = local_34 + -1) {
      sVar5 = *(short *)(*(int *)(*in_ECX + 4) + 0x40 + (int)in_ECX);
      piVar3 = *(int **)(*(int *)(*in_ECX + 4) + 0x38 + (int)in_ECX);
      if (*(int *)piVar3[8] == 0) {
LAB_1003c644:
        sVar5 = (**(code **)(*piVar3 + 0xc))(sVar5);
      }
      else {
        iVar1 = *(int *)piVar3[0xc];
        if (iVar1 < 1) goto LAB_1003c644;
        *(int *)piVar3[0xc] = iVar1 + -1;
        psVar7 = *(short **)piVar3[8];
        *(short **)piVar3[8] = psVar7 + 1;
        *psVar7 = sVar5;
      }
      if (sVar5 == -1) goto LAB_1003c6fa;
      iStack_30 = iStack_30 + -1 + (uint)(local_34 != 0);
    }
  }
  uVar8 = FUN_10010600(in_EDX,uVar6,0);
  if (((uint)uVar8 == uVar6) && ((int)((ulonglong)uVar8 >> 0x20) == 0)) {
    for (; (-1 < iStack_30 && ((0 < iStack_30 || (local_34 != 0)))); local_34 = local_34 + -1) {
      piVar3 = *(int **)(*(int *)(*in_ECX + 4) + 0x38 + (int)in_ECX);
      sVar5 = *(short *)(*(int *)(*in_ECX + 4) + 0x40 + (int)in_ECX);
      if ((*(int *)piVar3[8] == 0) || (*(int *)piVar3[0xc] < 1)) {
        sVar5 = (**(code **)(*piVar3 + 0xc))(sVar5);
      }
      else {
        *(int *)piVar3[0xc] = *(int *)piVar3[0xc] + -1;
        psVar7 = *(short **)piVar3[8];
        *(short **)piVar3[8] = psVar7 + 1;
        *psVar7 = sVar5;
      }
      if (sVar5 == -1) break;
      iStack_30 = iStack_30 + -1 + (uint)(local_34 != 0);
    }
  }
LAB_1003c6fa:
  iVar1 = *(int *)(*in_ECX + 4);
  *(undefined4 *)(iVar1 + 0x20 + (int)in_ECX) = 0;
  *(undefined4 *)(iVar1 + 0x24 + (int)in_ECX) = 0;
  FUN_1003c741();
  return;
}

