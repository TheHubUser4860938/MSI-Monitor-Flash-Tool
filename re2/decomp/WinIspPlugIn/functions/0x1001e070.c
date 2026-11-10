// rea decompile_all
// name: FUN_1001e070
// address: 0x1001e070
// body: available
// range: 0x1001e070-0x1001e375 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001e070(int *param_1,int *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 *in_ECX;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  byte bVar8;
  int *in_EDX;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint local_50;
  undefined **local_48;
  uint local_44;
  undefined4 local_34;
  uint local_30;
  uint local_2c;
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101c1d78;
  local_10 = ExceptionList;
  local_14 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_30 = 7;
  local_34 = 0;
  local_44 = local_44 & 0xffff0000;
  local_48 = CCpRsString::vftable;
  local_18 = 0xf;
  local_1c = 0;
  local_2c = local_2c & 0xffffff00;
  local_8 = 0;
  bVar8 = *(byte *)((int)in_EDX + 0x4ca);
  uVar5 = (uint)*(ushort *)(in_EDX + 0x132);
  uVar4 = in_EDX[0x132];
  uVar12 = (uint)bVar8;
  puVar2 = (undefined4 *)*param_2;
  cVar1 = *(char *)((int)puVar2[1] + 0xd);
  puVar10 = puVar2;
  puVar9 = (undefined4 *)puVar2[1];
  while (cVar1 == '\0') {
    if ((uint)puVar9[4] < uVar12) {
      puVar7 = (undefined4 *)puVar9[2];
      puVar9 = puVar10;
    }
    else {
      puVar7 = (undefined4 *)*puVar9;
    }
    puVar10 = puVar9;
    puVar9 = puVar7;
    cVar1 = *(char *)((int)puVar7 + 0xd);
  }
  if ((puVar10 == puVar2) || (uVar12 < (uint)puVar10[4])) {
    puVar10 = puVar2;
  }
  if (puVar10 == puVar2) {
    *in_ECX = 3;
  }
  else {
    *in_ECX = 1;
    local_50 = 0;
    iVar11 = param_1[1] - *param_1 >> 0x1f;
    if ((param_1[1] - *param_1) / 0x18 + iVar11 != iVar11) {
      iVar11 = 0;
LAB_1001e165:
      iVar3 = *param_1;
      if (bVar8 != *(byte *)(iVar3 + iVar11)) goto LAB_1001e1b8;
      if (*(int *)(iVar3 + 4 + iVar11) != 0) {
        uVar6 = (uint)*(ushort *)(iVar3 + 8 + iVar11);
        uVar13 = *(int *)(iVar3 + 0xc + iVar11) + uVar6;
        if ((uVar13 < uVar5) || (*in_EDX + uVar5 < uVar6)) {
          if ((uVar13 < (uVar4 & 0xfffff000)) || ((uVar4 | 0xfff) < uVar6)) {
            *in_ECX = 2;
          }
          else {
            *in_ECX = 3;
          }
          goto LAB_1001e1b8;
        }
        FUN_10048350(&local_48,L"Reserve Region have conflict with Flag");
        FUN_10016860();
        goto LAB_1001e315;
      }
      puVar2 = (undefined4 *)*param_2;
      cVar1 = *(char *)((int)puVar2[1] + 0xd);
      puVar10 = puVar2;
      puVar9 = (undefined4 *)puVar2[1];
      while (cVar1 == '\0') {
        if ((uint)puVar9[4] < uVar12) {
          puVar7 = (undefined4 *)puVar9[2];
          puVar9 = puVar10;
        }
        else {
          puVar7 = (undefined4 *)*puVar9;
        }
        puVar10 = puVar9;
        puVar9 = puVar7;
        cVar1 = *(char *)((int)puVar7 + 0xd);
      }
      if ((puVar10 == puVar2) || (uVar12 < (uint)puVar10[4])) {
        puVar10 = puVar2;
      }
      uVar4 = 0xffff;
      do {
        if (*(char *)(uVar4 + puVar10[5]) != -1) break;
        uVar4 = uVar4 - 1;
      } while (uVar4 < 0x10000);
      uVar4 = uVar4 + 1;
      if (*(int *)(*param_1 + 0x14 + local_50 * 0x18) == 0) {
        bVar8 = *(byte *)(*param_1 + 0x10 + local_50 * 0x18);
      }
      else if ((uVar4 & 0xfff) == 0) {
        bVar8 = (byte)(uVar4 >> 0xc);
      }
      else {
        bVar8 = (char)(uVar4 >> 0xc) + 1;
      }
      if (bVar8 == 0) {
        FUN_10048350(&DAT_1024a13c,L"EraseSectorCount: 0x%x, Bank Can\'t Erase Flag!",0);
        FUN_10016860();
        goto LAB_1001e315;
      }
      if ((uint)bVar8 * 0x1000 - 0x1000 <= uVar5 + *in_EDX) {
        FUN_10048350(&DAT_1024a13c,L"EraseSectorCount: 0x%x, FlagEndAddrInBank: 0x%x, Conflict!",
                     (uint)bVar8,uVar5 + *in_EDX,local_14);
        FUN_10016860();
        goto LAB_1001e315;
      }
      *in_ECX = 2;
    }
  }
LAB_1001e2f5:
  FUN_10048350(&DAT_1024a13c,L"EraseFlagType: 0x%x",*in_ECX);
  FUN_10016860();
LAB_1001e315:
  local_48 = CCpRsString::vftable;
  if (0xf < local_18) {
    FUN_1000b630(local_2c,local_18 + 1);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c = local_2c & 0xffffff00;
  if (7 < local_30) {
    FUN_1000b5d0(local_44,local_30 + 1);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
LAB_1001e1b8:
  local_50 = local_50 + 1;
  iVar11 = iVar11 + 0x18;
  if ((uint)((param_1[1] - *param_1) / 0x18) <= local_50) goto LAB_1001e2f5;
  goto LAB_1001e165;
}

