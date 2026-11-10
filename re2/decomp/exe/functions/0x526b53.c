// rea decompile_all
// name: CMFCVisualManagerOffice2003::OnFillBarBackground
// address: 0x526b53
// body: available
// range: 0x526b53-0x527390 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x526b74 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManagerOffice2003::OnFillBarBackground(class CDC
   *,class CBasePane *,class CRect,class CRect,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerOffice2003::OnFillBarBackground
          (CMFCVisualManagerOffice2003 *this,CDC *param_1,CObject *param_2,int param_4,int param_5,
          int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,uint param_12)

{
  code *pcVar1;
  bool bVar2;
  CDC *pCVar3;
  byte bVar4;
  CObject *pCVar5;
  HWND pHVar6;
  CWnd *pCVar7;
  AFX_GLOBAL_DATA *pAVar8;
  int iVar9;
  HDC hdc;
  BOOL BVar10;
  HBRUSH hbr;
  uint uVar11;
  int *piVar12;
  CObject *pCVar13;
  int iVar14;
  ulong uVar15;
  CPen *pCVar16;
  tagRECT *ptVar17;
  HTHEME hTheme;
  undefined4 uVar18;
  undefined4 uVar19;
  CDrawingManager local_80 [8];
  CPen *local_78;
  CObject *local_74;
  uint local_70;
  int local_6c;
  CObject *local_68;
  CDC *local_64;
  CObject *local_60;
  CMFCVisualManagerOffice2003 *local_5c;
  CObject *local_58;
  tagRECT local_54;
  tagRECT local_44;
  undefined1 local_34 [12];
  LONG local_28;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x78;
  local_8 = 0x526b5f;
  local_64 = param_1;
  local_74 = param_2;
  local_5c = this;
  if ((param_2 == (CObject *)0x0) || (param_1 == (CDC *)0x0)) goto LAB_00526b74;
  pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCReBar_005c60fc,param_2);
  if (pCVar5 == (CObject *)0x0) {
    pHVar6 = GetParent(*(HWND *)(param_2 + 0x20));
    pCVar7 = CWnd::FromHandle(pHVar6);
    pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCReBar_005c60fc,(CObject *)pCVar7);
    if (pCVar5 == (CObject *)0x0) {
      pcVar1 = (code *)**(undefined4 **)param_2;
      guard_check_icall();
      (*pcVar1)();
      pAVar8 = GetGlobalData();
      if (8 < *(int *)(pAVar8 + 0x1ac)) {
        pAVar8 = GetGlobalData();
        iVar9 = AFX_GLOBAL_DATA::IsHighContrastMode(pAVar8);
        if (((iVar9 == 0) && (*(int *)(param_2 + 0x8c) == 0)) &&
           (iVar9 = FUN_004396e3(&PTR_s_CMFCColorBar_0060c79c), iVar9 == 0)) {
          iVar9 = FUN_0043970d(&PTR_s_CMFCStatusBar_005bcd6c);
          if (((iVar9 == 0) || (DAT_0060cb78 == 0)) ||
             (hTheme = *(HTHEME *)(this + 0x14), hTheme == (HTHEME)0x0)) {
            iVar9 = FUN_0043970d(&PTR_s_CMFCRibbonStatusBar_005bd48c);
            if ((iVar9 == 0) || (*(int *)(this + 0x14) == 0)) {
              BVar10 = IsRectEmpty((RECT *)&param_8);
              pCVar3 = local_64;
              if (BVar10 != 0) {
                param_8 = param_4;
                param_9 = param_5;
                param_10 = param_6;
                param_11 = param_7;
                param_2 = local_74;
              }
              CDrawingManager::CDrawingManager(local_80,local_64);
              local_8 = 0;
              iVar9 = FUN_0043970d(&PTR_s_CMFCCaptionBar_005ba198);
              if (iVar9 == 0) {
                iVar9 = FUN_0043970d(&PTR_s_CMFCPopupMenuBar_0060c6b4);
                if (iVar9 == 0) {
                  pcVar1 = *(code **)(*(int *)param_2 + 0x1c0);
                  guard_check_icall();
                  uVar11 = (*pcVar1)();
                  local_70 = uVar11 & 0xa000;
                  iVar9 = FUN_0043970d(&PTR_s_CMFCToolBar_0060c580);
                  if ((iVar9 == 0) ||
                     (iVar9 = FUN_0043970d(&PTR_s_CMFCMenuBar_0060c730), iVar9 != 0)) {
                    pCVar5 = (CObject *)0x0;
                    local_68 = (CObject *)0x0;
                  }
                  else {
                    pCVar5 = (CObject *)0x1;
                    local_68 = (CObject *)0x1;
                  }
                  if ((uVar11 & 0xa000) == 0) {
                    local_6c = *(int *)(local_5c + 0x170);
                    local_58 = *(CObject **)(local_5c + 0x174);
                  }
                  else {
                    local_6c = *(int *)(local_5c + 0x164);
                    local_58 = *(CObject **)(local_5c + 0x168);
                  }
                  if (pCVar5 == (CObject *)0x0) {
                    local_6c = *(int *)(local_5c + 0x15c);
                    local_58 = *(CObject **)(local_5c + 0x160);
                    local_70 = 0;
                    pAVar8 = GetGlobalData();
                    param_6 = param_4 + 10 + (*(int *)(pAVar8 + 0x174) - *(int *)(pAVar8 + 0x16c));
                    pCVar5 = local_68;
                  }
                  bVar2 = false;
                  bVar4 = -(pCVar5 != (CObject *)0x0) & 0x19;
                  iVar9 = FUN_0043970d(&PTR_s_CMFCDropDownToolBar_0060c978);
                  pCVar16 = (CPen *)(~-(uint)(iVar9 != 0) & param_12);
                  local_78 = pCVar16;
                  local_60 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBar_0060c580,param_2
                                               );
                  if ((pCVar16 == (CPen *)0x0) || (local_60 == (CObject *)0x0)) {
LAB_00527022:
                    local_44.left = param_4;
                    local_44.top = param_5;
                    local_44.right = param_6;
                    local_44.bottom = param_7;
                    if ((local_68 != (CObject *)0x0) && (local_60 != (CObject *)0x0)) {
                      pcVar1 = *(code **)(*(int *)local_74 + 0x168);
                      guard_check_icall();
                      iVar9 = (*pcVar1)();
                      pCVar5 = local_60;
                      if (iVar9 != 0) {
                        pcVar1 = *(code **)(*(int *)local_60 + 0x1a0);
                        guard_check_icall();
                        iVar9 = (*pcVar1)();
                        if (iVar9 != 0) {
                          local_44.left = local_44.left - *(int *)(pCVar5 + 0x128);
                          local_44.right = local_44.right + *(int *)(pCVar5 + 300);
                          local_44.top = local_44.top - *(int *)(pCVar5 + 0x130);
                          local_44.bottom = local_44.bottom + *(int *)(pCVar5 + 0x134);
                        }
                      }
                    }
                    ptVar17 = &local_44;
                  }
                  else {
                    pcVar1 = *(code **)(*(int *)local_60 + 0x168);
                    guard_check_icall();
                    iVar9 = (*pcVar1)();
                    if (iVar9 == 0) goto LAB_00527022;
                    pcVar1 = *(code **)(*(int *)local_60 + 0x1a0);
                    guard_check_icall();
                    iVar9 = (*pcVar1)();
                    if ((iVar9 == 0) ||
                       (iVar9 = FUN_0043970d(&PTR_s_CMFCMenuBar_0060c730), iVar9 != 0))
                    goto LAB_00527022;
                    bVar2 = true;
                    pHVar6 = GetParent(*(HWND *)(param_2 + 0x20));
                    pCVar7 = CWnd::FromHandle(pHVar6);
                    pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBasePane_005c4284,
                                                (CObject *)pCVar7);
                    local_68 = pCVar5;
                    if (pCVar5 != (CObject *)0x0) {
                      local_34._8_4_ = 0;
                      local_28 = 0;
                      MapWindowPoints(*(HWND *)(param_2 + 0x20),*(HWND *)(pCVar5 + 0x20),
                                      (LPPOINT)(local_34 + 8),1);
                      piVar12 = (int *)CDC::OffsetWindowOrg
                                                 (local_64,(int)&local_44.right,local_34._8_4_);
                      local_34._8_4_ = *piVar12;
                      local_28 = piVar12[1];
                      local_24.left = 0;
                      local_24.top = 0;
                      local_24.right = 0;
                      local_24.bottom = 0;
                      GetClientRect(*(HWND *)(pCVar5 + 0x20),&local_24);
                      pCVar3 = local_64;
                      iVar9 = *(int *)local_5c;
                      guard_check_icall(local_64,local_68,local_24.left,local_24.top,local_24.right,
                                        local_24.bottom,local_24.left,local_24.top,local_24.right,
                                        local_24.bottom,0);
                      (**(code **)(iVar9 + 0x34))();
                      CDC::SetWindowOrg(pCVar3,(int)&local_44.right,local_34._8_4_);
                    }
                    local_54.left = param_4;
                    local_54.top = param_5;
                    local_54.right = param_6;
                    local_54.bottom = param_7;
                    InflateRect(&local_54,-1,0);
                    CDrawingManager::FillGradient
                              (local_80,local_54.left,local_54.top,local_54.right,local_54.bottom,
                               local_6c,local_58,local_70,bVar4,0);
                    local_24.top = param_5 + 1;
                    local_24.left = param_4;
                    local_24.bottom = param_7;
                    local_24.right = param_4 + 1;
                    CDrawingManager::FillGradient
                              (local_80,param_4,local_24.top,local_24.right,param_7,local_6c,
                               local_58,local_70,0,0);
                    bVar4 = 0;
                    local_24.top = param_5;
                    local_24.right = param_6;
                    local_24.bottom = param_7;
                    local_24.left = param_6 + -1;
                    ptVar17 = &local_24;
                  }
                  CDrawingManager::FillGradient
                            (local_80,ptVar17->left,ptVar17->top,ptVar17->right,ptVar17->bottom,
                             local_6c,local_58,local_70,bVar4,0);
                  if (local_78 != (CPen *)0x0) {
                    local_58 = (CObject *)0x0;
                    local_34._0_4_ = 0;
                    local_34._4_4_ = 0;
                    local_34._8_4_ = 0;
                    local_28 = 0;
                    SetRectEmpty((LPRECT)local_34);
                    pCVar5 = local_60;
                    if ((local_60 != (CObject *)0x0) && (iVar9 = FUN_004531a6(), 0 < iVar9)) {
                      iVar9 = FUN_004531a6();
                      pCVar13 = (CObject *)FUN_00452f94(iVar9 + -1);
                      local_58 = AfxDynamicDownCast((CRuntimeClass *)
                                                    &PTR_s_CMFCCustomizeButton_0060c918,pCVar13);
                      if (local_58 != (CObject *)0x0) {
                        local_34._0_4_ = *(undefined4 *)(local_58 + 0x54);
                        local_34._4_4_ = *(undefined4 *)(local_58 + 0x58);
                        local_34._8_4_ = *(undefined4 *)(local_58 + 0x5c);
                        local_28 = *(LONG *)(local_58 + 0x60);
                        pCVar5 = local_60;
                      }
                    }
                    pCVar3 = local_64;
                    if (bVar2) {
                      local_78 = CDC::SelectObject(local_64,(CPen *)(local_5c + 0x1e0));
                      if (local_78 == (CPen *)0x0) {
LAB_00526b74:
                    /* WARNING: Subroutine does not return */
                        FUN_00429127();
                      }
                      if (local_70 == 0) {
                        CDC::MoveTo(pCVar3,(int)&local_44.right,param_6 + -1);
                        iVar9 = param_7 + -2 + (local_34._4_4_ - local_28);
                        iVar14 = param_6 + -1;
                      }
                      else {
                        CDC::MoveTo(pCVar3,(int)&local_44.right,param_4 + 2);
                        iVar9 = param_7 + -1;
                        iVar14 = (local_34._0_4_ - local_34._8_4_) + param_6;
                      }
                      CDC::LineTo(pCVar3,iVar14,iVar9);
                      CDC::SelectObject(pCVar3,local_78);
                    }
                    if ((((pCVar5 != (CObject *)0x0) &&
                         (iVar9 = FUN_004531a6(), pCVar5 = local_58, 0 < iVar9)) &&
                        (local_58 != (CObject *)0x0)) &&
                       ((BVar10 = IsRectEmpty((RECT *)local_34), BVar10 == 0 &&
                        (iVar9 = CMFCCustomizeButton::IsPipeStyle((CMFCCustomizeButton *)pCVar5),
                        pCVar5 = local_74, iVar9 != 0)))) {
                      uVar15 = CWnd::GetExStyle((CWnd *)local_74);
                      local_78 = (CPen *)(uVar15 & 0x400000);
                      local_44.left = 0;
                      local_44.top = 0;
                      local_44.right = 0;
                      local_44.bottom = 0;
                      GetWindowRect(*(HWND *)(pCVar5 + 0x20),&local_44);
                      CWnd::ClientToScreen((CWnd *)pCVar5,(tagRECT *)local_34);
                      pCVar5 = local_60;
                      local_24.left = param_4;
                      local_24.top = param_5;
                      local_24.right = param_6;
                      local_24.bottom = param_7;
                      pcVar1 = *(code **)(*(int *)local_60 + 0x164);
                      guard_check_icall();
                      iVar9 = (*pcVar1)();
                      pCVar13 = local_58;
                      if (iVar9 == 0) {
                        local_24.top = (local_34._4_4_ - local_44.bottom) + local_24.bottom;
                        *(LONG *)(local_58 + 0xec) = local_44.right - local_34._8_4_;
                        *(int *)(local_58 + 0xf0) = 0;
                      }
                      else {
                        if (local_78 == (CPen *)0x0) {
                          local_24.left = (local_24.right - local_44.right) + local_34._0_4_;
                        }
                        else {
                          local_24.left = (local_24.right - local_34._8_4_) + local_44.left;
                        }
                        *(int *)(local_58 + 0xec) = 0;
                        *(LONG *)(local_58 + 0xf0) = local_44.bottom - local_28;
                      }
                      local_68 = (CObject *)0x0;
                      iVar9 = FUN_004531a6();
                      iVar9 = CMFCToolBar::IsButtonHighlighted((CMFCToolBar *)pCVar5,iVar9 + -1);
                      if (iVar9 == 0) {
                        pcVar1 = *(code **)(*(int *)pCVar13 + 0x70);
                        guard_check_icall();
                        iVar9 = (*pcVar1)();
                        if (iVar9 != 0) goto LAB_005272d8;
                        if ((*(uint *)(local_58 + 0x24) & 0x30000) != 0) {
                          local_68 = (CObject *)0x1;
                        }
                      }
                      else {
LAB_005272d8:
                        local_68 = (CObject *)0x2;
                      }
                      iVar9 = *(int *)local_5c;
                      pcVar1 = *(code **)(*(int *)pCVar5 + 0x164);
                      guard_check_icall(local_68,0 < *(int *)(local_58 + 0xe8),
                                        *(int *)(local_58 + 0x11c) != 0);
                      uVar18 = (*pcVar1)();
                      pcVar1 = *(code **)(iVar9 + 0x31c);
                      guard_check_icall(local_64,local_24.left,local_24.top,local_24.right,
                                        local_24.bottom,uVar18);
                      (*pcVar1)();
                    }
                  }
                }
                else {
                  if (local_5c == (CMFCVisualManagerOffice2003 *)0xfffffef4) {
                    hbr = (HBRUSH)0x0;
                  }
                  else {
                    hbr = *(HBRUSH *)(local_5c + 0x110);
                  }
                  FillRect(*(HDC *)(pCVar3 + 4),(RECT *)&param_8,hbr);
                  pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCPopupMenuBar_0060c6b4,
                                              param_2);
                  if (*(int *)(pCVar5 + 0xd40) == 0) {
                    local_24.left = param_4;
                    local_24.top = param_5;
                    local_24.right = param_6;
                    local_24.bottom = param_7;
                    local_24.right = CMFCPopupMenuBar::GetGutterWidth((CMFCPopupMenuBar *)pCVar5);
                    local_24.right = local_24.right + local_24.left;
                    InflateRect(&local_24,0,-1);
                    ptVar17 = &local_24;
                    uVar19 = 0x23;
                    uVar18 = 0;
                    iVar9 = *(int *)(local_5c + 0x164);
                    iVar14 = *(int *)(local_5c + 0x168);
                    goto LAB_00526ce7;
                  }
                }
              }
              else {
                ptVar17 = (tagRECT *)&param_4;
                uVar19 = 0;
                if (*(int *)(param_2 + 0x2c4) == 0) {
                  uVar18 = 1;
                  iVar9 = *(int *)(local_5c + 0x1ac);
                  iVar14 = *(int *)(local_5c + 0x1b0);
                }
                else {
                  uVar18 = 0;
                  iVar9 = *(int *)(local_5c + 0x160);
                  iVar14 = *(int *)(local_5c + 0x15c);
                }
LAB_00526ce7:
                CDrawingManager::FillGradient
                          (local_80,ptVar17->left,ptVar17->top,ptVar17->right,ptVar17->bottom,iVar14
                           ,iVar9,uVar18,uVar19,0);
              }
              FUN_00461ef9();
              goto LAB_00527389;
            }
            hdc = (HDC)0x0;
            if (local_64 != (CDC *)0x0) {
              hdc = *(HDC *)(local_64 + 4);
            }
            hTheme = *(HTHEME *)(this + 0x14);
          }
          else {
            hdc = (HDC)0x0;
            if (local_64 != (CDC *)0x0) {
              hdc = *(HDC *)(local_64 + 4);
            }
          }
          DrawThemeBackground(hTheme,hdc,0,0,(LPCRECT)&param_4,(LPCRECT)0x0);
          goto LAB_00527389;
        }
      }
      CMFCVisualManagerOfficeXP::OnFillBarBackground
                ((CMFCVisualManagerOfficeXP *)this,local_64,local_74,param_4,param_5,param_6,param_7
                 ,param_8,param_9,param_10,param_11,0);
      goto LAB_00527389;
    }
  }
  iVar9 = *(int *)this;
  guard_check_icall(local_64,local_74,param_4,param_5,param_6,param_7);
  (**(code **)(iVar9 + 0x1c))();
LAB_00527389:
  FUN_0055bae6();
  return;
}

