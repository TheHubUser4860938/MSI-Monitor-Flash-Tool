// rea decompile_all
// name: CMFCToolBarButtonCustomizeDialog::CMFCToolBarButtonCustomizeDialog
// address: 0x1011ffb3
// body: available
// range: 0x1011ffb3-0x101201ec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: __thiscall CMFCToolBarButtonCustomizeDialog::CMFCToolBarButtonCustomizeDialog(class
   CMFCToolBarButton *,class CMFCToolBarImages *,class CWnd *,int,int)
   
   Library: Visual Studio 2015 Release */

CMFCToolBarButtonCustomizeDialog * __thiscall
CMFCToolBarButtonCustomizeDialog::CMFCToolBarButtonCustomizeDialog
          (CMFCToolBarButtonCustomizeDialog *this,CMFCToolBarButton *param_1,
          CMFCToolBarImages *param_2,CWnd *param_3,int param_4,int param_5)

{
  uint uVar1;
  undefined4 uVar2;
  CUserTool *pCVar3;
  int iVar4;
  __POSITION *p_Var5;
  
  CDialog::CDialog((CDialog *)this,0x3f04,param_3);
  *(undefined ***)this = vftable;
  CWnd::CWnd((CWnd *)(this + 0xa8));
  *(undefined ***)(this + 0xa8) = CButton::vftable;
  CWnd::CWnd((CWnd *)(this + 0x128));
  *(undefined ***)(this + 0x128) = CButton::vftable;
  CWnd::CWnd((CWnd *)(this + 0x1a8));
  *(undefined ***)(this + 0x1a8) = CStatic::vftable;
  CWnd::CWnd((CWnd *)(this + 0x228));
  *(undefined ***)(this + 0x228) = CEdit::vftable;
  CWnd::CWnd((CWnd *)(this + 0x2a8));
  *(undefined ***)(this + 0x2a8) = CButton::vftable;
  CMFCToolBarButtonsListButton::CMFCToolBarButtonsListButton
            ((CMFCToolBarButtonsListButton *)(this + 0x328));
  CWnd::CWnd((CWnd *)(this + 0x468));
  *(undefined ***)(this + 0x468) = CButton::vftable;
  uVar2 = FUN_10049868();
  FUN_100476a0(uVar2);
  uVar2 = FUN_10049868();
  FUN_100476a0(uVar2);
  *(CMFCToolBarImages **)(this + 0x4f4) = param_2;
  *(int *)(this + 0x4f8) = param_4;
  *(CMFCToolBarButton **)(this + 0x4f0) = param_1;
  *(int *)(this + 0x508) = param_5;
  CObList::CObList((CObList *)(this + 0x510),10);
  *(undefined4 *)(this + 0x52c) = 0;
  *(undefined4 *)(this + 0x530) = 0;
  *(undefined4 *)(this + 0x534) = 0;
  *(undefined4 *)(this + 0x538) = 0;
  uVar2 = FUN_10049868();
  FUN_100476a0(uVar2);
  *(undefined4 *)(this + 0x540) = 0;
  if (DAT_10247680 != (CUserToolsManager *)0x0) {
    pCVar3 = CUserToolsManager::FindTool(DAT_10247680,*(uint *)(*(int *)(this + 0x4f0) + 0x20));
    *(CUserTool **)(this + 0x540) = pCVar3;
  }
  if (*(int *)(param_1 + 4) == 0) {
    if (*(int *)(this + 0x540) == 0) {
      iVar4 = CMFCToolBar::GetDefaultImage(*(uint *)(*(int *)(this + 0x4f0) + 0x20));
      if (iVar4 < 0) goto LAB_10120152;
    }
    uVar2 = 0;
  }
  else {
LAB_10120152:
    uVar2 = 1;
  }
  *(undefined4 *)(this + 0x50c) = uVar2;
  if (*(int *)(param_1 + 4) == 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x34);
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0x38);
  }
  *(undefined4 *)(this + 0x4fc) = uVar2;
  *(undefined4 *)(this + 0x500) = *(undefined4 *)(param_1 + 0xc);
  if (*(int *)(this + 0x508) == 0) {
LAB_101201a6:
    if (*(int *)(*(int *)(this + 0x4f0) + 0x18) == 0) {
      *(undefined4 *)(this + 0x504) = *(undefined4 *)(param_1 + 8);
      goto LAB_101201c6;
    }
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x20);
    iVar4 = FUN_100c8b22();
    p_Var5 = CList<unsigned_int,unsigned_int>::Find
                       ((CList<unsigned_int,unsigned_int> *)(iVar4 + 0x58),uVar1,(__POSITION *)0x0);
    if (p_Var5 != (__POSITION *)0x0) {
      *(undefined4 *)(this + 0x500) = 0;
    }
    if (*(int *)(this + 0x508) == 0) goto LAB_101201a6;
  }
  *(undefined4 *)(this + 0x504) = 1;
LAB_101201c6:
  FUN_10047140(&PTR_1020e6b0);
  FUN_10047140(&PTR_1020e6b0);
  return this;
}

