// rea decompile_all
// name: CWinApp::WriteProfileStringW
// address: 0x424682
// body: available
// range: 0x424682-0x42471e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CWinApp::WriteProfileStringW(wchar_t const *,wchar_t const
   *,wchar_t const *)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CWinApp::WriteProfileStringW(CWinApp *this,wchar_t *param_1,wchar_t *param_2,wchar_t *param_3)

{
  HKEY__ *hKey;
  int iVar1;
  size_t sVar2;
  BOOL BVar3;
  
  if (*(int *)(this + 0x58) == 0) {
    BVar3 = WritePrivateProfileStringW(param_1,param_2,param_3,*(LPCWSTR *)(this + 0x6c));
    return BVar3;
  }
  if (param_2 == (wchar_t *)0x0) {
    hKey = GetAppRegistryKey(this,(CAtlTransactionManager *)0x0);
    if (hKey != (HKEY__ *)0x0) {
      iVar1 = RegDeleteKeyW(hKey,param_1);
      goto LAB_004246f5;
    }
  }
  else {
    hKey = GetSectionKey(this,param_1,(CAtlTransactionManager *)0x0);
    if (param_3 == (wchar_t *)0x0) {
      if (hKey != (HKEY__ *)0x0) {
        iVar1 = RegDeleteValueW(hKey,param_2);
LAB_004246f5:
        RegCloseKey(hKey);
        return (uint)(iVar1 == 0);
      }
    }
    else if (hKey != (HKEY__ *)0x0) {
      sVar2 = _wcslen(param_3);
      iVar1 = RegSetValueExW(hKey,param_2,0,1,(BYTE *)param_3,sVar2 * 2 + 2);
      goto LAB_004246f5;
    }
  }
  return 0;
}

