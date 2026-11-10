// rea decompile_all
// name: FUN_004b6ff0
// address: 0x4b6ff0
// body: available
// range: 0x4b6ff0-0x4b76a0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4b7496 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void FUN_004b6ff0(CDC *param_1,CMFCRibbonBar *param_2,int param_3,int param_4,int param_5,
                 int param_6,int param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10)

{
  double dVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  CDC *pCVar5;
  CMFCVisualManagerOffice2007 *pCVar6;
  CMFCVisualManagerOffice2007 *pCVar7;
  undefined1 uVar8;
  int iVar9;
  HWND pHVar10;
  CWnd *this;
  ulong uVar11;
  int iVar12;
  int iVar13;
  AFX_GLOBAL_DATA *pAVar14;
  undefined4 uVar15;
  CObject *pCVar16;
  BOOL BVar17;
  BOOL BVar18;
  CMFCVisualManagerOffice2007 *in_ECX;
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
  ulong local_2c;
  CDC *local_28;
  CMFCVisualManagerOffice2007 *local_24;
  CMFCRibbonBar *local_20;
  int local_1c;
  CMFCVisualManagerOffice2007 *local_18 [4];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x88;
  local_8._0_1_ = 0xff;
  local_8._1_3_ = 0x4b6f;
  local_28 = param_1;
  local_20 = param_2;
  local_18[0] = in_ECX;
  iVar9 = CMFCVisualManagerOffice2007::CanDrawImage(in_ECX);
  if (iVar9 == 0) {
    CMFCVisualManager::OnDrawRibbonCaption();
  }
  else {
    pHVar10 = GetParent(*(HWND *)(param_2 + 0x20));
    this = CWnd::FromHandle(pHVar10);
    local_34 = this;
    local_2c = CWnd::GetExStyle(this);
    uVar11 = CWnd::GetExStyle(this);
    local_70 = uVar11 >> 0x16 & 1;
    local_3c = CMFCVisualManagerOffice2007::IsWindowActive(in_ECX,this);
    local_38 = *(int *)(param_2 + 0x308);
    pHVar10 = GetParent(*(HWND *)(param_2 + 0x20));
    CWnd::FromHandle(pHVar10);
    CGlobalUtils::GetSystemBorders((CGlobalUtils *)&PTR_vftable_0060c45c,(CWnd *)&local_88);
    iStack_60 = param_6;
    local_80 = *(int *)(in_ECX + 0x2518);
    local_7c = *(int *)(in_ECX + 0x251c);
    local_78 = *(int *)(in_ECX + 0x2520);
    local_74 = *(int *)(in_ECX + 0x2524);
    iVar9 = *(int *)(local_20 + 0xe1c);
    iVar13 = *(int *)(local_20 + 0xe20);
    iVar2 = *(int *)(local_20 + 0xe24);
    iVar3 = *(int *)(local_20 + 0xe28);
    if (iVar2 < iVar9) {
      param_7 = iVar9 + 1;
    }
    local_6c = param_3 - local_88;
    local_64 = param_5 + local_88;
    local_68 = param_4 - local_84;
    pHVar20 = (HICON__ *)(*(uint *)(local_20 + 0x330) >> 1 & 1);
    local_50 = local_6c;
    local_30 = pHVar20;
    if ((((pHVar20 == (HICON__ *)0x0) &&
         (iVar12 = CMFCRibbonBar::IsQuickAccessToolbarOnTop(local_20), iVar12 != 0)) &&
        (iVar9 < iVar2)) && ((1 < *(int *)(local_20 + 0xebc) || (*(int *)(in_ECX + 0xc000) == 10))))
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
        iVar12 = *(int *)(in_ECX + 0x23d0);
        guard_check_icall(local_28,local_6c,local_68,local_64,iStack_60,local_3c == 0,0xff);
        (**(code **)(iVar12 + 0x14))();
        local_8._0_1_ = 0xff;
        local_8._1_3_ = 0xffffff;
        FUN_00461ef9();
        in_ECX = local_18[0];
        pHVar20 = local_30;
      }
      else {
        iVar12 = *(int *)(in_ECX + 0x23d0);
        guard_check_icall(local_28,local_6c,local_68,local_64,iStack_60,local_3c == 0,0xff);
        (**(code **)(iVar12 + 0x10))();
        in_ECX = local_18[0];
        pHVar20 = local_30;
      }
    }
    if (local_24 == (CMFCVisualManagerOffice2007 *)0x0) {
      if ((pHVar20 != (HICON__ *)0x0) &&
         (local_30 = CGlobalUtils::GetWndIcon((CGlobalUtils *)&PTR_vftable_0060c45c,local_34),
         local_30 != (HICON__ *)0x0)) {
        local_50 = GetSystemMetrics(0x32);
        local_24 = (CMFCVisualManagerOffice2007 *)GetSystemMetrics(0x31);
        iVar9 = GetSystemMetrics(4);
        if (iVar9 < param_6 - param_4) {
          iVar9 = GetSystemMetrics(4);
        }
        else {
          iVar9 = param_6 - param_4;
        }
        iVar9 = iVar9 + param_3;
        local_58 = ((iVar9 - (int)local_24) - param_3) / 2;
        if (local_58 < 0) {
          local_58 = 0;
        }
        local_58 = local_58 + param_3;
        iVar13 = ((param_6 - local_50) - param_4) / 2;
        if (iVar13 < 0) {
          iVar13 = 0;
        }
        CDC::DrawState(local_28,local_58,iVar13 + param_4,local_24,local_50,local_30,0,0);
        if (param_7 < iVar9) {
          param_7 = iVar9;
        }
      }
    }
    else {
      local_24 = in_ECX + (-(uint)(local_38 != 0) & 0x178) + 0x3fb8;
      if (*(int *)(local_24 + 0x94) != 0) {
        local_4c = (HICON__ *)(iVar9 - (*(int *)(local_24 + 0x138) + -2));
        local_50 = iVar13 + -1;
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
        iVar9 = local_50;
        if (local_40 - local_50 < *(int *)(local_24 + 0x134) - *(int *)(local_24 + 300)) {
          iVar9 = (*(int *)(local_24 + 300) - *(int *)(local_24 + 0x134)) + local_40;
          local_48 = iVar9;
        }
        if (local_38 != 0) {
          iVar13 = GetSystemMetrics(0x20);
          pAVar14 = GetGlobalData();
          if (*(int *)(pAVar14 + 0x1e8) == 0) {
            dVar1 = 1.0;
          }
          else {
            dVar1 = *(double *)(pAVar14 + 0x1e0);
          }
          if (dVar1 == 1.0) {
            local_48 = 1;
          }
          else {
            local_48 = -2;
          }
          local_48 = iVar9 + local_48;
          local_4c = (HICON__ *)((int)&local_30->unused + 1);
          local_44 = local_44 - iVar13 / 2;
        }
        iVar9 = *(int *)pCVar6;
        guard_check_icall(local_28,local_4c,local_48,local_44,local_40,local_3c == 0,0xff);
        (**(code **)(iVar9 + 0x10))();
      }
    }
    uVar15 = FUN_004295fe();
    FUN_0040eb30(uVar15);
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
      FUN_00429127();
    }
    iVar9 = FUN_00415ee0(local_1c + -0x10);
    local_18[0] = (CMFCVisualManagerOffice2007 *)(iVar9 + 0x10);
    local_8._0_1_ = 2;
    uVar15 = FUN_004295fe();
    FUN_0040eb30(uVar15);
    uVar19 = 0;
    local_8._0_1_ = 3;
    uVar8 = (undefined1)local_8;
    local_8._0_1_ = 3;
    if ((local_2c & 0x8000) != 0) {
      uVar19 = local_2c >> 0xe & 1;
      pCVar16 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CFrameWnd_005c363c,(CObject *)local_34);
      uVar8 = (undefined1)local_8;
      if (pCVar16 != (CObject *)0x0) {
        uVar15 = GetTitle(&local_2c);
        local_8._0_1_ = 4;
        FUN_00415f50(uVar15);
        local_8._0_1_ = 3;
        FUN_0040efa0();
        pCVar7 = local_18[0];
        if (*(int *)(local_18[0] + -0xc) == 0) {
          FUN_00415f50(&local_1c);
          uVar8 = (undefined1)local_8;
        }
        else {
          iVar9 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Find
                            ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                             &local_1c,(wchar_t *)local_18[0],0);
          uVar8 = (undefined1)local_8;
          if ((iVar9 != -1) && (*(int *)(pCVar7 + -0xc) < *(int *)(local_1c + -0xc))) {
            iVar13 = *(int *)(pCVar7 + -0xc) + 3;
            if (iVar9 == 0) {
              uVar19 = 0;
              uVar15 = FUN_004147d0(&local_2c,iVar13);
              local_8._0_1_ = 5;
              FUN_00415f50(uVar15);
              local_8._0_1_ = 3;
              FUN_0040efa0();
              uVar15 = FUN_00414840(&local_2c,
                                    *(int *)(local_1c + -0xc) - *(int *)(local_18[0] + -0xc));
              local_8 = CONCAT31(local_8._1_3_,6);
              FUN_00415f50(uVar15);
            }
            else {
              uVar15 = FUN_00414840(&local_2c,iVar13);
              local_8._0_1_ = 7;
              FUN_00415f50(uVar15);
              local_8._0_1_ = 3;
              FUN_0040efa0();
              uVar15 = FUN_004147d0(&local_24,
                                    *(int *)(local_1c + -0xc) - *(int *)(local_18[0] + -0xc));
              local_8 = CONCAT31(local_8._1_3_,8);
              FUN_00415f50(uVar15);
            }
            local_8._0_1_ = 3;
            FUN_0040efa0();
            uVar8 = (undefined1)local_8;
          }
        }
      }
    }
    local_8._0_1_ = uVar8;
    BVar17 = IsZoomed(*(HWND *)(local_34 + 0x20));
    BVar18 = IsZoomed(*(HWND *)(local_34 + 0x20));
    pCVar5 = local_28;
    DrawNcText(local_28,&param_7,local_18,&local_20,uVar19,local_3c,local_70,
               *(int *)(pCVar6 + 0x210),local_38,(-(uint)(BVar18 != 0) & 0xfffffff6) + 10,
               (-(uint)(BVar17 != 0) & 0x1000000) - 1);
    pcVar4 = *(code **)(*(int *)pCVar5 + 0x28);
    guard_check_icall(local_50);
    (*pcVar4)();
    FUN_0040efa0();
    FUN_0040efa0();
    FUN_0040efa0();
  }
  FUN_0055bae6();
  return;
}

