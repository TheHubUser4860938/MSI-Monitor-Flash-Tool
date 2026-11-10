// rea decompile_all
// name: FUN_10037990
// address: 0x10037990
// body: available
// range: 0x10037990-0x10037af1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


LPWSTR __cdecl FUN_10037990(LPCWSTR param_1,uint param_2)

{
  DWORD DVar1;
  DWORD DVar2;
  uint local_18;
  undefined4 local_14;
  int local_10;
  HMODULE local_c;
  LPWSTR local_8;
  
  local_14 = 0;
  local_c = (HMODULE)0x0;
  local_8 = (LPWSTR)0x0;
  if ((DAT_10066b90 == (HMODULE)0x0) &&
     (DAT_10066b90 = FUN_10036a00(u_ntdll_dll_10063108,0), DAT_10066b90 != (HMODULE)0x0)) {
    DAT_10066b94 = GetProcAddress(DAT_10066b90,s_LdrLockLoaderLock_1006311c);
    DAT_10066b98 = GetProcAddress(DAT_10066b90,s_LdrUnlockLoaderLock_10063130);
  }
  if ((DAT_10066b94 == (FARPROC)0x0) || (DAT_10066b98 == (FARPROC)0x0)) {
    local_8 = (LPWSTR)0x0;
  }
  else {
    local_10 = (*DAT_10066b94)(0,0,&local_14);
    if (local_10 == 0) {
      local_c = LoadLibraryExW(param_1,(HANDLE)0x0,param_2 | 1);
      if (local_c != (HMODULE)0x0) {
        local_18 = 0x80;
        while ((local_8 == (LPWSTR)0x0 && (local_18 < 0x1000))) {
          DVar1 = local_18 << 1;
          local_8 = LocalAlloc(0x40,local_18 << 2);
          if (local_8 == (LPWSTR)0x0) break;
          DVar2 = GetModuleFileNameW(local_c,local_8,DVar1);
          local_18 = DVar1;
          if ((DVar2 == DVar1) || (DVar1 = GetLastError(), DVar1 == 0x7a)) {
            SetLastError(0);
            LocalFree(local_8);
            local_8 = (LPWSTR)0x0;
          }
        }
        FreeLibrary(local_c);
      }
      (*DAT_10066b98)(0,local_14);
    }
  }
  return local_8;
}

