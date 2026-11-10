// rea decompile_all
// name: FUN_100f905b
// address: 0x100f905b
// body: available
// range: 0x100f905b-0x100f9480 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100f9078 to 0x1001d023 FUN_1001d023 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void FUN_100f905b(HMENU__ *param_1,int param_2,int param_3)

{
  HMENU__ *pHVar1;
  HWND pHVar2;
  CWnd *pCVar3;
  CFrameWnd *this;
  int iVar4;
  undefined4 uVar5;
  CObject *this_00;
  CMDIChildWnd *pCVar6;
  CMenu *pCVar7;
  UINT UVar8;
  HMENU pHVar9;
  CMenu *pCVar10;
  int *piVar11;
  CWnd *in_ECX;
  HMENU hMenu;
  int iVar12;
  code *pcVar13;
  int in_stack_fffffe5c;
  UINT in_stack_fffffe60;
  uint local_188;
  int local_184;
  int *local_180;
  CHelpComboBoxButton local_17c [248];
  CMFCToolBarButton local_84 [8];
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x184;
  local_8 = 0x100f906a;
  if (*(int *)(in_ECX + 0xd8c) == 0) {
LAB_100f9078:
                    /* WARNING: Subroutine does not return */
    FUN_1001d023();
  }
  pHVar2 = GetFocus();
  pCVar3 = CWnd::FromHandle(pHVar2);
  if (pCVar3 == in_ECX) {
    this = CWnd::GetParentFrame(in_ECX);
    CWnd::SetFocus((CWnd *)this);
  }
  pHVar1 = *(HMENU__ **)(in_ECX + 0xd4c);
  if (((pHVar1 == param_1) && (DAT_10209cf0 == 0)) && (param_3 == 0)) {
    if (*(int *)(in_ECX + 0xd70) != 0) {
      CMFCMenuBar::SetMaximizeMode((CMFCMenuBar *)in_ECX,0,(CWnd *)0x0,0);
      CMFCMenuBar::SetMaximizeMode((CMFCMenuBar *)in_ECX,1,(CWnd *)0x0,0);
      CMFCToolBar::InvalidateButton((CMFCToolBar *)in_ECX,0);
      iVar12 = 0;
      if (0 < *(int *)(in_ECX + 0xd64)) {
        do {
          iVar4 = FUN_1006a6b7();
          CMFCToolBar::InvalidateButton((CMFCToolBar *)in_ECX,(iVar4 - iVar12) + -1);
          iVar12 = iVar12 + 1;
        } while (iVar12 < *(int *)(in_ECX + 0xd64));
      }
    }
  }
  else {
    if ((DAT_1020bfd8 != (CMenuTearOffManager *)0x0) && (pHVar1 != (HMENU__ *)0x0)) {
      FUN_1010fb48(pHVar1);
    }
    FUN_1009c70b(*(undefined4 *)(in_ECX + 0xd4c));
    iVar12 = *(int *)(in_ECX + 0xd70);
    *(undefined4 *)(in_ECX + 0xd70) = 0;
    *(HMENU__ **)(in_ECX + 0xd4c) = param_1;
    if (param_2 != 0) {
      *(HMENU__ **)(in_ECX + 0xd50) = param_1;
    }
    pcVar13 = *(code **)(*(int *)in_ECX + 0x194);
    guard_check_icall();
    uVar5 = (*pcVar13)();
    iVar4 = CMenuHash::LoadMenuBar((CMenuHash *)&DAT_1020b388,param_1,(CMFCToolBar *)in_ECX);
    if ((iVar4 == 0) || (param_3 != 0)) {
      pCVar7 = CMenu::FromHandle(param_1);
      if (pCVar7 == (CMenu *)0x0) goto LAB_100f9210;
      if (DAT_1020bfd8 != (CMenuTearOffManager *)0x0) {
        FUN_1010fc8a(param_1);
      }
      pcVar13 = *(code **)(*(int *)in_ECX + 0x350);
      guard_check_icall();
      (*pcVar13)();
      iVar4 = GetMenuItemCount(*(HMENU *)(pCVar7 + 4));
      hMenu = (HMENU)0x0;
      if (0 < iVar4) {
        do {
          UVar8 = GetMenuItemID(*(HMENU *)(pCVar7 + 4),(int)hMenu);
          uVar5 = FUN_1001e20a();
          FUN_1001d224(uVar5);
          local_8 = 0;
          FID_conflict_GetMenuStringA
                    (hMenu,(UINT)&local_184,(LPSTR)0x400,in_stack_fffffe5c,in_stack_fffffe60);
          if (UVar8 == 0) {
            pcVar13 = *(code **)(*(int *)in_ECX + 0x348);
            guard_check_icall(0xffffffff);
LAB_100f93e4:
            (*pcVar13)();
          }
          else {
            if (UVar8 == 0xffffffff) {
              pHVar9 = GetSubMenu(*(HMENU *)(pCVar7 + 4),(int)hMenu);
              pCVar10 = CMenu::FromHandle(pHVar9);
              if (pCVar10 != (CMenu *)0x0) {
                local_188 = 0;
                if (DAT_1020bfd8 != (CMenuTearOffManager *)0x0) {
                  local_188 = CMenuTearOffManager::Parse
                                        (DAT_1020bfd8,
                                         (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                          *)&local_184);
                }
                piVar11 = (int *)FUN_1002505f();
                if (pCVar10 == (CMenu *)0x0) {
                  uVar5 = 0;
                }
                else {
                  uVar5 = *(undefined4 *)(pCVar10 + 4);
                }
                local_180 = piVar11;
                Initialize(0,uVar5,0xffffffff,local_184,0);
                piVar11[3] = 0;
                piVar11[2] = 1;
                pcVar13 = *(code **)(*piVar11 + 0xf8);
                guard_check_icall(local_188);
                (*pcVar13)();
                pcVar13 = *(code **)(*(int *)in_ECX + 0x344);
                guard_check_icall(local_180,0xffffffff);
                (*pcVar13)();
                pcVar13 = *(code **)(*local_180 + 4);
                guard_check_icall(1);
                goto LAB_100f93e4;
              }
              goto LAB_100f9078;
            }
            CMFCToolBarButton(UVar8,0xffffffff,local_184,0,0);
            local_78 = 0;
            pcVar13 = *(code **)(*(int *)in_ECX + 0x344);
            local_8 = CONCAT31(local_8._1_3_,1);
            local_7c = 1;
            guard_check_icall(local_84,0xffffffff);
            (*pcVar13)();
            CMFCToolBarButton::~CMFCToolBarButton(local_84);
          }
          local_8 = 0xffffffff;
          ATL::CStringData::Release((CStringData *)(local_184 + -0x10));
          hMenu = (HMENU)((int)&hMenu->unused + 1);
        } while ((int)hMenu < iVar4);
      }
      if ((*(int *)(in_ECX + 0xd60) != 0) &&
         (iVar4 = FUN_10068d79(*(int *)(in_ECX + 0xd60),0), iVar4 < 0)) {
        CHelpComboBoxButton(*(undefined4 *)(in_ECX + 0xd60),*(undefined4 *)(in_ECX + 0xd6c),
                            *(undefined4 *)(in_ECX + 0xd84));
        local_8 = 2;
        pcVar13 = *(code **)(*(int *)in_ECX + 0x344);
        guard_check_icall(local_17c,0xffffffff);
        (*pcVar13)();
        local_8 = 0xffffffff;
        CHelpComboBoxButton::~CHelpComboBoxButton(local_17c);
      }
    }
    else {
      pcVar13 = *(code **)(*(int *)in_ECX + 0x1e0);
      guard_check_icall(uVar5);
      (*pcVar13)();
    }
    if ((iVar12 != 0) &&
       (this_00 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWnd_101c8e5c,
                                     *(CObject **)(in_ECX + 0xd48)), this_00 != (CObject *)0x0)) {
      iVar12 = 1;
      pCVar6 = CMDIFrameWnd::MDIGetActive((CMDIFrameWnd *)this_00,(int *)0x0);
      CMFCMenuBar::SetMaximizeMode((CMFCMenuBar *)in_ECX,1,(CWnd *)pCVar6,iVar12);
    }
    if (*(int *)(in_ECX + 0x20) != 0) {
      pcVar13 = *(code **)(*(int *)in_ECX + 0x20c);
      guard_check_icall();
      (*pcVar13)();
    }
    CMFCToolBar::RebuildAccelerationKeys((CMFCToolBar *)in_ECX);
  }
  if (*(int *)(in_ECX + 0x178) == 0) {
    pcVar13 = *(code **)(*(int *)in_ECX + 0x2d4);
    guard_check_icall(1);
    (*pcVar13)();
  }
LAB_100f9210:
  FUN_10154478();
  return;
}

