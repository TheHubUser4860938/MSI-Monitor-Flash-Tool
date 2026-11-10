// rea decompile_all
// name: CMFCRibbonPanel::OnKey
// address: 0x100d24e7
// body: available
// range: 0x100d24e7-0x100d2e5c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CMFCRibbonPanel::OnKey(unsigned int)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCRibbonPanel::OnKey(CMFCRibbonPanel *this,uint param_1)

{
  code *pcVar1;
  CMFCRibbonBaseElement *pCVar2;
  LONG LVar3;
  LONG LVar4;
  ushort uVar5;
  AFX_GLOBAL_DATA *pAVar6;
  undefined4 *puVar7;
  CMFCPopupMenu *pCVar8;
  CMFCRibbonBar *this_00;
  int iVar9;
  CMFCRibbonBaseElement *pCVar10;
  HWND pHVar11;
  CWnd *pCVar12;
  CObject *pCVar13;
  BOOL BVar14;
  CFrameWnd *pCVar15;
  int iVar16;
  undefined **local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  uint local_50;
  int local_4c;
  tagPOINT local_48;
  CObject *local_40;
  CWnd *local_3c;
  CMFCRibbonBaseElement *local_38;
  tagRECT local_34;
  RECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x54;
  local_8 = 0x100d24f3;
  local_48.y = param_1;
  if (*(int *)(this + 0x4e4) == 0) goto LAB_100d2e55;
  local_40 = *(CObject **)(this + 0x2dc);
  if (local_40 != (CObject *)0x0) {
    pcVar1 = *(code **)(*(int *)local_40 + 0x244);
    guard_check_icall(param_1);
    iVar16 = (*pcVar1)();
    if (iVar16 != 0) goto LAB_100d2e55;
  }
  local_38 = (CMFCRibbonBaseElement *)0x0;
  local_40 = (CObject *)0x0;
  pCVar10 = local_38;
  if (param_1 < 0x25) {
    if (param_1 == 0x24) {
      if (*(int *)(this + 0x78) == 0) goto LAB_100d2581;
LAB_100d26b5:
      pCVar10 = GetFirstTabStop(this);
      local_38 = pCVar10;
      goto LAB_100d2581;
    }
    if (param_1 == 9) goto LAB_100d2948;
    if ((param_1 != 0xd) && (param_1 != 0x20)) {
      if (param_1 == 0x23) {
        if (*(int *)(this + 0x78) == 0) goto LAB_100d2581;
        goto LAB_100d2b13;
      }
LAB_100d26e7:
      if (*(int *)(this + 0x78) != 0) {
        iVar16 = FUN_10090cb5(param_1);
        if (iVar16 != 0) {
          param_1 = FUN_10090f00(param_1);
        }
        local_3c = (CWnd *)0x0;
        pCVar10 = local_38;
        if (0 < *(int *)(this + 0x4e4)) {
          do {
            puVar7 = (undefined4 *)FUN_100d7168(local_3c);
            local_48.y = *puVar7;
            pcVar1 = *(code **)(*(int *)local_48.y + 0x1e4);
            guard_check_icall(param_1);
            iVar16 = (*pcVar1)();
            if (iVar16 != 0) goto LAB_100d2e55;
            FUN_100037c0(*(int *)(local_48.y + 0x60));
            local_8 = 1;
            iVar16 = FUN_10010f20(0x26,0);
            if ((-1 < iVar16) && (iVar16 < *(int *)(local_4c + -0xc) + -1)) {
              uVar5 = FUN_10011080(iVar16 + 1);
              local_50 = (uint)uVar5;
              CharUpperW((LPWSTR)&local_50);
              LVar3 = local_48.y;
              if ((local_50 & 0xffff) == param_1) {
                pcVar1 = *(code **)(*(int *)local_48.y + 0xdc);
                guard_check_icall();
                iVar16 = (*pcVar1)();
                if (iVar16 == 0) {
                  local_38 = (CMFCRibbonBaseElement *)LVar3;
                  local_40 = (CObject *)0x1;
                }
                pCVar10 = local_38;
                local_8 = 0xffffffff;
                FUN_10003460();
                break;
              }
            }
            local_8 = 0xffffffff;
            FUN_10003460();
            local_3c = local_3c + 1;
            pCVar10 = local_38;
          } while ((int)local_3c < *(int *)(this + 0x4e4));
        }
      }
      goto LAB_100d2581;
    }
  }
  else {
    if (param_1 == 0x25) {
LAB_100d288d:
      if (((*(int *)(this + 0x78) != 0) &&
          ((CMFCRibbonBaseElement *)param_1 == (CMFCRibbonBaseElement *)0x25)) &&
         (*(int *)(this + 0x10c) != 0)) {
        local_3c = *(CWnd **)(this + 0x2dc);
        if (local_3c == (CWnd *)0x0) {
LAB_100d28db:
          local_3c = (CWnd *)0x0;
        }
        else {
          pcVar1 = *(code **)(*(int *)local_3c + 0x204);
          guard_check_icall();
          iVar16 = (*pcVar1)();
          if (iVar16 == 0) goto LAB_100d28db;
          local_3c = (CWnd *)0x1;
        }
        pHVar11 = GetParent(*(HWND *)(*(int *)(this + 0x10c) + 0x20));
        pCVar12 = CWnd::FromHandle(pHVar11);
        pCVar13 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCPopupMenu_101d377c,
                                     (CObject *)pCVar12);
        if ((local_3c == (CWnd *)0x0) &&
           (pCVar8 = CMFCPopupMenu::GetParentPopupMenu((CMFCPopupMenu *)pCVar13),
           pCVar8 != (CMFCPopupMenu *)0x0)) {
          this_00 = CMFCRibbonPanelMenuBar::GetTopLevelRibbonBar
                              (*(CMFCRibbonPanelMenuBar **)(this + 0x10c));
          if ((this_00 != (CMFCRibbonBar *)0x0) && (*(CMFCRibbonPanel **)(this_00 + 0x848) == this))
          {
            CMFCRibbonBar::SetKeyboardNavigationLevel(this_00,*(CObject **)(this_00 + 0x844),1);
          }
          CMFCPopupMenu::CloseMenu((CMFCPopupMenu *)pCVar13,0);
          goto LAB_100d2e55;
        }
      }
    }
    else if (param_1 != 0x26) {
      if (param_1 == 0x27) {
        if (*(int *)(this + 0x78) != 0) {
          local_3c = *(CWnd **)(this + 0x2dc);
          if (local_3c != (CWnd *)0x0) {
            pcVar1 = *(code **)(*(int *)local_3c + 0x138);
            guard_check_icall();
            iVar16 = (*pcVar1)();
            if (iVar16 != 0) {
              pcVar1 = *(code **)(**(int **)(this + 0x2dc) + 0xe4);
              guard_check_icall();
              iVar16 = (*pcVar1)();
              param_1 = local_48.y;
              if (iVar16 == 0) {
                pcVar1 = *(code **)(**(int **)(this + 0x2dc) + 0x13c);
                guard_check_icall();
                (*pcVar1)();
                if (*(int *)(*(int *)(this + 0x2dc) + 0x9c) != 0) {
                  SendMessageW(*(HWND *)(*(int *)(*(int *)(this + 0x2dc) + 0x9c) + 0x20),0x100,0x24,
                               0);
                }
                goto LAB_100d2e55;
              }
            }
          }
          goto LAB_100d288d;
        }
      }
      else if (param_1 != 0x28) goto LAB_100d26e7;
    }
LAB_100d2948:
    if (*(CObject **)(this + 0x2dc) == (CObject *)0x0) {
      if ((((CMFCRibbonBaseElement *)param_1 == (CMFCRibbonBaseElement *)0x27) ||
          ((CMFCRibbonBaseElement *)param_1 == (CMFCRibbonBaseElement *)0x28)) ||
         ((CMFCRibbonBaseElement *)param_1 == (CMFCRibbonBaseElement *)0x9)) goto LAB_100d26b5;
LAB_100d2b13:
      pCVar10 = GetLastTabStop(this);
      local_38 = pCVar10;
    }
    else {
      if ((((*(int *)(this + 0x110) != 0) &&
           ((((CMFCRibbonBaseElement *)param_1 == (CMFCRibbonBaseElement *)0x28 ||
             ((CMFCRibbonBaseElement *)param_1 == (CMFCRibbonBaseElement *)0x26)) &&
            (*(int *)(this + 0x10c) != 0)))) &&
          ((*(int *)(*(int *)(this + 0x10c) + 0x20) != 0 && (*(int *)(this + 0x104) != 0)))) &&
         ((*(int *)(*(int *)(this + 0x104) + 0x20) != 0 &&
          (pCVar13 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCRibbonGalleryIcon_1019f0a8,
                                        *(CObject **)(this + 0x2dc)), pCVar13 != (CObject *)0x0))))
      {
        local_34.left = *(LONG *)(pCVar13 + 0x74);
        local_34.top = *(LONG *)(pCVar13 + 0x78);
        local_34.right = *(LONG *)(pCVar13 + 0x7c);
        local_34.bottom = *(LONG *)(pCVar13 + 0x80);
        GetGalleryRect(this);
        LVar4 = local_34.bottom;
        LVar3 = local_34.top;
        if ((CMFCRibbonBaseElement *)local_48.y == (CMFCRibbonBaseElement *)0x28) {
          if (local_24.bottom < local_34.bottom) {
            iVar16 = GetScrollPos(*(HWND *)(*(int *)(this + 0x104) + 0x20),2);
            iVar9 = CWnd::GetScrollLimit(*(CWnd **)(this + 0x104),2);
            if (iVar16 < iVar9) {
              iVar16 = LVar4 - local_34.top;
              goto LAB_100d2a26;
            }
          }
        }
        else if ((local_34.top < local_24.top) &&
                (iVar16 = GetScrollPos(*(HWND *)(*(int *)(this + 0x104) + 0x20),2), 0 < iVar16)) {
          iVar16 = LVar3 - local_34.bottom;
LAB_100d2a26:
          if (iVar16 != 0) {
            ScrollPalette(this,iVar16,1);
            RedrawWindow(*(HWND *)(*(int *)(this + 0x10c) + 0x20),&local_24,(HRGN)0x0,0x105);
            SetScrollPos(*(HWND *)(*(int *)(this + 0x104) + 0x20),2,*(int *)(this + 0xb8),1);
          }
        }
      }
      local_60 = 0;
      local_54 = 0;
      local_58 = 0;
      local_5c = 0;
      local_64 = CArray<CMFCRibbonBaseElement*,CMFCRibbonBaseElement*>::vftable;
      local_8 = 0;
      GetVisibleElements(this,(CArray<CMFCRibbonBaseElement*,CMFCRibbonBaseElement*> *)&local_64);
      LVar3 = local_48.y;
      local_50 = 0;
      local_38 = CMFCRibbonBar::FindNextFocusedElement
                           (local_48.y,&local_64,*(undefined4 *)(this + 0xcc),
                            *(undefined4 *)(this + 0xd0),*(undefined4 *)(this + 0xd4),
                            *(undefined4 *)(this + 0xd8),*(undefined4 *)(this + 0x2dc),0,0,&local_50
                           );
      if ((*(int *)(this + 0x78) != 0) && (local_38 == (CMFCRibbonBaseElement *)0x0)) {
        if ((CMFCRibbonBaseElement *)LVar3 == (CMFCRibbonBaseElement *)0x28) {
          local_38 = GetFirstTabStop(this);
        }
        else {
          local_38 = GetLastTabStop(this);
        }
      }
      pCVar10 = local_38;
      local_8 = 0xffffffff;
      CArray<CMFCRibbonBaseElement*,CMFCRibbonBaseElement*>::
      ~CArray<CMFCRibbonBaseElement*,CMFCRibbonBaseElement*>
                ((CArray<CMFCRibbonBaseElement*,CMFCRibbonBaseElement*> *)&local_64);
    }
