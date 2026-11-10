// rea decompile_all
// name: FUN_0050e1a4
// address: 0x50e1a4
// body: available
// range: 0x50e1a4-0x50e232 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x50e22e to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0050e1a4(wchar_t *param_1)

{
  CWnd *pCVar1;
  CToolTipCtrl *pCVar2;
  int iVar3;
  CWnd *in_ECX;
  WPARAM wParam;
  
  if ((in_ECX == (CWnd *)0x0) || (*(int *)(in_ECX + 0x20) == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00429127();
  }
  if (param_1 == (wchar_t *)0x0) {
    pCVar2 = *(CToolTipCtrl **)(in_ECX + 0x78c);
    if (pCVar2 == (CToolTipCtrl *)0x0) {
      return;
    }
    if (*(int *)(pCVar2 + 0x20) == 0) {
      return;
    }
    wParam = 0;
  }
  else {
    pCVar1 = in_ECX + 0x78c;
    if ((*(CToolTipCtrl **)pCVar1 == (CToolTipCtrl *)0x0) ||
       (*(int *)(*(CToolTipCtrl **)pCVar1 + 0x20) == 0)) {
      iVar3 = CTooltipManager::CreateToolTip((CToolTipCtrl **)pCVar1,in_ECX,0x40);
      if (iVar3 != 0) {
        CToolTipCtrl::AddTool(*(CToolTipCtrl **)pCVar1,in_ECX,param_1,(tagRECT *)0x0,0);
      }
    }
    else {
      FUN_004e5834(param_1,in_ECX,0);
    }
    pCVar2 = *(CToolTipCtrl **)pCVar1;
    if (pCVar2 == (CToolTipCtrl *)0x0) {
      return;
    }
    if (*(int *)(pCVar2 + 0x20) == 0) {
      return;
    }
    wParam = 1;
  }
  SendMessageW(*(HWND *)(pCVar2 + 0x20),0x401,wParam,0);
  return;
}

