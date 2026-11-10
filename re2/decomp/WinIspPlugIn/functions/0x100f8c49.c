// rea decompile_all
// name: CMultiPaneFrameWnd::SetDockState
// address: 0x100f8c49
// body: available
// range: 0x100f8c49-0x100f928c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100f905e to 0x1004a383 FUN_1004a383 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMultiPaneFrameWnd::SetDockState(class CDockingManager *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMultiPaneFrameWnd::SetDockState(CMultiPaneFrameWnd *this,CDockingManager *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  CObject *pCVar4;
  CPaneContainer *this_00;
  CList<unsigned_int,unsigned_int> *pCVar5;
  CMultiPaneFrameWnd *pCVar6;
  HWND pHVar7;
  CWnd *pCVar8;
  CWnd *pCVar9;
  int *piVar10;
  CPaneContainerManager *pCVar11;
  AFX_MODULE_STATE *pAVar12;
  uint uVar13;
  undefined4 uVar14;
  LRESULT LVar15;
  CObList local_80 [4];
  CPaneContainerManager *local_7c;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  CMultiPaneFrameWnd *local_44;
  undefined4 *local_40;
  CDockingManager *local_3c;
  undefined4 local_38;
  CPaneContainerManager *local_34;
  int local_30;
  CMultiPaneFrameWnd *local_2c;
  CMultiPaneFrameWnd *local_28;
  tagRECT local_24;
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x70;
  local_8 = 0x100f8c55;
  local_3c = param_1;
  local_28 = this;
  CObList::CObList(local_80,10);
  local_8 = 0;
  pCVar11 = (CPaneContainerManager *)(this + 400);
  local_34 = pCVar11;
  iVar2 = CPaneContainerManager::IsEmpty(pCVar11);
  if (iVar2 == 0) {
    local_44 = this + 0x194;
    local_30 = *(int *)(this + 0x198);
    while (local_30 != 0) {
      puVar3 = (undefined4 *)FUN_100c321b(&local_30);
      pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_1023db9c,(CObject *)*puVar3)
      ;
      iVar2 = FUN_10051e53(&PTR_s_CBaseTabbedPane_101eb880);
      if (iVar2 == 0) {
        pcVar1 = *(code **)(*(int *)pCVar4 + 0x16c);
        guard_check_icall();
        iVar2 = (*pcVar1)();
        if (iVar2 != 0) {
          pHVar7 = GetParent(*(HWND *)(pCVar4 + 0x20));
          pCVar8 = CWnd::FromHandle(pHVar7);
          pHVar7 = GetParent(*(HWND *)(pCVar8 + 0x20));
          pCVar8 = CWnd::FromHandle(pHVar7);
          pCVar9 = CWnd::FromHandlePermanent(*(HWND__ **)(local_28 + 200));
          CWnd::SetParent((CWnd *)pCVar4,pCVar9);
          pcVar1 = *(code **)(*(int *)pCVar8 + 0x3c0);
          guard_check_icall(pCVar4);
          (*pcVar1)();
          iVar2 = FUN_10051e53(&PTR_s_CDockablePane_1023db9c);
          if (iVar2 != 0) {
            pcVar1 = *(code **)(*(int *)pCVar4 + 0x1f0);
            guard_check_icall(1);
            (*pcVar1)();
          }
          CWnd::ShowWindow((CWnd *)pCVar4,5);
        }
        pcVar1 = *(code **)(*(int *)pCVar4 + 0x1dc);
        guard_check_icall();
        iVar2 = (*pcVar1)();
        if (iVar2 != 0) {
          pcVar1 = *(code **)(*(int *)pCVar4 + 0x368);
          guard_check_icall(0,0xf000,0,1);
          (*pcVar1)();
        }
        local_24.left = 0;
        local_24.top = 0;
        local_24.right = 0;
        local_24.bottom = 0;
        GetWindowRect(*(HWND *)(pCVar4 + 0x20),&local_24);
        pcVar1 = *(code **)(*(int *)pCVar4 + 0x1fc);
        guard_check_icall(local_24.left,local_24.top,local_24.right,local_24.bottom,3,0);
        (*pcVar1)();
        pcVar1 = *(code **)(*(int *)pCVar4 + 0x228);
        guard_check_icall(0);
        piVar10 = (int *)(*pcVar1)();
        pCVar11 = local_34;
        this = local_28;
        if (piVar10 != (int *)0x0) {
          CWnd::SetParent((CWnd *)pCVar4,(CWnd *)local_28);
          pcVar1 = *(code **)(*piVar10 + 0x17c);
          guard_check_icall(pCVar4,0,0);
          (*pcVar1)();
          local_54 = *(int *)(pCVar4 + 0x298);
          local_50 = *(int *)(pCVar4 + 0x29c);
          local_4c = *(int *)(pCVar4 + 0x2a0);
          local_48 = *(int *)(pCVar4 + 0x2a4);
          pcVar1 = *(code **)(*(int *)pCVar4 + 0x238);
          guard_check_icall(0,local_54,local_50,local_4c - local_54,local_48 - local_50,0x34,0);
          (*pcVar1)();
          pCVar11 = local_34;
          this = local_28;
        }
      }
      else {
        local_38 = 0;
        pcVar1 = *(code **)(*(int *)pCVar11 + 0x8c);
        guard_check_icall(pCVar4,&local_38);
        this_00 = (CPaneContainer *)(*pcVar1)();
        if (this_00 == (CPaneContainer *)0x0) goto LAB_100f905e;
        pCVar5 = CPaneContainer::GetAssociatedSiblingPaneIDs(this_00,(CDockablePane *)pCVar4);
        if (pCVar5 != (CList<unsigned_int,unsigned_int> *)0x0) {
          puVar3 = *(undefined4 **)(pCVar5 + 4);
          while (puVar3 != (undefined4 *)0x0) {
            local_40 = (undefined4 *)*puVar3;
            pcVar1 = *(code **)(*(int *)local_3c + 0x24);
            guard_check_icall(puVar3[2],1);
            pCVar6 = (CMultiPaneFrameWnd *)(*pcVar1)();
            puVar3 = local_40;
            local_2c = pCVar6;
            if (pCVar6 != (CMultiPaneFrameWnd *)0x0) {
              iVar2 = FUN_10051e53(&PTR_s_CDockablePane_1023db9c);
              if (iVar2 != 0) {
                pcVar1 = *(code **)(*(int *)pCVar6 + 0x1dc);
                guard_check_icall();
                iVar2 = (*pcVar1)();
                if (iVar2 != 0) {
                  pcVar1 = *(code **)(*(int *)pCVar6 + 0x368);
                  guard_check_icall(0,0xf000,0,1);
                  (*pcVar1)();
                }
              }
              pcVar1 = *(code **)(*(int *)pCVar6 + 0x16c);
              guard_check_icall();
              iVar2 = (*pcVar1)();
              if (iVar2 == 0) {
                local_5c = 10;
                local_58 = 10;
                local_64 = 0;
                local_60 = 0;
                pcVar1 = *(code **)(*(int *)pCVar6 + 0x1fc);
                guard_check_icall(0,0,10,10,3,0);
                pCVar6 = local_2c;
                (*pcVar1)();
              }
              else {
                pHVar7 = GetParent(*(HWND *)(pCVar6 + 0x20));
                pCVar8 = CWnd::FromHandle(pHVar7);
                pHVar7 = GetParent(*(HWND *)(pCVar8 + 0x20));
                pCVar8 = CWnd::FromHandle(pHVar7);
                pCVar6 = local_2c;
                CWnd::SetParent((CWnd *)local_2c,(CWnd *)local_28);
                pcVar1 = *(code **)(*(int *)pCVar8 + 0x3c0);
                guard_check_icall(pCVar6);
                (*pcVar1)();
                pCVar6 = local_2c;
              }
              pcVar1 = *(code **)(*(int *)pCVar6 + 0x228);
              guard_check_icall(0);
              local_2c = (CMultiPaneFrameWnd *)(*pcVar1)();
              if ((local_2c != (CMultiPaneFrameWnd *)0x0) && (local_2c != local_28)) {
                pcVar1 = *(code **)(*(int *)local_2c + 0x17c);
                guard_check_icall(pCVar6,0,0);
                (*pcVar1)();
              }
              pcVar1 = *(code **)(*(int *)pCVar6 + 0x34c);
              guard_check_icall(pCVar4,0,0,0);
              (*pcVar1)();
              puVar3 = local_40;
              if (local_2c != (CMultiPaneFrameWnd *)0x0) {
                PostMessageW(*(HWND *)(local_2c + 0x20),DAT_102474b0,0,0);
                puVar3 = local_40;
              }
            }
          }
        }
        pcVar1 = *(code **)(*(int *)pCVar4 + 0x3a4);
        guard_check_icall();
        iVar2 = (*pcVar1)();
        if (iVar2 == 0) {
          CObList::AddTail(local_80,pCVar4);
          pCVar11 = local_34;
          this = local_28;
        }
        else {
          pcVar1 = *(code **)(*(int *)pCVar4 + 0x3d4);
          guard_check_icall(0);
          (*pcVar1)();
          pcVar1 = *(code **)(*(int *)pCVar4 + 0x210);
          guard_check_icall();
          (*pcVar1)();
          pCVar11 = local_34;
          this = local_28;
        }
      }
    }
    while (local_7c != (CPaneContainerManager *)0x0) {
      if (local_7c == (CPaneContainerManager *)0x0) {
LAB_100f905e:
                    /* WARNING: Subroutine does not return */
        FUN_1004a383();
      }
      local_34 = *(CPaneContainerManager **)local_7c;
      pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_1023db9c,
                                  *(CObject **)(local_7c + 8));
      pcVar1 = *(code **)(*(int *)this + 0x17c);
      guard_check_icall(pCVar4,0,1);
      (*pcVar1)();
      pcVar1 = *(code **)(*(int *)pCVar4 + 0x60);
      guard_check_icall();
      (*pcVar1)();
      local_7c = local_34;
    }
    if (*(int *)(this + 0x1a0) == 0) {
      SendMessageW(*(HWND *)(this + 0x20),DAT_102474b0,0,0);
    }
    else {
      local_30 = *(int *)(this + 0x198);
      while (local_30 != 0) {
        puVar3 = (undefined4 *)FUN_100c321b(&local_30);
        local_28 = (CMultiPaneFrameWnd *)
                   AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_1023db9c,
                                      (CObject *)*puVar3);
        pcVar1 = *(code **)(*(int *)local_28 + 0x1ac);
        guard_check_icall();
        pCVar11 = (CPaneContainerManager *)(*pcVar1)();
        local_34 = pCVar11;
        pAVar12 = AfxGetModuleState();
        pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CWinAppEx_101e4ff8,
                                    *(CObject **)(pAVar12 + 4));
        if ((pCVar4 == (CObject *)0x0) || (*(int *)(pCVar4 + 0xd0) == 0)) {
          uVar13 = 0;
        }
        else {
          uVar13 = 1;
        }
        if ((pCVar11 != (CPaneContainerManager *)0x0) && (uVar13 == 0)) {
          *(int *)(this + 0xa0) = 1;
        }
        pcVar1 = *(code **)(*(int *)local_28 + 0x224);
        guard_check_icall(local_34,uVar13 ^ 1,0);
        (*pcVar1)();
        CPaneFrameWnd::AddRemovePaneFromGlobalList((CBasePane *)local_28,1);
      }
      pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBasePane_101de5b4,
                                  *(CObject **)(*(int *)(this + 0x198) + 8));
      if (pCVar4 != (CObject *)0x0) {
        if (*(int *)(this + 0x1a0) < 2) {
          uVar14 = FUN_10049868();
          FUN_100476a0(uVar14);
          local_8._0_1_ = 1;
          CWnd::GetWindowTextW
                    ((CWnd *)pCVar4,
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_2c
                    );
          FUN_1005979b(local_2c);
          LVar15 = SendMessageW(*(HWND *)(pCVar4 + 0x20),0x7f,0,0);
          SendMessageW(*(HWND *)(this + 0x20),0x80,0,LVar15);
          LVar15 = SendMessageW(*(HWND *)(pCVar4 + 0x20),0x7f,1,0);
          SendMessageW(*(HWND *)(this + 0x20),0x80,1,LVar15);
          local_8 = (uint)local_8._1_3_ << 8;
          FUN_100476d0();
        }
        else {
          *(int *)(this + 0xd4) = *(int *)(pCVar4 + 0x20);
        }
      }
      pcVar1 = *(code **)(*(int *)this + 500);
      guard_check_icall();
      (*pcVar1)();
      pcVar1 = *(code **)(*(int *)this + 0x18c);
      guard_check_icall(*(int *)(this + 0xc4));
      (*pcVar1)();
      pcVar1 = *(code **)(*(int *)this + 0x1cc);
      guard_check_icall();
      (*pcVar1)();
    }
  }
  else {
    PostMessageW(*(HWND *)(this + 0x20),DAT_102474b0,0,0);
  }
  CObList::~CObList(local_80);
  FUN_1018015d();
  return;
}

