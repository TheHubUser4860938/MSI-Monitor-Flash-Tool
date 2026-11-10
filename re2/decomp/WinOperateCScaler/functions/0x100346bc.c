// rea decompile_all
// name: FID_conflict:CreateFileA
// address: 0x100346bc
// body: available
// range: 0x100346bc-0x10034738 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Different Base Names
    public: void * __thiscall ATL::CAtlTransactionManager::CreateFileA(char const *,unsigned
   long,unsigned long,struct _SECURITY_ATTRIBUTES *,unsigned long,unsigned long,void *)
    public: void * __thiscall ATL::CAtlTransactionManager::CreateFileW(wchar_t const *,unsigned
   long,unsigned long,struct _SECURITY_ATTRIBUTES *,unsigned long,unsigned long,void *)
   
   Library: Visual Studio 2015 Release */

HANDLE FID_conflict_CreateFileA
                 (LPCSTR lpFileName,DWORD dwDesiredAccess,DWORD dwShareMode,
                 LPSECURITY_ATTRIBUTES lpSecurityAttributes,DWORD dwCreationDisposition,
                 DWORD dwFlagsAndAttributes,HANDLE hTemplateFile)

{
  HMODULE hModule;
  FARPROC pFVar1;
  HANDLE pvVar2;
  int *in_ECX;
  
  if (*in_ECX == 0) {
    if (in_ECX[1] != 0) {
      pvVar2 = CreateFileW((LPCWSTR)lpFileName,dwDesiredAccess,dwShareMode,lpSecurityAttributes,
                           dwCreationDisposition,dwFlagsAndAttributes,(HANDLE)0x0);
      return pvVar2;
    }
  }
  else {
    hModule = GetModuleHandleW(L"kernel32.dll");
    if ((hModule != (HMODULE)0x0) &&
       (pFVar1 = GetProcAddress(hModule,"CreateFileTransactedW"), pFVar1 != (FARPROC)0x0)) {
      guard_check_icall(lpFileName,dwDesiredAccess,dwShareMode,lpSecurityAttributes,
                        dwCreationDisposition,dwFlagsAndAttributes,hTemplateFile,*in_ECX,0,0);
      pvVar2 = (HANDLE)(*pFVar1)();
      return pvVar2;
    }
  }
  return (HANDLE)0xffffffff;
}

