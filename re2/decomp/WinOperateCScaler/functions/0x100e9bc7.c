// rea decompile_all
// name: CMFCCaptionBar::RecalcLayout
// address: 0x100e9bc7
// body: available
// range: 0x100e9bc7-0x100ea32d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: virtual void __thiscall CMFCCaptionBar::RecalcLayout(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCCaptionBar::RecalcLayout(CMFCCaptionBar *this)

{
  CRect *pCVar1;
  LPRECT lprc;
  code *pcVar2;
  AFX_GLOBAL_DATA *pAVar3;
  CPen *pCVar4;
  int iVar5;
  BOOL BVar6;
  int *piVar7;
  int iVar8;
  CClientDC local_dc [8];
  HDC local_d4;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  CPen *local_b8;
  int local_b4;
  int local_b0;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> local_ac [4];
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  int local_8c;
  CMFCCaptionBar *local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  tagRECT local_70;
  tagTEXTMETRICW local_60;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xcc;
  local_8 = 0x100e9bd6;
  local_88 = this;
  CClientDC::CClientDC(local_dc,(CWnd *)0x0);
  local_8 = 0;
  if (*(void **)(this + 0x408) == (void *)0x0) {
    pAVar3 = GetGlobalData();
    pCVar4 = (CPen *)(pAVar3 + 0x11c);
  }
  else {
    pCVar4 = (CPen *)CGdiObject::FromHandle(*(void **)(this + 0x408));
  }
  local_b8 = CDC::SelectObject((CDC *)local_dc,pCVar4);
  GetTextMetricsW(local_d4,&local_60);
  iVar8 = local_60.tmHeight + 2;
  FUN_100e888b(&local_84);
  iVar5 = *(int *)(this + 0x498);
  if (iVar5 == -1) {
    if ((*(int *)(*(int *)(this + 0x44c) + -0xc) != 0) && (*(int *)(this + 0x2c4) != 0)) {
      iVar8 = local_60.tmHeight + 0xc;
    }
    if (iVar8 <= local_80) {
      iVar8 = local_80;
    }
    iVar5 = *(int *)(this + 0x48c) + *(int *)(this + 0x490) * 2 + iVar8;
  }
  *(int *)(this + 0x49c) = iVar5;
  if (*(int *)(this + 0x2c4) != 0) {
    *(int *)(this + 0x49c) = *(int *)(this + 0x49c) + 8;
  }
  local_70.left = 0;
  local_70.top = 0;
  local_70.right = 0;
  local_70.bottom = 0;
  GetClientRect(*(HWND *)(this + 0x20),&local_70);
  BVar6 = IsRectEmpty(&local_70);
  if (BVar6 != 0) goto LAB_100ea31d;
  if (*(int *)(this + 0x2c4) != 0) {
    FUN_10084bc5(&local_a4);
    local_a4 = local_a4 + 8;
    local_c8 = local_70.right - local_84;
    local_a0 = local_a0 + 8;
    local_c4 = local_70.top + 4;
    local_c0 = local_c8 + local_a4;
    local_bc = local_c4 + local_a0;
    *(int *)(this + 0x4ac) = local_c8;
    *(int *)(this + 0x4b0) = local_c4;
    *(int *)(this + 0x4b4) = local_c0;
    *(int *)(this + 0x4b8) = local_bc;
    InflateRect(&local_70,-4,-4);
    local_70.right = local_70.right + (*(int *)(this + 0x4ac) - *(int *)(this + 0x4b4));
    this = local_88;
  }
  local_90 = 0;
  iVar8 = local_70.right - *(int *)(this + 0x490);
  local_b0 = (local_70.bottom + local_70.top) / 2;
  local_78 = *(int *)(this + 0x490) + local_70.left;
  local_98 = 0;
  local_94 = 0;
  local_74 = (local_70.left + local_70.right) / 2;
  local_b4 = 0;
  local_a0 = 0;
  local_9c = 0;
  local_88 = (CMFCCaptionBar *)0x0;
  local_8c = iVar8;
  iVar5 = IsImageSet(this);
  if (iVar5 != 0) {
    if (local_80 < local_70.bottom - local_70.top) {
      *(int *)(this + 0x3f4) = local_b0 - local_80 / 2;
      iVar5 = *(int *)(this + 0x490);
    }
    else {
      iVar5 = *(int *)(this + 0x490);
      *(LONG *)(this + 0x3f4) = local_70.top + iVar5;
    }
    if (*(int *)(this + 1000) == 0) {
      *(int *)(this + 0x3fc) = *(int *)(this + 0x3f4) + local_80;
    }
    else {
      *(LONG *)(this + 0x3fc) = local_70.bottom - iVar5;
    }
    iVar5 = *(int *)(this + 0x3ec);
    if (iVar5 == 1) {
      *(int *)(this + 0x3f0) = local_78;
      iVar5 = local_78 + local_84;
      local_78 = *(int *)(this + 0x494) + iVar5;
    }
    else {
      if (iVar5 != 2) {
        if (iVar5 == 3) {
          local_b4 = 1;
          local_74 = local_74 - local_84 / 2;
          local_90 = (uint)(*(int *)(this + 0x45c) == 1);
          local_94 = (uint)(*(int *)(this + 0x424) == 1);
        }
        goto LAB_100e9eba;
      }
      iVar8 = iVar8 - local_84;
      iVar5 = local_84 + iVar8;
      *(int *)(this + 0x3f0) = iVar8;
      iVar8 = iVar8 - *(int *)(this + 0x494);
      local_90 = 1;
      local_94 = 1;
      local_8c = iVar8;
    }
    *(int *)(this + 0x3f8) = iVar5;
  }
LAB_100e9eba:
  local_7c = 0;
  if (*(int *)(*(int *)(this + 0x44c) + -0xc) != 0) {
    piVar7 = (int *)CDC::GetTextExtent((CDC *)local_dc,local_ac);
    local_7c = *piVar7 + *(int *)(this + 0x494) * 2;
    if (*(int *)(this + 0x2c4) != 0) {
      local_7c = local_7c + 0x14;
    }
    if (((*(int *)(this + 0x458) != 0) && (*(int *)(this + 0x480) != 0)) &&
       (*(int *)(this + 0x484) != 0)) {
      local_7c = local_7c + 10;
    }
    *(LONG *)(this + 0x464) = local_70.top;
    *(LONG *)(this + 0x46c) = local_70.bottom;
    if (*(int *)(this + 0x2c4) != 0) {
      InflateRect((LPRECT)(this + 0x460),0,-5);
    }
    iVar5 = *(int *)(this + 0x45c);
    if (iVar5 == 1) {
      if ((*(int *)(this + 0x2c4) == 0) || (*(int *)(this + 0x424) != 1)) {
        *(int *)(this + 0x460) = local_78;
        if (local_78 == local_70.left + *(int *)(this + 0x490)) {
          *(LONG *)(this + 0x460) = local_70.left + *(int *)(this + 0x490);
        }
        iVar5 = *(int *)(this + 0x460) + local_7c;
        local_78 = *(int *)(this + 0x494) + iVar5;
        goto LAB_100ea014;
      }
      local_9c = 1;
    }
    else if (iVar5 == 2) {
      *(int *)(this + 0x460) = iVar8 - local_7c;
      if (iVar8 == local_70.right - *(int *)(this + 0x490)) {
        *(LONG *)(this + 0x460) = (local_70.right - *(int *)(this + 0x490)) - local_7c;
      }
      local_98 = 1;
      iVar5 = *(int *)(this + 0x460) + local_7c;
      local_8c = *(int *)(this + 0x460) - *(int *)(this + 0x494);
LAB_100ea014:
      *(int *)(this + 0x468) = iVar5;
    }
    else {
      if (iVar5 != 3) goto LAB_100ea31d;
      local_a0 = 1;
      local_74 = local_74 - local_7c / 2;
      local_98 = (uint)(*(int *)(this + 0x424) == 1);
    }
  }
  local_a8 = 0;
  if (*(int *)(*(int *)(this + 0x40c) + -0xc) != 0) {
    pcVar2 = *(code **)(*(int *)this + 0x334);
    guard_check_icall(&local_c0,local_dc,this + 0x40c);
    piVar7 = (int *)(*pcVar2)();
    local_a8 = *piVar7;
    iVar5 = piVar7[1];
    iVar8 = local_b0 - iVar5 / 2;
    *(int *)(this + 0x42c) = iVar8;
    *(int *)(this + 0x434) = iVar8 + iVar5;
    iVar5 = *(int *)(this + 0x424);
    if (iVar5 == 1) {
      *(int *)(this + 0x428) = local_78;
      local_78 = local_78 + local_a8 + *(int *)(this + 0x490) * 2;
    }
    else if (iVar5 == 2) {
      *(int *)(this + 0x428) = local_8c - local_a8;
    }
    else {
      if (iVar5 != 3) goto LAB_100ea31d;
      local_88 = (CMFCCaptionBar *)0x1;
      local_74 = local_74 - local_a8 / 2;
    }
    pCVar1 = (CRect *)(this + 0x428);
    *(int *)(this + 0x430) = *(int *)pCVar1 + local_a8;
    AdjustRectToMargin(this,pCVar1,(CRect *)&local_70,*(int *)(this + 0x490),0);
    *(undefined4 *)(this + 0x438) = *(undefined4 *)pCVar1;
    *(undefined4 *)(this + 0x43c) = *(undefined4 *)(this + 0x42c);
    *(undefined4 *)(this + 0x440) = *(undefined4 *)(this + 0x430);
    *(undefined4 *)(this + 0x444) = *(undefined4 *)(this + 0x434);
  }
  iVar5 = local_74;
  if (local_b4 != 0) {
    *(int *)(this + 0x3f0) = local_74;
    *(int *)(this + 0x3f8) = local_74 + local_84;
    iVar5 = *(int *)(this + 0x494) + local_74 + local_84;
  }
  if (local_9c == 0) {
    if (local_a0 != 0) {
      *(int *)(this + 0x460) = iVar5;
      *(int *)(this + 0x468) = local_7c + iVar5;
      iVar5 = *(int *)(this + 0x494) + local_7c + iVar5;
    }
  }
  else {
    *(int *)(this + 0x460) = local_78;
    *(int *)(this + 0x468) = local_78 + local_7c;
    if (local_70.right < local_78 + local_7c + *(int *)(this + 0x490)) {
      *(LONG *)(this + 0x468) = local_70.right - *(int *)(this + 0x490);
      *(LONG *)(this + 0x460) = (local_70.right - *(int *)(this + 0x490)) - local_7c;
    }
  }
  if (local_88 != (CMFCCaptionBar *)0x0) {
    pCVar1 = (CRect *)(this + 0x428);
    *(int *)pCVar1 = iVar5;
    *(int *)(this + 0x430) = local_a8 + iVar5;
    AdjustRectToMargin(this,pCVar1,(CRect *)&local_70,*(int *)(this + 0x490),0);
    *(undefined4 *)(this + 0x438) = *(undefined4 *)pCVar1;
    *(undefined4 *)(this + 0x43c) = *(undefined4 *)(this + 0x42c);
    *(undefined4 *)(this + 0x440) = *(undefined4 *)(this + 0x430);
    *(undefined4 *)(this + 0x444) = *(undefined4 *)(this + 0x434);
  }
  iVar5 = IsImageSet(this);
  if (iVar5 != 0) {
    lprc = (LPRECT)(this + 0x3f0);
    AdjustRectToMargin(this,(CRect *)lprc,(CRect *)&local_70,*(int *)(this + 0x490),
                       (uint)(*(int *)(this + 1000) == 0));
    if ((lprc->left < local_70.left) || (local_70.right < *(int *)(this + 0x3f8))) {
      SetRectEmpty(lprc);
    }
  }
  local_24 = *(undefined4 *)(this + 0x460);
  uStack_20 = *(undefined4 *)(this + 0x464);
  uStack_1c = *(undefined4 *)(this + 0x468);
  uStack_18 = *(undefined4 *)(this + 0x46c);
  iVar5 = 0;
  if ((*(int *)(*(int *)(this + 0x44c) + -0xc) != 0) && (iVar8 = IsImageSet(this), iVar8 != 0)) {
    CheckRectangle(this,(CRect *)&local_24,(CRect *)(this + 0x3f0),local_90);
  }
  if (*(int *)(*(int *)(this + 0x44c) + -0xc) != 0) {
    iVar8 = *(int *)(this + 0x490);
    AdjustRectToMargin(this,(CRect *)&local_24,(CRect *)&local_70,iVar8,0);
    if (local_70.right - local_70.left <
        ((*(int *)(this + 0x3f8) + *(int *)(this + 0x468) + iVar8 * 2) - *(int *)(this + 0x3f0)) -
        ((LPRECT)(this + 0x460))->left) {
      SetRectEmpty((LPRECT)(this + 0x460));
    }
  }
  if (*(int *)(*(int *)(this + 0x40c) + -0xc) != 0) {
    CheckRectangle(this,(CRect *)(this + 0x438),(CRect *)(this + 0x3f0),local_94);
    if ((local_98 != 0) || (local_9c != 0)) {
      iVar5 = 1;
    }
    CheckRectangle(this,(CRect *)(this + 0x438),(CRect *)&local_24,iVar5);
  }
  if (local_b8 != (CPen *)0x0) {
    CDC::SelectObject((CDC *)local_dc,local_b8);
  }
  *(uint *)(this + 0x448) = (uint)(*(int *)(this + 0x440) - *(int *)(this + 0x438) < local_a8);
  UpdateTooltips(this);
LAB_100ea31d:
  CClientDC::~CClientDC(local_dc);
  FUN_10154478();
  return;
}

