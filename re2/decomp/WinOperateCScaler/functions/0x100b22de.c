// rea decompile_all
// name: CPaneFrameWnd::OnMouseMove
// address: 0x100b22de
// body: available
// range: 0x100b22de-0x100b2ce8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    protected: void __thiscall CPaneFrameWnd::OnMouseMove(unsigned int,class CPoint)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CPaneFrameWnd::OnMouseMove(CPaneFrameWnd *this,undefined4 param_1,LONG param_3,LONG param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  POINT pt;
  POINT pt_00;
  POINT pt_01;
  POINT pt_02;
  POINT pt_03;
  char cVar3;
  SHORT SVar4;
  CObject *pCVar5;
  uint uVar6;
  CWnd *pCVar7;
  CDockingManager *pCVar8;
  CObject *pCVar9;
  int iVar10;
  int iVar11;
  BOOL BVar12;
  uint uVar13;
  CPaneDivider *pCVar14;
  undefined4 uVar15;
  HCURSOR hCursor;
  CSmartDockingManager *this_00;
  CSmartDockingManager *this_01;
  bool bVar16;
  ulong uVar17;
  RECT *pRVar18;
  tagPOINT local_80;
  tagPOINT local_78;
  uint local_70;
  uint local_6c;
  CObject *local_68;
  CSmartDockingManager *local_64;
  tagPOINT local_60;
  CObject *local_58;
  CDockingManager *local_54;
  CObject *local_50;
  CObject *local_4c;
  tagRECT local_48;
  tagRECT local_38;
  undefined1 local_28 [12];
  LONG local_1c;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  if (this[0x80] != (CPaneFrameWnd)0x0) {
    this[0x80] = (CPaneFrameWnd)0x0;
    goto LAB_100b2cd6;
  }
  if (this[0xa5] == (CPaneFrameWnd)0x0) {
    local_80.x = param_3;
    local_80.y = param_4;
    ClientToScreen(*(HWND *)(this + 0x20),&local_80);
    pcVar1 = *(code **)(*(int *)this + 0x234);
    guard_check_icall(local_80.x,local_80.y);
    (*pcVar1)();
    FUN_100283ad();
    goto LAB_100b2cd6;
  }
  if (*(int *)(this + 0x88) == 0) {
    local_60.x = 0;
    local_60.y = 0;
    GetCursorPos(&local_60);
    if ((local_60.x == *(int *)(this + 0x100)) && (local_60.y == *(int *)(this + 0x104)))
    goto LAB_100b2cd6;
    *(undefined4 *)(this + 0x88) = 1;
    pcVar1 = *(code **)(*(int *)this + 0x1ac);
    guard_check_icall();
    pCVar5 = (CObject *)(*pcVar1)();
    pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_10201ba4,pCVar5);
    pcVar1 = *(code **)(*(int *)this + 0x1b0);
    guard_check_icall();
    cVar3 = (*pcVar1)();
    if ((cVar3 < '\0') && (pCVar5 != (CObject *)0x0)) {
      pcVar1 = *(code **)(*(int *)pCVar5 + 0x198);
      guard_check_icall();
      uVar6 = (*pcVar1)();
      if ((uVar6 & 0xf000) != 0) {
        pCVar8 = *(CDockingManager **)(this + 0x184);
        if (pCVar8 == (CDockingManager *)0x0) {
          pCVar7 = CWnd::FromHandlePermanent(*(HWND__ **)(this + 200));
          pCVar8 = CGlobalUtils::GetDockingManager((CGlobalUtils *)&PTR_vftable_1020194c,pCVar7);
          if (pCVar8 == (CDockingManager *)0x0) goto LAB_100b23da;
        }
        CDockingManager::StartSDocking(pCVar8,(CWnd *)this);
      }
    }
  }
