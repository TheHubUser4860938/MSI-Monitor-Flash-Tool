// rea decompile_all
// name: FUN_1001c030
// address: 0x1001c030
// body: available
// range: 0x1001c030-0x1001c204 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001c203 to 0x1001c23a FUN_1001c23a (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_1001c030(int *param_1,undefined4 *param_2)

{
  int iVar1;
  ushort *puVar2;
  uint *puVar3;
  char cVar4;
  ushort uVar5;
  int *piVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  bool bVar11;
  undefined8 uVar12;
  uint uStack_80;
  undefined **appuStack_70 [5];
  undefined **appuStack_5c [5];
  undefined **appuStack_48 [6];
  int *local_30;
  int local_2c;
  int *local_28;
  undefined4 local_24;
  uint local_20;
  undefined4 *local_1c;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101961cc;
  local_10 = ExceptionList;
  uStack_80 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_80;
  ExceptionList = &local_10;
  local_1c = param_2;
  local_28 = param_1;
  local_24 = 0;
  local_20 = param_2[4];
  iVar1 = *(int *)(*param_1 + 4);
  iVar10 = *(int *)(iVar1 + 0x24 + (int)param_1);
  uVar8 = *(uint *)(iVar1 + 0x20 + (int)param_1);
  if ((iVar10 < 0) || (((iVar10 < 1 && (uVar8 == 0)) || (local_2c = iVar10, uVar8 <= local_20)))) {
    iVar10 = 0;
  }
  else {
    iVar10 = uVar8 - local_20;
  }
  piVar6 = *(int **)(iVar1 + 0x38 + (int)param_1);
  local_30 = param_1;
  puVar3 = &uStack_80;
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 4))();
    puVar3 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar3;
  local_8 = 0;
  if (((*(int *)(*(int *)(*param_1 + 4) + 0xc + (int)param_1) == 0) &&
      (piVar6 = *(int **)(*(int *)(*param_1 + 4) + 0x3c + (int)param_1), piVar6 != (int *)0x0)) &&
     (piVar6 != param_1)) {
    FUN_10016ce0();
  }
  bVar11 = *(int *)(*(int *)(*param_1 + 4) + 0xc + (int)param_1) == 0;
  local_2c = CONCAT31(local_2c._1_3_,bVar11);
  local_8 = 1;
  if (!bVar11) {
    iVar1 = *(int *)(*param_1 + 4);
    uVar8 = *(uint *)((int)param_1 + iVar1 + 0xc) & 0x17 | 4;
    *(uint *)((int)param_1 + iVar1 + 0xc) = uVar8;
    uVar8 = *(uint *)((int)param_1 + iVar1 + 0x10) & uVar8;
    if (uVar8 != 0) {
      if ((uVar8 & 4) != 0) {
        uVar7 = FUN_100057f0();
        FUN_10006bd0(1,uVar7,"ios_base::badbit set");
        appuStack_48[0] = std::ios_base::failure::vftable;
        uVar8 = __CxxThrowException_8(appuStack_48,&DAT_101ed1a0);
      }
      if ((uVar8 & 2) != 0) {
        uVar7 = FUN_100057f0();
        FUN_10006bd0(1,uVar7,"ios_base::failbit set");
        appuStack_5c[0] = std::ios_base::failure::vftable;
        __CxxThrowException_8(appuStack_5c,&DAT_101ed1a0);
      }
      uVar7 = FUN_100057f0();
      FUN_10006bd0(1,uVar7,"ios_base::eofbit set");
      appuStack_70[0] = std::ios_base::failure::vftable;
      __CxxThrowException_8(appuStack_70,&DAT_101ed1a0);
    }
    local_8 = 4;
    cVar4 = thunk_FUN_1016b1c8();
    piVar6 = local_30;
    if (cVar4 == '\0') {
      FUN_1000f1e0();
    }
    local_8 = CONCAT31(local_8._1_3_,5);
    piVar6 = *(int **)(*(int *)(*piVar6 + 4) + 0x38 + (int)piVar6);
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 8))();
    }
    ExceptionList = local_10;
    return param_1;
  }
  local_8 = 2;
  if ((*(uint *)(*(int *)(*param_1 + 4) + 0x14 + (int)param_1) & 0x1c0) != 0x40) {
    for (; iVar10 != 0; iVar10 = iVar10 + -1) {
      piVar6 = *(int **)(*(int *)(*param_1 + 4) + 0x38 + (int)param_1);
      uVar5 = *(ushort *)(*(int *)(*param_1 + 4) + 0x40 + (int)param_1);
      local_18 = (uint)uVar5;
      if ((*(int *)piVar6[8] == 0) || (*(int *)piVar6[0xc] < 1)) {
        uVar5 = (**(code **)(*piVar6 + 0xc))(local_18);
      }
      else {
        *(int *)piVar6[0xc] = *(int *)piVar6[0xc] + -1;
        puVar2 = *(ushort **)piVar6[8];
        *(ushort **)piVar6[8] = puVar2 + 1;
        *puVar2 = uVar5;
      }
      if (uVar5 == 0xffff) {
        local_24 = 4;
        goto LAB_1001c190;
      }
    }
  }
  puVar9 = local_1c;
  if (7 < (uint)local_1c[5]) {
    puVar9 = (undefined4 *)*local_1c;
  }
  uVar12 = (**(code **)(**(int **)(*(int *)(*param_1 + 4) + 0x38 + (int)param_1) + 0x24))
                     (puVar9,local_20,0);
  if (((uint)uVar12 == local_20) && ((int)((ulonglong)uVar12 >> 0x20) == 0)) {
LAB_1001c190:
    do {
      if (iVar10 == 0) break;
      piVar6 = *(int **)(*(int *)(*param_1 + 4) + 0x38 + (int)param_1);
      uVar5 = *(ushort *)(*(int *)(*param_1 + 4) + 0x40 + (int)param_1);
      local_18 = (uint)uVar5;
      if ((*(int *)piVar6[8] == 0) || (*(int *)piVar6[0xc] < 1)) {
        uVar5 = (**(code **)(*piVar6 + 0xc))(local_18);
      }
      else {
        *(int *)piVar6[0xc] = *(int *)piVar6[0xc] + -1;
        puVar2 = *(ushort **)piVar6[8];
        *(ushort **)piVar6[8] = puVar2 + 1;
        *puVar2 = uVar5;
      }
      if (uVar5 == 0xffff) break;
      iVar10 = iVar10 + -1;
    } while( true );
  }
  iVar1 = *(int *)(*param_1 + 4);
  *(undefined4 *)(iVar1 + 0x20 + (int)param_1) = 0;
  *(undefined4 *)(iVar1 + 0x24 + (int)param_1) = 0;
  piVar6 = (int *)FUN_1001c23a();
  return piVar6;
}

