// rea decompile_all
// name: FUN_10104bf7
// address: 0x10104bf7
// body: available
// range: 0x10104bf7-0x101058b1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x101055f0 to 0x1004a383 FUN_1004a383 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void FUN_10104bf7(CDC *param_1)

{
  RECT *lprc;
  double dVar1;
  code *pcVar2;
  IMAGES_IDS IVar3;
  BOOL BVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  AFX_GLOBAL_DATA *pAVar8;
  CMFCVisualManager *pCVar9;
  CMFCRibbonBar *this;
  ulong uVar10;
  CMFCRibbonBaseElement *in_ECX;
  uint uVar11;
  CDC *pCVar12;
  int *piVar13;
  undefined1 local_1b0 [8];
  undefined1 local_1a8 [8];
  undefined1 local_1a0 [8];
  undefined1 local_198 [8];
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  int local_180;
  int local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  uint local_168;
  int local_164;
  int local_160;
  undefined8 local_15c;
  CMFCRibbonBaseElement *local_154;
  undefined8 local_150;
  int local_148;
  int local_144;
  CDC *local_140;
  CMFCToolBarMenuButton local_13c [32];
  undefined4 local_11c;
  uint local_118;
  undefined4 local_d0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_90;
  tagRECT local_54;
  int local_44;
  int local_40;
  int local_3c;
  undefined4 uStack_38;
  tagRECT local_34;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x1a0;
  local_8 = 0x10104c06;
  local_140 = param_1;
  local_154 = in_ECX;
  BVar4 = IsRectEmpty((RECT *)(in_ECX + 0x74));
  if (BVar4 != 0) goto LAB_101058aa;
  if (((*(int *)(in_ECX + 0xec) != 0) && (*(int *)(in_ECX + 0xc4) == 0)) &&
     (*(int *)(in_ECX + 400) == 0)) {
    CMFCToolBarMenuButton::CMFCToolBarMenuButton(local_13c);
    local_8 = 0;
    FUN_100475f0(in_ECX + 0x60);
    local_11c = *(undefined4 *)(in_ECX + 0xa4);
    local_a8 = 1;
    pcVar2 = *(code **)(*(int *)in_ECX + 0xa4);
    guard_check_icall();
    local_d0 = (*pcVar2)();
    local_90 = *(undefined4 *)(in_ECX + 0xdc);
    pcVar2 = *(code **)(*(int *)in_ECX + 0xe0);
    guard_check_icall();
    iVar5 = (*pcVar2)();
    if (iVar5 != 0) {
      local_118 = local_118 | 0x10000;
    }
    pcVar2 = *(code **)(*(int *)in_ECX + 0x138);
    guard_check_icall();
    iVar5 = (*pcVar2)();
    if (iVar5 != 0) {
      local_ac = 1;
    }
    local_164 = *(int *)(in_ECX + 200);
    pcVar2 = *(code **)(*(int *)in_ECX + 0xdc);
    guard_check_icall();
    iVar6 = (*pcVar2)();
    iVar5 = local_164;
    if (iVar6 != 0) {
      local_118 = local_118 | 0x40000;
      pcVar2 = *(code **)(*(int *)in_ECX + 0xd4);
      guard_check_icall();
      iVar5 = (*pcVar2)();
    }
    if ((iVar5 != 0) || (iVar5 = 0, *(int *)(in_ECX + 0xcc) != 0)) {
      iVar5 = 1;
    }
    CMFCToolBarMenuButton::OnDraw
              (local_13c,local_140,(CRect *)(in_ECX + 0x74),(CMFCToolBarImages *)0x0,1,0,iVar5,1,1);
    FUN_1011101d();
    goto LAB_101058aa;
  }
  local_164 = *(int *)(in_ECX + 0xd4);
  local_16c = *(undefined4 *)(in_ECX + 0xe0);
  local_170 = *(undefined4 *)(in_ECX + 200);
  local_174 = *(undefined4 *)(in_ECX + 0x174);
  local_178 = *(undefined4 *)(in_ECX + 0x178);
  pcVar2 = *(code **)(*(int *)in_ECX + 0x240);
  guard_check_icall();
  uVar7 = (*pcVar2)();
  local_150 = (double)CONCAT44(uVar7,(undefined4)local_150);
  if (*(int *)(in_ECX + 0xd4) != 0) {
    pcVar2 = *(code **)(*(int *)in_ECX + 0x138);
    guard_check_icall();
    iVar5 = (*pcVar2)();
    if (iVar5 != 0) {
      if ((*(int *)(in_ECX + 0x168) == 0) &&
         ((*(int *)(in_ECX + 0xa4) == 0 || (*(int *)(in_ECX + 0xa4) == -1)))) {
        *(undefined4 *)(in_ECX + 0xd4) = 0;
      }
      else {
        *(undefined4 *)(in_ECX + 200) = 0;
      }
    }
  }
  if (*(int *)(in_ECX + 0x188) != 0) {
    *(undefined4 *)(in_ECX + 0xe0) = 0;
  }
  if (*(int *)(in_ECX + 0xcc) != 0) {
    *(undefined4 *)(in_ECX + 200) = 1;
    *(undefined4 *)(in_ECX + 0x174) = 1;
    *(undefined4 *)(in_ECX + 0x178) = 1;
  }
  local_34.left = 0;
  local_34.top = 0;
  local_34.right = 0;
  local_34.bottom = 0;
  SetRectEmpty(&local_34);
  pcVar2 = *(code **)(*(int *)in_ECX + 0x138);
  guard_check_icall();
  iVar5 = (*pcVar2)();
  if (iVar5 != 0) {
    iVar5 = *(int *)(in_ECX + 0x14c);
    local_34.top = *(LONG *)(in_ECX + 0x78);
    local_34.right = *(LONG *)(in_ECX + 0x7c);
    local_34.left = (local_34.right - iVar5) - local_150._4_4_;
    if ((*(int *)(in_ECX + 0x10c) == 0) && (*(int *)(in_ECX + 0xc4) == 0)) {
      local_34.left = local_34.left + -2;
    }
    local_34.bottom = *(int *)(in_ECX + 0x80) - iVar5;
    if (*(int *)(in_ECX + 0x168) != 0) {
      *(undefined4 *)(in_ECX + 0x124) = *(undefined4 *)(in_ECX + 0x74);
      *(undefined4 *)(in_ECX + 0x128) = *(undefined4 *)(in_ECX + 0x78);
      *(undefined4 *)(in_ECX + 300) = *(undefined4 *)(in_ECX + 0x7c);
      *(undefined4 *)(in_ECX + 0x130) = *(undefined4 *)(in_ECX + 0x80);
      *(undefined4 *)(in_ECX + 0x134) = *(undefined4 *)(in_ECX + 0x74);
      iVar5 = ((*(int *)(in_ECX + 300) - iVar5) - local_150._4_4_) + -1;
      *(int *)(in_ECX + 0x124) = iVar5;
      *(undefined4 *)(in_ECX + 0x138) = *(undefined4 *)(in_ECX + 0x78);
      *(undefined4 *)(in_ECX + 0x13c) = *(undefined4 *)(in_ECX + 0x7c);
      *(undefined4 *)(in_ECX + 0x140) = *(undefined4 *)(in_ECX + 0x80);
      *(int *)(in_ECX + 0x13c) = iVar5;
      *(undefined4 *)(in_ECX + 0x170) = 0;
    }
  }
  pcVar2 = *(code **)(*(int *)in_ECX + 0x114);
  guard_check_icall(&local_180,0);
  (*pcVar2)();
  pcVar2 = *(code **)(*(int *)in_ECX + 0x114);
  guard_check_icall(local_198,1);
  (*pcVar2)();
  local_44 = *(int *)(in_ECX + 0x74);
  local_40 = *(int *)(in_ECX + 0x78);
  local_3c = *(int *)(in_ECX + 0x7c);
  uStack_38 = *(undefined4 *)(in_ECX + 0x80);
  pcVar2 = *(code **)(*(int *)in_ECX + 0x250);
  guard_check_icall();
  iVar5 = (*pcVar2)();
  if (((iVar5 != 0) || (*(int *)(in_ECX + 0xc4) != 0)) ||
     (local_160 = 1, *(int *)(in_ECX + 0xc0) != 0)) {
    local_160 = 0;
  }
  if (((*(int *)(in_ECX + 0xc4) == 0) && (*(int *)(in_ECX + 0xc0) == 0)) &&
     (*(int *)(in_ECX + 0xb8) == 0)) {
    if (((local_180 != 0) || (local_17c != 0)) &&
       ((*(int *)(in_ECX + 0x170) == 0 && (*(int *)(in_ECX + 400) != 0)))) {
      lprc = (RECT *)(in_ECX + 0x124);
      BVar4 = IsRectEmpty(lprc);
      if (BVar4 == 0) {
        iVar5 = lprc->left - local_150._4_4_;
        lprc->left = iVar5;
        *(int *)(in_ECX + 0x13c) = iVar5;
      }
      OffsetRect(&local_34,-(local_150._4_4_ / 2),0);
    }
  }
  else {
    local_160 = 0;
  }
  uVar11 = (uint)(*(int *)(in_ECX + 400) == 0);
  pcVar2 = *(code **)(*(int *)in_ECX + 0x114);
  piVar13 = &local_148;
  local_168 = uVar11;
  guard_check_icall(piVar13,uVar11);
  (*pcVar2)();
  local_15c = (double)(ulonglong)(uint)local_15c;
  if ((((*(int *)(in_ECX + 0xc4) != 0) || (*(int *)(in_ECX + 0xc0) != 0)) && (local_148 == 0)) &&
     (local_144 == 0)) {
    local_148 = 0x10;
    local_144 = 0x10;
    pAVar8 = GetGlobalData();
    if (*(int *)(pAVar8 + 0x1e8) == 0) {
      dVar1 = 1.0;
    }
    else {
      dVar1 = *(double *)(pAVar8 + 0x1e0);
    }
    if (dVar1 != 1.0) {
      GetGlobalData();
      local_15c = (double)local_148;
      local_148 = FUN_101804f0();
      GetGlobalData();
      local_15c = (double)local_144;
      local_144 = FUN_101804f0();
    }
    local_15c = (double)CONCAT44(1,(uint)local_15c);
  }
  local_24.left = *(LONG *)(in_ECX + 0x74);
  local_24.top = *(LONG *)(in_ECX + 0x78);
  local_24.right = *(LONG *)(in_ECX + 0x7c);
  local_24.bottom = *(LONG *)(in_ECX + 0x80);
  InflateRect(&local_24,-*(int *)(in_ECX + 0x11c),-*(int *)(in_ECX + 0x120));
  pcVar2 = *(code **)(*(int *)in_ECX + 0x250);
  guard_check_icall(piVar13,uVar11);
  iVar5 = (*pcVar2)();
  if (iVar5 == 0) {
    if ((*(int *)(in_ECX + 400) != 0) && (*(int *)(in_ECX + 0xb0) == 0)) {
      local_24.left = (local_24.right + local_24.left) / 2 - local_148 / 2;
      local_24.top = *(int *)(in_ECX + 0x120) + local_24.top + 1;
      if (local_160 != 0) goto LAB_10105278;
    }
    local_24.top = (local_24.bottom + local_24.top) / 2 - local_144 / 2;
  }
  else {
    pAVar8 = GetGlobalData();
    if (*(int *)(pAVar8 + 0x1e8) == 0) {
      dVar1 = 1.0;
    }
    else {
      dVar1 = *(double *)(pAVar8 + 0x1e0);
    }
    if (dVar1 != 1.0) {
      GetGlobalData();
      local_150 = (double)local_148;
      local_148 = FUN_101804f0();
      GetGlobalData();
      local_150 = (double)local_144;
      local_144 = FUN_101804f0();
    }
    local_24.left = local_24.left + ((local_24.right - local_24.left) - local_148) / 2;
    local_24.top = local_24.top + ((local_24.bottom - local_24.top) - local_144) / 2;
    pCVar9 = CMFCVisualManager::GetInstance();
    OffsetRect(&local_24,*(int *)(pCVar9 + 0xac),*(int *)(pCVar9 + 0xb0));
  }
LAB_10105278:
  local_24.right = local_24.left + local_148;
  local_24.bottom = local_144 + local_24.top;
  if ((*(int *)(in_ECX + 400) != 0) && (*(int *)(in_ECX + 0xb0) == 0)) {
    pcVar2 = *(code **)(*(int *)in_ECX + 0x138);
    guard_check_icall();
    iVar5 = (*pcVar2)();
    if ((iVar5 != 0) && (*(int *)(in_ECX + 0x168) != 0)) {
      *(undefined4 *)(in_ECX + 0x170) = 1;
      *(undefined4 *)(in_ECX + 0x124) = *(undefined4 *)(in_ECX + 0x74);
      *(undefined4 *)(in_ECX + 0x128) = *(undefined4 *)(in_ECX + 0x78);
      *(undefined4 *)(in_ECX + 300) = *(undefined4 *)(in_ECX + 0x7c);
      *(undefined4 *)(in_ECX + 0x130) = *(undefined4 *)(in_ECX + 0x80);
      *(LONG *)(in_ECX + 0x128) = local_24.bottom + 3;
      *(undefined4 *)(in_ECX + 0x134) = *(undefined4 *)(in_ECX + 0x74);
      *(undefined4 *)(in_ECX + 0x138) = *(undefined4 *)(in_ECX + 0x78);
      *(undefined4 *)(in_ECX + 0x13c) = *(undefined4 *)(in_ECX + 0x7c);
      *(undefined4 *)(in_ECX + 0x140) = *(undefined4 *)(in_ECX + 0x80);
      *(LONG *)(in_ECX + 0x140) = local_24.bottom + 3;
    }
  }
  local_150 = (double)CONCAT44(0xffffffff,(undefined4)local_150);
  pcVar2 = *(code **)(*(int *)in_ECX + 0x250);
  guard_check_icall();
  iVar5 = (*pcVar2)();
  if (iVar5 == 0) {
    pcVar2 = *(code **)(*(int *)in_ECX + 0x270);
    guard_check_icall(local_140);
    uVar7 = (*pcVar2)();
    local_150 = (double)CONCAT44(uVar7,(undefined4)local_150);
  }
  iVar5 = CMFCRibbonBaseElement::IsMenuMode(in_ECX);
  if (iVar5 != 0) {
    pcVar2 = *(code **)(*(int *)in_ECX + 0xe0);
    guard_check_icall();
    iVar5 = (*pcVar2)();
    if ((iVar5 != 0) && ((local_148 != 0 || (local_144 != 0)))) {
      pCVar9 = CMFCVisualManager::GetInstance();
      pcVar2 = *(code **)(*(int *)pCVar9 + 0x244);
      guard_check_icall(local_140,local_154,local_24.left,local_24.top,local_24.right,
                        local_24.bottom);
      (*pcVar2)();
      in_ECX = local_154;
    }
  }
  if (local_15c._4_4_ == 0) {
    pAVar8 = GetGlobalData();
    local_15c = (double)CONCAT44(*(undefined4 *)(pAVar8 + 0x1e8),(uint)local_15c);
    iVar5 = CMFCRibbonBaseElement::IsMenuMode(in_ECX);
    if (((iVar5 != 0) && (*(int *)(in_ECX + 400) == 0)) &&
       ((*(CMFCRibbonPanelMenuBar **)(in_ECX + 0x94) == (CMFCRibbonPanelMenuBar *)0x0 ||
        (iVar5 = CMFCRibbonPanelMenuBar::IsMainPanel(*(CMFCRibbonPanelMenuBar **)(in_ECX + 0x94)),
        iVar5 == 0)))) {
      pAVar8 = GetGlobalData();
      *(undefined4 *)(pAVar8 + 0x1e8) = 0;
    }
    pcVar2 = *(code **)(*(int *)in_ECX + 0x120);
    guard_check_icall(local_140,local_168,local_24.left,local_24.top,local_24.right,local_24.bottom)
    ;
    (*pcVar2)();
    pAVar8 = GetGlobalData();
    *(IMAGES_IDS *)(pAVar8 + 0x1e8) = local_15c._4_4_;
  }
  else {
    pCVar9 = CMFCVisualManager::GetInstance();
    pcVar2 = *(code **)(*(int *)pCVar9 + 0x268);
    guard_check_icall(local_140,local_24.left,local_24.top,local_24.right,local_24.bottom,
                      *(undefined4 *)(local_154 + 0xd4),*(undefined4 *)(local_154 + 0xd0),
                      *(undefined4 *)(local_154 + 200));
    (*pcVar2)();
    in_ECX = local_154;
  }
  if (local_160 != 0) {
    local_15c = (double)((ulonglong)local_15c & 0xffffffff);
    local_44 = *(int *)(in_ECX + 0x74);
    local_40 = *(int *)(in_ECX + 0x78);
    local_3c = *(int *)(in_ECX + 0x7c);
    uStack_38 = *(undefined4 *)(in_ECX + 0x80);
    local_154 = (CMFCRibbonBaseElement *)0xffffffff;
    iVar5 = local_150._4_4_;
    if ((local_164 == 0) ||
       ((*(int *)(in_ECX + 0x168) == 0 &&
        ((*(int *)(in_ECX + 0xa4) == 0 || (*(int *)(in_ECX + 0xa4) == -1)))))) {
      pCVar12 = local_140;
      if (local_150._4_4_ != -1) goto LAB_10105517;
    }
    else if (*(int *)(in_ECX + 0xc4) == 0) {
      if (local_150._4_4_ == -1) {
        pCVar9 = CMFCVisualManager::GetInstance();
        pcVar2 = *(code **)(*(int *)pCVar9 + 0xc4);
        guard_check_icall();
        iVar5 = (*pcVar2)();
        local_150 = (double)CONCAT44(iVar5,(undefined4)local_150);
      }
LAB_10105517:
      pCVar12 = local_140;
      pcVar2 = *(code **)(*(int *)local_140 + 0x30);
      guard_check_icall(iVar5);
      local_154 = (CMFCRibbonBaseElement *)(*pcVar2)();
    }
    else {
      pCVar9 = CMFCVisualManager::GetInstance();
      pcVar2 = *(code **)(*(int *)pCVar9 + 0x25c);
      guard_check_icall(1);
      (*pcVar2)();
      pCVar12 = local_140;
    }
    if ((*(int *)(in_ECX + 400) == 0) || (*(int *)(in_ECX + 0xb0) != 0)) {
      local_44 = local_24.right;
      if (*(int *)(in_ECX + 0xac) < 1) {
        if (local_148 != 0) {
          pcVar2 = *(code **)(*(int *)in_ECX + 0x278);
          guard_check_icall();
          iVar5 = (*pcVar2)();
          local_44 = local_44 + iVar5;
        }
      }
      else {
        local_44 = *(int *)(in_ECX + 0x11c) * 3 + *(int *)(in_ECX + 0xac) + *(int *)(in_ECX + 0x74);
      }
      if ((*(int *)(in_ECX + 0x18c) == 0) || (*(int *)(*(int *)(in_ECX + 0x70) + -0xc) == 0)) {
        uVar7 = 0x8024;
      }
      else {
        iVar5 = *(int *)pCVar12;
        pAVar8 = GetGlobalData();
        guard_check_icall(pAVar8 + 300);
        iVar5 = (**(code **)(iVar5 + 0x28))();
        local_15c = (double)CONCAT44(iVar5,(uint)local_15c);
        if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1004a383();
        }
        if (((*(int *)(in_ECX + 0x80) - *(int *)(in_ECX + 0x78)) - *(int *)(in_ECX + 0x110)) / 2 < 0
           ) {
          iVar5 = 0;
        }
        else {
          iVar5 = ((*(int *)(in_ECX + 0x80) - *(int *)(in_ECX + 0x78)) - *(int *)(in_ECX + 0x110)) /
                  2;
        }
        local_40 = local_40 + iVar5;
        uVar7 = 0x8020;
      }
      pCVar12 = local_140;
      pcVar2 = *(code **)(*(int *)in_ECX + 0x260);
      guard_check_icall(local_140,in_ECX + 0x60,local_44,local_40,local_3c,uStack_38,uVar7,
                        0xffffffff);
      iVar5 = (*pcVar2)();
      local_150 = (double)CONCAT44(iVar5,(undefined4)local_150);
      if (local_15c._4_4_ != 0) {
        pcVar2 = *(code **)(*(int *)pCVar12 + 0x28);
        guard_check_icall(local_15c._4_4_);
        (*pcVar2)();
        iVar5 = local_150._4_4_;
      }
      if ((*(int *)(in_ECX + 0x18c) != 0) && (*(int *)(*(int *)(in_ECX + 0x70) + -0xc) != 0)) {
        iVar6 = *(int *)pCVar12;
        local_40 = local_40 + *(int *)(in_ECX + 0x120) + iVar5;
        local_3c = *(int *)(in_ECX + 0x7c) - *(int *)(in_ECX + 0x11c);
        guard_check_icall(*(int *)(in_ECX + 0x70),*(undefined4 *)(*(int *)(in_ECX + 0x70) + -0xc),
                          &local_44,0x8010);
        (**(code **)(iVar6 + 0x68))();
      }
      if ((local_150._4_4_ == *(int *)(in_ECX + 0x110)) && (*(int *)(in_ECX + 400) != 0)) {
        pcVar2 = *(code **)(*(int *)in_ECX + 0x138);
        guard_check_icall();
        iVar5 = (*pcVar2)();
        pCVar12 = local_140;
        if (iVar5 != 0) {
          local_34.left = *(LONG *)(in_ECX + 0x74);
          local_34.top = *(LONG *)(in_ECX + 0x78);
          local_34.right = *(LONG *)(in_ECX + 0x7c);
          local_34.bottom = *(LONG *)(in_ECX + 0x80);
          InflateRect(&local_34,-*(int *)(in_ECX + 0x14c),*(int *)(in_ECX + 0x14c) * -2);
          local_34.right = local_34.right + -2;
          iVar5 = FUN_100b0af4(local_1a8);
          local_34.top = local_34.bottom - *(int *)(iVar5 + 4);
          iVar5 = FUN_100b0af4(local_1b0);
          local_34.bottom = *(int *)(iVar5 + 4) + local_34.top;
          pCVar12 = local_140;
        }
      }
    }
    else {
      FUN_10102a5e(local_1a0,pCVar12,0);
      SetRectEmpty(&local_34);
    }
    if (local_154 != (CMFCRibbonBaseElement *)0xffffffff) {
      pcVar2 = *(code **)(*(int *)pCVar12 + 0x30);
      guard_check_icall(local_154);
      (*pcVar2)();
    }
  }
  pcVar2 = *(code **)(*(int *)in_ECX + 0x250);
  guard_check_icall();
  iVar5 = (*pcVar2)();
  if (iVar5 == 0) {
    BVar4 = IsRectEmpty(&local_34);
    pCVar12 = local_140;
    if (BVar4 == 0) {
      local_15c = (double)((ulonglong)local_15c & 0xffffffff);
      iVar5 = CMFCRibbonBaseElement::IsMenuMode(in_ECX);
      if (iVar5 != 0) {
        uVar11 = 0;
        this = CMFCRibbonBaseElement::GetTopLevelRibbonBar(in_ECX);
        if ((this != (CMFCRibbonBar *)0x0) && (*(int *)(this + 0x20) != 0)) {
          uVar10 = CWnd::GetExStyle((CWnd *)this);
          uVar11 = uVar10 & 0x400000;
        }
        local_15c = (double)CONCAT44((-(uint)(uVar11 != 0) & 3) + 0xe,(uint)local_15c);
      }
      local_54.left = local_34.left;
      local_54.top = local_34.top;
      local_54.right = local_34.right;
      local_54.bottom = local_34.bottom;
      OffsetRect(&local_54,0,1);
      pCVar12 = local_140;
      local_188 = 0;
      local_184 = 0;
      IVar3 = local_15c._4_4_;
      CMenuImages::Draw(local_140,local_15c._4_4_,(CRect *)&local_54,3,(CSize *)&local_188);
      local_190 = 0;
      local_18c = 0;
      CMenuImages::Draw(pCVar12,IVar3,(CRect *)&local_34,(uint)(*(int *)(in_ECX + 0xd4) != 0),
                        (CSize *)&local_190);
    }
    pcVar2 = *(code **)(*(int *)in_ECX + 0x274);
    guard_check_icall(pCVar12);
    (*pcVar2)();
  }
  *(int *)(in_ECX + 0xd4) = local_164;
  *(undefined4 *)(in_ECX + 0xe0) = local_16c;
  *(undefined4 *)(in_ECX + 200) = local_170;
  *(undefined4 *)(in_ECX + 0x174) = local_174;
  *(undefined4 *)(in_ECX + 0x178) = local_178;
LAB_101058aa:
  FUN_1018015d();
  return;
}

