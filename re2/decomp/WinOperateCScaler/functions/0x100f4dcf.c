// rea decompile_all
// name: CMFCToolBarButtonCustomizeDialog::OnInitDialog
// address: 0x100f4dcf
// body: available
// range: 0x100f4dcf-0x100f5085 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100f4df7 to 0x1001d023 FUN_1001d023 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
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
  int local_1c;
  CWnd *local_18;
  CWnd *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  local_8 = 0x100f4ddb;
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
        FUN_1014041a(*(undefined4 *)(this + 0x4fc));
      }
      if ((*(int *)(this + 0x50c) == 0) || (*(int *)(*(int *)(this + 0x4f0) + 0x3c) != 0)) {
        hWnd = *(HWND *)(this + 200);
      }
      else {
        hWnd = *(HWND *)(this + 0x148);
      }
      SendMessageW(hWnd,0xf1,1,0);
      if (*(int *)(this + 0x500) == 0) {
        if (*(int *)(this + 0x504) == 0) goto LAB_100f4df7;
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
      iVar7 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Find
                        ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         (*(int *)(this + 0x4f0) + 0x2c),L'\t',0);
      if (iVar7 < 0) {
        FUN_10018680(*(int *)(this + 0x4f0) + 0x2c);
      }
      else {
        uVar5 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Left
                          ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                           (*(int *)(this + 0x4f0) + 0x2c),(int)&local_18);
        local_8 = 0;
        FUN_10018680(uVar5);
        local_8 = 0xffffffff;
        ATL::CStringData::Release((CStringData *)(local_18 + -0x10));
        uVar5 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Mid
                          ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                           (*(int *)(this + 0x4f0) + 0x2c),(int)&local_1c);
        local_8 = 1;
        FUN_10018680(uVar5);
        local_8 = 0xffffffff;
        ATL::CStringData::Release((CStringData *)(local_1c + -0x10));
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
      if (DAT_10209e3c < 0x11) {
        iVar7 = DAT_10209e3c;
      }
      iVar6 = 0x10;
      if (DAT_10209e40 < 0x11) {
        iVar6 = DAT_10209e40;
      }
      *(LONG *)(this + 0x534) = lpRect->left + iVar7;
      *(int *)(this + 0x538) = *(int *)(this + 0x530) + iVar6;
      EnableControls(this);
      FUN_1002b7d2(0);
      return 1;
    }
  }
LAB_100f4df7:
                    /* WARNING: Subroutine does not return */
  FUN_1001d023();
}

