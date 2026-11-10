// rea decompile_all
// name: FUN_100b5163
// address: 0x100b5163
// body: available
// range: 0x100b5163-0x100b5467 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100b5463 to 0x1001d023 FUN_1001d023 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100b5163(CWnd *param_1)

{
  code *pcVar1;
  CWnd *pCVar2;
  CObject *pCVar3;
  BOOL BVar4;
  HWND pHVar5;
  CWnd *pCVar6;
  int iVar7;
  CFrameWnd *pCVar8;
  CObject *pCVar9;
  CWnd *in_ECX;
  tagMSG local_64;
  int local_48;
  HWND local_44;
  int local_40;
  CWnd *local_3c;
  int local_38;
  undefined1 local_34 [16];
  DWORD DStack_24;
  int local_20;
  int local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  if (param_1 == (CWnd *)0x0) {
    local_44 = (HWND)0x0;
  }
  else {
    local_44 = *(HWND *)(param_1 + 0x20);
  }
  local_3c = in_ECX;
  CWnd::ShowWindow(param_1,0);
  iVar7 = *(int *)(param_1 + 0x158);
  if ((iVar7 != 0) && (local_40 = *(int *)(iVar7 + 0x6c), local_40 != 0)) {
    local_34._12_4_ = *(LPARAM *)(iVar7 + 0x54);
    DStack_24 = *(DWORD *)(iVar7 + 0x58);
    local_20 = *(int *)(iVar7 + 0x5c);
    local_1c = *(int *)(iVar7 + 0x60);
    InflateRect((LPRECT)(local_34 + 0xc),4,4);
    iVar7 = local_40;
    InvalidateRect(*(HWND *)(local_40 + 0x20),(RECT *)(local_34 + 0xc),1);
    UpdateWindow(*(HWND *)(iVar7 + 0x20));
    in_ECX = local_3c;
  }
  pcVar1 = *(code **)(*(int *)in_ECX + 0x1a8);
  guard_check_icall();
  pCVar3 = (CObject *)(*pcVar1)();
  pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBasePane_101b236c,pCVar3);
  if (pCVar3 == (CObject *)0x0) goto LAB_100b5450;
  while (BVar4 = PeekMessageW(&local_64,(HWND)0x0,0xf,0xf,0), BVar4 != 0) {
    BVar4 = GetMessageW(&local_64,(HWND)0x0,0xf,0xf);
    if (BVar4 == 0) goto LAB_100b5450;
    DispatchMessageW(&local_64);
  }
  pHVar5 = GetCapture();
  if (pHVar5 != (HWND)0x0) goto LAB_100b5450;
  pHVar5 = SetCapture(*(HWND *)(pCVar3 + 0x20));
  CWnd::FromHandle(pHVar5);
  pHVar5 = GetCapture();
  pCVar6 = CWnd::FromHandle(pHVar5);
  pCVar2 = local_3c;
  if (pCVar3 != (CObject *)pCVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_1001d023();
  }
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  local_38 = 0;
  GetWindowRect(*(HWND *)(local_3c + 0x20),&local_18);
  iVar7 = (local_18.right + local_18.left) / 2;
  local_48 = iVar7 - local_18.left;
  local_40 = (local_18.top + 5) - local_18.top;
  SetCursorPos(iVar7,local_18.top + 5);
  do {
    while( true ) {
      pHVar5 = GetCapture();
      pCVar6 = CWnd::FromHandle(pHVar5);
      if (pCVar6 != (CWnd *)pCVar3) goto LAB_100b533a;
      BVar4 = GetMessageW((LPMSG)local_34,(HWND)0x0,0,0);
      if (BVar4 == 0) {
        AfxPostQuitMessage(local_34._8_4_);
        goto LAB_100b533a;
      }
      if (local_34._4_4_ == 0x100) break;
      if (local_34._4_4_ == 0x200) {
        CWnd::SetWindowPos(pCVar2,(CWnd *)0x0,local_20 - local_48,local_1c - local_40,-1,-1,0x15);
      }
      else {
        if (local_34._4_4_ == 0x202) {
          local_38 = 1;
          goto LAB_100b533a;
        }
        if (local_34._4_4_ == 0x204) goto LAB_100b533a;
        DispatchMessageW((MSG *)local_34);
      }
    }
  } while (local_34._8_4_ != 0x1b);
LAB_100b533a:
  iVar7 = local_38;
  ReleaseCapture();
  BVar4 = IsWindow(local_44);
  if (BVar4 != 0) {
    if (iVar7 == 0) {
      CWnd::ShowWindow(param_1,4);
    }
    else {
      SendMessageW(*(HWND *)(param_1 + 0x20),0x10,0,0);
      pCVar2 = local_3c;
      pCVar8 = DAT_1020b224;
      if (DAT_1020b224 == (CFrameWnd *)0x0) {
        pCVar8 = CWnd::GetTopLevelFrame(local_3c);
      }
      if (pCVar8 != (CFrameWnd *)0x0) {
        pCVar8 = DAT_1020b224;
        if (DAT_1020b224 == (CFrameWnd *)0x0) {
          pCVar8 = CWnd::GetTopLevelFrame(pCVar2);
        }
        CWnd::SetFocus((CWnd *)pCVar8);
      }
    }
  }
  if (local_38 != 0) goto LAB_100b5450;
  pCVar8 = DAT_1020b224;
  if ((DAT_1020b224 != (CFrameWnd *)0x0) ||
     (pCVar8 = CWnd::GetTopLevelFrame(local_3c), pCVar8 != (CFrameWnd *)0x0)) {
    pCVar9 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWndEx_101bd3e8,(CObject *)pCVar8);
    if (pCVar9 == (CObject *)0x0) {
      pCVar9 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CFrameWndEx_101bce58,(CObject *)pCVar8);
      if (pCVar9 == (CObject *)0x0) {
        pCVar9 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_COleIPFrameWndEx_101bd9f8,
                                    (CObject *)pCVar8);
        if (pCVar9 == (CObject *)0x0) {
          pCVar9 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_COleDocIPFrameWndEx_101bddb0,
                                      (CObject *)pCVar8);
          if (pCVar9 == (CObject *)0x0) goto LAB_100b542c;
          pCVar9 = pCVar9 + 0x1a4;
        }
        else {
          pCVar9 = pCVar9 + 0x1a8;
        }
      }
      else {
        pCVar9 = pCVar9 + 0x134;
      }
    }
    else {
      pCVar9 = pCVar9 + 0x350;
    }
    CFrameImpl::RemoveTearOffToolbar((CFrameImpl *)pCVar9,(CBasePane *)pCVar3);
  }
LAB_100b542c:
  pcVar1 = *(code **)(*(int *)pCVar3 + 0x60);
  guard_check_icall();
  (*pcVar1)();
  pcVar1 = *(code **)(*(int *)pCVar3 + 4);
  guard_check_icall(1);
  (*pcVar1)();
LAB_100b5450:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

