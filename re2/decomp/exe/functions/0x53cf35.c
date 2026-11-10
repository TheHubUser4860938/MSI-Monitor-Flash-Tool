// rea decompile_all
// name: FUN_0053cf35
// address: 0x53cf35
// body: available
// range: 0x53cf35-0x53d00f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x53d00b to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0053cf35(int param_1,undefined4 *param_2)

{
  _TREEITEM *lParam;
  LRESULT LVar1;
  _TREEITEM *p_Var2;
  CMFCShellTreeCtrl *in_ECX;
  UINT Msg;
  WPARAM wParam;
  undefined4 local_2c;
  _TREEITEM *local_28;
  
  if ((param_1 == 0) || (lParam = *(_TREEITEM **)(param_1 + 0x3c), lParam == (_TREEITEM *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00429127();
  }
  if (*(int *)(param_1 + 0xc) == 1) {
    p_Var2 = (_TREEITEM *)SendMessageW(*(HWND *)(in_ECX + 0x20),0x110a,9,0);
    do {
      if (p_Var2 == (_TREEITEM *)0x0) goto LAB_0053cfe9;
      p_Var2 = (_TREEITEM *)SendMessageW(*(HWND *)(in_ECX + 0x20),0x110a,3,(LPARAM)p_Var2);
    } while (p_Var2 != lParam);
    SendMessageW(*(HWND *)(in_ECX + 0x20),0x110b,9,(LPARAM)lParam);
LAB_0053cfe9:
    wParam = 0x8001;
    Msg = 0x1102;
    p_Var2 = lParam;
  }
  else {
    if (*(int *)(param_1 + 0xc) != 2) goto LAB_0053cffd;
    CMFCShellTreeCtrl::GetChildItems(in_ECX,lParam);
    LVar1 = SendMessageW(*(HWND *)(in_ECX + 0x20),0x110a,4,(LPARAM)lParam);
    if (LVar1 != 0) goto LAB_0053cffd;
    _memset(&local_2c,0,0x28);
    local_2c = 0x40;
    wParam = 0;
    Msg = 0x113f;
    p_Var2 = (_TREEITEM *)&local_2c;
    local_28 = lParam;
  }
  SendMessageW(*(HWND *)(in_ECX + 0x20),Msg,wParam,(LPARAM)p_Var2);
LAB_0053cffd:
  *param_2 = 0;
  return;
}