LAB_100b23da:
  _DAT_10201954 = 1;
  pcVar1 = *(code **)(*(int *)this + 0x1b0);
  guard_check_icall();
  local_70 = (*pcVar1)();
  this_00 = (CSmartDockingManager *)0x0;
  pCVar8 = (CDockingManager *)0x0;
  local_64 = (CSmartDockingManager *)0x0;
  local_6c = local_70 & 0x80;
  local_54 = (CDockingManager *)0x0;
  if (local_6c != 0) {
    pCVar8 = *(CDockingManager **)(this + 0x184);
    if (pCVar8 == (CDockingManager *)0x0) {
      local_54 = pCVar8;
      pCVar7 = CWnd::FromHandlePermanent(*(HWND__ **)(this + 200));
      pCVar8 = CGlobalUtils::GetDockingManager((CGlobalUtils *)&PTR_vftable_1020194c,pCVar7);
      local_54 = pCVar8;
      if (pCVar8 == (CDockingManager *)0x0) goto LAB_100b2470;
    }
    local_28._8_4_ = param_3;
    local_1c = param_4;
    local_54 = pCVar8;
    ClientToScreen(*(HWND *)(this + 0x20),(LPPOINT)(local_28 + 8));
    this_00 = CDockingManager::GetSmartDockingManager(pCVar8);
    local_64 = this_00;
    if (this_00 != (CSmartDockingManager *)0x0) {
      CSmartDockingManager::OnMouseMove(this_00,local_28._8_4_,local_1c);
    }
  }
