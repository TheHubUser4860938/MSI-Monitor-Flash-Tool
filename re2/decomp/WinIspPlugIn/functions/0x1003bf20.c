// rea decompile_all
// name: FUN_1003bf20
// address: 0x1003bf20
// body: available
// range: 0x1003bf20-0x1003c1de inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003c1cf to 0x1003c20f FUN_1003c20f (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003bf20(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  ushort *puVar5;
  short *psVar6;
  uint *puVar7;
  char cVar8;
  short sVar9;
  ushort uVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  int *in_ECX;
  char *pcVar13;
  char *in_EDX;
  int *piVar14;
  int iVar15;
  bool bVar16;
  uint uStack_54;
  undefined1 local_44 [4];
  int *local_40;
  int *local_3c;
  int iStack_38;
  int *local_34;
  uint local_2c;
  int local_28;
  char *local_24;
  int local_20;
  uint local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101c381a;
  local_10 = ExceptionList;
  uStack_54 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_54;
  ExceptionList = &local_10;
  iVar15 = 0;
  local_28 = 0;
  pcVar13 = in_EDX;
  do {
    cVar8 = *pcVar13;
    pcVar13 = pcVar13 + 1;
  } while (cVar8 != '\0');
  local_1c = (int)pcVar13 - (int)(in_EDX + 1);
  local_20 = 0;
  iVar1 = *(int *)(*in_ECX + 4);
  iVar2 = *(int *)(iVar1 + 0x24 + (int)in_ECX);
  uVar3 = *(uint *)(iVar1 + 0x20 + (int)in_ECX);
  if ((iVar2 < 0) ||
     ((iVar2 < 1 && (((uVar3 == 0 || (iVar2 < 0)) || ((iVar2 < 1 && (uVar3 <= local_1c)))))))) {
    iStack_38 = 0;
    iVar2 = iStack_38;
    iStack_38 = 0;
    local_3c = (int *)0x0;
    local_18 = iStack_38;
    piVar14 = local_3c;
    iStack_38 = iVar2;
  }
  else {
    local_18 = iVar2 - (uint)(uVar3 < local_1c);
    piVar14 = (int *)(uVar3 - local_1c);
  }
  piVar4 = *(int **)(iVar1 + 0x38 + (int)in_ECX);
  _local_3c = CONCAT44(iStack_38,in_ECX);
  local_24 = in_EDX;
  puVar7 = &uStack_54;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 4))();
    puVar7 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar7;
  local_8 = 0;
  if (((*(int *)(*(int *)(*in_ECX + 4) + 0xc + (int)in_ECX) == 0) &&
      (piVar4 = *(int **)(*(int *)(*in_ECX + 4) + 0x3c + (int)in_ECX), piVar4 != (int *)0x0)) &&
     (piVar4 != in_ECX)) {
    FUN_1000c0d0();
  }
  bVar16 = *(int *)((int)in_ECX + *(int *)(*in_ECX + 4) + 0xc) == 0;
  _local_3c = CONCAT14(bVar16,local_3c);
  local_8 = 1;
  if (!bVar16) {
    FUN_100071e0(*(uint *)((int)in_ECX + *(int *)(*in_ECX + 4) + 0xc) | 4,0);
    local_8 = 6;
    cVar8 = thunk_FUN_101970f2();
    piVar14 = local_3c;
    if (cVar8 == '\0') {
      FUN_1000c4a0();
    }
    local_8 = CONCAT31(local_8._1_3_,7);
    piVar14 = *(int **)(*(int *)(*piVar14 + 4) + 0x38 + (int)piVar14);
    if (piVar14 != (int *)0x0) {
      (**(code **)(*piVar14 + 8))();
    }
    ExceptionList = local_10;
    return;
  }
  uVar11 = FUN_100072b0(local_44);
  local_8._0_1_ = 3;
  local_34 = (int *)FUN_1003ca30(uVar11);
  local_8._0_1_ = 4;
  if ((local_40 != (int *)0x0) &&
     (puVar12 = (undefined4 *)(**(code **)(*local_40 + 8))(), puVar12 != (undefined4 *)0x0)) {
    (**(code **)*puVar12)(1);
  }
  local_8 = CONCAT31(local_8._1_3_,2);
  if ((*(uint *)(*(int *)(*in_ECX + 4) + 0x14 + (int)in_ECX) & 0x1c0) != 0x40) {
    do {
      if ((local_18 < 0) || ((local_18 < 1 && (piVar14 == (int *)0x0)))) break;
      uVar10 = *(ushort *)(*(int *)(*in_ECX + 4) + 0x40 + (int)in_ECX);
      local_2c = (uint)uVar10;
      piVar4 = *(int **)(*(int *)(*in_ECX + 4) + 0x38 + (int)in_ECX);
      if (*(int *)piVar4[8] == 0) {
LAB_1003c092:
        uVar10 = (**(code **)(*piVar4 + 0xc))(local_2c);
      }
      else {
        iVar1 = *(int *)piVar4[0xc];
        if (iVar1 < 1) goto LAB_1003c092;
        *(int *)piVar4[0xc] = iVar1 + -1;
        puVar5 = *(ushort **)piVar4[8];
        *(ushort **)piVar4[8] = puVar5 + 1;
        *puVar5 = uVar10;
      }
      if (uVar10 == 0xffff) {
        iVar15 = 4;
        local_28 = 4;
        break;
      }
      bVar16 = piVar14 != (int *)0x0;
      piVar14 = (int *)((int)piVar14 + -1);
      local_18 = local_18 + -1 + (uint)bVar16;
    } while( true );
  }
