// rea decompile_all
// name: FUN_100da6e3
// address: 0x100da6e3
// body: available
// range: 0x100da6e3-0x100dba81 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100db8c2 to 0x10012a3f FUN_10012a3f (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void FUN_100da6e3(CDC *param_1,int *param_2,CMFCToolBarImages *param_3,int param_4,int param_5,
                 int param_6,int param_7)

{
  double dVar1;
  CMFCToolBar *this;
  CMFCToolBarButton *pCVar2;
  CDC *pCVar3;
  undefined4 uVar4;
  AFX_GLOBAL_DATA *pAVar5;
  undefined4 uVar6;
  int iVar7;
  CObject *pCVar8;
  HWND pHVar9;
  CWnd *pCVar10;
  CMFCVisualManager *pCVar11;
  int *piVar12;
  __POSITION *p_Var13;
  int iVar14;
  HRGN pHVar15;
  CMFCVisualManager *pCVar16;
  ulong uVar17;
  undefined *puVar18;
  CMFCToolBarButton *in_ECX;
  uint uVar19;
  CMFCToolBarButton *pCVar20;
  CMFCToolBarImages *pCVar21;
  code *pcVar22;
  CDC *pCVar23;
  int local_f0 [2];
  undefined1 local_e8 [12];
  undefined **local_dc;
  undefined4 local_d8;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> local_d4 [4];
  CObject *local_d0;
  CMFCVisualManager *local_cc;
  CObject *local_c8;
  HICON__ *local_c0;
  CMFCVisualManager *local_bc;
  CUserTool *local_b8;
  CMFCToolBarImages *local_b4;
  CMFCVisualManager *local_b0;
  CMFCToolBarImages *local_ac;
  undefined1 local_a8 [4];
  uint local_a4;
  undefined4 local_a0;
  IMAGE_STATE local_9c;
  uint local_98;
  int *local_94;
  char local_8d;
  uint local_8c;
  int local_88;
  CMFCVisualManager *local_84;
  CMFCToolBarButton *local_80;
  CMFCToolBarImages *local_7c;
  CDC *local_78;
  RECT local_74;
  int local_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  CMFCVisualManager *local_54;
  CMFCVisualManager *pCStack_50;
  CMFCVisualManager *local_4c;
  CObject *pCStack_48;
  tagRECT local_44;
  tagRECT local_34;
  undefined1 local_24 [8];
  CMFCVisualManager *local_1c;
  CMFCVisualManager *local_18 [4];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xe0;
  local_8._0_1_ = 0xf2;
  local_8._1_3_ = 0x100da6;
  local_98 = 0;
  local_78 = param_1;
  local_94 = param_2;
  local_7c = param_3;
  local_80 = in_ECX;
  if (*(int *)(in_ECX + 0x20) == -2) {
    local_b0 = CMFCVisualManager::GetInstance();
    pCVar23 = local_78;
    iVar7 = *(int *)local_b0;
    guard_check_icall(local_78,*param_2,param_2[1],param_2[2],param_2[3]);
    uVar4 = (**(code **)(iVar7 + 0x4c))();
    pcVar22 = *(code **)(*(int *)pCVar23 + 0x30);
    guard_check_icall(uVar4);
    uVar4 = (*pcVar22)();
    local_34.left = *local_94;
    local_34.top = local_94[1];
    local_34.right = local_94[2];
    local_34.bottom = local_94[3];
    InflateRect(&local_34,-3,0);
    local_34.bottom = local_34.bottom + -2;
    iVar7 = *(int *)local_78;
    pAVar5 = GetGlobalData();
    guard_check_icall(pAVar5 + 300);
    uVar6 = (**(code **)(iVar7 + 0x28))();
    iVar7 = *(int *)local_78;
    guard_check_icall(*(int *)(local_80 + 0x2c),*(undefined4 *)(*(int *)(local_80 + 0x2c) + -0xc),
                      &local_34,0x24);
    (**(code **)(iVar7 + 0x68))();
    pcVar22 = *(code **)(*(int *)local_78 + 0x30);
    guard_check_icall(uVar4);
    pCVar23 = local_78;
    (*pcVar22)();
    pcVar22 = *(code **)(*(int *)pCVar23 + 0x28);
LAB_100da7d8:
    guard_check_icall(uVar6);
    (*pcVar22)();
    goto LAB_100dba7a;
  }
  if (param_4 == 0) {
    if ((*(uint *)(in_ECX + 0x24) & 0x40000) == 0) goto LAB_100da80b;
LAB_100da8fb:
    local_9c = 1;
  }
  else {
    pcVar22 = *(code **)(*(int *)in_ECX + 0x60);
    guard_check_icall();
    iVar7 = (*pcVar22)();
    if (iVar7 == 0) goto LAB_100da8fb;
LAB_100da80b:
    local_9c = 0;
  }
  local_b4 = (CMFCToolBarImages *)0x0;
  local_ac = (CMFCToolBarImages *)0x0;
  pCVar8 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCPopupMenuBar_101d3928,
                              *(CObject **)(in_ECX + 0x6c));
  local_d0 = pCVar8;
  FUN_1005f3ff(&local_cc);
  if (pCVar8 != (CObject *)0x0) {
    if (*(int *)(pCVar8 + 0xd80) != 0) {
      pHVar9 = GetParent(*(HWND *)(pCVar8 + 0x20));
      pCVar10 = CWnd::FromHandle(pHVar9);
      local_18[0] = (CMFCVisualManager *)
                    AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCDropDownListBox_101a42d8,
                                       (CObject *)pCVar10);
      if (local_18[0] != (CMFCVisualManager *)0x0) {
        pCVar11 = CMFCVisualManager::GetInstance();
        pcVar22 = *(code **)(*(int *)pCVar11 + 0x9c);
        guard_check_icall();
        local_ac = (CMFCToolBarImages *)(*pcVar22)();
        pCVar23 = local_78;
        if (param_5 != 0) {
          pCVar11 = CMFCVisualManager::GetInstance();
          pCVar23 = local_78;
          pcVar22 = *(code **)(*(int *)pCVar11 + 0x90);
          guard_check_icall(local_78,local_80,*local_94,local_94[1],local_94[2],local_94[3],
                            &local_ac);
          (*pcVar22)();
          in_ECX = local_80;
        }
        pcVar22 = *(code **)(*(int *)pCVar23 + 0x30);
        guard_check_icall(local_ac);
        uVar6 = (*pcVar22)();
        pCVar23 = local_78;
        pcVar22 = *(code **)(*(int *)local_18[0] + 0x214);
        guard_check_icall(local_78,in_ECX,param_5);
        (*pcVar22)();
        pcVar22 = *(code **)(*(int *)pCVar23 + 0x30);
        goto LAB_100da7d8;
      }
    }
    this = *(CMFCToolBar **)(pCVar8 + 0xd44);
    if (((this != (CMFCToolBar *)0x0) && (*(int *)(this + 0xb78) != 0)) &&
       (local_ac = CMFCToolBar::GetLockedMenuImages(this), local_ac != (CMFCToolBarImages *)0x0)) {
      local_b0 = (CMFCVisualManager *)0x0;
      local_18[0] = (CMFCVisualManager *)0x0;
      pcVar22 = *(code **)(*(int *)pCVar8 + 0x434);
      guard_check_icall(local_a8);
      piVar12 = (int *)(*pcVar22)();
      pCVar21 = local_ac;
      if ((local_cc != (CMFCVisualManager *)*piVar12) ||
         (pCVar11 = local_b0, pCVar16 = local_18[0], local_c8 != (CObject *)piVar12[1])) {
        pCVar11 = local_cc;
        pCVar16 = (CMFCVisualManager *)local_c8;
      }
      CMFCToolBarImages::PrepareDrawImage(local_ac,local_e8,pCVar11,pCVar16,0);
      local_7c = pCVar21;
    }
  }
  uVar19 = *(uint *)(in_ECX + 0x20);
  iVar7 = FUN_100918eb();
  p_Var13 = CList<unsigned_int,unsigned_int>::Find
                      ((CList<unsigned_int,unsigned_int> *)(iVar7 + 0x58),uVar19,(__POSITION *)0x0);
  local_a4 = (uint)(p_Var13 != (__POSITION *)0x0);
  if ((*(int *)(in_ECX + 0x20) == 0x427c) || (*(int *)(in_ECX + 0x20) == 0x427d)) {
    local_a4 = 1;
  }
  local_b8 = (CUserTool *)0x0;
  if ((DAT_101dc968 != (CUserToolsManager *)0x0) && (*(int *)(in_ECX + 4) == 0)) {
    local_b8 = CUserToolsManager::FindTool(DAT_101dc968,*(uint *)(in_ECX + 0x20));
  }
  local_c0 = CMFCTabCtrl::GetDocumentIcon(*(uint *)(in_ECX + 0x20));
  FUN_100796e6(local_f0);
  if ((*(int *)(in_ECX + 0x8c) != 0) && (*(int *)(in_ECX + 0xa4) == 0)) {
    param_5 = 1;
  }
  local_88 = param_5;
  pCVar11 = CMFCVisualManager::GetInstance();
  pcVar22 = *(code **)(*(int *)pCVar11 + 0x9c);
  guard_check_icall();
  local_a0 = (*pcVar22)();
  pCVar11 = CMFCVisualManager::GetInstance();
  pcVar22 = *(code **)(*(int *)pCVar11 + 0x98);
  guard_check_icall();
  iVar7 = (*pcVar22)();
  local_8c = (uint)(iVar7 == 0);
  if ((local_88 != 0) && (param_7 == 0)) {
    pCVar11 = CMFCVisualManager::GetInstance();
    pcVar22 = *(code **)(*(int *)pCVar11 + 0x98);
    guard_check_icall();
    iVar7 = (*pcVar22)();
    if (iVar7 != 0) {
      pCVar11 = CMFCVisualManager::GetInstance();
      pcVar22 = *(code **)(*(int *)pCVar11 + 0x90);
      guard_check_icall(local_78,local_80,*local_94,local_94[1],local_94[2],local_94[3],&local_a0);
      (*pcVar22)();
      local_8c = 0;
      in_ECX = local_80;
    }
  }
  if ((*(uint *)(in_ECX + 0x24) & 0x10000) != 0) {
    pCVar11 = CMFCVisualManager::GetInstance();
    pcVar22 = *(code **)(*(int *)pCVar11 + 0xb0);
    guard_check_icall();
    iVar7 = (*pcVar22)();
    if (iVar7 == 0) {
      local_8c = 1;
    }
  }
  local_b0 = (CMFCVisualManager *)0x0;
  iVar7 = *(int *)(in_ECX + 0x20);
  if ((((iVar7 != 0) && (iVar7 != -1)) && (*(int *)(in_ECX + 0xa8) == 0)) &&
     ((local_d0 != (CObject *)0x0 && (*(int *)(local_d0 + 0xd48) == iVar7)))) {
    iVar7 = *(int *)local_78;
    pAVar5 = GetGlobalData();
    guard_check_icall(pAVar5 + 300);
    local_b0 = (CMFCVisualManager *)(**(code **)(iVar7 + 0x28))();
  }
  local_74.left = *local_94;
  local_74.top = local_94[1];
  local_74.right = local_94[2];
  local_74.bottom = local_94[3];
  pCVar11 = CMFCVisualManager::GetInstance();
  pcVar22 = *(code **)(*(int *)pCVar11 + 0x2dc);
  guard_check_icall();
  iVar7 = (*pcVar22)();
  local_74.left = local_74.left + iVar7;
  pCVar11 = CMFCVisualManager::GetInstance();
  pcVar22 = *(code **)(*(int *)pCVar11 + 0x2dc);
  guard_check_icall();
  iVar7 = (*pcVar22)();
  local_74.right = (LONG)(local_cc + iVar7 + local_74.left);
  local_44.left = local_74.left;
  local_44.top = local_74.top;
  local_44.bottom = local_74.bottom;
  local_44.right = local_74.right;
  pCVar11 = CMFCVisualManager::GetInstance();
  pcVar22 = *(code **)(*(int *)pCVar11 + 0x98);
  guard_check_icall();
  iVar7 = (*pcVar22)();
  if (iVar7 == 0) {
    InflateRect(&local_44,1,-1);
  }
  else {
    local_44.left = *local_94;
    local_44.top = local_94[1];
    local_44.right = local_94[2];
    local_44.bottom = local_94[3];
    pCVar11 = CMFCVisualManager::GetInstance();
    pcVar22 = *(code **)(*(int *)pCVar11 + 0x2e4);
    guard_check_icall(&local_34);
    (*pcVar22)();
    local_44.left = local_34.left + local_44.left;
    local_44.top = local_34.top + local_44.top;
    local_44.bottom = local_44.bottom - local_34.bottom;
    local_44.right = local_74.right;
  }
  if (((DAT_101d3acc != 0) &&
      (iVar7 = CMFCToolBar::IsCommandRarelyUsed(*(uint *)(in_ECX + 0x20)), iVar7 != 0)) &&
     (pCVar8 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCPopupMenuBar_101d3928,
                                  *(CObject **)(in_ECX + 0x6c)), pCVar8 != (CObject *)0x0)) {
    pHVar9 = GetParent(*(HWND *)(pCVar8 + 0x20));
    pCVar10 = CWnd::FromHandle(pHVar9);
    pCVar8 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCPopupMenu_101d377c,(CObject *)pCVar10);
    if (pCVar8 != (CObject *)0x0) {
      FUN_1007fec3();
    }
  }
  iVar7 = local_88;
  if ((local_88 == 0) && (pCVar11 = CMFCVisualManager::GetInstance(), *(int *)(pCVar11 + 0x5c) != 0)
     ) {
    local_18[0] = (CMFCVisualManager *)0x1;
  }
  else {
    local_18[0] = (CMFCVisualManager *)0x0;
  }
  iVar14 = CMFCToolBarButton::IsDrawImage(in_ECX);
  if ((iVar14 == 0) && (local_c0 == (HICON__ *)0x0)) {
    uVar4 = *(undefined4 *)(in_ECX + 0xc);
    uVar6 = *(undefined4 *)(in_ECX + 4);
    *(undefined4 *)(in_ECX + 0xc) = 1;
    *(undefined4 *)(in_ECX + 4) = 1;
    if ((*(int *)(in_ECX + 0x38) < 0) &&
       (*(undefined4 *)(in_ECX + 4) = 0, *(int *)(in_ECX + 0x34) < 0)) {
      *(undefined4 *)(in_ECX + 0xc) = uVar4;
      *(undefined4 *)(in_ECX + 4) = uVar6;
    }
    pCVar21 = DAT_101daf80;
    if (((*(int *)(in_ECX + 4) != 0) && (local_7c != DAT_101daf80)) &&
       (local_b4 = DAT_101daf80, DAT_101daf80 != (CMFCToolBarImages *)0x0)) {
      uVar4 = 0;
      iVar14 = 0;
      if (local_7c != (CMFCToolBarImages *)0x0) {
        iVar7 = local_88;
        in_ECX = local_80;
        if ((*(int *)(local_7c + 0x54) != *(int *)(DAT_101daf80 + 0x54)) ||
           (*(int *)(local_7c + 0x58) != *(int *)(DAT_101daf80 + 0x58))) {
          uVar4 = *(undefined4 *)(local_7c + 0x58);
          iVar14 = *(int *)(local_7c + 0x54);
        }
      }
      CMFCToolBarImages::PrepareDrawImage(DAT_101daf80,local_e8,iVar14,uVar4,0);
      local_7c = pCVar21;
    }
  }
  pCVar21 = local_7c;
  local_84 = (CMFCVisualManager *)0x0;
  local_d8 = 0;
  local_dc = CRgn::vftable;
  local_8 = 0;
  pHVar15 = CreateRectRgnIndirect(&local_74);
  CMenu::Attach((CMenu *)&local_dc,(HMENU__ *)pHVar15);
  pCVar23 = local_78;
  if ((local_8c != 0) && (param_7 == 0)) {
    CMFCToolBarButton::FillInterior(in_ECX,local_78,(CRect *)&local_44,iVar7,1);
  }
  if ((((local_a4 == 0) && (iVar7 = CMFCToolBarButton::IsDrawImage(in_ECX), iVar7 != 0)) &&
      (pCVar21 != (CMFCToolBarImages *)0x0)) || (local_c0 != (HICON__ *)0x0)) {
    if (((local_88 == 0) || (param_4 != 0)) ||
       (pCVar11 = CMFCVisualManager::GetInstance(), *(int *)(pCVar11 + 0x54) == 0)) {
LAB_100dae4b:
      local_a4 = 0;
    }
    else {
      pAVar5 = GetGlobalData();
      iVar7 = AFX_GLOBAL_DATA::IsHighContrastMode(pAVar5);
      if ((iVar7 != 0) || ((*(uint *)(in_ECX + 0x24) & 0x50000) != 0)) goto LAB_100dae4b;
      local_a4 = 1;
    }
    CDC::SelectObject(pCVar23,(CRgn *)&local_dc);
    pCVar3 = local_78;
    pCVar20 = local_80;
    pCVar11 = (CMFCVisualManager *)((int)(local_74.bottom + (-(int)local_c8 - local_74.top)) / 2);
    local_d0 = (CObject *)((int)(local_74.right + (-local_74.left - (int)local_cc)) / 2);
    if ((((*(uint *)(in_ECX + 0x24) & 0x60000) == 0x40000) && (param_6 != 0)) && (param_4 == 0)) {
      local_34.left = local_74.left + (int)local_d0;
      local_34.right = local_34.left + (int)local_cc;
      local_34.top = (LONG)(pCVar11 + local_74.top);
      local_34.bottom = (LONG)(local_c8 + local_34.top);
      pCVar20 = in_ECX;
      pCVar23 = local_78;
      local_84 = pCVar11;
      if (local_c0 == (HICON__ *)0x0) {
        if (local_b8 == (CUserTool *)0x0) {
          if (local_a4 != 0) {
            OffsetRect(&local_74,1,1);
            if (*(int *)(in_ECX + 4) == 0) {
              iVar7 = *(int *)(in_ECX + 0x34);
            }
            else {
              iVar7 = *(int *)(in_ECX + 0x38);
            }
            CMFCToolBarImages::Draw
                      (local_7c,pCVar3,(int)(local_74.left + (int)local_d0),
                       (int)(local_74.top + (int)local_84),iVar7,0,0,0,1,0,0xff);
            OffsetRect(&local_74,-2,-2);
          }
          uVar19 = (uint)(local_9c != 0);
          if (*(int *)(in_ECX + 4) == 0) {
            iVar7 = *(int *)(in_ECX + 0x34);
          }
          else {
            iVar7 = *(int *)(in_ECX + 0x38);
          }
          pCVar11 = local_84 + local_74.top;
          pCVar16 = (CMFCVisualManager *)(local_74.left + (int)local_d0);
          pCVar23 = pCVar3;
          goto LAB_100dafaf;
        }
LAB_100daf08:
        local_34.top = (LONG)(pCVar11 + local_74.top);
        local_34.left = local_74.left + (int)local_d0;
        CUserTool::DrawToolIcon(local_b8,pCVar23,(CRect *)&local_34);
      }
      else {
LAB_100daeec:
        local_34.top = (LONG)(pCVar11 + local_74.top);
        local_34.left = local_74.left + (int)local_d0;
        CMFCToolBarMenuButton::DrawDocumentIcon
                  ((CMFCToolBarMenuButton *)pCVar20,pCVar23,(CRect *)&local_34,local_c0);
      }
    }
    else {
      local_84 = (CMFCVisualManager *)(local_74.left + (int)local_d0);
      local_34.right = (LONG)(local_84 + (int)local_cc);
      local_34.top = (LONG)(pCVar11 + local_74.top);
      local_34.bottom = (LONG)(local_c8 + local_34.top);
      if (local_c0 != (HICON__ *)0x0) goto LAB_100daeec;
      if (local_b8 != (CUserTool *)0x0) goto LAB_100daf08;
      pCVar11 = (CMFCVisualManager *)(local_74.top + (int)pCVar11);
      local_bc = (CMFCVisualManager *)local_74.left;
      local_34.left = (LONG)local_84;
      pAVar5 = GetGlobalData();
      if (*(int *)(pAVar5 + 0x1e8) == 0) {
        dVar1 = 1.0;
      }
      else {
        dVar1 = *(double *)(pAVar5 + 0x1e0);
      }
      if ((dVar1 != 1.0) && (DAT_101daf60 != 0)) {
        local_b8 = (CUserTool *)(local_74.right + -local_74.left);
        local_c0 = *(HICON__ **)(local_7c + 0x58);
        if (((int)local_b8 - *(int *)(local_7c + 0x54)) / 2 < 0) {
          iVar7 = 0;
        }
        else {
          local_c0 = *(HICON__ **)(local_7c + 0x58);
          iVar7 = ((int)local_b8 - *(int *)(local_7c + 0x54)) / 2;
        }
        local_84 = local_84 + iVar7;
        if (((int)local_b8 - *(int *)(local_7c + 0x58)) / 2 < 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = ((int)local_b8 - *(int *)(local_7c + 0x58)) / 2;
        }
        pCVar11 = pCVar11 + iVar7;
      }
      pCVar16 = local_84;
      if (local_a4 != 0) {
        local_84 = local_84 + 1;
        if (*(int *)(pCVar20 + 4) == 0) {
          iVar7 = *(int *)(pCVar20 + 0x34);
        }
        else {
          iVar7 = *(int *)(pCVar20 + 0x38);
        }
        CMFCToolBarImages::Draw
                  (local_7c,pCVar23,(int)local_84,(int)(pCVar11 + 1),iVar7,0,0,0,1,0,0xff);
        pCVar16 = local_84 + -2;
        pCVar11 = pCVar11 + -1;
      }
      if ((local_9c == 0) || (param_6 == 0)) {
        uVar19 = 0;
      }
      else {
        uVar19 = 1;
      }
      if (*(int *)(pCVar20 + 4) == 0) {
        iVar7 = *(int *)(pCVar20 + 0x34);
      }
      else {
        iVar7 = *(int *)(pCVar20 + 0x38);
      }
LAB_100dafaf:
      CMFCToolBarImages::Draw
                (local_7c,pCVar23,(int)pCVar16,(int)pCVar11,iVar7,0,uVar19,0,0,(int)local_18[0],0xff
                );
    }
    local_84 = (CMFCVisualManager *)0x1;
    in_ECX = pCVar20;
  }
  if ((DAT_101dcd18 != 0) || (local_84 == (CMFCVisualManager *)0x0)) {
    if (*(CWnd **)(in_ECX + 0x6c) == (CWnd *)0x0) {
      pCVar10 = AfxGetMainWnd();
      pCVar8 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CFrameWnd_1018c350,(CObject *)pCVar10);
    }
    else {
      pCVar8 = DAT_101dc4c4;
      if (DAT_101dc4c4 == (CObject *)0x0) {
        pCVar8 = (CObject *)CWnd::GetTopLevelFrame(*(CWnd **)(in_ECX + 0x6c));
      }
    }
    local_18[0] = (CMFCVisualManager *)
                  AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWndEx_10192540,pCVar8);
    if (local_18[0] == (CMFCVisualManager *)0x0) {
      local_18[0] = (CMFCVisualManager *)
                    AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CFrameWndEx_10191fb0,pCVar8);
      if (local_18[0] == (CMFCVisualManager *)0x0) {
        local_18[0] = (CMFCVisualManager *)
                      AfxDynamicDownCast((CRuntimeClass *)&PTR_s_COleIPFrameWndEx_10192b50,pCVar8);
        if ((local_18[0] == (CMFCVisualManager *)0x0) &&
           (local_18[0] = (CMFCVisualManager *)
                          AfxDynamicDownCast((CRuntimeClass *)&PTR_s_COleDocIPFrameWndEx_10192f08,
                                             pCVar8), local_18[0] == (CMFCVisualManager *)0x0))
        goto LAB_100db1f6;
        pcVar22 = *(code **)(*(int *)local_18[0] + 0x1f8);
      }
      else {
        pcVar22 = *(code **)(*(int *)local_18[0] + 0x1dc);
      }
    }
    else {
      pcVar22 = *(code **)(*(int *)local_18[0] + 0x1f0);
    }
    guard_check_icall(pCVar23,in_ECX,&local_74);
    local_84 = (CMFCVisualManager *)(*pcVar22)();
  }
