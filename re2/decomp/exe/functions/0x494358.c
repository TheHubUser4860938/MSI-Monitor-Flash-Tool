// rea decompile_all
// name: FUN_00494358
// address: 0x494358
// body: available
// range: 0x494358-0x4949aa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4949a6 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00494358(int param_1,LONG param_2,CObject *param_3,int param_4)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  POINT pt;
  POINT pt_00;
  POINT pt_01;
  POINT pt_02;
  POINT Point;
  ushort uVar4;
  BOOL BVar5;
  CWnd *pCVar6;
  int iVar7;
  CMFCPopupMenu *pCVar8;
  MENUAREA_TYPE MVar9;
  CMFCPopupMenu *pCVar10;
  CObject *pCVar11;
  HWND pHVar12;
  int iVar13;
  uint uVar14;
  HMENU pHVar15;
  CMenu *pCVar16;
  WPARAM wParam;
  CFrameImpl *in_ECX;
  LPARAM lParam;
  UINT UVar17;
  tagPOINT local_3c;
  CObject *local_34;
  CMFCPopupMenu *local_30;
  LONG local_2c;
  RECT local_28;
  undefined1 local_18 [8];
  tagPOINT local_10;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  local_2c = param_2;
  local_34 = param_3;
  if ((*(int *)(in_ECX + 0xfc) != 0) &&
     (BVar5 = IsWindowVisible(*(HWND *)(*(int *)(in_ECX + 0xfc) + 0x20)), BVar5 != 0)) {
    local_18._0_4_ = 0;
    local_18._4_4_ = 0;
    local_10.x = 0;
    local_10.y = 0;
    GetWindowRect(*(HWND *)(*(int *)(in_ECX + 0xfc) + 0x20),(LPRECT)local_18);
    pt.y = (LONG)param_3;
    pt.x = param_2;
    BVar5 = PtInRect((RECT *)local_18,pt);
    CMFCRibbonBar::DeactivateKeyboardFocus(*(CMFCRibbonBar **)(in_ECX + 0xfc),BVar5);
  }
  if ((param_1 == 0x201) &&
     ((puVar1 = DAT_00614f3c, DAT_00614ed8 != 0 ||
      (uVar4 = GetAsyncKeyState(0x12), puVar1 = DAT_00614f3c, (uVar4 & 0x8000) != 0)))) {
    do {
      do {
        if (puVar1 == (undefined4 *)0x0) goto LAB_00494463;
        if (puVar1 == (undefined4 *)0x0) {
LAB_004949a6:
                    /* WARNING: Subroutine does not return */
          FUN_00429127();
        }
        pCVar8 = (CMFCPopupMenu *)puVar1[2];
        puVar1 = (undefined4 *)*puVar1;
        local_30 = pCVar8;
        if (pCVar8 == (CMFCPopupMenu *)0x0) goto LAB_004949a6;
        pCVar6 = CWnd::FromHandlePermanent(*(HWND__ **)(pCVar8 + 0x20));
        param_2 = local_2c;
      } while (pCVar6 == (CWnd *)0x0);
      local_3c.x = local_2c;
      local_3c.y = (LONG)local_34;
      ScreenToClient(*(HWND *)(pCVar8 + 0x20),&local_3c);
      pcVar2 = *(code **)(*(int *)pCVar8 + 0x390);
      guard_check_icall(local_3c.x,local_3c.y);
      iVar7 = (*pcVar2)();
      pCVar8 = local_30;
      param_2 = local_2c;
    } while (iVar7 < 0);
    local_30 = (CMFCPopupMenu *)FUN_00452f94(iVar7);
    pcVar2 = *(code **)(*(int *)local_30 + 0x38);
    guard_check_icall();
    iVar7 = (*pcVar2)();
    param_2 = local_2c;
    if (iVar7 == 0) goto LAB_00494463;
    pcVar2 = *(code **)(*(int *)local_30 + 0x38);
    guard_check_icall();
    iVar7 = (*pcVar2)();
    param_2 = local_2c;
    if ((iVar7 != param_4) ||
       (pt_01.y = local_3c.y, pt_01.x = local_3c.x,
       BVar5 = PtInRect((RECT *)((int)local_30 + 0x54),pt_01), param_2 = local_2c, BVar5 == 0))
    goto LAB_00494463;
    lParam = CONCAT22((undefined2)local_3c.y,(undefined2)local_3c.x);
    UVar17 = 0x201;
LAB_004945af:
    SendMessageW(*(HWND *)(pCVar8 + 0x20),UVar17,0,lParam);
    goto LAB_00494993;
  }
