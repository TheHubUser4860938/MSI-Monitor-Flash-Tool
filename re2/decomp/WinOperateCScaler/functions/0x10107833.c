// rea decompile_all
// name: FUN_10107833
// address: 0x10107833
// body: available
// range: 0x10107833-0x10107d87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10107d83 to 0x1001d023 FUN_1001d023 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_10107833(int param_1)

{
  code *pcVar1;
  HWND pHVar2;
  CObject *pCVar3;
  CObject *this;
  BOOL BVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  HICON__ *pHVar9;
  undefined4 *puVar10;
  CFrameWnd *pCVar11;
  CMFCTabCtrl *pCVar12;
  undefined4 uVar13;
  CMDIClientAreaWnd *in_ECX;
  int local_3c;
  int local_38;
  int local_34;
  HWND__ *local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  CWnd *local_18;
  CObject *local_14;
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x2c;
  local_8 = 0x1010783f;
  if (*(int *)(in_ECX + 0x2b38) == 0) {
    local_24 = 0;
    pHVar2 = GetWindow(*(HWND *)(in_ECX + 0x20),5);
    pCVar3 = (CObject *)CWnd::FromHandle(pHVar2);
    local_30 = (HWND__ *)0x0;
    iVar6 = 0;
    local_18 = (CWnd *)pCVar3;
    while (pCVar3 != (CObject *)0x0) {
      this = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIChildWndEx_101be2ec,pCVar3);
      local_14 = this;
      if (this == (CObject *)0x0) {
        pHVar2 = GetWindow(*(HWND *)(pCVar3 + 0x20),2);
        pCVar3 = (CObject *)CWnd::FromHandle(pHVar2);
        iVar6 = local_24;
        local_18 = (CWnd *)pCVar3;
      }
      else {
        CWnd::ModifyStyle((CWnd *)this,DAT_10201920 | 0x1080000,0,4);
        pcVar1 = *(code **)(*(int *)this + 0x1e4);
        guard_check_icall();
        local_3c = (*pcVar1)();
        pcVar1 = *(code **)(*(int *)this + 0x1dc);
        guard_check_icall(&local_20);
        (*pcVar1)();
        pCVar3 = local_14;
        local_8 = 0;
        pCVar12 = *(CMFCTabCtrl **)(this + 0x128);
        local_38 = 0;
        if (pCVar12 == (CMFCTabCtrl *)0x0) {
          if ((*(int *)(local_14 + 300) == 0) && (local_3c != 0)) {
            if (*(int *)(in_ECX + 0x2b04) == 0) {
              pcVar1 = *(code **)(*(int *)in_ECX + 0x164);
              guard_check_icall(0);
              pCVar12 = (CMFCTabCtrl *)(*pcVar1)();
              CObList::AddTail((CObList *)(in_ECX + 11000),(CObject *)pCVar12);
              pCVar3 = local_14;
LAB_1010796b:
              if (pCVar12 == (CMFCTabCtrl *)0x0) goto LAB_10107d83;
            }
            else {
              pCVar12 = CMDIClientAreaWnd::FindActiveTabWnd(in_ECX);
              if (pCVar12 == (CMFCTabCtrl *)0x0) {
                pCVar12 = (CMFCTabCtrl *)
                          AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCTabCtrl_101b54cc,
                                             *(CObject **)(*(int *)(in_ECX + 0x2afc) + 8));
                goto LAB_1010796b;
              }
            }
            *(CMFCTabCtrl **)(pCVar3 + 0x128) = pCVar12;
            pcVar1 = *(code **)(*(int *)pCVar12 + 0x18c);
            guard_check_icall(local_18,local_20,0xffffffff,1);
            (*pcVar1)();
            BVar4 = IsWindowVisible(*(HWND *)(pCVar12 + 0x20));
            if (BVar4 == 0) {
              CWnd::ShowWindow((CWnd *)pCVar12,8);
            }
            local_30 = (HWND__ *)0x0;
            if (local_18 != (CWnd *)0x0) {
              local_30 = *(HWND__ **)(local_18 + 0x20);
            }
          }
        }
        else {
          if (local_18 == (CWnd *)0x0) {
            uVar13 = 0;
          }
          else {
            uVar13 = *(undefined4 *)(local_18 + 0x20);
          }
          pcVar1 = *(code **)(*(int *)pCVar12 + 0x21c);
          guard_check_icall(uVar13);
          iVar6 = (*pcVar1)();
          local_3c = iVar6;
          if (-1 < iVar6) {
            uVar5 = CWnd::GetExStyle(local_18);
            if ((uVar5 & 0x10000000) == 0) {
              pcVar1 = *(code **)(*(int *)pCVar12 + 0x198);
              guard_check_icall(iVar6,1);
              (*pcVar1)();
              pcVar1 = *(code **)(*(int *)pCVar12 + 0x1ac);
              guard_check_icall();
              iVar6 = (*pcVar1)();
              if (iVar6 == 0) {
                CMDIClientAreaWnd::RemoveTabGroup(in_ECX,pCVar12,0);
              }
              local_24 = 1;
              local_38 = 1;
            }
            else {
              uVar13 = FUN_1001e20a();
              FUN_1001d224(uVar13);
              local_8 = CONCAT31(local_8._1_3_,1);
              pcVar1 = *(code **)(*(int *)pCVar12 + 0x1bc);
              guard_check_icall(iVar6,&local_28);
              (*pcVar1)();
              iVar6 = FUN_10030ace(local_20);
              if (iVar6 != 0) {
                pcVar1 = *(code **)(*(int *)pCVar12 + 0x1c0);
                guard_check_icall(local_3c,&local_20);
                (*pcVar1)();
                local_24 = 1;
              }
              local_8 = local_8 & 0xffffff00;
              ATL::CStringData::Release((CStringData *)(local_28 + -0x10));
            }
          }
        }
        pCVar3 = local_14;
        local_1c = 0;
        CMap<int,int,int,int>::Lookup
                  ((CMap<int,int,int,int> *)(in_ECX + 0x2b14),(int)pCVar12,&local_1c);
        if (local_1c != 0) {
          local_2c = -1;
          local_34 = -1;
          if (*(int *)(in_ECX + 0x2ad0) == 0) {
            if (pCVar12 == (CMFCTabCtrl *)0x0) {
LAB_10107d83:
                    /* WARNING: Subroutine does not return */
              FUN_1001d023();
            }
            CMFCBaseTabCtrl::ResetImageList((CMFCBaseTabCtrl *)pCVar12);
            CMap<int,int,int,int>::RemoveAll((CMap<int,int,int,int> *)(in_ECX + 0x2aac));
            iVar6 = local_1c;
            while (iVar7 = _IsolationAwareImageList_GetImageCount_4(*(undefined4 *)(iVar6 + 4)),
                  0 < iVar7) {
              _IsolationAwareImageList_Remove_8(*(undefined4 *)(iVar6 + 4),0);
            }
            iVar6 = CMDIChildWndEx::IsTaskbarTabsSupportEnabled((CMDIChildWndEx *)pCVar3);
            if ((iVar6 != 0) &&
               (iVar6 = CMDIChildWndEx::IsRegisteredWithTaskbarTabs((CMDIChildWndEx *)pCVar3),
               iVar6 != 0)) {
              pcVar1 = *(code **)(*(int *)pCVar3 + 0x1e0);
              guard_check_icall();
              pCVar3 = local_14;
              pHVar9 = (HICON__ *)(*pcVar1)();
              if ((pHVar9 != (HICON__ *)0x0) ||
                 ((pCVar11 = CWnd::GetTopLevelFrame((CWnd *)in_ECX), pCVar11 != (CFrameWnd *)0x0 &&
                  (pHVar9 = CGlobalUtils::GetWndIcon
                                      ((CGlobalUtils *)&PTR_vftable_1020194c,(CWnd *)pCVar11),
                  pHVar9 != (HICON__ *)0x0)))) {
                pcVar1 = *(code **)(*(int *)pCVar3 + 0x1f0);
                guard_check_icall(pHVar9);
                (*pcVar1)();
              }
            }
            local_24 = 1;
          }
          else {
            pcVar1 = *(code **)(*(int *)pCVar3 + 0x1e0);
            guard_check_icall();
            iVar6 = (*pcVar1)();
            local_3c = iVar6;
            if (iVar6 != 0) {
              iVar7 = CMap<int,int,int,int>::Lookup
                                ((CMap<int,int,int,int> *)(pCVar12 + 0xdc),iVar6,&local_34);
              if (iVar7 == 0) {
                iVar6 = _IsolationAwareImageList_ReplaceIcon_12
                                  (*(undefined4 *)(local_1c + 4),0xffffffff,iVar6);
                local_2c = iVar6;
                piVar8 = (int *)FUN_100c3357(local_3c);
                *piVar8 = iVar6;
              }
              else {
                local_2c = local_34;
              }
              pcVar1 = *(code **)(*(int *)pCVar12 + 0x23c);
              guard_check_icall();
              iVar6 = (*pcVar1)();
              if (iVar6 != local_1c) {
                pcVar1 = *(code **)(*(int *)pCVar12 + 0x16c);
                guard_check_icall(*(undefined4 *)(local_1c + 4));
                (*pcVar1)();
              }
            }
            if (local_38 == 0) {
              pcVar1 = *(code **)(*(int *)pCVar12 + 0x21c);
              guard_check_icall(*(int *)(local_14 + 0x20));
              local_38 = (*pcVar1)();
              pcVar1 = *(code **)(*(int *)pCVar12 + 0x1c4);
              guard_check_icall(local_38);
              iVar6 = (*pcVar1)();
              if (iVar6 != local_2c) {
                pcVar1 = *(code **)(*(int *)pCVar12 + 0x1c8);
                guard_check_icall(local_38,local_2c);
                (*pcVar1)();
              }
              pCVar3 = local_14;
              iVar6 = CMDIChildWndEx::IsTaskbarTabsSupportEnabled((CMDIChildWndEx *)local_14);
              if ((iVar6 != 0) &&
                 (iVar6 = CMDIChildWndEx::IsRegisteredWithTaskbarTabs((CMDIChildWndEx *)pCVar3),
                 iVar6 != 0)) {
                pcVar1 = *(code **)(*(int *)pCVar3 + 0x1f0);
                guard_check_icall(local_3c);
                (*pcVar1)();
              }
            }
          }
        }
        pHVar2 = GetWindow(*(HWND *)(local_18 + 0x20),2);
        pCVar3 = (CObject *)CWnd::FromHandle(pHVar2);
        local_8 = 0xffffffff;
        local_18 = (CWnd *)pCVar3;
        ATL::CStringData::Release((CStringData *)(local_20 + -0x10));
        iVar6 = local_24;
      }
    }
    local_3c = *(int *)(in_ECX + 0x2afc);
    while (local_3c != 0) {
      puVar10 = (undefined4 *)FUN_100972dc(&local_3c);
      pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCTabCtrl_101b54cc,(CObject *)*puVar10);
      CMDIClientAreaWnd::AdjustMDIChildren(in_ECX,(CMFCTabCtrl *)pCVar3);
    }
    if ((iVar6 != 0) &&
       (pCVar11 = CWnd::GetParentFrame((CWnd *)in_ECX), pCVar11 != (CFrameWnd *)0x0)) {
      pCVar11 = CWnd::GetParentFrame((CWnd *)in_ECX);
      pcVar1 = *(code **)(*(int *)pCVar11 + 0x178);
      guard_check_icall(1);
      (*pcVar1)();
    }
    if (local_30 != (HWND__ *)0x0) {
      CMDIClientAreaWnd::SetActiveTab(in_ECX,local_30);
    }
    if ((param_1 != 0) &&
       (pCVar12 = CMDIClientAreaWnd::FindActiveTabWnd(in_ECX), pCVar12 != (CMFCTabCtrl *)0x0)) {
      iVar6 = *(int *)pCVar12;
      pcVar1 = *(code **)(iVar6 + 0x20c);
      guard_check_icall();
      uVar13 = (*pcVar1)();
      pcVar1 = *(code **)(iVar6 + 0x224);
      guard_check_icall(uVar13);
      (*pcVar1)();
    }
  }
  return;
}