LAB_100db1f6:
  pCVar11 = local_84;
  CDC::SelectClipRgn(pCVar23,(CRgn *)0x0);
  local_18[0] = *(CMFCVisualManager **)(in_ECX + 0x24);
  if (((uint)local_18[0] & 0x10000) == 0) {
    if ((((param_7 == 0) && (pCVar11 != (CMFCVisualManager *)0x0)) && (local_88 != 0)) &&
       (local_8c != 0)) {
      pCVar11 = CMFCVisualManager::GetInstance();
      pcVar22 = *(code **)(*(int *)pCVar11 + 0x88);
      guard_check_icall(local_78,local_80,local_44.left,local_44.top,local_44.right,local_44.bottom,
                        2);
      (*pcVar22)();
    }
  }
  else {
    pCVar20 = local_80;
    if (local_8c != 0) {
      if ((local_88 != 0) &&
         (pCVar11 = CMFCVisualManager::GetInstance(), *(int *)(pCVar11 + 100) != 0)) {
        *(uint *)(in_ECX + 0x24) = *(uint *)(in_ECX + 0x24) | 0x800000;
      }
      pCVar11 = CMFCVisualManager::GetInstance();
      pCVar20 = local_80;
      pcVar22 = *(code **)(*(int *)pCVar11 + 0x88);
      guard_check_icall(local_78,local_80,local_44.left,local_44.top,local_44.right,local_44.bottom,
                        1);
      (*pcVar22)();
      *(CMFCVisualManager **)(pCVar20 + 0x24) = local_18[0];
    }
    if (local_84 == (CMFCVisualManager *)0x0) {
      pCVar11 = CMFCVisualManager::GetInstance();
      pcVar22 = *(code **)(*(int *)pCVar11 + 0xa4);
      guard_check_icall(local_78,local_80,local_44.left,local_44.top,local_44.right,local_44.bottom,
                        local_88,*(int *)(pCVar20 + 0xac));
      (*pcVar22)();
    }
  }
  InflateRect(&local_74,1,0);
  local_7c = (CMFCToolBarImages *)0xffffffff;
  pCVar20 = local_80;
  if (local_84 == (CMFCVisualManager *)0x0) {
    iVar7 = *(int *)(local_80 + 0x20);
    if (iVar7 == 0xf020) {
      local_7c = (CMFCToolBarImages *)0x3;
    }
    else if (iVar7 == 0xf030) {
      local_7c = (CMFCToolBarImages *)0x6;
    }
    else if (iVar7 == 0xf060) {
      local_7c = (CMFCToolBarImages *)0x5;
    }
    else {
      if (iVar7 != 0xf120) goto LAB_100db43c;
      local_7c = (CMFCToolBarImages *)0x4;
    }
    local_34.left = local_74.left;
    local_34.top = local_74.top;
    local_34.right = local_74.right;
    local_34.bottom = local_74.bottom;
    pCVar11 = CMFCVisualManager::GetInstance();
    pCVar16 = CMFCVisualManager::GetInstance();
    pcVar22 = *(code **)(*(int *)pCVar11 + 0x2dc);
    guard_check_icall();
    iVar7 = (*pcVar22)();
    pcVar22 = *(code **)(*(int *)pCVar16 + 0x2dc);
    guard_check_icall();
    iVar14 = (*pcVar22)();
    InflateRect(&local_34,-iVar14,-iVar7);
    pCVar20 = local_80;
    uVar19 = local_8c;
    if ((param_7 == 0) && (local_8c != 0)) {
      CMFCToolBarButton::FillInterior(local_80,local_78,(CRect *)&local_44,local_88,1);
    }
    local_1c = (CMFCVisualManager *)0x0;
    local_18[0] = (CMFCVisualManager *)0x0;
    CMenuImages::Draw(local_78,(IMAGES_IDS)local_7c,(CRect *)&local_34,local_9c,(CSize *)&local_1c);
    if (((local_88 != 0) && (param_7 == 0)) && (uVar19 != 0)) {
      pCVar11 = CMFCVisualManager::GetInstance();
      pcVar22 = *(code **)(*(int *)pCVar11 + 0x88);
      guard_check_icall(local_78,local_80,local_44.left,local_44.top,local_44.right,local_44.bottom,
                        2);
      (*pcVar22)();
      pCVar20 = local_80;
    }
  }
