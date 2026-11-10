// rea decompile_all
// name: FUN_0045ffc2
// address: 0x45ffc2
// body: available
// range: 0x45ffc2-0x46004c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void FUN_0045ffc2(int param_1)

{
  code *pcVar1;
  CMFCPopupMenu *pCVar2;
  CMFCCaptionButton *pCVar3;
  CObject *pCVar4;
  int iVar5;
  undefined4 uVar6;
  CMFCToolBarMenuButton *pCVar7;
  int *piVar8;
  HMENU__ *pHVar9;
  undefined4 *puVar10;
  CPaneFrameWnd *in_ECX;
  int iVar11;
  tagPOINT tStack_3e4;
  CMFCPopupMenu *pCStack_3dc;
  wchar_t *pwStack_3d8;
  CMFCPopupMenu *pCStack_3d4;
  CMFCPopupMenu *pCStack_3d0;
  CMFCPopupMenu *pCStack_3cc;
  wchar_t *pwStack_3c8;
  CMFCToolBarMenuButton aCStack_3c4 [232];
  CMFCToolBarMenuButton aCStack_2dc [232];
  CMFCToolBarMenuButton aCStack_1f4 [232];
  CMFCToolBarMenuButton aCStack_10c [180];
  undefined4 uStack_58;
  int iStack_24;
  int iStack_20;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x3e0;
  uStack_8 = 0x45ffd1;
  if ((DAT_00614ed8 == 0) && (param_1 == 0x19)) {
    pCVar3 = CPaneFrameWnd::FindButton(in_ECX,0x19);
    if (pCVar3 == (CMFCCaptionButton *)0x0) goto LAB_004603fd;
    pcVar1 = *(code **)(*(int *)in_ECX + 0x1a8);
    guard_check_icall();
    pCVar4 = (CObject *)(*pcVar1)();
    if ((pCVar4 == (CObject *)0x0) || (*(int *)(pCVar4 + 0x20) == 0)) goto LAB_004603fd;
    iVar5 = FUN_0043970d(&PTR_s_CMFCToolBar_0060c580);
    if (iVar5 == 0) goto LAB_004603fd;
    pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBar_0060c580,pCVar4);
    pCStack_3d0 = *(CMFCPopupMenu **)(pCVar4 + 0xd14);
    if ((pCStack_3d0 == (CMFCPopupMenu *)0x0) || (*(int *)(pCVar4 + 0xbc8) == 0)) goto LAB_004603fd;
    *(undefined4 *)(pCVar3 + 4) = 1;
    uVar6 = FUN_004295fe();
    FUN_0040eb30(uVar6);
    uStack_8._0_1_ = 0;
    uStack_8._1_3_ = 0;
    CWnd::GetWindowTextW
              ((CWnd *)pCVar4,
               (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&pwStack_3c8);
    FUN_00414ce0();
    FUN_00414d90();
    if (*(int *)(pwStack_3c8 + -6) == 0) {
      iVar5 = FUN_00435fce(0x3ee8);
      if (iVar5 == 0) goto LAB_004600dc;
      iVar5 = FUN_004160f0(iVar5,0x3ee8);
      if (iVar5 == 0) goto LAB_004600dc;
    }
    pCStack_3d4 = (CMFCPopupMenu *)FUN_00416408(0x1178);
    uStack_8._0_1_ = 1;
    if (pCStack_3d4 == (CMFCPopupMenu *)0x0) {
      pCStack_3cc = (CMFCPopupMenu *)0x0;
    }
    else {
      pCStack_3cc = (CMFCPopupMenu *)CMFCPopupMenu::CMFCPopupMenu(pCStack_3d4);
    }
    uStack_8._0_1_ = 0;
    pCStack_3d4 = (CMFCPopupMenu *)FUN_00416408(0x1178);
    uStack_8._0_1_ = 2;
    if (pCStack_3d4 == (CMFCPopupMenu *)0x0) {
      pCStack_3dc = (CMFCPopupMenu *)0x0;
    }
    else {
      pCStack_3dc = (CMFCPopupMenu *)CMFCPopupMenu::CMFCPopupMenu(pCStack_3d4);
    }
    pCVar2 = pCStack_3dc;
    uStack_8._0_1_ = 0;
    pCVar7 = (CMFCToolBarMenuButton *)
             CMFCToolBarMenuButton::CMFCToolBarMenuButton
                       (aCStack_3c4,1,(HMENU__ *)0x0,-1,L"DUMMY",0);
    uStack_8._0_1_ = 3;
    CMFCPopupMenu::InsertItem(pCVar2,pCVar7,-1);
    uStack_8._0_1_ = 0;
    FUN_0048c45e();
    pcVar1 = *(code **)(*(int *)pCVar2 + 0x1c8);
    guard_check_icall();
    piVar8 = (int *)(*pcVar1)();
    iVar11 = 0;
    iVar5 = -1;
    pcVar1 = *(code **)(*piVar8 + 0x43c);
    guard_check_icall();
    pHVar9 = (HMENU__ *)(*pcVar1)();
    CMFCToolBarMenuButton::CMFCToolBarMenuButton
              (aCStack_2dc,0xffffffff,pHVar9,iVar5,pwStack_3c8,iVar11);
    pCVar2 = pCStack_3d0;
    uStack_8._0_1_ = 4;
    puVar10 = (undefined4 *)FUN_0045cf57(&pCStack_3d4);
    uStack_8._0_1_ = 5;
    CMFCToolBarMenuButton::CMFCToolBarMenuButton
              (aCStack_1f4,*(uint *)(pCVar2 + 0xe8),(HMENU__ *)0x0,-1,(wchar_t *)*puVar10,0);
    uStack_8._0_1_ = 7;
    FUN_0040efa0();
    pCStack_3d0 = (CMFCPopupMenu *)FUN_00416408(0x1178);
    uStack_8._0_1_ = 8;
    if (pCStack_3d0 == (CMFCPopupMenu *)0x0) {
      pCStack_3d0 = (CMFCPopupMenu *)0x0;
    }
    else {
      pCStack_3d0 = (CMFCPopupMenu *)CMFCPopupMenu::CMFCPopupMenu(pCStack_3d0);
    }
    pCVar2 = pCStack_3d0;
    uStack_8._0_1_ = 7;
    CMFCPopupMenu::InsertItem(pCStack_3d0,aCStack_2dc,-1);
    CMFCPopupMenu::InsertItem(pCVar2,aCStack_1f4,-1);
    uVar6 = FUN_004295fe();
    FUN_0040eb30(uVar6);
    uStack_8._0_1_ = 9;
    iVar5 = FUN_00435fce(0x427a);
    if (iVar5 != 0) {
      iVar5 = FUN_004160f0(iVar5,0x427a);
      if (iVar5 != 0) {
        pcVar1 = *(code **)(*(int *)pCVar2 + 0x1c8);
        guard_check_icall();
        piVar8 = (int *)(*pcVar1)();
        iVar11 = 0;
        iVar5 = -1;
        pcVar1 = *(code **)(*piVar8 + 0x43c);
        guard_check_icall();
        pHVar9 = (HMENU__ *)(*pcVar1)();
        CMFCToolBarMenuButton::CMFCToolBarMenuButton
                  (aCStack_10c,0xffffffff,pHVar9,iVar5,pwStack_3d8,iVar11);
        uStack_8 = CONCAT31(uStack_8._1_3_,10);
        uStack_58 = 1;
        pcVar1 = *(code **)(*(int *)pCStack_3dc + 4);
        guard_check_icall(1);
        (*pcVar1)();
        pcVar1 = *(code **)(*(int *)pCStack_3d0 + 4);
        guard_check_icall(1);
        (*pcVar1)();
        CMFCPopupMenu::InsertItem(pCStack_3cc,aCStack_10c,-1);
        pcVar1 = *(code **)(*(int *)pCVar3 + 0xc);
        guard_check_icall(&iStack_24);
        (*pcVar1)();
        tStack_3e4.x = iStack_24;
        tStack_3e4.y = iStack_20;
        ClientToScreen(*(HWND *)(in_ECX + 0x20),&tStack_3e4);
        CMFCCaptionButton::GetSize();
        pcVar1 = *(code **)(*(int *)pCStack_3cc + 0x210);
        guard_check_icall(in_ECX,tStack_3e4.x + -2,tStack_3e4.y + -9,0,0,0);
        (*pcVar1)();
        pCVar2 = pCStack_3cc;
        *(undefined4 *)(pCStack_3cc + 0xf38) = 1;
        *(undefined4 *)(pCStack_3cc + 0x5c) = *(undefined4 *)(in_ECX + 0x20);
        CMFCPopupMenu::SetQuickMode(pCStack_3cc);
        *(undefined4 *)(pCVar2 + 0x1168) = 1;
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

