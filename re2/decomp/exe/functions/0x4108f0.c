// rea decompile_all
// name: FUN_004108f0
// address: 0x4108f0
// body: available
// range: 0x4108f0-0x410bec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Enum "enum_667": Some values do not have unique names */
/* WARNING: Enum "enum_668": Some values do not have unique names */

void FUN_004108f0(undefined4 param_1)

{
  DWORD *pDVar1;
  int iVar2;
  uint uVar3;
  LONG LVar4;
  int iVar5;
  int in_ECX;
  int iVar6;
  DWORD *pDVar7;
  bool bVar8;
  undefined1 local_36c [52];
  undefined4 local_338;
  int local_334;
  DISPLAYCONFIG_DEVICE_INFO_HEADER local_330;
  undefined1 local_30c [388];
  DISPLAYCONFIG_DEVICE_INFO_HEADER local_188 [14];
  undefined **local_6c;
  uint local_68;
  undefined4 local_58;
  uint local_54;
  undefined1 local_50;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  int local_30;
  UINT32 local_2c;
  UINT32 local_28;
  undefined8 local_24;
  int local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0059ce03;
  local_10 = ExceptionList;
  uVar3 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar6 = 0;
  local_338 = param_1;
  local_24 = 0;
  local_1c = 0;
  local_38 = 0;
  local_30 = 0;
  local_334 = 0;
  local_54 = 7;
  local_58 = 0;
  local_68 = local_68 & 0xffff0000;
  local_6c = CCpRsString::vftable;
  local_3c = 0xf;
  local_40 = 0;
  local_50 = 0;
  local_8 = 2;
  iVar5 = 0;
  local_18 = uVar3;
  if (*(int *)(in_ECX + 0x18c) != 0) {
    do {
      LVar4 = GetDisplayConfigBufferSizes(2,&local_28,&local_2c);
      if (LVar4 != 0) goto LAB_00410bd7;
      FUN_00414210(local_28);
      FUN_00414120(local_2c);
      LVar4 = QueryDisplayConfig(2,&local_28,(DISPLAYCONFIG_PATH_INFO *)local_24,&local_2c,
                                 (DISPLAYCONFIG_MODE_INFO *)local_38,
                                 (DISPLAYCONFIG_TOPOLOGY_ID *)0x0);
      FUN_00414210(local_28);
      FUN_00414120(local_2c);
    } while (LVar4 == 0x7a);
    if (LVar4 == 0) {
      iVar6 = (int)(DISPLAYCONFIG_PATH_INFO *)local_24;
      if ((DISPLAYCONFIG_PATH_INFO *)local_24 != (DISPLAYCONFIG_PATH_INFO *)local_24._4_4_) {
        pDVar7 = (DWORD *)((int)(DISPLAYCONFIG_PATH_INFO *)local_24 + 0x14);
        do {
          _memset(&local_330,0,0x1a4);
          local_330.adapterId.LowPart = *pDVar7;
          local_330.adapterId.HighPart = pDVar7[1];
          local_330.id = pDVar7[2];
          local_330.type = DISPLAYCONFIG_DEVICE_INFO_GET_TARGET_NAME;
          local_330.size = 0x1a4;
          iVar5 = DisplayConfigGetDeviceInfo(&local_330);
          bVar8 = iVar5 == 0;
          if (!bVar8) {
LAB_00410bc4:
            if (bVar8 || iVar5 < 0) goto LAB_00410be5;
            iVar5 = (int)(DISPLAYCONFIG_MODE_INFO *)local_38;
            goto LAB_00410b38;
          }
          _memset(local_188,0,0x114);
          local_188[0].adapterId.LowPart = *pDVar7;
          local_188[0].adapterId.HighPart = pDVar7[1];
          local_188[0].type = DISPLAYCONFIG_DEVICE_INFO_GET_ADAPTER_NAME;
          local_188[0].size = 0x114;
          iVar5 = DisplayConfigGetDeviceInfo(local_188);
          iVar2 = local_334;
          bVar8 = iVar5 == 0;
          if (!bVar8) goto LAB_00410bc4;
          FUN_00402f80(&local_6c,L"DisplayIndex:%d, ModelName:%ls",local_334,local_30c);
          FUN_00408420();
          FUN_00402e60(local_30c);
          local_8._0_1_ = 3;
          FUN_00414310(local_36c);
          local_8 = CONCAT31(local_8._1_3_,2);
          FUN_00402ed0();
          local_334 = iVar2 + 1;
          pDVar1 = pDVar7 + 0xd;
          pDVar7 = pDVar7 + 0x12;
        } while (pDVar1 != local_24._4_4_);
      }
      iVar5 = (int)(DISPLAYCONFIG_MODE_INFO *)local_38;
    }
    else {
LAB_00410bd7:
      iVar6 = (int)(DISPLAYCONFIG_PATH_INFO *)local_24;
LAB_00410be5:
      iVar5 = (int)(DISPLAYCONFIG_MODE_INFO *)local_38;
    }
  }
LAB_00410b38:
  local_6c = CCpRsString::vftable;
  FUN_004033e0(uVar3);
  if (7 < local_54) {
    FUN_004053c0(local_68,local_54 + 1);
  }
  local_54 = 7;
  local_58 = 0;
  local_68 = local_68 & 0xffff0000;
  if (iVar5 != 0) {
    FUN_00414e70(iVar5,local_30 - iVar5 >> 6);
  }
  if (iVar6 != 0) {
    FUN_00414f90(iVar6,(local_1c - iVar6) / 0x48);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}

