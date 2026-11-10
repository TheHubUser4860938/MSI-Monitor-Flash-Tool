// rea decompile_all
// name: CMFCMousePropertyPage::OnInitDialog
// address: 0x10144478
// body: available
// range: 0x10144478-0x10144772 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1014448f to 0x1001d023 FUN_1001d023 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: virtual int __thiscall CMFCMousePropertyPage::OnInitDialog(void)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCMousePropertyPage::OnInitDialog(CMFCMousePropertyPage *this)

{
  CStringData *lParam;
  code *pcVar1;
  AFX_GLOBAL_DATA *pAVar2;
  AFX_MODULE_STATE *pAVar3;
  HICON hIcon;
  undefined4 uVar4;
  HWND pHVar5;
  CWnd *pCVar6;
  CObject *pCVar7;
  int iVar8;
  LRESULT LVar9;
  uint uVar10;
  int iVar11;
  CStringList local_8c [4];
  undefined4 *local_88;
  int local_80;
  CStringData *local_70;
  undefined4 *local_6c;
  CStringData *local_68;
  LRESULT local_64;
  LRESULT local_60;
  int local_5c;
  int local_58;
  undefined1 local_54 [16];
  RECT local_44;
  tagRECT local_34;
  tagRECT local_24;
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x7c;
  local_8 = 0x10144484;
  if (DAT_1020c138 != (CMouseManager *)0x0) {
    CDialog::OnInitDialog((CDialog *)this);
    CStringList::CStringList(local_8c,10);
    local_8 = 0;
    CMouseManager::GetViewNames(DAT_1020c138,local_8c);
    iVar11 = 1;
    uVar10 = 1;
    pAVar2 = GetGlobalData();
    iVar8 = *(int *)(pAVar2 + 0x118);
    pAVar2 = GetGlobalData();
    CImageList::Create((CImageList *)(this + 0xc4),*(int *)(pAVar2 + 0x114),iVar8,uVar10,local_80,
                       iVar11);
    CListCtrl::SetImageList((CListCtrl *)(this + 0xd0),(CImageList *)(this + 0xc4),1);
    local_24.left = 0;
    local_24.top = 0;
    local_24.right = 0;
    local_24.bottom = 0;
    GetClientRect(*(HWND *)(this + 0xf0),&local_24);
    CListCtrl::InsertColumn
              ((CListCtrl *)(this + 0xd0),0,L"",0,(local_24.right - local_24.left) + -1,-1);
    LVar9 = 0;
    local_64 = 0;
    while (local_88 != (undefined4 *)0x0) {
      if (local_88 == (undefined4 *)0x0) goto LAB_1014448f;
      local_6c = (undefined4 *)*local_88;
      local_68 = (CStringData *)FUN_100187a0(local_88[2] + -0x10);
      lParam = local_68 + 0x10;
      local_5c = -1;
      local_8 = CONCAT31(local_8._1_3_,1);
      local_70 = lParam;
      iVar8 = FUN_10115d94(lParam);
      uVar10 = CMouseManager::GetViewIconId(DAT_1020c138,iVar8);
      if (uVar10 != 0) {
        AfxGetModuleState();
        pAVar3 = AfxGetModuleState();
        hIcon = LoadIconW(*(HINSTANCE *)(pAVar3 + 0xc),(LPCWSTR)(uVar10 & 0xffff));
        if (hIcon != (HICON)0x0) {
          local_5c = _IsolationAwareImageList_ReplaceIcon_12
                               (*(undefined4 *)(this + 200),0xffffffff,hIcon);
          DestroyIcon(hIcon);
        }
      }
      local_60 = SendMessageW(*(HWND *)(this + 0xf0),0x1004,0,0);
      iVar8 = 0;
      LVar9 = SendMessageW(*(HWND *)(this + 0xf0),0x1004,0,0);
      if (0 < LVar9) {
        do {
          CListCtrl::GetItemText((CListCtrl *)(this + 0xd0),(int)&local_58,iVar8);
          local_8._0_1_ = 2;
          iVar11 = FUN_10030ace(lParam);
          local_8 = CONCAT31(local_8._1_3_,1);
          if (0 < iVar11) {
            local_60 = iVar8;
            ATL::CStringData::Release((CStringData *)(local_58 + -0x10));
            break;
          }
          ATL::CStringData::Release((CStringData *)(local_58 + -0x10));
          iVar8 = iVar8 + 1;
          LVar9 = SendMessageW(*(HWND *)(this + 0xf0),0x1004,0,0);
        } while (iVar8 < LVar9);
      }
      LVar9 = local_60;
      CListCtrl::InsertItem((CListCtrl *)(this + 0xd0),3,local_60,(wchar_t *)lParam,0,0,local_5c,0);
      uVar4 = FUN_10115d94(lParam);
      SetItem(LVar9,0,4,0,0,0,0,uVar4);
      LVar9 = SendMessageW(*(HWND *)(this + 0xf0),0x1057,0,(LPARAM)lParam);
      if (local_64 < LVar9) {
        local_64 = LVar9;
      }
      LVar9 = local_64;
      local_8 = local_8 & 0xffffff00;
      ATL::CStringData::Release(local_68);
      local_88 = local_6c;
    }
    _IsolationAwareImageList_GetImageInfo_12(*(undefined4 *)(this + 200),0,local_54);
    CopyRect(&local_34,&local_44);
    SendMessageW(*(HWND *)(this + 0xf0),0x101e,0,
                 (local_34.right - local_34.left) + 10 + LVar9 & 0xffff);
    pHVar5 = GetParent(*(HWND *)(this + 0x20));
    pCVar6 = CWnd::FromHandle(pHVar5);
    pCVar7 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBarsCustomizeDialog_101c3a40,
                                (CObject *)pCVar6);
    if (pCVar7 != (CObject *)0x0) {
      pcVar1 = *(code **)(*(int *)pCVar7 + 0x17c);
      guard_check_icall(this + 0x150);
      (*pcVar1)();
      CListCtrl::SetItemState((CListCtrl *)(this + 0xd0),0,3,3);
      SendMessageW(*(HWND *)(this + 0xf0),0x1013,0,0);
      CStringList::~CStringList(local_8c);
      iVar8 = FUN_10154478();
      return iVar8;
    }
  }
LAB_1014448f:
                    /* WARNING: Subroutine does not return */
  FUN_1001d023();
}

