// rea decompile_all
// name: CMDIClientAreaWnd::EnableMDITabbedGroups
// address: 0x1012f705
// body: available
// range: 0x1012f705-0x1012f9e8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: void __thiscall CMDIClientAreaWnd::EnableMDITabbedGroups(int,class CMDITabInfo const &)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMDIClientAreaWnd::EnableMDITabbedGroups(CMDIClientAreaWnd *this,int param_1,CMDITabInfo *param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  CObject *pCVar3;
  int iVar4;
  CWnd *pCVar5;
  HWND pHVar6;
  int iVar7;
  CMDIClientAreaWnd *pCVar8;
  undefined **local_40 [2];
  int local_38;
  HWND__ *local_24;
  CMDIClientAreaWnd *local_20;
  CObject *local_1c;
  CMDIClientAreaWnd *local_18;
  CObject *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x30;
  local_8 = 0x1012f711;
  local_18 = this;
  if (*(int *)(this + 0x2a9c) != 0) {
    EnableMDITabs(this,0,param_2);
  }
  CWnd::ShowWindow((CWnd *)(this + 0x80),0);
  local_24 = (HWND__ *)SendMessageW(*(HWND *)(this + 0x20),0x229,0,0);
  if (((*(int *)(this + 0x2b30) != param_1) && (*(int *)(this + 0x2b30) = param_1, param_1 == 0)) &&
     (local_14[0] = *(CObject **)(this + 0x2afc), local_14[0] != (CObject *)0x0)) {
    local_20 = this + 11000;
    do {
      puVar2 = (undefined4 *)FUN_10034920(local_14);
      pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCTabCtrl_101bd71c,(CObject *)*puVar2);
      local_1c = pCVar3;
      CWnd::ShowWindow((CWnd *)pCVar3,0);
      iVar7 = 0;
      pcVar1 = *(code **)(*(int *)pCVar3 + 0x1ac);
      guard_check_icall();
      pCVar3 = local_1c;
      iVar4 = (*pcVar1)();
      if (0 < iVar4) {
        do {
          pcVar1 = *(code **)(*(int *)pCVar3 + 0x1b0);
          guard_check_icall(iVar7);
          pCVar5 = (CWnd *)(*pcVar1)();
          CWnd::ModifyStyle(pCVar5,0,DAT_10205d88 | 0x80000,0x24);
          iVar7 = iVar7 + 1;
          pcVar1 = *(code **)(*(int *)pCVar3 + 0x1ac);
          guard_check_icall();
          iVar4 = (*pcVar1)();
        } while (iVar7 < iVar4);
      }
      this = local_18;
    } while (local_14[0] != (CObject *)0x0);
  }
  *(int *)(this + 0x2a98) = param_1;
  if (*(int *)(this + 0x2b30) == 0) {
    iVar4 = IsKeepClientEdge(this);
    if (iVar4 == 0) {
      CWnd::ModifyStyleEx((CWnd *)this,0,0x200,0);
    }
    pHVar6 = GetWindow(*(HWND *)(this + 0x20),5);
    pCVar5 = CWnd::FromHandle(pHVar6);
    CList<CMDIChildWndEx*,CMDIChildWndEx*>::CList<CMDIChildWndEx*,CMDIChildWndEx*>
              ((CList<CMDIChildWndEx*,CMDIChildWndEx*> *)local_40,10);
    local_8 = 0;
    while (pCVar5 != (CWnd *)0x0) {
      local_14[0] = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIChildWndEx_101c65bc,
                                       (CObject *)pCVar5);
      if (local_14[0] != (CObject *)0x0) {
        pcVar1 = *(code **)(*(int *)local_14[0] + 0x1e4);
        guard_check_icall();
        iVar4 = (*pcVar1)();
        if (iVar4 != 0) {
          CList<HWND__*,HWND__*>::AddTail((CList<HWND__*,HWND__*> *)local_40,(HWND__ *)local_14[0]);
        }
      }
      pHVar6 = GetWindow(*(HWND *)(pCVar5 + 0x20),2);
      pCVar5 = CWnd::FromHandle(pHVar6);
    }
    *(undefined4 *)(this + 0x2b38) = 1;
    iVar4 = local_38;
    while (iVar4 != 0) {
      puVar2 = (undefined4 *)(iVar4 + 8);
      iVar4 = *(int *)(iVar4 + 4);
      CWnd::SetWindowPos((CWnd *)*puVar2,(CWnd *)0x0,-1,-1,-1,-1,0x27);
    }
    *(undefined4 *)(this + 0x2b38) = 0;
    UpdateTabs(this,0);
    local_8 = 1;
    local_40[0] = CList<CMDIChildWndEx*,CMDIChildWndEx*>::vftable;
    CList<tagPOINT,tagPOINT>::RemoveAll((CList<tagPOINT,tagPOINT> *)local_40);
  }
  else {
    pCVar8 = this + 0x2ac8;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pCVar8 = *(undefined4 *)param_2;
      param_2 = param_2 + 4;
      pCVar8 = pCVar8 + 4;
    }
    iVar4 = IsKeepClientEdge(this);
    if (iVar4 == 0) {
      CWnd::ModifyStyleEx((CWnd *)this,0x200,0,0);
    }
    local_14[0] = *(CObject **)(this + 0x2afc);
    while (local_14[0] != (CObject *)0x0) {
      puVar2 = (undefined4 *)FUN_10034920(local_14);
      pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCTabCtrl_101bd71c,(CObject *)*puVar2);
      CWnd::ShowWindow((CWnd *)pCVar3,8);
      ApplyParams(this,(CMFCTabCtrl *)pCVar3);
    }
    FUN_10132625(1);
    local_14[0] = *(CObject **)(this + 0x2afc);
    if (local_14[0] != (CObject *)0x0) {
      local_20 = this + 11000;
      do {
        puVar2 = (undefined4 *)FUN_10034920(local_14);
        pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCTabCtrl_101bd71c,(CObject *)*puVar2)
        ;
        pcVar1 = *(code **)(*(int *)pCVar3 + 0x184);
        guard_check_icall();
        (*pcVar1)();
        this = local_18;
      } while (local_14[0] != (CObject *)0x0);
    }
    if (*(int *)(this + 0x2b30) != 0) {
      SetActiveTab(this,local_24);
    }
  }
  return;
}

