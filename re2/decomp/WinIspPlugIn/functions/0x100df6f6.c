// rea decompile_all
// name: CPaneFrameWnd::OnPressButtons
// address: 0x100df6f6
// body: available
// range: 0x100df6f6-0x100dfb38 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100df810 to 0x1004a383 FUN_1004a383 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: virtual void __thiscall CPaneFrameWnd::OnPressButtons(unsigned int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CPaneFrameWnd::OnPressButtons(CPaneFrameWnd *this,uint param_1)

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
  int iVar11;
  tagPOINT local_3e4;
  CMFCPopupMenu *local_3dc;
  wchar_t *local_3d8;
  CMFCPopupMenu *local_3d4;
  CMFCPopupMenu *local_3d0;
  CMFCPopupMenu *local_3cc;
  wchar_t *local_3c8;
  CMFCToolBarMenuButton local_3c4 [232];
  CMFCToolBarMenuButton local_2dc [232];
  CMFCToolBarMenuButton local_1f4 [232];
  CMFCToolBarMenuButton local_10c [180];
  undefined4 local_58;
  int local_24;
  int local_20;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x3e0;
  local_8 = 0x100df705;
  if ((DAT_10245ca8 == 0) && (param_1 == 0x19)) {
    pCVar3 = FindButton(this,0x19);
    if (pCVar3 == (CMFCCaptionButton *)0x0) goto LAB_100dfb31;
    pcVar1 = *(code **)(*(int *)this + 0x1a8);
    guard_check_icall();
    pCVar4 = (CObject *)(*pcVar1)();
    if ((pCVar4 == (CObject *)0x0) || (*(int *)(pCVar4 + 0x20) == 0)) goto LAB_100dfb31;
    iVar5 = FUN_10051e53(&PTR_s_CMFCToolBar_1023d640);
    if (iVar5 == 0) goto LAB_100dfb31;
    pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBar_1023d640,pCVar4);
    local_3d0 = *(CMFCPopupMenu **)(pCVar4 + 0xd14);
    if ((local_3d0 == (CMFCPopupMenu *)0x0) || (*(int *)(pCVar4 + 0xbc8) == 0)) goto LAB_100dfb31;
    *(undefined4 *)(pCVar3 + 4) = 1;
    uVar6 = FUN_10049868();
    FUN_100476a0(uVar6);
    local_8._0_1_ = 0;
    local_8._1_3_ = 0;
    CWnd::GetWindowTextW
              ((CWnd *)pCVar4,
               (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_3c8);
    FUN_10046ce0();
    FUN_10046d90();
    if (*(int *)(local_3c8 + -6) == 0) {
      iVar5 = FUN_1004c4e6(0x3ee8);
      if (iVar5 == 0) goto LAB_100df810;
      iVar5 = FUN_10047070(iVar5,0x3ee8);
      if (iVar5 == 0) goto LAB_100df810;
    }
    local_3d4 = (CMFCPopupMenu *)FUN_100491ae(0x1178);
    local_8._0_1_ = 1;
    if (local_3d4 == (CMFCPopupMenu *)0x0) {
      local_3cc = (CMFCPopupMenu *)0x0;
    }
    else {
      local_3cc = (CMFCPopupMenu *)CMFCPopupMenu::CMFCPopupMenu(local_3d4);
    }
    local_8._0_1_ = 0;
    local_3d4 = (CMFCPopupMenu *)FUN_100491ae(0x1178);
    local_8._0_1_ = 2;
    if (local_3d4 == (CMFCPopupMenu *)0x0) {
      local_3dc = (CMFCPopupMenu *)0x0;
    }
    else {
      local_3dc = (CMFCPopupMenu *)CMFCPopupMenu::CMFCPopupMenu(local_3d4);
    }
    pCVar2 = local_3dc;
    local_8._0_1_ = 0;
    pCVar7 = (CMFCToolBarMenuButton *)
             CMFCToolBarMenuButton::CMFCToolBarMenuButton(local_3c4,1,(HMENU__ *)0x0,-1,L"DUMMY",0);
    local_8._0_1_ = 3;
    CMFCPopupMenu::InsertItem(pCVar2,pCVar7,-1);
    local_8._0_1_ = 0;
    FUN_1011101d();
    pcVar1 = *(code **)(*(int *)pCVar2 + 0x1c8);
    guard_check_icall();
    piVar8 = (int *)(*pcVar1)();
    iVar11 = 0;
    iVar5 = -1;
    pcVar1 = *(code **)(*piVar8 + 0x43c);
    guard_check_icall();
    pHVar9 = (HMENU__ *)(*pcVar1)();
    CMFCToolBarMenuButton::CMFCToolBarMenuButton(local_2dc,0xffffffff,pHVar9,iVar5,local_3c8,iVar11)
    ;
    pCVar2 = local_3d0;
    local_8._0_1_ = 4;
    puVar10 = (undefined4 *)GetCustomizeText(&local_3d4);
    local_8._0_1_ = 5;
    CMFCToolBarMenuButton::CMFCToolBarMenuButton
              (local_1f4,*(uint *)(pCVar2 + 0xe8),(HMENU__ *)0x0,-1,(wchar_t *)*puVar10,0);
    local_8._0_1_ = 7;
    FUN_100476d0();
    local_3d0 = (CMFCPopupMenu *)FUN_100491ae(0x1178);
    local_8._0_1_ = 8;
    if (local_3d0 == (CMFCPopupMenu *)0x0) {
      local_3d0 = (CMFCPopupMenu *)0x0;
    }
    else {
      local_3d0 = (CMFCPopupMenu *)CMFCPopupMenu::CMFCPopupMenu(local_3d0);
    }
    pCVar2 = local_3d0;
    local_8._0_1_ = 7;
    CMFCPopupMenu::InsertItem(local_3d0,local_2dc,-1);
    CMFCPopupMenu::InsertItem(pCVar2,local_1f4,-1);
    uVar6 = FUN_10049868();
    FUN_100476a0(uVar6);
    local_8._0_1_ = 9;
    iVar5 = FUN_1004c4e6(0x427a);
    if (iVar5 != 0) {
      iVar5 = FUN_10047070(iVar5,0x427a);
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
                  (local_10c,0xffffffff,pHVar9,iVar5,local_3d8,iVar11);
        local_8 = CONCAT31(local_8._1_3_,10);
        local_58 = 1;
        pcVar1 = *(code **)(*(int *)local_3dc + 4);
        guard_check_icall(1);
        (*pcVar1)();
        pcVar1 = *(code **)(*(int *)local_3d0 + 4);
        guard_check_icall(1);
        (*pcVar1)();
        CMFCPopupMenu::InsertItem(local_3cc,local_10c,-1);
        pcVar1 = *(code **)(*(int *)pCVar3 + 0xc);
        guard_check_icall(&local_24);
        (*pcVar1)();
        local_3e4.x = local_24;
        local_3e4.y = local_20;
        ClientToScreen(*(HWND *)(this + 0x20),&local_3e4);
        CMFCCaptionButton::GetSize();
        pcVar1 = *(code **)(*(int *)local_3cc + 0x210);
        guard_check_icall(this,local_3e4.x + -2,local_3e4.y + -9,0,0,0);
        (*pcVar1)();
        pCVar2 = local_3cc;
        *(undefined4 *)(local_3cc + 0xf38) = 1;
        *(undefined4 *)(local_3cc + 0x5c) = *(undefined4 *)(this + 0x20);
        CMFCPopupMenu::SetQuickMode(local_3cc);
        *(undefined4 *)(pCVar2 + 0x1168) = 1;
        FUN_1011101d();
        FUN_100476d0();
        FUN_1011101d();
        FUN_1011101d();
        FUN_100476d0();
        goto LAB_100dfb31;
      }
    }
LAB_100df810:
                    /* WARNING: Subroutine does not return */
    FUN_1004a383();
  }
LAB_100dfb31:
  FUN_1018015d();
  return;
}

