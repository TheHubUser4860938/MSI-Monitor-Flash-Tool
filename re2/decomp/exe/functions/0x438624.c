// rea decompile_all
// name: FID_conflict:CreateFileA
// address: 0x438624
// body: available
// range: 0x438624-0x4386a0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
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

