// rea decompile_all
// name: CDockingManager::BuildPanesMenu
// address: 0x100b6d43
// body: available
// range: 0x100b6d43-0x100b73bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100b721d to 0x1001d023 FUN_1001d023 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: void __thiscall CDockingManager::BuildPanesMenu(class CMenu &,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CDockingManager::BuildPanesMenu(CDockingManager *this,CMenu *param_1,int param_2)

{
  code *pcVar1;
  LPCWSTR pWVar2;
  CObject *pCVar3;
  BOOL BVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  UINT_PTR UVar8;
  undefined4 *puVar9;
  HWND hWnd;
  CWnd *pCVar10;
  undefined4 *puVar11;
  CDockingManager *pCVar12;
  bool bVar13;
  int *piVar14;
  CObject *pCVar15;
  UINT uCmd;
  CObList local_b8 [4];
  undefined4 *local_b4;
  undefined4 *local_9c;
  int local_98;
  CObject *local_94;
  CDockingManager *local_90;
  CMap<int,int,int,int> *local_8c;
  LPCWSTR local_88;
  int local_84;
  LPCWSTR local_80;
  CObject *local_7c;
  undefined4 local_78;
  undefined4 local_74;
  HWND__ *local_58;
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xa8;
  local_8 = 0x100b6d52;
  local_8c = (CMap<int,int,int,int> *)(this + 0x1bc);
  local_90 = this;
  CMap<int,int,int,int>::RemoveAll(local_8c);
  CObList::CObList(local_b8,10);
  local_8 = 0;
  GetPaneList(this,local_b8,1,(CRuntimeClass *)0x0,0);
  local_84 = 0;
  puVar9 = local_b4;
  do {
    if ((local_84 == 1) && (param_2 != 0)) break;
    local_80 = (LPCWSTR)0x1;
    puVar11 = puVar9;
    iVar6 = local_84;
    while (puVar11 != (undefined4 *)0x0) {
      if (puVar11 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_1001d023();
      }
      local_9c = (undefined4 *)*puVar11;
      pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPane_101b279c,(CObject *)puVar11[2]);
      puVar9 = local_b4;
      puVar11 = local_9c;
      if ((pCVar3 != (CObject *)0x0) &&
         (BVar4 = IsWindow(*(HWND *)(pCVar3 + 0x20)), puVar9 = local_b4, puVar11 = local_9c,
         BVar4 != 0)) {
        pcVar1 = *(code **)(*(int *)pCVar3 + 0x288);
        guard_check_icall();
        iVar5 = (*pcVar1)();
        puVar9 = local_b4;
        puVar11 = local_9c;
        iVar6 = local_84;
        if (iVar5 != 0) {
          pcVar1 = *(code **)(*(int *)pCVar3 + 0x1c8);
          guard_check_icall();
          iVar5 = (*pcVar1)();
          puVar9 = local_b4;
          puVar11 = local_9c;
          iVar6 = local_84;
          if (iVar5 != 0) {
            iVar6 = FUN_100250d6(&PTR_s_CMFCToolBar_10201648);
            if (iVar6 == 0) {
              bVar13 = local_84 == 0;
            }
            else {
              bVar13 = local_84 == 1;
            }
            puVar9 = local_b4;
            puVar11 = local_9c;
            iVar6 = local_84;
            if (!bVar13) {
              uVar7 = FUN_1001e20a();
              FUN_1001d224(uVar7);
              local_8 = CONCAT31(local_8._1_3_,1);
              pcVar1 = *(code **)(*(int *)pCVar3 + 0x28c);
              guard_check_icall(&local_88);
              (*pcVar1)();
              iVar6 = FUN_100250d6(&PTR_s_CBaseTabbedPane_101bf638);
              if ((iVar6 == 0) || (iVar6 = FUN_100250d6(&PTR_s_CMFCOutlookBar_10201670), iVar6 != 0)
                 ) {
                iVar6 = FUN_100250d6(&PTR_s_CMFCReBar_101c0744);
                if (iVar6 == 0) {
                  piVar14 = &local_98;
                  iVar6 = CWnd::GetDlgCtrlID((CWnd *)pCVar3);
                  iVar6 = CMap<int,int,int,int>::Lookup(local_8c,iVar6,piVar14);
                  if (iVar6 == 0) {
                    if (((local_80 != (LPCWSTR)0x0) && (local_84 == 1)) &&
                       (iVar6 = GetMenuItemCount(*(HMENU *)(param_1 + 4)), 0 < iVar6)) {
                      AppendMenuW(*(HMENU *)(param_1 + 4),0x800,0,(LPCWSTR)0x0);
                    }
                    pWVar2 = local_88;
                    UVar8 = CWnd::GetDlgCtrlID((CWnd *)pCVar3);
                    AppendMenuW(*(HMENU *)(param_1 + 4),0,UVar8,pWVar2);
                    local_80 = (LPCWSTR)0x0;
                    iVar6 = CWnd::GetDlgCtrlID((CWnd *)pCVar3);
                    puVar9 = (undefined4 *)FUN_100c3357(iVar6);
                    *puVar9 = pCVar3;
                  }
                }
                else {
                  pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCReBar_101c0744,pCVar3);
                  iVar6 = FUN_100d320e();
                  local_98 = iVar6;
                  local_94 = (CObject *)SendMessageW(*(HWND *)(iVar6 + 0x20),0x40c,0,0);
                  local_78 = *(undefined4 *)(pCVar3 + 0x2c0);
                  local_74 = 0x230;
                  local_7c = (CObject *)0x0;
                  if (local_94 != (CObject *)0x0) {
                    do {
                      SendMessageW(*(HWND *)(iVar6 + 0x20),0x41c,(WPARAM)local_7c,(LPARAM)&local_78)
                      ;
                      pCVar10 = CWnd::FromHandlePermanent(local_58);
                      pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPane_101b279c,
                                                  (CObject *)pCVar10);
                      if (pCVar3 != (CObject *)0x0) {
                        pcVar1 = *(code **)(*(int *)pCVar3 + 0x288);
                        guard_check_icall();
                        iVar6 = (*pcVar1)();
                        if (iVar6 != 0) {
                          pcVar1 = *(code **)(*(int *)pCVar3 + 0x28c);
                          guard_check_icall(&local_88);
                          (*pcVar1)();
                          if (((local_80 != (LPCWSTR)0x0) && (local_84 == 1)) &&
                             (iVar6 = GetMenuItemCount(*(HMENU *)(param_1 + 4)), 0 < iVar6)) {
                            AppendMenuW(*(HMENU *)(param_1 + 4),0x800,0,(LPCWSTR)0x0);
                          }
                          pWVar2 = local_88;
                          UVar8 = CWnd::GetDlgCtrlID((CWnd *)pCVar3);
                          AppendMenuW(*(HMENU *)(param_1 + 4),0,UVar8,pWVar2);
                          local_80 = (LPCWSTR)0x0;
                          iVar6 = CWnd::GetDlgCtrlID((CWnd *)pCVar3);
                          puVar9 = (undefined4 *)FUN_100c3357(iVar6);
                          *puVar9 = pCVar3;
                        }
                      }
                      local_7c = local_7c + 1;
                      iVar6 = local_98;
                    } while (local_7c < local_94);
                  }
                }
              }
              else {
                pcVar1 = *(code **)(*(int *)pCVar3 + 0x3a0);
                guard_check_icall();
                pCVar3 = (CObject *)(*pcVar1)();
                local_94 = pCVar3;
                if (pCVar3 != (CObject *)0x0) {
                  local_7c = (CObject *)0x0;
                  pcVar1 = *(code **)(*(int *)pCVar3 + 0x1ac);
                  guard_check_icall();
                  iVar6 = (*pcVar1)();
                  if (0 < iVar6) {
                    do {
                      pcVar1 = *(code **)(*(int *)pCVar3 + 0x1b0);
                      pCVar15 = local_7c;
                      guard_check_icall(local_7c);
                      pCVar3 = (CObject *)(*pcVar1)();
                      pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPane_101b279c,pCVar3);
                      if (pCVar3 != (CObject *)0x0) {
                        pcVar1 = *(code **)(*(int *)pCVar3 + 0x288);
                        guard_check_icall(pCVar15);
                        iVar6 = (*pcVar1)();
                        if (iVar6 != 0) {
                          piVar14 = &local_98;
                          iVar6 = CWnd::GetDlgCtrlID((CWnd *)pCVar3);
                          iVar6 = CMap<int,int,int,int>::Lookup(local_8c,iVar6,piVar14);
                          if (iVar6 == 0) {
                            pcVar1 = *(code **)(*(int *)pCVar3 + 0x28c);
                            guard_check_icall(&local_88);
                            (*pcVar1)();
                            if (((local_80 != (LPCWSTR)0x0) && (local_84 == 1)) &&
                               (iVar6 = GetMenuItemCount(*(HMENU *)(param_1 + 4)), 0 < iVar6)) {
                              AppendMenuW(*(HMENU *)(param_1 + 4),0x800,0,(LPCWSTR)0x0);
                            }
                            pWVar2 = local_88;
                            UVar8 = CWnd::GetDlgCtrlID((CWnd *)pCVar3);
                            AppendMenuW(*(HMENU *)(param_1 + 4),0,UVar8,pWVar2);
                            local_80 = (LPCWSTR)0x0;
                            iVar6 = CWnd::GetDlgCtrlID((CWnd *)pCVar3);
                            puVar9 = (undefined4 *)FUN_100c3357(iVar6);
                            *puVar9 = pCVar3;
                          }
                        }
                      }
                      pCVar3 = local_94;
                      local_7c = local_7c + 1;
                      pcVar1 = *(code **)(*(int *)local_94 + 0x1ac);
                      guard_check_icall(pCVar15);
                      iVar6 = (*pcVar1)();
                    } while ((int)local_7c < iVar6);
                  }
                }
              }
              local_8 = local_8 & 0xffffff00;
              ATL::CStringData::Release((CStringData *)(local_88 + -8));
              puVar9 = local_b4;
              puVar11 = local_9c;
              iVar6 = local_84;
            }
          }
        }
      }
    }
    local_84 = iVar6 + 1;
  } while (local_84 < 2);
  pCVar12 = local_90;
  pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWndEx_101bd3e8,
                              *(CObject **)(local_90 + 0xe4));
  if ((pCVar3 != (CObject *)0x0) && (param_2 == 0)) {
    uCmd = 5;
    hWnd = *(HWND *)(pCVar3 + 0x120);
    while (hWnd = GetWindow(hWnd,uCmd), hWnd != (HWND)0x0) {
      pCVar10 = CWnd::FromHandle(hWnd);
      pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIChildWndEx_101be2ec,(CObject *)pCVar10
                                 );
      if ((pCVar3 != (CObject *)0x0) &&
         (pCVar3 = *(CObject **)(pCVar3 + 0x444), local_7c = pCVar3, pCVar3 != (CObject *)0x0)) {
        uVar7 = FUN_1001e20a();
        FUN_1001d224(uVar7);
        local_8._0_1_ = 2;
        pcVar1 = *(code **)(*(int *)pCVar3 + 0x28c);
        guard_check_icall(&local_80);
        (*pcVar1)();
        pWVar2 = local_80;
        UVar8 = CWnd::GetDlgCtrlID((CWnd *)local_7c);
        AppendMenuW(*(HMENU *)(param_1 + 4),0,UVar8,pWVar2);
        pCVar3 = local_7c;
        iVar6 = CWnd::GetDlgCtrlID((CWnd *)local_7c);
        puVar9 = (undefined4 *)FUN_100c3357(iVar6);
        local_8 = (uint)local_8._1_3_ << 8;
        *puVar9 = pCVar3;
        ATL::CStringData::Release((CStringData *)(local_80 + -8));
      }
      uCmd = 2;
    }
    puVar9 = *(undefined4 **)(local_90 + 0x1a0);
    while (pCVar12 = local_90, puVar9 != (undefined4 *)0x0) {
      puVar11 = puVar9 + 2;
      puVar9 = (undefined4 *)*puVar9;
      pCVar10 = CWnd::FromHandlePermanent((HWND__ *)*puVar11);
      pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_10201ba4,(CObject *)pCVar10)
      ;
      local_7c = pCVar3;
      if (pCVar3 != (CObject *)0x0) {
        uVar7 = FUN_1001e20a();
        FUN_1001d224(uVar7);
        local_8._0_1_ = 3;
        pcVar1 = *(code **)(*(int *)pCVar3 + 0x28c);
        guard_check_icall(&local_80);
        (*pcVar1)();
        pWVar2 = local_80;
        UVar8 = CWnd::GetDlgCtrlID((CWnd *)local_7c);
        AppendMenuW(*(HMENU *)(param_1 + 4),0,UVar8,pWVar2);
        pCVar3 = local_7c;
        iVar6 = CWnd::GetDlgCtrlID((CWnd *)local_7c);
        puVar11 = (undefined4 *)FUN_100c3357(iVar6);
        local_8 = (uint)local_8._1_3_ << 8;
        *puVar11 = pCVar3;
        ATL::CStringData::Release((CStringData *)(local_80 + -8));
      }
    }
  }
  if (*(int *)(pCVar12 + 0x1e8) != 0) {
    iVar6 = GetMenuItemCount(*(HMENU *)(param_1 + 4));
    if (0 < iVar6) {
      AppendMenuW(*(HMENU *)(param_1 + 4),0x800,0,(LPCWSTR)0x0);
    }
    AppendMenuW(*(HMENU *)(param_1 + 4),0,*(UINT_PTR *)(pCVar12 + 0x1e8),
                *(LPCWSTR *)(pCVar12 + 0x1ec));
  }
  CObList::~CObList(local_b8);
  FUN_10154478();
  return;
}