LAB_100b2470:
  if ((local_70 & 2) == 0) {
    if ((local_70 & 1) != 0) {
      local_60.x = param_3;
      local_60.y = param_4;
      ClientToScreen(*(HWND *)(this + 0x20),&local_60);
      if ((((local_6c == 0) || (this_00 == (CSmartDockingManager *)0x0)) ||
          (*(int *)(this_00 + 8) == 0)) || (*(int *)(this_00 + 4) == 0)) {
        local_6c = 0;
        local_70 = 0xffffffff;
      }
      else {
        local_70 = *(uint *)(this_00 + 0x110);
        local_6c = 1;
      }
      SVar4 = GetKeyState(0x11);
      local_78.y = (LONG)(SVar4 < 0);
      local_68 = (CObject *)0x0;
      this_01 = local_64;
      if (local_6c != 0) {
        if (local_78.y == 0) {
          pcVar1 = *(code **)(*(int *)pCVar8 + 0x14);
          guard_check_icall(local_60.x,local_60.y,this);
          local_58 = (CObject *)(*pcVar1)();
          pcVar1 = *(code **)(*(int *)this + 0x1a8);
          guard_check_icall();
          pCVar5 = (CObject *)(*pcVar1)();
          pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBasePane_101b236c,pCVar5);
          local_4c = pCVar5;
          if (local_58 == (CObject *)0x0) {
LAB_100b268d:
            iVar10 = *(int *)local_54;
            guard_check_icall(local_60.x,local_60.y,DAT_1020190c,1,0,1,pCVar5);
            pCVar5 = (CObject *)(**(code **)(iVar10 + 0x10))();
            pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_10201ba4,pCVar5);
            local_58 = pCVar5;
            if (pCVar5 != (CObject *)0x0) {
              pcVar1 = *(code **)(*(int *)pCVar5 + 0x228);
              guard_check_icall(0);
              iVar10 = (*pcVar1)();
              if ((iVar10 == 0) ||
                 (iVar10 = CGlobalUtils::CanPaneBeInFloatingMultiPaneFrameWnd
                                     ((CGlobalUtils *)&PTR_vftable_1020194c,(CWnd *)local_4c),
                 iVar10 == 0)) {
                pcVar1 = *(code **)(*(int *)pCVar5 + 0x228);
                guard_check_icall(0);
                iVar10 = (*pcVar1)();
                if (iVar10 == 0) goto LAB_100b2714;
LAB_100b279f:
                local_50 = (CObject *)0x0;
              }
              else {
LAB_100b2714:
                pcVar1 = *(code **)(*(int *)pCVar5 + 0x198);
                guard_check_icall();
                iVar10 = (*pcVar1)();
                pcVar1 = *(code **)(*(int *)local_4c + 0x198);
                guard_check_icall();
                iVar11 = (*pcVar1)();
                pCVar5 = local_58;
                if (iVar10 != iVar11) goto LAB_100b279f;
                pcVar1 = *(code **)(*(int *)local_58 + 0x184);
                guard_check_icall(local_4c);
                iVar10 = (*pcVar1)();
                if (iVar10 == 0) goto LAB_100b279f;
                pcVar1 = *(code **)(*(int *)local_4c + 0x18c);
                guard_check_icall();
                iVar10 = (*pcVar1)();
                if (iVar10 == 0) goto LAB_100b279f;
                pcVar1 = *(code **)(*(int *)pCVar5 + 0x18c);
                guard_check_icall();
                iVar10 = (*pcVar1)();
                if (iVar10 == 0) goto LAB_100b279f;
                local_50 = (CObject *)0x1;
              }
              local_38.left = 0;
              local_38.top = 0;
              local_38.right = 0;
              local_38.bottom = 0;
              GetWindowRect(*(HWND *)(pCVar5 + 0x20),&local_38);
              pt_00.y = local_60.y;
              pt_00.x = local_60.x;
              BVar12 = PtInRect(&local_38,pt_00);
              if (BVar12 == 0) {
LAB_100b27f0:
                local_48.left = 0;
                local_48.top = 0;
                local_48.right = 0;
                local_48.bottom = 0;
                local_18.left = 0;
                local_18.top = 0;
                local_18.right = 0;
                local_18.bottom = 0;
                pcVar1 = *(code **)(*(int *)pCVar5 + 0x32c);
                guard_check_icall(&local_48,&local_18);
                (*pcVar1)();
                pt_01.y = local_60.y;
                pt_01.x = local_60.x;
                BVar12 = PtInRect(&local_48,pt_01);
                if ((BVar12 == 0) &&
                   (pt_02.y = local_60.y, pt_02.x = local_60.x, BVar12 = PtInRect(&local_18,pt_02),
                   BVar12 == 0)) goto LAB_100b2877;
              }
              else {
                pcVar1 = *(code **)(*(int *)pCVar5 + 0x1a4);
                guard_check_icall();
                iVar10 = (*pcVar1)();
                if (iVar10 <= local_60.y - local_38.top) goto LAB_100b27f0;
              }
              local_68 = local_50;
              bVar16 = local_50 != (CObject *)0x0;
              local_50 = pCVar5;
              if (bVar16) goto LAB_100b2858;
            }
LAB_100b2877:
            CSmartDockingManager::Show(local_64,1);
            if (pCVar5 == (CObject *)0x0) {
LAB_100b2a3e:
              pRVar18 = &local_18;
              local_18.left = *(LONG *)(local_54 + 0xf8);
              local_18.top = *(LONG *)(local_54 + 0xfc);
              local_18.right = *(LONG *)(local_54 + 0x100);
              local_18.bottom = *(LONG *)(local_54 + 0x104);
              pCVar7 = CWnd::FromHandlePermanent(*(HWND__ **)(this + 200));
              CWnd::ClientToScreen(pCVar7,pRVar18);
              pt_03.y = local_60.y;
              pt_03.x = local_60.x;
              BVar12 = PtInRect(&local_18,pt_03);
              pCVar5 = local_4c;
              if (BVar12 == 0) {
                if ((-1 < (int)local_70) && (this_01 = local_64, (int)local_70 < 4))
                goto LAB_100b2b70;
                pcVar1 = *(code **)(*(int *)local_4c + 0x198);
                guard_check_icall();
                uVar17 = (*pcVar1)();
                iVar10 = 0;
                this_01 = local_64;
              }
              else {
                local_54 = (CDockingManager *)0x0;
                pcVar1 = *(code **)(*(int *)local_4c + 0x19c);
                guard_check_icall();
                pCVar9 = (CObject *)(*pcVar1)();
                pCVar9 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWndEx_101bd3e8,pCVar9);
                local_58 = pCVar9;
                if ((pCVar9 != (CObject *)0x0) &&
                   (iVar10 = CMDIFrameWndEx::AreMDITabs((CMDIFrameWndEx *)pCVar9,(int *)0x0),
                   iVar10 != 0)) {
                  pcVar1 = *(code **)(*(int *)pCVar9 + 0x1dc);
                  guard_check_icall();
                  iVar10 = (*pcVar1)();
                  if (iVar10 != 0) {
                    pcVar1 = *(code **)(*(int *)pCVar5 + 400);
                    guard_check_icall();
                    iVar10 = (*pcVar1)();
                    if (iVar10 != 0) {
                      local_54 = (CDockingManager *)0x1;
                    }
                  }
                }
                pcVar1 = *(code **)(*(int *)pCVar5 + 0x198);
                guard_check_icall();
                uVar15 = (*pcVar1)();
                CSmartDockingManager::MoveCentralGroup
                          (local_64,local_18.left,local_18.top,local_18.right,local_18.bottom,
                           local_54,uVar15);
                pcVar1 = *(code **)(*(int *)local_4c + 0x198);
                guard_check_icall();
                uVar17 = (*pcVar1)();
                iVar10 = 1;
                this_01 = local_64;
              }
            }
            else {
              local_50 = (CObject *)
                         CGlobalUtils::CanPaneBeInFloatingMultiPaneFrameWnd
                                   ((CGlobalUtils *)&PTR_vftable_1020194c,(CWnd *)local_4c);
              pcVar1 = *(code **)(*(int *)pCVar5 + 0x1a8);
              guard_check_icall();
              iVar10 = (*pcVar1)();
              if ((iVar10 != 0) && (local_50 == (CObject *)0x0)) goto LAB_100b2a3e;
              pcVar1 = *(code **)(*(int *)pCVar5 + 0x184);
              guard_check_icall(local_4c);
              iVar10 = (*pcVar1)();
              if (iVar10 == 0) goto LAB_100b2a3e;
              pcVar1 = *(code **)(*(int *)pCVar5 + 0x194);
              guard_check_icall();
              uVar6 = (*pcVar1)();
              pcVar1 = *(code **)(*(int *)local_4c + 0x198);
              guard_check_icall();
              uVar13 = (*pcVar1)();
              pCVar5 = local_58;
              if (((uVar13 & uVar6) == 0) ||
                 (pCVar14 = CDockablePane::GetDefaultPaneDivider((CDockablePane *)local_58),
                 pCVar14 == (CPaneDivider *)0x0)) {
                pcVar1 = *(code **)(*(int *)pCVar5 + 0x228);
                guard_check_icall(0);
                iVar10 = (*pcVar1)();
                if (iVar10 != 0) {
                  pcVar1 = *(code **)(*(int *)pCVar5 + 0x198);
                  guard_check_icall();
                  iVar10 = (*pcVar1)();
                  pcVar1 = *(code **)(*(int *)local_4c + 0x198);
                  guard_check_icall();
                  iVar11 = (*pcVar1)();
                  pCVar5 = local_58;
                  if (iVar11 == iVar10) goto LAB_100b296b;
                }
                goto LAB_100b2a3e;
              }
LAB_100b296b:
              local_54 = (CDockingManager *)0x0;
              pcVar1 = *(code **)(*(int *)this + 0x174);
              guard_check_icall();
              iVar10 = (*pcVar1)();
              if (iVar10 != 0) {
                pcVar1 = *(code **)(*(int *)pCVar5 + 0x18c);
                guard_check_icall();
                iVar10 = (*pcVar1)();
                if (iVar10 != 0) {
                  pcVar1 = *(code **)(*(int *)pCVar5 + 0x198);
                  guard_check_icall();
                  iVar10 = (*pcVar1)();
                  pcVar1 = *(code **)(*(int *)local_4c + 0x198);
                  guard_check_icall();
                  iVar11 = (*pcVar1)();
                  if (iVar11 == iVar10) {
                    local_54 = (CDockingManager *)0x1;
                  }
                }
              }
              local_18.left = 0;
              local_18.top = 0;
              local_18.right = 0;
              local_18.bottom = 0;
              GetWindowRect(*(HWND *)(local_58 + 0x20),&local_18);
              if (DAT_1020b528 == 0) {
                pcVar1 = *(code **)(*(int *)local_4c + 0x198);
                guard_check_icall();
                uVar15 = (*pcVar1)();
              }
              else {
                uVar15 = 0xf000;
              }
              this_01 = local_64;
              CSmartDockingManager::MoveCentralGroup
                        (local_64,local_18.left,local_18.top,local_18.right,local_18.bottom,local_54
                         ,uVar15);
              uVar17 = 0xf000;
              iVar10 = 1;
            }
            CSmartDockingManager::ShowCentralGroup(this_01,iVar10,uVar17);
          }
          else {
            pcVar1 = *(code **)(*(int *)local_58 + 0x1ac);
            guard_check_icall();
            pCVar9 = (CObject *)(*pcVar1)();
            local_50 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_10201ba4,pCVar9);
            if (local_50 == (CObject *)0x0) goto LAB_100b268d;
            pcVar1 = *(code **)(*(int *)local_50 + 0x18c);
            guard_check_icall();
            iVar10 = (*pcVar1)();
            if (iVar10 == 0) goto LAB_100b268d;
            pcVar1 = *(code **)(*(int *)pCVar5 + 0x18c);
            guard_check_icall();
            iVar10 = (*pcVar1)();
            if (iVar10 == 0) goto LAB_100b268d;
            pcVar1 = *(code **)(*(int *)local_50 + 0x338);
            guard_check_icall(this);
            iVar10 = (*pcVar1)();
            if ((iVar10 == 0) ||
               (iVar10 = CGlobalUtils::CanPaneBeInFloatingMultiPaneFrameWnd
                                   ((CGlobalUtils *)&PTR_vftable_1020194c,(CWnd *)pCVar5),
               iVar10 == 0)) goto LAB_100b268d;
            pcVar1 = *(code **)(*(int *)local_50 + 0x198);
            guard_check_icall();
            iVar10 = (*pcVar1)();
            pcVar1 = *(code **)(*(int *)local_4c + 0x198);
            guard_check_icall();
            iVar11 = (*pcVar1)();
            pCVar9 = local_58;
            pCVar5 = local_4c;
            if (iVar10 != iVar11) goto LAB_100b268d;
            local_38.left = 0;
            local_38.top = 0;
            local_38.right = 0;
            local_38.bottom = 0;
            pcVar1 = *(code **)(*(int *)local_58 + 0x1c8);
            guard_check_icall(&local_38);
            (*pcVar1)();
            local_48.left = 0;
            local_48.top = 0;
            local_48.right = 0;
            local_48.bottom = 0;
            GetWindowRect(*(HWND *)(pCVar9 + 0x20),&local_48);
            OffsetRect(&local_38,local_48.left,local_48.top);
            pt.y = local_60.y;
            pt.x = local_60.x;
            BVar12 = PtInRect(&local_38,pt);
            pCVar5 = local_4c;
            if (BVar12 == 0) goto LAB_100b268d;
            local_68 = (CObject *)0x1;
LAB_100b2858:
            this_01 = local_64;
            CSmartDockingManager::Show(local_64,0);
            CMFCDragFrameImpl::PlaceTabPreDocking
                      ((CMFCDragFrameImpl *)(this + 300),(CWnd *)local_50);
          }
        }
        else {
          CSmartDockingManager::Show(this_00,0);
          this_01 = local_64;
        }
      }
