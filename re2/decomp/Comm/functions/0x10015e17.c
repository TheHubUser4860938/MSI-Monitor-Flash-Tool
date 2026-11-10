// rea decompile_all
// name: CWinApp::LoadAppLangResourceDLL
// address: 0x10015e17
// body: available
// range: 0x10015e17-0x10015e8e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual struct HINSTANCE__ * __thiscall CWinApp::LoadAppLangResourceDLL(void)
   
   Library: Visual Studio 2015 Release */

HINSTANCE__ * __thiscall CWinApp::LoadAppLangResourceDLL(CWinApp *this)

{
  DWORD DVar1;
  LPWSTR pWVar2;
  HINSTANCE__ *pHVar3;
  int iVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  WCHAR local_228 [260];
  wchar_t local_20 [12];
  uint local_8;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  DVar1 = GetModuleFileNameW(*(HMODULE *)(this + 0x44),local_228,0x104);
  if ((DVar1 != 0) && (DVar1 != 0x104)) {
    pWVar2 = PathFindExtensionW(local_228);
    *pWVar2 = L'\0';
    pwVar5 = L"%Ts%Ts.dll";
    pwVar6 = local_20;
    for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pwVar6 = *(undefined4 *)pwVar5;
      pwVar5 = pwVar5 + 2;
      pwVar6 = pwVar6 + 2;
    }
    *pwVar6 = *pwVar5;
    AfxLoadLangResourceDLL(local_20,local_228);
  }
  pHVar3 = (HINSTANCE__ *)__security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return pHVar3;
}