LAB_100db43c:
  local_54 = (CMFCVisualManager *)*local_94;
  pCStack_50 = (CMFCVisualManager *)local_94[1];
  local_4c = (CMFCVisualManager *)local_94[2];
  pCStack_48 = (CObject *)local_94[3];
  pCVar11 = CMFCVisualManager::GetInstance();
  pcVar22 = *(code **)(*(int *)pCVar11 + 0x2dc);
  guard_check_icall();
  iVar7 = (*pcVar22)();
  local_54 = (CMFCVisualManager *)(local_44.right + iVar7 + 2);
  pCVar23 = local_78;
  if (local_88 != 0) {
    pCVar11 = CMFCVisualManager::GetInstance();
    pcVar22 = *(code **)(*(int *)pCVar11 + 0x98);
    guard_check_icall();
    iVar7 = (*pcVar22)();
    if (iVar7 == 0) {
      local_34.left = local_44.left;
      local_34.top = local_44.top;
      local_34.bottom = local_44.bottom;
      if ((((*(uint *)(pCVar20 + 0x24) & 0x10000) != 0) || (local_84 != (CMFCVisualManager *)0x0))
         || (local_7c != (CMFCToolBarImages *)0xffffffff)) {
        local_34.left = (LONG)(local_54 + -1);
      }
      local_34.right = local_94[2] + -1;
      pCVar11 = CMFCVisualManager::GetInstance();
      pCVar23 = local_78;
      if (param_7 == 0) {
        pcVar22 = *(code **)(*(int *)pCVar11 + 0x90);
        guard_check_icall(local_78,local_80,local_34.left,local_34.top,local_34.right,
                          local_34.bottom,&local_a0);
        (*pcVar22)();
      }
      else {
LAB_100db513:
        pcVar22 = *(code **)(*(int *)pCVar11 + 0x94);
        guard_check_icall(pCVar20);
        local_a0 = (*pcVar22)();
        pCVar23 = local_78;
      }
    }
    else {
      pCVar23 = local_78;
      if (param_7 != 0) {
        pCVar11 = CMFCVisualManager::GetInstance();
        goto LAB_100db513;
      }
    }
  }
  pCVar20 = local_80;
  iVar7 = FUN_10003060(*(int *)(local_80 + 0x2c) + -0x10);
  local_8._0_1_ = 1;
  local_7c = (CMFCToolBarImages *)(iVar7 + 0x10);
  uVar4 = FUN_10013071();
  FUN_10003190(uVar4);
  local_8._0_1_ = 2;
  local_a4 = FUN_10010f20(9,0);
  pCVar21 = (CMFCToolBarImages *)(iVar7 + 0x10);
  if (-1 < (int)local_a4) {
    uVar4 = FUN_10002d90(local_18,local_a4);
    local_8._0_1_ = 3;
    FUN_100030d0(uVar4);
    local_8._0_1_ = 2;
    FUN_10003460();
    uVar4 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Mid
                      ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       (pCVar20 + 0x2c),(int)local_18);
    local_8._0_1_ = 4;
    FUN_100030d0(uVar4);
    local_8._0_1_ = 2;
    FUN_10003460();
    pCVar21 = local_7c;
  }
  local_c0 = (HICON__ *)GetTextColor(*(HDC *)(pCVar23 + 8));
  local_54 = local_54 + 3;
  if (*(int *)(pCVar20 + 0x14) == 0) {
    FUN_100037c0(&DAT_101843d0);
    local_8 = CONCAT31(local_8._1_3_,5);
    do {
      if (*(int *)(pCVar21 + -0xc) < 1) {
LAB_100db648:
        local_8d = '\0';
      }
      else {
        ATL__operator_(&local_a4,&local_7c,local_18);
        local_98 = local_98 | 1;
        iVar7 = (int)local_4c - (int)local_54;
        piVar12 = (int *)CDC::GetTextExtent(pCVar23,local_d4);
        local_8d = '\x01';
        if (*piVar12 <= iVar7) goto LAB_100db648;
      }
      if ((local_98 & 1) != 0) {
        local_98 = local_98 & 0xfffffffe;
        FUN_10003460();
      }
      if (local_8d == '\0') goto LAB_100db6b4;
      uVar4 = FUN_10002d90(&local_b8,*(int *)(pCVar21 + -0xc) + -1);
      local_8._0_1_ = 6;
      FUN_100030d0(uVar4);
      local_8 = CONCAT31(local_8._1_3_,5);
      FUN_10003460();
      pCVar21 = local_7c;
    } while( true );
  }
  goto LAB_100db6d2;
