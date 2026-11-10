// rea decompile_all
// name: FUN_1014d54c
// address: 0x1014d54c
// body: available
// range: 0x1014d54c-0x1014d5df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1014d5db to 0x1001d023 FUN_1001d023 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


CMFCTasksPaneTaskGroup * FUN_1014d54c(int param_1)

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
    FUN_1001d023();
  }
  pCVar2 = CMFCTasksPane::GetTaskGroup(this,*(int *)(in_ECX + 8));
  if ((pCVar2 != (CMFCTasksPaneTaskGroup *)0x0) && (local_8 = *(int *)(pCVar2 + 0x10), local_8 != 0)
     ) {
    pCVar2 = pCVar2 + 0xc;
    do {
      piVar3 = (int *)FUN_100972dc(&local_8);
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

