// rea decompile_all
// name: FUN_100c1377
// address: 0x100c1377
// body: available
// range: 0x100c1377-0x100c16d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100c16a4 to 0x1004a383 FUN_1004a383 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_100c1377(CObject *param_1)

{
  undefined4 *puVar1;
  WPARAM wParam;
  ulong uVar2;
  HWND pHVar3;
  CWnd *pCVar4;
  CObject *pCVar5;
  CFrameWnd *pCVar6;
  int iVar7;
  BOOL BVar8;
  ulong *puVar9;
  CMFCPopupMenuBar *in_ECX;
  CObject *pCVar10;
  code *pcVar11;
  uint uVar12;
  CObList local_34 [4];
  undefined4 *local_30;
  CObject *local_18;
  ulong local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x24;
  local_8 = 0x100c1383;
  if ((*(int *)(in_ECX + 0xe5c) != 0) || (*(int *)(in_ECX + 0xe60) != 0)) {
    ReleaseCapture();
  }
  pCVar10 = (CObject *)0x0;
  local_14[0] = 0xffffffff;
  pHVar3 = GetParent(*(HWND *)(in_ECX + 0x20));
  pCVar4 = CWnd::FromHandle(pHVar3);
  local_18 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCPopupMenu_1023d77c,(CObject *)pCVar4);
  if (local_18 != (CObject *)0x0) {
    pCVar10 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCColorMenuButton_1023dc1c,
                                 *(CObject **)(local_18 + 0x158));
  }
  pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBarColorButton_1023d7e0,param_1);
  if (pCVar5 != (CObject *)0x0) {
    if (*(int *)(pCVar5 + 0x80) != 0) {
      return 0;
    }
    if (*(int *)(pCVar5 + 0x7c) == 0) {
      local_14[0] = 0xffffffff;
      if (*(int *)(pCVar5 + 0x78) == 0) {
        local_14[0] = *(ulong *)(pCVar5 + 0x70);
      }
    }
    else {
      CMFCPopupMenuBar::SetInCommand(in_ECX,1);
      if (local_18 != (CObject *)0x0) {
        CWnd::ShowWindow((CWnd *)local_18,0);
        pCVar6 = DAT_102471dc;
        if (DAT_102471dc == (CFrameWnd *)0x0) {
          pCVar6 = CWnd::GetTopLevelFrame((CWnd *)in_ECX);
        }
        if (pCVar6 != (CFrameWnd *)0x0) {
          pCVar6 = DAT_102471dc;
          if (DAT_102471dc == (CFrameWnd *)0x0) {
            pCVar6 = CWnd::GetTopLevelFrame((CWnd *)in_ECX);
          }
          CMFCPopupMenu::ActivatePopupMenu(pCVar6,(CMFCPopupMenu *)0x0);
        }
      }
      local_18 = *(CObject **)(in_ECX + 0x20);
      InvalidateRect((HWND)local_18,(RECT *)(param_1 + 0x54),1);
      UpdateWindow(*(HWND *)(in_ECX + 0x20));
      iVar7 = *(int *)(in_ECX + 0xe48);
      if (iVar7 == -1) {
        iVar7 = *(int *)(in_ECX + 0xe4c);
      }
      pcVar11 = *(code **)(*(int *)in_ECX + 0x458);
      guard_check_icall(iVar7,local_14);
      iVar7 = (*pcVar11)();
      if (iVar7 == 0) {
        BVar8 = IsWindow((HWND)local_18);
        if (BVar8 == 0) {
          return 1;
        }
        CMFCPopupMenuBar::SetInCommand(in_ECX,0);
        if (((*(int *)(in_ECX + 0xe5c) == 0) && (*(int *)(in_ECX + 0xe60) == 0)) &&
           (*(int *)(in_ECX + 0xe64) == 0)) {
          if (pCVar10 == (CObject *)0x0) {
            pCVar6 = DAT_102471dc;
            if (DAT_102471dc == (CFrameWnd *)0x0) {
              pCVar6 = CWnd::GetTopLevelFrame((CWnd *)in_ECX);
            }
            if (pCVar6 == (CFrameWnd *)0x0) {
              return 1;
            }
            pCVar6 = DAT_102471dc;
            if (DAT_102471dc == (CFrameWnd *)0x0) {
              pCVar6 = CWnd::GetTopLevelFrame((CWnd *)in_ECX);
            }
            CWnd::SetFocus((CWnd *)pCVar6);
            return 1;
          }
          uVar12 = 0;
          goto LAB_100c156b;
        }
        pHVar3 = GetParent(*(HWND *)(in_ECX + 0x20));
        pCVar4 = CWnd::FromHandle(pHVar3);
        goto LAB_100c15dc;
      }
      BVar8 = IsWindow((HWND)local_18);
      if (BVar8 == 0) {
        return 1;
      }
      CMFCPopupMenuBar::SetInCommand(in_ECX,0);
    }
  }
  if (pCVar10 != (CObject *)0x0) {
    pcVar11 = *(code **)(*(int *)pCVar10 + 0xfc);
    guard_check_icall(local_14[0],1);
    (*pcVar11)();
    uVar12 = *(uint *)(pCVar10 + 0x20);
LAB_100c156b:
    CMFCPopupMenuBar::InvokeMenuCommand(in_ECX,uVar12,(CMFCToolBarButton *)pCVar10);
    return 1;
  }
  if (*(int **)(in_ECX + 0xe5c) == (int *)0x0) {
    if (*(CMFCRibbonColorButton **)(in_ECX + 0xe64) == (CMFCRibbonColorButton *)0x0) {
      if (*(int **)(in_ECX + 0xe60) == (int *)0x0) {
        FUN_100c21bc(local_14[0]);
        CObList::CObList(local_34,10);
        local_8 = 0;
        iVar7 = FUN_10096487(*(undefined4 *)(in_ECX + 0xe04),local_34);
        if (0 < iVar7) {
          while (local_30 != (undefined4 *)0x0) {
            if (local_30 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_1004a383();
            }
            puVar1 = (undefined4 *)*local_30;
            local_18 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCColorMenuButton_1023dc1c,
                                          (CObject *)local_30[2]);
            local_30 = puVar1;
            if (local_18 != (CObject *)0x0) {
              pcVar11 = *(code **)(*(int *)local_18 + 0xfc);
              guard_check_icall(local_14[0],0);
              (*pcVar11)();
            }
          }
        }
        uVar2 = local_14[0];
        puVar9 = (ulong *)FUN_1009f091(*(undefined4 *)(in_ECX + 0xe04));
        *puVar9 = uVar2;
        wParam = *(WPARAM *)(in_ECX + 0xe04);
        pCVar4 = CWnd::GetOwner((CWnd *)in_ECX);
        SendMessageW(*(HWND *)(pCVar4 + 0x20),0x111,wParam,0);
        pCVar6 = DAT_102471dc;
        if (DAT_102471dc == (CFrameWnd *)0x0) {
          pCVar6 = CWnd::GetTopLevelFrame((CWnd *)in_ECX);
        }
        if (pCVar6 != (CFrameWnd *)0x0) {
          pCVar6 = DAT_102471dc;
          if (DAT_102471dc == (CFrameWnd *)0x0) {
            pCVar6 = CWnd::GetTopLevelFrame((CWnd *)in_ECX);
          }
          CWnd::SetFocus((CWnd *)pCVar6);
        }
        CObList::~CObList(local_34);
        return 1;
      }
      pcVar11 = *(code **)(**(int **)(in_ECX + 0xe60) + 0x16c);
      goto LAB_100c15be;
    }
    CMFCRibbonColorButton::UpdateColor(*(CMFCRibbonColorButton **)(in_ECX + 0xe64),local_14[0]);
  }
  else {
    pcVar11 = *(code **)(**(int **)(in_ECX + 0xe5c) + 0x198);
LAB_100c15be:
    guard_check_icall();
    (*pcVar11)();
  }
  pHVar3 = GetParent(*(HWND *)(in_ECX + 0x20));
  pCVar4 = CWnd::FromHandle(pHVar3);
LAB_100c15dc:
  SendMessageW(*(HWND *)(pCVar4 + 0x20),0x10,0,0);
  return 1;
}

