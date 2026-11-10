// rea decompile_all
// name: CMFCVisualManager::OnDrawRibbonCategoryTab
// address: 0x100624a5
// body: available
// range: 0x100624a5-0x10062817 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100625a7 to 0x1001d023 FUN_1001d023 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual unsigned long __thiscall CMFCVisualManager::OnDrawRibbonCategoryTab(class CDC
   *,class CMFCRibbonTab *,int)
   
   Library: Visual Studio 2015 Release */

ulong __thiscall
CMFCVisualManager::OnDrawRibbonCategoryTab
          (CMFCVisualManager *this,CDC *param_1,CMFCRibbonTab *param_2,int param_3)

{
  code *pcVar1;
  CMFCRibbonTab *pCVar2;
  int iVar3;
  AFX_GLOBAL_DATA *pAVar4;
  ulong uVar5;
  HRGN pHVar6;
  HBRUSH hbr;
  int iVar7;
  CDC *pCVar8;
  undefined1 local_a4 [8];
  undefined **local_9c;
  HBRUSH local_98;
  undefined **local_94 [2];
  CMFCVisualManager *local_8c;
  CMFCRibbonTab *local_88;
  undefined **local_84 [2];
  undefined **local_7c;
  undefined4 local_78;
  int local_74;
  CPen *local_70;
  CDC *local_6c;
  int local_68;
  RECT local_64;
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
  int local_1c;
  int local_18;
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x94;
  local_8 = 0x100624b4;
  local_6c = param_1;
  local_88 = param_2;
  local_70 = *(CPen **)(*(int *)(param_2 + 0x88) + 0x53c);
  local_8c = this;
  if (param_3 == 0) {
LAB_10062507:
    local_74 = 0;
  }
  else {
    if ((*(byte *)((int)local_70 + 0x330) & 1) != 0) {
      pcVar1 = *(code **)(*(int *)param_2 + 0x1c4);
      guard_check_icall();
      iVar3 = (*pcVar1)();
      if (iVar3 == 0) goto LAB_10062507;
    }
    local_74 = 1;
  }
  pcVar1 = *(code **)(*(int *)param_2 + 0xd4);
  guard_check_icall();
  iVar3 = (*pcVar1)();
  if ((iVar3 == 0) || ((*(byte *)((int)local_70 + 0x330) & 1) == 0)) {
    local_68 = 0;
  }
  else {
    local_68 = 1;
  }
  pcVar1 = *(code **)(*(int *)param_2 + 0xd0);
  guard_check_icall();
  iVar3 = (*pcVar1)();
  if ((iVar3 != 0) || (local_68 != 0)) {
    pcVar1 = *(code **)(*(int *)param_2 + 0xe4);
    guard_check_icall();
    iVar3 = (*pcVar1)();
    if (iVar3 == 0) {
      local_68 = 1;
      goto LAB_1006257b;
    }
  }
  local_68 = 0;
LAB_1006257b:
  pAVar4 = GetGlobalData();
  CPen::CPen((CPen *)local_84,0,1,*(ulong *)(pAVar4 + 0x58));
  local_8 = 0;
  local_70 = CDC::SelectObject(param_1,(CPen *)local_84);
  if (local_70 != (CPen *)0x0) {
    local_64.left = *(LONG *)(param_2 + 0x74);
    local_64.right = *(LONG *)(param_2 + 0x7c);
    local_64.bottom = *(LONG *)(param_2 + 0x80);
    local_64.top = *(int *)(param_2 + 0x78) + 3;
    iVar3 = *(int *)(*(int *)(*(int *)(param_2 + 0x88) + 0x53c) + 0x2cc);
    pCVar8 = local_6c;
    if (0 < iVar3) {
      iVar7 = 100 - iVar3 / 2;
      iVar3 = 10;
      if (9 < iVar7) {
        iVar3 = iVar7;
      }
      pAVar4 = GetGlobalData();
      uVar5 = CDrawingManager::PixelAlpha(*(ulong *)(pAVar4 + 0x54),iVar3);
      CPen::CPen((CPen *)local_94,0,1,uVar5);
      pCVar8 = local_6c;
      local_8._0_1_ = 1;
      CDC::SelectObject(local_6c,(CPen *)local_94);
      CDC::MoveTo(pCVar8,(int)local_a4,local_64.right + -1);
      CDC::LineTo(pCVar8,local_64.right + -1,local_64.bottom);
      local_8 = (uint)local_8._1_3_ << 8;
      local_94[0] = CPen::vftable;
      CImageList::~CImageList((CImageList *)local_94);
    }
    if ((local_74 == 0) && (local_68 == 0)) {
      CDC::SelectObject(pCVar8,local_70);
      GetGlobalData();
    }
    else {
      local_40 = local_64.top + 2;
      local_1c = local_64.right + -2;
      local_78 = 0;
      local_4c = local_64.left + 1;
      local_54.x = local_64.left;
      local_48 = local_64.bottom + -1;
      local_3c = local_64.left + 3;
      local_34 = local_64.right + -5;
      local_2c = local_64.right + -3;
      local_54.y = local_64.bottom;
      local_38 = local_64.top;
      local_30 = local_64.top;
      local_18 = local_64.bottom;
      local_7c = CRgn::vftable;
      local_8 = CONCAT31(local_8._1_3_,2);
      local_64.right = local_1c;
      local_44 = local_4c;
      local_28 = local_40;
      local_24 = local_2c;
      local_20 = local_48;
      pHVar6 = CreatePolygonRgn(&local_54,8,2);
      CMenu::Attach((CMenu *)&local_7c,(HMENU__ *)pHVar6);
      pCVar8 = local_6c;
      if (local_74 != 0) {
        CDC::SelectClipRgn(local_6c,(CRgn *)&local_7c);
        pCVar2 = local_88;
        iVar3 = FUN_100e2ca9();
        if (iVar3 == 0) {
          pcVar1 = *(code **)(*(int *)local_8c + 0x284);
          guard_check_icall(*(undefined4 *)(*(int *)(pCVar2 + 0x88) + 0x19c));
          uVar5 = (*pcVar1)();
        }
        else {
          pAVar4 = GetGlobalData();
          uVar5 = *(ulong *)(pAVar4 + 0x5c);
        }
        if (uVar5 == 0xffffffff) {
          pAVar4 = GetGlobalData();
          if (local_68 == 0) {
            pAVar4 = pAVar4 + 0xd0;
          }
          else {
            pAVar4 = pAVar4 + 200;
          }
          hbr = (HBRUSH)0x0;
          if (pAVar4 != (AFX_GLOBAL_DATA *)0x0) {
            hbr = *(HBRUSH *)(pAVar4 + 4);
          }
          FillRect(*(HDC *)(pCVar8 + 4),&local_64,hbr);
        }
        else {
          CBrush::CBrush((CBrush *)&local_9c,uVar5);
          FillRect(*(HDC *)(pCVar8 + 4),&local_64,local_98);
          local_9c = CBrush::vftable;
          CImageList::~CImageList((CImageList *)&local_9c);
        }
        CDC::SelectClipRgn(pCVar8,(CRgn *)0x0);
      }
      Polyline(*(HDC *)(pCVar8 + 4),&local_54,8);
      CDC::SelectObject(pCVar8,local_70);
      GetGlobalData();
      local_7c = CRgn::vftable;
      CImageList::~CImageList((CImageList *)&local_7c);
    }
    local_84[0] = CPen::vftable;
    CImageList::~CImageList((CImageList *)local_84);
    uVar5 = FUN_10154478();
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1001d023();
}

