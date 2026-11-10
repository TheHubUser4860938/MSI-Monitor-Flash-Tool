// rea decompile_all
// name: FUN_100516e5
// address: 0x100516e5
// body: available
// range: 0x100516e5-0x1005171f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1005171b to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_100516e5(void)

{
  CWnd *pCVar1;
  HWND pHVar2;
  CWnd *pCVar3;
  CWnd *in_ECX;
  
  pCVar1 = CWnd::GetTopLevelParent(in_ECX);
  if (pCVar1 != (CWnd *)0x0) {
    pHVar2 = GetForegroundWindow();
    pCVar3 = CWnd::FromHandle(pHVar2);
    pHVar2 = GetLastActivePopup(*(HWND *)(pCVar1 + 0x20));
    pCVar1 = CWnd::FromHandle(pHVar2);
    return pCVar3 == pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1004886a();
}

