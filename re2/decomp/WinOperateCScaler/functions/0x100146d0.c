// rea decompile_all
// name: FUN_100146d0
// address: 0x100146d0
// body: available
// range: 0x100146d0-0x10014a03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100146d0(undefined4 param_1,uint *param_2,undefined4 param_3)

{
  char cVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int _FindHandle;
  int iVar6;
  char *pcVar7;
  undefined4 *puVar8;
  uint *puVar9;
  uint in_stack_00000020;
  uint local_170 [4];
  uint local_160;
  uint local_15c;
  char local_155;
  __finddata64_t local_154;
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_101958e6;
  local_10 = ExceptionList;
  local_14 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_18 = 0xf;
  local_1c = 0;
  local_154.name._256_4_ = local_154.name._256_4_ & 0xffffff00;
  local_8 = 1;
  uStack_7 = 0;
  uVar4 = FUN_10012c30(local_170,&DAT_101a7788,&param_3,local_14);
  local_8 = 2;
  FUN_10003b40(param_1,0,0xffffffff);
  puVar5 = (undefined4 *)FUN_10003910(uVar4,0,0xffffffff);
  if (0xf < (uint)puVar5[5]) {
    puVar5 = (undefined4 *)*puVar5;
  }
  _FindHandle = FUN_10175204(puVar5,&local_154);
  local_155 = _FindHandle != -1;
  _local_8 = CONCAT31(uStack_7,1);
  if (0xf < local_15c) {
    FUN_10003d70(local_170[0],local_15c + 1);
  }
  if (local_155 != '\0') {
    do {
      local_15c = 0xf;
      local_160 = 0;
      local_170[0] = local_170[0] & 0xffffff00;
      if (local_154.size._4_1_ == '\0') {
        iVar6 = 0;
      }
      else {
        pcVar7 = (char *)((int)&local_154.size + 4);
        do {
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        iVar6 = (int)pcVar7 - (int)((int)&local_154.size + 5);
      }
      FUN_10003c70((undefined1 *)((int)&local_154.size + 4),iVar6);
      puVar2 = (uint *)param_2[1];
      _local_8 = CONCAT31(uStack_7,3);
      if (local_170 < puVar2) {
        puVar9 = (uint *)*param_2;
        if (local_170 < puVar9) goto LAB_10014962;
        if (puVar2 == (uint *)param_2[2]) {
          FUN_1000f570(1);
        }
        puVar3 = (undefined4 *)param_2[1];
        puVar5 = (undefined4 *)(*param_2 + (((int)local_170 - (int)puVar9) / 0x18) * 0x18);
        if (puVar3 != (undefined4 *)0x0) {
          puVar3[5] = 0xf;
          puVar3[4] = 0;
          puVar8 = puVar3;
          if (0xf < (uint)puVar3[5]) {
            puVar8 = (undefined4 *)*puVar3;
          }
          *(undefined1 *)puVar8 = 0;
          if ((uint)puVar5[5] < 0x10) {
            if (puVar5[4] + 1 != 0) {
              FUN_1016b1e0(puVar3,puVar5,puVar5[4] + 1);
            }
          }
          else {
            *puVar3 = *puVar5;
            *puVar5 = 0;
          }
          puVar3[4] = puVar5[4];
          puVar3[5] = puVar5[5];
          puVar5[5] = 0xf;
          puVar5[4] = 0;
          if (0xf < (uint)puVar5[5]) {
            puVar5 = (undefined4 *)*puVar5;
          }
          *(undefined1 *)puVar5 = 0;
        }
      }
      else {
LAB_10014962:
        if (puVar2 == (uint *)param_2[2]) {
          FUN_1000f570(1);
        }
        puVar2 = (uint *)param_2[1];
        if (puVar2 != (uint *)0x0) {
          puVar2[5] = 0xf;
          puVar2[4] = 0;
          puVar9 = puVar2;
          if (0xf < puVar2[5]) {
            puVar9 = (uint *)*puVar2;
          }
          *(undefined1 *)puVar9 = 0;
          if (local_15c < 0x10) {
            if (local_160 + 1 != 0) {
              FUN_1016b1e0(puVar2,local_170,local_160 + 1);
            }
          }
          else {
            *puVar2 = local_170[0];
            local_170[0] = 0;
          }
          puVar2[4] = local_160;
          puVar2[5] = local_15c;
          local_15c = 0xf;
          local_160 = 0;
          local_170[0] = local_170[0] & 0xffffff00;
        }
      }
      param_2[1] = param_2[1] + 0x18;
      _local_8 = CONCAT31(uStack_7,1);
      if (0xf < local_15c) {
        FUN_10003d70(local_170[0],local_15c + 1);
      }
      iVar6 = FID_conflict___findnext64i32(_FindHandle,&local_154);
    } while (iVar6 == 0);
    FUN_101751de(_FindHandle);
  }
  if (0xf < local_18) {
    FUN_10003d70(local_154.name._256_4_,local_18 + 1);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_154.name._256_4_ = local_154.name._256_4_ & 0xffffff00;
  if (0xf < in_stack_00000020) {
    FUN_10003d70(param_3,in_stack_00000020 + 1);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