LAB_1003c0b2:
  if (iVar15 == 0) {
    if ((local_20 < 0) || ((local_20 < 1 && (local_1c == 0)))) goto LAB_1003c160;
    local_2c = CONCAT31(local_2c._1_3_,*local_24);
    sVar9 = (**(code **)(*local_34 + 0x30))(local_2c);
    piVar4 = *(int **)(*(int *)(*in_ECX + 4) + 0x38 + (int)in_ECX);
    if (*(int *)piVar4[8] == 0) {
LAB_1003c124:
      sVar9 = (**(code **)(*piVar4 + 0xc))(sVar9);
    }
    else {
      iVar15 = *(int *)piVar4[0xc];
      if (iVar15 < 1) goto LAB_1003c124;
      *(int *)piVar4[0xc] = iVar15 + -1;
      psVar6 = *(short **)piVar4[8];
      *(short **)piVar4[8] = psVar6 + 1;
      *psVar6 = sVar9;
    }
    bVar16 = local_1c != 0;
    local_1c = local_1c - 1;
    iVar15 = 4;
    local_20 = local_20 + -1 + (uint)bVar16;
    local_24 = local_24 + 1;
    local_28 = iVar15;
    if (sVar9 != -1) {
      iVar15 = 0;
      local_28 = iVar15;
    }
    goto LAB_1003c0b2;
  }
LAB_1003c1ba:
  iVar15 = *(int *)(*in_ECX + 4);
  *(undefined4 *)(iVar15 + 0x20 + (int)in_ECX) = 0;
  *(undefined4 *)(iVar15 + 0x24 + (int)in_ECX) = 0;
  FUN_1003c20f();
  return;
LAB_1003c160:
  if ((local_18 < 0) || ((local_18 < 1 && (piVar14 == (int *)0x0)))) goto LAB_1003c1ba;
  piVar4 = *(int **)(*(int *)(*in_ECX + 4) + 0x38 + (int)in_ECX);
  uVar10 = *(ushort *)(*(int *)(*in_ECX + 4) + 0x40 + (int)in_ECX);
  local_2c = (uint)uVar10;
  if ((*(int *)piVar4[8] == 0) || (*(int *)piVar4[0xc] < 1)) {
    uVar10 = (**(code **)(*piVar4 + 0xc))(local_2c);
  }
  else {
    *(int *)piVar4[0xc] = *(int *)piVar4[0xc] + -1;
    puVar5 = *(ushort **)piVar4[8];
    *(ushort **)piVar4[8] = puVar5 + 1;
    *puVar5 = uVar10;
  }
  if (uVar10 == 0xffff) goto LAB_1003c1ba;
  bVar16 = piVar14 != (int *)0x0;
  piVar14 = (int *)((int)piVar14 + -1);
  local_18 = local_18 + -1 + (uint)bVar16;
  goto LAB_1003c160;
}

