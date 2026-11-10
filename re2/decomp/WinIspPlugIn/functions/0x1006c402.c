// rea decompile_all
// name: CMFCButton::OnDraw
// address: 0x1006c402
// body: available
// range: 0x1006c402-0x1006c904 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006c593 to 0x1004a383 FUN_1004a383 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: virtual void __thiscall CMFCButton::OnDraw(class CDC *,class CRect const &,unsigned
   int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCButton::OnDraw(CMFCButton *this,CDC *param_1,CRect *param_2,uint param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  AFX_GLOBAL_DATA *pAVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  int *piVar9;
  BOOL BVar10;
  IMAGES_IDS IVar11;
  int iVar12;
  CDC *pCVar13;
  CDC *this_00;
  undefined1 local_64 [4];
  undefined4 local_60;
  uint local_5c;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> local_58 [4];
  CDC *local_54;
  CDC *local_50;
  int local_4c;
  uint local_48;
  tagRECT local_44;
  tagRECT local_34;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x5c;
  local_8 = 0x1006c40e;
  local_54 = param_1;
  local_34.left = *(LONG *)param_2;
  local_34.top = *(LONG *)(param_2 + 4);
  local_34.right = *(LONG *)(param_2 + 8);
  local_34.bottom = *(LONG *)(param_2 + 0xc);
  local_24.left = *(LONG *)param_2;
  local_24.top = *(LONG *)(param_2 + 4);
  local_24.right = *(LONG *)(param_2 + 8);
  local_24.bottom = *(LONG *)(param_2 + 0xc);
  uVar3 = FUN_10049868();
  FUN_100476a0(uVar3);
  local_8 = 0;
  CWnd::GetWindowTextW
            ((CWnd *)this,
             (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_4c);
  if (*(int *)(this + 0xe0) == 0) {
    SetRectEmpty(&local_24);
  }
  else {
    if (*(int *)(local_4c + -0xc) != 0) {
      if (*(int *)(this + 0x8c) == 0) {
        pcVar1 = *(code **)(*(int *)this + 400);
        if (*(int *)(this + 0x88) == 0) {
          guard_check_icall();
          iVar4 = (*pcVar1)();
          local_34.left = local_34.left + *(int *)(this + 0xe0) + iVar4 / 2;
          pcVar1 = *(code **)(*(int *)this + 400);
          guard_check_icall();
          iVar4 = (*pcVar1)();
          local_24.left = local_24.left + iVar4 / 2;
          local_24.right = local_34.left;
        }
        else {
          guard_check_icall();
          iVar4 = (*pcVar1)();
          local_34.right = local_34.right + (-*(int *)(this + 0xe0) - iVar4 / 2);
          pcVar1 = *(code **)(*(int *)this + 400);
          local_24.left = local_34.right;
          guard_check_icall();
          iVar4 = (*pcVar1)();
          local_24.right = local_24.right - iVar4 / 2;
        }
      }
      else {
        pcVar1 = *(code **)(*(int *)this + 0x194);
        guard_check_icall();
        iVar4 = (*pcVar1)();
        local_34.top = iVar4 + *(int *)(this + 0xe4) + local_24.top;
        pcVar1 = *(code **)(*(int *)this + 0x194);
        local_24.bottom = local_34.top;
        guard_check_icall();
        iVar4 = (*pcVar1)();
        local_34.bottom = local_34.bottom - iVar4;
      }
    }
    iVar4 = ((local_24.bottom - *(int *)(this + 0xe4)) - local_24.top) / 2;
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    InflateRect(&local_24,-(((local_24.right - *(int *)(this + 0xe0)) - local_24.left) / 2),-iVar4);
  }
  this_00 = local_54;
  pcVar1 = *(code **)(*(int *)this + 0x18c);
  guard_check_icall(local_54);
  iVar4 = (*pcVar1)();
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1004a383();
  }
  CDC::SetBkMode(this_00,1);
  local_50 = *(CDC **)(this + 0x798);
  if (local_50 == (CDC *)0xffffffff) {
    pAVar5 = GetGlobalData();
    local_50 = *(CDC **)(pAVar5 + 0x28);
  }
  if ((*(int *)(this + 0xb4) != 0) && (*(CDC **)(this + 0x79c) != (CDC *)0xffffffff)) {
    local_50 = *(CDC **)(this + 0x79c);
  }
  local_48 = 0x8000;
  iVar6 = FUN_10046b20(10,0);
  if (-1 < iVar6) {
    pcVar1 = *(code **)(*(int *)this + 0x194);
    guard_check_icall();
    iVar12 = (*pcVar1)();
    InflateRect(&local_34,0,-(iVar12 / 2));
    uVar7 = 0x8000;
  }
  else {
    uVar7 = 0x8024;
    local_48 = 0x8024;
  }
  iVar12 = *(int *)(this + 0x84);
  if (iVar12 == 0) {
    pcVar1 = *(code **)(*(int *)this + 400);
    guard_check_icall();
    iVar12 = (*pcVar1)();
    local_34.left = local_34.left + iVar12 / 2;
  }
  else if (iVar12 == 1) {
    local_48 = uVar7 | 2;
    pcVar1 = *(code **)(*(int *)this + 400);
    guard_check_icall();
    iVar12 = (*pcVar1)();
    local_34.right = local_34.right - iVar12 / 2;
  }
  else if (iVar12 == 2) {
    local_48 = uVar7 | 1;
  }
  uVar8 = CWnd::GetExStyle((CWnd *)this);
  if ((uVar8 & 0x400000) != 0) {
    local_48 = local_48 | 0x20000;
  }
  local_5c = param_3 & 4;
  if ((local_5c != 0) && (*(int *)(this + 0x9c) != 0)) {
    iVar12 = *(int *)this_00;
    pAVar5 = GetGlobalData();
    guard_check_icall(*(undefined4 *)(pAVar5 + 0x24));
    (**(code **)(iVar12 + 0x30))();
    local_44.left = local_34.left;
    local_44.top = local_34.top;
    local_44.right = local_34.right;
    local_44.bottom = local_34.bottom;
    OffsetRect(&local_44,1,1);
    this_00 = local_54;
    pcVar1 = *(code **)(*(int *)this + 0x188);
    guard_check_icall(local_54,&local_44,&local_4c,local_48,param_3);
    (*pcVar1)();
    pAVar5 = GetGlobalData();
    local_50 = *(CDC **)(pAVar5 + 0x38);
  }
  pcVar1 = *(code **)(*(int *)this_00 + 0x30);
  guard_check_icall(local_50);
  (*pcVar1)();
  if (*(int *)(this + 0xd8) != 0) {
    iVar12 = local_34.right - local_34.left;
    piVar9 = (int *)CDC::GetTextExtent(this_00,local_58);
    if ((*piVar9 <= iVar12) || (-1 < iVar6)) {
      local_4c = 0;
    }
    FUN_1006dbf2(local_4c);
    *(undefined4 *)(this + 0xd8) = 0;
  }
  pcVar1 = *(code **)(*(int *)this + 0x188);
  guard_check_icall(this_00,&local_34,&local_4c,local_48,param_3);
  (*pcVar1)();
  BVar10 = IsRectEmpty(&local_24);
  if (BVar10 != 0) goto LAB_1006c8df;
  IVar11 = *(IMAGES_IDS *)(this + 0x780);
  if (IVar11 != 0xffffffff) {
    if (((local_5c != 0) && (*(int *)(this + 0x9c) != 0)) && (*(IMAGES_IDS *)(this + 0x784) != 0)) {
      IVar11 = *(IMAGES_IDS *)(this + 0x784);
    }
    local_60 = 0;
    local_5c = 0;
    CMenuImages::Draw(this_00,IVar11,(CPoint *)&local_24,*(IMAGE_STATE *)(this + 0x788),
                      (CSize *)&local_60);
    goto LAB_1006c8df;
  }
  if ((local_5c == 0) || (*(int *)(this + 0x9c) == 0)) {
    bVar2 = false;
    local_48 = 0;
LAB_1006c809:
    if ((*(int *)(this + 0xb4) == 0) || (local_50 = (CDC *)0x550, *(int *)(this + 0x554) == 0)) {
      local_50 = (CDC *)0x438;
    }
  }
  else {
    bVar2 = true;
    local_48 = 1;
    if (*(int *)(this + 0x66c) == 0) goto LAB_1006c809;
    local_50 = (CDC *)0x668;
  }
  iVar6 = 1;
  if ((bVar2) && (*(int *)(this + 0x324) != 0)) {
    local_54 = (CDC *)0x320;
  }
  else if ((*(int *)(this + 0xb4) == 0) || (local_54 = (CDC *)0x208, *(int *)(this + 0x20c) == 0)) {
    local_54 = (CDC *)0xf0;
  }
  if ((*(int *)(this + 0xc0) == 0) ||
     (*(int *)((CMFCToolBarImages *)(local_50 + (int)this) + 4) == 0)) {
    if (*(int *)((CMFCToolBarImages *)(local_54 + (int)this) + 4) == 0) goto LAB_1006c8df;
    CMFCToolBarImages::PrepareDrawImage((CMFCToolBarImages *)(local_54 + (int)this),local_64,0,0,0);
    pCVar13 = local_54;
    if ((local_48 == 0) || (*(int *)(this + 0x324) != 0)) {
      iVar6 = 0;
    }
  }
  else {
    CMFCToolBarImages::PrepareDrawImage((CMFCToolBarImages *)(local_50 + (int)this),local_64,0,0,0);
    pCVar13 = local_50;
    if ((local_48 == 0) || (*(int *)(this + 0x66c) != 0)) {
      iVar6 = 0;
    }
  }
  CMFCToolBarImages::Draw
            ((CMFCToolBarImages *)(pCVar13 + (int)this),this_00,local_24.left,local_24.top,0,0,iVar6
             ,0,0,0,0xff);
  FUN_10087c8a(local_64);
LAB_1006c8df:
  pcVar1 = *(code **)(*(int *)this_00 + 0x28);
  guard_check_icall(iVar4);
  (*pcVar1)();
  FUN_100476d0();
  FUN_1018015d();
  return;
}

