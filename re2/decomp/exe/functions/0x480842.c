// rea decompile_all
// name: FUN_00480842
// address: 0x480842
// body: available
// range: 0x480842-0x4808ea inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4808e6 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00480842(void)

{
  code *pcVar1;
  int iVar2;
  HWND pHVar3;
  CWnd *pCVar4;
  CObject *pCVar5;
  BOOL BVar6;
  CWnd *in_ECX;
  
  pcVar1 = *(code **)(*(int *)in_ECX + 0x16c);
  guard_check_icall();
  iVar2 = (*pcVar1)();
  if (iVar2 != 0) {
    pHVar3 = GetParent(*(HWND *)(in_ECX + 0x20));
    pCVar4 = CWnd::FromHandle(pHVar3);
    iVar2 = FUN_0043970d(&PTR_s_CMFCBaseTabCtrl_005b93c4);
    if (iVar2 != 0) {
      pHVar3 = GetParent(*(HWND *)(pCVar4 + 0x20));
      pCVar4 = CWnd::FromHandle(pHVar3);
    }
    iVar2 = FUN_0043970d(&PTR_s_CBaseTabbedPane_005c7aa4);
    if (iVar2 != 0) {
      pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBaseTabbedPane_005c7aa4,(CObject *)pCVar4
                                 );
      if (pCVar5 == (CObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00429127();
      }
      pHVar3 = *(HWND *)(in_ECX + 0x20);
      pcVar1 = *(code **)(*(int *)pCVar5 + 0x3c0);
      guard_check_icall();
      (*pcVar1)();
      BVar6 = IsWindow(pHVar3);
      if (BVar6 == 0) {
        return;
      }
    }
  }
  CWnd::OnDestroy(in_ECX);
  return;
}

