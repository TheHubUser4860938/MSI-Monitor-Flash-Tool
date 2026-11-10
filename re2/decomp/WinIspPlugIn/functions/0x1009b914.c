// rea decompile_all
// name: FUN_1009b914
// address: 0x1009b914
// body: available
// range: 0x1009b914-0x1009b9e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1009b9e3 to 0x1004a383 FUN_1004a383 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1009b914(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  bool bVar4;
  CObject *pCVar5;
  CWnd *pCVar6;
  int *piVar7;
  int iVar8;
  int local_8;
  
  puVar2 = DAT_10245d0c;
  do {
    do {
      if (puVar2 == (undefined4 *)0x0) {
        return;
      }
      if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_1004a383();
      }
      puVar1 = puVar2 + 2;
      puVar2 = (undefined4 *)*puVar2;
      pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBar_1023d640,(CObject *)*puVar1);
    } while (((pCVar5 == (CObject *)0x0) ||
             (pCVar6 = CWnd::FromHandlePermanent(*(HWND__ **)(pCVar5 + 0x20)), pCVar6 == (CWnd *)0x0
             )) || (local_8 = *(int *)(pCVar5 + 0xc40), local_8 == 0));
    bVar4 = false;
    do {
      piVar7 = (int *)FUN_100c321b(&local_8);
      iVar3 = *piVar7;
      if (iVar3 == 0) break;
      if ((((*(byte *)(iVar3 + 0x24) & 1) == 0) && (*(int *)(iVar3 + 8) != 0)) &&
         (iVar8 = FUN_10046b20(0x26,0), -1 < iVar8)) {
        InvalidateRect(*(HWND *)(pCVar5 + 0x20),(RECT *)(iVar3 + 0x54),1);
        bVar4 = true;
      }
    } while (local_8 != 0);
    if (bVar4) {
      UpdateWindow(*(HWND *)(pCVar5 + 0x20));
    }
  } while( true );
}

