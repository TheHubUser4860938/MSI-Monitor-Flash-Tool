// rea decompile_all
// name: FID_conflict:GetProfileIntW
// address: 0x100593cb
// body: available
// range: 0x100593cb-0x10059437 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Different Base Names
    public: virtual unsigned int __thiscall CWinApp::GetProfileIntA(char const *,char const *,int)
    public: virtual unsigned int __thiscall CWinApp::GetProfileIntW(wchar_t const *,wchar_t const
   *,int)
   
   Library: Visual Studio 2015 Release */

UINT FID_conflict_GetProfileIntW(LPCWSTR lpAppName,LPCWSTR lpKeyName,INT nDefault)

{
  HKEY__ *hKey;
  LSTATUS LVar1;
  CWinApp *in_ECX;
  DWORD local_10;
  UINT local_c;
  DWORD local_8;
  
  if (*(int *)(in_ECX + 0x58) == 0) {
    nDefault = GetPrivateProfileIntW(lpAppName,lpKeyName,nDefault,*(LPCWSTR *)(in_ECX + 0x6c));
  }
  else {
    hKey = CWinApp::GetSectionKey(in_ECX,lpAppName,(CAtlTransactionManager *)0x0);
    if (hKey != (HKEY__ *)0x0) {
      local_8 = 4;
      LVar1 = RegQueryValueExW(hKey,lpKeyName,(LPDWORD)0x0,&local_10,(LPBYTE)&local_c,&local_8);
      RegCloseKey(hKey);
      if (LVar1 == 0) {
        return local_c;
      }
    }
  }
  return nDefault;
}

