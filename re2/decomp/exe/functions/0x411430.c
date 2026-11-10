// rea decompile_all
// name: FUN_00411430
// address: 0x411430
// body: available
// range: 0x411430-0x411862 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00411430(void)

{
  char cVar1;
  short sVar2;
  short *psVar3;
  uint uVar4;
  LPCWSTR ***lpLibFileName;
  undefined4 uVar5;
  undefined4 *puVar6;
  int in_ECX;
  int iVar7;
  short *psVar8;
  char ****ppppcVar9;
  char ****ppppcVar10;
  undefined4 local_120 [5];
  uint local_10c;
  undefined **local_108;
  undefined1 local_104 [16];
  undefined4 local_f4;
  undefined4 local_f0;
  undefined1 local_ec [4];
  HMODULE local_e8;
  FARPROC local_e4;
  LPCWSTR **local_c8 [5];
  uint local_b4;
  undefined **local_b0;
  undefined4 local_ac;
  undefined4 local_9c;
  uint local_98;
  undefined1 local_94;
  undefined4 local_84;
  undefined4 local_80;
  undefined **local_7c;
  undefined4 local_78;
  undefined4 local_68;
  uint local_64;
  undefined1 local_60;
  undefined4 local_50;
  undefined4 local_4c;
  undefined **local_48;
  undefined4 local_44;
  undefined4 local_34;
  uint local_30;
  char ***local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0059cf92;
  local_10 = ExceptionList;
  uVar4 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar4;
  _memset(local_ec,0,0x3c);
  FUN_0040e330(uVar4);
  local_98 = 7;
  local_9c = 0;
  local_ac = (undefined4 *)((uint)local_ac._2_2_ << 0x10);
  local_b0 = CCpRsString::vftable;
  local_80 = 0xf;
  local_84 = 0;
  local_94 = 0;
  local_64 = 7;
  local_68 = 0;
  local_78 = (uint)local_78._2_2_ << 0x10;
  local_7c = CCpRsString::vftable;
  local_4c = 0xf;
  local_50 = 0;
  local_60 = 0;
  local_8._0_1_ = 2;
  local_8._1_3_ = 0;
  if (local_e8 == (HMODULE)0x0) {
    lpLibFileName = local_c8;
    if (7 < local_b4) {
      lpLibFileName = (LPCWSTR ***)local_c8[0];
    }
    local_e8 = LoadLibraryW((LPCWSTR)lpLibFileName);
    if (local_e8 == (HMODULE)0x0) {
      GetLastError();
    }
    else {
      local_e4 = GetProcAddress(local_e8,"OperateScalerEx");
      if (local_e4 != (FARPROC)0x0) goto LAB_00411576;
      if (local_e8 != (HMODULE)0x0) {
        FreeLibrary(local_e8);
        local_e8 = (HMODULE)0x0;
      }
      local_e4 = (FARPROC)0x0;
    }
    FUN_00403fc0(L"Load scaler dll in UpdateFwNormal fail!",0x27);
    FUN_00408420();
  }
  else {
LAB_00411576:
    FUN_00402f80(&local_7c,L"Fw Path Before Convert:%ls",*(undefined4 *)(in_ECX + 0x174));
    FUN_00408420();
    psVar3 = *(short **)(in_ECX + 0x174);
    local_30 = 7;
    local_34 = 0;
    local_44 = (undefined4 *)((uint)local_44._2_2_ << 0x10);
    if (*psVar3 == 0) {
      iVar7 = 0;
    }
    else {
      psVar8 = psVar3;
      do {
        sVar2 = *psVar8;
        psVar8 = psVar8 + 1;
      } while (sVar2 != 0);
      iVar7 = (int)psVar8 - (int)(psVar3 + 1) >> 1;
    }
    FUN_00403fc0(psVar3,iVar7);
    local_48 = CCpRsString::vftable;
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = (char ***)((uint)local_2c[0] & 0xffffff00);
    local_108 = CCpTransform::vftable;
    local_8._0_1_ = 4;
    uVar5 = FUN_00406f40(local_120,&local_44);
    FUN_00403450(uVar5);
    FUN_004033e0();
    ppppcVar10 = local_2c;
    if (0xf < local_18) {
      ppppcVar10 = (char ****)local_2c[0];
    }
    local_8._0_1_ = 3;
    local_f0 = 0xf;
    local_f4 = 0;
    local_104[0] = 0;
    if (*(char *)ppppcVar10 == '\0') {
      iVar7 = 0;
    }
    else {
      ppppcVar9 = ppppcVar10;
      do {
        cVar1 = *(char *)ppppcVar9;
        ppppcVar9 = (char ****)((int)ppppcVar9 + 1);
      } while (cVar1 != '\0');
      iVar7 = (int)ppppcVar9 - (int)((int)ppppcVar10 + 1);
    }
    FUN_004043e0(ppppcVar10,iVar7);
    local_108 = CCpTransform::vftable;
    local_8._0_1_ = 6;
    uVar5 = FUN_00407080(local_120,local_104);
    local_8._0_1_ = 7;
    FUN_004040c0(uVar5,0,0xffffffff);
    local_8._0_1_ = 6;
    if (7 < local_10c) {
      FUN_004053c0(local_120[0],local_10c + 1);
    }
    puVar6 = &local_44;
    if (7 < local_30) {
      puVar6 = local_44;
    }
    FUN_00402f80(&local_b0,
                 L"WinISPTool.exe --ispdiff --newboot --fw \"%ls\" --comm %d  --settingfile \"%ls\""
                 ,puVar6,*(undefined4 *)(in_ECX + 0x19c),*(undefined4 *)(in_ECX + 0x164));
    puVar6 = &local_44;
    if (7 < local_30) {
      puVar6 = local_44;
    }
    FUN_00402f80(&local_7c,L"Fw Path After Convert:%ls",puVar6);
    FUN_00408420();
    puVar6 = &local_ac;
    if (7 < local_98) {
      puVar6 = local_ac;
    }
    if (local_e4 != (FARPROC)0x0) {
      (*local_e4)(puVar6,0,FUN_0040f0a0,0,0);
    }
    if (local_e8 != (HMODULE)0x0) {
      FreeLibrary(local_e8);
      local_e8 = (HMODULE)0x0;
    }
    local_e4 = (FARPROC)0x0;
    FUN_004033e0();
    local_48 = CCpRsString::vftable;
    FUN_004033e0();
    if (7 < local_30) {
      FUN_004053c0(local_44,local_30 + 1);
    }
    local_30 = 7;
    local_34 = 0;
    local_44 = (undefined4 *)((uint)local_44 & 0xffff0000);
  }
  local_7c = CCpRsString::vftable;
  FUN_004033e0();
  if (7 < local_64) {
    FUN_004053c0(local_78,local_64 + 1);
  }
  local_64 = 7;
  local_68 = 0;
  local_78 = local_78 & 0xffff0000;
  local_b0 = CCpRsString::vftable;
  FUN_004033e0();
  if (7 < local_98) {
    FUN_004053c0(local_ac,local_98 + 1);
  }
  local_98 = 7;
  local_9c = 0;
  local_ac = (undefined4 *)((uint)local_ac & 0xffff0000);
  FUN_0040e4c0();
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

