// rea decompile_all
// name: FUN_10012400
// address: 0x10012400
// body: available
// range: 0x10012400-0x10012759 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_10012400(int param_1,undefined4 *param_2,int *param_3,int param_4,undefined4 param_5)

{
  char cVar1;
  char *pcVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  int in_ECX;
  char *pcVar8;
  char *pcVar9;
  size_t _MaxCount;
  int iVar10;
  undefined4 *puVar11;
  int local_1c;
  int local_18;
  int local_c;
  
  local_1c = -1;
  puVar11 = (undefined4 *)0x0;
  bVar3 = false;
  pcVar2 = *(char **)(in_ECX + 0x18);
  iVar4 = *(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) >> 4;
  cVar1 = *pcVar2;
  pcVar9 = pcVar2;
  while ((cVar1 != '\0' && (cVar1 != '='))) {
    pcVar8 = pcVar9 + 1;
    pcVar9 = pcVar9 + 1;
    cVar1 = *pcVar8;
  }
  _MaxCount = (int)pcVar9 - (int)pcVar2;
  iVar10 = 0;
  if (0 < iVar4) {
    local_c = 0;
    do {
      puVar5 = (undefined4 *)(*(int *)(in_ECX + 4) + local_c);
      iVar6 = _strncmp((char *)*puVar5,*(char **)(in_ECX + 0x18),_MaxCount);
      if (iVar6 == 0) {
        pcVar8 = (char *)*puVar5;
        pcVar2 = pcVar8 + 1;
        do {
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        if (_MaxCount == (int)pcVar8 - (int)pcVar2) goto LAB_100124de;
      }
      iVar10 = iVar10 + 1;
      local_c = local_c + 0x10;
    } while (iVar10 < iVar4);
  }
  local_c = 0;
  puVar5 = puVar11;
  if (0 < iVar4) {
    local_18 = 0;
    do {
      puVar5 = (undefined4 *)(*(int *)(in_ECX + 4) + local_18);
      iVar10 = _strncmp((char *)*puVar5,*(char **)(in_ECX + 0x18),_MaxCount);
      if (iVar10 == 0) {
        if (puVar11 == (undefined4 *)0x0) {
          local_1c = local_c;
          puVar11 = puVar5;
        }
        else if ((((param_4 != 0) || (puVar11[1] != puVar5[1])) || (puVar11[2] != puVar5[2])) ||
                (puVar11[3] != puVar5[3])) {
          if ((*(int *)(in_ECX + 0x2c) != 0) && (!bVar3)) {
            uVar7 = ___acrt_iob_func(2,"%s: command \'%s%s\' is ambiguous; possibilities:",*param_2,
                                     param_5,*(undefined4 *)(in_ECX + 0x18));
            FUN_100128a0(uVar7);
            uVar7 = ___acrt_iob_func(2," \'%s%s\'",param_5,*puVar11);
            FUN_100128a0(uVar7);
          }
          uVar7 = ___acrt_iob_func(2," \'%s%s\'",param_5,*puVar5);
          FUN_100128a0(uVar7);
          uVar7 = ___acrt_iob_func(2,&DAT_101a6b20);
          FUN_100128a0(uVar7);
          bVar3 = true;
        }
      }
      local_c = local_c + 1;
      local_18 = local_18 + 0x10;
    } while (local_c < iVar4);
    puVar5 = puVar11;
    if (bVar3) {
      pcVar2 = *(char **)(in_ECX + 0x18);
      do {
        pcVar9 = pcVar2;
        pcVar2 = pcVar9 + 1;
      } while (*pcVar9 != '\0');
      *(undefined4 *)(in_ECX + 0x30) = 0;
      *(int *)(in_ECX + 0x28) = *(int *)(in_ECX + 0x28) + 1;
      *(char **)(in_ECX + 0x18) = pcVar9;
      return 0x3f;
    }
  }
  iVar10 = local_1c;
  if (puVar5 == (undefined4 *)0x0) {
    if (((param_4 != 0) && (*(char *)(param_2[*(int *)(in_ECX + 0x28)] + 1) != '-')) &&
       (iVar4 = FUN_1016c3f0(*(undefined4 *)(in_ECX + 0x10),(int)**(char **)(in_ECX + 0x18)),
       iVar4 != 0)) {
      return 0xffffffff;
    }
    if (*(int *)(in_ECX + 0x2c) != 0) {
      uVar7 = ___acrt_iob_func(2,"%s: unrecognized command \'%s%s\'\n",*param_2,param_5,
                               *(undefined4 *)(in_ECX + 0x18));
      FUN_100128a0(uVar7);
    }
    *(int *)(in_ECX + 0x28) = *(int *)(in_ECX + 0x28) + 1;
    *(undefined4 *)(in_ECX + 0x18) = 0;
    *(undefined4 *)(in_ECX + 0x30) = 0;
    return 0x3f;
  }
LAB_100124de:
  *(int *)(in_ECX + 0x28) = *(int *)(in_ECX + 0x28) + 1;
  iVar4 = *(int *)(in_ECX + 0x28);
  *(undefined4 *)(in_ECX + 0x18) = 0;
  if (*pcVar9 == '\0') {
    if (puVar5[1] == 1) {
      if (param_1 <= iVar4) {
        if (*(int *)(in_ECX + 0x2c) != 0) {
          uVar7 = ___acrt_iob_func(2,"%s: option \'%s%s\' requires an argument\n",*param_2,param_5,
                                   *puVar5);
          FUN_100128a0(uVar7);
        }
        *(undefined4 *)(in_ECX + 0x30) = puVar5[3];
        uVar7 = 0x3f;
        if (**(char **)(in_ECX + 0x10) == ':') {
          uVar7 = 0x3a;
        }
        return uVar7;
      }
      *(undefined4 *)(in_ECX + 0x24) = param_2[iVar4];
      *(int *)(in_ECX + 0x28) = iVar4 + 1;
    }
  }
  else {
    if (puVar5[1] == 0) {
      if (*(int *)(in_ECX + 0x2c) != 0) {
        uVar7 = ___acrt_iob_func(2,"%s: option \'%s%s\' doesn\'t allow an argument\n",*param_2,
                                 param_5,*puVar5);
        FUN_100128a0(uVar7);
      }
      *(undefined4 *)(in_ECX + 0x30) = puVar5[3];
      return 0x3f;
    }
    *(char **)(in_ECX + 0x24) = pcVar9 + 1;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = iVar10;
  }
  uVar7 = puVar5[3];
  if ((undefined4 *)puVar5[2] != (undefined4 *)0x0) {
    *(undefined4 *)puVar5[2] = uVar7;
    uVar7 = 0;
  }
  return uVar7;
}

