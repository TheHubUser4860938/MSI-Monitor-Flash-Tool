// rea decompile_all
// name: CMFCEditBrowseCtrl::OnBrowse
// address: 0x1004335d
// body: available
// range: 0x1004335d-0x10043721 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10043385 to 0x1001d023 FUN_1001d023 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
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
  int local_710;
  wchar_t *local_70c;
  wchar_t *local_708;
  char local_701;
  int local_700;
  CFileDialog local_6fc [1256];
  wchar_t local_214 [262];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x700;
  local_8 = 0x1004336c;
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
    FUN_1001d023();
  }
  if (*(int *)(this + 0xc0) == 2) {
    uVar3 = FUN_1001e20a();
    FUN_1001d224(uVar3);
    local_8 = 2;
    CWnd::GetWindowTextW
              ((CWnd *)this,
               (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_708);
    if (*(int *)(local_708 + -6) != 0) {
      __wsplitpath_s(local_708,(wchar_t *)0x0,0,(wchar_t *)0x0,0,local_214,0x100,(wchar_t *)0x0,0);
      FUN_100185a0(local_214);
      local_8 = CONCAT31(local_8._1_3_,3);
      FUN_10018fc0();
      FUN_10019070();
      if (*(int *)(local_700 + -0xc) == 0) {
        FUN_10018940();
      }
      FUN_100185a0(L"*?<>|");
      local_8 = CONCAT31(local_8._1_3_,4);
      pwVar4 = _wcspbrk(local_708,local_70c);
      if ((pwVar4 != (wchar_t *)0x0) && (-1 < (int)pwVar4 - (int)local_708 >> 1)) {
        pcVar1 = *(code **)(*(int *)this + 0x174);
        guard_check_icall(&local_708);
        iVar2 = (*pcVar1)();
        if (iVar2 == 0) {
          CWnd::SetFocus((CWnd *)this);
          ATL::CStringData::Release((CStringData *)(local_70c + -8));
          ATL::CStringData::Release((CStringData *)(local_700 + -0x10));
          ATL::CStringData::Release((CStringData *)(local_708 + -8));
          goto LAB_1004371c;
        }
      }
      ATL::CStringData::Release((CStringData *)(local_70c + -8));
      local_8 = CONCAT31(local_8._1_3_,2);
      ATL::CStringData::Release((CStringData *)(local_700 + -0x10));
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
      iVar2 = FUN_10030ace(*puVar5);
      local_701 = '\x01';
      if (iVar2 == 0) goto LAB_10043644;
    }
    else {
LAB_10043644:
      local_701 = '\0';
    }
    local_8 = 5;
    if (bVar8) {
      ATL::CStringData::Release((CStringData *)(local_700 + -0x10));
    }
    if (local_701 != '\0') {
      puVar5 = (undefined4 *)CFileDialog::GetPathName(local_6fc);
      local_8._0_1_ = 7;
      FUN_1002da47(*puVar5);
      local_8 = CONCAT31(local_8._1_3_,5);
      ATL::CStringData::Release((CStringData *)(local_710 + -0x10));
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
LAB_10043709:
    local_8 = 0xffffffff;
    ATL::CStringData::Release((CStringData *)(local_708 + -8));
  }
  else if ((*(int *)(this + 0xc0) == 3) && (DAT_1020a990 != (CShellManager *)0x0)) {
    uVar3 = FUN_1001e20a();
    FUN_1001d224(uVar3);
    local_8 = 0;
    CWnd::GetWindowTextW
              ((CWnd *)this,
               (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_70c);
    uVar3 = FUN_1001e20a();
    FUN_1001d224(uVar3);
    local_8 = CONCAT31(local_8._1_3_,1);
    iVar2 = CShellManager::BrowseForFolder
                      (DAT_1020a990,
                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       &local_700,(CWnd *)this,local_70c,
                       (wchar_t *)
                       (-(uint)(*(int *)(*(uint *)(this + 0xb8) - 0xc) != 0) &
                       *(uint *)(this + 0xb8)),*(uint *)(this + 0xbc),(int *)0x0);
    if (iVar2 != 0) {
      iVar2 = FUN_10030ace(local_70c);
      if (iVar2 != 0) {
        FUN_1002da47(local_700);
        SendMessageW(*(HWND *)(this + 0x20),0xb9,1,0);
        pcVar1 = *(code **)(*(int *)this + 0x170);
        guard_check_icall();
        (*pcVar1)();
      }
    }
    ATL::CStringData::Release((CStringData *)(local_700 + -0x10));
    local_708 = local_70c;
    goto LAB_10043709;
  }
  CWnd::SetFocus((CWnd *)this);
LAB_1004371c:
  FUN_10154478();
  return;
}

