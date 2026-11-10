// rea decompile_all
// name: FUN_1017f9c3
// address: 0x1017f9c3
// body: available
// range: 0x1017f9c3-0x1017fa82 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1017fa82 with no resolved callee; its no-return basis is unknown.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1017f9c3(void)

{
  code *pcVar1;
  HMODULE hModule;
  FARPROC pFVar2;
  FARPROC pFVar3;
  FARPROC pFVar4;
  undefined4 uVar5;
  
  ___vcrt_InitializeCriticalSectionEx(&DAT_10248c68,4000,0);
  hModule = GetModuleHandleW(L"kernel32.dll");
  if (hModule != (HMODULE)0x0) {
    pFVar2 = GetProcAddress(hModule,"InitializeConditionVariable");
    pFVar3 = GetProcAddress(hModule,"SleepConditionVariableCS");
    pFVar4 = GetProcAddress(hModule,"WakeAllConditionVariable");
    if (((pFVar2 == (FARPROC)0x0) || (pFVar3 == (FARPROC)0x0)) || (pFVar4 == (FARPROC)0x0)) {
      DAT_10248c84 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
      if (DAT_10248c84 == (HANDLE)0x0) goto LAB_1017fa7b;
    }
    else {
      DAT_10248c84 = (HANDLE)0x0;
      guard_check_icall(&DAT_10248c80);
      (*pFVar2)();
      _DAT_10248c88 = __crt_fast_encode_pointer<void*>(pFVar3);
      _DAT_10248c8c = __crt_fast_encode_pointer<void*>(pFVar4);
    }
    _atexit((_func_4879 *)&LAB_1017faa0);
    return 0;
  }
LAB_1017fa7b:
  ___scrt_fastfail(7);
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}

