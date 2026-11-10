// rea decompile_all
// name: FUN_004391b0
// address: 0x4391b0
// body: available
// range: 0x4391b0-0x439293 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43928f to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004391b0(void)

{
  code *pcVar1;
  AFX_MODULE_STATE *pAVar2;
  HWND pHVar3;
  CWnd *pCVar4;
  LRESULT LVar5;
  CWnd *in_ECX;
  
  if (*(int *)(in_ECX + 0x90) != 0) {
    if (*(int *)(in_ECX + 0x90) != 0x3f107) {
      pAVar2 = AfxGetModuleState();
      pcVar1 = *(code **)(**(int **)(pAVar2 + 4) + 200);
      guard_check_icall(*(undefined4 *)(in_ECX + 0x90),1);
      (*pcVar1)();
    }
    return;
  }
  for (pHVar3 = GetCapture(); pHVar3 != (HWND)0x0; pHVar3 = AfxGetParentOwner(pHVar3)) {
    LVar5 = SendMessageW(pHVar3,0x365,0,0);
    if (LVar5 != 0) {
      return;
    }
  }
  for (pHVar3 = GetFocus(); pHVar3 != (HWND)0x0; pHVar3 = AfxGetParentOwner(pHVar3)) {
    LVar5 = SendMessageW(pHVar3,0x365,0,0);
    if (LVar5 != 0) {
      return;
    }
  }
  pCVar4 = CWnd::GetTopLevelParent(in_ECX);
  if (pCVar4 != (CWnd *)0x0) {
    pHVar3 = GetLastActivePopup(*(HWND *)(pCVar4 + 0x20));
    while( true ) {
      if (pHVar3 == (HWND)0x0) {
        SendMessageW(*(HWND *)(in_ECX + 0x20),0x111,0xe147,0);
        return;
      }
      LVar5 = SendMessageW(pHVar3,0x365,0,0);
      if (LVar5 != 0) break;
      pHVar3 = AfxGetParentOwner(pHVar3);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00429127();
}

