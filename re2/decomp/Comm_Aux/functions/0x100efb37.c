// rea decompile_all
// name: FUN_100efb37
// address: 0x100efb37
// body: available
// range: 0x100efb37-0x100efed4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100efed0 to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100efb37(uint param_1)

{
  code *pcVar1;
  LONG LVar2;
  HWND pHVar3;
  BOOL BVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  CObject *pCVar8;
  CWnd *pCVar9;
  CMFCPopupMenu *pCVar10;
  int *piVar11;
  CObject *pCVar12;
  CFrameWnd *pCVar13;
  CWnd *in_ECX;
  uint uVar14;
  uint uVar15;
  tagPOINT local_10;
  CObject *local_8;
  
  pHVar3 = (HWND)0x0;
  if (in_ECX != (CWnd *)0x0) {
    pHVar3 = *(HWND *)(in_ECX + 0x20);
  }
  BVar4 = IsWindow(pHVar3);
  if (BVar4 != 0) {
    if (param_1 == 0xffffffff) {
      local_10.x = 0;
      local_10.y = 0;
      GetCursorPos(&local_10);
      ScreenToClient(*(HWND *)(in_ECX + 0x20),&local_10);
      iVar7 = *(int *)(in_ECX + 0xbf8);
      pcVar1 = *(code **)(*(int *)in_ECX + 0x390);
      guard_check_icall(local_10.x,local_10.y);
      iVar5 = (*pcVar1)();
      if (iVar5 == iVar7) {
        *(int *)(in_ECX + 0xbf0) = iVar7;
        return;
      }
    }
    local_10.y = *(LONG *)(in_ECX + 0xc40);
    pCVar12 = (CObject *)0x0;
    if ((CMFCPopupMenu *)local_10.y != (CMFCPopupMenu *)0x0) {
      do {
        puVar6 = (undefined4 *)FUN_10034920(&local_10.y);
        local_8 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBarMenuButton_10205e6c,
                                     (CObject *)*puVar6);
        if (local_8 != (CObject *)0x0) {
          pcVar1 = *(code **)(*(int *)local_8 + 0x70);
          guard_check_icall();
          iVar7 = (*pcVar1)();
          pCVar12 = local_8;
          if (iVar7 != 0) goto LAB_100efc0b;
        }
      } while ((CMFCPopupMenu *)local_10.y != (CMFCPopupMenu *)0x0);
      pCVar12 = (CObject *)0x0;
    }
LAB_100efc0b:
    local_8 = (CObject *)0x0;
    if (-1 < (int)param_1) {
      pCVar8 = (CObject *)FUN_10094903(param_1);
      if (pCVar8 == (CObject *)0x0) goto LAB_100efed0;
      local_8 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBarMenuButton_10205e6c,pCVar8);
    }
    if (local_8 == pCVar12) {
      if ((local_8 != (CObject *)0x0) && (local_8 == *(CObject **)(in_ECX + 0xdb0))) {
        *(int *)(*(CObject **)(in_ECX + 0xdb0) + 0xa4) = 0;
        *(undefined4 *)(in_ECX + 0xdb0) = 0;
        KillTimer(*(HWND *)(in_ECX + 0x20),0xec18);
      }
    }
    else {
      pHVar3 = GetParent(*(HWND *)(in_ECX + 0x20));
      pCVar9 = CWnd::FromHandle(pHVar3);
      local_10.y = (LONG)AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCPopupMenu_10205bec,
                                            (CObject *)pCVar9);
      if (pCVar12 != (CObject *)0x0) {
        iVar7 = FUN_10050ddf();
        if ((DAT_1020e500 == 0) && ((iVar7 == 0 || (*(int *)(iVar7 + 4) != 0x100)))) {
          *(CObject **)(in_ECX + 0xdb0) = pCVar12;
          *(int *)(pCVar12 + 0xa4) = 1;
          SetTimer(*(HWND *)(in_ECX + 0x20),0xec18,DAT_10205d90 - 1,(TIMERPROC)0x0);
          InvalidateRect(*(HWND *)(in_ECX + 0x20),(RECT *)(pCVar12 + 0x54),1);
          UpdateWindow(*(HWND *)(in_ECX + 0x20));
        }
        else {
          KillTimer(*(HWND *)(in_ECX + 0x20),0xec18);
          *(undefined4 *)(in_ECX + 0xdb0) = 0;
          pcVar1 = *(code **)(*(int *)pCVar12 + 0x58);
          guard_check_icall();
          (*pcVar1)();
          LVar2 = local_10.y;
          if ((CMFCPopupMenu *)local_10.y != (CMFCPopupMenu *)0x0) {
            pCVar13 = DAT_1020fa34;
            if (DAT_1020fa34 == (CFrameWnd *)0x0) {
              pCVar13 = CWnd::GetTopLevelFrame(in_ECX);
            }
            CMFCPopupMenu::ActivatePopupMenu(pCVar13,(CMFCPopupMenu *)LVar2);
          }
        }
      }
      if ((local_8 != (CObject *)0x0) &&
         ((*(int *)(local_8 + 0x20) == -1 || (*(int *)(local_8 + 0x90) != 0)))) {
        pcVar1 = *(code **)(*(int *)local_8 + 0x20);
        guard_check_icall();
        (*pcVar1)();
      }
      LVar2 = local_10.y;
      if (((CMFCPopupMenu *)local_10.y != (CMFCPopupMenu *)0x0) &&
         (pCVar10 = CMFCPopupMenu::GetParentPopupMenu((CMFCPopupMenu *)local_10.y),
         pCVar10 != (CMFCPopupMenu *)0x0)) {
        pCVar10 = CMFCPopupMenu::GetParentPopupMenu((CMFCPopupMenu *)LVar2);
        pcVar1 = *(code **)(*(int *)pCVar10 + 0x1c8);
        guard_check_icall();
        piVar11 = (int *)(*pcVar1)();
        if ((piVar11 != (int *)0x0) && (piVar11[0x36c] == *(int *)(local_10.y + 0x158))) {
          pcVar1 = *(code **)(*piVar11 + 0x444);
          guard_check_icall();
          (*pcVar1)();
        }
      }
    }
    *(uint *)(in_ECX + 0xbf8) = param_1;
    if (*(int *)(in_ECX + 0xd80) != 0) {
      pHVar3 = GetParent(*(HWND *)(in_ECX + 0x20));
      pCVar9 = CWnd::FromHandle(pHVar3);
      pCVar12 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCPopupMenu_10205bec,(CObject *)pCVar9)
      ;
      if (pCVar12 != (CObject *)0x0) {
        pcVar1 = *(code **)(*(int *)pCVar12 + 0x204);
        guard_check_icall(*(undefined4 *)(in_ECX + 0xbf8));
        (*pcVar1)();
      }
    }
    if (DAT_1020f900 != 0) {
      pCVar13 = DAT_1020fa34;
      if ((DAT_1020fa34 == (CFrameWnd *)0x0) &&
         (pCVar13 = CWnd::GetTopLevelFrame(in_ECX), pCVar13 == (CFrameWnd *)0x0)) {
        pCVar13 = (CFrameWnd *)AfxGetMainWnd();
      }
      pHVar3 = GetParent(*(HWND *)(in_ECX + 0x20));
      pCVar9 = CWnd::FromHandle(pHVar3);
      pCVar12 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCPopupMenu_10205bec,(CObject *)pCVar9)
      ;
      if ((pCVar12 != (CObject *)0x0) && (*(CFrameWnd **)(pCVar12 + 0x134) != (CFrameWnd *)0x0)) {
        pCVar13 = *(CFrameWnd **)(pCVar12 + 0x134);
      }
      if ((pCVar13 != (CFrameWnd *)0x0) && (pCVar12 != (CObject *)0x0)) {
        uVar14 = 0x80;
        uVar15 = 0;
        if (local_8 != (CObject *)0x0) {
          if ((*(uint *)(local_8 + 0x24) & 0x40000) != 0) {
            uVar14 = 0x82;
          }
          if ((*(uint *)(local_8 + 0x24) & 0x10000) != 0) {
            uVar14 = uVar14 | 8;
          }
          uVar15 = *(uint *)(local_8 + 0x20);
          if (*(uint *)(local_8 + 0x20) == 0xffffffff) {
            uVar14 = uVar14 | 0x10;
            uVar15 = param_1;
          }
        }
        SendMessageW(*(HWND *)(pCVar13 + 0x20),0x11f,uVar14 << 0x10 | uVar15 & 0xffff,
                     *(LPARAM *)(pCVar12 + 0xf34));
      }
    }
    return;
  }
LAB_100efed0:
                    /* WARNING: Subroutine does not return */
  FUN_1004886a();
}

