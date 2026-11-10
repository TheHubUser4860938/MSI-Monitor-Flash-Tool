// rea decompile_all
// name: FUN_100047b0
// address: 0x100047b0
// body: available
// range: 0x100047b0-0x10005027 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_100047b0(uint *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                 int param_5)

{
  uint uVar1;
  uint *puVar2;
  undefined4 uVar3;
  HMODULE pHVar4;
  int iVar5;
  uint *puVar6;
  undefined4 ****ppppuVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  undefined1 auStack_43fec [276892];
  undefined1 local_650 [52];
  int local_61c;
  uint *local_618;
  undefined4 *local_614;
  undefined1 local_5a8 [52];
  undefined4 ***local_574 [4];
  int local_564;
  uint local_560;
  undefined1 local_55c [84];
  uint local_508 [4];
  undefined4 local_4f8;
  uint local_4f4;
  undefined4 local_4f0;
  undefined4 uStack_4ec;
  undefined4 uStack_4e8;
  undefined4 uStack_4e4;
  undefined8 local_4e0;
  undefined1 local_4d8 [1220];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101949b4;
  local_10 = ExceptionList;
  local_14 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_618 = param_1;
  local_614 = param_2;
  local_61c = param_5;
  local_4e0 = 0;
  uVar3 = FUN_100050f0(local_14);
  local_4e0 = CONCAT44(local_4e0._4_4_,uVar3);
  local_8 = 0;
  _memset(local_55c,0,0x54);
  FUN_10003ea0();
  local_4f4 = 0xf;
  local_4f8 = 0;
  local_508[0] = local_508[0] & 0xffffff00;
  local_8._0_1_ = 2;
  local_4f0 = 0;
  uStack_4ec = 0;
  uStack_4e8 = 0;
  uStack_4e4 = 0;
  FUN_1001bec0();
  local_8._0_1_ = 3;
  FUN_10019660();
  local_8._0_1_ = 4;
  FUN_10019660();
  local_8._0_1_ = 5;
  FUN_10019660();
  local_8._0_1_ = 6;
  pHVar4 = GetModuleHandleW(L"WinOperateCScaler.dll");
  uVar3 = FUN_10018b20(local_650,pHVar4);
  local_8._0_1_ = 7;
  FUN_10019720(uVar3);
  local_8._0_1_ = 6;
  FUN_100196a0();
  uVar3 = FUN_10019920(local_650,local_5a8,param_3);
  local_8._0_1_ = 8;
  FUN_10019720(uVar3);
  local_8._0_1_ = 6;
  FUN_100196a0();
  uVar3 = FUN_10019920(local_650,local_5a8,param_4);
  local_8._0_1_ = 9;
  FUN_10019720(uVar3);
  local_8._0_1_ = 6;
  FUN_100196a0();
  puVar2 = local_618;
  if (*local_618 == 1) {
    FUN_10019590(local_5a8);
    iVar5 = FUN_10005030(&local_4f0);
    if (iVar5 == 0) {
      FUN_1001bf70(local_614,0);
    }
    goto LAB_10004f6b;
  }
  if (*local_618 == 2) {
    FUN_10019590(local_5a8);
    iVar5 = FUN_10005030(&local_4f0);
    if (iVar5 == 0) {
      FUN_1001bf40(local_614);
    }
    goto LAB_10004f6b;
  }
  uVar3 = FUN_10019e50();
  iVar5 = FUN_10004200(uVar3);
  if (iVar5 == 0) goto LAB_10004f6b;
  FUN_10004170(local_61c);
  FUN_100041b0(DAT_102073f0,DAT_102073f4,DAT_102073f8);
  if ((puVar2[0x12] == 1) && (puVar2[1] == 1)) {
    FUN_10019590(local_5a8);
    iVar5 = FUN_10005030(&local_4f0);
    if (iVar5 != 0) goto LAB_10004f6b;
    if (local_614[2] == 4) {
      _memset(local_4d8,0,0x4c4);
      local_618 = (uint *)FUN_1001cfa0(0x4399c);
      if ((local_618 == (uint *)0x0) ||
         (puVar6 = (uint *)FUN_100043a0(), local_618 = puVar6, puVar6 == (uint *)0x0))
      goto LAB_10004f6b;
      FUN_1016bba0(puVar6,puVar2,0x4399c);
      FUN_10011c30();
      FUN_10003e70("Get Key From Flash ...\n");
      iVar5 = FUN_10003f80(puVar6,local_4d8);
      FUN_101539e9(local_618,0x4399c);
      if (iVar5 != 0) goto LAB_10004f6b;
      puVar8 = local_4d8;
    }
    else {
      puVar8 = (undefined1 *)0x0;
    }
    iVar5 = FUN_1001bf70(local_614,puVar8);
    if (iVar5 != 0) goto LAB_10004f6b;
    if (((puVar2[7] == 6) && (DAT_102073f8 != (code *)0x0)) && (local_61c != 0)) {
      local_61c = (*DAT_102073f8)();
      if (local_61c == 0) goto LAB_10004f6b;
      FUN_10004170(local_61c);
    }
  }
  if ((puVar2[0x11] == 1) && (puVar2[0x12] == 2)) {
    FUN_10001dc0(puVar2 + 0x10e1e);
    local_8._0_1_ = 10;
    if (local_564 != 0) {
      local_618 = (uint *)FUN_1001cfa0(0x440f0);
      local_8._0_1_ = 0xb;
      if (local_618 == (uint *)0x0) {
        local_618 = (uint *)0x0;
      }
      else {
        _memset(local_618,0,0x440f0);
        local_618 = (uint *)FUN_100062b0();
      }
      puVar6 = local_618;
      local_8._0_1_ = 10;
      local_614 = (undefined4 *)FUN_1001cfa0(0x4399c);
      if (local_614 == (undefined4 *)0x0) {
        local_614 = (undefined4 *)0x0;
      }
      else {
        local_614 = (undefined4 *)FUN_100043a0();
      }
      if ((puVar6 != (uint *)0x0) && (local_614 != (undefined4 *)0x0)) {
        uVar3 = thunk_FUN_10019d70();
        FUN_10004720(uVar3);
        *local_614 = 4;
        FUN_1000e690(local_614);
        if (puVar6 != local_508) {
          FUN_10003b40(local_508,0,0xffffffff);
        }
        ppppuVar7 = local_574;
        if (0xf < local_560) {
          ppppuVar7 = (undefined4 ****)local_574[0];
        }
        FUN_1000b960(0,ppppuVar7);
        FUN_1000c560(&local_4e0);
        uVar9 = 0x4399c;
        uVar3 = FUN_100094b0(auStack_43fec);
        FUN_1016bba0(local_614,uVar3,uVar9);
        iVar5 = FUN_10011ce0(local_614 + 0x15,&local_4e0);
        if (iVar5 == 0) {
          FUN_101539e9(local_614,0x4399c);
          FUN_10006e50();
          FUN_101539e9(puVar6,0x440f0);
          FUN_10001e40();
          goto LAB_10004f6b;
        }
        iVar5 = FUN_100040f0(local_614);
        FUN_101539e9(local_614,0x4399c);
        FUN_10006e50();
        FUN_101539e9(local_618,0x440f0);
        if (iVar5 == 0) {
          if (((puVar2[7] == 6) && (DAT_102073f8 != (code *)0x0)) && (local_61c != 0)) {
            iVar5 = (*DAT_102073f8)();
            if (iVar5 == 0) {
              FUN_10001e40();
              goto LAB_10004f6b;
            }
            FUN_10004170(iVar5);
          }
          goto LAB_10004dd9;
        }
      }
      FUN_10001e40();
      goto LAB_10004f6b;
    }
LAB_10004dd9:
    local_8._0_1_ = 6;
    FUN_10001e40();
  }
  uVar1 = *puVar2;
  if (((((uVar1 == 4) || (uVar1 == 5)) || ((uVar1 == 6 || ((uVar1 == 7 || (uVar1 == 0x11)))))) ||
      (uVar1 == 0x1a)) || (uVar1 == 0x1b)) {
    FUN_100040f0(puVar2);
  }
  else if (uVar1 == 8) {
    FUN_10004110(puVar2);
  }
  else if (uVar1 == 0x12) {
    FUN_10003f60(puVar2);
  }
  else if (uVar1 == 0x10) {
    FUN_10003f20(puVar2);
  }
  else if (uVar1 == 0x13) {
    FUN_10004000(puVar2);
  }
  else if (uVar1 == 3) {
    FUN_10003f00(puVar2);
  }
  else if (uVar1 == 0x14) {
    FUN_100040d0(puVar2);
  }
  else if (uVar1 == 0x15) {
    FUN_10003f40(puVar2);
  }
  else if (uVar1 == 0xf) {
    FUN_10004130(puVar2);
  }
  else if (uVar1 == 0x16) {
    if (puVar2[5] == 1) {
      FUN_10004190(puVar2);
    }
    else if (puVar2[5] == 0) {
      FUN_10003fb0(puVar2,0);
    }
  }
  else if (uVar1 == 0x17) {
    FUN_10004150(puVar2);
  }
  else if (uVar1 == 0x18) {
    FUN_10004020(puVar2);
  }
  else if (uVar1 == 0x19) {
    FUN_10003fe0(puVar2);
  }
  FUN_100041d0();
LAB_10004f6b:
  FUN_100196a0();
  FUN_100196a0();
  FUN_100196a0();
  FUN_1001bee0();
  if (0xf < local_4f4) {
    FUN_10003d70(local_508[0],local_4f4 + 1);
  }
  local_4f4 = 0xf;
  local_4f8 = 0;
  local_508[0] = local_508[0] & 0xffffff00;
  FUN_10003ec0();
  local_8 = 0xc;
  FUN_10005220(&local_618,*(undefined4 *)local_4e0,(undefined4 *)local_4e0);
  FID_conflict__free((undefined4 *)local_4e0);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

