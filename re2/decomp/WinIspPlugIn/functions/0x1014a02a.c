// rea decompile_all
// name: CMFCVisualManagerOffice2003::OnDrawRibbonCategoryTab
// address: 0x1014a02a
// body: available
// range: 0x1014a02a-0x1014a477 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1014a209 to 0x1004a383 FUN_1004a383 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual unsigned long __thiscall
   CMFCVisualManagerOffice2003::OnDrawRibbonCategoryTab(class CDC *,class CMFCRibbonTab *,int)
   
   Library: Visual Studio 2015 Release */

ulong __thiscall
CMFCVisualManagerOffice2003::OnDrawRibbonCategoryTab
          (CMFCVisualManagerOffice2003 *this,CDC *param_1,CMFCRibbonTab *param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  CMFCVisualManagerOffice2003 *pCVar3;
  CDC *pCVar4;
  undefined **ppuVar5;
  AFX_GLOBAL_DATA *pAVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  HRGN pHVar10;
  ulong uVar11;
  int iVar12;
  CPen *pCVar13;
  undefined **ppuVar14;
  CDrawingManager local_a8 [8];
  undefined **local_a0 [2];
  int local_98;
  int local_94;
  int iStack_90;
  undefined **local_8c;
  int local_88;
  undefined **local_84;
  undefined4 local_80;
  CMFCVisualManagerOffice2003 *local_7c;
  CDC *local_78;
  int local_74;
  int local_70;
  undefined **local_6c;
  int local_68;
  CDrawingManager local_64 [4];
  CPen *local_60;
  int local_5c;
  int local_58;
  POINT local_54;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined **local_1c;
  int local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x98;
  local_8 = 0x1014a039;
  local_78 = param_1;
  local_7c = this;
  pAVar6 = GetGlobalData();
  if (8 < *(int *)(pAVar6 + 0x1ac)) {
    pAVar6 = GetGlobalData();
    iVar7 = AFX_GLOBAL_DATA::IsHighContrastMode(pAVar6);
    if (iVar7 == 0) {
      local_98 = *(int *)(param_2 + 0x88);
      pCVar13 = *(CPen **)(local_98 + 0x53c);
      local_60 = pCVar13;
      if (param_3 == 0) {
LAB_1014a0b1:
        local_5c = 0;
      }
      else {
        if (((byte)pCVar13[0x330] & 1) != 0) {
          pcVar1 = *(code **)(*(int *)param_2 + 0x1c4);
          guard_check_icall();
          iVar7 = (*pcVar1)();
          if (iVar7 == 0) goto LAB_1014a0b1;
        }
        local_5c = 1;
      }
      pcVar1 = *(code **)(*(int *)param_2 + 0xd4);
      guard_check_icall();
      iVar7 = (*pcVar1)();
      if ((iVar7 == 0) || (((byte)pCVar13[0x330] & 1) == 0)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      pcVar1 = *(code **)(*(int *)param_2 + 0xd0);
      guard_check_icall();
      iVar7 = (*pcVar1)();
      if ((iVar7 != 0) || (bVar2)) {
        pcVar1 = *(code **)(*(int *)param_2 + 0xe4);
        guard_check_icall();
        iVar7 = (*pcVar1)();
        if (iVar7 != 0) goto LAB_1014a117;
        local_58 = 1;
      }
      else {
LAB_1014a117:
        local_58 = 0;
      }
      local_74 = *(int *)(param_2 + 0x74);
      local_6c = *(undefined ***)(param_2 + 0x7c);
      local_68 = *(int *)(param_2 + 0x80);
      local_70 = *(int *)(param_2 + 0x78) + 3;
      if (0 < *(int *)(local_60 + 0x2cc)) {
        local_94 = (int)local_6c + -1;
        iVar12 = 100 - *(int *)(local_60 + 0x2cc) / 2;
        iVar7 = 10;
        if (9 < iVar12) {
          iVar7 = iVar12;
        }
        iStack_90 = local_70;
        local_8c = local_6c;
        local_88 = local_68;
        pAVar6 = GetGlobalData();
        uVar8 = CDrawingManager::PixelAlpha(*(ulong *)(pAVar6 + 0x58),iVar7);
        uVar9 = CDrawingManager::PixelAlpha(uVar8,0x78);
        CDrawingManager::CDrawingManager(local_64,local_78);
        local_8 = 0;
        CDrawingManager::FillGradient
                  (local_64,local_94,iStack_90,local_8c,local_88,uVar8,uVar9,1,0,0);
        local_8 = 0xffffffff;
        FUN_100b0b83();
      }
      ppuVar5 = local_6c;
      if ((local_5c == 0) && (local_58 == 0)) {
        GetGlobalData();
        goto LAB_1014a470;
      }
      ppuVar14 = (undefined **)((int)local_6c + -2);
      local_6c = ppuVar14;
      pAVar6 = GetGlobalData();
      CPen::CPen((CPen *)local_a0,0,1,*(ulong *)(pAVar6 + 0x58));
      pCVar4 = local_78;
      local_8 = 1;
      local_60 = CDC::SelectObject(local_78,(CPen *)local_a0);
      if (local_60 == (CPen *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_1004a383();
      }
      local_80 = 0;
      local_54.x = local_74;
      local_4c = local_74 + 1;
      local_48 = local_68 + -1;
      local_3c = local_74 + 3;
      local_54.y = local_68;
      local_40 = local_70 + 2;
      local_38 = local_70;
      local_34 = (int)ppuVar5 + -5;
      local_30 = local_70;
      local_2c = (int)ppuVar5 + -3;
      local_18 = local_68;
      local_84 = CRgn::vftable;
      local_8._0_1_ = 2;
      local_44 = local_4c;
      local_28 = local_40;
      local_24 = local_2c;
      local_20 = local_48;
      local_1c = ppuVar14;
      pHVar10 = CreatePolygonRgn(&local_54,8,2);
      CMenu::Attach((CMenu *)&local_84,(HMENU__ *)pHVar10);
      CDC::SelectClipRgn(pCVar4,(CRgn *)&local_84);
      CDrawingManager::CDrawingManager(local_a8,pCVar4);
      local_8 = CONCAT31(local_8._1_3_,3);
      local_88 = FUN_1010056c();
      pCVar3 = local_7c;
      if (local_88 == 0) {
        pcVar1 = *(code **)(*(int *)local_7c + 0x284);
        guard_check_icall(*(undefined4 *)(local_98 + 0x19c));
        uVar8 = (*pcVar1)();
      }
      else {
        uVar8 = *(ulong *)(local_7c + 0x194);
      }
      pAVar6 = GetGlobalData();
      uVar9 = *(ulong *)(pAVar6 + 0x54);
      uVar11 = uVar8;
      if (uVar8 == 0xffffffff) {
        uVar11 = CDrawingManager::PixelAlpha(uVar9,0x78);
      }
      if (local_58 != 0) {
        if (local_5c == 0) {
          if (uVar8 != 0xffffffff) {
            uVar11 = CDrawingManager::PixelAlpha(uVar8,0x78);
            uVar9 = uVar8;
            goto LAB_1014a323;
          }
          uVar9 = *(ulong *)(pCVar3 + 0x194);
        }
        uVar11 = *(ulong *)(pCVar3 + 400);
      }
LAB_1014a323:
      CDrawingManager::FillGradient(local_a8,local_74,local_70,local_6c,local_68,uVar9,uVar11,1,0,0)
      ;
      pCVar4 = local_78;
      CDC::SelectClipRgn(local_78,(CRgn *)0x0);
      Polyline(*(HDC *)(pCVar4 + 4),&local_54,8);
      pCVar13 = local_60;
      if (((local_58 != 0) && (local_5c != 0)) && (local_88 == 0)) {
        iVar7 = 0;
        do {
          iVar12 = (&local_54)[iVar7].x;
          if (iVar12 < (local_74 + (int)local_6c) / 2) {
            iVar12 = iVar12 + 1;
          }
          else {
            iVar12 = iVar12 + -1;
          }
          (&local_54)[iVar7].x = iVar12;
          iVar12 = (&local_54)[iVar7].y;
          if (iVar12 < (local_70 + local_68) / 2) {
            iVar12 = iVar12 + 1;
          }
          else {
            iVar12 = iVar12 + -1;
          }
          (&local_54)[iVar7].y = iVar12;
          iVar7 = iVar7 + 1;
        } while (iVar7 < 8);
        CPen::CPen((CPen *)&local_8c,0,1,*(ulong *)(local_7c + 0x194));
        local_8._0_1_ = 4;
        CDC::SelectObject(pCVar4,(CPen *)&local_8c);
        Polyline(*(HDC *)(pCVar4 + 4),&local_54,8);
        pCVar13 = local_60;
        CDC::SelectObject(pCVar4,local_60);
        local_8 = CONCAT31(local_8._1_3_,3);
        local_8c = CPen::vftable;
        CImageList::~CImageList((CImageList *)&local_8c);
      }
      CDC::SelectObject(pCVar4,pCVar13);
      GetGlobalData();
      FUN_100b0b83();
      local_84 = CRgn::vftable;
      CImageList::~CImageList((CImageList *)&local_84);
      local_a0[0] = CPen::vftable;
      CImageList::~CImageList((CImageList *)local_a0);
      goto LAB_1014a470;
    }
  }
  CMFCVisualManager::OnDrawRibbonCategoryTab((CMFCVisualManager *)this,param_1,param_2,param_3);
LAB_1014a470:
  uVar8 = FUN_1018015d();
  return uVar8;
}

