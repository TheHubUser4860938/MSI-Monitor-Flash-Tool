// rea decompile_all
// name: FUN_0040d390
// address: 0x40d390
// body: available
// range: 0x40d390-0x40d59a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40d599 to 0x40d5cb FUN_0040d5cb (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0040d390(void)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  byte *pbVar4;
  char cVar5;
  uint uVar6;
  int *in_ECX;
  uint uVar7;
  char *pcVar8;
  char *in_EDX;
  undefined8 uVar9;
  int local_2c;
  int iStack_28;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0059c92c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*in_EDX == '\0') {
    uVar7 = 0;
  }
  else {
    pcVar8 = in_EDX;
    do {
      cVar5 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar5 != '\0');
    uVar7 = (int)pcVar8 - (int)(in_EDX + 1);
  }
  iVar2 = *(int *)(*in_ECX + 4);
  iStack_28 = *(int *)(iVar2 + 0x24 + (int)in_ECX);
  uVar6 = *(uint *)(iVar2 + 0x20 + (int)in_ECX);
  if ((iStack_28 < 0) ||
     ((iStack_28 < 1 && (((uVar6 == 0 || (iStack_28 < 0)) || ((iStack_28 < 1 && (uVar6 <= uVar7)))))
      ))) {
    iStack_28 = 0;
    local_2c = 0;
  }
  else {
    local_2c = uVar6 - uVar7;
    iStack_28 = iStack_28 - (uint)(uVar6 < uVar7);
  }
  piVar3 = *(int **)(iVar2 + 0x38 + (int)in_ECX);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))();
  }
  local_8 = 0;
  if (((*(int *)(*(int *)(*in_ECX + 4) + 0xc + (int)in_ECX) == 0) &&
      (piVar3 = *(int **)(*(int *)(*in_ECX + 4) + 0x3c + (int)in_ECX), piVar3 != (int *)0x0)) &&
     (piVar3 != in_ECX)) {
    FUN_004057c0();
  }
  local_8 = 1;
  if (*(int *)(*(int *)(*in_ECX + 4) + 0xc + (int)in_ECX) != 0) {
    FUN_00402a10(*(uint *)((int)in_ECX + *(int *)(*in_ECX + 4) + 0xc) | 4,0);
    local_8 = 4;
    cVar5 = thunk_FUN_00572c70();
    if (cVar5 == '\0') {
      FUN_00405890();
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
    for (; (-1 < iStack_28 && ((0 < iStack_28 || (local_2c != 0)))); local_2c = local_2c + -1) {
      bVar1 = *(byte *)(*(int *)(*in_ECX + 4) + 0x40 + (int)in_ECX);
      piVar3 = *(int **)(*(int *)(*in_ECX + 4) + 0x38 + (int)in_ECX);
      if (*(int *)piVar3[8] == 0) {
LAB_0040d4d2:
        uVar6 = (**(code **)(*piVar3 + 0xc))(bVar1);
      }
      else {
        iVar2 = *(int *)piVar3[0xc];
        if (iVar2 < 1) goto LAB_0040d4d2;
        *(int *)piVar3[0xc] = iVar2 + -1;
        pbVar4 = *(byte **)piVar3[8];
        *(byte **)piVar3[8] = pbVar4 + 1;
        *pbVar4 = bVar1;
        uVar6 = (uint)bVar1;
      }
      if (uVar6 == 0xffffffff) goto LAB_0040d584;
      iStack_28 = iStack_28 + -1 + (uint)(local_2c != 0);
    }
  }
  uVar9 = FUN_0040e030(in_EDX,uVar7,0);
  if (((uint)uVar9 == uVar7) && ((int)((ulonglong)uVar9 >> 0x20) == 0)) {
    for (; (-1 < iStack_28 && ((0 < iStack_28 || (local_2c != 0)))); local_2c = local_2c + -1) {
      piVar3 = *(int **)(*(int *)(*in_ECX + 4) + 0x38 + (int)in_ECX);
      bVar1 = *(byte *)(*(int *)(*in_ECX + 4) + 0x40 + (int)in_ECX);
      if ((*(int *)piVar3[8] == 0) || (*(int *)piVar3[0xc] < 1)) {
        uVar7 = (**(code **)(*piVar3 + 0xc))(bVar1);
      }
      else {
        *(int *)piVar3[0xc] = *(int *)piVar3[0xc] + -1;
        pbVar4 = *(byte **)piVar3[8];
        *(byte **)piVar3[8] = pbVar4 + 1;
        *pbVar4 = bVar1;
        uVar7 = (uint)bVar1;
      }
      if (uVar7 == 0xffffffff) break;
      iStack_28 = iStack_28 + -1 + (uint)(local_2c != 0);
    }
  }
LAB_0040d584:
  iVar2 = *(int *)(*in_ECX + 4);
  *(undefined4 *)(iVar2 + 0x20 + (int)in_ECX) = 0;
  *(undefined4 *)(iVar2 + 0x24 + (int)in_ECX) = 0;
  FUN_0040d5cb();
  return;
}

