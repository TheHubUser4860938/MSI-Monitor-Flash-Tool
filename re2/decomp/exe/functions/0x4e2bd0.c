// rea decompile_all
// name: CMultiPaneFrameWnd::SetPreDockState
// address: 0x4e2bd0
// body: available
// range: 0x4e2bd0-0x4e3124 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4e2e30 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CMultiPaneFrameWnd::SetPreDockState(enum AFX_PREDOCK_STATE,class
   CBasePane *,enum AFX_DOCK_METHOD)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CMultiPaneFrameWnd::SetPreDockState
          (CMultiPaneFrameWnd *this,AFX_PREDOCK_STATE param_1,CBasePane *param_2,
          AFX_DOCK_METHOD param_3)

{
  code *pcVar1;
  HWND pHVar2;
  CPaneContainerManager *pCVar3;
  CPaneDivider *pCVar4;
  CMultiPaneFrameWnd *pCVar5;
  CMultiPaneFrameWnd *this_00;
  CDockingManager *this_01;
  int iVar6;
  CWnd *pCVar7;
  CObject *pCVar8;
  ulong uVar9;
  uint uVar10;
  BOOL BVar11;
  undefined4 *puVar12;
  CObList local_88 [4];
  CPaneDivider *local_84;
  undefined **local_6c;
  undefined4 *local_68;
  CObject *local_50;
  tagPOINT local_4c;
  CMultiPaneFrameWnd *local_44;
  int local_40;
  CObject *local_3c;
  CPaneContainerManager *local_38;
  CPaneDivider *local_34;
  ulong local_30;
  CObject *local_2c;
  CDockingManager *local_28;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x78;
  local_8 = 0x4e2bdc;
  local_44 = this;
  if (param_1 == 0) goto LAB_004e311d;
  if ((param_1 == 2) && (param_2 != (CBasePane *)0x0)) {
    pcVar1 = *(code **)(*(int *)param_2 + 0x18c);
    guard_check_icall();
    iVar6 = (*pcVar1)();
    if (iVar6 == 0) goto LAB_004e311d;
  }
  local_2c = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_0060c780,(CObject *)param_2);
  local_28 = *(CDockingManager **)(this + 0x184);
  if (local_28 == (CDockingManager *)0x0) {
    pCVar7 = CWnd::FromHandlePermanent(*(HWND__ **)(this + 200));
    local_28 = CGlobalUtils::GetDockingManager((CGlobalUtils *)&PTR_vftable_0060c45c,pCVar7);
    if (local_28 == (CDockingManager *)0x0) goto LAB_004e311d;
  }
  local_38 = (CPaneContainerManager *)(this + 400);
  pcVar1 = *(code **)(*(int *)local_38 + 0x78);
  guard_check_icall();
  local_50 = (CObject *)(*pcVar1)();
  local_4c.x = 0;
  local_4c.y = 0;
  GetCursorPos(&local_4c);
  local_30 = 0;
  CObList::CObList(local_88,10);
  local_8 = 0;
  CPaneContainerManager::AddPanesToList
            ((CPaneContainerManager *)(this + 400),local_88,(CObList *)0x0);
  CList<HWND__*,HWND__*>::CList<HWND__*,HWND__*>((CList<HWND__*,HWND__*> *)&local_6c,10);
  local_8 = CONCAT31(local_8._1_3_,1);
  pCVar3 = (CPaneContainerManager *)(this + 400);
  pCVar4 = local_84;
  while (pCVar4 != (CPaneDivider *)0x0) {
    if (pCVar4 == (CPaneDivider *)0x0) goto LAB_004e2e30;
    local_34 = *(CPaneDivider **)pCVar4;
    pCVar8 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_0060c780,
                                *(CObject **)(pCVar4 + 8));
    pcVar1 = *(code **)(*(int *)pCVar8 + 0x31c);
    guard_check_icall();
    (*pcVar1)();
    CList<HWND__*,HWND__*>::AddTail((CList<HWND__*,HWND__*> *)&local_6c,*(HWND__ **)(pCVar8 + 0x20))
    ;
    pCVar3 = local_38;
    this = local_44;
    pCVar4 = local_34;
  }
  if (local_2c == (CObject *)0x0) {
    local_40 = 0;
    iVar6 = CDockingManager::IsPointNearDockSite(local_28,local_4c.x,local_4c.y,&local_30,&local_40)
    ;
    if (iVar6 != 0) {
      pCVar7 = CWnd::FromHandlePermanent(*(HWND__ **)(this + 200));
      local_34 = CDockablePane::CreateDefaultPaneDivider(local_30,pCVar7,(CRuntimeClass *)0x0);
      if (local_34 != (CPaneDivider *)0x0) {
        pcVar1 = *(code **)(*(int *)local_34 + 0x1e0);
        guard_check_icall(local_30);
        (*pcVar1)();
        local_24.left = 0;
        local_24.top = 0;
        local_24.right = 0;
        local_24.bottom = 0;
        pcVar1 = *(code **)(*(int *)local_38 + 0x2c);
        guard_check_icall(&local_24);
        (*pcVar1)();
        pcVar1 = *(code **)(*(int *)local_28 + 0x5c);
        guard_check_icall(&local_24,local_30);
        (*pcVar1)();
        local_3c = (CObject *)0x0;
        iVar6 = *(int *)local_38;
        guard_check_icall(local_24.left,local_24.top,local_24.right,local_24.bottom,&local_3c);
        pCVar3 = local_38;
        (**(code **)(iVar6 + 0x38))();
        pCVar4 = local_34;
        if (local_40 == 0) {
          pcVar1 = *(code **)(*(int *)local_34 + 0x28c);
          guard_check_icall(pCVar3,0);
          (*pcVar1)();
          CDockingManager::AddPane(local_28,(CBasePane *)pCVar4,1,0,0);
        }
        else {
          CDockingManager::AddPane(local_28,(CBasePane *)local_34,0,0,local_40);
          pcVar1 = *(code **)(*(int *)pCVar4 + 0x28c);
          guard_check_icall(pCVar3,local_40);
          (*pcVar1)();
        }
LAB_004e2fdc:
        pCVar5 = local_44;
        pHVar2 = *(HWND *)(local_44 + 0x20);
        SendMessageW(pHVar2,DAT_00615fa4,0,0);
        BVar11 = IsWindow(pHVar2);
        if (BVar11 != 0) {
          CWnd::MoveWindow((CWnd *)pCVar5,(tagRECT *)(pCVar5 + 0xd8),1);
          pCVar8 = local_50;
          if ((local_50 != (CObject *)0x0) && (param_3 == 1)) {
            ScreenToClient(*(HWND *)(local_50 + 0x20),&local_4c);
            iVar6 = FUN_0043970d(&PTR_s_CDockablePane_0060c780);
            if (iVar6 == 0) {
              SendMessageW(*(HWND *)(pCVar8 + 0x20),0x201,0,
                           CONCAT22((undefined2)local_4c.y,(undefined2)local_4c.x));
            }
            else {
              pcVar1 = *(code **)(*(int *)pCVar8 + 0x314);
              guard_check_icall(0);
              (*pcVar1)();
              pCVar8 = local_50;
            }
          }
          if (local_2c == (CObject *)0x0) {
            if ((pCVar8 != (CObject *)0x0) &&
               (local_3c = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_0060c780,pCVar8)
               , local_3c != (CObject *)0x0)) {
              pcVar1 = *(code **)(*(int *)local_3c + 0x268);
              guard_check_icall(0);
              (*pcVar1)();
            }
          }
          else {
            pcVar1 = *(code **)(*(int *)local_2c + 0x210);
            guard_check_icall();
            (*pcVar1)();
          }
          pcVar1 = *(code **)(*(int *)pCVar5 + 500);
          guard_check_icall();
          (*pcVar1)();
          puVar12 = local_68;
          while (puVar12 != (undefined4 *)0x0) {
            pHVar2 = (HWND)puVar12[2];
            puVar12 = (undefined4 *)*puVar12;
            BVar11 = IsWindow(pHVar2);
            if (BVar11 != 0) {
              pCVar7 = CWnd::FromHandle(pHVar2);
              local_3c = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_0060c780,
                                            (CObject *)pCVar7);
              if (local_3c != (CObject *)0x0) {
                pcVar1 = *(code **)(*(int *)local_3c + 0x35c);
                guard_check_icall();
                (*pcVar1)();
              }
            }
          }
        }
      }
    }
  }
  else {
    pcVar1 = *(code **)(*(int *)pCVar3 + 0x70);
    guard_check_icall();
    local_28 = (CDockingManager *)(*pcVar1)();
    if (local_28 != (CDockingManager *)0x0) {
      pcVar1 = *(code **)(*(int *)local_2c + 0x184);
      guard_check_icall(local_28);
      iVar6 = (*pcVar1)();
      if (iVar6 != 0) {
        pcVar1 = *(code **)(*(int *)local_28 + 0x184);
        guard_check_icall(local_2c);
        iVar6 = (*pcVar1)();
        if (iVar6 != 0) {
          uVar9 = CWnd::GetExStyle((CWnd *)local_28);
          this_01 = local_28;
          if (((uVar9 & 0x10000000) == 0) && (*(int *)(this + 0x1a0) == 1)) {
            pcVar1 = *(code **)(*(int *)local_28 + 0x1b8);
            guard_check_icall();
            uVar10 = (*pcVar1)();
            if ((uVar10 & 2) != 0) {
              CWnd::ModifyStyle((CWnd *)this_01,0,0x10000000,0);
            }
          }
          pCVar8 = local_2c;
          if (param_1 == 1) {
            iVar6 = CGlobalUtils::CheckAlignment
                              ((CGlobalUtils *)&PTR_vftable_0060c45c,local_4c.x,local_4c.y,local_2c,
                               DAT_0060c608,0,0,&local_30,0xf000,0);
            if (iVar6 != 0) {
              pcVar1 = *(code **)(*(int *)pCVar8 + 0x358);
              guard_check_icall(local_38,local_30,param_3);
              iVar6 = (*pcVar1)();
              if (iVar6 != 0) goto LAB_004e2fdc;
            }
          }
          else if (param_1 == 2) {
            while (pCVar5 = local_44, local_84 != (CPaneDivider *)0x0) {
              if (local_84 == (CPaneDivider *)0x0) {
LAB_004e2e30:
                    /* WARNING: Subroutine does not return */
                FUN_00429127();
              }
              local_34 = *(CPaneDivider **)local_84;
              pCVar8 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_0060c780,
                                          *(CObject **)(local_84 + 8));
              CPaneFrameWnd::AddRemovePaneFromGlobalList((CBasePane *)pCVar8,0);
              pcVar1 = *(code **)(*(int *)pCVar8 + 0x34c);
              guard_check_icall(local_2c,param_3,1,0);
              (*pcVar1)();
              local_84 = local_34;
            }
            CWnd::ShowWindow((CWnd *)local_44,0);
            this_00 = local_44;
            local_24.left = *(LONG *)(pCVar5 + 0xd8);
            local_24.top = *(LONG *)(pCVar5 + 0xdc);
            local_24.right = *(LONG *)(pCVar5 + 0xe0);
            local_24.bottom = *(LONG *)(pCVar5 + 0xe4);
            CWnd::MoveWindow((CWnd *)local_44,&local_24,1);
            CPaneFrameWnd::OnCancelMode((CPaneFrameWnd *)this_00);
            SendMessageW(*(HWND *)(this_00 + 0x20),DAT_00615fa4,0,0);
          }
        }
      }
    }
  }
  local_8 = CONCAT31(local_8._1_3_,10);
  local_6c = CList<HWND__*,HWND__*>::vftable;
  CList<tagPOINT,tagPOINT>::RemoveAll((CList<tagPOINT,tagPOINT> *)&local_6c);
  CObList::~CObList(local_88);
LAB_004e311d:
  iVar6 = FUN_0055bae6();
  return iVar6;
}

