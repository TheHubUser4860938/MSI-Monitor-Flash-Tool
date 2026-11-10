// rea decompile_all
// name: FUN_1013a50f
// address: 0x1013a50f
// body: available
// range: 0x1013a50f-0x1013a566 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1013a562 to 0x10012a3f FUN_10012a3f (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1013a50f(void)

{
  WPARAM wParam;
  LRESULT LVar1;
  int in_ECX;
  int iVar2;
  
  wParam = SendMessageW(*(HWND *)(in_ECX + 0x378),0x188,0,0);
  iVar2 = 0;
  if (wParam == 0xffffffff) {
    *(undefined4 *)(in_ECX + 0x568) = 0;
  }
  else {
    LVar1 = SendMessageW(*(HWND *)(in_ECX + 0x378),0x199,wParam,0);
    *(LRESULT *)(in_ECX + 0x568) = LVar1;
    if (LVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_10012a3f();
    }
    iVar2 = 1;
  }
  CWnd::EnableWindow((CWnd *)(in_ECX + 0x2d8),iVar2);
  return;
}

