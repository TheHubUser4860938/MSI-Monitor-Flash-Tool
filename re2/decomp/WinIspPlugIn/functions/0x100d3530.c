// rea decompile_all
// name: CMFCVisualManagerOffice2007::OnNcPaint
// address: 0x100d3530
// body: available
// range: 0x100d3530-0x100d3dab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CMFCVisualManagerOffice2007::OnNcPaint(class CWnd *,class CObList
   const &,class CRect)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CMFCVisualManagerOffice2007::OnNcPaint
          (CMFCVisualManagerOffice2007 *this,CWnd *param_1,undefined4 param_2,LONG param_4,
          LONG param_5,LONG param_6,LONG param_7)

{
  code *pcVar1;
  CMFCVisualManagerOffice2007 *pCVar2;
  undefined1 uVar3;
  int iVar4;
  BOOL BVar5;
  HRGN pHVar6;
  CMFCRibbonBar *pCVar7;
  CMDIFrameWnd *this_00;
  CMDIChildWnd *pCVar8;
  ulong uVar9;
  undefined4 uVar10;
  CObject *pCVar11;
  int iVar12;
  int iVar13;
  CWnd *pCVar14;
  uint uVar15;
  CWindowDC local_bc [4];
  int local_b8;
  undefined **local_a8;
  undefined4 local_a4;
  int local_a0;
  uint local_9c;
  undefined4 local_98;
  CWnd *local_94;
  undefined4 local_90;
  uint local_8c;
  ulong local_88;
  uint local_84;
  CMFCVisualManagerOffice2007 *local_80;
  int local_7c;
  undefined1 local_78 [4];
  CWnd *local_74;
  int local_70;
  uint local_6c;
  int local_68;
  tagRECT local_64;
  int local_54;
  CMFCRibbonBar *local_50;
  int local_4c;
  CMFCRibbonBar *local_48;
  tagRECT local_44;
  tagRECT local_34;
  undefined1 local_24 [8];
  LONG local_1c;
  CMFCRibbonBar *local_18;
  undefined1 local_8;
  undefined3 uStack_7;
  undefined4 uStack_4;
  
  uStack_4 = 0xbc;
  local_8 = 0x3f;
  uStack_7 = 0x100d35;
  local_74 = param_1;
  local_90 = param_2;
  local_80 = this;
  iVar4 = CanDrawImage(this);
  if (iVar4 == 0) {
    FUN_10069160(local_74,local_90,param_4,param_5,param_6,param_7);
    goto LAB_100d3da4;
  }
  if ((param_1 == (CWnd *)0x0) || (*(int *)(param_1 + 0x20) == 0)) goto LAB_100d3da4;
  CWindowDC::CWindowDC(local_bc,param_1);
  local_8 = 0;
  uStack_7 = 0;
  if (local_b8 == 0) {
    local_98 = FUN_10069160(local_74,local_90,param_4,param_5,param_6,param_7);
  }
  else {
    local_a4 = 0;
    local_a8 = CRgn::vftable;
    local_98 = 1;
    local_8 = 1;
    uStack_7 = 0;
    BVar5 = IsRectEmpty((RECT *)&param_4);
    if (BVar5 == 0) {
      pHVar6 = CreateRectRgnIndirect((RECT *)&param_4);
      CMenu::Attach((CMenu *)&local_a8,(HMENU__ *)pHVar6);
      CDC::SelectClipRgn((CDC *)local_bc,(CRgn *)&local_a8);
    }
    pCVar7 = GetRibbonBar(this,param_1);
    local_18 = pCVar7;
    if (((pCVar7 == (CMFCRibbonBar *)0x0) ||
        (BVar5 = IsWindowVisible(*(HWND *)(pCVar7 + 0x20)), BVar5 == 0)) ||
       (*(int *)(pCVar7 + 0x328) == 0)) {
      local_6c = 0;
    }
    else {
      local_6c = 1;
    }
    local_44.left = 0;
    local_44.top = 0;
    local_44.right = 0;
    local_44.bottom = 0;
    GetWindowRect(*(HWND *)(param_1 + 0x20),&local_44);
    CWnd::ScreenToClient(param_1,&local_44);
    local_64.left = 0;
    local_64.top = 0;
    local_64.right = 0;
    local_64.bottom = 0;
    GetClientRect(*(HWND *)(param_1 + 0x20),&local_64);
    OffsetRect(&local_64,-local_44.left,-local_44.top);
    CDC::ExcludeClipRect((CDC *)local_bc,&local_64);
    OffsetRect(&local_44,-local_44.left,-local_44.top);
    local_7c = IsWindowActive(this,param_1);
    if (local_7c != 0) {
      pcVar1 = *(code **)(*(int *)this + 500);
      guard_check_icall();
      iVar4 = (*pcVar1)();
      if (((iVar4 != 0) && (iVar4 = FUN_10051e53(&PTR_s_CMDIChildWnd_101f528c), iVar4 != 0)) &&
         ((this_00 = CMDIChildWnd::GetMDIFrame((CMDIChildWnd *)param_1),
          this_00 != (CMDIFrameWnd *)0x0 &&
          (pCVar8 = CMDIFrameWnd::MDIGetActive(this_00,(int *)0x0), pCVar8 != (CMDIChildWnd *)0x0)))
         ) {
        if ((*(int *)(pCVar8 + 0x20) == *(int *)(param_1 + 0x20)) &&
           (iVar4 = IsWindowActive(this,(CWnd *)this_00), iVar4 != 0)) {
          local_7c = 1;
        }
        else {
          local_7c = 0;
        }
      }
    }
    pCVar14 = local_74;
    local_34.left = local_44.left;
    local_34.top = local_44.top;
    local_34.right = local_44.right;
    local_34.bottom = local_44.bottom;
    uVar9 = CWnd::GetExStyle(local_74);
    local_88 = uVar9;
    CGlobalUtils::GetSystemBorders((CGlobalUtils *)&PTR_vftable_1023d944,(ulong)&local_a0);
    local_34.bottom = local_34.top + local_9c;
    local_8c = uVar9 >> 0x18 & 1;
    if (local_6c == 0) {
      iVar4 = GetSystemMetrics(4);
      local_34.bottom = local_34.bottom + iVar4;
      local_18 = (CMFCRibbonBar *)CWnd::GetExStyle(pCVar14);
      local_94 = (CWnd *)CGlobalUtils::GetWndIcon((CGlobalUtils *)&PTR_vftable_1023d944,pCVar14);
      uVar10 = FUN_10049868();
      FUN_100476a0(uVar10);
      local_8 = 2;
      CWnd::GetWindowTextW
                (pCVar14,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         &local_68);
      local_70 = FUN_10047580(local_68 + -0x10);
      local_70 = local_70 + 0x10;
      local_8 = 3;
      uVar10 = FUN_10049868();
      FUN_100476a0(uVar10);
      local_8 = 4;
      uVar3 = local_8;
      local_8 = 4;
      uVar15 = 0;
      if ((local_88 & 0x8000) != 0) {
        local_84 = local_88 >> 0xe & 1;
        pCVar11 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CFrameWnd_101e3440,(CObject *)pCVar14);
        uVar15 = local_84;
        uVar3 = local_8;
        if (pCVar11 != (CObject *)0x0) {
          uVar10 = GetTitle(local_78);
          local_8 = 5;
          FUN_100475f0(uVar10);
          local_8 = 4;
          FUN_100476d0();
          iVar4 = local_70;
          if (*(int *)(local_70 + -0xc) == 0) {
            FUN_100475f0(&local_68);
            uVar15 = local_84;
            uVar3 = local_8;
          }
          else {
            iVar12 = FUN_100477c0(local_70,0);
            uVar15 = local_84;
            uVar3 = local_8;
            if ((iVar12 != -1) && (*(int *)(iVar4 + -0xc) < *(int *)(local_68 + -0xc))) {
              if (iVar12 == 0) {
                local_84 = 0;
                uVar10 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::
                         Left((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                              &local_68,(int)local_78);
                local_8 = 6;
                FUN_100475f0(uVar10);
                local_8 = 4;
                FUN_100476d0();
                uVar10 = FUN_100469e0(local_78,*(int *)(local_68 + -0xc) - *(int *)(local_70 + -0xc)
                                     );
                local_8 = 7;
              }
              else {
                uVar10 = FUN_100469e0(local_78,*(int *)(iVar4 + -0xc) + 3);
                local_8 = 8;
                FUN_100475f0(uVar10);
                local_8 = 4;
                FUN_100476d0();
                uVar10 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::
                         Left((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                              &local_68,(int)local_78);
                local_8 = 9;
              }
              FUN_100475f0(uVar10);
              local_8 = 4;
              FUN_100476d0();
              uVar15 = local_84;
              uVar3 = local_8;
            }
          }
        }
      }
      local_8 = uVar3;
      if (local_8c != 0) {
        local_34.left = local_34.left - local_a0;
        local_34.top = local_34.top - local_9c;
        local_34.right = local_34.right + local_a0;
      }
      DrawNcCaption(local_bc,local_34.left,local_34.top,local_34.right,local_34.bottom,local_88,
                    local_18,&local_70,&local_6c,local_94,uVar15,local_7c,
                    *(undefined4 *)(this + 0x210),local_90);
      FUN_100476d0();
      FUN_100476d0();
      if (local_8c == 0) {
        local_8 = 1;
        FUN_100476d0();
LAB_100d3b23:
        local_44.top = local_34.bottom;
        CDC::ExcludeClipRect((CDC *)local_bc,&local_34);
        iVar4 = FUN_10051e53(&PTR_s_CMDIChildWnd_101f528c);
        if (iVar4 == 0) {
          iVar4 = *(int *)(this + 0x20e0);
          local_6c = (uint)(local_7c == 0);
          guard_check_icall(local_bc,local_44.left,local_44.top,local_44.right,local_44.bottom,
                            local_6c,0xff);
        }
        else {
          iVar4 = *(int *)(this + 0x2258);
          local_6c = (uint)(local_7c == 0);
          guard_check_icall(local_bc,local_44.left,local_44.top,local_44.right,local_44.bottom,
                            local_6c,0xff);
        }
        pCVar2 = local_80;
        (**(code **)(iVar4 + 0x14))();
        local_54 = 0;
        iVar4 = 0;
        local_50 = (CMFCRibbonBar *)0x0;
        local_4c = 0;
        local_48 = (CMFCRibbonBar *)0x0;
        pCVar14 = CWnd::GetDescendantWindow(*(HWND__ **)(local_74 + 0x20),0xe801,1);
        local_94 = pCVar14;
        if (((pCVar14 != (CWnd *)0x0) && (*(int *)(pCVar14 + 0x20) != 0)) &&
           (BVar5 = IsWindowVisible(*(HWND *)(pCVar14 + 0x20)), BVar5 != 0)) {
          local_18 = (CMFCRibbonBar *)
                     AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCStatusBar_101f67a0,
                                        (CObject *)pCVar14);
          if (local_18 == (CMFCRibbonBar *)0x0) {
            pCVar11 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCRibbonStatusBar_101f647c,
                                         (CObject *)pCVar14);
            if (pCVar11 == (CObject *)0x0) goto LAB_100d3d49;
            pcVar1 = *(code **)(*(int *)pCVar11 + 0x368);
            guard_check_icall(&local_54);
            local_74 = (CWnd *)(*pcVar1)();
            iVar4 = *(int *)(pCVar11 + 0x16f8);
          }
          else {
            pcVar1 = *(code **)(*(int *)local_18 + 0x324);
            guard_check_icall(&local_54);
            local_74 = (CWnd *)(*pcVar1)();
          }
          local_24._0_4_ = 0;
          local_24._4_4_ = 0;
          local_1c = 0;
          local_18 = (CMFCRibbonBar *)0x0;
          GetClientRect((HWND)*(int *)(local_94 + 0x20),(LPRECT)local_24);
          iVar12 = (int)local_18 - local_24._4_4_;
          local_18 = (CMFCRibbonBar *)local_44.bottom;
          local_1c = local_44.right;
          local_24._4_4_ = local_44.bottom + (-iVar12 - (~-(uint)(iVar4 != 0) & local_9c));
          local_24._0_4_ = local_44.left;
          if (local_74 != (CWnd *)0x0) {
            local_54 = local_54 + ((local_44.right - local_4c) - local_a0);
            local_48 = (CMFCRibbonBar *)local_44.bottom;
            local_4c = local_44.right;
            local_50 = (CMFCRibbonBar *)local_24._4_4_;
          }
          iVar4 = *(int *)(pCVar2 + 0x1988);
          guard_check_icall(local_bc,local_44.left,local_24._4_4_,local_44.right,local_44.bottom,
                            local_6c,0xff);
          pCVar2 = local_80;
          (**(code **)(iVar4 + 0x10))();
          if (local_74 != (CWnd *)0x0) {
            iVar4 = *(int *)(pCVar2 + 0x1b00);
            local_54 = local_54 - *(int *)(pCVar2 + 0x1c38);
            guard_check_icall(local_bc,local_54,local_50,local_4c,local_48,local_6c,0xff);
            (**(code **)(iVar4 + 0x10))();
          }
        }
LAB_100d3d49:
        CDC::SelectClipRgn((CDC *)local_bc,(CRgn *)0x0);
      }
      else {
        FUN_100476d0();
      }
    }
    else if (local_8c == 0) {
      pcVar1 = *(code **)(*(int *)local_18 + 0x1a4);
      guard_check_icall();
      iVar4 = (*pcVar1)();
      local_34.bottom = local_34.bottom + iVar4;
      local_24._0_4_ = *(undefined4 *)(this + 0x2518);
      local_24._4_4_ = *(undefined4 *)(this + 0x251c);
      local_1c = *(LONG *)(this + 0x2520);
      local_18 = *(CMFCRibbonBar **)(this + 0x2524);
      if (*(int *)(this + 0xc000) < 0x14) {
        if (local_7c == 0) {
          local_8c = *(uint *)(this + 0x8f58);
          local_88 = *(ulong *)(this + 0x8f5c);
        }
        else {
          local_8c = *(uint *)(this + 0x8f50);
          local_88 = *(ulong *)(this + 0x8f54);
        }
        iVar13 = local_34.left + local_24._0_4_;
        pCVar7 = (CMFCRibbonBar *)(local_24._4_4_ + local_34.top);
        iVar4 = local_34.right - local_1c;
        iVar12 = local_34.bottom - (int)local_18;
        CDrawingManager::CDrawingManager((CDrawingManager *)&local_1c,(CDC *)local_bc);
        local_8 = 10;
        CDrawingManager::Fill4ColorsGradient
                  ((CDrawingManager *)&local_1c,iVar13,pCVar7,iVar4,iVar12,local_8c,local_88,
                   local_88,local_8c,0,0x32);
        local_8 = 1;
        FUN_100b0b83();
        iVar4 = *(int *)(this + 0x23d0);
        guard_check_icall(local_bc,local_34.left,local_34.top,local_34.right,local_34.bottom,
                          local_7c == 0,0xff);
        (**(code **)(iVar4 + 0x14))();
        this = local_80;
      }
      else {
        iVar4 = *(int *)(this + 0x23d0);
        guard_check_icall(local_bc,local_34.left,local_34.top,local_34.right,local_34.bottom,
                          local_7c == 0,0xff);
        (**(code **)(iVar4 + 0x10))();
        this = local_80;
      }
      goto LAB_100d3b23;
    }
    local_a8 = CRgn::vftable;
    CImageList::~CImageList((CImageList *)&local_a8);
  }
  CWindowDC::~CWindowDC(local_bc);
LAB_100d3da4:
  iVar4 = FUN_1018015d();
  return iVar4;
}

