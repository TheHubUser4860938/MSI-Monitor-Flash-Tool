// rea decompile_all
// name: FUN_0054f644
// address: 0x54f644
// body: available
// range: 0x54f644-0x54f6d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x54f6d3 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


CMFCTasksPaneTaskGroup * FUN_0054f644(int param_1)

{
  CMFCTasksPane *this;
  int iVar1;
  CMFCTasksPaneTaskGroup *pCVar2;
  int *piVar3;
  CWnd *this_00;
  int in_ECX;
  int local_8;
  
  this = *(CMFCTasksPane **)(in_ECX + 0x14);
  *(undefined4 *)(in_ECX + 0x18) = 1;
  if (this == (CMFCTasksPane *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00429127();
  }
  pCVar2 = CMFCTasksPane::GetTaskGroup(this,*(int *)(in_ECX + 8));
  if ((pCVar2 != (CMFCTasksPaneTaskGroup *)0x0) && (local_8 = *(int *)(pCVar2 + 0x10), local_8 != 0)
     ) {
    pCVar2 = pCVar2 + 0xc;
    do {
      piVar3 = (int *)FUN_004ead48(&local_8);
      iVar1 = *piVar3;
      if ((*(int *)(iVar1 + 0x24) == *(int *)(in_ECX + 4)) && (*(int *)(iVar1 + 0x38) != param_1)) {
        *(int *)(iVar1 + 0x38) = param_1;
        InvalidateRect(*(HWND *)(this + 0x20),(RECT *)(iVar1 + 0xc),1);
        if (*(int *)(iVar1 + 0x2c) != 0) {
          this_00 = CWnd::FromHandle(*(HWND__ **)(iVar1 + 0x2c));
          CWnd::EnableWindow(this_00,param_1);
        }
      }
    } while (local_8 != 0);
  }
  return pCVar2;
}

