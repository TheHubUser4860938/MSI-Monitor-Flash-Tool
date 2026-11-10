// rea decompile_all
// name: FUN_1007f64a
// address: 0x1007f64a
// body: available
// range: 0x1007f64a-0x1007f6b1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007f6ad to 0x1001d023 FUN_1001d023 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


CWnd * FUN_1007f64a(CWnd *param_1,int param_2)

{
  HWND pHVar1;
  CWnd *pCVar2;
  int iVar3;
  BOOL BVar4;
  
  if (param_1 == (CWnd *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1001d023();
  }
  pHVar1 = GetParent(*(HWND *)(param_1 + 0x20));
  pCVar2 = CWnd::FromHandle(pHVar1);
  iVar3 = FUN_100250d6(&PTR_s_CSplitterWnd_101b5b30);
  if (iVar3 != 0) {
    if (param_2 != 0) {
      return pCVar2;
    }
    do {
      pHVar1 = GetParent(*(HWND *)(param_1 + 0x20));
      param_1 = CWnd::FromHandle(pHVar1);
      if (param_1 == (CWnd *)0x0) {
        return pCVar2;
      }
      BVar4 = IsIconic(*(HWND *)(param_1 + 0x20));
    } while (BVar4 == 0);
  }
  return (CWnd *)0x0;
}

