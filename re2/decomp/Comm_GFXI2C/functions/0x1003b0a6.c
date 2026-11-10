// rea decompile_all
// name: FUN_1003b0a6
// address: 0x1003b0a6
// body: available
// range: 0x1003b0a6-0x1003b1ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_1003b0a6(void *this,uint param_1,LCID param_2)

{
  errno_t eVar1;
  int *piVar2;
  wchar_t *lpLibFileName;
  HMODULE hModule;
  FARPROC pFVar3;
  int iVar4;
  undefined4 local_278;
  undefined1 local_274 [60];
  uint local_238;
  wchar_t local_234 [274];
  wchar_t local_10 [4];
  uint local_8;
  
  local_8 = DAT_10064168 ^ (uint)&stack0xfffffffc;
  local_238 = param_1;
  if (param_2 == 0x800) {
    eVar1 = _wcscpy_s(local_10,4,L"LOC");
    FUN_10003f20(eVar1);
  }
  else {
    iVar4 = GetLocaleInfoW(param_2,3,local_10,4);
    if (iVar4 == 0) goto LAB_1003b1e3;
  }
  piVar2 = __errno();
  iVar4 = *piVar2;
  piVar2 = __errno();
  *piVar2 = 0;
  local_238 = __snwprintf_s(local_234,0x112,0x111,this,local_238,local_10);
  piVar2 = __errno();
  if (*piVar2 == 0) {
    piVar2 = __errno();
    *piVar2 = iVar4;
  }
  else {
    piVar2 = __errno();
    ATL::AtlCrtErrorCheck(*piVar2);
  }
  if ((local_238 != 0xffffffff) && (local_238 < 0x112)) {
    lpLibFileName = PathFindFileNameW(local_234);
    local_278 = 0x40;
    _memset(local_274,0,0x3c);
    hModule = GetModuleHandleW(L"KERNEL32");
    if ((hModule == (HMODULE)0x0) ||
       ((pFVar3 = GetProcAddress(hModule,"FindActCtxSectionStringW"), pFVar3 == (FARPROC)0x0 ||
        (iVar4 = (*pFVar3)(0,0,2,lpLibFileName,&local_278), iVar4 == 0)))) {
      lpLibFileName = local_234;
    }
    LoadLibraryExW(lpLibFileName,(HANDLE)0x0,0);
  }
LAB_1003b1e3:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

