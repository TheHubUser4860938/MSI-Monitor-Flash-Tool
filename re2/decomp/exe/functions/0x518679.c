// rea decompile_all
// name: FUN_00518679
// address: 0x518679
// body: available
// range: 0x518679-0x51876a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x518766 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00518679(int param_1,HWND__ *param_2)

{
  int iVar1;
  WPARAM wParam;
  int in_ECX;
  
  if (param_1 != 0) {
    if (*(int *)(*(int *)(in_ECX + 0xb8) + -0xc) == 0) {
      FUN_00415ad0(param_1);
      if (*(int *)(in_ECX + 0xb0) != 0) {
        FUN_004349b3(*(int *)(in_ECX + 0xb8));
      }
    }
    iVar1 = FUN_00518e37(param_1);
    if (iVar1 < 0) {
      AddTail(param_1);
      CList<HWND__*,HWND__*>::AddTail((CList<HWND__*,HWND__*> *)(in_ECX + 0xd8),param_2);
    }
    iVar1 = *(int *)(in_ECX + 0xb4);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x20) != 0)) {
      wParam = SendMessageW(*(HWND *)(iVar1 + 0x20),0x158,0xffffffff,param_1);
      if (wParam == 0xffffffff) {
        wParam = SendMessageW(*(HWND *)(*(int *)(in_ECX + 0xb4) + 0x20),0x143,0,param_1);
      }
      SendMessageW(*(HWND *)(*(int *)(in_ECX + 0xb4) + 0x20),0x14e,wParam,0);
      SendMessageW(*(HWND *)(*(int *)(in_ECX + 0xb4) + 0x20),0x151,wParam,(LPARAM)param_2);
      CComboBox::SetEditSel(*(CComboBox **)(in_ECX + 0xb4),-1,0);
    }
    return *(int *)(in_ECX + 200) + -1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00429127();
}

