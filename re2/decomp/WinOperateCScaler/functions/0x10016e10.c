// rea decompile_all
// name: FUN_10016e10
// address: 0x10016e10
// body: available
// range: 0x10016e10-0x10016ff1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10016e10(short *param_1,int *param_2,short *param_3,short param_4)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  short sVar4;
  undefined4 uVar5;
  int *in_ECX;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  uint uStack_78;
  undefined **local_68 [5];
  undefined **local_54 [5];
  undefined **local_40 [5];
  undefined4 local_2c;
  int *local_28;
  char local_24;
  short *local_1c;
  short *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10195be6;
  local_10 = ExceptionList;
  uStack_78 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_78;
  ExceptionList = &local_10;
  uVar7 = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  local_18 = param_1;
  local_2c = 0;
  piVar1 = *(int **)(*(int *)(*in_ECX + 4) + 0x38 + (int)in_ECX);
  local_28 = in_ECX;
  puVar3 = &uStack_78;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
    puVar3 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar3;
  local_8 = 0;
  local_24 = FUN_10015b80(1);
  piVar1 = in_ECX;
  if (local_24 == '\0') goto LAB_10016f53;
  piVar1 = in_ECX;
  if ((int)param_3 < 0) goto LAB_10016f53;
  if (((int)param_3 < 1) && (piVar1 = local_28, param_2 == (int *)0x0)) goto LAB_10016f53;
  local_8 = 2;
  piVar1 = *(int **)(*(int *)(*in_ECX + 4) + 0x38 + (int)in_ECX);
  local_1c = *(short **)piVar1[7];
  if ((local_1c == (short *)0x0) || (*(int *)piVar1[0xb] < 1)) {
    sVar4 = (**(code **)(*piVar1 + 0x18))();
  }
  else {
    sVar4 = *local_1c;
  }
  do {
    if (sVar4 == -1) {
      uVar7 = 1;
      piVar1 = local_28;
LAB_10016f53:
      param_2 = piVar1;
      local_8 = 1;
      *local_18 = 0;
      if (in_ECX[2] == 0 && in_ECX[3] == 0) {
        uVar7 = uVar7 | 2;
      }
      iVar2 = *(int *)(*in_ECX + 4);
      if (uVar7 == 0) goto LAB_10017091;
      uVar7 = uVar7 | *(uint *)((int)in_ECX + iVar2 + 0xc);
      uVar6 = uVar7 | 4;
      if (*(int *)((int)in_ECX + iVar2 + 0x38) != 0) {
        uVar6 = uVar7;
      }
      *(uint *)((int)in_ECX + iVar2 + 0xc) = uVar6 & 0x17;
      uVar6 = *(uint *)((int)in_ECX + iVar2 + 0x10) & uVar6 & 0x17;
      if (uVar6 == 0) goto LAB_10017091;
      if ((uVar6 & 4) == 0) {
        if ((uVar6 & 2) != 0) {
          uVar5 = FUN_100057f0();
          FUN_10006bd0(1,uVar5,"ios_base::failbit set");
          local_54[0] = std::ios_base::failure::vftable;
          __CxxThrowException_8(local_54,&DAT_101ed1a0);
        }
        uVar5 = FUN_100057f0();
        FUN_10006bd0(1,uVar5,"ios_base::eofbit set");
        local_68[0] = std::ios_base::failure::vftable;
        __CxxThrowException_8(local_68,&DAT_101ed1a0);
LAB_10017091:
        local_8 = 4;
        piVar1 = *(int **)(*(int *)(*param_2 + 4) + 0x38 + (int)param_2);
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 8))();
        }
        ExceptionList = local_10;
        return;
      }
      uVar5 = FUN_100057f0();
      FUN_10006bd0(1,uVar5,"ios_base::badbit set");
      local_40[0] = std::ios_base::failure::vftable;
      sVar4 = __CxxThrowException_8(local_40,&DAT_101ed1a0);
    }
    else {
      if (sVar4 == param_4) {
        puVar3 = (uint *)(in_ECX + 2);
        uVar6 = *puVar3;
        *puVar3 = *puVar3 + 1;
        in_ECX[3] = in_ECX[3] + (uint)(0xfffffffe < uVar6);
        piVar1 = *(int **)(*(int *)(*in_ECX + 4) + 0x38 + (int)in_ECX);
        if (*(int *)piVar1[7] != 0) {
          iVar2 = *(int *)piVar1[0xb];
          if (0 < iVar2) {
            *(int *)piVar1[0xb] = iVar2 + -1;
            *(int *)piVar1[7] = *(int *)piVar1[7] + 2;
            piVar1 = local_28;
            goto LAB_10016f53;
          }
        }
        (**(code **)(*piVar1 + 0x1c))();
        piVar1 = local_28;
        goto LAB_10016f53;
      }
      bVar8 = param_2 != (int *)0x0;
      param_2 = (int *)((int)param_2 + -1);
      local_1c = (short *)((int)param_3 + (bVar8 - 1));
      if (((int)local_1c < 1) && (((int)local_1c < 0 || (param_2 == (int *)0x0)))) {
        uVar7 = 2;
        piVar1 = local_28;
        goto LAB_10016f53;
      }
    }
    *local_18 = sVar4;
    local_18 = local_18 + 1;
    puVar3 = (uint *)(in_ECX + 2);
    uVar6 = *puVar3;
    *puVar3 = *puVar3 + 1;
    in_ECX[3] = in_ECX[3] + (uint)(0xfffffffe < uVar6);
    sVar4 = FUN_10017e80();
    param_3 = local_1c;
  } while( true );
}

