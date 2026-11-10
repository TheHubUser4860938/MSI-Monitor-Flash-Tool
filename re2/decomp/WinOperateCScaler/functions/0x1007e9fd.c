// rea decompile_all
// name: CMFCTabCtrl::SetActiveTab
// address: 0x1007e9fd
// body: available
// range: 0x1007e9fd-0x1007ef11 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CMFCTabCtrl::SetActiveTab(int)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCTabCtrl::SetActiveTab(CMFCTabCtrl *this,int param_1)

{
  int iVar1;
  CFrameWnd *pCVar2;
  CObject *pCVar3;
  HWND pHVar4;
  CWnd *pCVar5;
  undefined4 uVar6;
  HMENU pHVar7;
  CMenu *pCVar8;
  BOOL BVar9;
  RECT *lprcUpdate;
  CWnd *this_00;
  CObject *pCVar10;
  int *piVar11;
  uint uVar12;
  code *pcVar13;
  tagRECT *ptVar14;
  tagMENUITEMINFOW local_68;
  CWnd *local_38;
  CObject *local_34;
  int local_30;
  CWnd *local_2c;
  int local_28;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x58;
  local_8 = 0x1007ea09;
  if (((-1 < param_1) && (param_1 < *(int *)(this + 0xbc))) && (param_1 < *(int *)(this + 0x9c))) {
    local_34 = *(CObject **)(this + 0xc0);
    if (local_34 == (CObject *)param_1) {
      pcVar13 = *(code **)(*(int *)this + 0x2f0);
      guard_check_icall();
      iVar1 = (*pcVar13)();
      if (iVar1 != 0) {
        ActivateMDITab(this,*(int *)(this + 0xc0));
      }
    }
    else {
      pcVar13 = *(code **)(*(int *)this + 0x274);
      guard_check_icall(param_1);
      iVar1 = (*pcVar13)();
      if (iVar1 == 0) {
        pCVar2 = CWnd::GetParentFrame((CWnd *)this);
        pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWndEx_101bd3e8,
                                    (CObject *)pCVar2);
        local_30 = 0;
        if ((pCVar3 != (CObject *)0x0) && (*(int *)(this + 0x138) != 0)) {
          if ((*(int *)(pCVar3 + 0x154) == 0) && (DAT_1020191c == 0)) {
            local_30 = 1;
          }
          else {
            local_30 = 0;
          }
        }
        iVar1 = local_30;
        pHVar4 = GetParent(*(HWND *)(this + 0x20));
        local_2c = CWnd::FromHandle(pHVar4);
        if ((1 < *(int *)(this + 0xbc)) && (iVar1 != 0)) {
          SendMessageW(*(HWND *)(local_2c + 0x20),0xb,0,0);
        }
        if ((*(int *)(this + 0xc0) != -1) && (*(int *)(this + 0x120) != 0)) {
          pcVar13 = *(code **)(*(int *)this + 0x210);
          guard_check_icall();
          pCVar5 = (CWnd *)(*pcVar13)();
          if (pCVar5 != (CWnd *)0x0) {
            CWnd::ShowWindow(pCVar5,0);
          }
        }
        *(int *)(this + 0xc0) = param_1;
        HideActiveWindowHorzScrollBar(this);
        pcVar13 = *(code **)(*(int *)this + 0x210);
        guard_check_icall();
        pCVar5 = (CWnd *)(*pcVar13)();
        local_38 = pCVar5;
        if (pCVar5 == (CWnd *)0x0) {
          SendMessageW(*(HWND *)(local_2c + 0x20),0xb,1,0);
        }
        else {
          CWnd::ShowWindow(pCVar5,5);
          if (*(int *)(this + 0x120) == 0) {
            BringWindowToTop(*(HWND *)(pCVar5 + 0x20));
          }
          if (*(int *)(this + 0x274) != 0) {
            CWnd::SetWindowPos(pCVar5,(CWnd *)0x0,-1,-1,
                               (*(int *)(this + 0x2f4) - *(int *)(this + 0x2ec)) + 1,
                               *(int *)(this + 0x2f8) - *(int *)(this + 0x2f0),0x16);
            CWnd::SetWindowPos(pCVar5,(CWnd *)0x0,-1,-1,
                               *(int *)(this + 0x2f4) - *(int *)(this + 0x2ec),
                               *(int *)(this + 0x2f8) - *(int *)(this + 0x2f0),0x16);
          }
          pcVar13 = *(code **)(*(int *)this + 0x224);
          guard_check_icall(*(undefined4 *)(this + 0xc0));
          (*pcVar13)();
          if (*(int *)(this + 0x250) != 0) {
            SynchronizeScrollBar(this,(tagSCROLLINFO *)0x0);
          }
          pHVar4 = GetParent(*(HWND *)(this + 0x20));
          pCVar5 = CWnd::FromHandle(pHVar4);
          pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CTabbedPane_102019c8,(CObject *)pCVar5
                                     );
          if (pCVar3 != (CObject *)0x0) {
            pcVar13 = *(code **)(*(int *)pCVar3 + 0x3e4);
            guard_check_icall();
            iVar1 = (*pcVar13)();
            if (iVar1 != 0) {
              uVar6 = FUN_1001e20a();
              FUN_1001d224(uVar6);
              local_8 = 0;
              pcVar13 = *(code **)(*(int *)this + 0x1bc);
              guard_check_icall(*(undefined4 *)(this + 0xc0),&local_28);
              (*pcVar13)();
              FUN_1002da47(local_28);
              pcVar13 = *(code **)(*(int *)pCVar3 + 0x168);
              guard_check_icall();
              iVar1 = (*pcVar13)();
              pCVar5 = (CWnd *)pCVar3;
              if (iVar1 == 0) {
                pHVar4 = GetParent(*(HWND *)(pCVar3 + 0x20));
                pCVar5 = CWnd::FromHandle(pHVar4);
              }
              if (pCVar5 != (CWnd *)0x0) {
                RedrawWindow(*(HWND *)(pCVar5 + 0x20),(RECT *)0x0,(HRGN)0x0,0x401);
              }
              local_8 = 0xffffffff;
              ATL::CStringData::Release((CStringData *)(local_28 + -0x10));
            }
          }
          if ((*(int *)(this + 0x288) != 0) || (*(int *)(this + 0x28c) != 0)) {
            pcVar13 = *(code **)(*(int *)this + 0x184);
            guard_check_icall();
            (*pcVar13)();
          }
          InvalidateRect(*(HWND *)(this + 0x20),(RECT *)0x0,1);
          UpdateWindow(*(HWND *)(this + 0x20));
          pCVar5 = local_38;
          if (local_34 != (CObject *)0xffffffff) {
            local_34 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CView_101b73d8,(CObject *)local_38
                                         );
            if (local_34 == (CObject *)0x0) {
              if (DAT_102016a8 != 0) {
                CWnd::SetFocus(pCVar5);
              }
            }
            else {
              pCVar2 = AFXGetParentFrame((CWnd *)local_34);
              CFrameWnd::SetActiveView(pCVar2,(CView *)local_34,1);
            }
          }
          if ((this != (CMFCTabCtrl *)0xffffddb0) && (*(int *)(this + 0x2270) != 0)) {
            local_28 = 1;
            pHVar7 = GetSystemMenu(*(HWND *)(pCVar5 + 0x20),0);
            pCVar8 = CMenu::FromHandle(pHVar7);
            iVar1 = local_28;
            if ((pCVar8 != (CMenu *)0x0) && (pHVar7 = *(HMENU *)(pCVar8 + 4), pHVar7 != (HMENU)0x0))
            {
              _memset(&local_68,0,0x30);
              local_68.cbSize = 0x30;
              local_68.fMask = 1;
              BVar9 = GetMenuItemInfoW(pHVar7,0xf060,0,&local_68);
              if ((BVar9 == 0) || (iVar1 = local_28, ((byte)local_68.fState & 3) != 0)) {
                iVar1 = 0;
              }
            }
            CWnd::EnableWindow((CWnd *)(this + 0x2250),iVar1);
          }
          pcVar13 = *(code **)(*(int *)this + 0x270);
          guard_check_icall(*(undefined4 *)(this + 0xc0));
          (*pcVar13)();
          pCVar5 = local_2c;
          if ((1 < *(int *)(this + 0xbc)) && (local_30 != 0)) {
            SendMessageW(*(HWND *)(local_2c + 0x20),0xb,1,0);
            lprcUpdate = (RECT *)0x0;
            if (*(int *)(this + 0x1f0) != 0) {
              local_24.left = 0;
              local_24.top = 0;
              local_24.right = 0;
              local_24.bottom = 0;
              GetWindowRect(*(HWND *)(this + 0x20),&local_24);
              ptVar14 = &local_24;
              pHVar4 = GetParent(*(HWND *)(this + 0x20));
              this_00 = CWnd::FromHandle(pHVar4);
              CWnd::ScreenToClient(this_00,ptVar14);
              lprcUpdate = &local_24;
            }
            RedrawWindow(*(HWND *)(pCVar5 + 0x20),lprcUpdate,(HRGN)0x0,0x185);
          }
          if ((*(int *)(this + 0xc0) != -1) && (pCVar3 != (CObject *)0x0)) {
            pcVar13 = *(code **)(*(int *)this + 0x1b0);
            guard_check_icall(*(int *)(this + 0xc0));
            pCVar10 = (CObject *)(*pcVar13)();
            local_2c = (CWnd *)AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBasePane_101b236c,pCVar10
                                                 );
            if (local_2c != (CWnd *)0x0) {
              pcVar13 = *(code **)(*(int *)local_2c + 0x228);
              guard_check_icall(0);
              piVar11 = (int *)(*pcVar13)();
              pcVar13 = *(code **)(*(int *)local_2c + 0x1c4);
              guard_check_icall();
              uVar12 = (*pcVar13)();
              if ((uVar12 & 0x10) == 0) {
                *(uint *)(pCVar3 + 0xa0) = *(uint *)(pCVar3 + 0xa0) & 0xffffffef;
                if (piVar11 == (int *)0x0) goto LAB_1007eb5a;
                pcVar13 = *(code **)(*piVar11 + 0x1f8);
              }
              else {
                *(uint *)(pCVar3 + 0xa0) = *(uint *)(pCVar3 + 0xa0) | 0x10;
                if (piVar11 == (int *)0x0) goto LAB_1007eb5a;
                pcVar13 = *(code **)(*piVar11 + 500);
              }
              guard_check_icall();
              (*pcVar13)();
            }
          }
        }
      }
    }
  }
LAB_1007eb5a:
  iVar1 = FUN_10154478();
  return iVar1;
}

