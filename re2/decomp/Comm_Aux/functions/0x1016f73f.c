// rea decompile_all
// name: FUN_1016f73f
// address: 0x1016f73f
// body: available
// range: 0x1016f73f-0x1016f7fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1016f7f7 to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1016f73f(void)

{
  code *pcVar1;
  WPARAM wParam;
  uint uVar2;
  CFrameWnd *pCVar3;
  CWnd *in_ECX;
  
  if (DAT_10210948 != (CMouseManager *)0x0) {
    if (*(int *)(in_ECX + 0xc0) < 0) {
      MessageBeep(0xffffffff);
    }
    else {
      wParam = SendMessageW(*(HWND *)(in_ECX + 0x170),0x188,0,0);
      uVar2 = SendMessageW(*(HWND *)(in_ECX + 0x170),0x199,wParam,0);
      pCVar3 = CWnd::GetParentFrame(in_ECX);
      if ((pCVar3 == (CFrameWnd *)0x0) || (*(int *)(pCVar3 + 0x20) == 0)) {
        FUN_10034ea0();
      }
      else {
        pcVar1 = *(code **)(*(int *)pCVar3 + 0x174);
        guard_check_icall(uVar2,in_ECX + 0x250);
        (*pcVar1)();
      }
      CMouseManager::SetCommandForDblClk(DAT_10210948,*(int *)(in_ECX + 0xc0),uVar2);
      FUN_10053dc1(0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1004886a();
}