LAB_00494463:
  local_30 = (CMFCPopupMenu *)0x0;
  pCVar8 = CMFCPopupMenu::GetSafeActivePopupMenu();
  if ((DAT_00614ed8 == 0) && (pCVar8 != (CMFCPopupMenu *)0x0)) {
    local_10.y = (LONG)local_34;
    local_10.x = param_2;
    MVar9 = CMFCPopupMenu::CheckArea(pCVar8,(CPoint *)(local_18 + 8));
    if (MVar9 == 4) {
      pCVar10 = CMFCPopupMenu::FindMenuWithConnectedFloaty();
      if ((pCVar10 != (CMFCPopupMenu *)0x0) &&
         (BVar5 = IsWindow(*(HWND *)(pCVar10 + 0x1170)), BVar5 != 0)) {
        local_18._0_4_ = 0;
        local_18._4_4_ = 0;
        local_10.x = 0;
        local_10.y = 0;
        GetWindowRect(*(HWND *)(pCVar10 + 0x1170),(LPRECT)local_18);
        pt_00.y = (LONG)local_34;
        pt_00.x = local_2c;
        BVar5 = PtInRect((RECT *)local_18,pt_00);
        if (BVar5 != 0) {
          pCVar6 = CWnd::FromHandlePermanent(*(HWND__ **)(pCVar10 + 0x1170));
          pCVar11 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCPopupMenu_0060c808,
                                       (CObject *)pCVar6);
          *(undefined4 *)(pCVar10 + 0x1170) = 0;
          SendMessageW(*(HWND *)(pCVar10 + 0x20),0x10,0,0);
          DAT_00616b18 = pCVar11;
          goto LAB_00494993;
        }
      }
      local_28.left = 0;
      local_28.top = 0;
      local_28.right = 0;
      local_28.bottom = 0;
      if (DAT_00616b18 != (CObject *)0x0) {
        uVar3 = *(undefined4 *)(pCVar8 + 0x20);
        afxMapHWND(0);
        iVar7 = FUN_004c859b(uVar3);
        if (iVar7 == 0) {
          uVar3 = *(undefined4 *)(pCVar8 + 0x20);
          afxMapHWND(0);
          iVar7 = FUN_004c859b(uVar3);
          if (iVar7 == 0) goto LAB_00494765;
        }
        pcVar2 = *(code **)(*(int *)pCVar8 + 0x1d4);
        guard_check_icall(&local_28);
        local_3c.y = (*pcVar2)();
        if ((CObject *)local_3c.y != (CObject *)0x0) {
          pCVar11 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCPopupMenuBar_0060c6b4,
                                       (CObject *)local_3c.y);
          local_10.x = local_2c;
          local_10.y = (LONG)local_34;
          ScreenToClient(*(HWND *)(local_3c.y + 0x20),(LPPOINT)(local_18 + 8));
          pt_02.y = local_10.y;
          pt_02.x = local_10.x;
          BVar5 = PtInRect(&local_28,pt_02);
          if (BVar5 != 0) {
            if (pCVar11 != (CObject *)0x0) {
              pcVar2 = *(code **)(*(int *)pCVar11 + 0x44c);
              guard_check_icall();
              iVar7 = (*pcVar2)();
              if (iVar7 == 0) goto LAB_00494993;
            }
            pcVar2 = *(code **)(*(int *)pCVar8 + 0x1cc);
            guard_check_icall();
            iVar7 = (*pcVar2)();
            if (iVar7 != 0) goto LAB_00494993;
            UVar17 = 0x10;
            lParam = 0;
            goto LAB_004945af;
          }
          if (pCVar11 != (CObject *)0x0) {
            pcVar2 = *(code **)(*(int *)pCVar11 + 0x44c);
            guard_check_icall();
            iVar7 = (*pcVar2)();
            if (iVar7 == 0) {
              pcVar2 = *(code **)(*(int *)pCVar11 + 0x440);
              guard_check_icall();
              (*pcVar2)();
              pHVar12 = GetParent(*(HWND *)(pCVar11 + 0x20));
              pCVar6 = CWnd::FromHandle(pHVar12);
              pCVar11 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCPopupMenu_0060c808,
                                           (CObject *)pCVar6);
              if (pCVar11 != (CObject *)0x0) {
                local_3c.x = local_2c;
                local_3c.y = (LONG)local_34;
                MVar9 = CMFCPopupMenu::CheckArea((CMFCPopupMenu *)pCVar11,(CPoint *)&local_3c);
                if (MVar9 == 0) goto LAB_00494993;
                if (0 < (int)MVar9) {
                  if ((int)MVar9 < 3) {
                    pHVar12 = *(HWND *)(pCVar11 + 0x20);
                    goto LAB_0049481f;
                  }
                  if ((MVar9 == 3) || (MVar9 == 5)) goto LAB_00494993;
                }
              }
            }
          }
        }
      }
