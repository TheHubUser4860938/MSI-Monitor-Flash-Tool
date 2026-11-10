// rea decompile_all
// name: FUN_004586ac
// address: 0x4586ac
// body: available
// range: 0x4586ac-0x45877f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x45877b to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004586ac(void)

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
  
  puVar2 = DAT_00614f3c;
  do {
    do {
      if (puVar2 == (undefined4 *)0x0) {
        return;
      }
      if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00429127();
      }
      puVar1 = puVar2 + 2;
      puVar2 = (undefined4 *)*puVar2;
      pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBar_0060c580,(CObject *)*puVar1);
    } while (((pCVar5 == (CObject *)0x0) ||
             (pCVar6 = CWnd::FromHandlePermanent(*(HWND__ **)(pCVar5 + 0x20)), pCVar6 == (CWnd *)0x0
             )) || (local_8 = *(int *)(pCVar5 + 0xc40), local_8 == 0));
    bVar4 = false;
    do {
      piVar7 = (int *)FUN_004ead48(&local_8);
      iVar3 = *piVar7;
      if (iVar3 == 0) break;
      if ((((*(byte *)(iVar3 + 0x24) & 1) == 0) && (*(int *)(iVar3 + 8) != 0)) &&
         (iVar8 = FUN_004148c0(0x26,0), -1 < iVar8)) {
        InvalidateRect(*(HWND *)(pCVar5 + 0x20),(RECT *)(iVar3 + 0x54),1);
        bVar4 = true;
      }
    } while (local_8 != 0);
    if (bVar4) {
      UpdateWindow(*(HWND *)(pCVar5 + 0x20));
    }
  } while( true );
}

