// rea decompile_all
// name: CMFCToolBarButton::OnDraw
// address: 0x1011e6ef
// body: available
// range: 0x1011e6ef-0x1011f301 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* WARNING: Type propagation algorithm not settling */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCToolBarButton::OnDraw(class CDC *,class CRect const &,class
   CMFCToolBarImages *,int,int,int,int,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCToolBarButton::OnDraw
          (CMFCToolBarButton *this,CDC *param_1,CRect *param_2,CMFCToolBarImages *param_3,
          int param_4,int param_5,int param_6,int param_7,int param_8)

{
  CMFCToolBarButton *pCVar1;
  CMFCVisualManager *pCVar2;
  undefined ***pppuVar3;
  int iVar4;
  AFX_GLOBAL_DATA *pAVar5;
  CMFCVisualManager *pCVar6;
  int iVar7;
  uint uVar8;
  COLORREF CVar9;
  CDC *pCVar10;
  undefined4 uVar11;
  code *pcVar12;
  int iVar13;
  LONG LVar14;
  undefined1 local_d0 [4];
  CUserTool *local_cc;
  undefined **local_c8;
  int local_c4;
  CMFCToolBarImages *local_c0;
  int local_bc;
  int local_b8;
  CUserTool *local_b4;
  int local_b0;
  int local_ac;
  CUserTool *local_a8;
  undefined1 local_a4 [4];
  CMFCVisualManager *local_a0;
  int local_9c;
  CMFCToolBarButton *local_98;
  int local_94;
  CPen *local_90;
  CMFCVisualManager *local_8c;
  CDC *local_88;
  int local_84;
  tagTEXTMETRICW local_80;
  tagRECT local_44;
  tagRECT local_34;
  tagRECT local_24;
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc4;
  local_8 = 0x1011e6fe;
  *(int *)(this + 0x4c) = param_4;
  local_88 = param_1;
  local_c0 = param_3;
  local_98 = this;
  FillInterior(this,param_1,param_2,param_6,0);
  if (param_3 == (CMFCToolBarImages *)0x0) {
    local_b4 = (CUserTool *)0x0;
    local_b0 = 0;
  }
  else {
    local_b4 = *(CUserTool **)(param_3 + 100);
    local_b0 = *(int *)(param_3 + 0x68);
  }
  local_cc = (CUserTool *)0x0;
  if ((DAT_10247680 != (CUserToolsManager *)0x0) && (*(int *)(this + 4) == 0)) {
    local_cc = CUserToolsManager::FindTool(DAT_10247680,*(uint *)(this + 0x20));
  }
  local_24.left = *(int *)param_2;
  local_24.top = *(int *)(param_2 + 4);
  local_24.right = *(int *)(param_2 + 8);
  local_24.bottom = *(int *)(param_2 + 0xc);
  if (*(int *)(this + 0x48) == 0) {
    local_c8 = (undefined **)0x0;
    pppuVar3 = &local_c8;
    local_c4 = 0;
  }
  else {
    pCVar2 = CMFCVisualManager::GetInstance();
    pcVar12 = *(code **)(*(int *)pCVar2 + 0x140);
    guard_check_icall(local_a4);
    pppuVar3 = (undefined ***)(*pcVar12)();
  }
  InflateRect(&local_24,-((int)*pppuVar3 / 2),-((int)pppuVar3[1] / 2));
  local_ac = local_24.left;
  local_b8 = local_24.top;
  local_8c = (CMFCVisualManager *)0x0;
  local_bc = FUN_10047580(*(int *)(this + 0x2c) + -0x10);
  local_bc = local_bc + 0x10;
  local_8 = 0;
  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Replace
            ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_bc,L"&&",
             L"\x01\x01");
  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Remove
            ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_bc,L'&');
  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Replace
            ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_bc,
             L"\x01\x01",L"&");
  CDC::GetTextExtent(local_88,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                              &local_c8);
  if (((*(int *)(this + 8) != 0) && (*(int *)(*(int *)(this + 0x2c) + -0xc) != 0)) &&
     ((*(int *)(this + 0x18) == 0 || (param_4 == 0)))) {
    iVar4 = IsDrawImage(this);
    local_8c = (CMFCVisualManager *)((int)local_c8 + (-(uint)(iVar4 != 0) & 0xfffffffd) + 3);
  }
  iVar4 = local_24.right;
  if (*(int *)(this + 0x18) == 0) {
    if (param_4 != 0) {
      iVar4 = local_24.right - (int)local_8c;
    }
LAB_1011e8cf:
    iVar4 = iVar4 - local_24.left;
    LVar14 = local_24.bottom;
    if (param_4 == 0) {
      LVar14 = local_24.bottom - (int)local_8c;
    }
    iVar13 = LVar14 - local_24.top;
  }
  else {
    if (param_4 == 0) goto LAB_1011e8cf;
    iVar4 = local_24.right - local_24.left;
    iVar13 = local_b0 + 6;
  }
  local_8c = (CMFCVisualManager *)((iVar4 - (int)local_b4) / 2);
  local_84 = (iVar13 - local_b0) / 2;
  local_a8 = (CUserTool *)0x3;
  local_9c = 3;
  if (((*(int *)(this + 8) != 0) && (*(int *)(*(int *)(this + 0x2c) + -0xc) != 0)) &&
     ((*(int *)(this + 0x18) == 0 || (param_4 == 0)))) {
    GetTextMetricsW(*(HDC *)(local_88 + 8),&local_80);
    if (param_4 == 0) {
      local_84 = local_84 + -3;
      local_a8 = (CUserTool *)(((iVar4 - local_80.tmHeight) + 1) / 2);
    }
    else {
      local_8c = local_8c + -3;
      local_9c = ((iVar13 - local_80.tmHeight) + -1) / 2;
    }
  }
  if ((param_6 == 0) || (param_5 != 0)) {
LAB_1011e9c6:
    local_94 = 0;
  }
  else {
    pcVar12 = *(code **)(*(int *)this + 0x70);
    guard_check_icall();
    iVar4 = (*pcVar12)();
    if ((iVar4 != 0) || (pCVar2 = CMFCVisualManager::GetInstance(), *(int *)(pCVar2 + 0x54) == 0))
    goto LAB_1011e9c6;
    pAVar5 = GetGlobalData();
    iVar4 = AFX_GLOBAL_DATA::IsHighContrastMode(pAVar5);
    if ((iVar4 != 0) || ((*(uint *)(this + 0x24) & 0x70000) != 0)) goto LAB_1011e9c6;
    local_94 = 1;
  }
  pCVar2 = local_8c;
  if ((((*(uint *)(this + 0x24) & 0x30000) != 0) && (param_5 == 0)) &&
     (pCVar6 = CMFCVisualManager::GetInstance(), pCVar2 = local_8c, *(int *)(pCVar6 + 0x54) == 0)) {
    pCVar2 = CMFCVisualManager::GetInstance();
    pcVar12 = *(code **)(*(int *)pCVar2 + 0x2ec);
    guard_check_icall();
    iVar4 = (*pcVar12)();
    pCVar2 = local_8c;
    if (iVar4 != 0) {
      local_84 = local_84 + 1;
      local_9c = local_9c + 1;
      pCVar2 = local_8c + 1;
      if (param_4 == 0) {
        local_a8 = local_a8 + -1;
      }
      else {
        local_a8 = local_a8 + 1;
      }
    }
  }
  iVar4 = local_84;
  if ((param_6 == 0) && (pCVar6 = CMFCVisualManager::GetInstance(), *(int *)(pCVar6 + 0x5c) != 0)) {
    local_8c = (CMFCVisualManager *)0x1;
  }
  else {
    local_8c = (CMFCVisualManager *)0x0;
  }
  local_90 = (CPen *)0x0;
  if (((*(uint *)(this + 0x24) & 0x60000) == 0x40000) && (param_5 == 0)) {
LAB_1011ec62:
    if ((*(uint *)(this + 0x24) & 0x40000) != 0) goto LAB_1011ec6f;
LAB_1011ebe4:
    local_a0 = (CMFCVisualManager *)0x0;
  }
  else {
    iVar13 = IsDrawImage(this);
    pCVar10 = local_88;
    if ((iVar13 != 0) && (local_c0 != (CMFCToolBarImages *)0x0)) {
      if (local_cc == (CUserTool *)0x0) {
        pCVar6 = pCVar2;
        if (local_94 != 0) {
          local_90 = (CPen *)(iVar4 + 1);
          local_a0 = pCVar2 + 1;
          if (*(int *)(this + 4) == 0) {
            iVar4 = *(int *)(this + 0x34);
          }
          else {
            iVar4 = *(int *)(this + 0x38);
          }
          CMFCToolBarImages::Draw
                    (local_c0,local_88,(int)(local_a0 + local_ac),(int)local_90 + local_b8,iVar4,0,0
                     ,0,1,0,0xff);
          iVar4 = (int)local_90 + -2;
          pCVar6 = local_a0 + -2;
        }
        if (*(int *)(this + 4) == 0) {
          local_90 = *(CPen **)(this + 0x34);
        }
        else {
          local_90 = *(CPen **)(this + 0x38);
          pCVar10 = local_88;
        }
        CMFCToolBarImages::Draw
                  (local_c0,pCVar10,(int)(pCVar6 + local_ac),iVar4 + local_b8,(int)local_90,0,0,0,0,
                   (int)local_8c,0xff);
        this = local_98;
      }
      else {
        local_44.left = (LONG)(pCVar2 + local_ac);
        local_44.top = local_b8 + iVar4;
        local_44.right = (LONG)(local_b4 + local_44.left);
        local_44.bottom = local_b0 + local_44.top;
        CUserTool::DrawToolIcon(local_cc,local_88,(CRect *)&local_44);
      }
    }
    local_90 = (CPen *)0x1;
    if (param_5 == 0) goto LAB_1011ec62;
    pcVar12 = *(code **)(*(int *)this + 0x60);
    guard_check_icall();
    iVar4 = (*pcVar12)();
    if (iVar4 != 0) goto LAB_1011ebe4;
LAB_1011ec6f:
    local_a0 = (CMFCVisualManager *)0x1;
  }
  if (((local_90 == (CPen *)0x0) && (iVar4 = IsDrawImage(this), pCVar10 = local_88, iVar4 != 0)) &&
     (local_c0 != (CMFCToolBarImages *)0x0)) {
    if (local_cc == (CUserTool *)0x0) {
      iVar4 = local_84;
      if (local_94 != 0) {
        local_84 = local_84 + 1;
        if (*(int *)(this + 4) == 0) {
          iVar4 = *(int *)(this + 0x34);
        }
        else {
          iVar4 = *(int *)(this + 0x38);
        }
        CMFCToolBarImages::Draw
                  (local_c0,local_88,(int)(pCVar2 + local_ac + 1),local_84 + local_b8,iVar4,0,0,0,1,
                   0,0xff);
        pCVar2 = pCVar2 + -1;
        iVar4 = local_84 + -2;
      }
      if ((local_a0 == (CMFCVisualManager *)0x0) || (param_8 == 0)) {
        local_a0 = (CMFCVisualManager *)0x0;
      }
      else {
        local_a0 = (CMFCVisualManager *)0x1;
      }
      if (*(int *)(this + 4) == 0) {
        iVar13 = *(int *)(this + 0x34);
      }
      else {
        iVar13 = *(int *)(this + 0x38);
      }
      CMFCToolBarImages::Draw
                (local_c0,pCVar10,(int)(pCVar2 + local_ac),iVar4 + local_b8,iVar13,0,(int)local_a0,0
                 ,0,(int)local_8c,0xff);
    }
    else {
      local_44.left = (LONG)(pCVar2 + local_ac);
      local_44.top = local_b8 + local_84;
      local_44.right = (LONG)(local_b4 + local_44.left);
      local_44.bottom = local_b0 + local_44.top;
      CUserTool::DrawToolIcon(local_cc,local_88,(CRect *)&local_44);
    }
  }
  iVar4 = local_bc;
  if (((*(int *)(this + 0x18) != 0) && (param_4 != 0)) ||
     ((*(int *)(local_98 + 8) != 0 && (*(int *)(*(int *)(local_98 + 0x2c) + -0xc) != 0)))) {
    uVar11 = 0;
    if (param_6 == 0) {
      if ((*(uint *)(local_98 + 0x24) & 0x30000) != 0) {
        uVar11 = 1;
      }
    }
    else {
      uVar11 = 2;
    }
    pCVar2 = CMFCVisualManager::GetInstance();
    pcVar12 = *(code **)(*(int *)pCVar2 + 0xb4);
    guard_check_icall(local_98,uVar11);
    uVar11 = (*pcVar12)();
    pcVar12 = *(code **)(*(int *)local_88 + 0x30);
    guard_check_icall(uVar11);
    (*pcVar12)();
    local_84 = FUN_10047580(*(int *)(local_98 + 0x2c) + -0x10);
    pCVar1 = local_98;
    local_84 = local_84 + 0x10;
    local_8._0_1_ = 1;
    local_34.left = local_24.left;
    local_34.top = local_24.top;
    local_34.right = local_24.right;
    local_34.bottom = local_24.bottom;
    if ((*(int *)(local_98 + 0x18) == 0) || (param_4 == 0)) {
      iVar7 = IsDrawImage(local_98);
      iVar13 = local_9c;
      if (iVar7 == 0) {
        local_34.left = local_ac + 4;
      }
      else {
        uVar8 = -(uint)(DAT_10245cb0 != 0) & 6;
        if (param_4 == 0) {
          iVar13 = local_9c + uVar8 + local_b0;
          local_34.left = (LONG)local_a8;
        }
        else {
          local_34.left = (LONG)(local_a8 + (int)(local_b4 + uVar8));
        }
        local_34.left = local_34.left + local_ac + 3;
      }
      local_94 = 0x20;
    }
    else {
      local_94 = 1;
      iVar13 = local_9c + 3 + local_b0;
      if (DAT_1023da68 != 0) {
        local_94 = 0x11;
      }
      local_34.left =
           (LONG)(local_a8 + ((local_24.right - *(int *)(local_98 + 100)) + local_24.left) / 2);
      local_34.right = (*(int *)(local_98 + 100) + local_24.right + local_24.left) / 2;
      local_9c = iVar13;
    }
    if (param_4 == 0) {
      local_34.bottom = local_24.bottom;
      local_90 = (CPen *)(local_c4 / 2);
      local_34.right = (local_24.right + local_24.left) / 2 - (int)local_90;
      local_34.left = local_c4 + local_34.right;
      local_34.top = ((local_24.bottom - (local_24.top + iVar13)) - (int)local_c8) / 2;
      if (local_34.top < 0) {
        local_34.top = 0;
      }
      local_34.top = local_24.top + iVar13 + local_34.top;
      ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Replace
                ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_84,
                 L"&&",L"\x01\x01");
      pCVar2 = (CMFCVisualManager *)FUN_10046b20(0x26,0);
      local_a0 = pCVar2;
      ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Remove
                ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_84,
                 L'&');
      ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Replace
                ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_84,
                 L"\x01\x01",L"&&");
      if ((((int)pCVar2 < 0) || (pAVar5 = GetGlobalData(), *(int *)(pAVar5 + 0x1a0) == 0)) ||
         (DAT_10245ca8 != 0)) {
        iVar13 = 0x120;
        uVar11 = *(undefined4 *)(iVar4 + -0xc);
        goto LAB_1011f207;
      }
      local_44.left = 0;
      local_44.top = 0;
      local_44.right = 0;
      local_44.bottom = 0;
      SetRectEmpty(&local_44);
      ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Left
                ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_84,
                 (int)&local_94);
      pCVar10 = local_88;
      iVar13 = *(int *)local_88;
      local_8._0_1_ = 2;
      guard_check_icall(local_94,*(undefined4 *)(local_94 + -0xc),&local_44,0x520);
      (**(code **)(iVar13 + 0x68))();
      local_cc = (CUserTool *)local_44.right;
      SetRectEmpty(&local_44);
      uVar11 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Left
                         ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                          &local_84,(int)&local_a0);
      local_8._0_1_ = 3;
      FUN_100475f0(uVar11);
      local_8._0_1_ = 2;
      FUN_100476d0();
      iVar13 = *(int *)pCVar10;
      guard_check_icall(local_94,*(undefined4 *)(local_94 + -0xc),&local_44,0x520);
      (**(code **)(iVar13 + 0x68))();
      local_b4 = (CUserTool *)local_44.right;
      iVar13 = *(int *)local_88;
      guard_check_icall(iVar4,*(undefined4 *)(iVar4 + -0xc),&local_34,0x120);
      (**(code **)(iVar13 + 0x68))();
      pCVar10 = local_88;
      local_a0 = (CMFCVisualManager *)
                 ((*(int *)(param_2 + 8) + *(int *)param_2) / 2 - (int)local_90);
      local_90 = (CPen *)0x0;
      CVar9 = GetTextColor(*(HDC *)(local_88 + 8));
      CPen::CPen((CPen *)&local_c8,0,1,CVar9);
      local_8._0_1_ = 4;
      CVar9 = GetTextColor(*(HDC *)(pCVar10 + 8));
      if (CVar9 != 0) {
        local_90 = CDC::SelectObject(pCVar10,(CPen *)&local_c8);
      }
      CDC::MoveTo(pCVar10,(int)local_d0,(int)local_a0);
      CDC::LineTo(pCVar10,(int)local_a0,(int)(local_b4 + local_34.top));
      if (local_90 != (CPen *)0x0) {
        CDC::SelectObject(pCVar10,local_90);
      }
      local_c8 = CPen::vftable;
      CImageList::~CImageList((CImageList *)&local_c8);
      FUN_100476d0();
    }
    else {
      local_34.top = local_34.top + iVar13;
      if ((*(int *)(pCVar1 + 0x18) != 0) && (*(int *)(pCVar1 + 0x48) != 0)) {
        pCVar2 = CMFCVisualManager::GetInstance();
        pcVar12 = *(code **)(*(int *)pCVar2 + 0x140);
        guard_check_icall(&local_c8);
        iVar4 = (*pcVar12)();
        OffsetRect(&local_34,0,*(int *)(iVar4 + 4) / 2);
      }
      pAVar5 = GetGlobalData();
      if ((*(int *)(pAVar5 + 0x1a0) == 0) && (DAT_10245ca8 == 0)) {
        iVar4 = FUN_100477c0(&DAT_101e1d70,0);
        if (iVar4 < 0) {
          FUN_100475f0(&local_bc);
        }
        else {
          ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Replace
                    ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_84
                     ,L"&&",L"\x01\x01");
          ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Remove
                    ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_84
                     ,L'&');
          ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Replace
                    ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_84
                     ,L"\x01\x01",L"&&");
        }
      }
      uVar11 = *(undefined4 *)(local_84 + -0xc);
      iVar4 = local_84;
      iVar13 = local_94;
