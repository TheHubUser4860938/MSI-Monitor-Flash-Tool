// rea decompile_all
// name: FUN_100a2160
// address: 0x100a2160
// body: available
// range: 0x100a2160-0x100a2810 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100a2606 to 0x1001d023 FUN_1001d023 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void FUN_100a2160(CDC *param_1,CMFCRibbonBar *param_2,int param_3,int param_4,int param_5,
                 int param_6,int param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10)

{
  double dVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  CDC *pCVar5;
  CMFCVisualManagerOffice2007 *pCVar6;
  undefined1 uVar7;
  int iVar8;
  HWND pHVar9;
  CWnd *this;
  ulong uVar10;
  int iVar11;
  int iVar12;
  AFX_GLOBAL_DATA *pAVar13;
  undefined4 uVar14;
  CObject *pCVar15;
  BOOL BVar16;
  BOOL BVar17;
  CMFCVisualManagerOffice2007 *in_ECX;
  CMFCVisualManagerOffice2007 *pCVar18;
  uint uVar19;
  HICON__ *pHVar20;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  uint local_70;
  int local_6c;
  int local_68;
  int local_64;
  int iStack_60;
  undefined4 local_5c;
  int local_58;
  CDrawingManager local_54 [4];
  int local_50;
  HICON__ *local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  CWnd *local_34;
  HICON__ *local_30;
  CMFCVisualManagerOffice2007 *local_2c;
  CDC *local_28;
  CMFCVisualManagerOffice2007 *local_24;
  CMFCRibbonBar *local_20;
  int local_1c;
  CMFCVisualManagerOffice2007 *local_18 [4];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x88;
  local_8._0_1_ = 0x6f;
  local_8._1_3_ = 0x100a21;
  local_28 = param_1;
  local_20 = param_2;
  local_18[0] = in_ECX;
  iVar8 = CMFCVisualManagerOffice2007::CanDrawImage(in_ECX);
  if (iVar8 == 0) {
    CMFCVisualManager::OnDrawRibbonCaption();
  }
  else {
    pHVar9 = GetParent(*(HWND *)(param_2 + 0x20));
    this = CWnd::FromHandle(pHVar9);
    local_34 = this;
    local_2c = (CMFCVisualManagerOffice2007 *)CWnd::GetExStyle(this);
    uVar10 = CWnd::GetExStyle(this);
    local_70 = uVar10 >> 0x16 & 1;
    local_3c = CMFCVisualManagerOffice2007::IsWindowActive(in_ECX,this);
    local_38 = *(int *)(param_2 + 0x308);
    pHVar9 = GetParent(*(HWND *)(param_2 + 0x20));
    CWnd::FromHandle(pHVar9);
    CGlobalUtils::GetSystemBorders((CGlobalUtils *)&PTR_vftable_1020194c,(CWnd *)&local_88);
    iStack_60 = param_6;
    local_80 = *(int *)(in_ECX + 0x2518);
    local_7c = *(int *)(in_ECX + 0x251c);
    local_78 = *(int *)(in_ECX + 0x2520);
    local_74 = *(int *)(in_ECX + 0x2524);
    iVar8 = *(int *)(local_20 + 0xe1c);
    iVar12 = *(int *)(local_20 + 0xe20);
    iVar2 = *(int *)(local_20 + 0xe24);
    iVar3 = *(int *)(local_20 + 0xe28);
    if (iVar2 < iVar8) {
      param_7 = iVar8 + 1;
    }
    local_6c = param_3 - local_88;
    local_64 = param_5 + local_88;
    local_68 = param_4 - local_84;
    pHVar20 = (HICON__ *)(*(uint *)(local_20 + 0x330) >> 1 & 1);
    local_50 = local_6c;
    local_30 = pHVar20;
    if ((((pHVar20 == (HICON__ *)0x0) &&
         (iVar11 = CMFCRibbonBar::IsQuickAccessToolbarOnTop(local_20), iVar11 != 0)) &&
        (iVar8 < iVar2)) && ((1 < *(int *)(local_20 + 0xebc) || (*(int *)(in_ECX + 0xc000) == 10))))
    {
      local_24 = (CMFCVisualManagerOffice2007 *)0x1;
    }
    else {
      local_24 = (CMFCVisualManagerOffice2007 *)0x0;
    }
    if (local_38 == 0) {
      if (*(int *)(in_ECX + 0xc000) < 0x14) {
        if (local_3c == 0) {
          local_5c = *(undefined4 *)(in_ECX + 0x8f58);
          local_58 = *(int *)(in_ECX + 0x8f5c);
        }
        else {
          local_5c = *(undefined4 *)(in_ECX + 0x8f50);
          local_58 = *(int *)(in_ECX + 0x8f54);
        }
        local_4c = (HICON__ *)(local_80 + local_50);
        local_48 = local_68 + local_7c;
        local_44 = local_64 - local_78;
        local_40 = iStack_60 - local_74;
        CDrawingManager::CDrawingManager(local_54,local_28);
        local_8 = 0;
        CDrawingManager::Fill4ColorsGradient
                  (local_54,local_4c,local_48,local_44,local_40,local_5c,local_58,local_58,local_5c,
                   0,0x32);
        iVar11 = *(int *)(in_ECX + 0x23d0);
        guard_check_icall(local_28,local_6c,local_68,local_64,iStack_60,local_3c == 0,0xff);
        (**(code **)(iVar11 + 0x14))();
        local_8._0_1_ = 0xff;
        local_8._1_3_ = 0xffffff;
        FUN_10084c54();
        in_ECX = local_18[0];
        pHVar20 = local_30;
      }
      else {
        iVar11 = *(int *)(in_ECX + 0x23d0);
        guard_check_icall(local_28,local_6c,local_68,local_64,iStack_60,local_3c == 0,0xff);
        (**(code **)(iVar11 + 0x10))();
        in_ECX = local_18[0];
        pHVar20 = local_30;
      }
    }
    if (local_24 == (CMFCVisualManagerOffice2007 *)0x0) {
      if ((pHVar20 != (HICON__ *)0x0) &&
         (local_30 = CGlobalUtils::GetWndIcon((CGlobalUtils *)&PTR_vftable_1020194c,local_34),
         local_30 != (HICON__ *)0x0)) {
        local_50 = GetSystemMetrics(0x32);
        local_24 = (CMFCVisualManagerOffice2007 *)GetSystemMetrics(0x31);
        iVar8 = GetSystemMetrics(4);
        if (iVar8 < param_6 - param_4) {
          iVar8 = GetSystemMetrics(4);
        }
        else {
          iVar8 = param_6 - param_4;
        }
        iVar8 = iVar8 + param_3;
        local_58 = ((iVar8 - (int)local_24) - param_3) / 2;
        if (local_58 < 0) {
          local_58 = 0;
        }
        local_58 = local_58 + param_3;
        iVar12 = ((param_6 - local_50) - param_4) / 2;
        if (iVar12 < 0) {
          iVar12 = 0;
        }
        CDC::DrawState(local_28,local_58,iVar12 + param_4,local_24,local_50,local_30,0,0);
        if (param_7 < iVar8) {
          param_7 = iVar8;
        }
      }
    }
    else {
      local_24 = in_ECX + (-(uint)(local_38 != 0) & 0x178) + 0x3fb8;
      if (*(int *)(local_24 + 0x94) != 0) {
        local_4c = (HICON__ *)(iVar8 - (*(int *)(local_24 + 0x138) + -2));
        local_50 = iVar12 + -1;
        local_40 = iVar3 + 1;
        local_80 = *(int *)(local_20 + 0x1238);
        local_7c = *(int *)(local_20 + 0x123c);
        local_78 = *(int *)(local_20 + 0x1240);
        local_74 = *(int *)(local_20 + 0x1244);
        pcVar4 = *(code **)(*(int *)in_ECX + 600);
        local_48 = local_50;
        local_44 = iVar2;
        local_30 = local_4c;
        guard_check_icall();
        local_44 = (*pcVar4)();
        pCVar6 = local_24;
        local_44 = local_44 + local_78 + 1;
        iVar8 = local_50;
        if (local_40 - local_50 < *(int *)(local_24 + 0x134) - *(int *)(local_24 + 300)) {
          iVar8 = (*(int *)(local_24 + 300) - *(int *)(local_24 + 0x134)) + local_40;
          local_48 = iVar8;
        }
        if (local_38 != 0) {
          iVar12 = GetSystemMetrics(0x20);
          pAVar13 = GetGlobalData();
          if (*(int *)(pAVar13 + 0x1e8) == 0) {
            dVar1 = 1.0;
          }
          else {
            dVar1 = *(double *)(pAVar13 + 0x1e0);
          }
          if (dVar1 == 1.0) {
            local_48 = 1;
          }
          else {
            local_48 = -2;
          }
          local_48 = iVar8 + local_48;
          local_4c = (HICON__ *)((int)&local_30->unused + 1);
          local_44 = local_44 - iVar12 / 2;
        }
        iVar8 = *(int *)pCVar6;
        guard_check_icall(local_28,local_4c,local_48,local_44,local_40,local_3c == 0,0xff);
        (**(code **)(iVar8 + 0x10))();
      }
    }
    uVar14 = FUN_1001e20a();
    FUN_1001d224(uVar14);
    local_8 = 1;
    CWnd::GetWindowTextW
              (local_34,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                        &local_1c);
    pCVar6 = local_18[0];
    pcVar4 = *(code **)(*(int *)local_28 + 0x28);
    guard_check_icall(local_18[0] + 0x8f38);
    local_50 = (*pcVar4)();
    if (local_50 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1001d023();
    }
    iVar8 = FUN_100187a0(local_1c + -0x10);
    local_18[0] = (CMFCVisualManagerOffice2007 *)(iVar8 + 0x10);
    local_8._0_1_ = 2;
    uVar14 = FUN_1001e20a();
    FUN_1001d224(uVar14);
    uVar19 = 0;
    local_8._0_1_ = 3;
    uVar7 = (undefined1)local_8;
    local_8._0_1_ = 3;
    if (((uint)local_2c & 0x8000) != 0) {
      uVar19 = (uint)local_2c >> 0xe & 1;
      pCVar15 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CFrameWnd_101b71f8,(CObject *)local_34);
      uVar7 = (undefined1)local_8;
      if (pCVar15 != (CObject *)0x0) {
        uVar14 = GetTitle(&local_2c);
        local_8._0_1_ = 4;
        FUN_10018680(uVar14);
        local_8._0_1_ = 3;
        ATL::CStringData::Release((CStringData *)(local_2c + -0x10));
        pCVar18 = local_18[0];
        if (*(int *)(local_18[0] + -0xc) == 0) {
          FUN_10018680(&local_1c);
          uVar7 = (undefined1)local_8;
        }
        else {
          iVar8 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Find
                            ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                             &local_1c,(wchar_t *)local_18[0],0);
          uVar7 = (undefined1)local_8;
          if ((iVar8 != -1) && (*(int *)(pCVar18 + -0xc) < *(int *)(local_1c + -0xc))) {
            if (iVar8 == 0) {
              uVar19 = 0;
              uVar14 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Left
                                 ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                   *)&local_1c,(int)&local_2c);
              local_8._0_1_ = 5;
              FUN_10018680(uVar14);
              local_8._0_1_ = 3;
              ATL::CStringData::Release((CStringData *)(local_2c + -0x10));
              uVar14 = FUN_10018e20(&local_2c,
                                    *(int *)(local_1c + -0xc) - *(int *)(local_18[0] + -0xc));
              local_8 = CONCAT31(local_8._1_3_,6);
              FUN_10018680(uVar14);
              pCVar18 = local_2c;
            }
            else {
              uVar14 = FUN_10018e20(&local_2c,*(int *)(pCVar18 + -0xc) + 3);
              local_8._0_1_ = 7;
              FUN_10018680(uVar14);
              local_8._0_1_ = 3;
              ATL::CStringData::Release((CStringData *)(local_2c + -0x10));
              uVar14 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Left
                                 ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                   *)&local_1c,(int)&local_24);
              local_8 = CONCAT31(local_8._1_3_,8);
              FUN_10018680(uVar14);
              pCVar18 = local_24;
            }
            local_8._0_1_ = 3;
            ATL::CStringData::Release((CStringData *)(pCVar18 + -0x10));
            uVar7 = (undefined1)local_8;
          }
        }
      }
    }
    local_8._0_1_ = uVar7;
    BVar16 = IsZoomed(*(HWND *)(local_34 + 0x20));
    BVar17 = IsZoomed(*(HWND *)(local_34 + 0x20));
    pCVar5 = local_28;
    DrawNcText(local_28,&param_7,local_18,&local_20,uVar19,local_3c,local_70,
               *(int *)(pCVar6 + 0x210),local_38,(-(uint)(BVar17 != 0) & 0xfffffff6) + 10,
               (-(uint)(BVar16 != 0) & 0x1000000) - 1);
    pcVar4 = *(code **)(*(int *)pCVar5 + 0x28);
    guard_check_icall(local_50);
    (*pcVar4)();
    ATL::CStringData::Release((CStringData *)(local_20 + -0x10));
    ATL::CStringData::Release((CStringData *)(local_18[0] + -0x10));
    ATL::CStringData::Release((CStringData *)(local_1c + -0x10));
  }
  FUN_10154478();
  return;
}

