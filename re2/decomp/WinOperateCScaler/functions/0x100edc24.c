// rea decompile_all
// name: CFrameImpl::ShowQuickCustomizePane
// address: 0x100edc24
// body: available
// range: 0x100edc24-0x100edfb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100edd6b to 0x1001d023 FUN_1001d023 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: void __thiscall CFrameImpl::ShowQuickCustomizePane(class CMFCPopupMenu *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CFrameImpl::ShowQuickCustomizePane(CFrameImpl *this,CMFCPopupMenu *param_1)

{
  code *pcVar1;
  CWnd *pCVar2;
  CFrameImpl *pCVar3;
  CMFCPopupMenu *pCVar4;
  CWnd *pCVar5;
  int iVar6;
  CMFCToolBarMenuButton *pCVar7;
  long lVar8;
  CMFCToolBarsCustomizeDialog *this_00;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  wchar_t *pwVar12;
  undefined4 uVar13;
  uint local_234;
  CWnd *local_22c;
  int *local_228;
  CFrameImpl *local_224;
  int local_220;
  CMFCCustomizeMenuButton local_21c [260];
  CMFCCustomizeMenuButton local_118 [272];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x228;
  local_8 = 0x100edc33;
  local_224 = this;
  pCVar4 = CMFCPopupMenu::GetParentPopupMenu(param_1);
  if ((pCVar4 != (CMFCPopupMenu *)0x0) &&
     (pCVar4 = CMFCPopupMenu::GetParentPopupMenu(pCVar4), pCVar4 != (CMFCPopupMenu *)0x0)) {
    iVar6 = *(int *)(pCVar4 + 0x158);
    if (iVar6 == 0) {
      pCVar5 = CWnd::GetOwner((CWnd *)pCVar4);
      if ((pCVar5 == (CWnd *)0x0) ||
         (iVar6 = FUN_100250d6(&PTR_s_CPaneFrameWnd_102018e4), iVar6 == 0)) goto LAB_100edfac;
      pcVar1 = *(code **)(*(int *)pCVar5 + 0x1a8);
      guard_check_icall();
      pCVar5 = (CWnd *)(*pcVar1)();
    }
    else {
      iVar10 = FUN_100250d6(&PTR_s_CMFCCustomizeButton_10201ab4);
      if (iVar10 == 0) goto LAB_100edfac;
      local_22c = *(CWnd **)(iVar6 + 0xf8);
      pCVar7 = CMFCPopupMenu::GetMenuItem(param_1,0);
      lVar8 = __wtol(*(wchar_t **)(pCVar7 + 0x2c));
      iVar6 = FUN_1006a510();
      local_220 = *(int *)(iVar6 + 4);
      do {
        pCVar5 = local_22c;
        local_22c = pCVar5;
        if (local_220 == 0) break;
        pCVar5 = (CWnd *)FUN_1006a9f1(&local_220);
        if (pCVar5 == (CWnd *)0x0) goto LAB_100edd6b;
        iVar6 = CWnd::GetDlgCtrlID(pCVar5);
      } while ((lVar8 != iVar6) || (*(int *)(pCVar5 + 0xbc8) == 0));
    }
    CMFCPopupMenu::RemoveAllItems(param_1);
    this_00 = (CMFCToolBarsCustomizeDialog *)FUN_1001cfa0(0x918);
    local_8 = 0;
    if (this_00 == (CMFCToolBarsCustomizeDialog *)0x0) {
      local_228 = (int *)0x0;
    }
    else {
      local_228 = (int *)CMFCToolBarsCustomizeDialog::CMFCToolBarsCustomizeDialog
                                   (this_00,*(CFrameWnd **)(local_224 + 0xb0),1,0x40,
                                    (CList<CRuntimeClass*,CRuntimeClass*> *)0x0);
    }
    local_8 = 0xffffffff;
    local_220 = 0;
    DAT_1020c024 = pCVar5;
    CMap<int,int,int,int>::RemoveAll((CMap<int,int,int,int> *)&PTR_vftable_10201c00);
    uVar9 = FUN_1006a6b7();
    local_234 = 0;
    if (uVar9 != 0) {
      do {
        iVar6 = FUN_1006a5a5(local_234);
        iVar10 = FUN_100250d6(&PTR_s_CMFCCustomizeButton_10201ab4);
        if ((iVar10 == 0) && ((*(byte *)(iVar6 + 0x24) & 1) == 0)) {
          puVar11 = (undefined4 *)FUN_100c3357(*(undefined4 *)(iVar6 + 0x20));
          *puVar11 = 0;
          iVar10 = FUN_100187a0(*(int *)(iVar6 + 0x2c) + -0x10);
          local_22c = (CWnd *)(iVar10 + 0x10);
          local_8 = 1;
          if (*(int *)(*(int *)(iVar6 + 0x2c) + -0xc) == 0) {
            pwVar12 = (wchar_t *)FUN_100f6992(*(undefined4 *)(iVar6 + 0x20));
            ATL::CSimpleStringT<wchar_t,0>::Append((CSimpleStringT<wchar_t,0> *)&local_22c,pwVar12);
          }
          pCVar2 = local_22c;
          iVar10 = *(int *)(iVar6 + 0x20);
          if ((iVar10 == 0) || (iVar10 == -1)) {
            iVar10 = -0x14;
          }
          if (*(int *)(iVar6 + 4) == 0) {
            uVar13 = *(undefined4 *)(iVar6 + 0x34);
          }
          else {
            uVar13 = *(undefined4 *)(iVar6 + 0x38);
          }
          CMFCCustomizeMenuButton(iVar10,0,uVar13,local_22c,*(int *)(iVar6 + 4));
          local_8 = CONCAT31(local_8._1_3_,2);
          CMFCCustomizeMenuButton::SetItemIndex(local_118,local_234,1,0);
          CMFCPopupMenu::InsertItem(param_1,(CMFCToolBarMenuButton *)local_118,-1);
          local_220 = local_220 + 1;
          FUN_101102ad();
          local_8 = 0xffffffff;
          ATL::CStringData::Release((CStringData *)(pCVar2 + -0x10));
        }
        local_234 = local_234 + 1;
      } while (local_234 < uVar9);
    }
    if (local_228 != (int *)0x0) {
      pcVar1 = *(code **)(*local_228 + 4);
      guard_check_icall(1);
      (*pcVar1)();
    }
    *(undefined4 *)(param_1 + 0x1168) = 0;
    OnShowCustomizePane(local_224,param_1,*(uint *)(pCVar5 + 0xd18));
    if (local_220 != 0) {
      CMFCPopupMenu::InsertSeparator(param_1,-1);
    }
    uVar13 = FUN_1001e20a();
    FUN_1001d224(uVar13);
    local_8 = 3;
    iVar6 = FUN_1001de45(0x3fac);
    if ((iVar6 == 0) || (iVar6 = FUN_10018c20(iVar6,0x3fac), pCVar3 = local_224, iVar6 == 0)) {
LAB_100edd6b:
                    /* WARNING: Subroutine does not return */
      FUN_1001d023();
    }
    CMFCCustomizeMenuButton(0xffffffec,0,0xffffffff,local_224,0);
    local_8 = CONCAT31(local_8._1_3_,4);
    CMFCCustomizeMenuButton::SetItemIndex(local_21c,0x4278,1,0);
    CMFCPopupMenu::InsertItem(param_1,(CMFCToolBarMenuButton *)local_21c,-1);
    FUN_101102ad();
    ATL::CStringData::Release((CStringData *)(pCVar3 + -0x10));
  }
LAB_100edfac:
  FUN_10154478();
  return;
}