LAB_1011f207:
      iVar7 = *(int *)local_88;
      guard_check_icall(iVar4,uVar11,&local_34,iVar13);
      (**(code **)(iVar7 + 0x68))();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_100476d0();
  }
  pCVar1 = local_98;
  if (param_5 == 0) {
    pcVar12 = *(code **)(*(int *)local_98 + 0x54);
    guard_check_icall();
    iVar4 = (*pcVar12)();
    if ((iVar4 != 0) && (param_7 != 0)) {
      if ((*(uint *)(pCVar1 + 0x24) & 0x30000) == 0) {
        if ((param_6 == 0) || ((*(uint *)(pCVar1 + 0x24) & 0x150000) != 0)) goto LAB_1011f2f2;
        local_a0 = CMFCVisualManager::GetInstance();
        pcVar12 = *(code **)(*(int *)local_a0 + 0x88);
        guard_check_icall(local_88,local_98,*(undefined4 *)param_2,*(undefined4 *)(param_2 + 4),
                          *(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc),2);
      }
      else {
        local_a0 = CMFCVisualManager::GetInstance();
        pcVar12 = *(code **)(*(int *)local_a0 + 0x88);
        guard_check_icall(local_88,local_98,*(undefined4 *)param_2,*(undefined4 *)(param_2 + 4),
                          *(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc),1);
      }
      (*pcVar12)();
    }
  }
LAB_1011f2f2:
  FUN_100476d0();
  FUN_1018015d();
  return;
}

