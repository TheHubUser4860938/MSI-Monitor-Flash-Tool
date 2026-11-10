// rea decompile_all
// name: FUN_100128d0
// address: 0x100128d0
// body: available
// range: 0x100128d0-0x10012ae3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10012ae2 to 0x10012b19 FUN_10012b19 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_100128d0(int *param_1,short *param_2)

{
  short *psVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  ushort *puVar6;
  uint *puVar7;
  char cVar8;
  ushort uVar9;
  int *piVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  bool bVar14;
  undefined8 uVar15;
  uint uStack_80;
  undefined **appuStack_70 [5];
  undefined **appuStack_5c [5];
  undefined **appuStack_48 [5];
  undefined4 local_34;
  int *local_2c;
  int *local_28;
  int iStack_24;
  short *local_20;
  uint local_1c;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1019563c;
  local_10 = ExceptionList;
  uStack_80 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_80;
  ExceptionList = &local_10;
  local_2c = param_1;
  local_20 = param_2;
  local_34 = 0;
  if (*param_2 == 0) {
    local_18 = 0;
  }
  else {
    psVar1 = param_2 + 1;
    do {
      sVar2 = *param_2;
      param_2 = param_2 + 1;
    } while (sVar2 != 0);
    local_18 = (int)param_2 - (int)psVar1 >> 1;
  }
  iVar3 = *(int *)(*param_1 + 4);
  iVar4 = *(int *)(iVar3 + 0x24 + (int)param_1);
  uVar12 = *(uint *)(iVar3 + 0x20 + (int)param_1);
  if ((iVar4 < 0) ||
     ((iVar4 < 1 && (((uVar12 == 0 || (iVar4 < 0)) || ((iVar4 < 1 && (uVar12 <= local_18)))))))) {
    iStack_24 = 0;
    iVar4 = iStack_24;
    iStack_24 = 0;
    local_28 = (int *)0x0;
    piVar10 = local_28;
    iVar13 = iStack_24;
    iStack_24 = iVar4;
  }
  else {
    piVar10 = (int *)(uVar12 - local_18);
    iVar13 = iVar4 - (uint)(uVar12 < local_18);
  }
  piVar5 = *(int **)(iVar3 + 0x38 + (int)param_1);
  _local_28 = CONCAT44(iStack_24,param_1);
  puVar7 = &uStack_80;
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 4))();
    puVar7 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar7;
  local_8 = 0;
  if (((*(int *)(*(int *)(*param_1 + 4) + 0xc + (int)param_1) == 0) &&
      (piVar5 = *(int **)(*(int *)(*param_1 + 4) + 0x3c + (int)param_1), piVar5 != (int *)0x0)) &&
     (piVar5 != param_1)) {
    FUN_10016ce0();
  }
  bVar14 = *(int *)(*(int *)(*param_1 + 4) + 0xc + (int)param_1) == 0;
  _local_28 = CONCAT14(bVar14,local_28);
  local_8 = 1;
  if (!bVar14) {
    iVar3 = *(int *)(*param_1 + 4);
    uVar12 = *(uint *)((int)param_1 + iVar3 + 0xc) & 0x17 | 4;
    *(uint *)((int)param_1 + iVar3 + 0xc) = uVar12;
    uVar12 = *(uint *)((int)param_1 + iVar3 + 0x10) & uVar12;
    if (uVar12 != 0) {
      if ((uVar12 & 4) != 0) {
        uVar11 = FUN_100057f0();
        FUN_10006bd0(1,uVar11,"ios_base::badbit set");
        appuStack_48[0] = std::ios_base::failure::vftable;
        uVar12 = __CxxThrowException_8(appuStack_48,&DAT_101ed1a0);
      }
      if ((uVar12 & 2) != 0) {
        uVar11 = FUN_100057f0();
        FUN_10006bd0(1,uVar11,"ios_base::failbit set");
        appuStack_5c[0] = std::ios_base::failure::vftable;
        __CxxThrowException_8(appuStack_5c,&DAT_101ed1a0);
      }
      uVar11 = FUN_100057f0();
      FUN_10006bd0(1,uVar11,"ios_base::eofbit set");
      appuStack_70[0] = std::ios_base::failure::vftable;
      __CxxThrowException_8(appuStack_70,&DAT_101ed1a0);
    }
    local_8 = 4;
    cVar8 = thunk_FUN_1016b1c8();
    piVar10 = local_28;
    if (cVar8 == '\0') {
      FUN_1000f1e0();
    }
    local_8 = CONCAT31(local_8._1_3_,5);
    piVar10 = *(int **)(*(int *)(*piVar10 + 4) + 0x38 + (int)piVar10);
    if (piVar10 != (int *)0x0) {
      (**(code **)(*piVar10 + 8))();
    }
    ExceptionList = local_10;
    return param_1;
  }
  local_8 = 2;
  if ((*(uint *)(*(int *)(*param_1 + 4) + 0x14 + (int)param_1) & 0x1c0) != 0x40) {
    for (; (-1 < iVar13 && ((0 < iVar13 || (piVar10 != (int *)0x0))));
        piVar10 = (int *)((int)piVar10 + -1)) {
      piVar5 = *(int **)(*(int *)(*param_1 + 4) + 0x38 + (int)param_1);
      uVar9 = *(ushort *)(*(int *)(*param_1 + 4) + 0x40 + (int)param_1);
      local_1c = (uint)uVar9;
      if ((*(int *)piVar5[8] == 0) || (*(int *)piVar5[0xc] < 1)) {
        uVar9 = (**(code **)(*piVar5 + 0xc))(local_1c);
      }
      else {
        *(int *)piVar5[0xc] = *(int *)piVar5[0xc] + -1;
        puVar6 = *(ushort **)piVar5[8];
        *(ushort **)piVar5[8] = puVar6 + 1;
        *puVar6 = uVar9;
      }
      if (uVar9 == 0xffff) goto LAB_10012acd;
      iVar13 = iVar13 + -1 + (uint)(piVar10 != (int *)0x0);
    }
  }
  uVar15 = (**(code **)(**(int **)(*(int *)(*param_1 + 4) + 0x38 + (int)param_1) + 0x24))
                     (local_20,local_18,0);
  if (((uint)uVar15 == local_18) && ((int)((ulonglong)uVar15 >> 0x20) == 0)) {
    for (; (-1 < iVar13 && ((0 < iVar13 || (piVar10 != (int *)0x0))));
        piVar10 = (int *)((int)piVar10 + -1)) {
      piVar5 = *(int **)(*(int *)(*param_1 + 4) + 0x38 + (int)param_1);
      uVar9 = *(ushort *)(*(int *)(*param_1 + 4) + 0x40 + (int)param_1);
      local_1c = (uint)uVar9;
      if ((*(int *)piVar5[8] == 0) || (*(int *)piVar5[0xc] < 1)) {
        uVar9 = (**(code **)(*piVar5 + 0xc))(local_1c);
      }
      else {
        *(int *)piVar5[0xc] = *(int *)piVar5[0xc] + -1;
        puVar6 = *(ushort **)piVar5[8];
        *(ushort **)piVar5[8] = puVar6 + 1;
        *puVar6 = uVar9;
      }
      if (uVar9 == 0xffff) break;
      iVar13 = iVar13 + -1 + (uint)(piVar10 != (int *)0x0);
    }
  }
LAB_10012acd:
  iVar3 = *(int *)(*param_1 + 4);
  *(undefined4 *)(iVar3 + 0x20 + (int)param_1) = 0;
  *(undefined4 *)(iVar3 + 0x24 + (int)param_1) = 0;
  piVar10 = (int *)FUN_10012b19();
  return piVar10;
}

