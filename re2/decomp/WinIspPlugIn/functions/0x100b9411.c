// rea decompile_all
// name: CMFCPopupMenu::RecalcLayout
// address: 0x100b9411
// body: available
// range: 0x100b9411-0x100ba458 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCPopupMenu::RecalcLayout(int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCPopupMenu::RecalcLayout(CMFCPopupMenu *this,int param_1)

{
  code *pcVar1;
  CWnd *pCVar2;
  bool bVar3;
  int *piVar4;
  BOOL BVar5;
  int iVar6;
  HMONITOR hMonitor;
  ulong uVar7;
  uint *puVar8;
  int iVar9;
  AFX_GLOBAL_DATA *pAVar10;
  CMFCVisualManager *pCVar11;
  CMFCPopupMenu *pCVar12;
  LONG LVar13;
  ANIMATION_TYPE AVar14;
  undefined4 uVar15;
  uint uVar16;
  uint uVar17;
  tagMONITORINFO *lpmi;
  uint uVar18;
  tagPOINT local_b8;
  int *local_b0;
  CMFCPopupMenu *local_ac;
  int local_a8;
  CObject *local_a4;
  int local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  tagMONITORINFO local_90;
  tagRECT local_68;
  tagRECT local_58;
  undefined1 local_48 [12];
  int local_3c;
  tagRECT local_38;
  undefined1 local_28 [12];
  int local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  pcVar1 = *(code **)(*(int *)this + 0x1c8);
  guard_check_icall();
  piVar4 = (int *)(*pcVar1)();
  local_b0 = piVar4;
  BVar5 = IsWindow(*(HWND *)(this + 0x20));
  if ((((BVar5 == 0) || (piVar4 == (int *)0x0)) || (BVar5 = IsWindow((HWND)piVar4[8]), BVar5 == 0))
     || (piVar4[0x2f7] != 0)) goto LAB_100ba447;
  if (*(int **)(this + 0x158) == (int *)0x0) {
LAB_100b94b3:
    local_a8 = 0;
  }
  else {
    pcVar1 = *(code **)(**(int **)(this + 0x158) + 0xf4);
    guard_check_icall();
    iVar6 = (*pcVar1)();
    if ((iVar6 == 0) || (DAT_10245ca8 != 0)) goto LAB_100b94b3;
    local_a8 = 1;
  }
  lpmi = &local_90;
  local_38.left = 0;
  local_38.top = 0;
  local_38.right = 0;
  local_38.bottom = 0;
  local_90.cbSize = 0x28;
  hMonitor = MonitorFromPoint(*(POINT *)(this + 0x138),2);
  BVar5 = GetMonitorInfoW(hMonitor,lpmi);
  if (BVar5 == 0) {
    SystemParametersInfoW(0x30,0,&local_38,0);
  }
  else {
    CopyRect(&local_38,&local_90.rcWork);
  }
  pcVar1 = *(code **)(*(int *)this + 0x20c);
  guard_check_icall();
  local_a0 = (*pcVar1)();
  uVar7 = CWnd::GetExStyle((CWnd *)this);
  local_9c = uVar7 & 0x400000;
  if (*(int *)(this + 0x1130) != 0) {
    if (local_9c == 0) {
      iVar6 = (local_38.right + local_a0 * -2) - *(int *)(this + 0x138);
    }
    else {
      iVar6 = (*(int *)(this + 0x138) + local_a0 * -2) - local_38.left;
    }
    iVar9 = *(int *)(this + 0x1148);
    if (iVar6 <= *(int *)(this + 0x1148)) {
      iVar9 = iVar6;
    }
    iVar6 = *(int *)(this + 0x114c);
    *(int *)(this + 0x1148) = iVar9;
    local_a4 = (CObject *)(local_a0 * 2);
    if (((*(int *)(this + 0x1154) - *(int *)(this + 0x115c)) - *(int *)(this + 0x13c)) +
        local_a0 * -2 + local_38.bottom <= iVar6) {
      iVar6 = ((*(int *)(this + 0x1154) - *(int *)(this + 0x115c)) - *(int *)(this + 0x13c)) +
              local_a0 * -2 + local_38.bottom;
    }
    *(int *)(this + 0x114c) = iVar6;
  }
  iVar6 = *(int *)(this + 0x138);
  iVar9 = iVar6;
  if (local_38.right <= iVar6) {
    iVar9 = local_38.right;
  }
  LVar13 = local_38.left;
  if ((local_38.left <= iVar9) && (LVar13 = iVar6, local_38.right <= iVar6)) {
    LVar13 = local_38.right;
  }
  *(LONG *)(this + 0x138) = LVar13;
  if (*(int *)(this + 0x158) == 0) {
    iVar6 = *(int *)(this + 0x13c);
    iVar9 = iVar6;
    if (local_38.bottom <= iVar6) {
      iVar9 = local_38.bottom;
    }
    LVar13 = local_38.top;
    if ((local_38.top <= iVar9) && (LVar13 = iVar6, local_38.bottom <= iVar6)) {
      LVar13 = local_38.bottom;
    }
    *(LONG *)(this + 0x13c) = LVar13;
  }
  local_94 = *(uint *)(this + 0x1148);
  local_98 = *(uint *)(this + 0x114c);
  if ((*(int *)(this + 0x1130) == 0) && (*(int *)(this + 0x1134) == 0)) {
    pcVar1 = *(code **)(*local_b0 + 0x2a4);
    guard_check_icall(local_28 + 8,1);
    puVar8 = (uint *)(*pcVar1)();
    local_94 = *puVar8;
    local_98 = puVar8[1];
  }
  bVar3 = false;
  uVar16 = local_94;
  uVar17 = local_98;
  if ((*(int *)(this + 0x1130) == 0) && (*(int *)(this + 0x1134) == 0)) {
    uVar16 = local_94 + local_a0 * 2;
    uVar17 = local_98 + local_a0 * 2;
    local_98 = uVar17;
    local_94 = uVar16;
    if ((*(int *)(this + 0xf7c) != 0) && (*(int *)(this + 0xf80) != 0)) {
      iVar6 = GetSystemMetrics(2);
      uVar16 = uVar16 + iVar6;
      local_94 = uVar16;
      BVar5 = IsRectEmpty((RECT *)(this + 0x1150));
      if (BVar5 == 0) {
        iVar6 = GetSystemMetrics(2);
        *(int *)(this + 0x1158) = *(int *)(this + 0x1158) + iVar6;
      }
      bVar3 = true;
    }
    iVar6 = *(int *)(this + 0xf60);
    if (-1 < iVar6) {
      if (iVar6 < 2) {
        uVar16 = uVar16 + *(int *)(this + 0xf58);
        local_94 = uVar16;
      }
      else if (iVar6 < 4) {
        uVar17 = uVar17 + *(int *)(this + 0xf58);
        local_98 = uVar17;
      }
    }
  }
  if (*(int *)(this + 0x154) == 0) {
    if (local_a8 != 0) {
      local_18.left = local_a0;
      local_18.top = local_a0;
      local_18.right = uVar16 - local_a0;
      local_18.bottom = local_a0 + 10;
      *(int *)(this + 0x107c) = local_a0;
      *(int *)(this + 0x1080) = local_a0;
      *(LONG *)(this + 0x1084) = local_18.right;
      *(LONG *)(this + 0x1088) = local_18.bottom;
      uVar17 = local_98 + 10;
      local_98 = uVar17;
      if ((DAT_10245ca8 == 0) &&
         ((this + 0x1090 == (CMFCPopupMenu *)0x0 || (*(int *)(this + 0x10b0) == 0)))) {
        pcVar1 = *(code **)(*(int *)(this + 0x1090) + 0x164);
        guard_check_icall(this,0);
        (*pcVar1)();
        SendMessageW(*(HWND *)(this + 0x10b0),0x401,1,0);
        pAVar10 = GetGlobalData();
        if (*(int *)(pAVar10 + 0x1c4) != -1) {
          pAVar10 = GetGlobalData();
          SendMessageW(*(HWND *)(this + 0x10b0),0x418,0,*(LPARAM *)(pAVar10 + 0x1c4));
        }
        CToolTipCtrl::AddTool
                  ((CToolTipCtrl *)(this + 0x1090),(CWnd *)this,0x3e9c,(tagRECT *)(this + 0x107c),1)
        ;
      }
    }
  }
  else {
    iVar6 = GetSystemMetrics(0x33);
    iVar9 = GetSystemMetrics(6);
    uVar17 = uVar17 + iVar6 + iVar9 * 2 + 5;
    local_98 = uVar17;
  }
  iVar6 = *(int *)(this + 0xfac);
  if ((iVar6 != -1) && (iVar6 < (int)uVar17)) {
    if ((*(int *)(this + 0x1130) == 0) && (*(int *)(this + 0x1134) == 0)) {
      iVar9 = local_a0 * 2;
      local_3c = iVar6 + local_a0 * -2;
      pcVar1 = *(code **)(*local_b0 + 0x354);
      guard_check_icall();
      iVar6 = (*pcVar1)();
      *(undefined4 *)(this + 0xf40) = 1;
      uVar17 = (iVar9 - local_3c % iVar6) + 2 + local_3c;
      local_98 = uVar17;
    }
    *(undefined4 *)(this + 0xf7c) = 1;
  }
  if (*(int *)(this + 0x113c) != 0) {
    local_18.left = local_a0;
    local_18.right = local_94 - local_a0;
    iVar6 = ((*(int *)(this + 0x1140) < 1) - 1 & 3) + 9;
    local_18.top = local_a0;
    if (*(int *)(this + 0x1138) == 0) {
      local_18.top = uVar17 - local_a0;
    }
    local_18.bottom = iVar6 + local_18.top;
    *(int *)(this + 0x1150) = local_a0;
    *(LONG *)(this + 0x1154) = local_18.top;
    *(LONG *)(this + 0x1158) = local_18.right;
    *(LONG *)(this + 0x115c) = local_18.bottom;
    uVar17 = local_98 + iVar6;
    local_98 = uVar17;
  }
  if ((local_9c == 0) && (*(int *)(this + 0xf44) == 0)) {
    local_a8 = 0;
  }
  else {
    local_a8 = 1;
  }
  if (*(int *)(this + 0x158) == 0) {
    local_a4 = (CObject *)0x0;
  }
  else {
    local_a4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCMenuBar_1023dad8,
                                  *(CObject **)(*(int *)(this + 0x158) + 0x6c));
    if (local_a4 != (CObject *)0x0) {
      pcVar1 = *(code **)(*(int *)local_a4 + 0x170);
      guard_check_icall();
      iVar6 = (*pcVar1)();
      if (iVar6 != 0) {
        iVar6 = CMFCMenuBar::GetFloatPopupDirection
                          ((CMFCMenuBar *)local_a4,*(CMFCToolBarMenuButton **)(this + 0x158));
        if (iVar6 == 2) {
          iVar6 = *(int *)(*(int *)(this + 0x158) + 0x60);
          iVar9 = *(int *)(*(int *)(this + 0x158) + 0x58);
          *(undefined4 *)(this + 0xf30) = 2;
          *(uint *)(this + 0x13c) = (((*(int *)(this + 0x144) - iVar6) + iVar9) - uVar17) + 1;
        }
        else if (iVar6 == 3) {
          iVar6 = *(int *)(this + 0x158);
          if (local_9c == 0) {
            iVar9 = (*(int *)(this + 0x140) + *(int *)(iVar6 + 0x5c)) - *(int *)(iVar6 + 0x54);
          }
          else {
            iVar9 = (*(int *)(this + 0x140) - *(int *)(iVar6 + 0x5c)) + *(int *)(iVar6 + 0x54);
          }
          *(int *)(this + 0x138) = iVar9;
          iVar9 = *(int *)(iVar6 + 0x58);
          iVar6 = *(int *)(iVar6 + 0x60);
          *(undefined4 *)(this + 0xf30) = 3;
          *(int *)(this + 0x13c) = iVar9 + 1 + (*(int *)(this + 0x144) - iVar6);
        }
        else if (iVar6 == 4) {
          iVar6 = *(int *)(*(int *)(this + 0x158) + 0x60);
          iVar9 = *(int *)(*(int *)(this + 0x158) + 0x58);
          *(undefined4 *)(this + 0xf30) = 4;
          *(int *)(this + 0x13c) = iVar9 + 1 + (*(int *)(this + 0x144) - iVar6);
          if (local_9c == 0) {
            iVar6 = *(int *)(this + 0x140) - local_94;
            *(int *)(this + 0x138) = iVar6;
            LVar13 = local_38.left;
            if (iVar6 < local_38.left) goto LAB_100b9a2c;
          }
          else {
            iVar6 = *(int *)(this + 0x140) + local_94;
            *(int *)(this + 0x138) = iVar6;
            LVar13 = local_38.right;
            if (local_38.right < iVar6) {
LAB_100b9a2c:
              *(undefined4 *)(this + 0xf30) = 0;
              *(LONG *)(this + 0x138) = LVar13;
            }
          }
        }
      }
    }
  }
  local_58.left = 0;
  local_58.top = 0;
  local_58.right = 0;
  local_58.bottom = 0;
  SetRectEmpty(&local_58);
  local_3c = 0;
  pCVar11 = CMFCVisualManager::GetInstance();
  pcVar1 = *(code **)(*(int *)pCVar11 + 0x2f0);
  guard_check_icall();
  iVar6 = (*pcVar1)();
  if ((((iVar6 != 0) && (pCVar12 = GetParentPopupMenu(this), pCVar12 != (CMFCPopupMenu *)0x0)) &&
      (local_ac = *(CMFCPopupMenu **)(this + 0x158), local_ac != (CMFCPopupMenu *)0x0)) &&
     (*(int *)(local_ac + 0xb4) != 0)) {
    if (local_9c == 0) {
      RedrawWindow(*(HWND *)(pCVar12 + 0x20),(RECT *)0x0,(HRGN)0x0,0x105);
    }
    if ((*(int *)(pCVar12 + 0x1160) != 0) && (*(int *)(this + 0x1160) == 0)) {
      local_58.left = *(LONG *)(local_ac + 0x54);
      local_58.top = *(LONG *)(local_ac + 0x58);
      local_58.right = *(LONG *)(local_ac + 0x5c);
      local_58.bottom = *(LONG *)(local_ac + 0x60);
      pCVar2 = *(CWnd **)(local_ac + 0x6c);
      if ((pCVar2 != (CWnd *)0x0) && (*(int *)(pCVar2 + 0x20) != 0)) {
        CWnd::ClientToScreen(pCVar2,&local_58);
        *(LONG *)(this + 0x13c) = local_58.top;
        local_3c = 1;
        if (*(int *)(this + 0xf30) == 4) {
          LVar13 = local_58.left;
          if (local_9c == 0) {
            LVar13 = local_58.left - local_94;
          }
        }
        else {
          LVar13 = local_58.right;
          if (local_9c != 0) {
            LVar13 = local_58.right + local_94;
          }
        }
        *(LONG *)(this + 0x138) = LVar13;
      }
    }
  }
  uVar16 = local_94;
  if (((local_9c != 0) && ((int)(*(int *)(this + 0x138) - local_94) < local_38.left)) ||
     ((local_a8 == 0 && (local_38.right < (int)(*(int *)(this + 0x138) + local_94))))) {
    local_ac = GetParentPopupMenu(this);
    if (local_ac == (CMFCPopupMenu *)0x0) {
      if (local_a4 != (CObject *)0x0) {
        pcVar1 = *(code **)(*(int *)local_a4 + 0x164);
        guard_check_icall();
        iVar6 = (*pcVar1)();
        uVar16 = local_94;
        if (iVar6 == 0) {
          iVar6 = *(int *)(this + 0x158);
          local_18.left = *(int *)(iVar6 + 0x54);
          local_18.top = *(int *)(iVar6 + 0x58);
          local_18.right = *(int *)(iVar6 + 0x5c);
          local_18.bottom = *(int *)(iVar6 + 0x60);
          CWnd::ClientToScreen((CWnd *)local_a4,&local_18);
          if (local_9c == 0) {
            iVar6 = local_18.left - local_94;
          }
          else {
            iVar6 = local_18.right + local_94;
          }
          *(int *)(this + 0x138) = iVar6;
          if (local_38.right <= (int)(iVar6 + local_94)) {
            *(uint *)(this + 0x138) = (local_38.right - local_94) + -1;
          }
          *(undefined4 *)(this + 0xf30) = 4;
          uVar16 = local_94;
          goto LAB_100b9d6e;
        }
      }
      if (local_9c == 0) {
        if (*(int *)(this + 0xf44) == 0) {
          iVar6 = (local_38.right - uVar16) + -1;
        }
        else {
          iVar6 = local_38.left + 1;
        }
      }
      else {
        iVar6 = local_38.left + 1 + uVar16;
      }
      *(int *)(this + 0x138) = iVar6;
      *(undefined4 *)(this + 0xf30) = 0;
    }
    else {
      local_28._0_4_ = 0;
      local_28._4_4_ = 0;
      local_28._8_4_ = 0;
      local_1c = 0;
      GetWindowRect(*(HWND *)(local_ac + 0x20),(LPRECT)local_28);
      if (local_9c == 0) {
        iVar6 = local_28._0_4_ - uVar16;
      }
      else {
        iVar6 = local_28._8_4_ + uVar16;
      }
      *(int *)(this + 0x138) = iVar6;
      if ((*(CMFCRibbonBaseElement **)(this + 0x116c) != (CMFCRibbonBaseElement *)0x0) &&
         (iVar6 = CMFCRibbonBaseElement::IsMenuMode(*(CMFCRibbonBaseElement **)(this + 0x116c)),
         iVar6 == 0)) {
        iVar6 = *(int *)(this + 0x116c);
        local_28._0_4_ = *(int *)(iVar6 + 0x74);
        local_28._4_4_ = *(int *)(iVar6 + 0x78);
        local_28._8_4_ = *(int *)(iVar6 + 0x7c);
        local_1c = *(int *)(iVar6 + 0x80);
        CWnd::ClientToScreen((CWnd *)local_ac,(tagRECT *)local_28);
        if (local_9c == 0) {
          iVar6 = local_28._8_4_ - local_94;
        }
        else {
          iVar6 = local_28._0_4_ + local_94;
        }
        *(int *)(this + 0x138) = iVar6;
        uVar16 = local_94;
      }
      *(uint *)(this + 0xf30) = 4 - (uint)(local_9c != 0);
    }
LAB_100b9d6e:
    if (local_9c == 0) {
      if (*(int *)(this + 0x138) < local_38.left) {
        *(LONG *)(this + 0x138) = local_38.left;
LAB_100b9d95:
        *(undefined4 *)(this + 0xf30) = 0;
      }
    }
    else if (local_38.right < *(int *)(this + 0x138)) {
      *(LONG *)(this + 0x138) = local_38.right;
      goto LAB_100b9d95;
    }
    if (*(int *)(this + 0xf78) == 0) {
      AVar14 = GetAnimationType(0);
      if (AVar14 != 1) {
        AVar14 = GetAnimationType(0);
        if (AVar14 != 3) goto LAB_100b9dc5;
        *(undefined4 *)(this + 0xf70) = 0;
      }
      *(undefined4 *)(this + 0xf6c) = 0;
    }
  }
