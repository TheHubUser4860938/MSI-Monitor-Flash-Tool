// rea decompile_all
// name: FUN_100381d4
// address: 0x100381d4
// body: available
// range: 0x100381d4-0x1003824e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003824a to 0x10012a3f FUN_10012a3f (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100381d4(void)

{
  tagRECT *lpRect;
  int iVar1;
  CWnd *in_ECX;
  
  if ((in_ECX != (CWnd *)0x0) && (*(int *)(in_ECX + 0x20) != 0)) {
    iVar1 = 0x14;
    if (0x13 < *(int *)(in_ECX + 0xa4) + 8) {
      iVar1 = *(int *)(in_ECX + 0xa4) + 8;
    }
    *(int *)(in_ECX + 0x80) = iVar1;
    CWnd::SetWindowPos(in_ECX,(CWnd *)0x0,0,0,0,0,0x27);
    if (*(int *)(in_ECX + 0xc0) == 0) {
      SetRectEmpty((LPRECT)(in_ECX + 0x94));
    }
    else {
      lpRect = (tagRECT *)(in_ECX + 0x94);
      GetWindowRect(*(HWND *)(in_ECX + 0x20),lpRect);
      lpRect->left = *(int *)(in_ECX + 0x9c) - *(int *)(in_ECX + 0x80);
      CWnd::ScreenToClient(in_ECX,lpRect);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10012a3f();
}

