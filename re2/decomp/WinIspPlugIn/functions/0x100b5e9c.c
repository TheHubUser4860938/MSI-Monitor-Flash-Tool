// rea decompile_all
// name: CMFCPopupMenu::Create
// address: 0x100b5e9c
// body: available
// range: 0x100b5e9c-0x100b621d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100b5ebf to 0x1004a383 FUN_1004a383 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    public: virtual int __thiscall CMFCPopupMenu::Create(class CWnd *,int,int,struct HMENU__
   *,int,int)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CMFCPopupMenu::Create
          (CMFCPopupMenu *this,CWnd *param_1,int param_2,int param_3,HMENU__ *param_4,int param_5,
          int param_6)

{
  code *pcVar1;
  bool bVar2;
  HCURSOR pHVar3;
  ulong uVar4;
  ANIMATION_TYPE AVar5;
  CMFCPopupMenu *pCVar6;
  CWnd *pCVar7;
  CWnd *pCVar8;
  BOOL BVar9;
  int iVar10;
  int *piVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 local_3c;
  tagRECT local_34;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x30;
  local_8 = 0x100b5ea8;
  FUN_101240b7(2);
  if (param_1 == (CWnd *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1004a383();
  }
  uVar13 = 0;
  uVar12 = 0x10;
  pHVar3 = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f00);
  uVar12 = AfxRegisterWndClass(0x800,pHVar3,uVar12,uVar13);
  FUN_10047180(uVar12);
  *(HMENU__ **)(this + 0xf34) = param_4;
  local_8 = 0;
  if ((param_2 == -1) && (param_3 == -1)) {
    if (param_1 != (CWnd *)0x0) {
      local_34.left = 0;
      local_34.top = 0;
      local_34.right = 0;
      local_34.bottom = 0;
      GetClientRect(*(HWND *)(param_1 + 0x20),&local_34);
      CWnd::ClientToScreen(param_1,&local_34);
      *(LONG *)(this + 0x138) = local_34.left + 5;
      iVar10 = local_34.top + 5;
      goto LAB_100b5f53;
    }
    *(undefined4 *)(this + 0x138) = 0;
    *(undefined4 *)(this + 0x13c) = 0;
  }
  else {
    *(int *)(this + 0x138) = param_2;
    iVar10 = param_3;
LAB_100b5f53:
    *(int *)(this + 0x13c) = iVar10;
  }
  *(undefined4 *)(this + 0x140) = *(undefined4 *)(this + 0x138);
  *(undefined4 *)(this + 0x144) = *(undefined4 *)(this + 0x13c);
  iVar10 = (-(uint)(*(int *)(this + 0x154) != 0) & 0xc80000) + 0x80000000;
  if (((param_1 != (CWnd *)0x0) && (*(int *)(param_1 + 0x20) != 0)) &&
     (uVar4 = CWnd::GetExStyle(param_1), (uVar4 & 0x400000) != 0)) {
    *(undefined4 *)(this + 0xf78) = 1;
  }
  if (*(int *)(this + 0xf78) != 0) {
    *(undefined4 *)(this + 0xf74) = 1;
  }
  AVar5 = GetAnimationType(0);
  if (((AVar5 == 0) || (DAT_10245ca8 != 0)) || (*(int *)(this + 0xf78) != 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  pCVar6 = GetParentPopupMenu(this);
  if (pCVar6 != (CMFCPopupMenu *)0x0) {
    *(undefined4 *)(this + 0xf3c) = *(undefined4 *)(pCVar6 + 0xf3c);
  }
  if (param_6 == 0) {
    if (pCVar6 != (CMFCPopupMenu *)0x0) {
      *(undefined4 *)(this + 0x134) = *(undefined4 *)(pCVar6 + 0x134);
    }
  }
  else {
    *(CWnd **)(this + 0x134) = param_1;
  }
  local_24 = param_2;
  local_1c = param_2;
  local_20 = param_3;
  local_18 = param_3;
  pCVar7 = CWnd::GetOwner(param_1);
  pCVar8 = param_1;
  if (pCVar7 != (CWnd *)0x0) {
    pCVar8 = CWnd::GetOwner(param_1);
  }
  uVar13 = 0;
  piVar11 = &local_24;
  uVar12 = *(undefined4 *)(this + 0x150);
  uVar4 = CWnd::GetExStyle(param_1);
  iVar10 = CreateEx(uVar4 & 0x400000,local_3c,uVar12,iVar10,piVar11,pCVar8,uVar13);
  if (iVar10 == 0) {
    FUN_100476d0();
    goto LAB_100b6216;
  }
  if (*(int *)(this + 0xf44) != 0) {
    *(int *)(this + 0x138) = *(int *)(this + 0x138) + (1 - *(int *)(this + 0x148));
    *(undefined4 *)(this + 0x140) = *(undefined4 *)(this + 0x138);
    *(undefined4 *)(this + 0x144) = *(undefined4 *)(this + 0x13c);
    pcVar1 = *(code **)(*(int *)this + 0x178);
    guard_check_icall(1);
    (*pcVar1)();
  }
  pcVar1 = *(code **)(*(int *)this + 0x1c8);
  guard_check_icall();
  pCVar8 = (CWnd *)(*pcVar1)();
  *(int *)(pCVar8 + 0xb78) = param_5;
  *(undefined4 *)(pCVar8 + 0xd80) = *(undefined4 *)(this + 0xf80);
  if (bVar2) {
    *(int *)(this + 0xf64) = *(int *)(this + 0x148) + *(int *)(this + 0x105c);
    *(int *)(this + 0xf68) = *(int *)(this + 0x14c) + *(int *)(this + 0x105c);
    AVar5 = GetAnimationType(0);
    if (AVar5 == 1) {
      pcVar1 = *(code **)(*(int *)pCVar8 + 0x358);
      guard_check_icall();
      uVar12 = (*pcVar1)();
      *(undefined4 *)(this + 0xf64) = uVar12;
LAB_100b6148:
      pcVar1 = *(code **)(*(int *)pCVar8 + 0x354);
      guard_check_icall();
      uVar12 = (*pcVar1)();
      *(undefined4 *)(this + 0xf68) = uVar12;
    }
    else if (AVar5 == 2) goto LAB_100b6148;
    BVar9 = IsWindowVisible(*(HWND *)(pCVar8 + 0x20));
    if (BVar9 != 0) {
      CWnd::ShowWindow(pCVar8,0);
    }
    SetTimer(*(HWND *)(this + 0x20),0xec15,DAT_1023d774,(TIMERPROC)0x0);
    _DAT_102470d4 = _clock();
  }
  UpdateBottomWindows(this,0);
  if (((*(int *)(this + 0x105c) == 0) && (AVar5 = GetAnimationType(0), AVar5 == 3)) && (bVar2)) {
    *(undefined4 *)(this + 0xf64) = *(undefined4 *)(this + 0x148);
    *(undefined4 *)(this + 0xf68) = *(undefined4 *)(this + 0x14c);
  }
  CWnd::SetWindowPos((CWnd *)this,(CWnd *)&DAT_10245040,-1,-1,-1,-1,0x53);
  if (DAT_10245ca8 != 0) {
    InvalidateRect(*(HWND *)(pCVar8 + 0x20),(RECT *)0x0,1);
    UpdateWindow(*(HWND *)(pCVar8 + 0x20));
  }
  FUN_100476d0();
LAB_100b6216:
  iVar10 = FUN_1018015d();
  return iVar10;
}

