// rea decompile_all
// name: CMDIFrameWndEx::PreTranslateMessage
// address: 0x100ea5a3
// body: available
// range: 0x100ea5a3-0x100ea916 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMDIFrameWndEx::PreTranslateMessage(struct tagMSG *)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMDIFrameWndEx::PreTranslateMessage(CMDIFrameWndEx *this,tagMSG *param_1)

{
  uint uVar1;
  CSmartDockingManager *this_00;
  tagPOINT tVar2;
  SHORT SVar3;
  CMFCPopupMenu *pCVar4;
  AFX_GLOBAL_DATA *pAVar5;
  int iVar6;
  HWND pHVar7;
  CWnd *pCVar8;
  BOOL BVar9;
  CWnd *pCVar10;
  UINT Msg;
  tagPOINT local_18;
  uint local_10;
  HIMC local_c;
  int local_8;
  
  uVar1 = param_1->message;
  if (uVar1 < 0x106) {
    if (uVar1 == 0x105) {
      if ((*(CMFCRibbonBar **)(this + 0x44c) != (CMFCRibbonBar *)0x0) &&
         (iVar6 = CMFCRibbonBar::OnSysKeyUp
                            (*(CMFCRibbonBar **)(this + 0x44c),(CFrameWnd *)this,param_1->wParam,
                             param_1->lParam), iVar6 != 0)) {
        return 1;
      }
      SVar3 = GetKeyState(0x11);
      local_10 = (uint)SVar3;
      SVar3 = GetKeyState(0x10);
      local_18.y = (LONG)SVar3;
      local_c = ImmGetContext(*(HWND *)(this + 0x20));
      if (local_c == (HIMC)0x0) {
LAB_100ea79a:
        local_8 = 0;
      }
      else {
        BVar9 = ImmGetOpenStatus(local_c);
        local_8 = 1;
        if (BVar9 == 0) goto LAB_100ea79a;
      }
      if (local_c != (HIMC)0x0) {
        ImmReleaseContext(*(HWND *)(this + 0x20),local_c);
      }
      if ((*(int *)(this + 0x3fc) != 0) &&
         ((param_1->wParam == 0x12 ||
          ((((param_1->wParam == 0x79 && ((local_10 & 0x8000) == 0)) &&
            ((local_18.y & 0x8000U) == 0)) && (local_8 == 0)))))) {
        pHVar7 = GetFocus();
        pCVar10 = CWnd::FromHandle(pHVar7);
        pCVar8 = *(CWnd **)(this + 0x3fc);
        if (((pCVar8 != pCVar10) && (this = (CMDIFrameWndEx *)pCVar8, param_1->wParam != 0x12)) &&
           ((param_1->lParam & 0x20000000U) != 0)) {
          return 1;
        }
        CWnd::SetFocus((CWnd *)this);
        return 1;
      }
      pCVar4 = CMFCPopupMenu::GetSafeActivePopupMenu();
    }
    else if (uVar1 < 0xa9) {
      if (uVar1 < 0xa7) {
        if (uVar1 == 0x7b) goto LAB_100ea650;
        if ((uVar1 < 0xa1) || ((0xa2 < uVar1 && (1 < uVar1 - 0xa4)))) goto LAB_100ea6b1;
      }
      pCVar4 = (CMFCPopupMenu *)
               FUN_10118e01(uVar1,(int)(short)param_1->lParam,
                            (int)*(short *)((int)&param_1->lParam + 2),param_1->hwnd);
    }
    else {
      if (uVar1 == 0x100) {
        iVar6 = CFrameImpl::IsHelpKey(param_1);
        if ((iVar6 == 0) && (iVar6 = FUN_10118b38(param_1->wParam,0), iVar6 != 0)) {
          return 1;
        }
        if (param_1->wParam == 0x1b) {
          if (*(int *)(this + 0x420) != 0) {
            CFullScreenImpl::RestoreState((CFullScreenImpl *)(this + 0x408),(CFrameWnd *)this);
          }
          this_00 = *(CSmartDockingManager **)(this + 0x318);
          if (((this_00 != (CSmartDockingManager *)0x0) && (*(int *)(this_00 + 8) != 0)) &&
             (*(int *)(this_00 + 4) != 0)) {
            CSmartDockingManager::CauseCancelMode(this_00);
          }
          pHVar7 = GetCapture();
          pCVar8 = CWnd::FromHandle(pHVar7);
          pCVar4 = (CMFCPopupMenu *)
                   AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPaneDivider_101f8380,
                                      (CObject *)pCVar8);
          if (pCVar4 == (CMFCPopupMenu *)0x0) goto LAB_100ea6b1;
          Msg = 0x1f;
          goto LAB_100ea693;
        }
        goto LAB_100ea6b1;
      }
      if (uVar1 != 0x104) goto LAB_100ea6b1;
      if ((*(CMFCRibbonBar **)(this + 0x44c) != (CMFCRibbonBar *)0x0) &&
         (iVar6 = CMFCRibbonBar::OnSysKeyDown
                            (*(CMFCRibbonBar **)(this + 0x44c),(CFrameWnd *)this,param_1->wParam,
                             param_1->lParam), iVar6 != 0)) {
        return 1;
      }
LAB_100ea650:
      pAVar5 = GetGlobalData();
      if ((*(int *)(pAVar5 + 0x1a4) == 0) &&
         (pAVar5 = GetGlobalData(), *(int *)(pAVar5 + 0x1a0) == 0)) {
        pAVar5 = GetGlobalData();
        *(undefined4 *)(pAVar5 + 0x1a0) = 1;
        FUN_1009b914();
      }
      pCVar4 = CMFCPopupMenu::GetSafeActivePopupMenu();
      if ((pCVar4 != (CMFCPopupMenu *)0x0) && (param_1->wParam == 0x12)) {
        Msg = 0x10;
LAB_100ea693:
        SendMessageW(*(HWND *)(pCVar4 + 0x20),Msg,0,0);
        return 1;
      }
      pCVar4 = (CMFCPopupMenu *)FUN_10118b38(param_1->wParam,0);
    }
  }
  else {
    if (uVar1 != 0x200) {
      if (uVar1 != 0x201) {
        if (uVar1 < 0x204) goto LAB_100ea6b1;
        if (0x205 < uVar1) {
          if (uVar1 < 0x207) goto LAB_100ea6b1;
          if (0x208 < uVar1) {
            if (uVar1 != 0x20a) goto LAB_100ea6b1;
            pCVar4 = (CMFCPopupMenu *)
                     CFrameImpl::ProcessMouseWheel
                               ((CFrameImpl *)(this + 0x350),param_1->wParam,param_1->lParam);
            goto LAB_100ea6ad;
          }
        }
      }
      local_18.x = (LONG)(short)param_1->lParam;
      local_18.y = (LONG)*(short *)((int)&param_1->lParam + 2);
      pCVar8 = CWnd::FromHandle(param_1->hwnd);
      if ((pCVar8 != (CWnd *)0x0) && (BVar9 = IsWindow(param_1->hwnd), BVar9 != 0)) {
        ClientToScreen(*(HWND *)(pCVar8 + 0x20),&local_18);
      }
      iVar6 = FUN_10118e01(param_1->message,local_18.x,local_18.y,param_1->hwnd);
      if (iVar6 != 0) {
        return 1;
      }
      BVar9 = IsWindow(param_1->hwnd);
      if (BVar9 == 0) {
        return 1;
      }
      goto LAB_100ea6b1;
    }
    local_18.x = (LONG)(short)param_1->lParam;
    local_18.y = (LONG)*(short *)((int)&param_1->lParam + 2);
    pCVar8 = CWnd::FromHandle(param_1->hwnd);
    if (pCVar8 != (CWnd *)0x0) {
      ClientToScreen(*(HWND *)(pCVar8 + 0x20),&local_18);
    }
    tVar2.y = local_18.y;
    tVar2.x = local_18.x;
    pCVar4 = (CMFCPopupMenu *)CFrameImpl::ProcessMouseMove((CFrameImpl *)(this + 0x350),tVar2);
  }
LAB_100ea6ad:
  if (pCVar4 != (CMFCPopupMenu *)0x0) {
    return 1;
  }
LAB_100ea6b1:
  iVar6 = CMDIFrameWnd::PreTranslateMessage((CMDIFrameWnd *)this,param_1);
  return iVar6;
}

