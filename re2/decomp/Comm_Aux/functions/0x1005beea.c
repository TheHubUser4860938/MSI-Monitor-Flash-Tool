// rea decompile_all
// name: ATL::CAtlTransactionManager::GetFileAttributesExW
// address: 0x1005beea
// body: available
// range: 0x1005beea-0x1005bf4d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall ATL::CAtlTransactionManager::GetFileAttributesExW(wchar_t const *,enum
   _GET_FILEEX_INFO_LEVELS,void *)
   
   Library: Visual Studio 2015 Release */

int __thiscall
ATL::CAtlTransactionManager::GetFileAttributesExW
          (CAtlTransactionManager *this,wchar_t *param_1,_GET_FILEEX_INFO_LEVELS param_2,
          void *param_3)

{
  HMODULE hModule;
  FARPROC pFVar1;
  int iVar2;
  BOOL BVar3;
  
  if (param_3 != (void *)0x0) {
    if (*(int *)this == 0) {
      if (*(int *)(this + 4) != 0) {
                    /* WARNING: Could not recover jumptable at 0x1005bf40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        BVar3 = ::GetFileAttributesExW(param_1,param_2,param_3);
        return BVar3;
      }
    }
    else {
      hModule = GetModuleHandleW(L"kernel32.dll");
      if ((hModule != (HMODULE)0x0) &&
         (pFVar1 = GetProcAddress(hModule,"GetFileAttributesTransactedW"), pFVar1 != (FARPROC)0x0))
      {
        guard_check_icall(param_1,param_2,param_3,*(undefined4 *)this);
        iVar2 = (*pFVar1)();
        return iVar2;
      }
    }
  }
  return 0;
}

