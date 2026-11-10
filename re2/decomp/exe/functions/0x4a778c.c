// rea decompile_all
// name: CDockablePane::OnLButtonUp
// address: 0x4a778c
// body: available
// range: 0x4a778c-0x4a7be6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4a77e4 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: void __thiscall CDockablePane::OnLButtonUp(unsigned int,class CPoint)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CDockablePane::OnLButtonUp
          (CDockablePane *this,undefined4 param_1,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  HWND hWnd;
  SHORT SVar2;
  CWnd *pCVar3;
  CPaneDivider *pCVar4;
  CObject *pCVar5;
  CObject *pCVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  CMFCCaptionButton *pCVar10;
  ulong uVar11;
  BOOL BVar12;
  code *pcVar13;
  LONG LVar14;
  CObList local_5c [4];
  CDockingManager *local_58;
  CDockingManager *local_40;
  CObject *local_3c;
  CPaneDivider *local_38;
  tagRECT local_34;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x4c;
  local_8 = 0x4a7798;
  if (this[0x2c8] != (CDockablePane)0x0) {
    this[0x2c8] = (CDockablePane)0x0;
  }
  if (*(int *)(this + 0x35c) == 0) {
    CPane::OnLButtonUp((CPane *)this,param_1,param_3,param_4);
    goto LAB_004a7bdf;
  }
  pcVar13 = *(code **)(*(int *)this + 0x19c);
  guard_check_icall();
  pCVar3 = (CWnd *)(*pcVar13)();
  local_40 = CGlobalUtils::GetDockingManager((CGlobalUtils *)&PTR_vftable_0060c45c,pCVar3);
  if ((local_40 == (CDockingManager *)0x0) && (DAT_0060c460 == 0)) {
LAB_004a77e4:
                    /* WARNING: Subroutine does not return */
    FUN_00429127();
  }
  local_3c = *(CObject **)(this + 0x35c);
  pCVar5 = *(CObject **)(this + 0x358);
  pcVar13 = *(code **)(*(int *)this + 0x38c);
  guard_check_icall();
  (*pcVar13)();
  pCVar4 = GetDefaultPaneDivider(this);
  local_38 = pCVar4;
  if (pCVar5 != local_3c) goto LAB_004a784b;
  if (local_3c == (CObject *)0x8) {
    if ((DAT_00616010 != 0) &&
       (pCVar10 = FindButtonByHit(this,8), local_3c = (CObject *)pCVar10,
       pCVar10 != (CMFCCaptionButton *)0x0)) {
      pcVar13 = *(code **)(*(int *)pCVar10 + 0xc);
      guard_check_icall(&local_34);
      (*pcVar13)();
      local_24.left = 0;
      local_24.top = 0;
      local_24.right = 0;
      local_24.bottom = 0;
      GetWindowRect(*(HWND *)(this + 0x20),&local_24);
      CWnd::ScreenToClient((CWnd *)this,&local_24);
      OffsetRect(&local_34,local_24.left,local_24.top);
      CWnd::ClientToScreen((CWnd *)this,&local_34);
      LVar14 = local_34.left;
      *(undefined4 *)(pCVar10 + 0x14) = 1;
      local_40 = (CDockingManager *)(local_34.bottom + 1);
      uVar11 = CWnd::GetExStyle((CWnd *)this);
      if ((uVar11 & 0x400000) != 0) {
        LVar14 = LVar14 + (local_34.right - local_34.left);
      }
      hWnd = *(HWND *)(this + 0x20);
      pcVar13 = *(code **)(*(int *)this + 0x2e4);
      guard_check_icall(LVar14,local_40);
      (*pcVar13)();
      BVar12 = IsWindow(hWnd);
      if (BVar12 != 0) {
        *(undefined4 *)(local_3c + 0x14) = 0;
        RedrawButton(this,(CMFCCaptionButton *)local_3c);
      }
    }
    goto LAB_004a7bdf;
  }
  if (local_3c == (CObject *)0x9) {
    SVar2 = GetAsyncKeyState(0x11);
    if (SVar2 != 0) {
      pcVar13 = *(code **)(*(int *)this + 0x340);
      guard_check_icall();
      iVar7 = (*pcVar13)();
      pCVar4 = local_38;
      if (iVar7 != 0) {
        SendMessageW(*(HWND *)(*(int *)(this + 0xa4) + 0x20),0xb,0,0);
        if (*(int *)(this + 0x2f8) == 0) {
          CObList::CObList(local_5c,10);
          local_8 = 0;
          CPaneDivider::GetPanes(local_38,local_5c);
          while (local_58 != (CDockingManager *)0x0) {
            if (local_58 == (CDockingManager *)0x0) goto LAB_004a77e4;
            local_40 = *(CDockingManager **)local_58;
            pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_0060c780,
                                        *(CObject **)(local_58 + 8));
            pcVar13 = *(code **)(*(int *)pCVar5 + 0x340);
            local_3c = pCVar5;
            guard_check_icall();
            iVar7 = (*pcVar13)();
            local_58 = local_40;
            if (iVar7 != 0) {
              iVar7 = *(int *)pCVar5;
              pcVar13 = *(code **)(*(int *)local_38 + 0x194);
              guard_check_icall(0,0);
              uVar8 = (*pcVar13)();
              guard_check_icall(1,uVar8);
              (**(code **)(iVar7 + 0x368))();
              local_58 = local_40;
            }
          }
          local_8 = 0xffffffff;
          CObList::~CObList(local_5c);
        }
        else {
          pcVar13 = *(code **)(**(int **)(this + 0x330) + 0x1a0);
          guard_check_icall();
          pCVar5 = (CObject *)(*pcVar13)();
          pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CAutoHideDockSite_005c83f8,pCVar5);
          if (pCVar5 != (CObject *)0x0) {
            CAutoHideDockSite::UnSetAutoHideMode((CAutoHideDockSite *)pCVar5,(CMFCAutoHideBar *)0x0)
            ;
          }
        }
        SendMessageW(*(HWND *)(*(int *)(this + 0xa4) + 0x20),0xb,1,0);
        pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CFrameWnd_005c363c,
                                    *(CObject **)(this + 0xa4));
        if (pCVar5 != (CObject *)0x0) {
          pcVar13 = *(code **)(*(int *)pCVar5 + 0x178);
          guard_check_icall(1);
          (*pcVar13)();
        }
        RedrawWindow(*(HWND *)(*(int *)(this + 0xa4) + 0x20),(RECT *)0x0,(HRGN)0x0,0x181);
        goto LAB_004a7bdf;
      }
    }
    if ((local_40 != (CDockingManager *)0x0) && (pCVar4 != (CPaneDivider *)0x0)) {
      uVar1 = *(uint *)(local_40 + 0x11c);
      pcVar13 = *(code **)(*(int *)pCVar4 + 0x194);
      guard_check_icall();
      uVar9 = (*pcVar13)();
      if ((uVar1 & uVar9) != 0) {
        iVar7 = *(int *)this;
        pcVar13 = *(code **)(*(int *)local_38 + 0x194);
        guard_check_icall(0,1);
        uVar8 = (*pcVar13)();
        guard_check_icall(*(int *)(this + 0x2f8) == 0,uVar8);
        (**(code **)(iVar7 + 0x368))();
      }
    }
    goto LAB_004a7bdf;
  }
  if (local_3c == (CObject *)0x13) {
    pCVar5 = DAT_0061620c;
    if ((DAT_0061620c != (CObject *)0x0) ||
       (pCVar5 = (CObject *)CWnd::GetTopLevelFrame((CWnd *)this), pCVar5 != (CObject *)0x0)) {
      pCVar6 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWndEx_005bad18,pCVar5);
      if (pCVar6 == (CObject *)0x0) {
        pCVar6 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CFrameWndEx_005ba788,pCVar5);
        if (pCVar6 == (CObject *)0x0) {
          pCVar6 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_COleIPFrameWndEx_005c15c4,pCVar5);
          if ((pCVar6 == (CObject *)0x0) &&
             (pCVar6 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_COleDocIPFrameWndEx_005c1980,
                                          pCVar5), pCVar6 == (CObject *)0x0)) goto LAB_004a78ea;
          pcVar13 = *(code **)(*(int *)pCVar6 + 0x210);
        }
        else {
          pcVar13 = *(code **)(*(int *)pCVar6 + 0x1f8);
        }
      }
      else {
        pcVar13 = *(code **)(*(int *)pCVar6 + 0x218);
      }
      guard_check_icall(this);
      iVar7 = (*pcVar13)();
      if (iVar7 == 0) goto LAB_004a784b;
    }
LAB_004a78ea:
    pcVar13 = *(code **)(*(int *)this + 0x2dc);
    guard_check_icall();
    (*pcVar13)();
  }
  else {
    pcVar13 = *(code **)(*(int *)this + 0x37c);
    guard_check_icall(local_3c);
    (*pcVar13)();
  }
LAB_004a784b:
  FUN_0042ec70();
LAB_004a7bdf:
  FUN_0055bae6();
  return;
}

