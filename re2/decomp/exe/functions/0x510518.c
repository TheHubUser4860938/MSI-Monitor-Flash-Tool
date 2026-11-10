// rea decompile_all
// name: CMDIClientAreaWnd::CreateTabGroup
// address: 0x510518
// body: available
// range: 0x510518-0x51074e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual class CMFCTabCtrl * __thiscall CMDIClientAreaWnd::CreateTabGroup(class
   CMFCTabCtrl *)
   
   Library: Visual Studio 2015 Release */

CMFCTabCtrl * __thiscall
CMDIClientAreaWnd::CreateTabGroup(CMDIClientAreaWnd *this,CMFCTabCtrl *param_1)

{
  code *pcVar1;
  CObject *pCVar2;
  BOOL BVar3;
  CFrameWnd *pCVar4;
  int iVar5;
  HWND pHVar6;
  CWnd *pCVar7;
  AFX_GLOBAL_DATA *pAVar8;
  CImageList *this_00;
  CMDIClientAreaWnd *this_01;
  undefined4 *puVar9;
  CMFCTabCtrl *pCVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  CImageList *local_28;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x1c;
  local_8 = 0x510524;
  local_28 = (CImageList *)0x0;
  if (param_1 == (CMFCTabCtrl *)0x0) {
    if (((*(int *)(this + 0x2af4) != 0) && (0 < *(int *)(this + 0x2b48))) &&
       (*(int *)(this + 0x2b30) != 0)) {
      pCVar2 = CObList::RemoveTail((CObList *)(this + 0x2b3c));
      param_1 = (CMFCTabCtrl *)
                AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCTabCtrl_005c65ac,pCVar2);
      if ((param_1 != (CMFCTabCtrl *)0x0) &&
         (BVar3 = IsWindow(*(HWND *)(param_1 + 0x20)), BVar3 != 0)) {
        local_28 = (CImageList *)0x1;
        goto LAB_005105a3;
      }
    }
    pCVar10 = (CMFCTabCtrl *)FUN_00416408(0x2a18);
    local_8 = 0;
    if (pCVar10 == (CMFCTabCtrl *)0x0) {
      param_1 = (CMFCTabCtrl *)0x0;
    }
    else {
      param_1 = (CMFCTabCtrl *)CMFCTabCtrl::CMFCTabCtrl(pCVar10);
    }
    local_8 = 0xffffffff;
  }
LAB_005105a3:
  if (*(int *)(this + 0x2ad8) != 0) {
    CMFCBaseTabCtrl::EnableCustomToolTips((CMFCBaseTabCtrl *)param_1,1);
  }
  pCVar4 = (CFrameWnd *)this;
  if (*(int *)(this + 0x2b30) == 0) {
    pCVar4 = CWnd::GetParentFrame((CWnd *)this);
  }
  if (local_28 == (CImageList *)0x0) {
    local_24.left = 0;
    local_24.top = 0;
    local_24.right = 0;
    local_24.bottom = 0;
    iVar5 = CMFCTabCtrl::Create(param_1,*(Style *)(this + 0x2acc),&local_24,(CWnd *)pCVar4,
                                0xffffffff,*(Location *)(this + 0x2ac8),*(int *)(this + 0x2ad4));
    if (iVar5 == 0) {
      if (param_1 != (CMFCTabCtrl *)0x0) {
        pcVar1 = *(code **)(*(int *)param_1 + 4);
        guard_check_icall(1);
        (*pcVar1)();
      }
      goto LAB_00510747;
    }
    if (*(int *)(this + 0x2aa0) != 0) {
      *(undefined4 *)(param_1 + 0x1e8) = 1;
    }
  }
  else {
    pHVar6 = GetParent(*(HWND *)(param_1 + 0x20));
    pCVar7 = CWnd::FromHandle(pHVar6);
    if (pCVar7 != (CWnd *)pCVar4) {
      CWnd::SetParent((CWnd *)param_1,(CWnd *)pCVar4);
    }
    CMFCTabCtrl::ModifyTabStyle(param_1,*(Style *)(this + 0x2acc));
    pcVar1 = *(code **)(*(int *)param_1 + 0x278);
    guard_check_icall(*(undefined4 *)(this + 0x2ac8));
    (*pcVar1)();
    CMFCTabCtrl::EnableActiveTabCloseButton(param_1,*(int *)(this + 0x2ad4));
  }
  ApplyParams(this,param_1);
  if (*(int *)(this + 0x2a98) == 0) {
    CWnd::ShowWindow((CWnd *)param_1,0);
  }
  if (*(int *)(this + 0x2b30) == 0) {
    iVar13 = 1;
    iVar12 = 0;
    uVar11 = 0x21;
    pAVar8 = GetGlobalData();
    iVar5 = *(int *)(pAVar8 + 0x118);
    pAVar8 = GetGlobalData();
    this_01 = this + 0x2aa4;
  }
  else {
    local_28 = (CImageList *)0x0;
    iVar5 = CMap<int,int,int,int>::Lookup
                      ((CMap<int,int,int,int> *)(this + 0x2b14),(int)param_1,(int *)&local_28);
    this_01 = (CMDIClientAreaWnd *)local_28;
    if ((iVar5 == 0) || (local_28 == (CImageList *)0x0)) {
      this_00 = (CImageList *)FUN_00416408(8);
      local_8 = 1;
      if (this_00 == (CImageList *)0x0) {
        this_01 = (CMDIClientAreaWnd *)0x0;
      }
      else {
        this_01 = (CMDIClientAreaWnd *)CImageList::CImageList(this_00);
      }
      local_8 = 0xffffffff;
      puVar9 = (undefined4 *)FUN_00489126(param_1);
      *puVar9 = this_01;
    }
    else {
      CImageList::DeleteImageList(local_28);
    }
    iVar13 = 1;
    iVar12 = 0;
    uVar11 = 0x21;
    pAVar8 = GetGlobalData();
    iVar5 = *(int *)(pAVar8 + 0x118);
    pAVar8 = GetGlobalData();
  }
  CImageList::Create((CImageList *)this_01,*(int *)(pAVar8 + 0x114),iVar5,uVar11,iVar12,iVar13);
LAB_00510747:
  pCVar10 = (CMFCTabCtrl *)FUN_0055bae6();
  return pCVar10;
}

