// rea decompile_all
// name: FUN_0052dfac
// address: 0x52dfac
// body: available
// range: 0x52dfac-0x52e58e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x52e58a to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0052dfac(void)

{
  double dVar1;
  code *pcVar2;
  int iVar3;
  AFX_GLOBAL_DATA *pAVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  HWND pHVar8;
  CWnd *pCVar9;
  CMFCOutlookBarTabCtrl *in_ECX;
  CMFCOutlookBarTabCtrl *pCVar10;
  CObject *pCVar11;
  undefined1 local_3c [4];
  int local_38;
  LPRECT local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  if (((in_ECX == (CMFCOutlookBarTabCtrl *)0x0) || (*(int *)(in_ECX + 0x20) == 0)) ||
     (*(int *)(in_ECX + 0x110) == 0)) goto LAB_0052e51e;
  local_20 = CMFCOutlookBarTabCtrl::IsMode2003(in_ECX);
  local_28 = 0;
  if (local_20 != 0) {
    if ((in_ECX == (CMFCOutlookBarTabCtrl *)0xfffffd5c) || (*(int *)(in_ECX + 0x2a8) == 0)) {
      pcVar2 = *(code **)(*(int *)in_ECX + 0x238);
      guard_check_icall(local_3c);
      iVar6 = (*pcVar2)();
      iVar6 = *(int *)(iVar6 + 4);
    }
    else {
      iVar6 = *(int *)(in_ECX + 0x2a0);
    }
    if (iVar6 == 0) {
      iVar6 = 0x10;
    }
    pAVar4 = GetGlobalData();
    if (*(int *)(pAVar4 + 0x1e8) == 0) {
      dVar1 = 1.0;
    }
    else {
      dVar1 = *(double *)(pAVar4 + 0x1e0);
    }
    iVar5 = 0xc;
    if (dVar1 != 1.0) {
      iVar5 = FUN_0055bce0();
    }
    local_28 = iVar5 + iVar6;
  }
  SendMessageW(*(HWND *)(in_ECX + 0x1030),0x1f,0,0);
  SendMessageW(*(HWND *)(in_ECX + 0x17d8),0x1f,0,0);
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  GetClientRect(*(HWND *)(in_ECX + 0x20),&local_18);
  InflateRect(&local_18,~*(uint *)(in_ECX + 0x250),~*(uint *)(in_ECX + 0x250));
  *(LONG *)(in_ECX + 0x26c) = local_18.left;
  *(LONG *)(in_ECX + 0x270) = local_18.top;
  *(LONG *)(in_ECX + 0x274) = local_18.right;
  *(LONG *)(in_ECX + 0x278) = local_18.bottom;
  pcVar2 = *(code **)(*(int *)in_ECX + 0x1a4);
  guard_check_icall();
  iVar6 = (*pcVar2)();
  local_2c = iVar6;
  if (local_20 == 0) {
    SetRectEmpty((LPRECT)(in_ECX + 0x27c));
    SetRectEmpty((LPRECT)(in_ECX + 0x28c));
    if (1 < iVar6) {
LAB_0052e1e7:
      InflateRect((LPRECT)(in_ECX + 0x26c),0,-1);
      goto LAB_0052e1f8;
    }
    pcVar2 = *(code **)(*(int *)in_ECX + 0x2a0);
    guard_check_icall();
    iVar5 = (*pcVar2)();
    local_24 = local_18.top;
    if (iVar5 == 0) goto LAB_0052e1e7;
  }
  else {
    if (*(int *)(in_ECX + 0x254) == -1) {
      *(int *)(in_ECX + 0x254) = iVar6;
    }
    if (iVar6 < *(int *)(in_ECX + 0x254)) {
      *(int *)(in_ECX + 0x254) = iVar6;
    }
    local_1c = (((local_18.bottom - *(int *)(in_ECX + 0x110)) - local_18.top) - local_28) /
               (*(int *)(in_ECX + 0x110) * 2);
    if (iVar6 < local_1c) {
      local_1c = iVar6;
    }
    *(int *)(in_ECX + 600) = local_1c;
    if (*(int *)(in_ECX + 0x254) <= local_1c) {
      local_1c = *(int *)(in_ECX + 0x254);
    }
    *(LONG *)(in_ECX + 0x27c) = local_18.left;
    *(LONG *)(in_ECX + 0x280) = local_18.top;
    *(LONG *)(in_ECX + 0x284) = local_18.right;
    *(LONG *)(in_ECX + 0x288) = local_18.bottom;
    pAVar4 = GetGlobalData();
    iVar3 = DAT_0060c6a4;
    iVar6 = *(int *)(in_ECX + 0x280);
    iVar5 = *(int *)(pAVar4 + 0x1cc);
    *(LONG *)(in_ECX + 0x28c) = local_18.left;
    *(LONG *)(in_ECX + 0x290) = local_18.top;
    *(int *)(in_ECX + 0x280) = iVar6 + 3;
    iVar6 = iVar5 + iVar3 * 2 + iVar6;
    *(LONG *)(in_ECX + 0x294) = local_18.right;
    *(int *)(in_ECX + 0x288) = iVar6;
    *(int *)(in_ECX + 0x270) = iVar6;
    *(LONG *)(in_ECX + 0x298) = local_18.bottom;
    *(int *)(in_ECX + 0x298) =
         *(int *)(in_ECX + 0x298) - (*(int *)(in_ECX + 0x110) * local_1c + local_28);
    *(int *)(in_ECX + 0x290) = *(int *)(in_ECX + 0x298) + -8;
    *(int *)(in_ECX + 0x278) = *(int *)(in_ECX + 0x298) + -8;
    iVar6 = local_2c;
LAB_0052e1f8:
    local_24 = local_18.top;
    if (local_20 != 0) {
      local_24 = *(int *)(in_ECX + 0x298);
    }
  }
  if (iVar6 < 2) {
    pcVar2 = *(code **)(*(int *)in_ECX + 0x2a0);
    guard_check_icall();
    iVar5 = (*pcVar2)();
    if (iVar5 == 0) goto LAB_0052e22c;
  }
  else {
LAB_0052e22c:
    local_1c = 0;
    if (0 < *(int *)(in_ECX + 0xbc)) {
      do {
        piVar7 = (int *)FUN_004ab4cd(local_1c);
        iVar6 = local_24;
        local_38 = *piVar7;
        local_30 = (LPRECT)(local_38 + 0x10);
        local_30->left = local_18.left;
        *(LONG *)(local_38 + 0x14) = local_18.top;
        *(LONG *)(local_38 + 0x18) = local_18.right;
        *(LONG *)(local_38 + 0x1c) = local_18.bottom;
        *(int *)(local_38 + 0x18) = *(int *)(local_38 + 0x18) + 1;
        *(int *)(local_38 + 0x14) = local_24;
        *(int *)(local_38 + 0x1c) = *(int *)(in_ECX + 0x110) + local_24;
        if ((local_18.bottom - local_28 <= local_24) && (local_20 != 0)) {
          SetRectEmpty(local_30);
        }
        if (*(int *)(local_38 + 0x34) == 0) {
          SetRectEmpty(local_30);
        }
        else {
          if (((*(int *)(in_ECX + 0x264) != 0) && (local_20 == 0)) &&
             ((local_1c == *(int *)(in_ECX + 0xc0) || (local_1c == *(int *)(in_ECX + 0xc0) + 1)))) {
            iVar6 = *(int *)(local_38 + 0x18);
            *(int *)(local_38 + 0x18) = *(int *)(local_38 + 0x18) - *(int *)(in_ECX + 0x110);
            pCVar10 = in_ECX + 0x1010;
            if (local_1c != *(int *)(in_ECX + 0xc0)) {
              pCVar10 = in_ECX + 0x17b8;
            }
            CWnd::SetWindowPos((CWnd *)pCVar10,(CWnd *)0x0,*(int *)(local_38 + 0x18),
                               *(int *)(local_38 + 0x14),iVar6 - *(int *)(local_38 + 0x18),
                               *(int *)(local_38 + 0x1c) - *(int *)(local_38 + 0x14),0x14);
            iVar6 = local_24;
          }
          if ((local_1c == *(int *)(in_ECX + 0xc0)) && (local_20 == 0)) {
            iVar5 = 0;
            *(int *)(in_ECX + 0x270) = *(int *)(in_ECX + 0x110) + iVar6;
            iVar6 = local_1c;
            while (iVar6 = iVar6 + 1, iVar6 < *(int *)(in_ECX + 0xbc)) {
              piVar7 = (int *)FUN_004ab4cd(iVar6);
              if (*piVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00429127();
              }
              if (*(int *)(*piVar7 + 0x34) != 0) {
                iVar5 = iVar5 + 1;
              }
            }
            local_24 = local_18.bottom - *(int *)(in_ECX + 0x110) * iVar5;
            *(int *)(in_ECX + 0x278) = local_24;
            local_24 = local_24 + 1;
          }
          else {
            local_24 = iVar6 + *(int *)(in_ECX + 0x110);
          }
        }
        local_1c = local_1c + 1;
        iVar6 = local_2c;
      } while (local_1c < *(int *)(in_ECX + 0xbc));
    }
  }
  if (((*(int *)(in_ECX + 0x264) != 0) && (local_20 == 0)) &&
     (*(int *)(in_ECX + 0xc0) == iVar6 + -1)) {
    iVar5 = *(int *)(in_ECX + 0x110);
    *(int *)(in_ECX + 0x278) = *(int *)(in_ECX + 0x278) - iVar5;
    CWnd::SetWindowPos((CWnd *)(in_ECX + 0x17b8),(CWnd *)0x0,(local_18.right - iVar5) + 1,
                       (local_18.bottom - iVar5) + 1,iVar5,iVar5,0x15);
  }
  local_1c = 0;
  if (0 < *(int *)(in_ECX + 0xbc)) {
    pCVar10 = in_ECX + 0x26c;
    do {
      piVar7 = (int *)FUN_004ab4cd(local_1c);
      pCVar11 = (CObject *)0x0;
      local_38 = *piVar7;
      if (*(int *)(local_38 + 0x34) != 0) {
        local_30 = (LPRECT)AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePaneAdapter_0060ca28,
                                              *(CObject **)(local_38 + 0x20));
        if (local_30 != (LPRECT)0x0) {
          pcVar2 = *(code **)(local_30->left + 0x3a4);
          guard_check_icall();
          pCVar11 = (CObject *)(*pcVar2)();
          pCVar11 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCOutlookBarPane_0060c66c,pCVar11);
          if (pCVar11 != (CObject *)0x0) {
            *(int *)(pCVar11 + 0x1dbc) = *(int *)(in_ECX + 0x274) - *(int *)pCVar10;
            *(int *)(pCVar11 + 0xc08) = *(int *)(in_ECX + 0x278) - *(int *)(in_ECX + 0x270);
            if (*(int *)(in_ECX + 0x260) != 0) {
              *(undefined4 *)(pCVar11 + 0x1dd8) = 1;
            }
          }
        }
        CWnd::SetWindowPos(*(CWnd **)(local_38 + 0x20),(CWnd *)0x0,*(int *)pCVar10,
                           *(int *)(in_ECX + 0x270),*(int *)(in_ECX + 0x274) - *(int *)pCVar10,
                           *(int *)(in_ECX + 0x278) - *(int *)(in_ECX + 0x270),0x14);
        if (pCVar11 != (CObject *)0x0) {
          *(undefined4 *)(pCVar11 + 0x1dd8) = 0;
        }
      }
      local_1c = local_1c + 1;
      iVar6 = local_2c;
    } while (local_1c < *(int *)(in_ECX + 0xbc));
  }
  if ((iVar6 == 0) && (local_20 == 0)) {
    CWnd::ShowWindow((CWnd *)in_ECX,0);
  }
  else {
    RedrawWindow(*(HWND *)(in_ECX + 0x20),(RECT *)0x0,(HRGN)0x0,0x585);
    if (local_20 != 0) {
      CWnd::ShowWindow((CWnd *)(in_ECX + 0x2b0),4);
      pcVar2 = *(code **)(*(int *)(in_ECX + 0x2b0) + 0x238);
      guard_check_icall(0,local_18.left,local_18.bottom - local_28,local_18.right - local_18.left,
                        local_28,0x14,0);
      (*pcVar2)();
      CMFCOutlookBarTabCtrl::RebuildToolBar(in_ECX);
      goto LAB_0052e51e;
    }
  }
  CWnd::ShowWindow((CWnd *)(in_ECX + 0x2b0),0);
  RedrawWindow(*(HWND *)(in_ECX + 0x1030),(RECT *)0x0,(HRGN)0x0,0x105);
  RedrawWindow(*(HWND *)(in_ECX + 0x17d8),(RECT *)0x0,(HRGN)0x0,0x105);
  pHVar8 = GetParent(*(HWND *)(in_ECX + 0x20));
  pCVar9 = CWnd::FromHandle(pHVar8);
  RedrawWindow(*(HWND *)(pCVar9 + 0x20),(RECT *)0x0,(HRGN)0x0,0x105);
LAB_0052e51e:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

