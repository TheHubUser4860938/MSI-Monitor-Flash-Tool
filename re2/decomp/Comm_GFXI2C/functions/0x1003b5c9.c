// rea decompile_all
// name: CWinApp::LoadAppLangResourceDLL
// address: 0x1003b5c9
// body: available
// range: 0x1003b5c9-0x1003b641 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual struct HINSTANCE__ * __thiscall CWinApp::LoadAppLangResourceDLL(void)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

HINSTANCE__ * __thiscall CWinApp::LoadAppLangResourceDLL(CWinApp *this)

{
  DWORD DVar1;
  LPWSTR pWVar2;
  HINSTANCE__ *pHVar3;
  WCHAR local_224 [260];
  wchar_t local_1c [10];
  uint local_8;
  
  local_8 = DAT_10064168 ^ (uint)&stack0xfffffffc;
  DVar1 = GetModuleFileNameW(*(HMODULE *)(this + 0x44),local_224,0x104);
  if ((DVar1 != 0) && (DVar1 != 0x104)) {
    pWVar2 = PathFindExtensionW(local_224);
    *pWVar2 = L'\0';
    builtin_wcsncpy(local_1c,L"%s%s.dll",9);
    FUN_1003b34e(local_1c,(uint)local_224);
  }
  pHVar3 = (HINSTANCE__ *)__security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return pHVar3;
}

