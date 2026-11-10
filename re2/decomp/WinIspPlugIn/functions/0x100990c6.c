// rea decompile_all
// name: CMFCToolBar::OnLButtonDown
// address: 0x100990c6
// body: available
// range: 0x100990c6-0x100998a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1009930d to 0x1004a383 FUN_1004a383 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: void __thiscall CMFCToolBar::OnLButtonDown(unsigned int,class CPoint)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCToolBar::OnLButtonDown(CMFCToolBar *this,uint param_1,int param_3,undefined4 param_4)

{
  CObject *pCVar1;
  CMFCToolBar *pCVar2;
  code *pcVar3;
  int *piVar4;
  POINT pt;
  CMFCToolBar *this_00;
  ushort uVar5;
  int iVar6;
  HWND pHVar7;
  CWnd *pCVar8;
  CObject *pCVar9;
  AFX_GLOBAL_DATA *pAVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  BOOL BVar14;
  undefined4 uVar15;
  __POSITION *p_Var16;
  tagRECT *ptVar17;
  COleDataSource local_74 [52];
  tagPOINT local_40;
  int local_38;
  int local_34;
  LPRECT local_30;
  CMFCToolBar *local_2c;
  CObject *local_28;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 100;
  local_8 = 0x100990d2;
  pcVar3 = *(code **)(*(int *)this + 0x390);
  local_2c = this;
  guard_check_icall(param_3,param_4);
  iVar6 = (*pcVar3)();
  this_00 = DAT_10245c8c;
  pCVar2 = DAT_10245c8c;
  local_34 = iVar6;
  if (DAT_10245c8c == this) {
LAB_10099127:
    DAT_10245c8c = pCVar2;
    if (DAT_10245ca8 == 0) goto LAB_10099130;
  }
  else {
    if (DAT_10245ca8 != 0) {
      pCVar2 = this;
      if (DAT_10245c8c != (CMFCToolBar *)0x0) {
        iVar11 = *(int *)(DAT_10245c8c + 0xbf4);
        pCVar2 = DAT_10245c8c + 0xbf4;
        DAT_10245c8c = this;
        *(undefined4 *)pCVar2 = 0xffffffff;
        InvalidateButton(this_00,iVar11);
        pCVar2 = DAT_10245c8c;
      }
      goto LAB_10099127;
    }
LAB_10099130:
    pHVar7 = GetParent(*(HWND *)(this + 0x20));
    pCVar8 = CWnd::FromHandle(pHVar7);
    pCVar9 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPane_101de9e4,(CObject *)pCVar8);
    if (pCVar9 != (CObject *)0x0) {
      pHVar7 = GetParent(*(HWND *)(this + 0x20));
      pCVar8 = CWnd::FromHandle(pHVar7);
      CWnd::SetFocus(pCVar8);
    }
  }
  if (iVar6 < 0) {
    *(undefined4 *)(this + 0xbec) = 0xffffffff;
    if ((DAT_10245ca8 != 0) && (*(int *)(this + 0xb78) == 0)) {
      iVar6 = *(int *)(this + 0xbf4);
      *(undefined4 *)(this + 0xbf4) = 0xffffffff;
      if (iVar6 != -1) {
        InvalidateButton(this,iVar6);
        UpdateWindow(*(HWND *)(this + 0x20));
      }
      pcVar3 = *(code **)(*(int *)this + 0x3b0);
      guard_check_icall(0xffffffff);
      (*pcVar3)();
    }
    pcVar3 = *(code **)(*(int *)this + 0x1cc);
    guard_check_icall();
    iVar6 = (*pcVar3)();
    if (iVar6 != 0) {
      pAVar10 = GetGlobalData();
      SetCursor(*(HCURSOR *)(pAVar10 + 0xfc));
    }
    CPane::OnLButtonDown((CPane *)this,param_1,param_3,param_4);
    goto LAB_100998a0;
  }
  local_28 = (CObject *)FUN_1009640a(iVar6);
  if (local_28 == (CObject *)0x0) goto LAB_100998a0;
  pcVar3 = *(code **)(*(int *)this + 0x25c);
  guard_check_icall(iVar6);
  (*pcVar3)();
  DAT_10245cac = 0;
  if (DAT_10245cb4 == 0) {
LAB_1009927e:
    if ((DAT_10245ca8 != 0) || (DAT_10245cac != 0)) goto LAB_10099294;
LAB_10099713:
    *(int *)(this + 0xbec) = iVar6;
    UpdateButton(this,iVar6);
    pCVar9 = local_28;
    if ((*(uint *)(local_28 + 0x24) & 0x40000) != 0) {
      iVar11 = FUN_10051e53(&PTR_s_CMFCDropDownToolbarButton_1023db68);
      if (iVar11 == 0) {
        *(undefined4 *)(this + 0xbec) = 0xffffffff;
        goto LAB_100998a0;
      }
    }
    pCVar1 = pCVar9 + 0x24;
    *(uint *)pCVar1 = *(uint *)pCVar1 | 0x20000;
    InvalidateButton(this,iVar6);
    UpdateWindow(*(HWND *)(this + 0x20));
    pcVar3 = *(code **)(*(int *)this + 0x418);
    guard_check_icall(*(int *)(pCVar9 + 0x20));
    (*pcVar3)();
    pcVar3 = *(code **)(*(int *)local_28 + 0x70);
    guard_check_icall();
    local_34 = (*pcVar3)();
    pcVar3 = *(code **)(*(int *)local_28 + 0x20);
    guard_check_icall(this,0);
    iVar11 = (*pcVar3)();
    pCVar9 = local_28;
    if (iVar11 == 0) {
      pHVar7 = SetCapture(*(HWND *)(this + 0x20));
      pCVar8 = CWnd::FromHandle(pHVar7);
      *(CWnd **)(this + 0xd04) = pCVar8;
    }
    else {
      local_2c = (CMFCToolBar *)0x0;
      p_Var16 = CObList::Find((CObList *)(this + 0xc3c),local_28,(__POSITION *)0x0);
      if (p_Var16 == (__POSITION *)0x0) {
        local_2c = (CMFCToolBar *)0x1;
      }
      else {
        *(uint *)(pCVar9 + 0x24) = *(uint *)(pCVar9 + 0x24) & 0xfffdffff;
      }
      *(undefined4 *)(this + 0xbec) = 0xffffffff;
      *(undefined4 *)(this + 0xbf0) = 0xffffffff;
      pcVar3 = *(code **)(*(int *)this + 0x3b0);
      guard_check_icall(0xffffffff);
      (*pcVar3)();
      InvalidateButton(this,iVar6);
      UpdateWindow(*(HWND *)(this + 0x20));
      if (local_2c == (CMFCToolBar *)0x0) {
        pcVar3 = *(code **)(*(int *)local_28 + 0x70);
        guard_check_icall();
        iVar11 = (*pcVar3)();
        if (local_34 != iVar11) {
          iVar6 = AccGetChildIdByButtonIndex(this,iVar6);
          if (0 < iVar6) {
            NotifyWinEvent(0x800a,*(HWND *)(this + 0x20),-4,iVar6);
            NotifyWinEvent(0x8005,*(HWND *)(this + 0x20),-4,iVar6);
          }
        }
      }
    }
  }
  else {
    pcVar3 = *(code **)(*(int *)this + 0x420);
    guard_check_icall();
    iVar11 = (*pcVar3)();
    if (iVar11 == 0) goto LAB_1009927e;
    if (DAT_10245ca8 == 0) {
      uVar5 = GetAsyncKeyState(0x12);
      if ((uVar5 & 0x8000) != 0) {
        DAT_10245cac = 1;
        *(undefined4 *)(this + 0xbf0) = 0xffffffff;
        *(int *)(this + 0xbf4) = iVar6;
        DAT_10245c8c = this;
      }
      goto LAB_1009927e;
    }
LAB_10099294:
    if ((*(int *)(this + 0xb78) != 0) || (*(int *)(this + 3000) != 0)) goto LAB_10099713;
    local_38 = *(int *)(this + 0xbf4);
    local_24.left = 0;
    local_24.top = 0;
    local_24.right = 0;
    pcVar3 = *(code **)(*(int *)this + 0x36c);
    local_24.bottom = 0;
    ptVar17 = &local_24;
    *(int *)(this + 0xbf4) = iVar6;
    iVar11 = iVar6;
    guard_check_icall(iVar6,ptVar17);
    (*pcVar3)();
    if (local_38 != -1) {
      InvalidateButton(this,local_38);
    }
    local_30 = (LPRECT)FUN_1009640a(*(undefined4 *)(this + 0xbf4));
    *(LPRECT *)(this + 0xd0c) = local_30;
    if (local_30 == (LPRECT)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_1004a383();
    }
    *(uint *)(this + 0xba0) = param_1 & 8;
    pcVar3 = *(code **)(local_30->left + 0x60);
    guard_check_icall(iVar11,ptVar17);
    iVar11 = (*pcVar3)();
    if (iVar11 == 0) {
      *(undefined4 *)(this + 0xd0c) = 0;
      *(undefined4 *)(this + 0xbf4) = 0xffffffff;
      if (local_38 != -1) {
        InvalidateButton(this,local_38);
      }
      goto LAB_100998a0;
    }
    InvalidateButton(this,iVar6);
    UpdateWindow(*(HWND *)(this + 0x20));
    pcVar3 = *(code **)(**(int **)(this + 0xd0c) + 0x3c);
    guard_check_icall();
    iVar6 = (*pcVar3)();
    if (iVar6 == 0) {
LAB_10099416:
      pcVar3 = *(code **)(**(int **)(this + 0xd0c) + 0x50);
      guard_check_icall();
      iVar6 = (*pcVar3)();
      if (iVar6 != 0) {
        pcVar3 = *(code **)(**(int **)(this + 0xd0c) + 0x74);
        guard_check_icall();
        iVar6 = (*pcVar3)();
        if (iVar6 != 0) {
          COleDataSource::COleDataSource(local_74);
          local_8 = 0;
          pcVar3 = *(code **)(**(int **)(this + 0xd0c) + 0xc);
          guard_check_icall(local_74);
          (*pcVar3)();
          pcVar3 = *(code **)(*(int *)this + 0x418);
          guard_check_icall(*(int *)(local_28 + 0x20));
          (*pcVar3)();
          DAT_10245d90 = 0;
          pHVar7 = *(HWND *)(this + 0x20);
          *(int *)(this + 0xcf4) = param_3;
          *(undefined4 *)(this + 0xcf8) = param_4;
          if (DAT_10245cac != 0) {
            DAT_10245ca8 = 1;
          }
          uVar13 = COleDataSource::DoDragDrop(local_74,3,&local_24,(COleDropSource *)&DAT_10245d48);
          BVar14 = IsWindow(pHVar7);
          if (BVar14 == 0) {
            if (DAT_10245cac != 0) {
              DAT_10245c8c = (CMFCToolBar *)0x0;
              DAT_10245ca8 = 0;
              DAT_10245cac = 0;
            }
            COleDataSource::~COleDataSource(local_74);
            goto LAB_100998a0;
          }
          local_40.x = 0;
          local_40.y = 0;
          GetCursorPos(&local_40);
          ScreenToClient(*(HWND *)(this + 0x20),&local_40);
          if (DAT_10245d90 == 0) {
LAB_100996c4:
            *(int *)(this + 0xbf0) = local_34;
            pcVar3 = *(code **)(*(int *)this + 0x3b0);
            guard_check_icall(local_34);
            (*pcVar3)();
          }
          else {
            pt.y = local_40.y;
            pt.x = local_40.x;
            BVar14 = PtInRect(&local_24,pt);
            if (BVar14 != 0) goto LAB_100996c4;
            if (((uVar13 == 1) || (*(int *)(this + 0xd0c) == 0)) || (DAT_10245d8c != 0)) {
LAB_100996a9:
              if (*(int *)(this + 0xd0c) != 0) {
                InvalidateRect(*(HWND *)(this + 0x20),(RECT *)(*(int *)(this + 0xd0c) + 0x54),1);
              }
            }
            else {
              pcVar3 = *(code **)(*(int *)this + 0x37c);
              guard_check_icall(*(int *)(this + 0xd0c),uVar13);
              iVar6 = (*pcVar3)();
              if (iVar6 == 0) goto LAB_100996a9;
              iVar6 = *(int *)this;
              uVar15 = FUN_1009455c(*(undefined4 *)(this + 0xd0c));
              pcVar3 = *(code **)(iVar6 + 0x34c);
              guard_check_icall(uVar15);
              (*pcVar3)();
              pcVar3 = *(code **)(*(int *)this + 0x3e4);
              guard_check_icall();
              (*pcVar3)();
              RedrawWindow(*(HWND *)(this + 0x20),(RECT *)0x0,(HRGN)0x0,0x505);
              pcVar3 = *(code **)(*(int *)this + 0x2d4);
              guard_check_icall(1);
              (*pcVar3)();
              pHVar7 = GetParent(*(HWND *)(this + 0x20));
              pCVar8 = CWnd::FromHandle(pHVar7);
              if ((pCVar8 != (CWnd *)0x0) && (*(int *)(pCVar8 + 0x20) != 0)) {
                pHVar7 = GetParent(*(HWND *)(this + 0x20));
                pCVar8 = CWnd::FromHandle(pHVar7);
                RedrawWindow(*(HWND *)(pCVar8 + 0x20),(RECT *)0x0,(HRGN)0x0,0x505);
              }
              if (DAT_10245cac == 0) {
                pcVar3 = *(code **)(*(int *)this + 0x20c);
                guard_check_icall();
                (*pcVar3)();
                RedrawWindow(*(HWND *)(this + 0x20),(RECT *)0x0,(HRGN)0x0,0x505);
              }
              pHVar7 = GetParent(*(HWND *)(this + 0x20));
              CWnd::FromHandle(pHVar7);
              iVar6 = FUN_10051e53(&PTR_s_CMFCTabCtrl_101e1714);
              if (iVar6 != 0) {
                pHVar7 = GetParent(*(HWND *)(this + 0x20));
                pCVar8 = CWnd::FromHandle(pHVar7);
                pHVar7 = GetParent(*(HWND *)(pCVar8 + 0x20));
                pCVar8 = CWnd::FromHandle(pHVar7);
                pCVar9 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBar_1023d640,
                                            (CObject *)pCVar8);
                if (pCVar9 != (CObject *)0x0) {
                  pcVar3 = *(code **)(*(int *)pCVar9 + 0x210);
                  guard_check_icall();
                  (*pcVar3)();
                }
              }
            }
          }
          *(undefined4 *)(this + 0xd0c) = 0;
          *(undefined4 *)(this + 0xcf4) = 0xffffffff;
          *(undefined4 *)(this + 0xcf8) = 0xffffffff;
          local_8 = 0xffffffff;
          COleDataSource::~COleDataSource(local_74);
          goto LAB_10099870;
        }
      }
      *(undefined4 *)(this + 0xd0c) = 0;
    }
    else {
      lVar12 = _labs(param_3 - local_24.right);
      if ((6 < lVar12) || (DAT_10245cac != 0)) goto LAB_10099416;
      *(undefined4 *)(this + 0xba4) = 1;
      local_30 = (LPRECT)(local_2c + 0xcdc);
      piVar4 = *(int **)(this + 0xd0c);
      local_30->left = piVar4[0x15];
      *(int *)(local_2c + 0xce0) = piVar4[0x16];
      *(int *)(local_2c + 0xce4) = piVar4[0x17];
      *(int *)(local_2c + 0xce8) = piVar4[0x18];
      pcVar3 = *(code **)(*piVar4 + 0x38);
      guard_check_icall();
      iVar6 = (*pcVar3)();
      if (iVar6 != 0) {
        InflateRect(local_30,2,2);
      }
      this = local_2c;
      pHVar7 = SetCapture(*(HWND *)(local_2c + 0x20));
      pCVar8 = CWnd::FromHandle(pHVar7);
      *(CWnd **)(this + 0xd04) = pCVar8;
      pAVar10 = GetGlobalData();
      SetCursor(*(HCURSOR *)(pAVar10 + 0xf0));
    }
  }
LAB_10099870:
  if (DAT_10245cac != 0) {
    DAT_10245cac = 0;
    DAT_10245c8c = (CMFCToolBar *)0x0;
    FUN_1009cb92(0);
    RedrawWindow(*(HWND *)(this + 0x20),(RECT *)0x0,(HRGN)0x0,0x505);
  }
LAB_100998a0:
  FUN_1018015d();
  return;
}

