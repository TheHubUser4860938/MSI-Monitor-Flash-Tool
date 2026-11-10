// rea decompile_all
// name: CMFCEditBrowseCtrl::OnBrowse
// address: 0x1006dbd3
// body: available
// range: 0x1006dbd3-0x1006df97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006dbfb to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
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
  local_8 = 0x1006dbe2;
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
    FUN_1004886a();
  }
  if (*(int *)(this + 0xc0) == 2) {
    uVar3 = FUN_10048e90();
    FUN_10034c30(uVar3);
    local_8 = 2;
    CWnd::GetWindowTextW
              ((CWnd *)this,
               (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_708);
    if (*(int *)(local_708 + -6) != 0) {
      __wsplitpath_s(local_708,(wchar_t *)0x0,0,(wchar_t *)0x0,0,local_214,0x100,(wchar_t *)0x0,0);
      FUN_100352e0(local_214);
      local_8 = CONCAT31(local_8._1_3_,3);
      FUN_100342c0();
      FUN_10034370();
      if (*(int *)(local_700 + -0xc) == 0) {
        FUN_10034ea0();
      }
      FUN_100352e0(L"*?<>|");
      local_8 = CONCAT31(local_8._1_3_,4);
      pwVar4 = _wcspbrk(local_708,local_70c);
      if ((pwVar4 != (wchar_t *)0x0) && (-1 < (int)pwVar4 - (int)local_708 >> 1)) {
        pcVar1 = *(code **)(*(int *)this + 0x174);
        guard_check_icall(&local_708);
        iVar2 = (*pcVar1)();
        if (iVar2 == 0) {
          CWnd::SetFocus((CWnd *)this);
          FUN_10034f00();
          FUN_10034f00();
          FUN_10034f00();
          goto LAB_1006df92;
        }
      }
      FUN_10034f00();
      local_8 = CONCAT31(local_8._1_3_,2);
      FUN_10034f00();
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
      iVar2 = FUN_1004a623(*puVar5);
      local_701 = '\x01';
      if (iVar2 == 0) goto LAB_1006deba;
    }
    else {
LAB_1006deba:
      local_701 = '\0';
    }
    local_8 = 5;
    if (bVar8) {
      FUN_10034f00();
    }
    if (local_701 != '\0') {
      puVar5 = (undefined4 *)CFileDialog::GetPathName(local_6fc);
      local_8._0_1_ = 7;
      FUN_10056072(*puVar5);
      local_8 = CONCAT31(local_8._1_3_,5);
      FUN_10034f00();
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
LAB_1006df7f:
    local_8 = 0xffffffff;
    FUN_10034f00();
  }
  else if ((*(int *)(this + 0xc0) == 3) && (DAT_1020f1a0 != (CShellManager *)0x0)) {
    uVar3 = FUN_10048e90();
    FUN_10034c30(uVar3);
    local_8 = 0;
    CWnd::GetWindowTextW
              ((CWnd *)this,
               (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_70c);
    uVar3 = FUN_10048e90();
    FUN_10034c30(uVar3);
    local_8 = CONCAT31(local_8._1_3_,1);
    iVar2 = CShellManager::BrowseForFolder
                      (DAT_1020f1a0,
                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       &local_700,(CWnd *)this,local_70c,
                       (wchar_t *)
                       (-(uint)(*(int *)(*(uint *)(this + 0xb8) - 0xc) != 0) &
                       *(uint *)(this + 0xb8)),*(uint *)(this + 0xbc),(int *)0x0);
    if (iVar2 != 0) {
      iVar2 = FUN_1004a623(local_70c);
      if (iVar2 != 0) {
        FUN_10056072(local_700);
        SendMessageW(*(HWND *)(this + 0x20),0xb9,1,0);
        pcVar1 = *(code **)(*(int *)this + 0x170);
        guard_check_icall();
        (*pcVar1)();
      }
    }
    FUN_10034f00();
    goto LAB_1006df7f;
  }
  CWnd::SetFocus((CWnd *)this);
LAB_1006df92:
  FUN_1017f5f4();
  return;
}

