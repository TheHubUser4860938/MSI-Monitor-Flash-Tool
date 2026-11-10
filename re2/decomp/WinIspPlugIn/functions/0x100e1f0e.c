// rea decompile_all
// name: CDockingManager::AdjustDockingLayout
// address: 0x100e1f0e
// body: available
// range: 0x100e1f0e-0x100e24ac inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CDockingManager::AdjustDockingLayout(void *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CDockingManager::AdjustDockingLayout(CDockingManager *this,void *param_1)

{
  code *pcVar1;
  CAutoHideDockSite *pCVar2;
  LONG LVar3;
  LONG LVar4;
  LONG LVar5;
  LONG LVar6;
  LONG LVar7;
  LONG LVar8;
  LONG LVar9;
  LONG LVar10;
  BOOL BVar11;
  CFrameWnd *pCVar12;
  int iVar13;
  undefined4 *puVar14;
  ulong uVar15;
  int iVar16;
  CObject *this_00;
  CPaneDivider *pCVar17;
  HWND pHVar18;
  CWnd *pCVar19;
  CWnd *pCVar20;
  tagRECT *ptVar21;
  int local_5c;
  int local_58;
  int local_54;
  CWnd *local_50;
  int local_4c;
  uint local_48;
  int local_44;
  HDWP local_40;
  int local_3c;
  tagRECT local_38;
  RECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  local_40 = param_1;
  if (((DAT_102474d8 == 0) && (*(int *)(this + 0x154) == 0)) && (*(int *)(this + 0xe4) != 0)) {
    GetClientRect(*(HWND *)(*(int *)(this + 0xe4) + 0x20),(LPRECT)(this + 0xf8));
    BVar11 = IsRectEmpty((RECT *)(this + 0x10));
    if (BVar11 == 0) {
      ((LPRECT)(this + 0xf8))->left = ((RECT *)(this + 0x10))->left;
      *(undefined4 *)(this + 0xfc) = *(undefined4 *)(this + 0x14);
      *(undefined4 *)(this + 0x100) = *(undefined4 *)(this + 0x18);
      *(undefined4 *)(this + 0x104) = *(undefined4 *)(this + 0x1c);
    }
    if (((*(int *)(this + 4) != 0) && (*(int *)(this + 0x2c) != 0)) &&
       (((pCVar12 = DAT_102471dc, DAT_102471dc == (CFrameWnd *)0x0 &&
         (pCVar12 = CWnd::GetTopLevelFrame(*(CWnd **)(this + 0xe4)), pCVar12 == (CFrameWnd *)0x0))
        || (((*(int *)(pCVar12 + 0x20) == 0 ||
             (BVar11 = IsWindow(*(HWND *)(pCVar12 + 0x20)), BVar11 == 0)) ||
            (BVar11 = IsIconic(*(HWND *)(pCVar12 + 0x20)), BVar11 == 0)))))) {
      local_54 = 0;
      local_28.left = *(LONG *)(this + 0x108);
      *(undefined4 *)(this + 0x154) = 1;
      local_28.top = *(LONG *)(this + 0x10c);
      local_28.right = *(LONG *)(this + 0x110);
      local_28.bottom = *(LONG *)(this + 0x114);
      if ((local_40 == (HDWP)0x0) && (*(int *)(this + 0x130) == 0)) {
        local_40 = BeginDeferWindowPos(*(int *)(this + 0x2c));
        local_54 = 1;
      }
      local_18.left = *(LONG *)(this + 0xe8);
      local_18.top = *(LONG *)(this + 0xec);
      local_18.right = *(LONG *)(this + 0xf0);
      local_18.bottom = *(LONG *)(this + 0xf4);
      GetClientRect(*(HWND *)(*(int *)(this + 0xe4) + 0x20),&local_18);
      BVar11 = IsRectEmpty((RECT *)(this + 0x10));
      if (BVar11 == 0) {
        local_18.left = ((RECT *)(this + 0x10))->left;
        local_18.top = *(LONG *)(this + 0x14);
        local_18.right = *(LONG *)(this + 0x18);
        local_18.bottom = *(LONG *)(this + 0x1c);
      }
      CWnd::ClientToScreen(*(CWnd **)(this + 0xe4),&local_18);
      local_44 = *(int *)(this + 0x28);
      local_38.left = 0;
      local_38.top = 0;
      local_38.right = 0;
      local_38.bottom = 0;
      local_3c = local_44;
      if (local_44 != 0) {
        do {
          FUN_10065af5(&local_3c);
          local_44 = local_3c;
          if (local_3c == 0) goto LAB_100e20c4;
          iVar13 = FUN_10051e53(&PTR_s_CDockSite_101ec5c4);
        } while ((iVar13 == 0) &&
                (iVar13 = FUN_10051e53(&PTR_s_CAutoHideDockSite_101f8a30), iVar13 == 0));
        FUN_100c321b(&local_3c);
        local_44 = local_3c;
        if (local_3c != 0) {
          FUN_100c321b(&local_3c);
          local_44 = local_3c;
        }
      }
LAB_100e20c4:
      local_3c = *(int *)(this + 0x24);
joined_r0x100e20cc:
      if (local_3c != 0) {
        puVar14 = (undefined4 *)FUN_100c321b(&local_3c);
        pCVar19 = (CWnd *)*puVar14;
        local_50 = pCVar19;
        uVar15 = CWnd::GetExStyle(pCVar19);
        if (((uVar15 & 0x10000000) != 0) ||
           (((iVar13 = FUN_10051e53(&PTR_s_CPane_101de9e4), iVar13 == 0 &&
             (iVar13 = FUN_10051e53(&PTR_s_CPaneDivider_101f8380), iVar13 == 0)) &&
            ((iVar13 = FUN_10051e53(&PTR_s_CDockSite_101ec5c4), iVar13 == 0 ||
             (((*(int *)(this + 0x130) == 0 && (iVar13 = IsOLEContainerMode(this), iVar13 == 0)) &&
              (*(int *)(this + 0x1e4) == 0)))))))) {
          GetWindowRect(*(HWND *)(pCVar19 + 0x20),&local_38);
          pcVar1 = *(code **)(*(int *)pCVar19 + 0x194);
          guard_check_icall();
          local_48 = (*pcVar1)();
          pcVar1 = *(code **)(*(int *)pCVar19 + 0x164);
          guard_check_icall();
          local_4c = (*pcVar1)();
          pcVar1 = *(code **)(*(int *)pCVar19 + 0x178);
          guard_check_icall();
          iVar13 = (*pcVar1)();
          iVar16 = FUN_10051e53(&PTR_s_CDockablePane_1023db9c);
          if (iVar16 != 0) {
            this_00 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_1023db9c,
                                         (CObject *)pCVar19);
            pCVar17 = CDockablePane::GetDefaultPaneDivider((CDockablePane *)this_00);
            if (pCVar17 != (CPaneDivider *)0x0) goto joined_r0x100e20cc;
          }
          pcVar1 = *(code **)(*(int *)pCVar19 + 0x260);
          guard_check_icall(&local_5c,0,local_4c);
          (*pcVar1)();
          if (local_4c == 0) {
            if ((local_48 & 0x1000) == 0) {
              local_38.left = local_38.right - local_5c;
            }
            else {
              local_38.right = local_5c + local_38.left;
            }
          }
          else if ((local_48 & 0x2000) == 0) {
            local_38.top = local_38.bottom - local_58;
          }
          else {
            local_38.bottom = local_58 + local_38.top;
          }
          AlignByRect(this,(CRect *)&local_18,(CRect *)&local_38,local_48,local_4c,iVar13);
          LVar6 = local_38.bottom;
          LVar5 = local_38.right;
          LVar4 = local_38.top;
          LVar3 = local_38.left;
          pCVar19 = local_50;
          iVar13 = FUN_10051e53(&PTR_s_CDockSite_101ec5c4);
          pCVar20 = pCVar19;
          LVar7 = local_38.left;
          LVar8 = local_38.top;
          LVar9 = local_38.right;
          LVar10 = local_38.bottom;
          if (iVar13 != 0) {
            CWnd::ScreenToClient(pCVar19,&local_38);
            pcVar1 = *(code **)(*(int *)pCVar19 + 0x164);
            guard_check_icall();
            iVar13 = (*pcVar1)();
            LVar7 = LVar3;
            LVar8 = LVar4;
            LVar9 = LVar5;
            LVar10 = LVar6;
            if ((iVar13 == 0) ||
               (local_38.right == local_38.left || local_38.right - local_38.left < 0)) {
              pcVar1 = *(code **)(*(int *)pCVar19 + 0x164);
              guard_check_icall();
              iVar13 = (*pcVar1)();
              pCVar20 = local_50;
              if ((iVar13 != 0) ||
                 (local_38.bottom == local_38.top || local_38.bottom - local_38.top < 0))
              goto LAB_100e22d0;
            }
            pcVar1 = *(code **)(*(int *)pCVar19 + 0x298);
            guard_check_icall(&local_38);
            (*pcVar1)();
            pCVar20 = local_50;
          }
LAB_100e22d0:
          local_38.bottom = LVar10;
          local_38.right = LVar9;
          local_38.top = LVar8;
          local_38.left = LVar7;
          iVar13 = FUN_10051e53(&PTR_s_CPaneDivider_101f8380);
          if (iVar13 == 0) {
            ptVar21 = &local_38;
            pHVar18 = GetParent(*(HWND *)(pCVar20 + 0x20));
            pCVar19 = CWnd::FromHandle(pHVar18);
            CWnd::ScreenToClient(pCVar19,ptVar21);
            pcVar1 = *(code **)(*(int *)pCVar20 + 0x238);
            guard_check_icall(0,local_38.left,local_38.top,local_38.right - local_38.left,
                              local_38.bottom - local_38.top,0x14,local_40);
            local_40 = (HDWP)(*pcVar1)();
          }
          else {
            pcVar1 = *(code **)(*(int *)pCVar20 + 0x284);
            guard_check_icall(&local_38,&local_40);
            (*pcVar1)();
          }
          if ((local_48 & 0x2000) == 0) {
            if ((local_48 & 0x8000) == 0) {
              if ((local_48 & 0x1000) == 0) {
                local_18.right = local_18.right + (LVar3 - LVar5);
              }
              else {
                local_18.left = local_18.left + (LVar5 - LVar3);
              }
            }
            else {
              local_18.bottom = local_18.bottom + (LVar4 - LVar6);
            }
          }
          else {
            local_18.top = local_18.top + (LVar6 - LVar4);
          }
          if (local_44 == local_3c) {
            *(LONG *)(this + 0x108) = local_18.left;
            *(LONG *)(this + 0x10c) = local_18.top;
            *(LONG *)(this + 0x110) = local_18.right;
            *(LONG *)(this + 0x114) = local_18.bottom;
          }
        }
        goto joined_r0x100e20cc;
      }
      *(LONG *)(this + 0xf8) = local_18.left;
      *(LONG *)(this + 0xfc) = local_18.top;
      *(LONG *)(this + 0x100) = local_18.right;
      *(LONG *)(this + 0x104) = local_18.bottom;
      BVar11 = IsRectEmpty((RECT *)(this + 0x108));
      if ((BVar11 != 0) || (iVar13 = IsOLEContainerMode(this), iVar13 != 0)) {
        ((RECT *)(this + 0x108))->left = local_18.left;
        *(LONG *)(this + 0x10c) = local_18.top;
        *(LONG *)(this + 0x110) = local_18.right;
        *(LONG *)(this + 0x114) = local_18.bottom;
      }
      CWnd::ScreenToClient(*(CWnd **)(this + 0xe4),(tagRECT *)(this + 0xf8));
      CWnd::ScreenToClient(*(CWnd **)(this + 0xe4),(tagRECT *)(this + 0x108));
      BVar11 = EqualRect((tagRECT *)(this + 0x108),&local_28);
      if (BVar11 == 0) {
        HideAutoHidePanes(this,(CDockablePane *)0x0,1);
      }
      local_3c = *(int *)(this + 0x24);
      while (local_3c != 0) {
        puVar14 = (undefined4 *)FUN_100c321b(&local_3c);
        pCVar2 = (CAutoHideDockSite *)*puVar14;
        iVar13 = FUN_10051e53(&PTR_s_CAutoHideDockSite_101f8a30);
        if (iVar13 != 0) {
          *(undefined4 *)(pCVar2 + 0x150) = 0;
          *(undefined4 *)(pCVar2 + 0x154) = 0;
          CalcPaneOffset(this,pCVar2);
        }
      }
      if (local_54 != 0) {
        EndDeferWindowPos(local_40);
      }
      if ((*(int **)(this + 0xe4))[0x2b] != 0) {
        pcVar1 = *(code **)(**(int **)(this + 0xe4) + 0x178);
        guard_check_icall(1);
        (*pcVar1)();
      }
      *(undefined4 *)(this + 0x154) = 0;
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

