// rea decompile_all
// name: AfxHtmlHelp
// address: 0x100416be
// body: available
// range: 0x100416be-0x1004173d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100416e0 to 0x10038e31 FUN_10038e31 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    struct HWND__ * __stdcall AfxHtmlHelp(struct HWND__ *,char const *,unsigned int,unsigned long)
    struct HWND__ * __stdcall AfxHtmlHelp(struct HWND__ *,wchar_t const *,unsigned int,unsigned
   long)
   
   Library: Visual Studio 2008 Release */

undefined4 AfxHtmlHelp(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  CNoTrackObject *pCVar1;
  HINSTANCE__ *hModule;
  undefined4 uVar2;
  FARPROC pFVar3;
  
  AfxLockGlobals(0xc);
  pCVar1 = CProcessLocalObject::GetData
                     ((CProcessLocalObject *)&DAT_10068710,(_func_CNoTrackObject_ptr *)&LAB_10040e80
                     );
  if (pCVar1 == (CNoTrackObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10038e31();
  }
  if (*(int *)(pCVar1 + 8) == 0) {
    hModule = AfxCtxLoadLibraryA("hhctrl.ocx");
    *(HINSTANCE__ **)(pCVar1 + 4) = hModule;
    if (hModule != (HINSTANCE__ *)0x0) {
      pFVar3 = GetProcAddress(hModule,"HtmlHelpW");
      *(FARPROC *)(pCVar1 + 8) = pFVar3;
      if (pFVar3 != (FARPROC)0x0) goto LAB_10041723;
      FreeLibrary(*(HMODULE *)(pCVar1 + 4));
      *(undefined4 *)(pCVar1 + 4) = 0;
    }
    uVar2 = 0;
  }
  else {
LAB_10041723:
    AfxUnlockGlobals(0xc);
    uVar2 = (**(code **)(pCVar1 + 8))(param_1,param_2,param_3,param_4);
  }
  return uVar2;
}

