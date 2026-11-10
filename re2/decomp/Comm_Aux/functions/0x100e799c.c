// rea decompile_all
// name: CFrameWndEx::PreTranslateMessage
// address: 0x100e799c
// body: available
// range: 0x100e799c-0x100e7d47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CFrameWndEx::PreTranslateMessage(struct tagMSG *)
   
   Library: Visual Studio 2015 Release */

int __thiscall CFrameWndEx::PreTranslateMessage(CFrameWndEx *this,tagMSG *param_1)

{
  uint uVar1;
  CSmartDockingManager *this_00;
  tagPOINT tVar2;
  SHORT SVar3;
  int iVar4;
  AFX_GLOBAL_DATA *pAVar5;
  BOOL BVar6;
  HWND pHVar7;
  CWnd *pCVar8;
  CObject *pCVar9;
  CWnd *pCVar10;
  UINT Msg;
  tagPOINT local_1c;
  uint local_14;
  HIMC local_10;
  int local_c;
  int local_8;
  
  uVar1 = param_1->message;
  local_8 = 1;
  if (uVar1 < 0x106) {
    if (uVar1 == 0x105) {
      if ((*(CMFCRibbonBar **)(this + 0x230) != (CMFCRibbonBar *)0x0) &&
         (iVar4 = CMFCRibbonBar::OnSysKeyUp
                            (*(CMFCRibbonBar **)(this + 0x230),(CFrameWnd *)this,param_1->wParam,
                             param_1->lParam), iVar4 != 0)) {
        return 1;
      }
      SVar3 = GetKeyState(0x11);
      local_14 = (uint)SVar3;
      SVar3 = GetKeyState(0x10);
      local_1c.y = (LONG)SVar3;
      local_10 = ImmGetContext(*(HWND *)(this + 0x20));
      if (local_10 == (HIMC)0x0) {
LAB_100e7bba:
        local_c = 0;
      }
      else {
        BVar6 = ImmGetOpenStatus(local_10);
        local_c = 1;
        if (BVar6 == 0) goto LAB_100e7bba;
      }
      if (local_10 != (HIMC)0x0) {
        ImmReleaseContext(*(HWND *)(this + 0x20),local_10);
      }
      if ((*(int *)(this + 0x1e0) != 0) &&
         ((param_1->wParam == 0x12 ||
          ((((param_1->wParam == 0x79 && ((local_14 & 0x8000) == 0)) &&
            ((local_1c.y & 0x8000U) == 0)) && (local_c == 0)))))) {
        pHVar7 = GetFocus();
        pCVar10 = CWnd::FromHandle(pHVar7);
        pCVar8 = *(CWnd **)(this + 0x1e0);
        if (((pCVar8 != pCVar10) && (this = (CFrameWndEx *)pCVar8, param_1->wParam != 0x12)) &&
           ((param_1->lParam & 0x20000000U) != 0)) {
          return 1;
        }
        CWnd::SetFocus((CWnd *)this);
        return 1;
      }
      if (DAT_1020f8f4 == (CObject *)0x0) goto LAB_100e7ac1;
      iVar4 = IsWindow(*(HWND *)(DAT_1020f8f4 + 0x20));
    }
    else if (uVar1 < 0xa9) {
      if (uVar1 < 0xa7) {
        if (uVar1 == 0x7b) goto LAB_100e7a4e;
        if ((uVar1 < 0xa1) || ((0xa2 < uVar1 && (1 < uVar1 - 0xa4)))) goto LAB_100e7ac1;
      }
      iVar4 = FUN_10117fcb(uVar1,(int)(short)param_1->lParam,
                           (int)*(short *)((int)&param_1->lParam + 2),param_1->hwnd);
    }
    else {
      if (uVar1 == 0x100) {
        iVar4 = CFrameImpl::IsHelpKey(param_1);
        if ((iVar4 == 0) && (iVar4 = FUN_10117d02(param_1->wParam,&local_8), iVar4 != 0)) {
          return 1;
        }
        if (param_1->wParam == 0x1b) {
          if (*(int *)(this + 0x204) != 0) {
            CFullScreenImpl::RestoreState((CFullScreenImpl *)(this + 0x1ec),(CFrameWnd *)this);
          }
          this_00 = *(CSmartDockingManager **)(this + 0x3f0);
          if (((this_00 != (CSmartDockingManager *)0x0) && (*(int *)(this_00 + 8) != 0)) &&
             (*(int *)(this_00 + 4) != 0)) {
            CSmartDockingManager::CauseCancelMode(this_00);
          }
          pHVar7 = GetCapture();
          pCVar8 = CWnd::FromHandle(pHVar7);
          pCVar9 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPaneDivider_101d4408,
                                      (CObject *)pCVar8);
          if (pCVar9 != (CObject *)0x0) {
            Msg = 0x1f;
            goto LAB_100e7aa3;
          }
        }
        if (local_8 == 0) {
          return 0;
        }
        goto LAB_100e7ac1;
      }
      if (uVar1 != 0x104) goto LAB_100e7ac1;
      if ((*(CMFCRibbonBar **)(this + 0x230) != (CMFCRibbonBar *)0x0) &&
         (iVar4 = CMFCRibbonBar::OnSysKeyDown
                            (*(CMFCRibbonBar **)(this + 0x230),(CFrameWnd *)this,param_1->wParam,
                             param_1->lParam), iVar4 != 0)) {
        return 1;
      }
LAB_100e7a4e:
      pAVar5 = GetGlobalData();
      if ((*(int *)(pAVar5 + 0x1a4) == 0) &&
         (pAVar5 = GetGlobalData(), *(int *)(pAVar5 + 0x1a0) == 0)) {
        pAVar5 = GetGlobalData();
        *(undefined4 *)(pAVar5 + 0x1a0) = 1;
        FUN_10099e0e();
      }
      if (((DAT_1020f8f4 != (CObject *)0x0) &&
          (BVar6 = IsWindow(*(HWND *)(DAT_1020f8f4 + 0x20)), BVar6 != 0)) &&
         (param_1->wParam == 0x12)) {
        Msg = 0x10;
        pCVar9 = DAT_1020f8f4;
LAB_100e7aa3:
        SendMessageW(*(HWND *)(pCVar9 + 0x20),Msg,0,0);
        return 1;
      }
      iVar4 = FUN_10117d02(param_1->wParam,0);
    }
  }
  else {
    if (uVar1 != 0x200) {
      if (uVar1 != 0x201) {
        if (uVar1 < 0x204) goto LAB_100e7ac1;
        if (0x205 < uVar1) {
          if (uVar1 < 0x207) goto LAB_100e7ac1;
          if (0x208 < uVar1) {
            if (uVar1 != 0x20a) goto LAB_100e7ac1;
            iVar4 = CFrameImpl::ProcessMouseWheel
                              ((CFrameImpl *)(this + 0x134),param_1->wParam,param_1->lParam);
            goto LAB_100e7abd;
          }
        }
      }
      local_1c.x = (LONG)(short)param_1->lParam;
      local_1c.y = (LONG)*(short *)((int)&param_1->lParam + 2);
      pCVar8 = CWnd::FromHandle(param_1->hwnd);
      if ((pCVar8 != (CWnd *)0x0) && (BVar6 = IsWindow(param_1->hwnd), BVar6 != 0)) {
        ClientToScreen(*(HWND *)(pCVar8 + 0x20),&local_1c);
      }
      iVar4 = FUN_10117fcb(param_1->message,local_1c.x,local_1c.y,param_1->hwnd);
      if (iVar4 != 0) {
        return 1;
      }
      BVar6 = IsWindow(param_1->hwnd);
      if (BVar6 == 0) {
        return 1;
      }
      goto LAB_100e7ac1;
    }
    local_1c.x = (LONG)(short)param_1->lParam;
    local_1c.y = (LONG)*(short *)((int)&param_1->lParam + 2);
    pCVar8 = CWnd::FromHandle(param_1->hwnd);
    if (pCVar8 != (CWnd *)0x0) {
      ClientToScreen(*(HWND *)(pCVar8 + 0x20),&local_1c);
    }
    tVar2.y = local_1c.y;
    tVar2.x = local_1c.x;
    iVar4 = CFrameImpl::ProcessMouseMove((CFrameImpl *)(this + 0x134),tVar2);
  }
LAB_100e7abd:
  if (iVar4 != 0) {
    return 1;
  }
LAB_100e7ac1:
  iVar4 = FUN_100bda37(param_1);
  return iVar4;
}

