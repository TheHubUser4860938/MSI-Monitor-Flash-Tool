// rea decompile_all
// name: CMFCVisualManagerOffice2003::OnDrawTab
// address: 0x1011f25c
// body: available
// range: 0x1011f25c-0x1011f9b0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManagerOffice2003::OnDrawTab(class CDC *,class
   CRect,int,int,class CMFCBaseTabCtrl const *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerOffice2003::OnDrawTab
          (undefined4 param_1_00,CDC *param_1,int param_3,int param_4,int param_5,int param_6,
          int param_7,int param_8,CPen *param_9)

{
  code *pcVar1;
  CPen *pCVar2;
  CDC *pCVar3;
  int iVar4;
  AFX_GLOBAL_DATA *pAVar5;
  int iVar6;
  HRGN pHVar7;
  CDC *pCVar8;
  CDrawingManager local_110 [8];
  undefined **local_108 [2];
  undefined **local_100;
  HBRUSH local_fc;
  undefined **local_f8;
  HBRUSH local_f4;
  undefined **local_f0 [2];
  undefined **local_e8 [2];
  undefined **local_e0;
  HBRUSH local_dc;
  int local_d8;
  undefined **local_d4;
  undefined4 local_d0;
  CPen *local_cc;
  undefined1 local_c8 [4];
  int local_c4;
  ulong local_c0;
  ulong local_bc;
  CMFCVisualManagerOfficeXP *local_b8;
  CPen *local_b4;
  CDC *local_b0;
  tagRECT local_ac;
  RECT local_9c;
  RECT local_8c;
  tagRECT local_7c;
  tagRECT local_6c;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  tagRECT local_4c;
  POINT local_3c;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  pCVar2 = param_9;
  uStack_4 = 0x100;
  local_8 = 0x1011f26b;
  local_b0 = param_1;
  local_cc = param_9;
  pcVar1 = *(code **)(*(int *)param_9 + 0x288);
  guard_check_icall();
  iVar4 = (*pcVar1)();
  if ((iVar4 != 0) && (pAVar5 = GetGlobalData(), 8 < *(int *)(pAVar5 + 0x1ac))) {
    pAVar5 = GetGlobalData();
    iVar4 = AFX_GLOBAL_DATA::IsHighContrastMode(pAVar5);
    if (iVar4 == 0) {
      pcVar1 = *(code **)(*(int *)pCVar2 + 0x290);
      guard_check_icall();
      iVar4 = (*pcVar1)();
      if (iVar4 == 0) {
        pcVar1 = *(code **)(*(int *)pCVar2 + 0x180);
        local_5c = iVar4;
        local_58 = iVar4;
        local_54 = iVar4;
        local_50 = iVar4;
        guard_check_icall(&local_5c);
        (*pcVar1)();
        iVar6 = FUN_10060315(param_7);
        iVar4 = param_8;
        if ((iVar6 == 0) && (param_8 == 0)) {
          iVar6 = param_6 - param_4;
        }
        else {
          iVar6 = 0;
        }
        if ((param_3 + 10 + iVar6 <= local_54) && (local_5c < param_5 + -10)) {
          local_b4 = *(CPen **)(pCVar2 + 0x114);
          pcVar1 = *(code **)(*(int *)pCVar2 + 0x1dc);
          iVar6 = param_7;
          guard_check_icall();
          local_c0 = (*pcVar1)();
          if ((local_c0 == 0xffffffff) && (iVar4 != 0)) {
            pAVar5 = GetGlobalData();
            local_c0 = *(ulong *)(pAVar5 + 0x6c);
          }
          if (*(int *)(pCVar2 + 0x90) == 0) {
            OffsetRect((LPRECT)&param_3,0,-1);
          }
          local_4c.left = param_3;
          local_c4 = 0;
          local_3c.x = param_3;
          local_30 = param_4;
          local_4c.top = param_4;
          local_28 = param_4;
          local_4c.right = param_5;
          local_4c.bottom = param_6;
          local_d8 = param_6 - param_4;
          local_34 = param_3 + local_d8;
          local_24 = param_5;
          local_1c = param_5;
          local_3c.y = param_6;
          local_2c = param_5 + -2;
          iVar4 = 0;
          local_18 = param_6;
          local_20 = param_4 + 2;
          do {
            if (local_54 < (&local_3c)[iVar4].x) {
              (&local_3c)[iVar4].x = local_54;
              local_c4 = 1;
            }
            if (*(int *)(pCVar2 + 0x90) == 0) {
              (&local_3c)[iVar4].y = (param_6 - (&local_3c)[iVar4].y) + param_4;
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < 5);
          local_d4 = CRgn::vftable;
          local_d0 = 0;
          local_8 = 0;
          pHVar7 = CreatePolygonRgn(&local_3c,5,2);
          CMenu::Attach((CMenu *)&local_d4,(HMENU__ *)pHVar7);
          pCVar8 = local_b0;
          CDC::SelectClipRgn(local_b0,(CRgn *)&local_d4);
          local_7c.left = 0;
          local_7c.top = 0;
          local_7c.right = 0;
          local_7c.bottom = 0;
          GetClientRect(*(HWND *)(pCVar2 + 0x20),&local_7c);
          local_7c.right = local_5c + -1;
          CDC::ExcludeClipRect(pCVar8,&local_7c);
          CDrawingManager::CDrawingManager(local_110,pCVar8);
          local_8._0_1_ = 1;
          local_bc = local_c0;
          if ((CPen *)param_7 == local_b4) {
            local_bc = *(ulong *)(local_b8 + 0x18c);
          }
          if (local_bc == 0xffffffff) {
            local_bc = *(ulong *)(local_b8 + 0x164);
            local_b4 = *(CPen **)(local_b8 + 0x168);
          }
          else {
            local_b4 = (CPen *)CDrawingManager::PixelAlpha
                                         (local_bc,-2.106486109508037e-37,-2.106486109508037e-37,
                                          (double)CONCAT44(iVar6,0x3ff3851e));
          }
          if (*(int *)(pCVar2 + 0x90) == 0) {
            local_4c.top = local_4c.top + 1;
          }
          local_8c.left = local_4c.left;
          local_8c.bottom = (local_4c.top + local_4c.bottom) / 2 + -1;
          local_8c.top = local_4c.top;
          local_8c.right = local_4c.right;
          CBrush::CBrush((CBrush *)&local_100,(ulong)local_b4);
          local_8._0_1_ = 2;
          FillRect(*(HDC *)(local_b0 + 4),&local_8c,local_fc);
          local_6c.left = local_4c.left;
          iVar4 = local_8c.bottom + 3;
          local_6c.right = local_4c.right;
          local_6c.top = local_8c.bottom;
          local_6c.bottom = iVar4;
          CDrawingManager::FillGradient
                    (local_110,local_4c.left,local_8c.bottom,local_4c.right,iVar4,local_bc,local_b4,
                     1,0,0);
          local_9c.left = local_4c.left;
          local_9c.right = local_4c.right;
          local_9c.bottom = local_4c.bottom;
          local_9c.top = iVar4;
          CBrush::CBrush((CBrush *)&local_f8,local_bc);
          pCVar8 = local_b0;
          local_8 = CONCAT31(local_8._1_3_,3);
          FillRect(*(HDC *)(local_b0 + 4),&local_9c,local_f4);
          CDC::SelectClipRgn(pCVar8,(CRgn *)0x0);
          CDC::ExcludeClipRect(pCVar8,&local_7c);
          pCVar2 = local_cc;
          iVar4 = FUN_10060315(param_7);
          if ((iVar4 == 0) && (param_8 == 0)) {
            pcVar1 = *(code **)(*(int *)pCVar2 + 0x29c);
            guard_check_icall();
            iVar4 = (*pcVar1)();
            pCVar3 = local_b0;
            if (param_7 != iVar4) {
              local_6c.left = local_5c;
              local_6c.right = (local_4c.bottom - local_4c.top) + local_4c.left + -10;
              local_6c.top = local_58;
              local_6c.bottom = local_50;
              if (*(int *)(pCVar2 + 0x90) == 0) {
                local_6c.top = local_58 + -2;
              }
              else {
                local_6c.bottom = local_50 + 1;
              }
              CDC::ExcludeClipRect(local_b0,&local_6c);
              pCVar8 = pCVar3;
            }
          }
          pAVar5 = GetGlobalData();
          CPen::CPen((CPen *)local_f0,0,1,*(ulong *)(pAVar5 + 0x60));
          local_8._0_1_ = 4;
          pAVar5 = GetGlobalData();
          CPen::CPen((CPen *)local_108,0,1,*(ulong *)(pAVar5 + 0x58));
          local_8 = CONCAT31(local_8._1_3_,5);
          local_cc = CDC::SelectObject(pCVar8,(CPen *)local_f0);
          pcVar1 = *(code **)(*(int *)pCVar8 + 0x24);
          guard_check_icall(5);
          local_b4 = (CPen *)(*pcVar1)();
          Polyline(*(HDC *)(pCVar8 + 4),&local_3c,5);
          if (local_c4 != 0) {
            CDC::MoveTo(pCVar8,(int)local_c8,local_54);
            CDC::LineTo(pCVar8,local_54,param_6);
          }
          pCVar8 = local_b0;
          local_ac.top = local_58;
          local_ac.right = local_54;
          local_ac.bottom = local_50;
          local_ac.left = local_4c.right;
          CDC::ExcludeClipRect(local_b0,&local_ac);
          pAVar5 = GetGlobalData();
          CPen::CPen((CPen *)local_e8,0,1,*(ulong *)(pAVar5 + 0x5c));
          local_8 = CONCAT31(local_8._1_3_,6);
          CDC::SelectObject(pCVar8,(CPen *)local_e8);
          if (*(int *)(pCVar2 + 0x90) != 0) {
            CDC::MoveTo(pCVar8,(int)local_c8,local_4c.left + 1);
            iVar4 = local_4c.top + 1;
            CDC::LineTo(pCVar8,local_d8 + local_4c.left,iVar4);
            CDC::LineTo(pCVar8,local_4c.right + -1,iVar4);
          }
          CDC::SelectObject(pCVar8,local_cc);
          CDC::SelectObject(pCVar8,local_b4);
          if (param_8 != 0) {
            local_4c.top = param_6;
            if (*(int *)(pCVar2 + 0x90) == 0) {
              local_4c.top = param_4 + -1;
            }
            local_4c.left = param_3 + 2;
            local_4c.right = (param_5 - param_3) + -1 + local_4c.left;
            local_4c.bottom = local_4c.top + 1;
            if (*(int *)(pCVar2 + 0x90) == 0) {
              OffsetRect(&local_4c,-1,1);
            }
            if (local_54 <= local_4c.right) {
              local_4c.right = local_54;
            }
            CBrush::CBrush((CBrush *)&local_e0,local_c0);
            FillRect(*(HDC *)(pCVar8 + 4),&local_4c,local_dc);
            local_e0 = CBrush::vftable;
            CImageList::~CImageList((CImageList *)&local_e0);
          }
          iVar4 = param_6 - param_4;
          if (*(int *)(pCVar2 + 0x90) == 0) {
            iVar4 = iVar4 + DAT_10201668;
          }
          else {
            param_5 = param_5 - DAT_10201668;
          }
          param_3 = param_3 + iVar4;
          pcVar1 = *(code **)(*(int *)pCVar2 + 0x1e4);
          guard_check_icall(param_7);
          iVar4 = (*pcVar1)();
          local_c4 = -1;
          if ((param_8 == 0) && (iVar4 != -1)) {
            pcVar1 = *(code **)(*(int *)pCVar8 + 0x30);
            guard_check_icall(iVar4);
            local_c4 = (*pcVar1)();
          }
          pCVar8 = local_b0;
          if (local_54 + -2 <= param_5) {
            param_5 = local_54 + -2;
          }
          pcVar1 = *(code **)(*(int *)local_b8 + 0xfc);
          guard_check_icall(local_b0,param_3,param_4,param_5,param_6,param_7,param_8,pCVar2,
                            0xffffffff);
          (*pcVar1)();
          if (local_c4 != -1) {
            pcVar1 = *(code **)(*(int *)pCVar8 + 0x30);
            guard_check_icall(local_c4);
            (*pcVar1)();
          }
          CDC::SelectClipRgn(pCVar8,(CRgn *)0x0);
          local_e8[0] = CPen::vftable;
          CImageList::~CImageList((CImageList *)local_e8);
          local_108[0] = CPen::vftable;
          CImageList::~CImageList((CImageList *)local_108);
          local_f0[0] = CPen::vftable;
          CImageList::~CImageList((CImageList *)local_f0);
          local_f8 = CBrush::vftable;
          CImageList::~CImageList((CImageList *)&local_f8);
          local_100 = CBrush::vftable;
          CImageList::~CImageList((CImageList *)&local_100);
          FUN_10084c54();
          local_d4 = CRgn::vftable;
          CImageList::~CImageList((CImageList *)&local_d4);
        }
        goto LAB_1011f9a9;
      }
    }
  }
  CMFCVisualManagerOfficeXP::OnDrawTab
            (local_b8,local_b0,param_3,param_4,param_5,param_6,param_7,param_8,pCVar2);
LAB_1011f9a9:
  FUN_10154478();
  return;
}

