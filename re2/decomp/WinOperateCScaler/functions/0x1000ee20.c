// rea decompile_all
// name: FUN_1000ee20
// address: 0x1000ee20
// body: available
// range: 0x1000ee20-0x1000eff9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_1000ee20(char param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  uint *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int *in_ECX;
  uint uVar7;
  uint uVar8;
  uint extraout_ECX;
  int iVar9;
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
  puStack_c = &LAB_101953fe;
  local_10 = ExceptionList;
  uStack_a8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_a8;
  ExceptionList = &local_10;
  iVar9 = *(int *)(*in_ECX + 4) + (int)in_ECX;
  puVar4 = &uStack_a8;
  if (*(int *)(iVar9 + 0xc) != 0) goto LAB_1000f03a;
  puVar4 = &uStack_a8;
  if (*(int *)(iVar9 + 0x3c) != 0) {
    FUN_10010260();
    puVar4 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar4;
  if ((param_1 == '\0') && ((*(byte *)((int)in_ECX + *(int *)(*in_ECX + 4) + 0x14) & 1) != 0)) {
    uVar5 = FUN_100103a0(local_20);
    local_8 = 0;
    iVar9 = FUN_10005f00(uVar5);
    local_8 = 1;
    if ((local_1c != (int *)0x0) &&
       (puVar6 = (undefined4 *)(**(code **)(*local_1c + 8))(), puVar6 != (undefined4 *)0x0)) {
      (**(code **)*puVar6)(1);
    }
    local_8 = 2;
    piVar1 = *(int **)(*(int *)(*in_ECX + 4) + 0x38 + (int)in_ECX);
    if ((*(byte **)piVar1[7] == (byte *)0x0) || (*(int *)piVar1[0xb] < 1)) {
      uVar7 = (**(code **)(*piVar1 + 0x18))();
    }
    else {
      uVar7 = (uint)**(byte **)piVar1[7];
    }
    do {
      if (uVar7 == 0xffffffff) {
        iVar2 = *(int *)(*in_ECX + 4);
        uVar7 = *(uint *)(iVar2 + 0xc + (int)in_ECX);
        uVar8 = uVar7 | 5;
        if (*(int *)((int)in_ECX + iVar2 + 0x38) != 0) {
          uVar8 = uVar7 | 1;
        }
        *(uint *)((int)in_ECX + iVar2 + 0xc) = uVar8 & 0x17;
        uVar7 = *(uint *)((int)in_ECX + iVar2 + 0x10) & uVar8 & 0x17;
        if (uVar7 == 0) goto LAB_1000efbd;
        if ((uVar7 & 4) != 0) {
          uVar5 = FUN_100057f0();
          FUN_10006bd0(1,uVar5,"ios_base::badbit set");
          local_34[0] = std::ios_base::failure::vftable;
          uVar7 = __CxxThrowException_8(local_34,&DAT_101ed1a0);
        }
        if ((uVar7 & 2) != 0) {
          uVar5 = FUN_100057f0();
          FUN_10006bd0(1,uVar5,"ios_base::failbit set");
          local_48[0] = std::ios_base::failure::vftable;
          __CxxThrowException_8(local_48,&DAT_101ed1a0);
        }
        uVar5 = FUN_100057f0();
        FUN_10006bd0(1,uVar5,"ios_base::eofbit set");
        local_5c[0] = std::ios_base::failure::vftable;
        __CxxThrowException_8(local_5c,&DAT_101ed1a0);
        uVar7 = extraout_ECX;
      }
      if ((*(byte *)(*(int *)(iVar9 + 0xc) + (uVar7 & 0xff) * 2) & 0x48) == 0) goto LAB_1000efbd;
      uVar7 = FUN_100115e0();
    } while( true );
  }
  goto LAB_1000efc4;
LAB_1000efbd:
  local_8 = 0xffffffff;
LAB_1000efc4:
  iVar9 = *(int *)(*in_ECX + 4) + (int)in_ECX;
  puVar4 = (uint *)local_14;
  if (*(int *)(iVar9 + 0xc) == 0) {
    ExceptionList = local_10;
    return CONCAT31((int3)((uint)*in_ECX >> 8),1);
  }
LAB_1000f03a:
  local_14 = (undefined1 *)puVar4;
  uVar7 = *(uint *)(iVar9 + 0xc) | 6;
  if (*(int *)(iVar9 + 0x38) != 0) {
    uVar7 = *(uint *)(iVar9 + 0xc) | 2;
  }
  *(uint *)(iVar9 + 0xc) = uVar7 & 0x17;
  uVar7 = *(uint *)(iVar9 + 0x10) & uVar7 & 0x17;
  if (uVar7 != 0) {
    if ((uVar7 & 4) != 0) {
      uVar5 = FUN_100057f0();
      FUN_10006bd0(1,uVar5,"ios_base::badbit set");
      local_70[0] = std::ios_base::failure::vftable;
      uVar7 = __CxxThrowException_8(local_70,&DAT_101ed1a0);
    }
    if ((uVar7 & 2) != 0) {
      uVar5 = FUN_100057f0();
      FUN_10006bd0(1,uVar5,"ios_base::failbit set");
      local_84[0] = std::ios_base::failure::vftable;
      __CxxThrowException_8(local_84,&DAT_101ed1a0);
    }
    uVar5 = FUN_100057f0();
    FUN_10006bd0(1,uVar5,"ios_base::eofbit set");
    local_98[0] = std::ios_base::failure::vftable;
    __CxxThrowException_8(local_98,&DAT_101ed1a0);
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return uVar5;
  }
  ExceptionList = local_10;
  return 0;
}