LAB_100db6b4:
  FUN_100123a8(local_18[0],*(int *)(local_18[0] + -0xc));
  local_8._0_1_ = 2;
  FUN_10003460();
  pCVar21 = local_7c;
LAB_100db6d2:
  pAVar5 = GetGlobalData();
  if ((*(int *)(pAVar5 + 0x1a0) == 0) && (DAT_101daf90 == 0)) {
    ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Replace
              ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_7c,L"&&"
               ,L"\x01\x01");
    ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Remove
              ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_7c,L'&')
    ;
    ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Replace
              ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_7c,
               L"\x01\x01",L"&&");
    pCVar21 = local_7c;
  }
  if (((local_9c != 0) && (local_88 == 0)) &&
     (pCVar11 = CMFCVisualManager::GetInstance(), *(int *)(pCVar11 + 0x58) != 0)) {
    iVar7 = *(int *)pCVar23;
    pAVar5 = GetGlobalData();
    guard_check_icall(*(undefined4 *)(pAVar5 + 0x24));
    (**(code **)(iVar7 + 0x30))();
    local_34.left = (LONG)local_54;
    local_34.top = (LONG)pCStack_50;
    local_34.right = (LONG)local_4c;
    local_34.bottom = (LONG)pCStack_48;
    OffsetRect(&local_34,1,1);
    pCVar23 = local_78;
    iVar7 = *(int *)local_78;
    guard_check_icall(pCVar21,*(undefined4 *)(pCVar21 + -0xc),&local_34,0x24);
    (**(code **)(iVar7 + 0x68))();
  }
  pcVar22 = *(code **)(*(int *)pCVar23 + 0x30);
  guard_check_icall(local_a0);
  (*pcVar22)();
  iVar7 = *(int *)pCVar23;
  guard_check_icall(pCVar21,*(undefined4 *)(pCVar21 + -0xc),&local_54,0x24);
  (**(code **)(iVar7 + 0x68))();
  if (*(int *)(local_8c - 0xc) != 0) {
    local_34.left = (LONG)local_54;
    local_34.right = (LONG)(local_4c + (-3 - local_f0[0]));
    local_34.top = (LONG)pCStack_50;
    local_34.bottom = (LONG)pCStack_48;
    pCVar23 = local_78;
    if (((local_9c != 0) && (local_88 == 0)) &&
       (pCVar11 = CMFCVisualManager::GetInstance(), pCVar23 = local_78,
       *(int *)(pCVar11 + 0x58) != 0)) {
      iVar7 = *(int *)local_78;
      pAVar5 = GetGlobalData();
      guard_check_icall(*(undefined4 *)(pAVar5 + 0x24));
      (**(code **)(iVar7 + 0x30))();
      local_24._0_4_ = local_34.left;
      local_24._4_4_ = local_34.top;
      local_1c = (CMFCVisualManager *)local_34.right;
      local_18[0] = (CMFCVisualManager *)local_34.bottom;
      OffsetRect((LPRECT)local_24,1,1);
      pCVar23 = local_78;
      iVar7 = *(int *)local_78;
      guard_check_icall(local_8c,*(undefined4 *)(local_8c - 0xc),local_24,0x26);
      (**(code **)(iVar7 + 0x68))();
    }
    pcVar22 = *(code **)(*(int *)pCVar23 + 0x30);
    guard_check_icall(local_a0);
    (*pcVar22)();
    iVar7 = *(int *)pCVar23;
    guard_check_icall(local_8c,*(undefined4 *)(local_8c - 0xc),&local_34,0x26);
    (**(code **)(iVar7 + 0x68))();
  }
  if (((*(int *)(local_80 + 0x20) == -1) || (*(int *)(local_80 + 0x90) != 0)) ||
     (*(int *)(local_80 + 0xa8) != 0)) {
    iVar7 = *(int *)pCVar23;
    pAVar5 = GetGlobalData();
    guard_check_icall(pAVar5 + 0x164);
    local_a4 = (**(code **)(iVar7 + 0x28))();
    pCVar20 = local_80;
    if (local_a4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_10012a3f();
    }
    local_64 = *local_94;
    iStack_60 = local_94[1];
    iStack_5c = local_94[2];
    iStack_58 = local_94[3];
    uVar17 = CWnd::GetExStyle(*(CWnd **)(local_80 + 0x6c));
    puVar18 = &DAT_10197610;
    if ((uVar17 & 0x400000) == 0) {
      puVar18 = &DAT_10197614;
    }
    FUN_100037c0(puVar18);
    local_8 = CONCAT31(local_8._1_3_,7);
    if (*(int *)(pCVar20 + 0xb4) != 0) {
      FUN_10003780(&DAT_10197618);
    }
    pcVar22 = *(code **)(*(int *)pCVar20 + 0xf0);
    guard_check_icall();
    iVar7 = (*pcVar22)();
    pCVar23 = local_78;
    if (iVar7 != 0) {
      *(int *)(pCVar20 + 0xd8) = *local_94;
      *(int *)(pCVar20 + 0xdc) = local_94[1];
      *(int *)(pCVar20 + 0xe0) = local_94[2];
      *(int *)(pCVar20 + 0xe4) = local_94[3];
      piVar12 = (int *)CDC::GetTextExtent(local_78,(
                                                  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                                  *)&local_bc);
      pCVar2 = local_80;
      pCVar20 = local_80 + 0xd8;
      *(int *)pCVar20 = *(int *)(local_80 + 0xe0) - *piVar12;
      local_18[0] = CMFCVisualManager::GetInstance();
      pCVar23 = local_78;
      pcVar22 = *(code **)(*(int *)local_18[0] + 0xa8);
      guard_check_icall(local_78,local_80,*(int *)pCVar20,*(int *)(pCVar2 + 0xdc),
                        *(int *)(pCVar2 + 0xe0),*(int *)(pCVar2 + 0xe4),local_88,local_9c);
      (*pcVar22)();
    }
    iVar7 = *(int *)pCVar23;
    guard_check_icall(local_98,*(undefined4 *)(local_98 - 0xc),&local_64,0x26);
    (**(code **)(iVar7 + 0x68))();
    pcVar22 = *(code **)(*(int *)pCVar23 + 0x28);
    guard_check_icall(local_a4);
    (*pcVar22)();
    local_8._0_1_ = 2;
    FUN_10003460();
  }
  if (local_b0 != (CMFCVisualManager *)0x0) {
    pcVar22 = *(code **)(*(int *)pCVar23 + 0x28);
    guard_check_icall(local_b0);
    (*pcVar22)();
  }
  pcVar22 = *(code **)(*(int *)pCVar23 + 0x30);
  guard_check_icall(local_c0);
  (*pcVar22)();
  if (local_ac != (CMFCToolBarImages *)0x0) {
    FUN_10050819(local_e8);
  }
  if (local_b4 != (CMFCToolBarImages *)0x0) {
    FUN_10050819(local_e8);
  }
  FUN_10003460();
  FUN_10003460();
  local_dc = CRgn::vftable;
  CImageList::~CImageList((CImageList *)&local_dc);
LAB_100dba7a:
  FUN_101490fe();
  return;
}

