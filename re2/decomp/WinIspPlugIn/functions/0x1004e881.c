// rea decompile_all
// name: CWinApp::GetAppRegistryKey
// address: 0x1004e881
// body: available
// range: 0x1004e881-0x1004e943 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: struct HKEY__ * __thiscall CWinApp::GetAppRegistryKey(class ATL::CAtlTransactionManager
   *)
   
   Library: Visual Studio 2015 Release */

HKEY__ * __thiscall CWinApp::GetAppRegistryKey(CWinApp *this,CAtlTransactionManager *param_1)

{
  int iVar1;
  HKEY local_14;
  DWORD local_10;
  HKEY local_c;
  HKEY local_8;
  
  local_14 = (HKEY__ *)0x0;
  local_8 = (HKEY)0x0;
  local_c = (HKEY)0x0;
  if (param_1 == (CAtlTransactionManager *)0x0) {
    iVar1 = RegOpenKeyExW((HKEY)0x80000001,L"software",0,0x2001f,&local_8);
  }
  else {
    iVar1 = FID_conflict_RegOpenKeyExA((HKEY)0x80000001,(LPCSTR)L"software",0,0x2001f,&local_8);
  }
  if (iVar1 == 0) {
    if (param_1 == (CAtlTransactionManager *)0x0) {
      iVar1 = RegCreateKeyExW(local_8,*(LPCWSTR *)(this + 0x58),0,(LPWSTR)0x0,0,0x2001f,
                              (LPSECURITY_ATTRIBUTES)0x0,&local_c,&local_10);
    }
    else {
      iVar1 = FID_conflict_RegCreateKeyExW
                        (local_8,*(LPCWSTR *)(this + 0x58),0,(LPWSTR)0x0,0,0x2001f,
                         (LPSECURITY_ATTRIBUTES)0x0,&local_c,&local_10);
    }
    if (iVar1 == 0) {
      if (param_1 == (CAtlTransactionManager *)0x0) {
        RegCreateKeyExW(local_c,*(LPCWSTR *)(this + 0x6c),0,(LPWSTR)0x0,0,0x2001f,
                        (LPSECURITY_ATTRIBUTES)0x0,&local_14,&local_10);
      }
      else {
        FID_conflict_RegCreateKeyExW
                  (local_c,*(LPCWSTR *)(this + 0x6c),0,(LPWSTR)0x0,0,0x2001f,
                   (LPSECURITY_ATTRIBUTES)0x0,&local_14,&local_10);
      }
    }
  }
  if (local_8 != (HKEY)0x0) {
    RegCloseKey(local_8);
  }
  if (local_c != (HKEY)0x0) {
    RegCloseKey(local_c);
  }
  return local_14;
}

