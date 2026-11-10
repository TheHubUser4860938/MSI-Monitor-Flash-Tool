// rea decompile_all
// name: FUN_00419070
// address: 0x419070
// body: available
// range: 0x419070-0x4190c5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4190c1 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00419070(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  code *pcVar3;
  CObject *pCVar4;
  CWnd *pCVar5;
  
  puVar2 = DAT_00614f3c;
  while( true ) {
    if (puVar2 == (undefined4 *)0x0) {
      return;
    }
    if (puVar2 == (undefined4 *)0x0) break;
    puVar1 = puVar2 + 2;
    puVar2 = (undefined4 *)*puVar2;
    pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBar_0060c580,(CObject *)*puVar1);
    if ((pCVar4 != (CObject *)0x0) &&
       (pCVar5 = CWnd::FromHandlePermanent(*(HWND__ **)(pCVar4 + 0x20)), pCVar5 != (CWnd *)0x0)) {
      pcVar3 = *(code **)(*(int *)pCVar4 + 0x3b4);
      guard_check_icall();
      (*pcVar3)();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00429127();
}

