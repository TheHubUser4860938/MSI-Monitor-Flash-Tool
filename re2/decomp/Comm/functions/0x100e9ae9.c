// rea decompile_all
// name: CMFCToolBarButtonCustomizeDialog::OnInitDialog
// address: 0x100e9ae9
// body: available
// range: 0x100e9ae9-0x100e9d9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100e9b11 to 0x10012a3f FUN_10012a3f (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: virtual int __thiscall CMFCToolBarButtonCustomizeDialog::OnInitDialog(void)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CMFCToolBarButtonCustomizeDialog::OnInitDialog(CMFCToolBarButtonCustomizeDialog *this)

{
  CMFCToolBarButtonsListButton *this_00;
  LPRECT lpRect;
  code *pcVar1;
  CWnd *pCVar2;
  CWnd *pCVar3;
  ulong uVar4;
  undefined4 uVar5;
  int iVar6;
  HWND hWnd;
  int iVar7;
  undefined1 local_1c [4];
  CWnd *local_18;
  CWnd *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  local_8 = 0x100e9af5;
  CDialog::OnInitDialog((CDialog *)this);
  pCVar2 = CWnd::GetDlgItem((CWnd *)this,0x4079);
  local_14 = pCVar2;
  if (pCVar2 != (CWnd *)0x0) {
    local_18 = CWnd::GetDlgItem((CWnd *)this,0x407b);
    if (local_18 != (CWnd *)0x0) {
      pCVar3 = AfxGetMainWnd();
      if (pCVar3 != (CWnd *)0x0) {
        pCVar3 = AfxGetMainWnd();
        uVar4 = CWnd::GetExStyle(pCVar3);
        if ((uVar4 & 0x400000) != 0) {
          CWnd::ModifyStyleEx((CWnd *)this,0,0x400000,0);
        }
      }
      this_00 = (CMFCToolBarButtonsListButton *)(this + 0x328);
      if (*(CMFCToolBarImages **)(this + 0x4f4) == (CMFCToolBarImages *)0x0) {
        CWnd::EnableWindow((CWnd *)this_00,0);
        CWnd::EnableWindow((CWnd *)(this + 0x128),0);
        if (*(int *)(this + 0x4fc) < 0) {
          CWnd::EnableWindow(pCVar2,0);
          CWnd::EnableWindow(local_18,0);
        }
      }
      else {
        CMFCToolBarButtonsListButton::SetImages(this_00,*(CMFCToolBarImages **)(this + 0x4f4));
        RebuildImageList(this);
        FUN_101350cd(*(undefined4 *)(this + 0x4fc));
      }
      if ((*(int *)(this + 0x50c) == 0) || (*(int *)(*(int *)(this + 0x4f0) + 0x3c) != 0)) {
        hWnd = *(HWND *)(this + 200);
      }
      else {
        hWnd = *(HWND *)(this + 0x148);
      }
      SendMessageW(hWnd,0xf1,1,0);
      if (*(int *)(this + 0x500) == 0) {
        if (*(int *)(this + 0x504) == 0) goto LAB_100e9b11;
        CWnd::CheckDlgButton((CWnd *)this,0x407a,1);
        *(undefined4 *)(this + 0x504) = 1;
        CWnd::EnableWindow((CWnd *)this_00,0);
      }
      else {
        if (*(int *)(this + 0x504) == 0) {
          iVar7 = 0x4079;
        }
        else {
          iVar7 = 0x407b;
        }
        CWnd::CheckDlgButton((CWnd *)this,iVar7,1);
      }
      iVar7 = FUN_10010f20(9,0);
      if (iVar7 < 0) {
        FUN_100030d0(*(int *)(this + 0x4f0) + 0x2c);
      }
      else {
        uVar5 = FUN_10002d90(&local_18,iVar7);
        local_8 = 0;
        FUN_100030d0(uVar5);
        local_8 = 0xffffffff;
        FUN_10003460();
        uVar5 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Mid
                          ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                           (*(int *)(this + 0x4f0) + 0x2c),(int)local_1c);
        local_8 = 1;
        FUN_100030d0(uVar5);
        local_8 = 0xffffffff;
        FUN_10003460();
      }
      local_18 = (CWnd *)CWnd::GetParentFrame((CWnd *)this);
      if (local_18 != (CWnd *)0x0) {
        pcVar1 = *(code **)(*(int *)local_18 + 0x174);
        guard_check_icall(*(undefined4 *)(*(int *)(this + 0x4f0) + 0x20),this + 0x4ec);
        (*pcVar1)();
      }
      pCVar2 = local_14;
      if (*(int *)(this + 0x508) != 0) {
        CWnd::EnableWindow(local_14,0);
      }
      if (*(int *)(*(int *)(this + 0x4f0) + 0x18) != 0) {
        CWnd::EnableWindow(pCVar2,0);
      }
      lpRect = (LPRECT)(this + 0x52c);
      GetClientRect(*(HWND *)(this + 0x1c8),lpRect);
      CWnd::MapWindowPoints((CWnd *)(this + 0x1a8),(CWnd *)this,lpRect);
      iVar7 = 0x10;
      if (DAT_101db0dc < 0x11) {
        iVar7 = DAT_101db0dc;
      }
      iVar6 = 0x10;
      if (DAT_101db0e0 < 0x11) {
        iVar6 = DAT_101db0e0;
      }
      *(LONG *)(this + 0x534) = lpRect->left + iVar7;
      *(int *)(this + 0x538) = *(int *)(this + 0x530) + iVar6;
      EnableControls(this);
      FUN_1002044a(0);
      return 1;
    }
  }
LAB_100e9b11:
                    /* WARNING: Subroutine does not return */
  FUN_10012a3f();
}