LAB_00494765:
      pCVar8 = CMFCPopupMenu::GetSafeActivePopupMenu();
      if (pCVar8 != (CMFCPopupMenu *)0x0) {
        pcVar2 = *(code **)(*(int *)pCVar8 + 0x1cc);
        guard_check_icall();
        iVar7 = (*pcVar2)();
        if (iVar7 == 0) {
          pcVar2 = *(code **)(*(int *)pCVar8 + 0x1dc);
          guard_check_icall();
          iVar7 = (*pcVar2)();
          local_30 = (CMFCPopupMenu *)(uint)(iVar7 == 0);
          SendMessageW(*(HWND *)(pCVar8 + 0x20),0x10,0,0);
          pHVar12 = GetFocus();
          pCVar6 = CWnd::FromHandle(pHVar12);
          if ((pCVar6 != (CWnd *)0x0) &&
             (iVar13 = FUN_0043970d(&PTR_s_CMFCToolBar_0060c580), iVar13 != 0)) {
            CWnd::SetFocus(*(CWnd **)(in_ECX + 0xb0));
          }
          if ((int *)(uint)(iVar7 == 0) != (int *)0x0) {
            Point.y = (LONG)local_34;
            Point.x = local_2c;
            pHVar12 = WindowFromPoint(Point);
            pCVar6 = CWnd::FromHandle(pHVar12);
            AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CView_005c381c,(CObject *)pCVar6);
          }
        }
      }
    }
    else if ((MVar9 == 1) || (MVar9 == 2)) {
      pHVar12 = *(HWND *)(pCVar8 + 0x20);
LAB_0049481f:
      SendMessageW(pHVar12,0x10,0,0);
      CWnd::SetFocus(*(CWnd **)(in_ECX + 0xb0));
      goto LAB_00494993;
    }
  }
  if (param_1 != 0xa5) goto LAB_00494993;
  iVar7 = 0;
  if (*(int *)(in_ECX + 0xb0) != 0) {
    iVar7 = *(int *)(*(int *)(in_ECX + 0xb0) + 0x20);
  }
  if (((param_4 != iVar7) || (iVar7 = CFrameImpl::IsOwnerDrawCaption(in_ECX), iVar7 == 0)) ||
     (((uVar14 = CFrameImpl::OnNcHitTest(), uVar14 != 2 &&
       (((uVar14 != 3 && (uVar14 != 8)) && (uVar14 != 9)))) && (uVar14 != 0x14))))
  goto LAB_00494993;
  pHVar15 = GetSystemMenu(*(HWND *)(*(int *)(in_ECX + 0xb0) + 0x20),0);
  pCVar16 = CMenu::FromHandle(pHVar15);
  if (((pCVar16 == (CMenu *)0x0) || (*(int *)(pCVar16 + 4) == 0)) ||
     (BVar5 = IsMenu(*(HMENU *)(pCVar16 + 4)), BVar5 == 0)) goto LAB_00494993;
  EnableMenuItem(*(HMENU *)(pCVar16 + 4),0xf030,0);
  EnableMenuItem(*(HMENU *)(pCVar16 + 4),0xf120,0);
  BVar5 = IsZoomed(*(HWND *)(*(int *)(in_ECX + 0xb0) + 0x20));
  if (BVar5 == 0) {
    BVar5 = IsIconic(*(HWND *)(*(int *)(in_ECX + 0xb0) + 0x20));
    if (BVar5 == 0) {
      UVar17 = 0xf120;
      goto LAB_00494944;
    }
  }
  else {
    UVar17 = 0xf030;
LAB_00494944:
    EnableMenuItem(*(HMENU *)(pCVar16 + 4),UVar17,3);
  }
  pHVar12 = (HWND)0x0;
  if (*(int *)(in_ECX + 0xb0) != 0) {
    pHVar12 = *(HWND *)(*(int *)(in_ECX + 0xb0) + 0x20);
  }
  wParam = TrackPopupMenu(*(HMENU *)(pCVar16 + 4),0x100,local_2c,(int)local_34,0,pHVar12,(RECT *)0x0
                         );
  if (wParam != 0) {
    SendMessageW(*(HWND *)(*(int *)(in_ECX + 0xb0) + 0x20),0x112,wParam,0);
  }
LAB_00494993:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

