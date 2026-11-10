// rea decompile_all
// name: FUN_10014cc0
// address: 0x10014cc0
// body: available
// range: 0x10014cc0-0x100150c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10014cc0(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined1 uVar2;
  uint uVar3;
  char *pcVar4;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  int *piVar9;
  undefined4 ****ppppuVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined4 *puVar13;
  uint uVar14;
  undefined4 local_7c [3];
  undefined1 local_70 [8];
  uint local_68;
  undefined4 *local_64;
  int *local_60;
  uint local_5c;
  uint local_58;
  uint local_54 [4];
  undefined4 local_44;
  uint local_40;
  undefined4 ***local_3c [4];
  undefined4 local_2c;
  uint local_28;
  undefined8 local_24;
  undefined4 *local_1c;
  undefined1 local_18 [4];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  undefined4 *puVar5;
  
  puStack_c = &LAB_101959a8;
  local_10 = ExceptionList;
  uVar3 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puVar13 = (undefined4 *)0x0;
  local_60 = param_1;
  local_64 = param_2;
  local_24 = 0;
  local_1c = (undefined4 *)0x0;
  local_8 = 0;
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = local_54[0] & 0xffffff00;
  local_14 = uVar3;
  FUN_10003b40(param_2,0,0xffffffff);
  local_8._0_1_ = 1;
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = (undefined4 ***)((uint)local_3c[0] & 0xffffff00);
  FUN_10003c70(&DAT_101a7764,2);
  local_8._0_1_ = 2;
  uVar2 = (undefined1)local_8;
  local_8._0_1_ = 2;
  uVar12 = 0;
  local_5c = 0;
  uVar14 = 0;
  if (local_64[4] != 0) {
    do {
      puVar5 = local_64;
      if (0xf < (uint)local_64[5]) {
        puVar5 = (undefined4 *)*local_64;
      }
      pcVar4 = (char *)((int)puVar5 + uVar12);
      uVar12 = uVar12 + 1;
      local_5c = uVar14 + 1;
      if (*pcVar4 != '\"') {
        local_5c = uVar14;
      }
      uVar14 = local_5c;
    } while (uVar12 < (uint)local_64[4]);
  }
  puVar5 = (undefined4 *)0x0;
  if ((local_5c & 1) == 0) {
    if (local_5c != 0) {
      local_18[0] = 0x22;
      uVar14 = 0;
      do {
        local_58 = FUN_100100b0(local_18,uVar14 + 1,1);
        local_5c = local_5c - 1;
        if ((local_5c & 1) == 0) {
          uVar2 = (undefined1)local_8;
          if (local_58 - uVar14 == 1) goto LAB_10015050;
          puVar6 = (undefined4 *)FUN_10011650(local_7c,uVar14,(local_58 - uVar14) + 1);
          local_8 = CONCAT31(local_8._1_3_,3);
          if ((puVar6 < puVar13) && (puVar5 <= puVar6)) {
            puVar7 = puVar5;
            if (puVar13 == local_1c) {
              FUN_1000f570(1);
              puVar7 = (undefined4 *)local_24;
              puVar13 = local_24._4_4_;
            }
            puVar6 = puVar7 + (((int)puVar6 - (int)puVar5) / 0x18) * 6;
            puVar5 = puVar7;
          }
          else if (puVar13 == local_1c) {
            FUN_1000f570(1);
            puVar5 = (undefined4 *)local_24;
            puVar13 = local_24._4_4_;
          }
          if (puVar13 != (undefined4 *)0x0) {
            puVar13[4] = 0;
            puVar13[5] = 0;
            puVar13[5] = 0xf;
            puVar13[4] = 0;
            puVar7 = puVar13;
            if (0xf < (uint)puVar13[5]) {
              puVar7 = (undefined4 *)*puVar13;
            }
            *(undefined1 *)puVar7 = 0;
            if ((uint)puVar6[5] < 0x10) {
              if (puVar6[4] + 1 != 0) {
                FUN_1016b1e0(puVar13,puVar6,puVar6[4] + 1);
              }
            }
            else {
              *puVar13 = *puVar6;
              *puVar6 = 0;
            }
            puVar13[4] = puVar6[4];
            puVar13[5] = puVar6[5];
            puVar6[5] = 0xf;
            puVar6[4] = 0;
            if (0xf < (uint)puVar6[5]) {
              puVar6 = (undefined4 *)*puVar6;
            }
            *(undefined1 *)puVar6 = 0;
          }
          puVar13 = puVar13 + 6;
          local_24 = CONCAT44(puVar13,(undefined4 *)local_24);
          local_8._0_1_ = 2;
          if (0xf < local_68) {
            FUN_10003d70(local_7c[0],local_68 + 1);
          }
        }
        uVar14 = local_58;
        uVar2 = (undefined1)local_8;
      } while (local_5c != 0);
    }
    local_8._0_1_ = uVar2;
    uVar14 = 0;
    local_58 = ((int)puVar13 - (int)puVar5) / 0x18;
    if (local_58 != 0) {
      puVar13 = puVar5 + 4;
      do {
        if ((uint)puVar13[1] < 0x10) {
          puVar6 = puVar13 + -4;
        }
        else {
          puVar6 = (undefined4 *)puVar13[-4];
        }
        iVar8 = FUN_100100b0(puVar6,0,*puVar13);
        if (iVar8 != -1) {
          FUN_10010b50(iVar8,*puVar13,local_3c,0,0xffffffff);
        }
        uVar14 = uVar14 + 1;
        puVar13 = puVar13 + 6;
      } while (uVar14 < local_58);
    }
    piVar9 = (int *)FUN_100151e0(local_70,local_54,&DAT_101a6eb4,0,uVar3);
    piVar1 = local_60;
    if (local_60 != piVar9) {
      FUN_10006df0();
      *piVar1 = *piVar9;
      piVar1[1] = piVar9[1];
      piVar1[2] = piVar9[2];
      *piVar9 = 0;
      piVar9[1] = 0;
      piVar9[2] = 0;
    }
    FUN_10006df0();
    uVar14 = 0;
    iVar8 = local_60[1] - *local_60 >> 0x1f;
    uVar2 = (undefined1)local_8;
    if ((local_60[1] - *local_60) / 0x18 + iVar8 != iVar8) {
      do {
        ppppuVar10 = local_3c;
        if (0xf < local_28) {
          ppppuVar10 = (undefined4 ****)local_3c[0];
        }
        local_58 = FUN_100100b0(ppppuVar10,0,local_2c);
        if (local_58 != 0xffffffff) {
          uVar11 = FUN_10011650(local_7c,1,puVar5[4] + -2);
          local_8._0_1_ = 4;
          FUN_10010b50(local_58,local_2c,uVar11,0,0xffffffff);
          local_8._0_1_ = 2;
          if (0xf < local_68) {
            FUN_10003d70(local_7c[0],local_68 + 1);
          }
          puVar5 = puVar5 + 6;
        }
        uVar14 = uVar14 + 1;
        uVar2 = (undefined1)local_8;
      } while (uVar14 < (uint)((local_60[1] - *local_60) / 0x18));
    }
  }
LAB_10015050:
  local_8._0_1_ = uVar2;
  if (0xf < local_28) {
    FUN_10003d70(local_3c[0],local_28 + 1);
  }
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = (undefined4 ***)((uint)local_3c[0] & 0xffffff00);
  if (0xf < local_40) {
    FUN_10003d70(local_54[0],local_40 + 1);
  }
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = local_54[0] & 0xffffff00;
  FUN_10006df0();
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