LAB_100b9dc5:
  uVar17 = local_98;
  if (local_38.bottom < (int)(*(int *)(this + 0x13c) + local_98)) {
    local_b8.y = *(int *)(this + 0x115c) - *(int *)(this + 0x1154);
    if (*(int *)(this + 0x113c) != 0) {
      local_18.left = local_a0;
      local_18.top = local_a0;
      *(undefined4 *)(this + 0x1138) = 1;
      local_18.right = uVar16 - local_a0;
      local_18.bottom = local_b8.y + local_a0;
      *(int *)(this + 0x1150) = local_a0;
      *(int *)(this + 0x1154) = local_a0;
      *(LONG *)(this + 0x1158) = local_18.right;
      *(LONG *)(this + 0x115c) = local_18.bottom;
    }
    *(undefined4 *)(this + 0xf70) = 0;
    local_68.left = 0;
    local_68.top = 0;
    local_68.right = 0;
    local_68.bottom = 0;
    pcVar1 = *(code **)(*(int *)this + 0x1d4);
    guard_check_icall(&local_68);
    iVar6 = (*pcVar1)();
    if (((iVar6 == 0) || (*(int *)(this + 0xf30) == 4)) || (*(int *)(this + 0xf30) == 3)) {
      if (local_3c == 0) {
        *(uint *)(this + 0x13c) = *(int *)(this + 0x13c) - uVar17;
        pCVar12 = GetParentPopupMenu(this);
        if (pCVar12 != (CMFCPopupMenu *)0x0) {
          pcVar1 = *(code **)(*local_b0 + 0x354);
          guard_check_icall();
          iVar6 = (*pcVar1)();
          *(int *)(this + 0x13c) = *(int *)(this + 0x13c) + iVar6 + local_a0 * 2;
        }
      }
      else {
        *(uint *)(this + 0x13c) = (local_58.bottom - uVar17) + -1;
      }
    }
    else {
      local_1c = 0;
      local_28._8_4_ = local_68.right;
      ClientToScreen(*(HWND *)(iVar6 + 0x20),(LPPOINT)(local_28 + 8));
      local_48._8_4_ = 0;
      local_3c = local_68.top - uVar17;
      ClientToScreen(*(HWND *)(iVar6 + 0x20),(LPPOINT)(local_48 + 8));
      if (local_3c < 0) {
        local_a8 = local_3c + uVar17;
        local_98 = 1;
        if (*(int *)(this + 0xf7c) != 0) {
          if ((*(int *)(this + 0x158) != 0) &&
             (local_ac = (CMFCPopupMenu *)
                         AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBar_1023d640,
                                            *(CObject **)(*(int *)(this + 0x158) + 0x6c)),
             local_ac != (CMFCPopupMenu *)0x0)) {
            pcVar1 = *(code **)(*(int *)local_ac + 0x164);
            guard_check_icall();
            iVar6 = (*pcVar1)();
            if ((iVar6 != 0) &&
               (pCVar12 = GetParentPopupMenu(this), pCVar12 == (CMFCPopupMenu *)0x0))
            goto LAB_100b9f2e;
          }
          local_98 = 0;
        }
LAB_100b9f2e:
        if ((local_38.bottom - local_a8 < local_a8 - local_38.top) && (local_98 != 0)) {
          *(undefined4 *)(this + 0xf30) = 0;
          uVar17 = uVar17 + local_3c;
          *(LONG *)(this + 0x13c) = local_38.top;
        }
        else {
          uVar17 = local_38.bottom - *(int *)(this + 0x13c);
          *(undefined4 *)(this + 0xf70) = 1;
          local_98 = uVar17;
          if (*(int *)(this + 0x113c) != 0) {
            *(undefined4 *)(this + 0x1138) = 0;
            local_18.right = local_94 - local_a0;
            local_18.left = local_a0;
            local_18.top = (uVar17 - local_b8.y) - local_a0;
            local_18.bottom = local_b8.y + local_18.top;
            *(int *)(this + 0x1150) = local_a0;
            *(LONG *)(this + 0x1154) = local_18.top;
            *(LONG *)(this + 0x1158) = local_18.right;
            *(LONG *)(this + 0x115c) = local_18.bottom;
          }
        }
        *(undefined4 *)(this + 0xf40) = 1;
        *(undefined4 *)(this + 0xf7c) = 1;
      }
      else {
        *(int *)(this + 0x13c) = local_3c;
        if (local_a4 == (CObject *)0x0) {
LAB_100ba018:
          uVar15 = 0;
        }
        else {
          pcVar1 = *(code **)(*(int *)local_a4 + 0x164);
          guard_check_icall();
          iVar6 = (*pcVar1)();
          if (iVar6 == 0) goto LAB_100ba018;
          uVar15 = 2;
        }
        *(undefined4 *)(this + 0xf30) = uVar15;
      }
    }
    if (*(int *)(this + 0x13c) < local_38.top) {
      *(undefined4 *)(this + 0xf30) = 0;
      *(LONG *)(this + 0x13c) = local_38.top;
    }
    iVar6 = *(int *)(this + 0x13c);
    if (local_38.bottom < (int)(iVar6 + uVar17)) {
      *(undefined4 *)(this + 0xf40) = 1;
      *(undefined4 *)(this + 0xf7c) = 1;
      uVar17 = local_38.bottom - iVar6;
    }
  }
  else {
    iVar6 = *(int *)(this + 0x13c);
  }
  if (iVar6 < local_38.top) {
    if (((*(int *)(this + 0x158) == 0) || (*(int *)(*(int *)(this + 0x158) + 0x6c) == 0)) ||
       (pCVar12 = GetParentPopupMenu(this), pCVar12 != (CMFCPopupMenu *)0x0)) {
      *(LONG *)(this + 0x13c) = local_38.top;
    }
    else {
      local_28._8_4_ = *(int *)(*(int *)(this + 0x158) + 0x5c);
      local_1c = 0;
      ClientToScreen(*(HWND *)(*(int *)(*(int *)(this + 0x158) + 0x6c) + 0x20),
                     (LPPOINT)(local_28 + 8));
      local_b8.y = *(int *)(*(int *)(this + 0x158) + 0x60);
      local_b8.x = 0;
      ClientToScreen(*(HWND *)(*(int *)(*(int *)(this + 0x158) + 0x6c) + 0x20),&local_b8);
      *(LONG *)(this + 0x13c) = local_b8.y;
      if (local_a4 == (CObject *)0x0) {
LAB_100ba167:
        uVar15 = 0;
      }
      else {
        pcVar1 = *(code **)(*(int *)local_a4 + 0x164);
        guard_check_icall();
        iVar6 = (*pcVar1)();
        if (iVar6 == 0) goto LAB_100ba167;
        uVar15 = 1;
      }
      *(undefined4 *)(this + 0xf30) = uVar15;
    }
    if (local_38.bottom < (int)(*(int *)(this + 0x13c) + uVar17)) {
      *(LONG *)(this + 0x13c) = local_38.top;
      if (local_38.bottom - local_38.top < (int)uVar17) {
        *(undefined4 *)(this + 0xf40) = 1;
        *(undefined4 *)(this + 0xf7c) = 1;
        uVar17 = local_38.bottom - local_38.top;
      }
      *(undefined4 *)(this + 0xf30) = 0;
    }
  }
  if (((!bVar3) && (*(int *)(this + 0xf7c) != 0)) &&
     ((*(int *)(this + 0xf80) != 0 &&
      ((*(int *)(this + 0x1130) == 0 && (*(int *)(this + 0x1134) == 0)))))) {
    iVar6 = GetSystemMetrics(2);
    local_94 = local_94 + iVar6;
    BVar5 = IsRectEmpty((RECT *)(this + 0x1150));
    if (BVar5 == 0) {
      iVar6 = GetSystemMetrics(2);
      *(int *)(this + 0x1158) = *(int *)(this + 0x1158) + iVar6;
    }
  }
  *(uint *)(this + 0x148) = local_94;
  *(uint *)(this + 0x14c) = uVar17;
  AVar14 = GetAnimationType(0);
  if (((AVar14 != 0) || (*(int *)(this + 0xf74) != 0)) || (DAT_10245ca8 != 0)) {
    uVar16 = local_94;
    if (DAT_10245ca8 == 0) {
      uVar16 = local_94 + *(int *)(this + 0x105c);
      uVar17 = uVar17 + *(int *)(this + 0x105c);
    }
    if (*(int *)(this + 0x154) == 0) {
      uVar18 = 0x14;
      iVar6 = *(int *)(this + 0x13c);
      iVar9 = *(int *)(this + 0x138) - (-(uint)(local_9c != 0) & uVar16);
    }
    else {
      uVar18 = 0x16;
      iVar6 = -1;
      iVar9 = -1;
    }
    CWnd::SetWindowPos((CWnd *)this,(CWnd *)0x0,iVar9,iVar6,uVar16,uVar17,uVar18);
    if (DAT_10245ca8 != 0) {
      pcVar1 = *(code **)(*local_b0 + 0x3e4);
      guard_check_icall();
      (*pcVar1)();
    }
  }
  if (((*(int *)(this + 0x105c) != 0) && (DAT_10245ca8 == 0)) &&
     ((iVar6 = *(int *)(this + 0x158), iVar6 != 0 && (*(int *)(iVar6 + 0x6c) != 0)))) {
    local_ac = *(CMFCPopupMenu **)(this + 0xf48);
    *(undefined4 *)(this + 0xf48) = 1;
    pCVar2 = *(CWnd **)(iVar6 + 0x6c);
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    local_28._0_4_ = 0;
    local_28._4_4_ = 0;
    local_28._8_4_ = 0;
    local_1c = 0;
    local_b8.y = (LONG)pCVar2;
    GetWindowRect(*(HWND *)(this + 0x20),(LPRECT)local_28);
    if (local_9c == 0) {
      local_68.left = local_28._8_4_ + 1;
    }
    else {
      local_68.left = (local_28._0_4_ - *(int *)(this + 0x105c)) + -1;
    }
    local_68.right = *(int *)(this + 0x105c) + local_68.left;
    local_68.bottom = *(int *)(this + 0x105c) + local_1c;
    local_68.top = local_28._4_4_;
    CWnd::ScreenToClient(pCVar2,&local_68);
    BVar5 = IntersectRect(&local_18,&local_68,(RECT *)(*(int *)(this + 0x158) + 0x54));
    if (BVar5 != 0) {
      InvalidateRect(*(HWND *)(pCVar2 + 0x20),(RECT *)(*(int *)(this + 0x158) + 0x54),1);
      UpdateWindow(*(HWND *)(pCVar2 + 0x20));
    }
    LVar13 = local_b8.y;
    local_48._8_4_ = local_28._8_4_ + *(int *)(this + 0x105c);
    local_48._4_4_ = local_1c + 1;
    local_48._0_4_ = local_28._0_4_;
    local_3c = local_48._4_4_ + *(int *)(this + 0x105c);
    CWnd::ScreenToClient((CWnd *)local_b8.y,(tagRECT *)local_48);
    BVar5 = IntersectRect(&local_18,(RECT *)local_48,(RECT *)(*(int *)(this + 0x158) + 0x54));
    if (BVar5 != 0) {
      InvalidateRect(*(HWND *)(LVar13 + 0x20),(RECT *)(*(int *)(this + 0x158) + 0x54),1);
      UpdateWindow(*(HWND *)(LVar13 + 0x20));
    }
    *(CMFCPopupMenu **)(this + 0xf48) = local_ac;
  }
  if (((*(int *)(this + 0xf7c) != 0) && (*(int *)(this + 0xf80) != 0)) &&
     ((*(int *)(this + 0x1130) == 0 && (*(int *)(this + 0x1134) == 0)))) {
    RedrawWindow(*(HWND *)(this + 0x20),(RECT *)0x0,(HRGN)0x0,0x105);
  }
LAB_100ba447:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

