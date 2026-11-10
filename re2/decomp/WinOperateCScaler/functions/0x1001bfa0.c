// rea decompile_all
// name: FUN_1001bfa0
// address: 0x1001bfa0
// body: available
// range: 0x1001bfa0-0x1001c027 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_1001bfa0(LPCWSTR param_1)

{
  HMODULE hModule;
  FARPROC pFVar1;
  int in_ECX;
  
  if (*(HMODULE *)(in_ECX + 4) != (HMODULE)0x0) {
    FreeLibrary(*(HMODULE *)(in_ECX + 4));
    *(undefined4 *)(in_ECX + 4) = 0;
    FUN_1001bf20();
  }
  hModule = LoadLibraryW(param_1);
  *(HMODULE *)(in_ECX + 4) = hModule;
  if (hModule != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(hModule,"VerifySignatureExport");
    *(FARPROC *)(in_ECX + 0xc) = pFVar1;
    if (pFVar1 != (FARPROC)0x0) {
      pFVar1 = GetProcAddress(*(HMODULE *)(in_ECX + 4),"SignFwExport");
      *(FARPROC *)(in_ECX + 8) = pFVar1;
      if (pFVar1 != (FARPROC)0x0) {
        return 1;
      }
    }
    if (*(HMODULE *)(in_ECX + 4) != (HMODULE)0x0) {
      FreeLibrary(*(HMODULE *)(in_ECX + 4));
      *(undefined4 *)(in_ECX + 4) = 0;
      FUN_1001bf20();
    }
  }
  return 0;
}

