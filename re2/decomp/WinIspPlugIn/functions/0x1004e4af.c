// rea decompile_all
// name: FUN_1004e4af
// address: 0x1004e4af
// body: available
// range: 0x1004e4af-0x1004e5ce inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1004e5ca to 0x1004a383 FUN_1004a383 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_1004e4af(int param_1)

{
  CWnd *pCVar1;
  BOOL BVar2;
  AFX_MODULE_STATE *pAVar3;
  CNoTrackObject *pCVar4;
  int in_ECX;
  CWnd *this;
  
  if (param_1 < 1) {
    pCVar1 = *(CWnd **)(in_ECX + 0x20);
    if (((pCVar1 != (CWnd *)0x0) && (*(int *)(pCVar1 + 0x20) != 0)) &&
       (BVar2 = IsWindowVisible(*(HWND *)(pCVar1 + 0x20)), BVar2 != 0)) {
      FUN_1005292a(pCVar1,*(undefined4 *)(pCVar1 + 0x20),0x363,1,0);
      CWnd::SendMessageToDescendants(*(HWND__ **)(pCVar1 + 0x20),0x363,1,0,1,1);
    }
    pAVar3 = AfxGetModuleState();
    pCVar4 = CThreadLocalObject::GetData((CThreadLocalObject *)(pAVar3 + 0x74),FUN_1004cbaa);
    if (pCVar4 == (CNoTrackObject *)0x0) {
LAB_1004e5ca:
                    /* WARNING: Subroutine does not return */
      FUN_1004a383();
    }
    for (this = *(CWnd **)(pCVar4 + 8); this != (CWnd *)0x0; this = *(CWnd **)(this + 0x98)) {
      if ((*(int *)(this + 0x20) != 0) && (this != pCVar1)) {
        if (*(int *)(this + 0xcc) == 0) {
          CWnd::ShowWindow(this,0);
        }
        BVar2 = IsWindowVisible(*(HWND *)(this + 0x20));
        if ((BVar2 != 0) || (-1 < *(int *)(this + 0xcc))) {
          FUN_1005292a(this,*(undefined4 *)(this + 0x20),0x363,1,0);
          CWnd::SendMessageToDescendants(*(HWND__ **)(this + 0x20),0x363,1,0,1,1);
        }
        if (0 < *(int *)(this + 0xcc)) {
          CWnd::ShowWindow(this,*(int *)(this + 0xcc));
        }
        *(undefined4 *)(this + 0xcc) = 0xffffffff;
      }
    }
  }
  else {
    pAVar3 = AfxGetModuleState();
    pCVar4 = CThreadLocalObject::GetData((CThreadLocalObject *)(pAVar3 + 0x74),FUN_1004cbaa);
    if (pCVar4 == (CNoTrackObject *)0x0) goto LAB_1004e5ca;
    if (*(int *)(pCVar4 + 0x10) == 0) {
      FUN_10050a07();
      AfxUnlockTempMaps(1);
    }
  }
  return param_1 < 1;
}

