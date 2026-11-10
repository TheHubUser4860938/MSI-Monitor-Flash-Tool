// rea decompile_all
// name: CMDIClientAreaWnd::SerializeTabGroup
// address: 0x100fbba8
// body: available
// range: 0x100fbba8-0x100fc281 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    private: void __thiscall CMDIClientAreaWnd::SerializeTabGroup(class CArchive &,class CMFCTabCtrl
   *,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMDIClientAreaWnd::SerializeTabGroup
          (CMDIClientAreaWnd *this,CArchive *param_1,CMFCTabCtrl *param_2,int param_3)

{
  code *pcVar1;
  CBaseTabbedPane *pCVar2;
  undefined4 uVar3;
  CObject *pCVar4;
  int iVar5;
  undefined4 *puVar6;
  HWND pHVar7;
  CWnd *pCVar8;
  uint uVar9;
  CBasePane *pCVar10;
  CMFCTabCtrl *pCVar11;
  bool bVar12;
  tagRECT *ptVar13;
  undefined **local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  ResizeMode local_6c;
  undefined4 local_68;
  CObject *local_64;
  CArchive *local_60;
  CObject *local_5c;
  CBaseTabbedPane *local_58;
  CMDIClientAreaWnd *local_54;
  CObject *local_50;
  undefined4 local_4c;
  CMFCTabCtrl *local_48;
  int local_44;
  int local_40;
  CObject *local_3c;
  uint local_38;
  tagRECT local_34;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x70;
  local_8 = 0x100fbbb4;
  local_60 = param_1;
  local_48 = param_2;
  local_54 = this;
  if ((~*(uint *)(param_1 + 0x18) & 1) == 0) {
    local_44 = 0;
    FUN_1001a6a2(&local_44);
    local_64 = (CObject *)0xffffffff;
    FUN_1001a6a2(&local_64);
    local_3c = (CObject *)0x0;
    FUN_1001a6a2(&local_3c);
    if ((local_3c != (CObject *)0x0) &&
       (local_48 = FindActiveTabWnd(local_54), local_48 != (CMFCTabCtrl *)0x0)) {
      *(undefined4 *)(local_48 + 0x298) = 0;
      pcVar1 = *(code **)(*(int *)local_48 + 0x20c);
      guard_check_icall();
      iVar5 = (*pcVar1)();
      CMFCBaseTabCtrl::InvalidateTab((CMFCBaseTabCtrl *)local_48,iVar5);
    }
    *(CObject **)(param_2 + 0x298) = local_3c;
    pHVar7 = GetParent(*(HWND *)(local_54 + 0x20));
    pCVar8 = CWnd::FromHandle(pHVar7);
    local_50 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWndEx_10192540,(CObject *)pCVar8)
    ;
    local_48 = (CMFCTabCtrl *)0x0;
    if (0 < local_44) {
      do {
        uVar3 = FUN_10013071();
        FUN_10003190(uVar3);
        local_8 = 2;
        CArchive::operator>><wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                  (param_1,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                           &local_40);
        local_5c = (CObject *)0x0;
        local_3c = (CObject *)0x0;
        FUN_1001a6a2(&local_5c);
        if (local_5c != (CObject *)0x0) {
          local_3c = CArchive::ReadObject(param_1,(CRuntimeClass *)0x0);
        }
        uVar3 = FUN_10013071();
        FUN_10003190(uVar3);
        local_8 = CONCAT31(local_8._1_3_,3);
        CArchive::operator>><wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                  (param_1,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                           &local_68);
        FUN_1001a6a2(&local_6c);
        CMFCTabCtrl::SetResizeMode(param_2,local_6c);
        local_4c = 0xffffffff;
        FUN_1001a6a2(&local_4c);
        local_38 = 0xffffffff;
        FUN_1001a6a2(&local_38);
        uVar3 = local_68;
        if (*(int *)(local_40 + -0xc) == 0) {
          if (local_38 != 0xffffffff) {
            pCVar10 = CMDIFrameWndEx::GetPane((CMDIFrameWndEx *)local_50,local_38);
            pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_101d3b9c,
                                        (CObject *)pCVar10);
            local_5c = pCVar4;
            if (pCVar4 != (CObject *)0x0) {
              local_58 = CBasePane::GetParentTabbedPane((CBasePane *)pCVar4);
              if (local_58 != (CBaseTabbedPane *)0x0) {
                pcVar1 = *(code **)(*(int *)pCVar4 + 0x378);
                guard_check_icall();
                (*pcVar1)();
                pCVar4 = local_5c;
              }
              pcVar1 = *(code **)(*(int *)local_50 + 0x1d4);
              guard_check_icall(pCVar4);
              local_38 = (*pcVar1)();
              uVar9 = local_38;
              if (local_58 != (CBaseTabbedPane *)0x0) {
                pcVar1 = *(code **)(*(int *)local_58 + 0x3c0);
                guard_check_icall(local_5c);
                (*pcVar1)();
                uVar9 = local_38;
              }
              goto LAB_100fc046;
            }
          }
        }
        else {
          local_58 = (CBaseTabbedPane *)(local_54 + 0x2b74);
          iVar5 = Find(local_40,0);
          if (iVar5 == 0) {
            pcVar1 = *(code **)(*(int *)local_50 + 0x224);
            guard_check_icall(local_40,local_3c);
            uVar9 = (*pcVar1)();
            local_38 = uVar9;
            if (uVar9 == 0) goto LAB_100fc08b;
            AddTail(&local_40);
          }
          else {
            pcVar1 = *(code **)(*(int *)local_50 + 0x228);
            guard_check_icall(local_40,local_3c);
            local_38 = (*pcVar1)();
            uVar9 = local_38;
          }
LAB_100fc046:
          if (uVar9 != 0) {
            pcVar1 = *(code **)(*(int *)param_2 + 0x18c);
            guard_check_icall(uVar9,uVar3,0xffffffff,1);
            (*pcVar1)();
            pcVar1 = *(code **)(*(int *)param_2 + 0x1e0);
            guard_check_icall(local_48,local_4c);
            (*pcVar1)();
            if (param_3 != 0) {
              *(CMFCTabCtrl **)(local_38 + 0x128) = param_2;
            }
          }
        }
LAB_100fc08b:
        if (local_3c != (CObject *)0x0) {
          pcVar1 = *(code **)(*(int *)local_3c + 4);
          guard_check_icall(1);
          (*pcVar1)();
        }
        FUN_10003460();
        local_8 = 0xffffffff;
        FUN_10003460();
        local_48 = local_48 + 1;
        param_1 = local_60;
      } while ((int)local_48 < local_44);
    }
    iVar5 = 0;
    local_58 = (CBaseTabbedPane *)0x0;
    FUN_1001a6a2(&local_58);
    local_44 = 0;
    FUN_1001a6a2(&local_44);
    local_80 = CArray<unsigned_long,unsigned_long>::vftable;
    local_7c = 0;
    local_70 = 0;
    local_74 = 0;
    local_78 = 0;
    local_8 = 4;
    if (0 < local_44) {
      do {
        local_4c = 0xffffffff;
        FUN_1001a6a2(&local_4c);
        FUN_100c9f11(iVar5,local_4c);
        iVar5 = iVar5 + 1;
      } while (iVar5 < local_44);
    }
    pCVar2 = local_58;
    CMFCBaseTabCtrl::EnableAutoColor((CMFCBaseTabCtrl *)param_2,(int)local_58);
    CMFCBaseTabCtrl::SetAutoColors
              ((CMFCBaseTabCtrl *)param_2,(CArray<unsigned_long,unsigned_long> *)&local_80);
    local_38 = 0;
    *(CBaseTabbedPane **)(local_54 + 0x2adc) = pCVar2;
    FUN_1001a6a2(&local_38);
    uVar9 = local_38;
    FUN_1006fe28(local_38);
    *(uint *)(local_54 + 0x2ae0) = uVar9;
    FUN_1001a6a2(&local_38);
    *(uint *)(param_2 + 0x128) = local_38;
    local_4c = 1;
    *(uint *)(local_54 + 0x2ae4) = local_38;
    FUN_1001a6a2(&local_4c);
    uVar3 = local_4c;
    pcVar1 = *(code **)(*(int *)param_2 + 0x244);
    guard_check_icall(local_4c,1);
    (*pcVar1)();
    local_24.left = 0;
    *(undefined4 *)(local_54 + 0x2af0) = uVar3;
    local_24.top = 0;
    local_24.right = 0;
    local_24.bottom = 0;
    FUN_1001b1a6(&local_24,0x10);
    ptVar13 = &local_24;
    pHVar7 = GetParent(*(HWND *)(param_2 + 0x20));
    pCVar8 = CWnd::FromHandle(pHVar7);
    CWnd::ScreenToClient(pCVar8,ptVar13);
    CWnd::SetWindowPos((CWnd *)param_2,(CWnd *)0x0,local_24.left,local_24.right,
                       local_24.right - local_24.left,local_24.bottom - local_24.top,0x14);
    pcVar1 = *(code **)(*(int *)param_2 + 0x1ac);
    guard_check_icall();
    iVar5 = (*pcVar1)();
    if (0 < iVar5) {
      pcVar1 = *(code **)(*(int *)param_2 + 0x1ac);
      guard_check_icall();
      iVar5 = (*pcVar1)();
      pCVar4 = local_64;
      if (iVar5 + -1 < (int)local_64) {
        pcVar1 = *(code **)(*(int *)param_2 + 0x1ac);
        guard_check_icall();
        iVar5 = (*pcVar1)();
        pCVar4 = (CObject *)(iVar5 + -1);
      }
      pcVar1 = *(code **)(*(int *)param_2 + 0x214);
      guard_check_icall(pCVar4);
      (*pcVar1)();
    }
    CArray<unsigned_long,unsigned_long>::~CArray<unsigned_long,unsigned_long>
              ((CArray<unsigned_long,unsigned_long> *)&local_80);
  }
  else {
    pcVar1 = *(code **)(*(int *)param_2 + 0x1ac);
    guard_check_icall();
    local_44 = (*pcVar1)();
    FUN_1001b086(local_44);
    pcVar1 = *(code **)(*(int *)param_2 + 0x20c);
    guard_check_icall();
    uVar3 = (*pcVar1)();
    FUN_1001b086(uVar3);
    FUN_1001b086(*(undefined4 *)(param_2 + 0x298));
    local_40 = 0;
    if (0 < local_44) {
      do {
        pcVar1 = *(code **)(*(int *)param_2 + 0x1b0);
        guard_check_icall(local_40);
        pCVar4 = (CObject *)(*pcVar1)();
        local_64 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIChildWndEx_10193444,pCVar4);
        local_3c = (CObject *)0x0;
        pcVar1 = *(code **)(*(int *)local_64 + 0x218);
        guard_check_icall(&local_3c);
        uVar3 = (*pcVar1)();
        FUN_100037c0(uVar3);
        local_8 = 0;
        CArchive::operator<<<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                  (param_1,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                           &local_60);
        bVar12 = local_3c != (CObject *)0x0;
        FUN_1001b086(bVar12);
        if ((bVar12) && (FUN_100314bc(local_3c), local_3c != (CObject *)0x0)) {
          pcVar1 = *(code **)(*(int *)local_3c + 4);
          guard_check_icall(1);
          (*pcVar1)();
        }
        uVar3 = FUN_10013071();
        FUN_10003190(uVar3);
        param_2 = local_48;
        local_8 = CONCAT31(local_8._1_3_,1);
        pcVar1 = *(code **)(*(int *)local_48 + 0x1bc);
        guard_check_icall(local_40,&local_38);
        (*pcVar1)();
        CArchive::operator<<<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                  (param_1,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                           &local_38);
        FUN_1001b086(*(int *)(param_2 + 0x29f8));
        pcVar1 = *(code **)(*(int *)param_2 + 0x1dc);
        guard_check_icall(local_40);
        uVar3 = (*pcVar1)();
        FUN_1001b086(uVar3);
        iVar5 = -1;
        pCVar8 = *(CWnd **)(local_64 + 0x444);
        if ((pCVar8 != (CWnd *)0x0) && (*(int *)(pCVar8 + 0x20) != 0)) {
          iVar5 = CWnd::GetDlgCtrlID(pCVar8);
        }
        FUN_1001b086(iVar5);
        FUN_10003460();
        local_8 = 0xffffffff;
        FUN_10003460();
        local_40 = local_40 + 1;
      } while (local_40 < local_44);
    }
    FUN_1001b086(*(int *)(param_2 + 0x1dc));
    FUN_1001b086(*(int *)(param_2 + 0x1d0));
    pCVar11 = param_2;
    if (0 < *(int *)(param_2 + 0x1d0)) {
      iVar5 = 0;
      do {
        puVar6 = (undefined4 *)FUN_100d7168(iVar5);
        FUN_1001b086(*puVar6);
        iVar5 = iVar5 + 1;
        pCVar11 = local_48;
      } while (iVar5 < *(int *)(param_2 + 0x1d0));
    }
    FUN_1001b086(*(int *)(pCVar11 + 0x290));
    FUN_1001b086(*(int *)(pCVar11 + 0x128));
    pcVar1 = *(code **)(*(int *)pCVar11 + 0x248);
    guard_check_icall();
    uVar3 = (*pcVar1)();
    FUN_1001b086(uVar3);
    local_34.left = 0;
    local_34.top = 0;
    local_34.right = 0;
    local_34.bottom = 0;
    GetWindowRect(*(HWND *)(pCVar11 + 0x20),&local_34);
    FUN_1001aede(&local_34,0x10);
  }
  FUN_101490fe();
  return;
}

