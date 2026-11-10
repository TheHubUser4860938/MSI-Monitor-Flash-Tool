// rea decompile_all
// name: FUN_0055b40f
// address: 0x55b40f
// body: available
// range: 0x55b40f-0x55b4ce inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x55b4ce with no resolved callee; its no-return basis is unknown.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0055b40f(void)

{
  code *pcVar1;
  HMODULE hModule;
  FARPROC pFVar2;
  FARPROC pFVar3;
  FARPROC pFVar4;
  undefined4 uVar5;
  
  ___vcrt_InitializeCriticalSectionEx(&DAT_006183bc,4000,0);
  hModule = GetModuleHandleW(L"kernel32.dll");
  if (hModule != (HMODULE)0x0) {
    pFVar2 = GetProcAddress(hModule,"InitializeConditionVariable");
    pFVar3 = GetProcAddress(hModule,"SleepConditionVariableCS");
    pFVar4 = GetProcAddress(hModule,"WakeAllConditionVariable");
    if (((pFVar2 == (FARPROC)0x0) || (pFVar3 == (FARPROC)0x0)) || (pFVar4 == (FARPROC)0x0)) {
      DAT_006183d8 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
      if (DAT_006183d8 == (HANDLE)0x0) goto LAB_0055b4c7;
    }
    else {
      DAT_006183d8 = (HANDLE)0x0;
      guard_check_icall(&DAT_006183d4);
      (*pFVar2)();
      _DAT_006183dc = __crt_fast_encode_pointer<void*>(pFVar3);
      _DAT_006183e0 = __crt_fast_encode_pointer<void*>(pFVar4);
    }
    _atexit(FUN_0055b4cf);
    return 0;
  }
LAB_0055b4c7:
  ___scrt_fastfail(7);
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}

