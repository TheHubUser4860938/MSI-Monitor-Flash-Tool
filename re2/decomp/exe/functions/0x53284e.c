// rea decompile_all
// name: CMFCEditBrowseCtrl::OnBrowse
// address: 0x53284e
// body: available
// range: 0x53284e-0x532c12 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x532876 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCEditBrowseCtrl::OnBrowse(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCEditBrowseCtrl::OnBrowse(CMFCEditBrowseCtrl *this)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  wchar_t *pwVar4;
  undefined4 *puVar5;
  HWND pHVar6;
  CWnd *pCVar7;
  bool bVar8;
  wchar_t *local_70c;
  wchar_t *local_708;
  char local_701;
  int local_700;
  CFileDialog local_6fc [1256];
  wchar_t local_214 [262];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x700;
  local_8 = 0x53285d;
  bVar8 = false;
  local_70c = (wchar_t *)0x0;
  if (this == (CMFCEditBrowseCtrl *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(this + 0x20);
  }
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00429127();
  }
  if (*(int *)(this + 0xc0) == 2) {
    uVar3 = FUN_004295fe();
    FUN_0040eb30(uVar3);
    local_8 = 2;
    CWnd::GetWindowTextW
              ((CWnd *)this,
               (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_708);
    if (*(int *)(local_708 + -6) != 0) {
      __wsplitpath_s(local_708,(wchar_t *)0x0,0,(wchar_t *)0x0,0,local_214,0x100,(wchar_t *)0x0,0);
      FUN_00415a10(local_214);
      local_8 = CONCAT31(local_8._1_3_,3);
      FUN_00414ce0();
      FUN_00414d90();
      if (*(int *)(local_700 + -0xc) == 0) {
        FUN_00415d60();
      }
      FUN_00415a10(L"*?<>|");
      local_8 = CONCAT31(local_8._1_3_,4);
      pwVar4 = _wcspbrk(local_708,local_70c);
      if ((pwVar4 != (wchar_t *)0x0) && (-1 < (int)pwVar4 - (int)local_708 >> 1)) {
        pcVar1 = *(code **)(*(int *)this + 0x174);
        guard_check_icall(&local_708);
        iVar2 = (*pcVar1)();
        if (iVar2 == 0) {
          CWnd::SetFocus((CWnd *)this);
          FUN_0040efa0();
          FUN_0040efa0();
          FUN_0040efa0();
          goto LAB_00532c0d;
        }
      }
      FUN_0040efa0();
      local_8 = CONCAT31(local_8._1_3_,2);
      FUN_0040efa0();
    }
    CFileDialog::CFileDialog
              (local_6fc,1,
               (wchar_t *)
               (-(uint)(*(int *)(*(uint *)(this + 0xac) - 0xc) != 0) & *(uint *)(this + 0xac)),
               local_708,*(ulong *)(this + 0xb4),
               (wchar_t *)
               (-(uint)(*(int *)(*(uint *)(this + 0xb0) - 0xc) != 0) & *(uint *)(this + 0xb0)),
               (CWnd *)0x0,0,1);
    local_8._0_1_ = 5;
    iVar2 = CFileDialog::DoModal(local_6fc);
    if (iVar2 == 1) {
      puVar5 = (undefined4 *)CFileDialog::GetPathName(local_6fc);
      local_8 = CONCAT31(local_8._1_3_,6);
      bVar8 = true;
      local_70c = (wchar_t *)0x1;
      iVar2 = FUN_0042cb39(*puVar5);
      local_701 = '\x01';
      if (iVar2 == 0) goto LAB_00532b35;
    }
    else {
LAB_00532b35:
      local_701 = '\0';
    }
    local_8 = 5;
    if (bVar8) {
      FUN_0040efa0();
    }
    if (local_701 != '\0') {
      puVar5 = (undefined4 *)CFileDialog::GetPathName(local_6fc);
      local_8._0_1_ = 7;
      FUN_004349b3(*puVar5);
      local_8 = CONCAT31(local_8._1_3_,5);
      FUN_0040efa0();
      SendMessageW(*(HWND *)(this + 0x20),0xb9,1,0);
      pcVar1 = *(code **)(*(int *)this + 0x170);
      guard_check_icall();
      (*pcVar1)();
    }
    pHVar6 = GetParent(*(HWND *)(this + 0x20));
    pCVar7 = CWnd::FromHandle(pHVar6);
    if (pCVar7 != (CWnd *)0x0) {
      pHVar6 = GetParent(*(HWND *)(this + 0x20));
      pCVar7 = CWnd::FromHandle(pHVar6);
      RedrawWindow(*(HWND *)(pCVar7 + 0x20),(RECT *)0x0,(HRGN)0x0,0x481);
    }
    CFileDialog::~CFileDialog(local_6fc);
LAB_00532bfa:
    local_8 = 0xffffffff;
    FUN_0040efa0();
  }
  else if ((*(int *)(this + 0xc0) == 3) && (DAT_00612cc4 != (CShellManager *)0x0)) {
    uVar3 = FUN_004295fe();
    FUN_0040eb30(uVar3);
    local_8 = 0;
    CWnd::GetWindowTextW
              ((CWnd *)this,
               (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_70c);
    uVar3 = FUN_004295fe();
    FUN_0040eb30(uVar3);
    local_8 = CONCAT31(local_8._1_3_,1);
    iVar2 = CShellManager::BrowseForFolder
                      (DAT_00612cc4,
                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       &local_700,(CWnd *)this,local_70c,
                       (wchar_t *)
                       (-(uint)(*(int *)(*(uint *)(this + 0xb8) - 0xc) != 0) &
                       *(uint *)(this + 0xb8)),*(uint *)(this + 0xbc),(int *)0x0);
    if (iVar2 != 0) {
      iVar2 = FUN_0042cb39(local_70c);
      if (iVar2 != 0) {
        FUN_004349b3(local_700);
        SendMessageW(*(HWND *)(this + 0x20),0xb9,1,0);
        pcVar1 = *(code **)(*(int *)this + 0x170);
        guard_check_icall();
        (*pcVar1)();
      }
    }
    FUN_0040efa0();
    goto LAB_00532bfa;
  }
  CWnd::SetFocus((CWnd *)this);
LAB_00532c0d:
  FUN_0055bae6();
  return;
}

