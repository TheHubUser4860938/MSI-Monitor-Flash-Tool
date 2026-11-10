// rea decompile_all
// name: FUN_00420a86
// address: 0x420a86
// body: available
// range: 0x420a86-0x420b3c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x420b33 to 0x460cef CPaneFrameWnd::RedrawAll (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x420b38 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00420a86(void)

{
  int iVar1;
  undefined4 *puVar2;
  CWnd *pCVar3;
  CWnd *pCVar4;
  CObject *pCVar5;
  undefined4 *puVar6;
  
  pCVar3 = AfxGetMainWnd();
  puVar6 = DAT_0060c708;
  while (puVar6 != (undefined4 *)0x0) {
    iVar1 = puVar6[2];
    puVar6 = (undefined4 *)*puVar6;
    pCVar4 = CWnd::FromHandlePermanent(*(HWND__ **)(iVar1 + 0x20));
    if (pCVar4 != (CWnd *)0x0) {
      RedrawWindow(*(HWND *)(iVar1 + 0x20),(RECT *)0x0,(HRGN)0x0,0x585);
    }
  }
  puVar6 = DAT_00614f3c;
  if (((pCVar3 != (CWnd *)0x0) && (*(int *)(pCVar3 + 0x20) != 0)) &&
     (pCVar4 = CWnd::FromHandlePermanent(*(HWND__ **)(pCVar3 + 0x20)), puVar6 = DAT_00614f3c,
     pCVar4 != (CWnd *)0x0)) {
    RedrawWindow(*(HWND *)(pCVar3 + 0x20),(RECT *)0x0,(HRGN)0x0,0x585);
    puVar6 = DAT_00614f3c;
  }
  while( true ) {
    if (puVar6 == (undefined4 *)0x0) {
      CPaneFrameWnd::RedrawAll();
      return;
    }
    if (puVar6 == (undefined4 *)0x0) break;
    puVar2 = (undefined4 *)*puVar6;
    pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPane_005b83cc,(CObject *)puVar6[2]);
    puVar6 = puVar2;
    if ((pCVar5 != (CObject *)0x0) &&
       (pCVar3 = CWnd::FromHandlePermanent(*(HWND__ **)(pCVar5 + 0x20)), pCVar3 != (CWnd *)0x0)) {
      RedrawWindow(*(HWND *)(pCVar5 + 0x20),(RECT *)0x0,(HRGN)0x0,0x185);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00429127();
}

