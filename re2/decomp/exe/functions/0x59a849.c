// rea decompile_all
// name: __wsopen_nolock
// address: 0x59a849
// body: available
// range: 0x59a849-0x59ab71 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __wsopen_nolock
   
   Library: Visual Studio 2015 Release */

errno_t __cdecl
__wsopen_nolock(int *UnlockFlag,int *_FileHandle,wchar_t *_Filename,int _OpenFlag,int _ShareFlag,
               int _PermissionFlag,int _SecureFlag)

{
  uint uVar1;
  undefined4 *puVar2;
  ulong *puVar3;
  int *piVar4;
  void *pvVar5;
  DWORD DVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  wchar_t **ppwVar10;
  wchar_t *apwStack_74 [5];
  int iStack_60;
  undefined1 local_48 [24];
  byte local_30 [4];
  uint local_2c;
  int local_24;
  undefined4 local_18;
  undefined4 local_14;
  uint local_10;
  void *local_c;
  undefined1 local_6;
  byte local_5;
  
  apwStack_74[4] = (wchar_t *)local_48;
  iStack_60 = _OpenFlag;
  apwStack_74[3] = (wchar_t *)0x59a866;
  puVar2 = (undefined4 *)FUN_0059a5ac();
  pbVar9 = local_30;
  for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
    *(undefined4 *)pbVar9 = *puVar2;
    puVar2 = puVar2 + 1;
    pbVar9 = pbVar9 + 4;
  }
  if (local_24 == -1) {
    puVar3 = ___doserrno();
    *puVar3 = 0;
    *_FileHandle = -1;
    goto LAB_0059a888;
  }
  iVar7 = __alloc_osfhnd();
  *_FileHandle = iVar7;
  if (iVar7 == -1) {
    puVar3 = ___doserrno();
    *puVar3 = 0;
    *_FileHandle = -1;
    piVar4 = __errno();
    *piVar4 = 0x18;
    goto LAB_0059a888;
  }
  local_14 = 0;
  local_18 = 0xc;
  *UnlockFlag = 1;
  local_10 = ~((uint)_OpenFlag >> 7) & 1;
  apwStack_74[1] = (wchar_t *)&local_18;
  apwStack_74[0] = _Filename;
  pbVar9 = local_30;
  ppwVar10 = apwStack_74 + 2;
  for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
    *ppwVar10 = (wchar_t *)*(undefined4 *)pbVar9;
    pbVar9 = pbVar9 + 4;
    ppwVar10 = ppwVar10 + 1;
  }
  pvVar5 = create_file();
  local_c = pvVar5;
  if (pvVar5 == (void *)0xffffffff) {
    if (((local_2c & 0xc0000000) == 0xc0000000) && ((_OpenFlag & 1U) != 0)) {
      apwStack_74[1] = (wchar_t *)&local_18;
      local_2c = local_2c & 0x7fffffff;
      apwStack_74[0] = _Filename;
      pbVar9 = local_30;
      ppwVar10 = apwStack_74 + 2;
      for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
        *ppwVar10 = (wchar_t *)*(undefined4 *)pbVar9;
        pbVar9 = pbVar9 + 4;
        ppwVar10 = ppwVar10 + 1;
      }
      pvVar5 = create_file();
      local_c = pvVar5;
      if (pvVar5 != (void *)0xffffffff) goto LAB_0059a96f;
    }
    pbVar9 = (byte *)((&DAT_006190a0)[*_FileHandle >> 6] + 0x28 + (*_FileHandle & 0x3fU) * 0x30);
    *pbVar9 = *pbVar9 & 0xfe;
    GetLastError();
    ___acrt_errno_map_os_error();
  }
  else {
LAB_0059a96f:
    local_c = pvVar5;
    DVar6 = GetFileType(pvVar5);
    if (DVar6 != 0) {
      if (DVar6 == 2) {
        local_30[0] = local_30[0] | 0x40;
      }
      else if (DVar6 == 3) {
        local_30[0] = local_30[0] | 8;
      }
      iStack_60 = 0x59a9e2;
      local_5 = local_30[0];
      ___acrt_lowio_set_os_handle();
      local_5 = local_5 | 1;
      local_30[0] = local_5;
      *(byte *)((&DAT_006190a0)[*_FileHandle >> 6] + 0x28 + (*_FileHandle & 0x3fU) * 0x30) = local_5
      ;
      *(undefined1 *)((&DAT_006190a0)[*_FileHandle >> 6] + 0x29 + (*_FileHandle & 0x3fU) * 0x30) = 0
      ;
      if (((_OpenFlag & 2U) == 0) || (iVar7 = truncate_ctrl_z_if_present(*_FileHandle), iVar7 == 0))
      {
        local_6 = 0;
        iVar7 = *_FileHandle;
        pbVar9 = local_30;
        ppwVar10 = apwStack_74;
        for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
          *ppwVar10 = (wchar_t *)*(undefined4 *)pbVar9;
          pbVar9 = pbVar9 + 4;
          ppwVar10 = ppwVar10 + 1;
        }
        iVar7 = FUN_0059a2ca(iVar7);
        uVar1 = local_2c;
        if (iVar7 == 0) {
          *(undefined1 *)((&DAT_006190a0)[*_FileHandle >> 6] + 0x29 + (*_FileHandle & 0x3fU) * 0x30)
               = local_6;
          iVar7 = (*_FileHandle & 0x3fU) * 0x30;
          pbVar9 = (byte *)((&DAT_006190a0)[*_FileHandle >> 6] + 0x2d + iVar7);
          *pbVar9 = *pbVar9 ^ ((byte)((uint)_OpenFlag >> 0x10) ^
                              *(byte *)((&DAT_006190a0)[*_FileHandle >> 6] + 0x2d + iVar7)) & 1;
          if (((local_5 & 0x48) == 0) && ((_OpenFlag & 8U) != 0)) {
            pbVar9 = (byte *)((&DAT_006190a0)[*_FileHandle >> 6] + 0x28 +
                             (*_FileHandle & 0x3fU) * 0x30);
            *pbVar9 = *pbVar9 | 0x20;
          }
          if (((local_2c & 0xc0000000) == 0xc0000000) && ((_OpenFlag & 1U) != 0)) {
            CloseHandle(local_c);
            apwStack_74[1] = (wchar_t *)&local_18;
            local_2c = uVar1 & 0x7fffffff;
            apwStack_74[0] = _Filename;
            pbVar9 = local_30;
            ppwVar10 = apwStack_74 + 2;
            for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
              *ppwVar10 = (wchar_t *)*(undefined4 *)pbVar9;
              pbVar9 = pbVar9 + 4;
              ppwVar10 = ppwVar10 + 1;
            }
            pvVar5 = create_file();
            if (pvVar5 == (void *)0xffffffff) {
              GetLastError();
              ___acrt_errno_map_os_error();
              pbVar9 = (byte *)((&DAT_006190a0)[*_FileHandle >> 6] + 0x28 +
                               (*_FileHandle & 0x3fU) * 0x30);
              *pbVar9 = *pbVar9 & 0xfe;
              iStack_60 = 0x59ab4b;
              __free_osfhnd(*_FileHandle);
              goto LAB_0059a888;
            }
            *(void **)((&DAT_006190a0)[*_FileHandle >> 6] + 0x18 + (*_FileHandle & 0x3fU) * 0x30) =
                 pvVar5;
          }
          return 0;
        }
      }
      __close_nolock(*_FileHandle);
      return iVar7;
    }
    DVar6 = GetLastError();
    ___acrt_errno_map_os_error();
    pbVar9 = (byte *)((&DAT_006190a0)[*_FileHandle >> 6] + 0x28 + (*_FileHandle & 0x3fU) * 0x30);
    *pbVar9 = *pbVar9 & 0xfe;
    CloseHandle(pvVar5);
    if (DVar6 == 0) {
      piVar4 = __errno();
      *piVar4 = 0xd;
    }
  }
LAB_0059a888:
  piVar4 = __errno();
  return *piVar4;
}

