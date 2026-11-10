// rea decompile_all
// name: Initiallize
// address: 0x100115b0
// body: available
// range: 0x100115b0-0x10011a88 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Initiallize(void)

{
  WCHAR WVar1;
  uint uVar2;
  undefined ***pppuVar3;
  LPCWSTR lpFileName;
  HANDLE hFindFile;
  int iVar4;
  WCHAR *pWVar5;
  BOOL BVar6;
  _WIN32_FIND_DATAW local_784;
  undefined **local_534;
  undefined4 local_530;
  undefined4 local_520;
  uint local_51c;
  undefined1 local_518;
  undefined4 local_508;
  undefined4 local_504;
  undefined2 local_500;
  undefined4 local_4fc;
  wchar_t local_4f8 [262];
  undefined **local_2ec;
  uint local_2e8;
  undefined4 local_2d8;
  uint local_2d4;
  undefined **local_2b8;
  undefined4 local_2b4;
  undefined4 local_2a4;
  uint local_2a0;
  undefined1 local_29c;
  undefined4 local_28c;
  undefined4 local_288;
  undefined **local_284;
  undefined4 local_280;
  undefined4 local_270;
  uint local_26c;
  undefined1 local_268;
  undefined4 local_258;
  undefined4 local_254;
  undefined **local_250;
  undefined4 local_24c;
  undefined4 local_23c;
  uint local_238;
  undefined1 local_234;
  undefined4 local_224;
  undefined4 local_220;
  wchar_t local_21c [260];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x115b0  84  Initiallize */
  local_8 = 0xffffffff;
  puStack_c = &LAB_1016daa6;
  local_10 = ExceptionList;
  uVar2 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar2;
  FUN_1000d0f0();
  DAT_101def34 = DAT_101def30;
  local_530 = (uint)local_530._2_2_ << 0x10;
  local_508 = 0;
  local_518 = 0;
  local_500 = 0;
  local_4fc = 0;
  local_51c = 7;
  local_520 = 0;
  local_534 = CCpRsString::vftable;
  local_504 = 0xf;
  _memset(local_21c,0,0x208);
  _wcsncpy(local_4f8,local_21c,0x104);
  local_2a0 = 7;
  local_2a4 = 0;
  local_2b4 = (LPCWSTR)((uint)local_2b4._2_2_ << 0x10);
  local_2b8 = CCpRsString::vftable;
  local_288 = 0xf;
  local_28c = 0;
  local_29c = 0;
  local_238 = 7;
  local_23c = 0;
  local_24c = (undefined **)((uint)local_24c._2_2_ << 0x10);
  local_250 = CCpRsString::vftable;
  local_220 = 0xf;
  local_224 = 0;
  local_234 = 0;
  local_26c = 7;
  local_270 = 0;
  local_280 = (uint)local_280._2_2_ << 0x10;
  local_284 = CCpRsString::vftable;
  local_254 = 0xf;
  local_258 = 0;
  local_268 = 0;
  pppuVar3 = (undefined ***)FUN_10010ca0(uVar2);
  if (&local_250 != pppuVar3) {
    if (pppuVar3 == (undefined ***)0x0) {
      pppuVar3 = (undefined ***)0x0;
    }
    else {
      pppuVar3 = pppuVar3 + 1;
    }
    if ((undefined ***)&local_24c != pppuVar3) {
      if (7 < local_238) {
        FUN_1000fe70(local_24c,local_238 + 1);
      }
      local_238 = 7;
      local_23c = 0;
      local_24c = (undefined **)((uint)local_24c & 0xffff0000);
      FUN_1000f2f0(pppuVar3);
    }
    local_8 = 0xffffffff;
  }
  local_2ec = CCpRsString::vftable;
  FUN_1000e140();
  if (7 < local_2d4) {
    FUN_1000fe70(local_2e8,local_2d4 + 1);
  }
  local_2d4 = 7;
  local_2e8 = local_2e8 & 0xffff0000;
  local_2d8 = 0;
  FUN_1000fed0(&local_24c,0,0xffffffff);
  FUN_1000fff0(L"\\Comm",5);
  FUN_1000fff0(L"\\Comm\\*.dll",0xb);
  lpFileName = (LPCWSTR)&local_2b4;
  if (7 < local_2a0) {
    lpFileName = local_2b4;
  }
  hFindFile = FindFirstFileW(lpFileName,&local_784);
  if (hFindFile != (HANDLE)0xffffffff) {
    do {
      if (((byte)local_784.dwFileAttributes & 0x10) == 0) {
        FUN_1000fed0(&local_24c,0,0xffffffff);
        FUN_1000fff0(&DAT_101b6024,1);
        if (local_784.cFileName[0] == L'\0') {
          iVar4 = 0;
        }
        else {
          pWVar5 = local_784.cFileName;
          do {
            WVar1 = *pWVar5;
            pWVar5 = pWVar5 + 1;
          } while (WVar1 != L'\0');
          iVar4 = (int)pWVar5 - (int)(local_784.cFileName + 1) >> 1;
        }
        FUN_1000fff0(local_784.cFileName,iVar4);
        iVar4 = FUN_10001ce0();
        if (iVar4 != 0) {
          FUN_1000fed0(&local_280,0,0xffffffff);
          local_4fc = (*DAT_101def10)();
          (*DAT_101def0c)(local_4f8,0x104);
          FUN_10011aa0(&local_534);
          FUN_10002990();
        }
      }
      BVar6 = FindNextFileW(hFindFile,&local_784);
    } while (BVar6 != 0);
  }
  local_284 = CCpRsString::vftable;
  FUN_1000e140();
  if (7 < local_26c) {
    FUN_1000fe70(local_280,local_26c + 1);
  }
  local_26c = 7;
  local_270 = 0;
  local_280 = local_280 & 0xffff0000;
  local_250 = CCpRsString::vftable;
  FUN_1000e140();
  if (7 < local_238) {
    FUN_1000fe70(local_24c,local_238 + 1);
  }
  local_238 = 7;
  local_23c = 0;
  local_24c = (undefined **)((uint)local_24c & 0xffff0000);
  local_2b8 = CCpRsString::vftable;
  FUN_1000e140();
  if (7 < local_2a0) {
    FUN_1000fe70(local_2b4,local_2a0 + 1);
  }
  local_2a0 = 7;
  local_2a4 = 0;
  local_2b4 = (LPCWSTR)((uint)local_2b4 & 0xffff0000);
  local_534 = CCpRsString::vftable;
  FUN_1000e140();
  if (7 < local_51c) {
    FUN_1000fe70(local_530,local_51c + 1);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

