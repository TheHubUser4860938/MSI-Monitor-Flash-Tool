// rea decompile_all
// name: FUN_10009f70
// address: 0x10009f70
// body: available
// range: 0x10009f70-0x1000b1b1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x1000aa3e) */
/* WARNING: Removing unreachable block (ram,0x1000a7e3) */
/* WARNING: Removing unreachable block (ram,0x1000acae) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10009f70(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  char cVar2;
  wchar_t wVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined4 *puVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  undefined4 *******pppppppuVar10;
  int iVar11;
  wchar_t *pwVar12;
  uint local_508;
  undefined1 local_4f8 [4];
  undefined4 local_4f4;
  uint local_4f0;
  int local_4ec;
  int iStack_4e8;
  undefined4 local_4e4;
  char *local_4e0;
  undefined1 local_4d5;
  undefined4 *******local_468 [5];
  uint local_454;
  int local_438;
  undefined4 *******local_434 [4];
  int local_424;
  uint local_420;
  undefined1 local_41c [520];
  wchar_t local_214 [64];
  undefined4 local_194;
  wchar_t awStack_190 [68];
  undefined8 local_108;
  undefined2 local_100;
  wchar_t local_fc [36];
  undefined8 local_b4;
  undefined2 local_ac;
  wchar_t local_a8 [8];
  undefined8 local_98;
  undefined2 local_90;
  wchar_t local_8c [8];
  undefined8 local_7c;
  wchar_t local_74 [4];
  wchar_t local_6c [20];
  undefined8 local_44;
  wchar_t local_3c [4];
  wchar_t local_34 [16];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101950a8;
  local_10 = ExceptionList;
  local_14 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_10019660();
  local_8 = 0;
  FUN_10019660();
  local_8._0_1_ = 1;
  FUN_10019660();
  builtin_wcsncpy(local_6c,L"IspUserDefined.txt",0x13);
  local_3c[0] = L'm';
  local_3c[1] = L'e';
  local_3c[2] = 0;
  builtin_wcsncpy(local_34,L"UserDefinedInfo",0x10);
  builtin_wcsncpy(local_fc + 0x12,L"ModelName",10);
  builtin_wcsncpy(local_fc + 8,L"PanelName",10);
  local_44 = 0x61004e00490053;
  local_74[0] = L'f';
  local_74[1] = L'o';
  local_74[2] = 0;
  local_90 = 0;
  builtin_wcsncpy(awStack_190 + 0x22,L"RecordVersionMode",0x12);
  builtin_wcsncpy(local_fc,L"Version",8);
  builtin_wcsncpy(awStack_190 + 0x10,L"FindBinUseVerMode",0x12);
  builtin_wcsncpy(local_8c,L"Capabili",8);
  local_ac = 0;
  local_7c = 0x6e004900790074;
  builtin_wcsncpy(local_a8,L"RecordSI",8);
  local_98 = 0x650064006f004d;
  builtin_wcsncpy(local_214 + 0x30,L"RecordModelMode",0x10);
  builtin_wcsncpy(local_214 + 0x20,L"RecordPanelMode",0x10);
  builtin_wcsncpy(local_fc + 0x1c,L"IgnoreSI",8);
  local_b4 = 0x65006d0061004e;
  builtin_wcsncpy(awStack_190,L"noreVersionName",0x10);
  builtin_wcsncpy(local_214 + 0x10,L"IgnoreModelName",0x10);
  local_100 = 0;
  builtin_wcsncpy(local_214,L"IgnorePanelName",0x10);
  local_194._0_2_ = L'I';
  local_194._2_2_ = L'g';
  builtin_wcsncpy(awStack_190 + 0x34,L"IgnoreCapability",0x10);
  local_108 = 0x6f0066006e0049;
  _memset(local_41c,0,0x208);
  local_4ec = 0;
  iStack_4e8 = 0;
  local_4e4 = 0;
  local_420 = 0xf;
  local_424 = 0;
  local_434[0] = (undefined4 *******)((uint)local_434[0] & 0xffffff00);
  local_8._0_1_ = 4;
  uVar4 = (undefined1)local_8;
  local_8._0_1_ = 4;
  if (param_2[4] == 0) {
    FUN_10008b10();
    local_8._0_1_ = 5;
    FUN_1001baf0();
    local_8 = CONCAT31(local_8._1_3_,6);
    FUN_100198a0();
    if (7 < local_4f0) {
      FUN_1000fd20();
    }
    local_4f0 = 7;
    local_4f4 = 0;
    local_8 = CONCAT31(local_8._1_3_,4);
    if (0xf < local_508) {
      FUN_10003d70();
    }
  }
  else {
    piVar1 = param_2 + 4;
    puVar6 = param_2;
    if (0xf < (uint)param_2[5]) {
      puVar6 = (undefined4 *)*param_2;
    }
    uVar5 = uVar4;
    if (*(char *)((int)puVar6 + *piVar1 + -1) != '\\') {
      if (0xf < (uint)param_2[5]) {
        param_2 = (undefined4 *)*param_2;
      }
      uVar5 = (undefined1)local_8;
      if (*(char *)(*piVar1 + -1 + (int)param_2) != '/') {
        local_8._0_1_ = uVar4;
        FUN_1000f7d0();
        uVar5 = (undefined1)local_8;
      }
    }
    local_8._0_1_ = uVar5;
    FUN_1001baf0();
    local_8._0_1_ = 7;
    FUN_100198a0();
    local_8 = CONCAT31(local_8._1_3_,4);
    if (7 < local_508) {
      FUN_1000fd20();
    }
  }
  if (local_6c[0] != L'\0') {
    pwVar12 = local_6c;
    do {
      wVar3 = *pwVar12;
      pwVar12 = pwVar12 + 1;
    } while (wVar3 != L'\0');
  }
  FUN_1000f990();
  local_438 = FUN_10013c30();
  if (local_438 < 3) {
    *param_1 = local_438;
  }
  else {
    FUN_10003e70();
  }
  local_438 = FUN_10013c30();
  if (local_438 < 3) {
    param_1[1] = local_438;
  }
  else {
    FUN_10003e70();
  }
  local_438 = FUN_10013c30();
  if (local_438 < 3) {
    param_1[2] = local_438;
  }
  else {
    FUN_10003e70();
  }
  local_438 = FUN_10013c30();
  if (local_438 < 3) {
    param_1[3] = local_438;
    local_438 = FUN_10013c30();
    if (local_438 < 2) {
      param_1[0x27] = local_438;
      iVar7 = FUN_10013c30();
      param_1[0x22] = iVar7;
      iVar7 = FUN_10013c30(local_34);
      param_1[0x23] = iVar7;
      pppppppuVar10 = local_468;
      if (7 < local_454) {
        pppppppuVar10 = local_468[0];
      }
      iVar7 = FUN_10013c30(local_34,local_214,0,pppppppuVar10);
      param_1[0x24] = iVar7;
      pppppppuVar10 = local_468;
      if (7 < local_454) {
        pppppppuVar10 = local_468[0];
      }
      iVar7 = FUN_10013c30(local_34,&local_194,0,pppppppuVar10);
      param_1[0x25] = iVar7;
      iVar7 = FUN_10013c30();
      param_1[0x26] = iVar7;
      if ((((param_1[0x22] == 0) || (param_1[0x23] == 0)) || (param_1[0x24] == 0)) ||
         (param_1[0x25] == 0)) {
        FUN_10013ca0();
        FUN_100198c0();
        pcVar8 = (char *)thunk_FUN_10019d70();
        cVar2 = *pcVar8;
        while (cVar2 != '\0') {
          cVar2 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        }
        FUN_10003c70();
        if (local_424 != 0) {
          if (*param_1 == 0) {
            local_4d5 = 0x20;
            FUN_10005d50();
            FUN_10010020();
          }
          else {
            FUN_10005770();
            iStack_4e8 = 0;
            FUN_100151e0(local_4f8);
            FUN_10007770();
            FUN_10006df0();
            iVar7 = iStack_4e8;
            pppppppuVar10 = local_434;
            if (0xf < local_420) {
              pppppppuVar10 = local_434[0];
            }
            local_424 = 0;
            *(undefined1 *)pppppppuVar10 = 0;
            for (iVar11 = local_4ec; iVar11 != iVar7; iVar11 = iVar11 + 0x18) {
                    /* WARNING: Ignoring partial resolution of indirect */
              FUN_10003b40(iVar11,0,0xffffffff);
              iVar9 = FUN_10015430();
              if (iVar9 == 0) goto LAB_1000b12d;
              FUN_10019cd0();
              pcVar8 = (char *)thunk_FUN_10019d70();
              if (*pcVar8 != '\0') {
                local_4e0 = pcVar8 + 1;
                do {
                  cVar2 = *pcVar8;
                  pcVar8 = pcVar8 + 1;
                } while (cVar2 != '\0');
              }
              FUN_10003a10();
            }
          }
          if ((undefined4 ********)(param_1 + 4) != local_434) {
            FUN_10003b40();
          }
          _memset(local_41c,0,0x208);
        }
        FUN_10013ca0();
        FUN_100198c0();
        pcVar8 = (char *)thunk_FUN_10019d70();
        cVar2 = *pcVar8;
        while (cVar2 != '\0') {
          cVar2 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        }
        FUN_10003c70();
        if (local_424 != 0) {
          if (param_1[1] == 0) {
            local_4d5 = 0x20;
            FUN_10005d50();
            FUN_10003dc0();
          }
          else {
            FUN_100151e0();
            FUN_10007770();
            FUN_10006df0();
            iVar7 = iStack_4e8;
            pppppppuVar10 = local_434;
            if (0xf < local_420) {
              pppppppuVar10 = local_434[0];
            }
            local_424 = 0;
            *(undefined1 *)pppppppuVar10 = 0;
            for (iVar11 = local_4ec; iVar11 != iVar7; iVar11 = iVar11 + 0x18) {
                    /* WARNING: Ignoring partial resolution of indirect */
              FUN_10003b40(iVar11,0,0xffffffff);
              iVar9 = FUN_10015430();
              if (iVar9 == 0) goto LAB_1000b12d;
              FUN_10019cd0();
              pcVar8 = (char *)thunk_FUN_10019d70();
              if (*pcVar8 != '\0') {
                local_4e0 = pcVar8 + 1;
                do {
                  cVar2 = *pcVar8;
                  pcVar8 = pcVar8 + 1;
                } while (cVar2 != '\0');
              }
              FUN_10003a10();
            }
          }
          if ((undefined4 ********)(param_1 + 10) != local_434) {
            FUN_10003b40();
          }
          _memset(local_41c,0,0x208);
        }
        FUN_10013ca0();
        FUN_100198c0();
        pcVar8 = (char *)thunk_FUN_10019d70();
        cVar2 = *pcVar8;
        while (cVar2 != '\0') {
          cVar2 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        }
        FUN_10003c70();
        iVar7 = local_4ec;
        if (local_424 != 0) {
          if (param_1[2] == 0) {
            local_4d5 = 0x20;
            FUN_10005d50();
            FUN_10010020();
          }
          else {
            FUN_10005770();
            iStack_4e8 = iVar7;
            FUN_100151e0(local_4f8);
            FUN_10007770();
            FUN_10006df0();
            iVar7 = iStack_4e8;
            pppppppuVar10 = local_434;
            if (0xf < local_420) {
              pppppppuVar10 = local_434[0];
            }
            local_424 = 0;
            *(undefined1 *)pppppppuVar10 = 0;
            for (iVar11 = local_4ec; iVar11 != iVar7; iVar11 = iVar11 + 0x18) {
                    /* WARNING: Ignoring partial resolution of indirect */
              FUN_10003b40(iVar11,0,0xffffffff);
              iVar9 = FUN_10015430();
              if (iVar9 == 0) goto LAB_1000b12d;
              FUN_10019cd0();
              pcVar8 = (char *)thunk_FUN_10019d70();
              if (*pcVar8 != '\0') {
                local_4e0 = pcVar8 + 1;
                do {
                  cVar2 = *pcVar8;
                  pcVar8 = pcVar8 + 1;
                } while (cVar2 != '\0');
              }
              FUN_10003a10();
            }
          }
          if ((undefined4 ********)(param_1 + 0x10) != local_434) {
            FUN_10003b40();
          }
          _memset(local_41c,0,0x208);
        }
        FUN_10013ca0();
        FUN_100198c0();
        pcVar8 = (char *)thunk_FUN_10019d70();
        cVar2 = *pcVar8;
        while (cVar2 != '\0') {
          cVar2 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        }
        FUN_10003c70();
        iVar7 = local_4ec;
        if (local_424 != 0) {
          if (param_1[3] == 0) {
            local_4d5 = 0x20;
            FUN_10005d50();
            FUN_10003dc0();
          }
          else {
            FUN_10005770();
            iStack_4e8 = iVar7;
            FUN_100151e0(local_4f8);
            FUN_10007770();
            FUN_10006df0();
            pppppppuVar10 = local_434;
            if (0xf < local_420) {
              pppppppuVar10 = local_434[0];
            }
            local_424 = 0;
            *(undefined1 *)pppppppuVar10 = 0;
            iVar7 = local_4ec;
            if (local_4ec != iStack_4e8) {
              do {
                FUN_10003b40(iVar7,0,0xffffffff);
                iVar11 = FUN_10015430();
                if (iVar11 == 0) goto LAB_1000b12d;
                FUN_10019cd0();
                pcVar8 = (char *)thunk_FUN_10019d70();
                cVar2 = *pcVar8;
                while (cVar2 != '\0') {
                  cVar2 = *pcVar8;
                  pcVar8 = pcVar8 + 1;
                }
                FUN_10003a10();
                iVar7 = iVar7 + 0x18;
              } while (iVar7 != iStack_4e8);
            }
          }
          if ((undefined4 ********)(param_1 + 0x16) != local_434) {
            FUN_10003b40();
          }
          _memset(local_41c,0,0x208);
        }
        FUN_10013ca0();
        FUN_100198c0();
        pcVar8 = (char *)thunk_FUN_10019d70();
        cVar2 = *pcVar8;
        while (cVar2 != '\0') {
          cVar2 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        }
        FUN_10003c70();
        if (local_424 != 0) {
          local_4d5 = 0x20;
          FUN_10005d50();
          FUN_10003dc0();
          FUN_10001e80();
          _memset(local_41c,0,0x208);
        }
        goto LAB_1000b12d;
      }
    }
  }
  FUN_10003e70();
LAB_1000b12d:
  if (0xf < local_420) {
    FUN_10003d70();
  }
  local_420 = 0xf;
  local_424 = 0;
  local_434[0] = (undefined4 *******)((uint)local_434[0] & 0xffffff00);
  FUN_10006df0();
  FUN_100196a0();
  FUN_100196a0();
  FUN_100196a0();
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

