// rea decompile_all
// name: FUN_10170cfb
// address: 0x10170cfb
// body: available
// range: 0x10170cfb-0x10170dff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10170dfb to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_10170cfb(void)

{
  HWND pHVar1;
  CWnd *pCVar2;
  CObject *pCVar3;
  CDialog *in_ECX;
  
  CDialog::OnInitDialog(in_ECX);
  CWnd::EnableWindow((CWnd *)(in_ECX + 0x3c0),*(int *)(in_ECX + 0x440));
  pCVar2 = (CWnd *)(in_ECX + 0x340);
  CWnd::EnableWindow(pCVar2,*(int *)(in_ECX + 0x448));
  if ((DAT_10205aa0 == 0) || (*(int *)(in_ECX + 0x454) == 0)) {
    CWnd::ShowWindow((CWnd *)(in_ECX + 0x140),0);
    CWnd::EnableWindow((CWnd *)(in_ECX + 0x140),0);
    CWnd::ShowWindow((CWnd *)(in_ECX + 0x1c0),0);
    CWnd::EnableWindow((CWnd *)(in_ECX + 0x1c0),0);
    CWnd::ShowWindow((CWnd *)(in_ECX + 0x240),0);
    CWnd::EnableWindow((CWnd *)(in_ECX + 0x240),0);
    CWnd::ShowWindow((CWnd *)(in_ECX + 0x2c0),0);
    CWnd::EnableWindow((CWnd *)(in_ECX + 0x2c0),0);
    CWnd::ShowWindow(pCVar2,0);
    CWnd::EnableWindow(pCVar2,0);
  }
  pHVar1 = GetParent(*(HWND *)(in_ECX + 0x20));
  pCVar2 = CWnd::FromHandle(pHVar1);
  pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBarsCustomizeDialog_101cbd10,
                              (CObject *)pCVar2);
  if (pCVar3 != (CObject *)0x0) {
    if (((byte)pCVar3[0x15c] & 0x80) != 0) {
      CWnd::ShowWindow((CWnd *)(in_ECX + 0xc0),0);
      CWnd::EnableWindow((CWnd *)(in_ECX + 0xc0),0);
      *(undefined4 *)(in_ECX + 0x450) = 0;
    }
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1004886a();
}

