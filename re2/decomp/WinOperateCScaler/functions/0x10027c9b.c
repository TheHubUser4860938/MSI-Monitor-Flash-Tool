// rea decompile_all
// name: ATL::AtlLoadSystemLibraryUsingFullPath
// address: 0x10027c9b
// body: available
// range: 0x10027c9b-0x10027d77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    struct HINSTANCE__ * __cdecl ATL::AtlLoadSystemLibraryUsingFullPath(wchar_t const *)
   
   Library: Visual Studio 2015 Release */

HINSTANCE__ * __cdecl ATL::AtlLoadSystemLibraryUsingFullPath(wchar_t *param_1)

{
  HMODULE hModule;
  FARPROC Ptr;
  UINT UVar1;
  errno_t eVar2;
  HINSTANCE__ *pHVar3;
  WCHAR local_214 [262];
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  if (DAT_10209294 == (PVOID)0x0) {
    hModule = GetModuleHandleW(L"kernel32.dll");
    if (hModule != (HMODULE)0x0) {
      Ptr = GetProcAddress(hModule,"SetDefaultDllDirectories");
      DAT_10209294 = EncodePointer(Ptr);
      goto LAB_10027cf0;
    }
  }
  else {
    Ptr = DecodePointer(DAT_10209294);
LAB_10027cf0:
    if (Ptr != (FARPROC)0x0) {
      LoadLibraryExW(param_1,(HANDLE)0x0,0x800);
      goto LAB_10027d68;
    }
  }
  UVar1 = GetSystemDirectoryW(local_214,0x105);
  if ((((UVar1 != 0) && (UVar1 < 0x105)) &&
      ((local_214[UVar1 - 1] == L'\\' || (eVar2 = _wcscat_s(local_214,0x105,L"\\"), eVar2 == 0))))
     && (eVar2 = _wcscat_s(local_214,0x105,param_1), eVar2 == 0)) {
    _IsolationAwareLoadLibraryW_4(local_214);
  }
LAB_10027d68:
  pHVar3 = (HINSTANCE__ *)__security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return pHVar3;
}

