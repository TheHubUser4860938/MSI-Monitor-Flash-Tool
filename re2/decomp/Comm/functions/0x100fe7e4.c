// rea decompile_all
// name: COutlookOptionsDlg::OnOK
// address: 0x100fe7e4
// body: available
// range: 0x100fe7e4-0x100fe8f1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: virtual void __thiscall COutlookOptionsDlg::OnOK(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall COutlookOptionsDlg::OnOK(COutlookOptionsDlg *this)

{
  code *pcVar1;
  LRESULT LVar2;
  int iVar3;
  WPARAM wParam;
  undefined **local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  WPARAM local_18;
  LRESULT local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x20;
  local_30 = CArray<int,int>::vftable;
  local_2c = 0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  local_8 = 0;
  wParam = 0;
  local_18 = 0;
  LVar2 = SendMessageW(*(HWND *)(this + 0x248),0x18b,0,0);
  if (0 < LVar2) {
    do {
      local_14 = SendMessageW(*(HWND *)(this + 0x248),0x199,wParam,0);
      local_1c = CCheckListBox::GetCheck((CCheckListBox *)(this + 0x228),wParam);
      pcVar1 = *(code **)(**(int **)(this + 0x2c8) + 0x27c);
      guard_check_icall(local_14);
      iVar3 = (*pcVar1)();
      if (local_1c != iVar3) {
        pcVar1 = *(code **)(**(int **)(this + 0x2c8) + 0x1a8);
        guard_check_icall(local_14,local_1c,0,0);
        (*pcVar1)();
      }
      FUN_100c9f11(local_28,local_14);
      wParam = local_18 + 1;
      local_18 = wParam;
      LVar2 = SendMessageW(*(HWND *)(this + 0x248),0x18b,0,0);
    } while ((int)wParam < LVar2);
  }
  CMFCBaseTabCtrl::SetTabsOrder(*(CMFCBaseTabCtrl **)(this + 0x2c8),(CArray<int,int> *)&local_30);
  CDialog::OnOK((CDialog *)this);
  CArray<int,int>::~CArray<int,int>((CArray<int,int> *)&local_30);
  return;
}

