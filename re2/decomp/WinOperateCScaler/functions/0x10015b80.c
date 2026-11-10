// rea decompile_all
// name: FUN_10015b80
// address: 0x10015b80
// body: available
// range: 0x10015b80-0x10015d6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_10015b80(char param_1)

{
  int *piVar1;
  code *pcVar2;
  uint *puVar3;
  char cVar4;
  ushort uVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  int *in_ECX;
  uint uVar9;
  uint uVar10;
  uint extraout_ECX;
  int iVar11;
  uint uStack_a8;
  undefined **local_98 [5];
  undefined **local_84 [5];
  undefined **local_70 [5];
  undefined **local_5c [5];
  undefined **local_48 [5];
  undefined **local_34 [5];
  undefined1 local_20 [4];
  int *local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10195b6e;
  local_10 = ExceptionList;
  uStack_a8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_a8;
  ExceptionList = &local_10;
  iVar11 = *(int *)(*in_ECX + 4) + (int)in_ECX;
  puVar3 = &uStack_a8;
  if (*(int *)(iVar11 + 0xc) != 0) goto LAB_10015dac;
  puVar3 = &uStack_a8;
  if (*(int *)(iVar11 + 0x3c) != 0) {
    FUN_10016ce0();
    puVar3 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar3;
  if ((param_1 == '\0') && ((*(byte *)((int)in_ECX + *(int *)(*in_ECX + 4) + 0x14) & 1) != 0)) {
    uVar6 = FUN_100103a0(local_20);
    local_8 = 0;
    piVar7 = (int *)FUN_10012f20(uVar6);
    local_8 = 1;
    if (local_1c != (int *)0x0) {
      puVar8 = (undefined4 *)(**(code **)(*local_1c + 8))();
      if (puVar8 != (undefined4 *)0x0) {
        (**(code **)*puVar8)(1);
      }
    }
    local_8 = 2;
    piVar1 = *(int **)(*(int *)(*in_ECX + 4) + 0x38 + (int)in_ECX);
    if ((*(ushort **)piVar1[7] == (ushort *)0x0) || (*(int *)piVar1[0xb] < 1)) {
      uVar5 = (**(code **)(*piVar1 + 0x18))();
    }
    else {
      uVar5 = **(ushort **)piVar1[7];
    }
    uVar9 = (uint)uVar5;
    do {
      if ((short)uVar9 == -1) {
        iVar11 = *(int *)(*in_ECX + 4);
        uVar9 = *(uint *)(iVar11 + 0xc + (int)in_ECX);
        uVar10 = uVar9 | 5;
        if (*(int *)((int)in_ECX + iVar11 + 0x38) != 0) {
          uVar10 = uVar9 | 1;
        }
        *(uint *)((int)in_ECX + iVar11 + 0xc) = uVar10 & 0x17;
        uVar9 = *(uint *)((int)in_ECX + iVar11 + 0x10) & uVar10 & 0x17;
        if (uVar9 == 0) goto LAB_10015d2a;
        if ((uVar9 & 4) != 0) {
          uVar6 = FUN_100057f0();
          FUN_10006bd0(1,uVar6,"ios_base::badbit set");
          local_34[0] = std::ios_base::failure::vftable;
          uVar9 = __CxxThrowException_8(local_34,&DAT_101ed1a0);
        }
        if ((uVar9 & 2) != 0) {
          uVar6 = FUN_100057f0();
          FUN_10006bd0(1,uVar6,"ios_base::failbit set");
          local_48[0] = std::ios_base::failure::vftable;
          __CxxThrowException_8(local_48,&DAT_101ed1a0);
        }
        uVar6 = FUN_100057f0();
        FUN_10006bd0(1,uVar6,"ios_base::eofbit set");
        local_5c[0] = std::ios_base::failure::vftable;
        __CxxThrowException_8(local_5c,&DAT_101ed1a0);
        uVar9 = extraout_ECX;
      }
      cVar4 = (**(code **)(*piVar7 + 0x10))(0x48,uVar9);
      if (cVar4 == '\0') goto LAB_10015d2a;
      uVar9 = FUN_10017e80();
      uVar9 = uVar9 & 0xffff;
    } while( true );
  }
  goto LAB_10015d31;
LAB_10015d2a:
  local_8 = 0xffffffff;
LAB_10015d31:
  iVar11 = *(int *)(*in_ECX + 4) + (int)in_ECX;
  puVar3 = (uint *)local_14;
  if (*(int *)(iVar11 + 0xc) == 0) {
    ExceptionList = local_10;
    return CONCAT31((int3)((uint)*in_ECX >> 8),1);
  }
LAB_10015dac:
  local_14 = (undefined1 *)puVar3;
  uVar9 = *(uint *)(iVar11 + 0xc) | 6;
  if (*(int *)(iVar11 + 0x38) != 0) {
    uVar9 = *(uint *)(iVar11 + 0xc) | 2;
  }
  *(uint *)(iVar11 + 0xc) = uVar9 & 0x17;
  uVar9 = *(uint *)(iVar11 + 0x10) & uVar9 & 0x17;
  if (uVar9 == 0) {
    ExceptionList = local_10;
    return 0;
  }
  if ((uVar9 & 4) != 0) {
    uVar6 = FUN_100057f0();
    FUN_10006bd0(1,uVar6,"ios_base::badbit set");
    local_70[0] = std::ios_base::failure::vftable;
    uVar9 = __CxxThrowException_8(local_70,&DAT_101ed1a0);
  }
  if ((uVar9 & 2) != 0) {
    uVar6 = FUN_100057f0();
    FUN_10006bd0(1,uVar6,"ios_base::failbit set");
    local_84[0] = std::ios_base::failure::vftable;
    __CxxThrowException_8(local_84,&DAT_101ed1a0);
  }
  uVar6 = FUN_100057f0();
  FUN_10006bd0(1,uVar6,"ios_base::eofbit set");
  local_98[0] = std::ios_base::failure::vftable;
  __CxxThrowException_8(local_98,&DAT_101ed1a0);
  pcVar2 = (code *)swi(3);
  uVar6 = (*pcVar2)();
  return uVar6;
}

