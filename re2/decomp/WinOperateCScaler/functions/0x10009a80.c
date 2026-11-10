// rea decompile_all
// name: FUN_10009a80
// address: 0x10009a80
// body: available
// range: 0x10009a80-0x10009f6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x10009ba0) */

void FUN_10009a80(undefined4 ****param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 local_130;
  undefined8 *puStack_12c;
  undefined8 *puStack_128;
  undefined4 ***pppuStack_124;
  char *local_120;
  char **local_11c;
  uint uStack_118;
  undefined4 local_108 [5];
  uint local_f4;
  undefined4 ***local_f0;
  undefined1 *local_e8;
  char local_e4 [16];
  undefined4 ***local_d4 [4];
  int local_c4;
  uint local_c0;
  undefined4 ***local_bc [4];
  int local_ac;
  uint local_a8;
  undefined4 ***local_a4 [4];
  int local_94;
  uint local_90;
  undefined1 local_8c [16];
  int local_7c;
  undefined4 local_78;
  undefined1 local_74 [16];
  undefined4 local_64;
  undefined4 local_60;
  int local_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int local_4c;
  undefined4 **local_48;
  char *local_44 [4];
  undefined4 local_34;
  uint local_30;
  undefined8 local_2c;
  undefined4 local_24;
  undefined8 local_20;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_10195019;
  local_10 = ExceptionList;
  uStack_118 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_f0 = param_1;
  local_2c = 0;
  local_24 = 0;
  puVar4 = (undefined8 *)0x0;
  local_20 = 0;
  local_18 = 0;
  local_e4[0] = '\0';
  local_e4[1] = '\0';
  local_e4[2] = '\0';
  local_e4[3] = '\0';
  local_e4[4] = '\0';
  local_e4[5] = '\0';
  local_e4[6] = '\0';
  local_e4[7] = '\0';
  local_e4[8] = '\0';
  local_e4[9] = '\0';
  local_e4[10] = '\0';
  local_e4[0xb] = '\0';
  local_e4[0xc] = '\0';
  local_e4[0xd] = '\0';
  local_e4[0xe] = '\0';
  local_e4[0xf] = '\0';
  local_c0 = 0xf;
  local_c4 = 0;
  local_d4[0] = (undefined4 ***)((uint)local_d4[0] & 0xffffff00);
  local_a8 = 0xf;
  local_ac = 0;
  local_bc[0] = (undefined4 ***)((uint)local_bc[0] & 0xffffff00);
  local_90 = 0xf;
  local_94 = 0;
  local_a4[0] = (undefined4 ***)((uint)local_a4[0] & 0xffffff00);
  local_78 = 0xf;
  local_7c = 0;
  local_8c[0] = 0;
  local_60 = 0xf;
  local_64 = 0;
  local_74[0] = 0;
  local_5c = 0;
  iStack_58 = 0;
  iStack_54 = 0;
  iStack_50 = 0;
  local_4c = 0;
  local_48 = (undefined4 ***)0x0;
  local_30 = 0xf;
  local_34 = 0;
  local_44[0] = (char *)((uint)local_44[0] & 0xffffff00);
  local_e8 = (undefined1 *)&local_130;
  local_8 = 3;
  uStack_7 = 0;
  local_11c = (char **)0xf;
  local_120 = (char *)0x0;
                    /* WARNING: Ignoring partial resolution of indirect */
  local_130._0_1_ = 0;
  local_14 = uStack_118;
  FUN_10003c70(&DAT_101a68f8,4);
  local_8 = 4;
  uVar1 = FUN_10008b10(local_108);
  local_8 = 6;
  FUN_100146d0(uVar1,&local_2c);
  _local_8 = CONCAT31(uStack_7,3);
  if (0xf < local_f4) {
    local_11c = (char **)(local_f4 + 1);
    local_120 = (char *)local_108[0];
    pppuStack_124 = (undefined4 ***)0x10009c02;
    FUN_10003d70();
  }
  local_120 = local_e4;
  local_11c = (char **)param_2;
  pppuStack_124 = (undefined4 ****)0x10009c15;
  iVar2 = FUN_10009f70();
  if (iVar2 == 0) {
    local_11c = (char **)0x101a6f34;
    local_120 = (char *)0x10009c23;
    FUN_10003e70();
    goto LAB_10009f0a;
  }
  if ((local_5c == 0) && (local_c4 != 0)) {
    iVar2 = (int)(undefined4 ****)local_2c;
    if ((undefined4 ****)local_2c != (undefined4 ****)local_2c._4_4_) {
      do {
        local_11c = (char **)local_c4;
        pppuStack_124 = local_d4;
        if (0xf < local_c0) {
          pppuStack_124 = local_d4[0];
        }
        local_120 = (char *)0x0;
        puStack_128 = (undefined8 *)0x10009c6f;
        iVar3 = FUN_100100b0();
        if (iVar3 != -1) {
          local_120 = (char *)0x10009c7d;
          local_11c = (char **)iVar2;
          FUN_10010a60();
        }
        iVar2 = iVar2 + 0x18;
      } while (iVar2 != local_2c._4_4_);
      if ((undefined4 ****)(undefined8 *)local_20 != local_20._4_4_) {
        local_11c = (char **)&local_20;
        local_120 = (char *)0x10009ca5;
        FUN_100077b0();
        local_11c = (char **)local_e8;
        puVar4 = (undefined8 *)local_20;
        local_120 = (char *)&local_20;
        pppuStack_124 = local_20._4_4_;
        puStack_128 = (undefined8 *)local_20;
        puStack_12c = (undefined8 *)0x10009cbb;
        FUN_10005770();
        local_20 = CONCAT44(puVar4,(undefined8 *)local_20);
        goto LAB_10009cc3;
      }
    }
    local_11c = (char **)0x101a6f50;
    local_120 = (char *)0x10009d37;
    FUN_10003e70();
    goto LAB_10009f0a;
  }
LAB_10009cc3:
  if ((iStack_58 == 0) && (local_ac != 0)) {
    iVar2 = (int)(undefined4 ****)local_2c;
    puVar5 = puVar4;
    if ((undefined4 ****)local_2c != (undefined4 ****)local_2c._4_4_) {
      do {
        local_11c = (char **)local_ac;
        pppuStack_124 = local_bc;
        if (0xf < local_a8) {
          pppuStack_124 = local_bc[0];
        }
        local_120 = (char *)0x0;
        puStack_128 = (undefined8 *)0x10009d0f;
        iVar3 = FUN_100100b0();
        if (iVar3 != -1) {
          local_120 = (char *)0x10009d1d;
          local_11c = (char **)iVar2;
          FUN_10010a60();
        }
        iVar2 = iVar2 + 0x18;
      } while (iVar2 != local_2c._4_4_);
      puVar4 = (undefined8 *)local_20._4_4_;
      puVar5 = (undefined8 *)local_20;
    }
    if (puVar5 == puVar4) {
      local_11c = (char **)0x101a6f80;
      local_120 = (char *)0x10009d53;
      FUN_10003e70();
      goto LAB_10009f0a;
    }
    local_11c = (char **)&local_20;
    local_120 = (char *)0x10009d67;
    FUN_100077b0();
    local_11c = (char **)local_e8;
    puVar4 = (undefined8 *)local_20;
    local_120 = (char *)&local_20;
    pppuStack_124 = local_20._4_4_;
    puStack_128 = (undefined8 *)local_20;
    puStack_12c = (undefined8 *)0x10009d7d;
    FUN_10005770();
    local_20 = CONCAT44(puVar4,(undefined8 *)local_20);
  }
  if ((iStack_54 == 0) && (local_94 != 0)) {
    iVar2 = (int)(undefined4 ****)local_2c;
    puVar5 = puVar4;
    if ((undefined4 ****)local_2c != (undefined4 ****)local_2c._4_4_) {
      do {
        local_11c = (char **)local_94;
        pppuStack_124 = local_a4;
        if (0xf < local_90) {
          pppuStack_124 = local_a4[0];
        }
        local_120 = (char *)0x0;
        puStack_128 = (undefined8 *)0x10009dcf;
        iVar3 = FUN_100100b0();
        if (iVar3 != -1) {
          local_120 = (char *)0x10009ddd;
          local_11c = (char **)iVar2;
          FUN_10010a60();
        }
        iVar2 = iVar2 + 0x18;
      } while (iVar2 != local_2c._4_4_);
      puVar4 = (undefined8 *)local_20._4_4_;
      puVar5 = (undefined8 *)local_20;
    }
    if (puVar5 == puVar4) {
      local_11c = (char **)0x101a6fb4;
      local_120 = (char *)0x10009e01;
      FUN_10003e70();
      goto LAB_10009f0a;
    }
    local_11c = (char **)&local_20;
    local_120 = (char *)0x10009e15;
    FUN_100077b0();
    local_11c = (char **)local_e8;
    puVar4 = (undefined8 *)local_20;
    local_120 = (char *)&local_20;
    pppuStack_124 = local_20._4_4_;
    puStack_128 = (undefined8 *)local_20;
    puStack_12c = (undefined8 *)0x10009e2b;
    FUN_10005770();
    local_20 = CONCAT44(puVar4,(undefined8 *)local_20);
  }
  if ((iStack_50 == 0) && (local_7c != 0)) {
    if (local_4c == 0) {
      local_11c = (char **)0xffffffff;
      local_120 = (char *)0x0;
      pppuStack_124 = (undefined4 ***)local_74;
      puStack_128 = (undefined8 *)0x10009e57;
      FUN_10003b40();
    }
    local_11c = local_44;
    local_120 = local_8c;
    pppuStack_124 = &local_48;
    puStack_128 = &local_2c;
    puStack_12c = &local_20;
    local_130 = 0x10009e79;
    iVar2 = FUN_10007d60();
    if (iVar2 != 0) {
      if ((undefined4 ****)(undefined8 *)local_20 != local_20._4_4_) {
        local_11c = (char **)&local_20;
        local_120 = (char *)0x10009ea0;
        FUN_100077b0();
        local_11c = (char **)local_e8;
        puVar4 = (undefined8 *)local_20;
        local_120 = (char *)&local_20;
        pppuStack_124 = local_20._4_4_;
        puStack_128 = (undefined8 *)local_20;
        puStack_12c = (undefined8 *)0x10009eb6;
        FUN_10005770();
        local_20 = CONCAT44(puVar4,(undefined8 *)local_20);
        goto LAB_10009ebc;
      }
    }
    local_11c = (char **)0x101a6fe8;
    local_120 = (char *)0x10009e8f;
    FUN_10003e70();
  }
  else {
LAB_10009ebc:
    if ((local_2c._4_4_ - (int)(undefined4 ****)local_2c) - 0x18U < 0x18) {
      if ((undefined4 ****)local_f0 != (undefined4 ****)local_2c) {
        local_11c = (char **)0xffffffff;
        local_120 = (char *)0x0;
        pppuStack_124 = (undefined4 ****)local_2c;
        puStack_128 = (undefined8 *)0x10009ee2;
        FUN_10003b40();
      }
    }
    else {
      local_11c = (char **)((local_2c._4_4_ - (int)(undefined4 ****)local_2c) / 0x18);
      local_120 = "%d bin file find user userdefined info!\n";
      pppuStack_124 = (undefined4 ****)0x10009f05;
      FUN_10003e70();
    }
  }
LAB_10009f0a:
  if (0xf < local_30) {
    local_11c = (char **)(local_30 + 1);
    local_120 = local_44[0];
    pppuStack_124 = (undefined4 ****)0x10009f1f;
    FUN_10003d70();
  }
  local_30 = 0xf;
  local_34 = 0;
  local_44[0] = (char *)((uint)local_44[0] & 0xffffff00);
  local_11c = (char **)0x10009f3c;
  FUN_10006f00();
  local_11c = (char **)0x10009f44;
  FUN_10006df0();
  local_11c = (char **)0x10009f4c;
  FUN_10006df0();
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

