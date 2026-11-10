// rea decompile_all
// name: FUN_10139547
// address: 0x10139547
// body: available
// range: 0x10139547-0x10139603 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x101395ff to 0x10012a3f FUN_10012a3f (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10139547(void)

{
  code *pcVar1;
  WPARAM wParam;
  uint uVar2;
  CFrameWnd *pCVar3;
  CWnd *in_ECX;
  
  if (DAT_101dd3d8 != (CMouseManager *)0x0) {
    if (*(int *)(in_ECX + 0xc0) < 0) {
      MessageBeep(0xffffffff);
    }
    else {
      wParam = SendMessageW(*(HWND *)(in_ECX + 0x170),0x188,0,0);
      uVar2 = SendMessageW(*(HWND *)(in_ECX + 0x170),0x199,wParam,0);
      pCVar3 = CWnd::GetParentFrame(in_ECX);
      if ((pCVar3 == (CFrameWnd *)0x0) || (*(int *)(pCVar3 + 0x20) == 0)) {
        FUN_10003400();
      }
      else {
        pcVar1 = *(code **)(*(int *)pCVar3 + 0x174);
        guard_check_icall(uVar2,in_ECX + 0x250);
        (*pcVar1)();
      }
      CMouseManager::SetCommandForDblClk(DAT_101dd3d8,*(int *)(in_ECX + 0xc0),uVar2);
      FUN_1002044a(0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10012a3f();
}

