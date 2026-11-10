// rea decompile_all
// name: CMFCCustomizeButton::CreatePopupMenu
// address: 0x100f767f
// body: available
// range: 0x100f767f-0x100f7fdc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100f7bfe to 0x1001d023 FUN_1001d023 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* Library Function - Single Match
    public: virtual class CMFCPopupMenu * __thiscall CMFCCustomizeButton::CreatePopupMenu(void)
   
   Library: Visual Studio 2015 Release */

CMFCPopupMenu * __thiscall CMFCCustomizeButton::CreatePopupMenu(CMFCCustomizeButton *this)

{
  code *pcVar1;
  CMFCToolBar *this_00;
  bool bVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  wchar_t *pwVar8;
  CObject *pCVar9;
  CMFCToolBarMenuButton *pCVar10;
  HMENU__ *pHVar11;
  CMFCToolBarMenuButton *pCVar12;
  int *piVar13;
  CWnd *pCVar14;
  CMFCPopupMenu *pCVar15;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_01;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_02;
  wchar_t *pwVar16;
  int iVar17;
  int local_1570;
  int local_156c;
  int local_1568;
  CMFCCustomizeButton *local_1564;
  CMFCPopupMenu *local_1560;
  CMFCPopupMenu *local_155c;
  CMFCToolBarMenuButton *local_1558;
  wchar_t *local_1554;
  CMFCPopupMenu *local_1550;
  wchar_t *local_154c;
  CMFCPopupMenu local_1548 [352];
  int local_13e8;
  CMFCToolBarMenuButton local_3d0 [180];
  undefined4 local_31c;
  CMFCToolBarMenuButton local_2e8 [232];
  CMFCToolBarMenuButton local_200 [232];
  CMFCToolBarMenuButton local_118 [28];
  CMFCToolBarMenuButton local_fc [228];
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1019f660;
  local_10 = ExceptionList;
  uVar3 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1564 = this;
  local_14 = uVar3;
  if (((DAT_10209cf4 == 0) && (DAT_10209cf0 == 0)) &&
     (local_155c = CMFCToolBarMenuButton::CreatePopupMenu((CMFCToolBarMenuButton *)this),
     local_155c != (CMFCPopupMenu *)0x0)) {
    if (*(int *)(*(int *)(this + 0xf8) + 0xb78) != 0) {
      pcVar1 = *(code **)(*(int *)local_155c + 0x1c8);
      guard_check_icall(uVar3);
      iVar4 = (*pcVar1)();
      *(undefined4 *)(iVar4 + 0xd44) = *(undefined4 *)(this + 0xf8);
    }
    pCVar15 = local_155c;
    if ((*(int *)(this + 0x10c) == 0) ||
       (uVar5 = CWnd::GetExStyle(*(CWnd **)(this + 0xf8)), (uVar5 & 0x400000) != 0)) {
      uVar6 = 0;
    }
    else {
      uVar6 = 1;
    }
    *(undefined4 *)(pCVar15 + 0xf44) = uVar6;
    local_1554 = (wchar_t *)0x1;
    local_1568 = *(int *)(*(int *)(this + 0xf8) + 0xb78);
    local_154c = *(wchar_t **)(this + 0x114);
    if (local_154c != (wchar_t *)0x0) {
      local_1560 = (CMFCPopupMenu *)(this + 0x110);
      bVar2 = true;
      do {
        puVar7 = (undefined4 *)FUN_100972dc(&local_154c);
        pCVar12 = (CMFCToolBarMenuButton *)*puVar7;
        if (((byte)pCVar12[0x24] & 1) == 0) {
LAB_100f77b7:
          bVar2 = false;
          iVar4 = FUN_100250d6(&PTR_s_CMFCToolBarMenuButton_10201a04);
          if (iVar4 == 0) {
            if (*(int *)(pCVar12 + 0x20) == 0) {
              pwVar8 = (wchar_t *)CMFCPopupMenu::InsertSeparator(pCVar15,-1);
            }
            else {
              if (local_1568 == 0) {
                if (*(int *)(pCVar12 + 4) == 0) {
                  iVar4 = *(int *)(pCVar12 + 0x34);
                }
                else {
                  iVar4 = *(int *)(pCVar12 + 0x38);
                }
              }
              else {
                iVar4 = -1;
              }
              pCVar12 = (CMFCToolBarMenuButton *)
                        CMFCToolBarMenuButton::CMFCToolBarMenuButton
                                  (local_2e8,*(uint *)(pCVar12 + 0x20),(HMENU__ *)0x0,iVar4,
                                   *(wchar_t **)(pCVar12 + 0x2c),*(int *)(pCVar12 + 4));
              local_8 = 0;
              local_1554 = (wchar_t *)CMFCPopupMenu::InsertItem(pCVar15,pCVar12,-1);
              local_8 = 0xffffffff;
              FUN_100e52a7();
              pwVar8 = local_1554;
            }
          }
          else {
            pwVar8 = (wchar_t *)CMFCPopupMenu::InsertItem(pCVar15,pCVar12,-1);
          }
          if ((-1 < (int)pwVar8) &&
             (local_1558 = CMFCPopupMenu::GetMenuItem(pCVar15,(int)pwVar8),
             local_1558 != (CMFCToolBarMenuButton *)0x0)) {
            if (((*(int *)(*(int *)(local_1558 + 0x2c) + -0xc) == 0) ||
                (iVar4 = FUN_100250d6(&PTR_s_CMFCToolBarComboBoxButton_1020180c),
                pCVar12 = local_1558, iVar4 != 0)) &&
               (pCVar12 = local_1558, *(int *)(local_1558 + 0x20) != 0)) {
              uVar6 = FUN_1001e20a();
              FUN_1001d224(uVar6);
              local_1554 = *(wchar_t **)(pCVar12 + 0x20);
              local_8 = 1;
              iVar4 = FUN_1001de45(local_1554);
              if (((iVar4 != 0) && (iVar4 = FUN_10018c20(iVar4,local_1554), iVar4 != 0)) &&
                 (iVar4 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::
                          Find((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *
                               )&local_1550,L'\n',0), iVar4 != -1)) {
                uVar6 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Mid
                                  ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                    *)&local_1550,(int)&local_156c);
                local_8._0_1_ = 2;
                FUN_10018680(uVar6);
                local_8._0_1_ = 1;
                ATL::CStringData::Release((CStringData *)(local_156c + -0x10));
                iVar4 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::
                        Find((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                             (pCVar12 + 0x2c),L'\n',0);
                if (iVar4 != -1) {
                  uVar6 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::
                          Left((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *
                               )(pCVar12 + 0x2c),(int)&local_1570);
                  local_8 = CONCAT31(local_8._1_3_,3);
                  FUN_10018680(uVar6);
                  ATL::CStringData::Release((CStringData *)(local_1570 + -0x10));
                }
              }
              local_8 = 0xffffffff;
              ATL::CStringData::Release((CStringData *)(local_1550 + -0x10));
            }
            *(undefined4 *)(pCVar12 + 8) = 1;
          }
        }
        else if (!bVar2) {
          this = local_1564;
          if (local_154c != (wchar_t *)0x0) goto LAB_100f77b7;
          break;
        }
        this = local_1564;
      } while (local_154c != (wchar_t *)0x0);
    }
    if (0 < *(int *)(this + 0xe8)) {
      if (*(int *)(this + 0x11c) != 0) {
        CMFCPopupMenu::InsertSeparator(pCVar15,-1);
      }
      if (*(int *)(*(int *)(this + 0xf8) + 0xbc8) == 0) {
        CMFCToolBarMenuButton::CMFCToolBarMenuButton
                  (local_fc,*(uint *)(this + 0xe8),(HMENU__ *)0x0,-1,*(wchar_t **)(this + 0xf4),0);
        local_8 = 0x14;
        CMFCPopupMenu::InsertItem(pCVar15,local_fc,-1);
      }
      else {
        local_1560 = (CMFCPopupMenu *)FUN_1001cfa0(0x1178);
        local_8 = 4;
        if (local_1560 == (CMFCPopupMenu *)0x0) {
          local_1550 = (CMFCPopupMenu *)0x0;
        }
        else {
          local_1550 = (CMFCPopupMenu *)CMFCPopupMenu::CMFCPopupMenu(local_1560);
        }
        local_8 = 0xffffffff;
        iVar4 = *(int *)(*(int *)(this + 0xf8) + 0xbc);
        if (iVar4 == 0) {
          uVar6 = FUN_1001e20a();
          FUN_1001d224(uVar6);
          local_8._0_1_ = 10;
          local_8._1_3_ = 0;
          CWnd::GetWindowTextW
                    (*(CWnd **)(this + 0xf8),
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     &local_154c);
          FUN_10018fc0();
          FUN_10019070();
          if ((*(int *)(local_154c + -6) == 0) &&
             ((iVar4 = FUN_1001de45(0x3ee8), iVar4 == 0 ||
              (iVar4 = FUN_10018c20(iVar4,0x3ee8), iVar4 == 0)))) goto LAB_100f7bfe;
          uVar6 = FUN_1001e20a();
          FUN_1001d224(uVar6);
          local_8._0_1_ = 0xb;
          iVar4 = CWnd::GetDlgCtrlID(*(CWnd **)(this + 0xf8));
          ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                    (this_02,(wchar_t *)&local_1554,&DAT_101a63a0,iVar4);
          CMFCPopupMenu::CMFCPopupMenu(local_1548);
          pwVar8 = local_1554;
          local_8._0_1_ = 0xc;
          pCVar12 = (CMFCToolBarMenuButton *)
                    CMFCToolBarMenuButton::CMFCToolBarMenuButton
                              (local_fc,1,(HMENU__ *)0x0,-1,local_1554,0);
          local_8._0_1_ = 0xd;
          CMFCPopupMenu::InsertItem(local_1548,pCVar12,-1);
          local_8._0_1_ = 0xc;
          FUN_100e52a7();
          iVar17 = 0;
          pcVar1 = *(code **)(local_13e8 + 0x43c);
          iVar4 = -1;
          pwVar16 = local_154c;
          guard_check_icall();
          pHVar11 = (HMENU__ *)(*pcVar1)();
          CMFCToolBarMenuButton::CMFCToolBarMenuButton
                    (local_200,0xffffffff,pHVar11,iVar4,pwVar16,iVar17);
          pCVar15 = local_1550;
          local_8 = CONCAT31(local_8._1_3_,0xe);
          CMFCPopupMenu::InsertItem(local_1550,local_200,-1);
          FUN_100e52a7();
          CMFCPopupMenu::~CMFCPopupMenu(local_1548);
          ATL::CStringData::Release((CStringData *)(pwVar8 + -8));
          local_8 = 0xffffffff;
          ATL::CStringData::Release((CStringData *)(local_154c + -8));
        }
        else {
          local_1560 = (CMFCPopupMenu *)(iVar4 + 0x24);
          local_1554 = *(wchar_t **)(iVar4 + 0x28);
          pCVar15 = local_1550;
          while (local_1554 != (wchar_t *)0x0) {
            pCVar9 = (CObject *)FUN_1006a9f1(&local_1554);
            pCVar9 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBar_10201648,pCVar9);
            pCVar15 = local_1550;
            if (pCVar9 != (CObject *)0x0) {
              pcVar1 = *(code **)(*(int *)pCVar9 + 0x17c);
              guard_check_icall();
              iVar4 = (*pcVar1)();
              pCVar15 = local_1550;
              if ((iVar4 != 0) && (*(int *)(pCVar9 + 0xd14) != 0)) {
                uVar6 = FUN_1001e20a();
                FUN_1001d224(uVar6);
                local_8._0_1_ = 5;
                local_8._1_3_ = 0;
                CWnd::GetWindowTextW
                          ((CWnd *)pCVar9,
                           (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                           &local_154c);
                FUN_10018fc0();
                FUN_10019070();
                if ((*(int *)(local_154c + -6) == 0) &&
                   ((iVar4 = FUN_1001de45(0x3ee8), iVar4 == 0 ||
                    (iVar4 = FUN_10018c20(iVar4,0x3ee8), iVar4 == 0)))) goto LAB_100f7bfe;
                uVar6 = FUN_1001e20a();
                FUN_1001d224(uVar6);
                local_8._0_1_ = 6;
                iVar4 = CWnd::GetDlgCtrlID((CWnd *)pCVar9);
                ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                          (this_01,(wchar_t *)&local_1558,&DAT_101a63a0,iVar4);
                CMFCPopupMenu::CMFCPopupMenu(local_1548);
                pCVar12 = local_1558;
                local_8._0_1_ = 7;
                pCVar10 = (CMFCToolBarMenuButton *)
                          CMFCToolBarMenuButton::CMFCToolBarMenuButton
                                    (local_fc,1,(HMENU__ *)0x0,-1,(wchar_t *)local_1558,0);
                local_8._0_1_ = 8;
                CMFCPopupMenu::InsertItem(local_1548,pCVar10,-1);
                local_8._0_1_ = 7;
                FUN_100e52a7();
                iVar17 = 0;
                pcVar1 = *(code **)(local_13e8 + 0x43c);
                iVar4 = -1;
                pwVar8 = local_154c;
                guard_check_icall();
                pHVar11 = (HMENU__ *)(*pcVar1)();
                CMFCToolBarMenuButton::CMFCToolBarMenuButton
                          (local_200,0xffffffff,pHVar11,iVar4,pwVar8,iVar17);
                pCVar15 = local_1550;
                local_8 = CONCAT31(local_8._1_3_,9);
                CMFCPopupMenu::InsertItem(local_1550,local_200,-1);
                FUN_100e52a7();
                CMFCPopupMenu::~CMFCPopupMenu(local_1548);
                ATL::CStringData::Release((CStringData *)(pCVar12 + -0x10));
                local_8 = 0xffffffff;
                ATL::CStringData::Release((CStringData *)(local_154c + -8));
              }
            }
          }
        }
        CMFCToolBarMenuButton::CMFCToolBarMenuButton
                  (local_2e8,*(uint *)(this + 0xe8),(HMENU__ *)0x0,-1,*(wchar_t **)(this + 0xf4),0);
        local_8 = 0xf;
        CMFCPopupMenu::InsertItem(pCVar15,local_2e8,-1);
        uVar6 = FUN_1001e20a();
        FUN_1001d224(uVar6);
        local_8._0_1_ = 0x10;
        iVar4 = FUN_1001de45(0x427a);
        if ((iVar4 == 0) || (iVar4 = FUN_10018c20(iVar4,0x427a), iVar4 == 0)) {
LAB_100f7bfe:
                    /* WARNING: Subroutine does not return */
          FUN_1001d023();
        }
        pcVar1 = *(code **)(*(int *)pCVar15 + 0x1c8);
        guard_check_icall();
        piVar13 = (int *)(*pcVar1)();
        pwVar8 = local_1554;
        iVar17 = 0;
        iVar4 = -1;
        pcVar1 = *(code **)(*piVar13 + 0x43c);
        pwVar16 = local_1554;
        guard_check_icall();
        pHVar11 = (HMENU__ *)(*pcVar1)();
        CMFCToolBarMenuButton::CMFCToolBarMenuButton
                  (local_3d0,0xffffffff,pHVar11,iVar4,pwVar16,iVar17);
        local_8._0_1_ = 0x11;
        local_31c = 1;
        pcVar1 = *(code **)(*(int *)local_1550 + 4);
        guard_check_icall(1);
        (*pcVar1)();
        this = local_1564;
        this_00 = *(CMFCToolBar **)(local_1564 + 0xf8);
        if ((this_00 != (CMFCToolBar *)0x0) &&
           ((*(int *)(this_00 + 0xbcc) != 0 &&
            (iVar4 = CMFCToolBar::CanHandleSiblings(this_00), iVar4 != 0)))) {
          uVar6 = FUN_1001e20a();
          FUN_1001d224(uVar6);
          local_8._0_1_ = 0x12;
          iVar4 = CMFCToolBar::IsOneRowWithSibling(*(CMFCToolBar **)(this + 0xf8));
          if (iVar4 == 0) {
            uVar6 = 0x4283;
          }
          else {
            uVar6 = 0x4284;
          }
          iVar4 = FUN_1001de45(uVar6);
          if ((iVar4 == 0) || (iVar4 = FUN_10018c20(iVar4,uVar6), pCVar15 = local_1550, iVar4 == 0))
          goto LAB_100f7bfe;
          CMFCCustomizeMenuButton(0xffffffec,0,0xffffffff,local_1550,0);
          DAT_1020c024 = *(undefined4 *)(this + 0xf8);
          local_8._0_1_ = 0x13;
          local_18 = 1;
          CMFCPopupMenu::InsertItem(local_155c,local_118,-1);
          FUN_101102ad();
          local_8._0_1_ = 0x11;
          ATL::CStringData::Release((CStringData *)(pCVar15 + -0x10));
        }
        pCVar15 = local_155c;
        CMFCPopupMenu::InsertItem(local_155c,local_3d0,-1);
        CMFCPopupMenu::SetQuickMode(pCVar15);
        *(undefined4 *)(pCVar15 + 0x1168) = 1;
        FUN_100e52a7();
        ATL::CStringData::Release((CStringData *)(pwVar8 + -8));
      }
      local_8 = 0xffffffff;
      FUN_100e52a7();
    }
    if (*(CWnd **)(this + 0xf8) != (CWnd *)0x0) {
      pCVar14 = CWnd::GetOwner(*(CWnd **)(this + 0xf8));
      *(CWnd **)(pCVar15 + 0x134) = pCVar14;
    }
  }
  ExceptionList = local_10;
  pCVar15 = (CMFCPopupMenu *)__security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return pCVar15;
}

