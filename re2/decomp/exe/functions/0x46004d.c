// rea decompile_all
// name: FUN_0046004d
// address: 0x46004d
// body: available
// range: 0x46004d-0x460404 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4600dc to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0046004d(void)

{
  code *pcVar1;
  int iVar2;
  CMFCPopupMenu *pCVar3;
  undefined4 uVar4;
  CMFCToolBarMenuButton *pCVar5;
  int *piVar6;
  HMENU__ *pHVar7;
  undefined4 *puVar8;
  CMFCPopupMenu *pCVar9;
  int unaff_EBP;
  CWnd *unaff_ESI;
  int unaff_EDI;
  wchar_t *pwVar10;
  int iVar11;
  
  iVar2 = *(int *)(unaff_ESI + 0xd14);
  *(int *)(unaff_EBP + -0x3cc) = iVar2;
  if ((iVar2 != 0) && (*(int *)(unaff_ESI + 0xbc8) != 0)) {
    *(undefined4 *)(unaff_EDI + 4) = 1;
    FUN_004295fe();
    FUN_0040eb30();
    pCVar9 = (CMFCPopupMenu *)0x0;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    CWnd::GetWindowTextW
              (unaff_ESI,
               (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
               (unaff_EBP + -0x3c4));
    FUN_00414ce0();
    FUN_00414d90();
    if (*(int *)(*(int *)(unaff_EBP + -0x3c4) + -0xc) == 0) {
      iVar2 = FUN_00435fce();
      if (iVar2 == 0) goto LAB_004600dc;
      iVar2 = FUN_004160f0();
      if (iVar2 == 0) goto LAB_004600dc;
    }
    pCVar3 = (CMFCPopupMenu *)FUN_00416408();
    *(CMFCPopupMenu **)(unaff_EBP + -0x3d0) = pCVar3;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (pCVar3 == (CMFCPopupMenu *)0x0) {
      *(undefined4 *)(unaff_EBP + -0x3c8) = 0;
    }
    else {
      uVar4 = CMFCPopupMenu::CMFCPopupMenu(pCVar3);
      *(undefined4 *)(unaff_EBP + -0x3c8) = uVar4;
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    pCVar3 = (CMFCPopupMenu *)FUN_00416408();
    *(CMFCPopupMenu **)(unaff_EBP + -0x3d0) = pCVar3;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (pCVar3 == (CMFCPopupMenu *)0x0) {
      *(undefined4 *)(unaff_EBP + -0x3d8) = 0;
    }
    else {
      pCVar9 = (CMFCPopupMenu *)CMFCPopupMenu::CMFCPopupMenu(pCVar3);
      *(CMFCPopupMenu **)(unaff_EBP + -0x3d8) = pCVar9;
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    pCVar5 = (CMFCToolBarMenuButton *)
             CMFCToolBarMenuButton::CMFCToolBarMenuButton
                       ((CMFCToolBarMenuButton *)(unaff_EBP + -0x3c0),1,(HMENU__ *)0x0,-1,L"DUMMY",0
                       );
    *(undefined1 *)(unaff_EBP + -4) = 3;
    CMFCPopupMenu::InsertItem(pCVar9,pCVar5,-1);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_0048c45e();
    pcVar1 = *(code **)(*(int *)pCVar9 + 0x1c8);
    guard_check_icall();
    piVar6 = (int *)(*pcVar1)();
    pCVar3 = (CMFCPopupMenu *)0x0;
    iVar2 = 0;
    pwVar10 = *(wchar_t **)(unaff_EBP + -0x3c4);
    iVar11 = -1;
    pcVar1 = *(code **)(*piVar6 + 0x43c);
    guard_check_icall();
    pHVar7 = (HMENU__ *)(*pcVar1)();
    CMFCToolBarMenuButton::CMFCToolBarMenuButton
              ((CMFCToolBarMenuButton *)(unaff_EBP + -0x2d8),0xffffffff,pHVar7,iVar11,pwVar10,iVar2)
    ;
    iVar2 = *(int *)(unaff_EBP + -0x3cc);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    puVar8 = (undefined4 *)FUN_0045cf57();
    pwVar10 = (wchar_t *)*puVar8;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    CMFCToolBarMenuButton::CMFCToolBarMenuButton
              ((CMFCToolBarMenuButton *)(unaff_EBP + -0x1f0),*(uint *)(iVar2 + 0xe8),(HMENU__ *)0x0,
               -1,pwVar10,0);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    FUN_0040efa0();
    pCVar9 = (CMFCPopupMenu *)FUN_00416408();
    *(CMFCPopupMenu **)(unaff_EBP + -0x3cc) = pCVar9;
    *(undefined1 *)(unaff_EBP + -4) = 8;
    if (pCVar9 == (CMFCPopupMenu *)0x0) {
      *(undefined4 *)(unaff_EBP + -0x3cc) = 0;
    }
    else {
      pCVar3 = (CMFCPopupMenu *)CMFCPopupMenu::CMFCPopupMenu(pCVar9);
      *(CMFCPopupMenu **)(unaff_EBP + -0x3cc) = pCVar3;
    }
    *(undefined1 *)(unaff_EBP + -4) = 7;
    CMFCPopupMenu::InsertItem(pCVar3,(CMFCToolBarMenuButton *)(unaff_EBP + -0x2d8),-1);
    CMFCPopupMenu::InsertItem(pCVar3,(CMFCToolBarMenuButton *)(unaff_EBP + -0x1f0),-1);
    FUN_004295fe();
    FUN_0040eb30();
    *(undefined1 *)(unaff_EBP + -4) = 9;
    iVar2 = FUN_00435fce();
    if (iVar2 != 0) {
      iVar2 = FUN_004160f0();
      if (iVar2 != 0) {
        pcVar1 = *(code **)(*(int *)pCVar3 + 0x1c8);
        guard_check_icall();
        piVar6 = (int *)(*pcVar1)();
        pwVar10 = *(wchar_t **)(unaff_EBP + -0x3d4);
        iVar2 = 0;
        iVar11 = -1;
        pcVar1 = *(code **)(*piVar6 + 0x43c);
        guard_check_icall();
        pHVar7 = (HMENU__ *)(*pcVar1)();
        CMFCToolBarMenuButton::CMFCToolBarMenuButton
                  ((CMFCToolBarMenuButton *)(unaff_EBP + -0x108),0xffffffff,pHVar7,iVar11,pwVar10,
                   iVar2);
        *(undefined1 *)(unaff_EBP + -4) = 10;
        *(undefined4 *)(unaff_EBP + -0x54) = 1;
        pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x3d8) + 4);
        guard_check_icall();
        (*pcVar1)();
        pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x3cc) + 4);
        guard_check_icall();
        (*pcVar1)();
        CMFCPopupMenu::InsertItem
                  (*(CMFCPopupMenu **)(unaff_EBP + -0x3c8),
                   (CMFCToolBarMenuButton *)(unaff_EBP + -0x108),-1);
        pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x3e4) + 0xc);
        guard_check_icall(unaff_EBP + -0x20);
        (*pcVar1)();
        iVar2 = *(int *)(unaff_EBP + -1000);
        *(undefined4 *)(unaff_EBP + -0x3e0) = *(undefined4 *)(unaff_EBP + -0x20);
        *(undefined4 *)(unaff_EBP + -0x3dc) = *(undefined4 *)(unaff_EBP + -0x1c);
        ClientToScreen(*(HWND *)(iVar2 + 0x20),(LPPOINT)(unaff_EBP + -0x3e0));
        CMFCCaptionButton::GetSize();
        pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x3c8) + 0x210);
        guard_check_icall(iVar2,*(int *)(unaff_EBP + -0x3e0) + -2,*(int *)(unaff_EBP + -0x3dc) + -9,
                          0,0,0);
        (*pcVar1)();
        pCVar9 = *(CMFCPopupMenu **)(unaff_EBP + -0x3c8);
        *(undefined4 *)(pCVar9 + 0xf38) = 1;
        *(undefined4 *)(pCVar9 + 0x5c) = *(undefined4 *)(iVar2 + 0x20);
        CMFCPopupMenu::SetQuickMode(pCVar9);
        *(undefined4 *)(pCVar9 + 0x1168) = 1;
        FUN_0048c45e();
        FUN_0040efa0();
        FUN_0048c45e();
        FUN_0048c45e();
        FUN_0040efa0();
        goto LAB_004603fd;
      }
    }
LAB_004600dc:
                    /* WARNING: Subroutine does not return */
    FUN_00429127();
  }
LAB_004603fd:
  FUN_0055bae6();
  return;
}

