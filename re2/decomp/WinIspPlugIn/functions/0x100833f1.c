// rea decompile_all
// name: FUN_100833f1
// address: 0x100833f1
// body: available
// range: 0x100833f1-0x10083499 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10083495 to 0x1004a383 FUN_1004a383 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100833f1(void)

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
    iVar2 = FUN_10051e53(&PTR_s_CMFCBaseTabCtrl_101e0580);
    if (iVar2 != 0) {
      pHVar3 = GetParent(*(HWND *)(pCVar4 + 0x20));
      pCVar4 = CWnd::FromHandle(pHVar3);
    }
    iVar2 = FUN_10051e53(&PTR_s_CBaseTabbedPane_101eb880);
    if (iVar2 != 0) {
      pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBaseTabbedPane_101eb880,(CObject *)pCVar4
                                 );
      if (pCVar5 == (CObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_1004a383();
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

