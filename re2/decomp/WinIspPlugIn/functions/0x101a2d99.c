// rea decompile_all
// name: common_end_thread
// address: 0x101a2d99
// body: available
// range: 0x101a2d99-0x101a2dee inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x101a2dab to EXTERNAL:0x10 KERNEL32.DLL::ExitThread (external=true, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x101a2de9 to EXTERNAL:0xa9 KERNEL32.DLL::FreeLibraryAndExitThread (external=true, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    void __cdecl common_end_thread(unsigned int)
   
   Library: Visual Studio 2015 Release */

void __cdecl common_end_thread(uint param_1)

{
  HANDLE hObject;
  HMODULE hLibModule;
  int iVar1;
  
  iVar1 = ___acrt_getptd_noexit();
  if ((iVar1 != 0) && (iVar1 = *(int *)(iVar1 + 0x360), iVar1 != 0)) {
    if (*(char *)(iVar1 + 0x10) != '\0') {
      ___acrt_RoUninitialize_0();
    }
    hObject = *(HANDLE *)(iVar1 + 8);
    if ((hObject != (HANDLE)0xffffffff) && (hObject != (HANDLE)0x0)) {
      CloseHandle(hObject);
    }
    hLibModule = *(HMODULE *)(iVar1 + 0xc);
    if ((hLibModule != (HMODULE)0xffffffff) && (hLibModule != (HMODULE)0x0)) {
                    /* WARNING: Subroutine does not return */
      FreeLibraryAndExitThread(hLibModule,param_1);
    }
  }
                    /* WARNING: Subroutine does not return */
  ExitThread(param_1);
}

