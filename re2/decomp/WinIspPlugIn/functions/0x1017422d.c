// rea decompile_all
// name: CMFCColorPickerCtrl::DrawItem
// address: 0x1017422d
// body: available
// range: 0x1017422d-0x10174537 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10174242 to 0x1004a383 FUN_1004a383 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: virtual void __thiscall CMFCColorPickerCtrl::DrawItem(struct tagDRAWITEMSTRUCT *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCColorPickerCtrl::DrawItem(CMFCColorPickerCtrl *this,tagDRAWITEMSTRUCT *param_1)

{
  code *pcVar1;
  CDC *pCVar2;
  CPalette *pCVar3;
  HDC pHVar4;
  int iVar5;
  HBITMAP pHVar6;
  AFX_GLOBAL_DATA *pAVar7;
  undefined4 uVar8;
  COLORREF CVar9;
  void *pvVar10;
  CDC *pCVar11;
  CMFCColorPickerCtrl *pCVar12;
  CDC *pCVar13;
  tagRECT *ptVar14;
  ulong uVar15;
  CDC local_70 [4];
  HDC__ *local_6c;
  undefined **local_60;
  void *local_5c;
  CGdiObject *local_58;
  CPalette *local_54;
  int local_50;
  CDC *local_4c;
  CDC *local_48;
  tagRECT local_44;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 100;
  local_8 = 0x10174239;
  if ((param_1 == (tagDRAWITEMSTRUCT *)0x0) || (*(int *)param_1 != 4)) {
                    /* WARNING: Subroutine does not return */
    FUN_1004a383();
  }
  pCVar2 = CDC::FromHandle(*(HDC__ **)(param_1 + 0x18));
  local_48 = pCVar2;
  pCVar3 = CDC::SelectPalette(pCVar2,*(CPalette **)(this + 0xac),0);
  RealizePalette(*(HDC *)(pCVar2 + 4));
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  pcVar1 = *(code **)(*(int *)pCVar2 + 0x50);
  guard_check_icall(&local_34);
  (*pcVar1)();
  CopyRect(&local_24,(RECT *)(param_1 + 0x1c));
  pCVar11 = local_48;
  local_50 = 0;
  local_4c = local_48;
  CDC::CDC(local_70);
  local_5c = (void *)0x0;
  local_60 = CBitmap::vftable;
  local_8 = 1;
  local_58 = (CGdiObject *)0x0;
  local_54 = (CPalette *)0x0;
  pHVar4 = CreateCompatibleDC(*(HDC *)(pCVar11 + 4));
  iVar5 = CDC::Attach(local_70,pHVar4);
  pCVar2 = pCVar11;
  if (iVar5 != 0) {
    pHVar6 = CreateCompatibleBitmap
                       (*(HDC *)(pCVar11 + 4),local_24.right - local_24.left,
                        local_24.bottom - local_24.top);
    iVar5 = CMenu::Attach((CMenu *)&local_60,(HMENU__ *)pHVar6);
    if (iVar5 != 0) {
      local_50 = 1;
      local_58 = CDC::SelectGdiObject(local_6c,local_5c);
      pCVar2 = local_70;
      local_4c = pCVar2;
      local_54 = CDC::SelectPalette(pCVar2,*(CPalette **)(this + 0xac),0);
      RealizePalette(local_6c);
      ptVar14 = (tagRECT *)0x0;
      pCVar12 = this;
      pCVar13 = pCVar2;
      pAVar7 = GetGlobalData();
      AFX_GLOBAL_DATA::DrawParentBackground(pAVar7,(CWnd *)pCVar12,pCVar13,ptVar14);
    }
  }
  iVar5 = *(int *)(this + 0x80);
  if (iVar5 == 0) {
    CVar9 = GetTextColor(*(HDC *)(pCVar2 + 8));
    iVar5 = (local_24.bottom - local_24.top) / 2;
    CDC::FillSolidRect(local_4c,0,0,local_24.right - local_24.left,iVar5,*(ulong *)(this + 0xa0));
    pCVar2 = local_4c;
    CDC::FillSolidRect(local_4c,0,iVar5,local_24.right - local_24.left,iVar5,*(ulong *)(this + 0xa4)
                      );
    pcVar1 = *(code **)(*(int *)pCVar2 + 0x30);
    guard_check_icall(CVar9);
    (*pcVar1)();
    pAVar7 = GetGlobalData();
    uVar15 = *(ulong *)(pAVar7 + 0x30);
    pAVar7 = GetGlobalData();
  }
  else {
    if (iVar5 == 1) {
      DrawLuminanceBar(this,pCVar2);
      local_44.left = *(LONG *)(this + 0xa8);
      local_44.top = 0;
      local_44.right = (local_24.right - local_44.left) - local_24.left;
      local_44.bottom = local_24.bottom - local_24.top;
      ptVar14 = &local_44;
      pCVar12 = this;
      pCVar11 = pCVar2;
      pAVar7 = GetGlobalData();
      AFX_GLOBAL_DATA::DrawParentBackground(pAVar7,(CWnd *)pCVar12,pCVar11,ptVar14);
      iVar5 = *(int *)this;
      uVar8 = GetCursorRect(this);
      guard_check_icall(pCVar2,uVar8);
      (**(code **)(iVar5 + 0x16c))();
      pCVar11 = local_48;
      goto LAB_101744b3;
    }
    if (iVar5 != 2) {
      if (iVar5 == 3) {
        FUN_10173d2d();
      }
      else {
        if (iVar5 != 4) goto LAB_101744b3;
        CreateHexGreyScaleBar(this);
      }
      DrawHex(this,pCVar2);
      goto LAB_101744b3;
    }
    FUN_101745f9(pCVar2);
    iVar5 = *(int *)this;
    uVar8 = GetCursorRect(this);
    guard_check_icall(pCVar2,uVar8);
    (**(code **)(iVar5 + 0x16c))();
    pAVar7 = GetGlobalData();
    uVar15 = *(ulong *)(pAVar7 + 0x24);
    pAVar7 = GetGlobalData();
  }
  CDC::Draw3dRect(pCVar2,&local_24,*(ulong *)(pAVar7 + 0x30),uVar15);
  pCVar11 = local_48;
LAB_101744b3:
  if (local_50 != 0) {
    CDC::BitBlt(pCVar11,local_34,local_30,local_2c - local_34,local_28 - local_30,local_70,local_34,
                local_30,0xcc0020);
    if (local_54 != (CPalette *)0x0) {
      CDC::SelectPalette(local_70,local_54,0);
    }
    pvVar10 = (void *)0x0;
    if (local_58 != (CGdiObject *)0x0) {
      pvVar10 = *(void **)(local_58 + 4);
    }
    CDC::SelectGdiObject(local_6c,pvVar10);
  }
  if (pCVar3 != (CPalette *)0x0) {
    CDC::SelectPalette(pCVar11,pCVar3,0);
  }
  local_60 = CBitmap::vftable;
  CImageList::~CImageList((CImageList *)&local_60);
  CDC::~CDC(local_70);
  FUN_1018015d();
  return;
}

