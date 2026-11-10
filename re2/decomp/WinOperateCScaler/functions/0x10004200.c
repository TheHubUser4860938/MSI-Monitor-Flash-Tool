// rea decompile_all
// name: FUN_10004200
// address: 0x10004200
// body: available
// range: 0x10004200-0x10004393 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_10004200(LPCWSTR param_1)

{
  HMODULE hModule;
  FARPROC pFVar1;
  int in_ECX;
  
  if (*(HMODULE *)(in_ECX + 4) != (HMODULE)0x0) {
    FreeLibrary(*(HMODULE *)(in_ECX + 4));
    *(undefined4 *)(in_ECX + 4) = 0;
    FUN_10004040();
  }
  hModule = LoadLibraryW(param_1);
  *(HMODULE *)(in_ECX + 4) = hModule;
  if (hModule == (HMODULE)0x0) {
    return 0;
  }
  pFVar1 = GetProcAddress(hModule,"SetIDev");
  *(FARPROC *)(in_ECX + 8) = pFVar1;
  if (pFVar1 != (FARPROC)0x0) {
    pFVar1 = GetProcAddress(*(HMODULE *)(in_ECX + 4),"IspFlash");
    *(FARPROC *)(in_ECX + 0xc) = pFVar1;
    if (pFVar1 != (FARPROC)0x0) {
      pFVar1 = GetProcAddress(*(HMODULE *)(in_ECX + 4),"SetCommInterface");
      *(FARPROC *)(in_ECX + 0x14) = pFVar1;
      if (pFVar1 != (FARPROC)0x0) {
        pFVar1 = GetProcAddress(*(HMODULE *)(in_ECX + 4),"RecordFWVersion");
        *(FARPROC *)(in_ECX + 0x18) = pFVar1;
        if (pFVar1 != (FARPROC)0x0) {
          pFVar1 = GetProcAddress(*(HMODULE *)(in_ECX + 4),"GetKeyFromFlash");
          *(FARPROC *)(in_ECX + 0x10) = pFVar1;
          if (pFVar1 != (FARPROC)0x0) {
            pFVar1 = GetProcAddress(*(HMODULE *)(in_ECX + 4),"SetUIFunction");
            *(FARPROC *)(in_ECX + 0x1c) = pFVar1;
            if (pFVar1 != (FARPROC)0x0) {
              pFVar1 = GetProcAddress(*(HMODULE *)(in_ECX + 4),"GetFWInfo");
              *(FARPROC *)(in_ECX + 0x20) = pFVar1;
              if (pFVar1 != (FARPROC)0x0) {
                pFVar1 = GetProcAddress(*(HMODULE *)(in_ECX + 4),"DumpFlash");
                *(FARPROC *)(in_ECX + 0x24) = pFVar1;
                if (pFVar1 != (FARPROC)0x0) {
                  pFVar1 = GetProcAddress(*(HMODULE *)(in_ECX + 4),"GetUserDefinedInfoFromDDCCI");
                  *(FARPROC *)(in_ECX + 0x28) = pFVar1;
                  pFVar1 = GetProcAddress(*(HMODULE *)(in_ECX + 4),"ChipEraseFlash");
                  *(FARPROC *)(in_ECX + 0x30) = pFVar1;
                  pFVar1 = GetProcAddress(*(HMODULE *)(in_ECX + 4),"IspEeprom");
                  *(FARPROC *)(in_ECX + 0x34) = pFVar1;
                  pFVar1 = GetProcAddress(*(HMODULE *)(in_ECX + 4),"EnterISPModeExport");
                  *(FARPROC *)(in_ECX + 0x38) = pFVar1;
                  pFVar1 = GetProcAddress(*(HMODULE *)(in_ECX + 4),"ResetMCUExport");
                  *(FARPROC *)(in_ECX + 0x3c) = pFVar1;
                  pFVar1 = GetProcAddress(*(HMODULE *)(in_ECX + 4),"GetMergeFwInfo");
                  *(FARPROC *)(in_ECX + 0x40) = pFVar1;
                  pFVar1 = GetProcAddress(*(HMODULE *)(in_ECX + 4),"SetMergeFwInfo");
                  *(FARPROC *)(in_ECX + 0x44) = pFVar1;
                  pFVar1 = GetProcAddress(*(HMODULE *)(in_ECX + 4),"SendUserDefinedInfo");
                  *(FARPROC *)(in_ECX + 0x2c) = pFVar1;
                  pFVar1 = GetProcAddress(*(HMODULE *)(in_ECX + 4),"I2CWriteExport");
                  *(FARPROC *)(in_ECX + 0x48) = pFVar1;
                  pFVar1 = GetProcAddress(*(HMODULE *)(in_ECX + 4),"GetScalerType");
                  *(FARPROC *)(in_ECX + 0x4c) = pFVar1;
                  pFVar1 = GetProcAddress(*(HMODULE *)(in_ECX + 4),"BankEraseFlash");
                  *(FARPROC *)(in_ECX + 0x50) = pFVar1;
                  return 1;
                }
              }
            }
          }
        }
      }
      FUN_100041d0();
      return 0;
    }
  }
  if (*(HMODULE *)(in_ECX + 4) != (HMODULE)0x0) {
    FreeLibrary(*(HMODULE *)(in_ECX + 4));
    *(undefined4 *)(in_ECX + 4) = 0;
    FUN_10004040();
  }
  return 0;
}

