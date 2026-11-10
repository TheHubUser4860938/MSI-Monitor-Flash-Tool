// rea decompile_all
// name: CMFCPopupMenu::OnDestroy
// address: 0x10080b2e
// body: available
// range: 0x10080b2e-0x10080e7a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCPopupMenu::OnDestroy(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCPopupMenu::OnDestroy(CMFCPopupMenu *this)

{
  POINT pt;
  CWnd *pCVar1;
  int iVar2;
  CObject *pCVar3;
  CMFCCaptionButton *pCVar4;
  int *piVar5;
  undefined4 uVar6;
  CMFCPopupMenu *pCVar7;
  BOOL BVar8;
  CMFCToolBar *pCVar9;
  HWND pHVar10;
  code *pcVar11;
  tagPOINT local_20;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  if (*(int *)(this + 0x1160) != 0) {
    CMFCMenuBar::SetRecentlyUsedMenus(DAT_101dd2c0);
    pCVar1 = CWnd::GetOwner((CWnd *)this);
    if (pCVar1 != (CWnd *)0x0) {
      iVar2 = FUN_10019d4f(&PTR_s_CPaneFrameWnd_101d38dc);
      if (iVar2 != 0) {
        pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPaneFrameWnd_101d38dc,(CObject *)pCVar1
                                   );
        pCVar4 = CPaneFrameWnd::FindButton((CPaneFrameWnd *)pCVar3,0x19);
        if (pCVar4 != (CMFCCaptionButton *)0x0) {
          *(undefined4 *)(pCVar4 + 4) = 0;
          CPaneFrameWnd::OnNcPaint((CPaneFrameWnd *)pCVar3);
        }
      }
    }
  }
  pcVar11 = *(code **)(*(int *)this + 0x1c8);
  guard_check_icall();
  piVar5 = (int *)(*pcVar11)();
  if ((piVar5[0x343] != 0) && (piVar5[0x2e8] == 0)) {
    iVar2 = *piVar5;
    uVar6 = FUN_1005d1c2(piVar5[0x343]);
    pcVar11 = *(code **)(iVar2 + 0x34c);
    guard_check_icall(uVar6);
    (*pcVar11)();
    piVar5[0x343] = 0;
  }
  if (*(int *)(this + 0x116c) != 0) {
    *(undefined4 *)(*(int *)(this + 0x116c) + 0x9c) = 0;
    pCVar7 = GetParentPopupMenu(this);
    if (pCVar7 != (CMFCPopupMenu *)0x0) {
      pcVar11 = *(code **)(*(int *)pCVar7 + 0x208);
      guard_check_icall();
      iVar2 = (*pcVar11)();
      if (iVar2 != 0) {
        pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCRibbonMiniToolBar_1019c828,
                                    (CObject *)pCVar7);
        if (pCVar3 != (CObject *)0x0) {
          *(undefined4 *)(this + 0x130) = 0;
        }
      }
      if ((*(int *)(this + 0x130) != 0) && (DAT_101daf90 == 0)) {
        local_20.x = 0;
        local_20.y = 0;
        GetCursorPos(&local_20);
        local_18.left = 0;
        local_18.top = 0;
        local_18.right = 0;
        local_18.bottom = 0;
        GetWindowRect(*(HWND *)(pCVar7 + 0x20),&local_18);
        pcVar11 = *(code **)(*(int *)pCVar7 + 0x1d8);
        guard_check_icall();
        iVar2 = (*pcVar11)();
        if (iVar2 == 0) {
          pt.y = local_20.y;
          pt.x = local_20.x;
          BVar8 = PtInRect(&local_18,pt);
          if (BVar8 != 0) goto LAB_10080cba;
        }
        SendMessageW(*(HWND *)(pCVar7 + 0x20),0x10,0,0);
        *(undefined4 *)(this + 0x116c) = 0;
      }
    }
  }
LAB_10080cba:
  if (*(int *)(this + 0x158) == 0) {
    CMFCMenuBar::SetShowAllCommands(0);
  }
  else {
    pcVar11 = *(code **)(*(int *)this + 0x1e0);
    guard_check_icall();
    (*pcVar11)();
    *(undefined4 *)(*(int *)(this + 0x158) + 0x8c) = 0;
    *(undefined4 *)(*(int *)(this + 0x158) + 0x9c) = 0;
    pCVar7 = GetParentPopupMenu(this);
    if (((pCVar7 != (CMFCPopupMenu *)0x0) && (*(int *)(this + 0x130) != 0)) && (DAT_101daf90 == 0))
    {
      SendMessageW(*(HWND *)(pCVar7 + 0x20),0x10,0,0);
      *(undefined4 *)(this + 0x158) = 0;
    }
  }
  if (*(int *)(this + 0x154) != 0) {
    FUN_101034e1(this);
  }
  NotifyParentDlg(this,0);
  pCVar3 = DAT_101dc4c4;
  if (DAT_101dc4c4 == (CObject *)0x0) {
    pCVar3 = (CObject *)CWnd::GetTopLevelFrame((CWnd *)this);
  }
  local_20.y = (LONG)AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWndEx_10192540,pCVar3);
  if ((CObject *)local_20.y == (CObject *)0x0) {
    local_20.y = (LONG)AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CFrameWndEx_10191fb0,pCVar3);
    if ((CObject *)local_20.y == (CObject *)0x0) {
      local_20.y = (LONG)AfxDynamicDownCast((CRuntimeClass *)&PTR_s_COleIPFrameWndEx_10192b50,pCVar3
                                           );
      if ((CObject *)local_20.y == (CObject *)0x0) {
        local_20.y = (LONG)AfxDynamicDownCast((CRuntimeClass *)&PTR_s_COleDocIPFrameWndEx_10192f08,
                                              pCVar3);
        if ((CObject *)local_20.y == (CObject *)0x0) goto LAB_10080dd1;
      }
      pcVar11 = *(code **)(*(int *)local_20.y + 500);
    }
    else {
      pcVar11 = *(code **)(*(int *)local_20.y + 0x1d8);
    }
  }
  else {
    pcVar11 = *(code **)(*(int *)local_20.y + 0x1ec);
  }
  guard_check_icall(this);
  (*pcVar11)();
LAB_10080dd1:
  if (*(int *)(this + 0xf3c) != 0) {
    DAT_101dc384 = (CMFCPopupMenu *)(-(uint)(DAT_101dc384 != this) & (uint)DAT_101dc384);
  }
  if (((DAT_101daf90 == 0) && (pCVar3 != (CObject *)0x0)) && (DAT_101dc384 == (CMFCPopupMenu *)0x0))
  {
    pCVar9 = GetParentToolBar(this);
    if (pCVar9 != (CMFCToolBar *)0x0) {
      pHVar10 = GetFocus();
      pCVar1 = CWnd::FromHandle(pHVar10);
      pCVar9 = GetParentToolBar(this);
      if (pCVar9 != (CMFCToolBar *)pCVar1) {
        pCVar9 = GetParentToolBar(this);
        pcVar11 = *(code **)(*(int *)pCVar9 + 0x360);
        guard_check_icall();
        (*pcVar11)();
      }
    }
  }
  piVar5 = *(int **)(this + 0x1070);
  if ((piVar5 != (int *)0x0) && (piVar5[8] != 0)) {
    pcVar11 = *(code **)(*piVar5 + 0x60);
    guard_check_icall();
    (*pcVar11)();
  }
  CFrameWnd::OnDestroy((CFrameWnd *)this);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

