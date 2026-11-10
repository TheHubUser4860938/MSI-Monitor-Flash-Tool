// rea decompile_all
// name: FUN_0045f66e
// address: 0x45f66e
// body: available
// range: 0x45f66e-0x45f709 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x45f705 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0045f66e(void)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  CWnd *pCVar4;
  HWND pHVar5;
  CWnd *pCVar6;
  LRESULT LVar7;
  CWnd *in_ECX;
  
  iVar2 = FUN_0042ec70();
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
    FUN_00429127();
  }
  pHVar5 = GetForegroundWindow();
  pCVar6 = CWnd::FromHandle(pHVar5);
  if (pCVar4 != pCVar6) {
    pHVar5 = GetLastActivePopup(*(HWND *)(pCVar4 + 0x20));
    pCVar4 = CWnd::FromHandle(pHVar5);
    if ((pCVar4 != pCVar6) ||
       (LVar7 = SendMessageW(*(HWND *)(pCVar6 + 0x20),0x36d,0x40,0), LVar7 == 0)) {
      bVar1 = false;
      goto LAB_0045f6dd;
    }
  }
  bVar1 = true;
LAB_0045f6dd:
  SendMessageW(*(HWND *)(in_ECX + 0x20),0x36d,(uint)!bVar1 * 4 + 4,0);
  return 1;
}

