// rea decompile_all
// name: FUN_100120c0
// address: 0x100120c0
// body: available
// range: 0x100120c0-0x100123f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_100120c0(int param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  byte bVar2;
  char *pcVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int in_ECX;
  byte *pbVar9;
  char cVar10;
  bool bVar11;
  
  if (param_1 < 1) {
    return -1;
  }
  *(undefined4 *)(in_ECX + 0x24) = 0;
  if (*(int *)(in_ECX + 0x28) == 0) {
LAB_10012105:
    *(undefined4 *)(in_ECX + 0x28) = 1;
LAB_1001210c:
    *(undefined4 *)(in_ECX + 0x1c) = 1;
    *(undefined4 *)(in_ECX + 0x20) = 1;
    *(undefined4 *)(in_ECX + 0x18) = 0;
    *(undefined4 *)(in_ECX + 0x14) = 1;
  }
  else {
    if (*(int *)(in_ECX + 0x14) == 0) {
      if (*(int *)(in_ECX + 0x28) == 0) goto LAB_10012105;
      goto LAB_1001210c;
    }
    cVar1 = **(char **)(in_ECX + 0x10);
    if ((cVar1 == '-') || (cVar1 == '+')) {
      *(char **)(in_ECX + 0x10) = *(char **)(in_ECX + 0x10) + 1;
    }
  }
  if (**(char **)(in_ECX + 0x10) == ':') {
    *(undefined4 *)(in_ECX + 0x2c) = 0;
  }
  if ((*(char **)(in_ECX + 0x18) == (char *)0x0) || (**(char **)(in_ECX + 0x18) == '\0')) {
    iVar7 = *(int *)(in_ECX + 0x28);
    if (iVar7 < *(int *)(in_ECX + 0x20)) {
      *(int *)(in_ECX + 0x20) = iVar7;
    }
    if (iVar7 < *(int *)(in_ECX + 0x1c)) {
      *(int *)(in_ECX + 0x1c) = iVar7;
    }
    iVar6 = *(int *)(in_ECX + 0x20);
    if (*(int *)(in_ECX + 0x1c) == iVar6) {
      if (iVar6 != iVar7) {
        *(int *)(in_ECX + 0x1c) = iVar7;
      }
    }
    else if (iVar6 != iVar7) {
      FUN_10011fd0(param_2);
    }
    iVar7 = *(int *)(in_ECX + 0x28);
    while (iVar7 < param_1) {
      if ((*(char *)param_2[*(int *)(in_ECX + 0x28)] == '-') &&
         (((char *)param_2[*(int *)(in_ECX + 0x28)])[1] != '\0')) break;
      iVar7 = *(int *)(in_ECX + 0x28) + 1;
      *(int *)(in_ECX + 0x28) = iVar7;
    }
    iVar7 = *(int *)(in_ECX + 0x28);
    *(int *)(in_ECX + 0x20) = iVar7;
    if (iVar7 != param_1) {
      pbVar4 = (byte *)param_2[iVar7];
      pbVar9 = &DAT_101a768c;
      do {
        bVar2 = *pbVar4;
        bVar11 = bVar2 < *pbVar9;
        if (bVar2 != *pbVar9) {
LAB_100121d0:
          uVar5 = -(uint)bVar11 | 1;
          goto LAB_100121d5;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar4[1];
        bVar11 = bVar2 < pbVar9[1];
        if (bVar2 != pbVar9[1]) goto LAB_100121d0;
        pbVar4 = pbVar4 + 2;
        pbVar9 = pbVar9 + 2;
      } while (bVar2 != 0);
      uVar5 = 0;
LAB_100121d5:
      if (uVar5 == 0) {
        iVar6 = *(int *)(in_ECX + 0x28) + 1;
        iVar7 = *(int *)(in_ECX + 0x20);
        *(int *)(in_ECX + 0x28) = iVar6;
        if (*(int *)(in_ECX + 0x1c) == iVar7) {
LAB_100121fc:
          *(int *)(in_ECX + 0x1c) = iVar6;
        }
        else if (iVar7 == iVar6) {
          if (*(int *)(in_ECX + 0x1c) == iVar7) goto LAB_100121fc;
        }
        else {
          FUN_10011fd0(param_2);
        }
        *(int *)(in_ECX + 0x20) = param_1;
        *(int *)(in_ECX + 0x28) = param_1;
      }
    }
    iVar7 = *(int *)(in_ECX + 0x28);
    if (iVar7 == param_1) {
      if (*(int *)(in_ECX + 0x1c) != *(int *)(in_ECX + 0x20)) {
        *(int *)(in_ECX + 0x28) = *(int *)(in_ECX + 0x1c);
      }
      return -1;
    }
    pcVar3 = (char *)param_2[iVar7];
    if ((*pcVar3 != '-') || (cVar1 = pcVar3[1], cVar1 == '\0')) {
      *(char **)(in_ECX + 0x24) = pcVar3;
      *(int *)(in_ECX + 0x28) = iVar7 + 1;
      return 1;
    }
    if (*(int *)(in_ECX + 4) != *(int *)(in_ECX + 8)) {
      if (cVar1 == '-') {
        *(char **)(in_ECX + 0x18) = pcVar3 + 2;
        iVar7 = FUN_10012400(param_1,param_2,param_3,param_4,&DAT_101a768c);
        return iVar7;
      }
      if ((param_4 != 0) &&
         ((pcVar3[2] != '\0' ||
          (iVar7 = FUN_1016c3f0(*(undefined4 *)(in_ECX + 0x10),(int)cVar1), iVar7 == 0)))) {
        *(int *)(in_ECX + 0x18) = param_2[*(int *)(in_ECX + 0x28)] + 1;
        iVar7 = FUN_10012400(param_1,param_2,param_3,param_4,&DAT_101a7690);
        if (iVar7 != -1) {
          return iVar7;
        }
      }
    }
    *(int *)(in_ECX + 0x18) = param_2[*(int *)(in_ECX + 0x28)] + 1;
  }
  cVar1 = **(char **)(in_ECX + 0x18);
  *(char **)(in_ECX + 0x18) = *(char **)(in_ECX + 0x18) + 1;
  iVar7 = (int)cVar1;
  iVar6 = FUN_1016c3f0(*(undefined4 *)(in_ECX + 0x10),iVar7);
  pcVar3 = *(char **)(in_ECX + 0x18);
  if (*pcVar3 == '\0') {
    *(int *)(in_ECX + 0x28) = *(int *)(in_ECX + 0x28) + 1;
  }
  if (((iVar6 == 0) || (cVar1 == ':')) || (cVar1 == ';')) {
    if (*(int *)(in_ECX + 0x2c) != 0) {
      uVar8 = ___acrt_iob_func(2,"%s: invalid option -- \'%c\'\n",*param_2,iVar7);
      FUN_100128a0(uVar8);
    }
    *(int *)(in_ECX + 0x30) = iVar7;
    return 0x3f;
  }
  if (*(char *)(iVar6 + 1) == ':') {
    if (*(char *)(iVar6 + 2) == ':') {
      if (*pcVar3 == '\0') {
        *(undefined4 *)(in_ECX + 0x24) = 0;
        *(undefined4 *)(in_ECX + 0x18) = 0;
        return (int)cVar1;
      }
    }
    else if (*pcVar3 == '\0') {
      iVar6 = *(int *)(in_ECX + 0x28);
      if (iVar6 == param_1) {
        if (*(int *)(in_ECX + 0x2c) != 0) {
          uVar8 = ___acrt_iob_func(2,"%s: option requires an argument -- \'%c\'\n",*param_2,iVar7);
          FUN_100128a0(uVar8);
        }
        *(int *)(in_ECX + 0x30) = iVar7;
        cVar10 = ':';
        cVar1 = **(char **)(in_ECX + 0x10);
        *(undefined4 *)(in_ECX + 0x18) = 0;
        if (cVar1 != ':') {
          cVar10 = '?';
        }
        return (int)cVar10;
      }
      *(undefined4 *)(in_ECX + 0x24) = param_2[iVar6];
      *(int *)(in_ECX + 0x28) = iVar6 + 1;
      *(undefined4 *)(in_ECX + 0x18) = 0;
      goto LAB_100123a4;
    }
    *(int *)(in_ECX + 0x28) = *(int *)(in_ECX + 0x28) + 1;
    *(char **)(in_ECX + 0x24) = pcVar3;
    *(undefined4 *)(in_ECX + 0x18) = 0;
    return (int)cVar1;
  }
LAB_100123a4:
  return (int)cVar1;
}

