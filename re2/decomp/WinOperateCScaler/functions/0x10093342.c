// rea decompile_all
// name: FUN_10093342
// address: 0x10093342
// body: available
// range: 0x10093342-0x100933dd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100933d9 to 0x1001d023 FUN_1001d023 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_10093342(void)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  CWnd *pCVar4;
  HWND pHVar5;
  CWnd *pCVar6;
  LRESULT LVar7;
  CWnd *in_ECX;
  
  iVar2 = FUN_100283ad();
  if (iVar2 == 0) {
    return 0;
  }
  uVar3 = CWnd::GetExStyle(in_ECX);
  if ((uVar3 & 0x100) == 0) {
    return 1;
  }
  pCVar4 = CWnd::GetTopLevelParent(in_ECX);
  if (pCVar4 == (CWnd *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1001d023();
  }
  pHVar5 = GetForegroundWindow();
  pCVar6 = CWnd::FromHandle(pHVar5);
  if (pCVar4 != pCVar6) {
    pHVar5 = GetLastActivePopup(*(HWND *)(pCVar4 + 0x20));
    pCVar4 = CWnd::FromHandle(pHVar5);
    if ((pCVar4 != pCVar6) ||
       (LVar7 = SendMessageW(*(HWND *)(pCVar6 + 0x20),0x36d,0x40,0), LVar7 == 0)) {
      bVar1 = false;
      goto LAB_100933b1;
    }
  }
  bVar1 = true;
LAB_100933b1:
  SendMessageW(*(HWND *)(in_ECX + 0x20),0x36d,(uint)!bVar1 * 4 + 4,0);
  return 1;
}

