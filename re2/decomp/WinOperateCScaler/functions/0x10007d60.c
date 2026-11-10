// rea decompile_all
// name: FUN_10007d60
// address: 0x10007d60
// body: available
// range: 0x10007d60-0x10008161 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10007e43 to 0x1015505c FUN_1015505c (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10007d60(undefined4 param_1,int *param_2,int *param_3,undefined4 ****param_4,
                 undefined4 param_5)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 ****ppppuVar4;
  undefined4 ****ppppuVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 ****ppppuVar9;
  uint uVar10;
  undefined4 local_68 [5];
  uint local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 ***local_48 [4];
  undefined4 local_38;
  uint local_34;
  undefined1 local_30 [4];
  undefined4 ***local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10194d52;
  local_10 = ExceptionList;
  uVar1 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_50 = param_1;
  local_4c = param_5;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (undefined4 ***)((uint)local_2c[0] & 0xffffff00);
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = (undefined4 ***)((uint)local_48[0] & 0xffffff00);
  local_8 = 1;
  local_14 = uVar1;
  if (*param_3 == 0) {
    if (local_2c != param_4) {
      FUN_10003b40(param_4,0,0xffffffff);
    }
    ppppuVar5 = (undefined4 ****)FUN_100055b0(local_68,param_5,param_4,uVar1);
    if (local_2c != ppppuVar5) {
      if (0xf < local_18) {
        FUN_10003d70(local_2c[0],local_18 + 1);
      }
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = (undefined4 ***)((uint)local_2c[0] & 0xffffff00);
      FUN_100035d0(ppppuVar5);
    }
    local_8 = CONCAT31(local_8._1_3_,1);
    if (0xf < local_54) {
      FUN_10003d70(local_68[0],local_54 + 1);
    }
    iVar3 = *param_2;
    if (iVar3 != param_2[1]) {
      do {
        ppppuVar5 = local_2c;
        if (0xf < local_18) {
          ppppuVar5 = (undefined4 ****)local_2c[0];
        }
        iVar6 = FUN_100100b0(ppppuVar5,0,local_1c);
        if (iVar6 != -1) {
          FUN_10010a60(iVar3);
        }
        iVar3 = iVar3 + 0x18;
      } while (iVar3 != param_2[1]);
    }
  }
  else if (*param_3 == 1) {
    if (local_2c != param_4) {
      FUN_10003b40(param_4,0,0xffffffff);
    }
    uVar2 = FUN_10010150(&DAT_101a6eb4,0,1);
    FUN_10003dc0(0,uVar2);
    iVar3 = FUN_100101e0(&DAT_101a6eb4,0xffffffff,1);
    uVar1 = iVar3 + 1;
    if (local_1c < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_1015505c("invalid string position");
    }
    local_1c = uVar1;
    ppppuVar5 = local_2c;
    if (0xf < local_18) {
      ppppuVar5 = (undefined4 ****)local_2c[0];
    }
    *(undefined1 *)((int)ppppuVar5 + uVar1) = 0;
    uVar8 = 0;
    uVar1 = local_18;
    ppppuVar5 = (undefined4 ****)local_2c[0];
    uVar10 = local_1c;
    if (local_1c != 0) {
      do {
        ppppuVar4 = local_2c;
        if (0xf < uVar1) {
          ppppuVar4 = ppppuVar5;
        }
        if (*(char *)((int)ppppuVar4 + uVar8) == ' ') {
          ppppuVar4 = local_2c;
          if (0xf < uVar1) {
            ppppuVar4 = ppppuVar5;
          }
          *(undefined1 *)((int)ppppuVar4 + uVar8) = 0x2e;
          uVar1 = local_18;
          ppppuVar5 = (undefined4 ****)local_2c[0];
          uVar10 = local_1c;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar10);
    }
    local_30[0] = 0x2e;
    iVar3 = FUN_100100b0(local_30,0,1);
    if (iVar3 != -1) {
      ppppuVar5 = local_2c;
      if (0xf < local_18) {
        ppppuVar5 = (undefined4 ****)local_2c[0];
      }
      ppppuVar4 = local_2c;
      if (0xf < local_18) {
        ppppuVar4 = (undefined4 ****)local_2c[0];
      }
      ppppuVar9 = local_2c;
      if (0xf < local_18) {
        ppppuVar9 = (undefined4 ****)local_2c[0];
      }
      ppppuVar5 = (undefined4 ****)
                  FUN_10011120(ppppuVar9,local_1c + (int)ppppuVar4,ppppuVar4,
                               (int)ppppuVar5 + iVar3 + 1);
      if (local_2c != ppppuVar5) {
        FUN_10003b40(ppppuVar5,0,0xffffffff);
      }
      ppppuVar5 = (undefined4 ****)FUN_100055b0(local_68,local_4c,local_2c);
      if (local_2c != ppppuVar5) {
        if (0xf < local_18) {
          FUN_10003d70(local_2c[0],local_18 + 1);
        }
        local_18 = 0xf;
        local_1c = 0;
        local_2c[0] = (undefined4 ***)((uint)local_2c[0] & 0xffffff00);
        FUN_100035d0(ppppuVar5);
      }
      local_8 = CONCAT31(local_8._1_3_,1);
      if (0xf < local_54) {
        FUN_10003d70(local_68[0],local_54 + 1);
      }
      ppppuVar5 = (undefined4 ****)FUN_10001c90(local_68,local_2c,&DAT_101a7568);
      if (local_48 != ppppuVar5) {
        if (0xf < local_34) {
          FUN_10003d70(local_48[0],local_34 + 1);
        }
        local_34 = 0xf;
        local_38 = 0;
        local_48[0] = (undefined4 ***)((uint)local_48[0] & 0xffffff00);
        FUN_100035d0(ppppuVar5);
      }
      local_8 = CONCAT31(local_8._1_3_,1);
      if (0xf < local_54) {
        FUN_10003d70(local_68[0],local_54 + 1);
      }
      iVar3 = *param_2;
      if (iVar3 != param_2[1]) {
        do {
          ppppuVar5 = local_2c;
          if (0xf < local_18) {
            ppppuVar5 = (undefined4 ****)local_2c[0];
          }
          iVar6 = FUN_100100b0(ppppuVar5,0,local_1c);
          if (iVar6 != -1) {
            ppppuVar5 = local_48;
            if (0xf < local_34) {
              ppppuVar5 = (undefined4 ****)local_48[0];
            }
            iVar7 = FUN_100100b0(ppppuVar5,0,local_38);
            if (iVar7 != -1) {
              ppppuVar5 = local_48;
              if (0xf < local_34) {
                ppppuVar5 = (undefined4 ****)local_48[0];
              }
              iVar7 = FUN_100100b0(ppppuVar5,0,local_38);
              if (iVar7 == iVar6) goto LAB_10008040;
            }
            FUN_10010a60(iVar3);
          }
LAB_10008040:
          iVar3 = iVar3 + 0x18;
        } while (iVar3 != param_2[1]);
      }
    }
  }
  else if (local_2c != param_4) {
    FUN_10003b40(param_4,0,0xffffffff);
  }
  if (0xf < local_34) {
    FUN_10003d70(local_48[0],local_34 + 1);
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = (undefined4 ***)((uint)local_48[0] & 0xffffff00);
  if (0xf < local_18) {
    FUN_10003d70(local_2c[0],local_18 + 1);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

