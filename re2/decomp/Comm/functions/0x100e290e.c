// rea decompile_all
// name: CFrameImpl::ShowQuickCustomizePane
// address: 0x100e290e
// body: available
// range: 0x100e290e-0x100e2c9d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100e2a55 to 0x10012a3f FUN_10012a3f (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: void __thiscall CFrameImpl::ShowQuickCustomizePane(class CMFCPopupMenu *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CFrameImpl::ShowQuickCustomizePane(CFrameImpl *this,CMFCPopupMenu *param_1)

{
  code *pcVar1;
  CMFCPopupMenu *pCVar2;
  CWnd *pCVar3;
  int iVar4;
  CWnd *this_00;
  CMFCToolBarMenuButton *pCVar5;
  long lVar6;
  CMFCToolBarsCustomizeDialog *this_01;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  int iVar11;
  uint local_234;
  int *local_228;
  int local_220;
  CMFCCustomizeMenuButton local_21c [260];
  CMFCCustomizeMenuButton local_118 [272];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x228;
  local_8 = 0x100e291d;
  pCVar2 = CMFCPopupMenu::GetParentPopupMenu(param_1);
  if ((pCVar2 != (CMFCPopupMenu *)0x0) &&
     (pCVar2 = CMFCPopupMenu::GetParentPopupMenu(pCVar2), pCVar2 != (CMFCPopupMenu *)0x0)) {
    iVar4 = *(int *)(pCVar2 + 0x158);
    if (iVar4 == 0) {
      pCVar3 = CWnd::GetOwner((CWnd *)pCVar2);
      if ((pCVar3 == (CWnd *)0x0) ||
         (iVar4 = FUN_10019d4f(&PTR_s_CPaneFrameWnd_101d38dc), iVar4 == 0)) goto LAB_100e2c96;
      pcVar1 = *(code **)(*(int *)pCVar3 + 0x1a8);
      guard_check_icall();
      this_00 = (CWnd *)(*pcVar1)();
    }
    else {
      iVar8 = FUN_10019d4f(&PTR_s_CMFCCustomizeButton_101d3aac);
      if (iVar8 == 0) goto LAB_100e2c96;
      pCVar3 = *(CWnd **)(iVar4 + 0xf8);
      pCVar5 = CMFCPopupMenu::GetMenuItem(param_1,0);
      lVar6 = __wtol(*(wchar_t **)(pCVar5 + 0x2c));
      iVar4 = FUN_1005efdb();
      local_220 = *(int *)(iVar4 + 4);
      do {
        this_00 = pCVar3;
        if (local_220 == 0) break;
        this_00 = (CWnd *)FUN_1005f4c2(&local_220);
        if (this_00 == (CWnd *)0x0) goto LAB_100e2a55;
        iVar4 = CWnd::GetDlgCtrlID(this_00);
      } while ((lVar6 != iVar4) || (*(int *)(this_00 + 0xbc8) == 0));
    }
    CMFCPopupMenu::RemoveAllItems(param_1);
    this_01 = (CMFCToolBarsCustomizeDialog *)FUN_10011f7d(0x918);
    local_8 = 0;
    if (this_01 == (CMFCToolBarsCustomizeDialog *)0x0) {
      local_228 = (int *)0x0;
    }
    else {
      local_228 = (int *)CMFCToolBarsCustomizeDialog::CMFCToolBarsCustomizeDialog
                                   (this_01,*(CFrameWnd **)(this + 0xb0),1,0x40,
                                    (CList<CRuntimeClass*,CRuntimeClass*> *)0x0);
    }
    local_8 = 0xffffffff;
    local_220 = 0;
    DAT_101dd2c4 = this_00;
    CMap<int,int,int,int>::RemoveAll((CMap<int,int,int,int> *)&PTR_vftable_101d3bf8);
    uVar7 = FUN_1005f182();
    local_234 = 0;
    if (uVar7 != 0) {
      do {
        iVar4 = FUN_1005f070(local_234);
        iVar8 = FUN_10019d4f(&PTR_s_CMFCCustomizeButton_101d3aac);
        if ((iVar8 == 0) && ((*(byte *)(iVar4 + 0x24) & 1) == 0)) {
          puVar9 = (undefined4 *)FUN_10067d49(*(undefined4 *)(iVar4 + 0x20));
          *puVar9 = 0;
          iVar8 = FUN_10003060(*(int *)(iVar4 + 0x2c) + -0x10);
          local_8 = 1;
          if (*(int *)(*(int *)(iVar4 + 0x2c) + -0xc) == 0) {
            uVar10 = FUN_100eb715(*(undefined4 *)(iVar4 + 0x20));
            FUN_10003780(uVar10);
          }
          iVar11 = *(int *)(iVar4 + 0x20);
          if ((iVar11 == 0) || (iVar11 == -1)) {
            iVar11 = -0x14;
          }
          if (*(int *)(iVar4 + 4) == 0) {
            uVar10 = *(undefined4 *)(iVar4 + 0x34);
          }
          else {
            uVar10 = *(undefined4 *)(iVar4 + 0x38);
          }
          CMFCCustomizeMenuButton(iVar11,0,uVar10,iVar8 + 0x10,*(int *)(iVar4 + 4));
          local_8 = CONCAT31(local_8._1_3_,2);
          CMFCCustomizeMenuButton::SetItemIndex(local_118,local_234,1,0);
          CMFCPopupMenu::InsertItem(param_1,(CMFCToolBarMenuButton *)local_118,-1);
          local_220 = local_220 + 1;
          FUN_10104efd();
          local_8 = 0xffffffff;
          FUN_10003460();
        }
        local_234 = local_234 + 1;
      } while (local_234 < uVar7);
    }
    if (local_228 != (int *)0x0) {
      pcVar1 = *(code **)(*local_228 + 4);
      guard_check_icall(1);
      (*pcVar1)();
    }
    *(undefined4 *)(param_1 + 0x1168) = 0;
    OnShowCustomizePane(this,param_1,*(uint *)(this_00 + 0xd18));
    if (local_220 != 0) {
      CMFCPopupMenu::InsertSeparator(param_1,-1);
    }
    uVar10 = FUN_10013071();
    FUN_10003190(uVar10);
    local_8 = 3;
    iVar4 = FUN_10012ca3(0x3fac);
    if ((iVar4 == 0) || (iVar4 = FUN_100032f0(iVar4,0x3fac), iVar4 == 0)) {
LAB_100e2a55:
                    /* WARNING: Subroutine does not return */
      FUN_10012a3f();
    }
    CMFCCustomizeMenuButton(0xffffffec,0,0xffffffff,this,0);
    local_8 = CONCAT31(local_8._1_3_,4);
    CMFCCustomizeMenuButton::SetItemIndex(local_21c,0x4278,1,0);
    CMFCPopupMenu::InsertItem(param_1,(CMFCToolBarMenuButton *)local_21c,-1);
    FUN_10104efd();
    FUN_10003460();
  }
LAB_100e2c96:
  FUN_101490fe();
  return;
}

