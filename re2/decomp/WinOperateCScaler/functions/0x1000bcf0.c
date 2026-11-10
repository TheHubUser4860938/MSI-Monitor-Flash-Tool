// rea decompile_all
// name: FUN_1000bcf0
// address: 0x1000bcf0
// body: available
// range: 0x1000bcf0-0x1000c55e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void FUN_1000bcf0(uint *param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  uint *puVar3;
  wchar_t *******pppppppwVar4;
  int in_ECX;
  uint uVar5;
  int iVar6;
  int *piVar7;
  undefined4 in_stack_ffffff00;
  wchar_t *******local_64 [4];
  size_t local_54;
  uint local_50;
  undefined1 local_34 [24];
  undefined8 local_1c;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1019529f;
  local_10 = ExceptionList;
  local_14 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_10019660();
  local_8 = 0;
  FUN_10001e20();
  local_8._0_1_ = 1;
  local_1c = 0;
  uVar2 = FUN_100050f0();
  local_1c = CONCAT44(local_1c._4_4_,uVar2);
  uVar5 = *param_1;
  local_8._0_1_ = 2;
  uVar1 = (undefined1)local_8;
  local_8._0_1_ = 2;
  if (uVar5 != 0) {
    iVar6 = 0;
    do {
      iVar6 = iVar6 + 1;
      uVar5 = uVar5 & uVar5 - 1;
    } while (uVar5 != 0);
    if (iVar6 == 1) {
      FUN_10008170();
      uVar1 = (undefined1)local_8;
      if ((*param_1 != 0) && (*(int *)(in_ECX + 0x24) != 0)) {
        *(uint *)(in_ECX + 0x68) = param_1[0xa5];
        *(uint *)(in_ECX + 0x6c) = param_1[0xa6];
        uVar5 = param_1[3];
        if (uVar5 != 0) {
          if ((uVar5 == 1) || (uVar5 != 2)) {
            *(undefined4 *)(in_ECX + 0x38) = 0;
          }
          else {
            *(undefined4 *)(in_ECX + 0x38) = 1;
          }
          if (*(int *)(in_ECX + 0x38) == 1) {
            FUN_10001d90(param_1 + 0x40);
            iVar6 = FUN_100094d0();
            if (iVar6 == 0) goto LAB_1000c50b;
          }
        }
        if (param_1[1] == 0) {
          *(undefined4 *)(in_ECX + 0x28) = 0;
LAB_1000c0e6:
          piVar7 = (int *)(in_ECX + 0x24);
          if (param_1[2] == 0) {
            *(undefined4 *)(in_ECX + 0x30) = 0;
LAB_1000c16b:
            FUN_10001d90(param_1 + 10);
            uVar2 = 0x1000c184;
            iVar6 = FUN_10008a10();
            if (iVar6 == 0) goto LAB_1000c50b;
            FUN_10001d90(param_1 + 0x3a);
            iVar6 = FUN_10009970(uVar2);
            if (iVar6 == 0) goto LAB_1000c50b;
            *(uint *)(in_ECX + 0x5c) = param_1[0x96];
            iVar6 = FUN_1000c560();
            if (iVar6 == 0) goto LAB_1000c50b;
            iVar6 = FUN_10011ce0();
            uVar1 = (undefined1)local_8;
            if (iVar6 != 0) {
              *(uint *)(in_ECX + 0x60) = param_1[0x95];
              *(uint *)(in_ECX + 100) = param_1[0x94];
              if (*piVar7 == 5) {
                FUN_10001d90(param_1 + 0x9f);
                local_8._0_1_ = 4;
                FUN_10001d90(param_1 + 0x99);
                local_8._0_1_ = 2;
                iVar6 = FUN_1000b430(in_stack_ffffff00);
                if (iVar6 == 0) goto LAB_1000c50b;
              }
              if (((*piVar7 != 0x10) || (iVar6 = FUN_10008ca0(), iVar6 != 0)) &&
                 ((*piVar7 != 0x18 || (iVar6 = FUN_10009320(), iVar6 != 0)))) {
                GetModuleHandleW(L"WinOperateCScaler.dll");
                FUN_10018b20();
                local_8._0_1_ = 5;
                FUN_10019720();
                local_8._0_1_ = 2;
                FUN_100196a0();
                if (param_1[0x7a] == 0) {
                  FUN_10014a10();
                }
                else {
                  thunk_FUN_10019d70();
                  FUN_10001dc0();
                  local_8._0_1_ = 6;
                  FUN_10001d90(param_1 + 0x76);
                  local_8._0_1_ = 2;
                  FUN_10014b00(local_34);
                  FUN_10001e80();
                  FUN_10001e40();
                  FUN_1001baf0();
                  local_8._0_1_ = 7;
                  FUN_100198a0();
                  local_8._0_1_ = 2;
                  FUN_10006d90();
                  pppppppwVar4 = (wchar_t *******)local_64;
                  if (7 < local_50) {
                    pppppppwVar4 = local_64[0];
                  }
                  _wcsncpy((wchar_t *)(in_ECX + 0x4307c),(wchar_t *)pppppppwVar4,local_54);
                }
                if (param_1[0x80] != 0) {
                  thunk_FUN_10019d70();
                  FUN_10001dc0();
                  local_8._0_1_ = 8;
                  FUN_10001d90(param_1 + 0x7c);
                  local_8._0_1_ = 2;
                  FUN_10014b00(local_34);
                  FUN_10001e80();
                  FUN_10001e40();
                  FUN_1001baf0();
                  local_8._0_1_ = 9;
                  FUN_100198a0();
                  local_8._0_1_ = 2;
                  FUN_10006d90();
                  pppppppwVar4 = (wchar_t *******)local_64;
                  if (7 < local_50) {
                    pppppppwVar4 = local_64[0];
                  }
                  _wcsncpy((wchar_t *)(in_ECX + 0x43284),(wchar_t *)pppppppwVar4,local_54);
                }
                if (param_1[0x86] != 0) {
                  FUN_1001baf0();
                  local_8._0_1_ = 10;
                  FUN_100198a0();
                  local_8._0_1_ = 2;
                  FUN_10006d90();
                  pppppppwVar4 = (wchar_t *******)local_64;
                  if (7 < local_50) {
                    pppppppwVar4 = local_64[0];
                  }
                  _wcsncpy((wchar_t *)(in_ECX + 0x4348c),(wchar_t *)pppppppwVar4,local_54);
                }
                if (param_1[0x92] != 0) {
                  FUN_1001baf0();
                  local_8._0_1_ = 0xb;
                  FUN_100198a0();
                  FUN_10006d90();
                  pppppppwVar4 = (wchar_t *******)local_64;
                  if (7 < local_50) {
                    pppppppwVar4 = local_64[0];
                  }
                  _wcsncpy((wchar_t *)(in_ECX + 0x43694),(wchar_t *)pppppppwVar4,local_54);
                }
                *(uint *)(in_ECX + 0x44) = param_1[0xb3];
                *(uint *)(in_ECX + 0x48) = param_1[0xb4];
                *(uint *)(in_ECX + 0x4c) = param_1[0xb5];
                *(uint *)(in_ECX + 0x3c) = param_1[0xb6];
                *(uint *)(in_ECX + 0x50) = param_1[0xb7];
                *(undefined8 *)(in_ECX + 0x439b4) = *(undefined8 *)(param_1 + 0xb8);
                *(uint *)(in_ECX + 0x439bc) = param_1[0xba];
              }
              goto LAB_1000c50b;
            }
          }
          else {
            iVar6 = FUN_1000c930();
            uVar1 = (undefined1)local_8;
            if (iVar6 != 0) {
              FUN_10001d90();
              iVar6 = FUN_1000b770(param_1[2],in_ECX + 0x30);
              uVar1 = (undefined1)local_8;
              if (iVar6 != 0) {
                iVar6 = *(int *)(in_ECX + 0x30);
                if (iVar6 == 3) {
                  iVar6 = FUN_10009780();
                }
                uVar1 = (undefined1)local_8;
                if (iVar6 != 0) goto LAB_1000c16b;
              }
            }
          }
        }
        else {
          iVar6 = FUN_1000c930();
          uVar1 = (undefined1)local_8;
          if (iVar6 != 0) {
            FUN_10008c60();
            iVar6 = *(int *)(in_ECX + 0x28);
            *(int *)(in_ECX + 0x439c4) = iVar6;
            if (iVar6 == 1) {
              FUN_10001d90(param_1 + 0xa7);
              iVar6 = FUN_10008b70();
            }
            else {
              uVar1 = (undefined1)local_8;
              if (iVar6 != 2) goto LAB_1000c501;
              FUN_10001d90(param_1 + 0xa7);
              iVar6 = FUN_10008b70();
            }
            uVar1 = (undefined1)local_8;
            if ((iVar6 != 0) &&
               ((*(undefined4 *)(in_ECX + 0x2c) = *(undefined4 *)(in_ECX + 0x439c8),
                param_1[0x14] != 0 ||
                ((*(int *)(in_ECX + 0x439c4) == 2 && (*(int *)(in_ECX + 0x439cc) == 1)))))) {
              puVar3 = param_1 + 0xad;
              if (0xf < param_1[0xb2]) {
                puVar3 = (uint *)*puVar3;
              }
              _strncpy((char *)(in_ECX + 0x4389c),(char *)puVar3,0x104);
              puVar3 = param_1 + 0x10;
              if (0xf < param_1[0x15]) {
                puVar3 = (uint *)*puVar3;
              }
              _strncpy((char *)(in_ECX + 0x439d4),(char *)puVar3,0x104);
              puVar3 = param_1 + 0x16;
              if (0xf < param_1[0x1b]) {
                puVar3 = (uint *)*puVar3;
              }
              _strncpy((char *)(in_ECX + 0x43ad8),(char *)puVar3,0x104);
              puVar3 = param_1 + 0x1c;
              if (0xf < param_1[0x21]) {
                puVar3 = (uint *)*puVar3;
              }
              _strncpy((char *)(in_ECX + 0x43bdc),(char *)puVar3,0x104);
              puVar3 = param_1 + 0x22;
              if (0xf < param_1[0x27]) {
                puVar3 = (uint *)*puVar3;
              }
              _strncpy((char *)(in_ECX + 0x43ce0),(char *)puVar3,0x104);
              puVar3 = param_1 + 0x28;
              if (0xf < param_1[0x2d]) {
                puVar3 = (uint *)*puVar3;
              }
              _strncpy((char *)(in_ECX + 0x43de4),(char *)puVar3,0x104);
              puVar3 = param_1 + 0x2e;
              if (0xf < param_1[0x33]) {
                puVar3 = (uint *)*puVar3;
              }
              _strncpy((char *)(in_ECX + 0x43ee8),(char *)puVar3,0x104);
              puVar3 = param_1 + 0x34;
              if (0xf < param_1[0x39]) {
                puVar3 = (uint *)*puVar3;
              }
              _strncpy((char *)(in_ECX + 0x43fec),(char *)puVar3,0x104);
              iVar6 = *(int *)(in_ECX + 0x24);
              if (((((iVar6 == 1) || (iVar6 == 2)) || (iVar6 == 4)) ||
                  ((iVar6 == 5 || (iVar6 == 6)))) ||
                 ((iVar6 == 7 || (uVar1 = (undefined1)local_8, iVar6 == 0x11)))) {
                FUN_10008b10();
                local_8._0_1_ = 3;
                FUN_100035b0();
                if (*(int *)(in_ECX + 0x24) == 2) {
                  *(undefined4 *)(in_ECX + 0x439c0) = 1;
                  FUN_10003060();
                  FUN_10001e40();
                  goto LAB_1000c50b;
                }
                if (*(int *)(in_ECX + 0x24) == 1) {
                  *(undefined4 *)(in_ECX + 0x439c0) = 2;
                  FUN_10003060();
                  FUN_10001e40();
                  goto LAB_1000c50b;
                }
                if ((*(int *)(in_ECX + 0x439c4) != 2) &&
                   (*(undefined4 *)(in_ECX + 0x439c0) = 2, *(int *)(in_ECX + 0x6c) != 2)) {
                  if (*(int *)(in_ECX + 0x2c) == 4) {
                    FUN_10003370();
                  }
                  else {
                    iVar6 = FUN_10003060();
                    if (iVar6 == 0) {
                      FUN_10001e40();
                      goto LAB_1000c50b;
                    }
                  }
                }
                local_8._0_1_ = 2;
                FUN_10001e40();
                goto LAB_1000c0e6;
              }
            }
          }
        }
      }
    }
  }
LAB_1000c501:
  local_8._0_1_ = uVar1;
  FUN_10003e70();
LAB_1000c50b:
  local_8 = CONCAT31(local_8._1_3_,0xc);
  FUN_10005220();
  FID_conflict__free((void *)local_1c);
  FUN_10001e40();
  FUN_100196a0();
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

