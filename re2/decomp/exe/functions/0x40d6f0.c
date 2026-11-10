// rea decompile_all
// name: FUN_0040d6f0
// address: 0x40d6f0
// body: available
// range: 0x40d6f0-0x40d8e8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40d8e7 to 0x40d919 FUN_0040d919 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Restarted to delay deadcode elimination for space: ram */

int * FUN_0040d6f0(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  short *psVar4;
  char cVar5;
  short sVar6;
  int *piVar7;
  undefined4 *in_EDX;
  int iVar8;
  undefined8 uVar9;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0059c96c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar1 = in_EDX[4];
  iVar2 = *(int *)(DAT_006188b8 + 4);
  uVar3 = *(uint *)(&DAT_006188d8 + iVar2);
  if ((*(int *)(&DAT_006188dc + iVar2) < 0) ||
     (((*(int *)(&DAT_006188dc + iVar2) < 1 && (uVar3 == 0)) || (uVar3 <= uVar1)))) {
    iVar8 = 0;
  }
  else {
    iVar8 = uVar3 - uVar1;
  }
  if (*(int **)(&DAT_006188f0 + iVar2) != (int *)0x0) {
    (**(code **)(**(int **)(&DAT_006188f0 + iVar2) + 4))();
  }
  local_8 = 0;
  if (((*(int *)(&DAT_006188c4 + *(int *)(DAT_006188b8 + 4)) == 0) &&
      (*(int **)(&DAT_006188f4 + *(int *)(DAT_006188b8 + 4)) != (int *)0x0)) &&
     (*(int **)(&DAT_006188f4 + *(int *)(DAT_006188b8 + 4)) != &DAT_006188b8)) {
    FUN_004057c0();
  }
  local_8 = 1;
  if (*(int *)(&DAT_006188c4 + *(int *)(DAT_006188b8 + 4)) != 0) {
    FUN_00402a10(*(uint *)(&DAT_006188c4 + *(int *)(DAT_006188b8 + 4)) | 4,0);
    local_8 = 4;
    cVar5 = thunk_FUN_00572c70();
    if (cVar5 == '\0') {
      FUN_00405890();
    }
    local_8 = CONCAT31(local_8._1_3_,5);
    if (*(int **)(&DAT_006188f0 + *(int *)(DAT_006188b8 + 4)) != (int *)0x0) {
      (**(code **)(**(int **)(&DAT_006188f0 + *(int *)(DAT_006188b8 + 4)) + 8))();
    }
    ExceptionList = local_10;
    return &DAT_006188b8;
  }
  local_8 = 2;
  if ((*(uint *)(&DAT_006188cc + *(int *)(DAT_006188b8 + 4)) & 0x1c0) != 0x40) {
    for (; iVar8 != 0; iVar8 = iVar8 + -1) {
      piVar7 = *(int **)(&DAT_006188f0 + *(int *)(DAT_006188b8 + 4));
      sVar6 = *(short *)(&DAT_006188f8 + *(int *)(DAT_006188b8 + 4));
      if (*(int *)piVar7[8] == 0) {
LAB_0040d81f:
        sVar6 = (**(code **)(*piVar7 + 0xc))(sVar6);
      }
      else {
        iVar2 = *(int *)piVar7[0xc];
        if (iVar2 < 1) goto LAB_0040d81f;
        *(int *)piVar7[0xc] = iVar2 + -1;
        psVar4 = *(short **)piVar7[8];
        *(short **)piVar7[8] = psVar4 + 1;
        *psVar4 = sVar6;
      }
      if (sVar6 == -1) goto LAB_0040d870;
    }
  }
  if (7 < (uint)in_EDX[5]) {
    in_EDX = (undefined4 *)*in_EDX;
  }
  uVar9 = FUN_0040e030(in_EDX,uVar1,0);
  if (((uint)uVar9 == uVar1) && ((int)((ulonglong)uVar9 >> 0x20) == 0)) {
LAB_0040d870:
    do {
      if (iVar8 == 0) break;
      piVar7 = *(int **)(&DAT_006188f0 + *(int *)(DAT_006188b8 + 4));
      sVar6 = *(short *)(&DAT_006188f8 + *(int *)(DAT_006188b8 + 4));
      if (*(int *)piVar7[8] == 0) {
LAB_0040d8ab:
        sVar6 = (**(code **)(*piVar7 + 0xc))(sVar6);
      }
      else {
        iVar2 = *(int *)piVar7[0xc];
        if (iVar2 < 1) goto LAB_0040d8ab;
        *(int *)piVar7[0xc] = iVar2 + -1;
        psVar4 = *(short **)piVar7[8];
        *(short **)piVar7[8] = psVar4 + 1;
        *psVar4 = sVar6;
      }
      if (sVar6 == -1) break;
      iVar8 = iVar8 + -1;
    } while( true );
  }
  iVar2 = *(int *)(DAT_006188b8 + 4);
  *(undefined4 *)(&DAT_006188d8 + iVar2) = 0;
  *(undefined4 *)(&DAT_006188dc + iVar2) = 0;
  piVar7 = (int *)FUN_0040d919();
  return piVar7;
}

