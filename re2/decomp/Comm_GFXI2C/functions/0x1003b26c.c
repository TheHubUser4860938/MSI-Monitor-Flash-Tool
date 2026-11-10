// rea decompile_all
// name: FID_conflict:WinHelpW
// address: 0x1003b26c
// body: available
// range: 0x1003b26c-0x1003b2ac inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003b282 to 0x10038e31 FUN_10038e31 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Different Base Names
    public: virtual void __thiscall CWinApp::WinHelpA(unsigned long,unsigned int)
    public: virtual void __thiscall CWinApp::WinHelpW(unsigned long,unsigned int)
   
   Library: Visual Studio 2008 Release */

BOOL FID_conflict_WinHelpW(HWND hWndMain,LPCWSTR lpszHelp,UINT uCommand,ULONG_PTR dwData)

{
  CWnd *pCVar1;
  BOOL BVar2;
  int in_ECX;
  
  pCVar1 = AfxGetMainWnd();
  if (pCVar1 == (CWnd *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10038e31();
  }
  *(undefined4 *)(in_ECX + 0x5c) = 0;
  PostMessageW(*(HWND *)(pCVar1 + 0x20),0x36a,0,0);
  BVar2 = (**(code **)(*(int *)pCVar1 + 0x7c))(hWndMain,lpszHelp);
  return BVar2;
}

