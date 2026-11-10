// rea decompile_all
// name: FUN_1012514b
// address: 0x1012514b
// body: available
// range: 0x1012514b-0x1012527c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10125278 to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1012514b(void)

{
  int *piVar1;
  code *pcVar2;
  AFX_MODULE_STATE *pAVar3;
  int iVar4;
  int iVar5;
  CFrameWnd *pCVar6;
  CMFCToolBar *in_ECX;
  CMFCToolBar *local_8;
  
  if (*(int *)(in_ECX + 0xd50) != 0) {
    local_8 = in_ECX;
    FUN_100c79a2(*(undefined4 *)(in_ECX + 0xd4c));
    pAVar3 = AfxGetModuleState();
    piVar1 = *(int **)(*(int *)(pAVar3 + 4) + 0x5c);
    if (piVar1 != (int *)0x0) {
      pcVar2 = *(code **)(*piVar1 + 0x10);
      guard_check_icall();
      local_8 = (CMFCToolBar *)(*pcVar2)();
      while (local_8 != (CMFCToolBar *)0x0) {
        pcVar2 = *(code **)(*piVar1 + 0x14);
        guard_check_icall(&local_8);
        iVar4 = (*pcVar2)();
        iVar5 = FUN_1004e58b(&PTR_s_CMultiDocTemplate_101d10fc);
        if (((iVar5 != 0) && (*(HMENU__ **)(iVar4 + 0x88) != (HMENU__ *)0x0)) &&
           (iVar5 = CMenuHash::LoadMenuBar
                              ((CMenuHash *)&DAT_1020fb98,*(HMENU__ **)(iVar4 + 0x88),in_ECX),
           iVar5 != 0)) {
          CMFCToolBar::ResetImages(in_ECX);
          FUN_100c79a2(*(undefined4 *)(iVar4 + 0x88));
        }
      }
    }
    iVar4 = CMenuHash::LoadMenuBar((CMenuHash *)&DAT_1020fb98,*(HMENU__ **)(in_ECX + 0xd50),in_ECX);
    if (iVar4 != 0) {
      CMFCToolBar::ResetImages(in_ECX);
      FUN_100c79a2(*(undefined4 *)(in_ECX + 0xd50));
    }
    if ((*(HMENU__ **)(in_ECX + 0xd4c) != (HMENU__ *)0x0) &&
       (iVar4 = CMenuHash::LoadMenuBar
                          ((CMenuHash *)&DAT_1020fb98,*(HMENU__ **)(in_ECX + 0xd4c),in_ECX),
       iVar4 != 0)) {
      pCVar6 = CWnd::GetParentFrame((CWnd *)in_ECX);
      pcVar2 = *(code **)(*(int *)pCVar6 + 0x178);
      guard_check_icall(1);
      (*pcVar2)();
      InvalidateRect(*(HWND *)(in_ECX + 0x20),(RECT *)0x0,1);
      UpdateWindow(*(HWND *)(in_ECX + 0x20));
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1004886a();
}