LAB_100b2b70:
      pcVar1 = *(code **)(*(int *)this + 0x1b0);
      guard_check_icall();
      local_54 = (CDockingManager *)(*pcVar1)();
      pCVar5 = local_68;
      if (local_6c == 0) {
LAB_100b2be5:
        if ((pCVar5 == (CObject *)0x0) && (iVar10 = MoveMiniFrame(this), iVar10 != 0)) {
          local_78.x = 0;
          local_78.y = 0;
          GetCursorPos(&local_78);
          iVar11 = local_78.x - *(int *)(this + 0x130);
          iVar10 = local_78.y - *(int *)(this + 0x134);
          local_28._0_4_ = 0;
          local_28._4_4_ = 0;
          local_28._8_4_ = 0;
          local_1c = 0;
          GetWindowRect(*(HWND *)(this + 0x20),(LPRECT)local_28);
          OffsetRect((LPRECT)local_28,iVar11,iVar10);
          CWnd::SetWindowPos((CWnd *)this,(CWnd *)0x0,local_28._0_4_,local_28._4_4_,-1,-1,0x45);
          *(LONG *)(this + 0x130) = local_78.x;
          *(undefined4 *)(this + 0x138) = local_28._0_4_;
          *(LONG *)(this + 0x134) = local_78.y;
          *(undefined4 *)(this + 0x13c) = local_28._4_4_;
          *(undefined4 *)(this + 0x140) = local_28._8_4_;
          *(LONG *)(this + 0x144) = local_1c;
        }
      }
      else if ((local_70 == 0xffffffff) || (local_78.y != 0)) {
        if (local_68 == (CObject *)0x0) {
          CMFCDragFrameImpl::RemoveTabPreDocking
                    ((CMFCDragFrameImpl *)(this + 300),(CDockablePane *)0x0);
          CSmartDockingManager::HidePlace(this_01);
          goto LAB_100b2be5;
        }
      }
      else {
        uVar15 = *(undefined4 *)(this + 0x130);
        uVar2 = *(undefined4 *)(this + 0x134);
        CMFCDragFrameImpl::MoveDragFrame((CMFCDragFrameImpl *)(this + 300),0);
        *(undefined4 *)(this + 0x130) = uVar15;
        *(undefined4 *)(this + 0x134) = uVar2;
      }
      if (((uint)local_54 & 0x80) == 0) {
        AfxGetModuleState();
        hCursor = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f86);
        SetCursor(hCursor);
      }
    }
  }
  else {
    CMFCDragFrameImpl::MoveDragFrame((CMFCDragFrameImpl *)(this + 300),0);
  }
  _DAT_10201954 = 0;
LAB_100b2cd6:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

