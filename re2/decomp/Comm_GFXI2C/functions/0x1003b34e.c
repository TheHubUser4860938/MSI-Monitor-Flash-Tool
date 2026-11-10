// rea decompile_all
// name: FUN_1003b34e
// address: 0x1003b34e
// body: available
// range: 0x1003b34e-0x1003b5c8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void FUN_1003b34e(void *param_1,uint param_2)

{
  LCID *pLVar1;
  bool bVar2;
  FARPROC pFVar3;
  uint uVar4;
  HMODULE hModule;
  DWORD DVar5;
  int iVar6;
  int iVar7;
  undefined4 local_270;
  undefined4 local_26c;
  WCHAR *local_268;
  undefined4 local_25c;
  undefined4 local_254;
  LCID local_250 [5];
  HMODULE local_23c;
  uint local_238;
  CActivationContext local_234 [8];
  void *local_22c;
  uint local_228;
  LCID local_224;
  WCHAR local_220 [260];
  undefined2 local_18;
  undefined2 local_16;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x260;
  local_8 = 0x1003b35d;
  local_22c = param_1;
  local_238 = param_2;
  local_228 = 0;
  local_224 = 0;
  local_23c = GetModuleHandleW(L"kernel32.dll");
  pFVar3 = GetProcAddress(local_23c,"GetUserDefaultUILanguage");
  if (pFVar3 == (FARPROC)0x0) {
    hModule = GetModuleHandleW(L"ntdll.dll");
    if (hModule != (HMODULE)0x0) {
      local_228 = 0;
      EnumResourceLanguagesW(hModule,(LPCWSTR)0x10,(LPCWSTR)0x1,FUN_1003ab93,(LONG_PTR)&local_228);
      if ((ushort)local_228 != 0) {
        uVar4 = local_228 & 0x3ff;
        local_250[0] = ConvertDefaultLocale((uint)((ushort)local_228 >> 10) << 10 | uVar4);
        local_250[1] = ConvertDefaultLocale(uVar4);
        local_224 = 2;
      }
    }
  }
  else {
    uVar4 = (*pFVar3)();
    local_228 = uVar4 & 0xffff;
    local_224 = uVar4 & 0x3ff;
    local_250[0] = ConvertDefaultLocale(uVar4 & 0xffff);
    local_250[1] = ConvertDefaultLocale(local_224);
    local_224 = 2;
    pFVar3 = GetProcAddress(local_23c,"GetSystemDefaultUILanguage");
    if (pFVar3 != (FARPROC)0x0) {
      uVar4 = (*pFVar3)();
      local_228 = uVar4 & 0xffff;
      local_250[2] = ConvertDefaultLocale(uVar4 & 0xffff);
      local_250[3] = ConvertDefaultLocale(uVar4 & 0x3ff);
      local_224 = 4;
    }
  }
  if (DAT_10066d50 == 0) {
    pLVar1 = local_250 + local_224;
    local_224 = local_224 + 1;
    *pLVar1 = 0x800;
  }
  local_16 = 0;
  local_18 = 0;
  DVar5 = GetModuleFileNameW((HMODULE)&IMAGE_DOS_HEADER_10000000,local_220,0x105);
  if (DVar5 != 0) {
    _memset(&local_270,0,0x20);
    local_268 = local_220;
    local_270 = 0x20;
    local_25c = 1000;
    local_254 = 0x10000000;
    local_26c = 0x88;
    CActivationContext::CActivationContext(local_234,(void *)0xffffffff);
    local_8 = 0;
    bVar2 = Create(local_234,(int)&local_270);
    if (bVar2) {
      CActivationContext::Activate(local_234);
    }
    iVar7 = 0;
    if (0 < (int)local_224) {
      do {
        iVar6 = FUN_1003b0a6(local_22c,local_238,local_250[iVar7]);
        if (iVar6 != 0) break;
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)local_224);
    }
    local_8 = 0xffffffff;
    CActivationContext::Release(local_234);
  }
  FUN_100484ca();
  return;
}

