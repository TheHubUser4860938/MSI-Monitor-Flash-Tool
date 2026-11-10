// rea decompile_all
// name: FUN_10152164
// address: 0x10152164
// body: available
// range: 0x10152164-0x101521b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x101521b3 to 0x1001d023 FUN_1001d023 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10152164(void)

{
  CFrameWnd *pCVar1;
  CObject *pCVar2;
  CPreviewView *in_ECX;
  HWND hWnd;
  
  pCVar1 = CWnd::GetParentFrame(*(CWnd **)(in_ECX + 0xb8));
  if (pCVar1 != (CFrameWnd *)0x0) {
    CPreviewView::OnPreviewClose(in_ECX);
    FUN_10020ecf();
    pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_COleIPFrameWnd_101cd2fc,(CObject *)pCVar1);
    if (pCVar2 == (CObject *)0x0) {
      hWnd = *(HWND *)(pCVar1 + 0x20);
    }
    else {
      hWnd = *(HWND *)(pCVar2 + 0x20);
    }
    SendMessageW(hWnd,0x111,0xe107,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1001d023();
}

