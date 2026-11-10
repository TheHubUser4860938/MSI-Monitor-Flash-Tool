// rea decompile_all
// name: CMFCRibbonRichEditCtrl::PreTranslateMessage
// address: 0x49a3d3
// body: available
// range: 0x49a3d3-0x49a8c9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CMFCRibbonRichEditCtrl::PreTranslateMessage(struct tagMSG *)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CMFCRibbonRichEditCtrl::PreTranslateMessage(CMFCRibbonRichEditCtrl *this,tagMSG *param_1)

{
  code *pcVar1;
  uint uVar2;
  ushort uVar3;
  HWND pHVar4;
  CWnd *pCVar5;
  CFrameWnd *pCVar6;
  int iVar7;
  int iVar8;
  LPARAM LVar9;
  UINT Msg;
  WPARAM wParam;
  undefined1 local_24 [12];
  int *local_18;
  CMFCRibbonRichEditCtrl *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x14;
  local_8 = 0x49a3df;
  if (param_1->message == 0x14) {
    return 1;
  }
  local_14[0] = this;
  if (*(int *)(this + 0x8c) == 0) {
    if ((((param_1->message == 0x201) && (local_18 = *(int **)(this + 0x80), local_18[0x79] != 0))
        && (local_18[0x33] == 0)) && (param_1->hwnd != *(HWND *)(this + 0x20))) {
      pcVar1 = *(code **)(*local_18 + 0x224);
      guard_check_icall();
      (*pcVar1)();
    }
    if (param_1->message == 0x200) {
      pcVar1 = *(code **)(**(int **)(this + 0x80) + 0xdc);
      guard_check_icall();
      iVar8 = (*pcVar1)();
      if (iVar8 == 0) {
        iVar8 = GetSystemMetrics(0x17);
        uVar3 = GetAsyncKeyState((iVar8 != 0) + 1);
        if ((uVar3 & 0x8000) != 0) {
          pHVar4 = GetFocus();
          pCVar5 = CWnd::FromHandle(pHVar4);
          if (pCVar5 != (CWnd *)this) {
            return 1;
          }
        }
        if (*(int *)(this + 0x84) == 0) {
          local_24._8_4_ = *(undefined4 *)(this + 0x20);
          *(undefined4 *)(this + 0x84) = 1;
          local_24._0_4_ = 0x10;
          local_24._4_4_ = 2;
          TrackMouseEvent((LPTRACKMOUSEEVENT)local_24);
          RedrawWindow(*(HWND *)(this + 0x20),(RECT *)0x0,(HRGN)0x0,0x105);
        }
        if (*(int *)(this + 0x88) == 0) {
          pcVar1 = *(code **)(**(int **)(this + 0x80) + 0xa4);
          guard_check_icall();
          iVar8 = (*pcVar1)();
          if (iVar8 != 0) {
            local_24._8_4_ = (HWND)0x0;
            local_18 = (int *)0x0;
            GetCursorPos((LPPOINT)(local_24 + 8));
            *(undefined4 *)(this + 0x88) = 1;
            RedrawWindow(*(HWND *)(this + 0x20),(RECT *)0x0,(HRGN)0x0,0x105);
            pcVar1 = *(code **)(**(int **)(this + 0x80) + 0xa4);
            guard_check_icall();
            iVar8 = (*pcVar1)();
            ScreenToClient(*(HWND *)(iVar8 + 0x20),(LPPOINT)(local_24 + 8));
            LVar9 = CONCAT22(local_18._0_2_,local_24._8_2_);
            pcVar1 = *(code **)(**(int **)(local_14[0] + 0x80) + 0xa4);
            guard_check_icall();
            iVar8 = (*pcVar1)();
            SendMessageW(*(HWND *)(iVar8 + 0x20),0x200,0,LVar9);
            this = local_14[0];
          }
        }
      }
    }
    if (param_1->message != 0x100) goto LAB_0049a8bd;
    pcVar1 = *(code **)(**(int **)(this + 0x80) + 0xdc);
    guard_check_icall();
    iVar8 = (*pcVar1)();
    if (iVar8 != 0) goto LAB_0049a8bd;
    iVar8 = ProcessClipboardAccelerators(this,param_1->wParam);
    if (iVar8 != 0) {
      return 1;
    }
    uVar2 = param_1->wParam;
    if (uVar2 == 9) {
      pcVar1 = *(code **)(**(int **)(this + 0x80) + 0xd4);
      guard_check_icall();
      iVar8 = (*pcVar1)();
      if (iVar8 == 0) {
        return 1;
      }
      goto LAB_0049a8bd;
    }
    if (uVar2 != 0xd) {
      if (uVar2 == 0x1b) {
        pcVar1 = *(code **)(**(int **)(this + 0x80) + 0xe4);
        guard_check_icall();
        iVar8 = (*pcVar1)();
        if ((iVar8 != 0) && (DAT_00616b18 != 0)) {
          LVar9 = 0;
          wParam = 0;
          Msg = 0x10;
          pHVar4 = *(HWND *)(DAT_00616b18 + 0x20);
LAB_0049a6af:
          SendMessageW(pHVar4,Msg,wParam,LVar9);
          return 1;
        }
        pcVar1 = *(code **)(**(int **)(this + 0x80) + 0xe4);
        guard_check_icall();
        iVar8 = (*pcVar1)();
        if (iVar8 == 0) {
          FUN_004349b3();
          local_18 = (int *)&stack0xffffffc8;
          FUN_00415ee0(*(int *)(this + 0x90) + -0x10);
          SetEditText();
        }
        pCVar6 = CWnd::GetTopLevelFrame((CWnd *)this);
        if (pCVar6 != (CFrameWnd *)0x0) {
          pcVar1 = *(code **)(**(int **)(this + 0x80) + 0xe4);
          guard_check_icall();
          iVar8 = (*pcVar1)();
          if (iVar8 == 0) {
            pCVar6 = CWnd::GetTopLevelFrame((CWnd *)this);
            CWnd::SetFocus((CWnd *)pCVar6);
            return 1;
          }
        }
      }
      else if (0x20 < uVar2) {
        if ((0x22 < uVar2) && (uVar2 != 0x26)) {
          if (uVar2 != 0x28) goto LAB_0049a8bd;
          if ((*(int **)(this + 0x80))[0x77] != 0) {
            pcVar1 = *(code **)(**(int **)(this + 0x80) + 0xe4);
            guard_check_icall();
            iVar8 = (*pcVar1)();
            if (iVar8 == 0) {
              pcVar1 = *(code **)(**(int **)(this + 0x80) + 0x298);
              guard_check_icall();
              (*pcVar1)();
              return 1;
            }
          }
        }
        pcVar1 = *(code **)(**(int **)(this + 0x80) + 0xe4);
        guard_check_icall();
        iVar8 = (*pcVar1)();
        if (iVar8 != 0) {
          pHVar4 = (HWND)0x0;
          if (DAT_00616b18 != 0) {
            pHVar4 = *(HWND *)(DAT_00616b18 + 0x20);
          }
          LVar9 = param_1->lParam;
          wParam = param_1->wParam;
          Msg = 0x100;
          goto LAB_0049a6af;
        }
      }
      goto LAB_0049a8bd;
    }
    pcVar1 = *(code **)(**(int **)(this + 0x80) + 0xe4);
    guard_check_icall();
    iVar8 = (*pcVar1)();
    if (iVar8 != 0) goto LAB_0049a8bd;
    FUN_004295fe();
    FUN_0040eb30();
    local_8 = 0;
    CWnd::GetWindowTextW
              ((CWnd *)this,
               (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)local_14);
    local_18 = (int *)&stack0xffffffc8;
    FUN_00415ee0(local_14[0] + -0x10);
    SetEditText();
    CMFCRibbonBaseElement::NotifyCommand(*(CMFCRibbonBaseElement **)(this + 0x80),1);
    if (*(int *)(*(int *)(this + 0x80) + 0x94) != 0) {
      pHVar4 = GetParent(*(HWND *)(*(int *)(*(int *)(this + 0x80) + 0x94) + 0x20));
      pCVar5 = CWnd::FromHandle(pHVar4);
      iVar8 = 0;
      if (pCVar5 != (CWnd *)0x0) {
        iVar8 = *(int *)(pCVar5 + 0x20);
      }
      if (DAT_00616b18 == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)(DAT_00616b18 + 0x20);
      }
      if (iVar8 == iVar7) {
        pCVar6 = AFXGetParentFrame(*(CWnd **)(*(int *)(this + 0x80) + 0x94));
        pcVar1 = *(code **)(*(int *)pCVar6 + 0x60);
        guard_check_icall();
        (*pcVar1)();
        goto LAB_0049a875;
      }
    }
    pCVar6 = CWnd::GetTopLevelFrame((CWnd *)this);
    if (pCVar6 != (CFrameWnd *)0x0) {
      *(undefined4 *)(*(int *)(this + 0x80) + 0x1e8) = 0;
      pCVar6 = CWnd::GetTopLevelFrame((CWnd *)this);
      CWnd::SetFocus((CWnd *)pCVar6);
LAB_0049a875:
      FUN_0040efa0();
      return 1;
    }
    local_8 = 0xffffffff;
    FUN_0040efa0();
  }
LAB_0049a8bd:
  iVar8 = CWnd::PreTranslateMessage((CWnd *)this,param_1);
  return iVar8;
}

