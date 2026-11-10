// rea decompile_all
// name: COutlookOptionsDlg::OnInitDialog
// address: 0x10134655
// body: available
// range: 0x10134655-0x101347c5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: virtual int __thiscall COutlookOptionsDlg::OnInitDialog(void)
   
   Library: Visual Studio 2015 Release */

int __thiscall COutlookOptionsDlg::OnInitDialog(COutlookOptionsDlg *this)

{
  code *pcVar1;
  CWnd *pCVar2;
  ulong uVar3;
  undefined4 uVar4;
  WPARAM wParam;
  int iVar5;
  HWND pHVar6;
  CObject *pCVar7;
  int local_18;
  LPARAM local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x10;
  local_8 = 0x10134661;
  CDialog::OnInitDialog((CDialog *)this);
  pCVar2 = AfxGetMainWnd();
  if (pCVar2 != (CWnd *)0x0) {
    pCVar2 = AfxGetMainWnd();
    uVar3 = CWnd::GetExStyle(pCVar2);
    if ((uVar3 & 0x400000) != 0) {
      CWnd::ModifyStyleEx((CWnd *)this,0,0x400000,0);
    }
  }
  local_18 = 0;
  if (0 < *(int *)(*(int *)(this + 0x2c8) + 0xbc)) {
    do {
      uVar4 = FUN_10048e90();
      FUN_10034c30(uVar4);
      pcVar1 = *(code **)(**(int **)(this + 0x2c8) + 0x1bc);
      local_8 = 0;
      guard_check_icall(local_18,local_14);
      (*pcVar1)();
      wParam = SendMessageW(*(HWND *)(this + 0x248),0x180,0,local_14[0]);
      SendMessageW(*(HWND *)(this + 0x248),0x19a,wParam,local_18);
      pcVar1 = *(code **)(**(int **)(this + 0x2c8) + 0x27c);
      guard_check_icall(local_18);
      iVar5 = (*pcVar1)();
      CCheckListBox::SetCheck((CCheckListBox *)(this + 0x228),wParam,iVar5);
      local_8 = 0xffffffff;
      FUN_10034f00();
      local_18 = local_18 + 1;
    } while (local_18 < *(int *)(*(int *)(this + 0x2c8) + 0xbc));
  }
  SendMessageW(*(HWND *)(this + 0x248),0x186,0,0);
  OnSelchange(this);
  pHVar6 = GetParent(*(HWND *)(*(int *)(this + 0x2c8) + 0x20));
  pCVar2 = CWnd::FromHandle(pHVar6);
  pCVar7 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCOutlookBar_10205ad8,(CObject *)pCVar2);
  if (pCVar7 == (CObject *)0x0) {
    CWnd::EnableWindow((CWnd *)(this + 0x1a8),0);
    CWnd::ShowWindow((CWnd *)(this + 0x1a8),0);
  }
  return 1;
}

