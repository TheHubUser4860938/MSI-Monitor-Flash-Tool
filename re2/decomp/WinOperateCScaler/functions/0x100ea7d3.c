// rea decompile_all
// name: CMFCAutoHideButton::OnDraw
// address: 0x100ea7d3
// body: available
// range: 0x100ea7d3-0x100ead18 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100eac22 to 0x1001d023 FUN_1001d023 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCAutoHideButton::OnDraw(class CDC *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCAutoHideButton::OnDraw(CMFCAutoHideButton *this,CDC *param_1)

{
  code *pcVar1;
  LPRECT ptVar2;
  CMFCAutoHideButton *pCVar3;
  CMFCVisualManager *pCVar4;
  int iVar5;
  uint uVar6;
  AFX_GLOBAL_DATA *pAVar7;
  int iVar8;
  undefined4 uVar9;
  tagRECT *ptVar10;
  HDC hdc;
  CDC *pCVar11;
  int iVar12;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  LPRECT local_9c;
  CMFCAutoHideButton *local_98;
  CDC *local_94;
  tagTEXTMETRICW local_90;
  tagRECT local_54;
  tagRECT local_44;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xa0;
  local_8 = 0x100ea7e2;
  local_94 = param_1;
  local_98 = this;
  pCVar4 = CMFCVisualManager::GetInstance();
  pcVar1 = *(code **)(*(int *)pCVar4 + 0x1ac);
  guard_check_icall();
  iVar5 = (*pcVar1)();
  if (iVar5 == 0) {
    local_a8 = DAT_10201a28;
  }
  else {
    local_a8 = (-(uint)((*(uint *)(this + 0x10) & 0xa000) != 0) & 0xfffffffe) + 7;
  }
  local_a0 = iVar5;
  GetSize(this);
  local_9c = (LPRECT)(this + 0x18);
  SetRect(local_9c,0,0,local_b0,local_ac);
  local_34 = DAT_10201a20;
  local_2c = DAT_10201a20;
  local_28 = DAT_10201a20;
  uVar6 = *(uint *)(this + 0x10) & 0xf000;
  local_30 = 0;
  if (uVar6 == 0x1000) {
    iVar12 = -0x5a;
LAB_100ea8aa:
    CGlobalUtils::FlipRect((CGlobalUtils *)&PTR_vftable_1020194c,(CRect *)&local_34,iVar12);
  }
  else {
    if (uVar6 == 0x4000) {
      iVar12 = 0x5a;
      goto LAB_100ea8aa;
    }
    if (uVar6 == 0x8000) {
      iVar12 = 0xb4;
      goto LAB_100ea8aa;
    }
  }
  if ((iVar5 != 0) && (*(int *)(*(int *)(this + 0x28) + 0x114) == 0)) {
    uVar6 = *(uint *)(this + 0x10) & 0xf000;
    local_44.left = *(LONG *)(this + 0x18);
    local_44.top = *(LONG *)(this + 0x1c);
    local_44.right = *(LONG *)(this + 0x20);
    local_44.bottom = *(LONG *)(this + 0x24);
    if (uVar6 == 0x1000) {
LAB_100ea918:
      iVar12 = (*(int *)(this + 0x1c) - *(int *)(this + 0x24)) + local_b0 / 2;
      iVar5 = 0;
LAB_100ea92e:
      OffsetRect(&local_44,iVar5,iVar12);
    }
    else {
      if (uVar6 == 0x2000) {
LAB_100ea902:
        iVar5 = (local_ac / 2 - *(int *)(this + 0x20)) + *(int *)(this + 0x18);
        iVar12 = 0;
        goto LAB_100ea92e;
      }
      if (uVar6 == 0x4000) goto LAB_100ea918;
      if (uVar6 == 0x8000) goto LAB_100ea902;
    }
    iVar5 = *(int *)this;
    guard_check_icall(local_94,local_44.left,local_44.top,local_44.right,local_44.bottom);
    pCVar3 = local_98;
    (**(code **)(iVar5 + 0x24))();
    iVar5 = *(int *)pCVar3;
    guard_check_icall(local_94,local_44.left,local_44.top,local_44.right,local_44.bottom,local_34,
                      local_30,local_2c,local_28);
    (**(code **)(iVar5 + 0x28))();
    this = local_98;
  }
  iVar5 = *(int *)this;
  guard_check_icall(local_94,local_9c->left,local_9c->top,local_9c->right,local_9c->bottom);
  pCVar3 = local_98;
  (**(code **)(iVar5 + 0x24))();
  iVar5 = *(int *)pCVar3;
  guard_check_icall(local_94,local_9c->left,local_9c->top,local_9c->right,local_9c->bottom,local_34,
                    local_30,local_2c,local_28);
  (**(code **)(iVar5 + 0x28))();
  pCVar3 = local_98;
  iVar5 = local_a0;
  if (*(int *)(local_98 + 0x2c) == 0) goto LAB_100ead11;
  local_24.left = *(LONG *)(local_98 + 0x18);
  local_24.top = *(LONG *)(local_98 + 0x1c);
  local_24.right = *(LONG *)(local_98 + 0x20);
  local_24.bottom = *(LONG *)(local_98 + 0x24);
  if (local_a0 == 0) {
    local_24.left = local_24.left + local_34;
    local_24.top = local_24.top + local_30;
    local_24.right = local_24.right - local_2c;
    local_24.bottom = local_24.bottom - local_28;
  }
  InflateRect(&local_24,-DAT_10201a24,-DAT_10201a24);
  if (iVar5 != 0) {
    if ((*(uint *)(pCVar3 + 0x10) & 0xa000) == 0) {
      iVar12 = ((local_24.right - local_24.left) * 2) / -3;
      iVar5 = 0;
    }
    else {
      iVar12 = 0;
      iVar5 = ((local_24.bottom - local_24.top) * 2) / -3;
    }
    InflateRect(&local_24,iVar5,iVar12);
  }
  if (*(int **)(pCVar3 + 0x2c) == (int *)0x0) goto LAB_100ead11;
  pcVar1 = *(code **)(**(int **)(pCVar3 + 0x2c) + 0x1bc);
  guard_check_icall(0);
  local_9c = (LPRECT)(*pcVar1)();
  if (local_9c == (LPRECT)0x0) {
    iVar5 = DAT_10201a24;
    pCVar11 = local_94;
    if ((*(uint *)(pCVar3 + 0x10) & 0xa000) == 0) goto LAB_100eab67;
    local_24.left = local_24.left + DAT_10201a24;
  }
  else {
    pAVar7 = GetGlobalData();
    pCVar11 = local_94;
    iVar5 = *(int *)(pAVar7 + 0x114);
    local_a0 = *(int *)(pAVar7 + 0x118);
    if ((*(uint *)(pCVar3 + 0x10) & 0xa000) == 0) {
      iVar12 = ((local_24.right - local_24.left) - iVar5) / 2;
      iVar8 = 0;
    }
    else {
      iVar12 = 0;
      iVar8 = ((local_24.bottom - local_24.top) - local_a0) / 2;
    }
    if (local_94 == (CDC *)0x0) {
      hdc = (HDC)0x0;
    }
    else {
      hdc = *(HDC *)(local_94 + 4);
    }
    DrawIconEx(hdc,local_24.left + iVar12,iVar8 + local_24.top,(HICON)local_9c,iVar5,local_a0,0,
               (HBRUSH)0x0,3);
    if ((*(uint *)(pCVar3 + 0x10) & 0xa000) == 0) {
      iVar5 = local_a8 + local_a0;
LAB_100eab67:
      local_24.top = local_24.top + iVar5;
    }
    else {
      local_24.left = local_24.left + local_a8 + iVar5;
    }
  }
  ptVar2 = local_9c;
  uVar9 = FUN_1001e20a();
  FUN_1001d224(uVar9);
  local_8 = 0;
  CWnd::GetWindowTextW
            (*(CWnd **)(pCVar3 + 0x2c),
             (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_a4);
  if ((((*(int *)(local_a4 + -0xc) != 0) && (*(int *)(*(int *)(pCVar3 + 0x28) + 0x11c) != 0)) ||
      (ptVar2 == (LPRECT)0x0)) || (DAT_10201a30 == 0)) {
    local_9c = (LPRECT)CDC::SetBkMode(pCVar11,1);
    if ((*(uint *)(pCVar3 + 0x10) & 0xa000) == 0) {
      pAVar7 = GetGlobalData();
      pAVar7 = pAVar7 + 0x14c;
    }
    else {
      pAVar7 = GetGlobalData();
      pAVar7 = pAVar7 + 0x11c;
    }
    pcVar1 = *(code **)(*(int *)pCVar11 + 0x28);
    guard_check_icall(pAVar7);
    iVar5 = (*pcVar1)();
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1001d023();
    }
    pCVar4 = CMFCVisualManager::GetInstance();
    iVar12 = *(int *)local_94;
    pcVar1 = *(code **)(*(int *)pCVar4 + 0x1b8);
    guard_check_icall(local_98);
    uVar9 = (*pcVar1)();
    guard_check_icall(uVar9);
    pCVar11 = local_94;
    (**(code **)(iVar12 + 0x30))();
    if ((*(uint *)(local_98 + 0x10) & 0xa000) == 0) {
      GetTextMetricsW(*(HDC *)(pCVar11 + 8),&local_90);
      local_54.top = local_24.top;
      local_54.left =
           local_24.right - (((local_24.right - local_90.tmHeight) - local_24.left) + 1) / 2;
      local_54.bottom = local_24.top + local_a8;
      uVar9 = 0x124;
      local_54.right = local_24.right;
      ptVar10 = &local_54;
      pCVar11 = local_94;
    }
    else {
      uVar9 = 0x24;
      ptVar10 = &local_24;
    }
    iVar12 = *(int *)pCVar11;
    guard_check_icall(local_a4,*(undefined4 *)(local_a4 + -0xc),ptVar10,uVar9);
    (**(code **)(iVar12 + 0x68))();
    pcVar1 = *(code **)(*(int *)pCVar11 + 0x28);
    guard_check_icall(iVar5);
    (*pcVar1)();
    CDC::SetBkMode(pCVar11,(int)local_9c);
  }
  ATL::CStringData::Release((CStringData *)(local_a4 + -0x10));
LAB_100ead11:
  FUN_10154478();
  return;
}

