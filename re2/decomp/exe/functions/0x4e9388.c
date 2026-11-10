// rea decompile_all
// name: CMFCToolBarButtonCustomizeDialog::OnOK
// address: 0x4e9388
// body: available
// range: 0x4e9388-0x4e9546 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4e9426 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: virtual void __thiscall CMFCToolBarButtonCustomizeDialog::OnOK(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCToolBarButtonCustomizeDialog::OnOK(CMFCToolBarButtonCustomizeDialog *this)

{
  code *pcVar1;
  undefined4 uVar2;
  CCommandManager *this_00;
  CMFCToolBarButtonCustomizeDialog *this_01;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  wchar_t *local_14;
  
  FUN_00432070(1);
  iVar3 = *(int *)(this + 0x4fc);
  if (*(int *)(this + 0x50c) == 0) {
    if (*(int *)(this + 0x540) == 0) {
      iVar3 = CMFCToolBar::GetDefaultImage(*(uint *)(*(int *)(this + 0x4f0) + 0x20));
    }
    else {
      iVar3 = 0;
    }
  }
  if ((*(int *)(this + 0x500) == 0) || (-1 < iVar3)) {
    if ((*(int *)(this + 0x504) == 0) || (*(int *)(*(int *)(this + 0x4e8) + -0xc) != 0)) {
      if (*(int *)(*(int *)(this + 0x4f0) + 0x18) == 0) {
        *(int *)(*(int *)(this + 0x4f0) + 8) = *(int *)(this + 0x504);
      }
      if (*(int *)(this + 0x508) == 0) {
        *(undefined4 *)(*(int *)(this + 0x4f0) + 0xc) = *(undefined4 *)(this + 0x500);
      }
      else {
        iVar5 = *(int *)(this + 0x500);
        uVar4 = *(uint *)(*(int *)(this + 0x4f0) + 0x20);
        iVar6 = iVar3;
        this_00 = (CCommandManager *)FUN_004b1aad();
        CCommandManager::EnableMenuItemImage(this_00,uVar4,iVar5,iVar6);
      }
      *(undefined4 *)(*(int *)(this + 0x4f0) + 4) = *(undefined4 *)(this + 0x50c);
      pcVar1 = *(code **)(**(int **)(this + 0x4f0) + 0xc0);
      guard_check_icall(iVar3);
      (*pcVar1)();
      FUN_00415f50(this + 0x4e8);
      if (*(int *)(*(int *)(this + 0x53c) + -0xc) != 0) {
        FUN_004153a0(9);
        FUN_004157a0(*(int *)(this + 0x53c),*(undefined4 *)(*(int *)(this + 0x53c) + -0xc));
      }
      CDialog::OnOK((CDialog *)this);
      return;
    }
    uVar2 = FUN_004295fe();
    FUN_0040eb30(uVar2);
    iVar3 = FUN_00435fce(0x3e82);
    if ((iVar3 == 0) || (iVar3 = FUN_004160f0(iVar3,0x3e82), iVar3 == 0)) goto LAB_004e9426;
    AfxMessageBox(local_14,0,0);
    this_01 = this + 0x228;
  }
  else {
    uVar2 = FUN_004295fe();
    FUN_0040eb30(uVar2);
    iVar3 = FUN_00435fce(0x3e81);
    if ((iVar3 == 0) || (iVar3 = FUN_004160f0(iVar3,0x3e81), iVar3 == 0)) {
LAB_004e9426:
                    /* WARNING: Subroutine does not return */
      FUN_00429127();
    }
    AfxMessageBox(local_14,0,0);
    this_01 = this + 0x328;
  }
  CWnd::SetFocus((CWnd *)this_01);
  FUN_0040efa0();
  return;
}

