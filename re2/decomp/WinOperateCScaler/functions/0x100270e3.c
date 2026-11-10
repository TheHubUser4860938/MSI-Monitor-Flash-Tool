// rea decompile_all
// name: FUN_100270e3
// address: 0x100270e3
// body: available
// range: 0x100270e3-0x10027169 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10027165 to 0x1001d023 FUN_1001d023 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_100270e3(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  CNoTrackObject *pCVar2;
  HINSTANCE__ *hModule;
  undefined4 uVar3;
  FARPROC pFVar4;
  
  FUN_10024f7c(0xc);
  pCVar2 = CProcessLocalObject::GetData
                     ((CProcessLocalObject *)&DAT_10209298,(_func_CNoTrackObject_ptr *)&LAB_10028310
                     );
  if (pCVar2 == (CNoTrackObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1001d023();
  }
  if (*(int *)(pCVar2 + 8) == 0) {
    hModule = ATL::AtlLoadSystemLibraryUsingFullPath(L"hhctrl.ocx");
    *(HINSTANCE__ **)(pCVar2 + 4) = hModule;
    if (hModule != (HINSTANCE__ *)0x0) {
      pFVar4 = GetProcAddress(hModule,"HtmlHelpW");
      *(FARPROC *)(pCVar2 + 8) = pFVar4;
      if (pFVar4 != (FARPROC)0x0) goto LAB_10027141;
      FreeLibrary(*(HMODULE *)(pCVar2 + 4));
      *(undefined4 *)(pCVar2 + 4) = 0;
    }
    uVar3 = 0;
  }
  else {
LAB_10027141:
    FUN_10024ff1(0xc);
    pcVar1 = *(code **)(pCVar2 + 8);
    guard_check_icall(param_1,param_2,param_3,param_4);
    uVar3 = (*pcVar1)();
  }
  return uVar3;
}

