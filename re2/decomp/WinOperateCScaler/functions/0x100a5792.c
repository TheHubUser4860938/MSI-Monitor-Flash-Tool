// rea decompile_all
// name: CMFCVisualManagerOffice2007::OnFillBarBackground
// address: 0x100a5792
// body: available
// range: 0x100a5792-0x100a5c3a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManagerOffice2007::OnFillBarBackground(class CDC
   *,class CBasePane *,class CRect,class CRect,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerOffice2007::OnFillBarBackground
          (CMFCVisualManagerOffice2007 *this,CDC *param_1,CObject *param_2,int param_4,LONG param_5,
          int param_6,int param_7,LONG param_8,LONG param_9,LONG param_10,LONG param_11,
          undefined4 param_12)

{
  code *pcVar1;
  undefined4 uVar2;
  CMFCVisualManagerOffice2007 *pCVar3;
  CDC *pCVar4;
  int iVar5;
  uint uVar6;
  CObject *pCVar7;
  HBRUSH pHVar8;
  HWND pHVar9;
  CWnd *pCVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  LONG LVar15;
  tagRECT *ptVar16;
  CDrawingManager local_54 [4];
  int local_50;
  int local_4c;
  int local_48;
  CObject *local_44;
  CObject *local_40;
  CMFCVisualManagerOffice2007 *local_3c;
  CDC *local_38;
  undefined1 local_34 [8];
  int local_2c;
  uint local_28;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x54;
  local_8 = 0x100a579e;
  local_38 = param_1;
  local_40 = param_2;
  pcVar1 = (code *)**(undefined4 **)param_2;
  local_3c = this;
  guard_check_icall();
  (*pcVar1)();
  iVar5 = CanDrawImage(this);
  if (((iVar5 == 0) || (*(int *)(param_2 + 0x8c) != 0)) ||
     (iVar5 = FUN_100250ac(&PTR_s_CMFCColorBar_102017b0), iVar5 != 0)) {
LAB_100a5c0a:
    CMFCVisualManagerOffice2003::OnFillBarBackground
              ((CMFCVisualManagerOffice2003 *)this,local_38,local_40,param_4,param_5,param_6,param_7
               ,param_8,param_9,param_10,param_11,param_12);
    goto LAB_100a5c33;
  }
  iVar5 = FUN_100250d6(&PTR_s_CMFCMenuBar_10201ae0);
  if (iVar5 != 0) {
    pcVar1 = *(code **)(*(int *)param_2 + 0x1c0);
    guard_check_icall();
    uVar6 = (*pcVar1)();
    if ((uVar6 & 0xa000) == 0) {
      uVar2 = *(undefined4 *)(this + 0x8f7c);
      uVar14 = *(undefined4 *)(this + 0x8f80);
    }
    else {
      uVar2 = *(undefined4 *)(this + 0x8f78);
      uVar14 = *(undefined4 *)(this + 0x8f74);
    }
    CDrawingManager::CDrawingManager((CDrawingManager *)&local_2c,local_38);
    local_8 = 0;
    CDrawingManager::Fill4ColorsGradient
              ((CDrawingManager *)&local_2c,param_4,param_5,param_6,param_7,uVar2,uVar14,uVar14,
               uVar2,(uVar6 & 0xa000) == 0,0x32);
LAB_100a5872:
    FUN_10084c54();
    goto LAB_100a5c33;
  }
  iVar5 = FUN_100250d6(&PTR_s_CMFCPopupMenuBar_10201930);
  if (iVar5 != 0) {
    pHVar8 = (HBRUSH)0x0;
    if (this != (CMFCVisualManagerOffice2007 *)0xfffffef4) {
      pHVar8 = *(HBRUSH *)(this + 0x110);
    }
    FillRect(*(HDC *)(local_38 + 4),(RECT *)&param_8,pHVar8);
    pCVar7 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCPopupMenuBar_10201930,param_2);
    if (*(int *)(pCVar7 + 0xd40) == 0) {
      local_24.left = param_4;
      local_24.top = param_5;
      local_24.right = param_6;
      local_24.bottom = param_7;
      local_24.right = CMFCPopupMenuBar::GetGutterWidth((CMFCPopupMenuBar *)pCVar7);
      local_24.right = local_24.right + local_24.left;
      InflateRect(&local_24,0,-1);
      pCVar4 = local_38;
      pHVar8 = (HBRUSH)0x0;
      if (this != (CMFCVisualManagerOffice2007 *)0xffffff04) {
        pHVar8 = *(HBRUSH *)(this + 0x100);
      }
      FillRect(*(HDC *)(local_38 + 4),&local_24,pHVar8);
      local_24.left = local_24.right;
      local_24.right = local_24.right + 2;
      DrawSeparator(this,pCVar4,(CRect *)&local_24,0);
    }
    goto LAB_100a5c33;
  }
  iVar5 = FUN_100250d6(&PTR_s_CMFCStatusBar_101ca558);
  if (iVar5 == 0) {
    iVar5 = FUN_100250d6(&PTR_s_CMFCRibbonStatusBar_101ca234);
    if (iVar5 != 0) {
      pCVar7 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCRibbonStatusBar_101ca234,param_2);
      pHVar9 = GetParent(*(HWND *)(param_2 + 0x20));
      CWnd::FromHandle(pHVar9);
      CGlobalUtils::GetSystemBorders((CGlobalUtils *)&PTR_vftable_1020194c,(CWnd *)&local_2c);
      local_24.left = 0;
      local_24.top = 0;
      local_24.right = 0;
      local_24.bottom = 0;
      pcVar1 = *(code **)(*(int *)pCVar7 + 0x368);
      guard_check_icall(&local_24);
      local_50 = (*pcVar1)();
      iVar5 = *(int *)(pCVar7 + 0x16f8);
      local_44 = (CObject *)local_24.left;
      if (local_50 == 0) {
        local_44 = (CObject *)param_6;
      }
      local_48 = iVar5;
      pHVar9 = GetParent(*(HWND *)(local_40 + 0x20));
      pCVar10 = CWnd::FromHandle(pHVar9);
      pCVar3 = local_3c;
      iVar12 = IsWindowActive(local_3c,pCVar10);
      iVar13 = (int)local_44 + local_2c;
      iVar11 = *(int *)(pCVar3 + 0x1988);
      local_44 = (CObject *)(uint)(iVar12 == 0);
      guard_check_icall(local_38,param_4 - local_2c,param_5,iVar13,
                        param_7 + (~-(uint)(iVar5 != 0) & local_28),local_44,0xff);
      pCVar3 = local_3c;
      (**(code **)(iVar11 + 0x10))();
      if (local_50 == 0) goto LAB_100a5c33;
      local_24.right = local_24.right + local_2c;
      iVar5 = *(int *)(pCVar3 + 0x1b00);
      local_24.bottom = local_24.bottom + (~-(uint)(local_48 != 0) & local_28);
      ptVar16 = &local_24;
      local_24.left = local_24.left - *(int *)(pCVar3 + 0x1c38);
      pCVar7 = local_44;
      goto LAB_100a5a2a;
    }
    iVar5 = FUN_100250d6(&PTR_s_CMFCOutlookBarToolBar_101c5b94);
    if (iVar5 == 0) goto LAB_100a5c0a;
    if (*(int *)(this + 0x3d5c) == 0) {
      CDrawingManager::CDrawingManager(local_54,local_38);
      local_8 = 1;
      CDrawingManager::FillGradient
                (local_54,param_4,param_5,param_6,param_7,*(undefined4 *)(this + 0x164),
                 *(undefined4 *)(this + 0x168),1,0,0);
      goto LAB_100a5872;
    }
    iVar5 = *(int *)(this + 0x3cc8);
    guard_check_icall(local_38,param_4,param_5,param_6,param_7,0,0xff);
  }
  else {
    pHVar9 = GetParent(*(HWND *)(param_2 + 0x20));
    CWnd::FromHandle(pHVar9);
    CGlobalUtils::GetSystemBorders((CGlobalUtils *)&PTR_vftable_1020194c,(CWnd *)&local_4c);
    pCVar7 = local_40;
    local_34._0_4_ = 0;
    local_24.left = param_4;
    local_34._4_4_ = 0;
    local_2c = 0;
    local_28 = 0;
    local_24.top = param_5;
    local_24.right = param_6;
    local_24.bottom = param_7;
    pcVar1 = *(code **)(*(int *)local_40 + 0x324);
    guard_check_icall(local_34);
    local_44 = (CObject *)(*pcVar1)();
    LVar15 = local_34._0_4_;
    if (local_44 == (CObject *)0x0) {
      LVar15 = local_24.right;
    }
    pHVar9 = GetParent(*(HWND *)(pCVar7 + 0x20));
    pCVar10 = CWnd::FromHandle(pHVar9);
    iVar11 = IsWindowActive(this,pCVar10);
    local_24.left = local_24.left - local_4c;
    local_24.right = LVar15 + local_4c;
    local_24.bottom = local_24.bottom + local_48;
    iVar5 = *(int *)(this + 0x1988);
    local_40 = (CObject *)(uint)(iVar11 == 0);
    guard_check_icall(local_38,local_24.left,local_24.top,local_24.right,local_24.bottom,local_40,
                      0xff);
    pCVar3 = local_3c;
    (**(code **)(iVar5 + 0x10))();
    if (local_44 == (CObject *)0x0) goto LAB_100a5c33;
    local_2c = local_2c + local_4c;
    local_28 = local_28 + local_48;
    iVar5 = *(int *)(pCVar3 + 0x1b00);
    ptVar16 = (tagRECT *)local_34;
    local_34._0_4_ = local_34._0_4_ - *(int *)(pCVar3 + 0x1c38);
    pCVar7 = local_40;
LAB_100a5a2a:
    guard_check_icall(local_38,ptVar16->left,ptVar16->top,ptVar16->right,ptVar16->bottom,pCVar7,0xff
                     );
  }
  (**(code **)(iVar5 + 0x10))();
LAB_100a5c33:
  FUN_10154478();
  return;
}

