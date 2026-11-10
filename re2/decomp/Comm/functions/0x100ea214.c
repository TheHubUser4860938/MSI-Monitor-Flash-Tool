// rea decompile_all
// name: CMFCToolBarsCustomizeDialog::CMFCToolBarsCustomizeDialog
// address: 0x100ea214
// body: available
// range: 0x100ea214-0x100ea6b5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100ea302 to 0x10012a3f FUN_10012a3f (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: __thiscall CMFCToolBarsCustomizeDialog::CMFCToolBarsCustomizeDialog(class CFrameWnd
   *,int,unsigned int,class CList<struct CRuntimeClass *,struct CRuntimeClass *> *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCToolBarsCustomizeDialog::CMFCToolBarsCustomizeDialog
          (CMFCToolBarsCustomizeDialog *this,CFrameWnd *param_1,int param_2,uint param_3,
          CList<CRuntimeClass*,CRuntimeClass*> *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  HWND__ *pHVar3;
  CMFCToolBarsCommandsPropertyPage *this_00;
  CMFCToolBarsListPropertyPage *this_01;
  CMFCToolBarsKeyboardPropertyPage *this_02;
  CMFCToolBarsMenuPropertyPage *this_03;
  CMFCMousePropertyPage *this_04;
  CMFCToolBarsToolsPropertyPage *this_05;
  CObject *pCVar4;
  CMFCToolBarsOptionsPropertyPage *this_06;
  int iVar5;
  CMFCToolBarButton *pCVar6;
  undefined4 *puVar7;
  wchar_t *local_104;
  CMFCToolBarMenuButton local_fc [244];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xf8;
  local_8 = 0x100ea223;
  CPropertySheet::CPropertySheet((CPropertySheet *)this,L"",(CWnd *)param_1,0);
  local_8 = 0;
  *(undefined ***)this = vftable;
  CMap<>(10);
  local_8._0_1_ = 1;
  CStringList::CStringList((CStringList *)(this + 0xfc),10);
  CList<CPropertyPage*,CPropertyPage*>::CList<CPropertyPage*,CPropertyPage*>
            ((CList<CPropertyPage*,CPropertyPage*> *)(this + 0x134),10);
  local_8._0_1_ = 3;
  uVar2 = FUN_10013071();
  FUN_10003190(uVar2);
  *(int *)(this + 0x158) = param_2;
  local_8._0_1_ = 4;
  *(uint *)(this + 0x15c) = param_3;
  CMFCButton::CMFCButton((CMFCButton *)(this + 0x168));
  *(undefined4 *)(this + 0x910) = 0;
  local_8._0_1_ = 5;
  *(uint *)(this + 0x160) = (byte)this[0x15c] >> 6 & 1;
  if (param_4 != (CList<CRuntimeClass*,CRuntimeClass*> *)0x0) {
    puVar7 = *(undefined4 **)(param_4 + 4);
    while (puVar7 != (undefined4 *)0x0) {
      puVar7 = (undefined4 *)*puVar7;
      pHVar3 = (HWND__ *)FUN_10019cd8();
      CList<HWND__*,HWND__*>::AddTail((CList<HWND__*,HWND__*> *)(this + 0x134),pHVar3);
    }
  }
  if (param_1 == (CFrameWnd *)0x0) goto LAB_100ea302;
  *(CFrameWnd **)(this + 0x154) = param_1;
  this_00 = (CMFCToolBarsCommandsPropertyPage *)FUN_10011f7d(0x1d8);
  local_8._0_1_ = 6;
  if (this_00 == (CMFCToolBarsCommandsPropertyPage *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CMFCToolBarsCommandsPropertyPage::CMFCToolBarsCommandsPropertyPage(this_00);
  }
  local_8._0_1_ = 5;
  *(undefined4 *)(this + 0x118) = uVar2;
  this_01 = (CMFCToolBarsListPropertyPage *)FUN_10011f7d(0x3f0);
  local_8._0_1_ = 7;
  if (this_01 == (CMFCToolBarsListPropertyPage *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CMFCToolBarsListPropertyPage::CMFCToolBarsListPropertyPage
                      (this_01,*(CFrameWnd **)(this + 0x154));
  }
  local_8._0_1_ = 5;
  *(undefined4 *)(this + 0x11c) = uVar2;
  this_02 = (CMFCToolBarsKeyboardPropertyPage *)FUN_10011f7d(0x588);
  local_8._0_1_ = 8;
  if (this_02 == (CMFCToolBarsKeyboardPropertyPage *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CMFCToolBarsKeyboardPropertyPage::CMFCToolBarsKeyboardPropertyPage
                      (this_02,*(CFrameWnd **)(this + 0x154),*(int *)(this + 0x158));
  }
  local_8._0_1_ = 5;
  *(undefined4 *)(this + 0x120) = uVar2;
  this_03 = (CMFCToolBarsMenuPropertyPage *)FUN_10011f7d(0x5f8);
  local_8._0_1_ = 9;
  if (this_03 == (CMFCToolBarsMenuPropertyPage *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CMFCToolBarsMenuPropertyPage::CMFCToolBarsMenuPropertyPage
                      (this_03,*(CFrameWnd **)(this + 0x154),*(int *)(this + 0x158));
  }
  local_8._0_1_ = 5;
  *(undefined4 *)(this + 0x124) = uVar2;
  this_04 = (CMFCMousePropertyPage *)FUN_10011f7d(600);
  local_8._0_1_ = 10;
  if (this_04 == (CMFCMousePropertyPage *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CMFCMousePropertyPage::CMFCMousePropertyPage(this_04);
  }
  local_8._0_1_ = 5;
  *(undefined4 *)(this + 0x128) = uVar2;
  FUN_1002c763(*(undefined4 *)(this + 0x118));
  FUN_1002c763(*(undefined4 *)(this + 0x11c));
  if (((byte)this[0x15c] & 0x20) == 0) {
    this_05 = (CMFCToolBarsToolsPropertyPage *)FUN_10011f7d(0x1478);
    local_8._0_1_ = 0xb;
    if (this_05 == (CMFCToolBarsToolsPropertyPage *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = CMFCToolBarsToolsPropertyPage::CMFCToolBarsToolsPropertyPage(this_05);
    }
    *(undefined4 *)(this + 0x130) = uVar2;
    local_8._0_1_ = 5;
    if (DAT_101dc968 != 0) {
      FUN_1002c763(uVar2);
    }
  }
  else {
    *(undefined4 *)(this + 0x130) = 0;
  }
  if ((DAT_101dc5bc != 0) && (*(int *)(param_1 + 0x8c) != 0)) {
    FUN_1002c763(*(undefined4 *)(this + 0x120));
  }
  local_104 = (wchar_t *)0x0;
  pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWndEx_10192540,
                              *(CObject **)(this + 0x154));
  if (pCVar4 == (CObject *)0x0) {
    pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CFrameWndEx_10191fb0,
                                *(CObject **)(this + 0x154));
    if (pCVar4 != (CObject *)0x0) {
      iVar5 = *(int *)(pCVar4 + 0x1e0);
      uVar2 = *(undefined4 *)(pCVar4 + 0x14c);
      goto LAB_100ea4c7;
    }
  }
  else {
    iVar5 = *(int *)(pCVar4 + 0x3fc);
    uVar2 = *(undefined4 *)(pCVar4 + 0x368);
LAB_100ea4c7:
    local_104 = (wchar_t *)(uint)(iVar5 != 0);
    *(undefined4 *)(this + 0x910) = uVar2;
  }
  if ((DAT_101dc50c != 0) || (local_104 != (wchar_t *)0x0)) {
    FUN_1002c763(*(undefined4 *)(this + 0x124));
  }
  if (DAT_101dd3d8 != 0) {
    FUN_1002c763(*(undefined4 *)(this + 0x128));
  }
  puVar7 = *(undefined4 **)(this + 0x138);
  while (puVar7 != (undefined4 *)0x0) {
    puVar1 = puVar7 + 2;
    puVar7 = (undefined4 *)*puVar7;
    FUN_1002c763(*puVar1);
  }
  this_06 = (CMFCToolBarsOptionsPropertyPage *)FUN_10011f7d(0x458);
  local_8._0_1_ = 0xc;
  if (this_06 == (CMFCToolBarsOptionsPropertyPage *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CMFCToolBarsOptionsPropertyPage::CMFCToolBarsOptionsPropertyPage(this_06,(int)local_104)
    ;
  }
  local_8._0_1_ = 5;
  *(undefined4 *)(this + 300) = uVar2;
  FUN_1002c763(uVar2);
  uVar2 = FUN_10013071();
  FUN_10003190(uVar2);
  local_8._0_1_ = 0xd;
  iVar5 = FUN_10012ca3(0x3ee7);
  if (((iVar5 != 0) && (iVar5 = FUN_100032f0(iVar5,0x3ee7), iVar5 != 0)) &&
     (iVar5 = FUN_10012ca3(0x3eee), iVar5 != 0)) {
    iVar5 = FUN_100032f0(iVar5,0x3eee);
    if (iVar5 != 0) {
      FUN_10138327(*(undefined4 *)(this + 0x150));
      if (*(int *)(this + 0x120) != 0) {
        FUN_1013a804(*(undefined4 *)(this + 0x150));
      }
      CPropertySheet::SetTitle((CPropertySheet *)this,local_104,0);
      if (*(int *)(this + 0x158) != 0) {
        SetupFromMenus(this);
      }
      uVar2 = FUN_10013071();
      FUN_10003190(uVar2);
      local_8._0_1_ = 0xe;
      iVar5 = FUN_10012ca3(0x3e8e);
      if ((iVar5 != 0) && (iVar5 = FUN_100032f0(iVar5,0x3e8e), iVar5 != 0)) {
        pCVar6 = (CMFCToolBarButton *)
                 CMFCToolBarMenuButton::CMFCToolBarMenuButton
                           (local_fc,0,(HMENU__ *)0x0,-1,(wchar_t *)this_06,0);
        local_8 = CONCAT31(local_8._1_3_,0xf);
        AddButton(this,(wchar_t *)this_06,pCVar6,-1);
        FUN_100d9fa0();
        FUN_10003460();
        FUN_10003460();
        FUN_101490fe();
        return;
      }
    }
  }
LAB_100ea302:
                    /* WARNING: Subroutine does not return */
  FUN_10012a3f();
}