LAB_100d2581:
    if ((pCVar10 != (CMFCRibbonBaseElement *)0x0) &&
       (pCVar2 = *(CMFCRibbonBaseElement **)(this + 0x2dc), pCVar2 != pCVar10)) {
      if (pCVar2 != (CMFCRibbonBaseElement *)0x0) {
        if (*(int *)(pCVar2 + 200) != 0) {
          *(int *)(pCVar2 + 200) = 0;
          pcVar1 = *(code **)(**(int **)(this + 0x2dc) + 0x220);
          guard_check_icall(0);
          (*pcVar1)();
        }
        if (*(int *)(*(int *)(this + 0x2dc) + 0xcc) != 0) {
          *(undefined4 *)(*(int *)(this + 0x2dc) + 0xcc) = 0;
          pcVar1 = *(code **)(**(int **)(this + 0x2dc) + 0x224);
          guard_check_icall(0);
          (*pcVar1)();
        }
        pcVar1 = *(code **)(**(int **)(this + 0x2dc) + 0x1b8);
        guard_check_icall();
        (*pcVar1)();
        *(undefined4 *)(this + 0x2dc) = 0;
        pCVar10 = local_38;
      }
      pAVar6 = GetGlobalData();
      if (((*(int *)(pAVar6 + 0x19c) != 0) && (*(int *)(this + 0x10c) != 0)) &&
         (*(int *)(this + 0x78) != 0)) {
        local_48.x = *(LONG *)(pCVar10 + 0x74);
        local_48.y = *(LONG *)(pCVar10 + 0x78);
        local_24.right = *(LONG *)(pCVar10 + 0x7c);
        local_24.bottom = *(LONG *)(pCVar10 + 0x80);
        local_24.left = local_48.x;
        local_24.top = local_48.y;
        ClientToScreen(*(HWND *)(*(int *)(this + 0x10c) + 0x20),&local_48);
        pcVar1 = *(code **)(**(int **)(this + 0x10c) + 0x254);
        guard_check_icall(CONCAT22((undefined2)local_48.y,(undefined2)local_48.x));
        (*pcVar1)();
        pCVar10 = local_38;
        if (*(int *)(this + 0x10c) == 0) {
          local_3c = (CWnd *)0x0;
        }
        else {
          local_3c = *(CWnd **)(*(int *)(this + 0x10c) + 0x20);
        }
        pcVar1 = *(code **)(*(int *)this + 0xc0);
        guard_check_icall(local_38);
        iVar16 = (*pcVar1)();
        NotifyWinEvent(0x8005,(HWND)local_3c,-4,iVar16 + 1);
      }
      *(CMFCRibbonBaseElement **)(this + 0x2dc) = pCVar10;
      pcVar1 = *(code **)(*(int *)pCVar10 + 0x220);
      guard_check_icall(1);
      (*pcVar1)();
      if (*(int *)(this + 0x110) != 0) {
        MakeGalleryItemVisible(this,pCVar10);
      }
      *(undefined4 *)(pCVar10 + 200) = 1;
      *(undefined4 *)(pCVar10 + 0xcc) = 1;
      pcVar1 = *(code **)(*(int *)pCVar10 + 0x224);
      guard_check_icall(1);
      (*pcVar1)();
      pcVar1 = *(code **)(**(int **)(this + 0x2dc) + 0x1b8);
      guard_check_icall();
      (*pcVar1)();
      if (*(int *)(this + 0x10c) != 0) {
        pHVar11 = GetParent(*(HWND *)(*(int *)(this + 0x10c) + 0x20));
        pCVar12 = CWnd::FromHandle(pHVar11);
        local_38 = (CMFCRibbonBaseElement *)
                   AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCRibbonPanelMenu_101a0984,
                                      (CObject *)pCVar12);
        if (local_38 != (CMFCRibbonBaseElement *)0x0) {
          pCVar10 = local_38;
          if (*(int *)(local_38 + 0xf7c) != 0) {
            iVar16 = *(int *)(this + 0x2dc);
            local_24.left = *(int *)(iVar16 + 0x74);
            local_24.top = *(undefined4 *)(iVar16 + 0x78);
            local_24.right = *(int *)(iVar16 + 0x7c);
            local_24.bottom = *(int *)(iVar16 + 0x80);
            local_34.left = 0;
            local_34.top = 0;
            local_34.right = 0;
            local_34.bottom = 0;
            GetClientRect(*(HWND *)(*(int *)(this + 0x10c) + 0x20),&local_34);
            if (local_34.bottom < local_24.bottom) {
              do {
                pCVar10 = local_38;
                pcVar1 = *(code **)(*(int *)local_38 + 0x1e8);
                guard_check_icall();
                iVar16 = (*pcVar1)();
                if (iVar16 == 0) goto LAB_100d2d03;
                CMFCPopupMenuBar::SetOffset
                          (*(CMFCPopupMenuBar **)(this + 0x10c),
                           *(int *)(*(CMFCPopupMenuBar **)(this + 0x10c) + 0xd4c) + 1);
                CMFCPopupMenu::AdjustScroll((CMFCPopupMenu *)pCVar10,0);
                iVar16 = *(int *)(this + 0x2dc);
                local_24.left = *(int *)(iVar16 + 0x74);
                local_24.top = *(int *)(iVar16 + 0x78);
                local_24.right = *(int *)(iVar16 + 0x7c);
                local_24.bottom = *(int *)(iVar16 + 0x80);
              } while (local_34.bottom < local_24.bottom);
            }
            else {
              pCVar10 = local_38;
              if (local_34.top <= local_24.top) goto LAB_100d2d03;
              do {
                pCVar10 = local_38;
                pcVar1 = *(code **)(*(int *)local_38 + 0x1e4);
                guard_check_icall();
                iVar16 = (*pcVar1)();
                if (iVar16 == 0) goto LAB_100d2d03;
                CMFCPopupMenuBar::SetOffset
                          (*(CMFCPopupMenuBar **)(this + 0x10c),
                           *(int *)(*(CMFCPopupMenuBar **)(this + 0x10c) + 0xd4c) + -1);
                CMFCPopupMenu::AdjustScroll((CMFCPopupMenu *)pCVar10,0);
                iVar16 = *(int *)(this + 0x2dc);
                local_24.left = *(int *)(iVar16 + 0x74);
                local_24.top = *(int *)(iVar16 + 0x78);
                local_24.right = *(int *)(iVar16 + 0x7c);
                local_24.bottom = *(int *)(iVar16 + 0x80);
              } while (local_24.top < local_34.top);
            }
            RedrawWindow(*(HWND *)(*(int *)(this + 0x10c) + 0x20),(RECT *)0x0,(HRGN)0x0,0x105);
            pCVar10 = local_38;
          }
LAB_100d2d03:
          if (*(int **)(pCVar10 + 0x116c) != (int *)0x0) {
            pcVar1 = *(code **)(**(int **)(pCVar10 + 0x116c) + 0x1fc);
            guard_check_icall(*(undefined4 *)(this + 0x10c),*(undefined4 *)(this + 0x2dc));
            (*pcVar1)();
          }
        }
      }
    }
    if (local_40 == (CObject *)0x0) goto LAB_100d2e55;
  }
  if ((*(CObject **)(this + 0x2dc) != (CObject *)0x0) &&
     (pCVar13 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCRibbonButton_101963ec,
                                   *(CObject **)(this + 0x2dc)), local_40 = pCVar13,
     pCVar13 != (CObject *)0x0)) {
    pcVar1 = *(code **)(*(int *)pCVar13 + 0x138);
    guard_check_icall();
    iVar16 = (*pcVar1)();
    if (iVar16 == 0) {
      pcVar1 = *(code **)(*(int *)pCVar13 + 0xdc);
      guard_check_icall();
      iVar16 = (*pcVar1)();
      if (iVar16 == 0) {
        local_3c = (CWnd *)CMFCRibbonPanelMenuBar::GetTopLevelRibbonBar
                                     (*(CMFCRibbonPanelMenuBar **)(this + 0x10c));
        if ((local_3c != (CWnd *)0x0) && (*(CMFCRibbonPanel **)(local_3c + 0x848) == this)) {
          CMFCRibbonBar::DeactivateKeyboardFocus((CMFCRibbonBar *)local_3c,1);
        }
        local_24.left = *(LONG *)(pCVar13 + 0x74);
        local_24.top = *(LONG *)(pCVar13 + 0x78);
        local_24.right = *(LONG *)(pCVar13 + 0x7c);
        local_24.bottom = *(LONG *)(pCVar13 + 0x80);
        pcVar1 = *(code **)(*(int *)local_40 + 0x264);
        guard_check_icall(local_24.left,local_24.top);
        (*pcVar1)();
        pCVar12 = local_3c;
        if ((local_3c != (CWnd *)0x0) &&
           (pCVar15 = CWnd::GetTopLevelFrame(local_3c), pCVar15 != (CFrameWnd *)0x0)) {
          pCVar15 = CWnd::GetTopLevelFrame(pCVar12);
          CWnd::SetFocus((CWnd *)pCVar15);
        }
      }
    }
    else {
      pHVar11 = (HWND)0x0;
      if (*(int *)(this + 0x10c) != 0) {
        pHVar11 = *(HWND *)(*(int *)(this + 0x10c) + 0x20);
      }
      pcVar1 = *(code **)(*(int *)pCVar13 + 0x13c);
      guard_check_icall();
      (*pcVar1)();
      if (((pHVar11 == (HWND)0x0) || (BVar14 = IsWindow(pHVar11), BVar14 != 0)) &&
         (*(int *)(pCVar13 + 0x9c) != 0)) {
        SendMessageW(*(HWND *)(*(int *)(pCVar13 + 0x9c) + 0x20),0x100,0x24,0);
      }
    }
  }
LAB_100d2e55:
  iVar16 = FUN_101490fe();
  return iVar16;
}

