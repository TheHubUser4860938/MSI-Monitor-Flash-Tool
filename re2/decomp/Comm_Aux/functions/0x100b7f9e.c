// rea decompile_all
// name: CMFCPopupMenu::OnTimer
// address: 0x100b7f9e
// body: available
// range: 0x100b7f9e-0x100b8293 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    protected: void __thiscall CMFCPopupMenu::OnTimer(unsigned int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCPopupMenu::OnTimer(CMFCPopupMenu *this,uint param_1)

{
  code *pcVar1;
  POINT pt;
  POINT pt_00;
  CMFCPopupMenuBar *this_00;
  BOOL BVar2;
  int iVar3;
  ANIMATION_TYPE AVar4;
  tagPOINT local_18;
  clock_t local_10;
  CMFCToolBarMenuButton *local_c;
  CMFCPopupMenuBar *local_8;
  
  pcVar1 = *(code **)(*(int *)this + 0x1c8);
  guard_check_icall();
  this_00 = (CMFCPopupMenuBar *)(*pcVar1)();
  local_8 = this_00;
  if (param_1 != 0xec15) {
    if (param_1 == 0xec16) {
      local_18.x = 0;
      local_18.y = 0;
      GetCursorPos(&local_18);
      ScreenToClient(*(HWND *)(this + 0x20),&local_18);
      local_c = GetSelItem(this);
      if (local_c != (CMFCToolBarMenuButton *)0x0) {
        pcVar1 = *(code **)(*(int *)local_c + 0x58);
        guard_check_icall();
        (*pcVar1)();
        this_00 = local_8;
      }
      local_c = *(CMFCToolBarMenuButton **)(this_00 + 0xd4c);
      pt.y = local_18.y;
      pt.x = local_18.x;
      BVar2 = PtInRect((RECT *)(this + 0xf84),pt);
      if ((BVar2 == 0) || (-1 < *(int *)(this + 0xfa4))) {
        pt_00.y = local_18.y;
        pt_00.x = local_18.x;
        BVar2 = PtInRect((RECT *)(this + 0xf94),pt_00);
        if ((BVar2 == 0) || (*(int *)(this + 0xfa4) < 1)) {
          KillTimer(*(HWND *)(this + 0x20),0xec16);
          *(undefined4 *)(this + 0xfa4) = 0;
          InvalidateRect(*(HWND *)(this + 0x20),(RECT *)(this + 0xf94),1);
          InvalidateRect(*(HWND *)(this + 0x20),(RECT *)(this + 0xf84),1);
          goto LAB_100b8284;
        }
        iVar3 = (int)local_c + 1;
      }
      else {
        iVar3 = (int)local_c + -1;
      }
      CMFCPopupMenuBar::SetOffset(this_00,iVar3);
      AdjustScroll(this,0);
    }
    goto LAB_100b8284;
  }
  if (*(int *)(this + 0xf74) != 0) goto LAB_100b8284;
  local_10 = _clock();
  local_c = (CMFCToolBarMenuButton *)(float)DAT_10205be4;
  if (DAT_10205be4 < 0) {
    local_c = (CMFCToolBarMenuButton *)((float)local_c + 4.2949673e+09);
  }
  local_c = (CMFCToolBarMenuButton *)FUN_1017f8a0();
  AVar4 = GetAnimationType(0);
  if (AVar4 == 1) {
    pcVar1 = *(code **)(*(int *)this_00 + 0x358);
    guard_check_icall();
    iVar3 = (*pcVar1)();
    *(int *)(this + 0xf64) = *(int *)(this + 0xf64) + iVar3 * (int)local_c;
    this_00 = local_8;
LAB_100b816a:
    pcVar1 = *(code **)(*(int *)this_00 + 0x354);
    guard_check_icall();
    iVar3 = (*pcVar1)();
    *(int *)(this + 0xf68) = *(int *)(this + 0xf68) + iVar3 * (int)local_c;
    this_00 = local_8;
  }
  else {
    if (AVar4 == 2) goto LAB_100b816a;
    if ((AVar4 == 3) &&
       (*(int *)(this + 0xfb0) = *(int *)(this + 0xfb0) + 10,
       ((int)local_c + 10) * 10 < *(int *)(this + 0xfb0))) {
      *(undefined4 *)(this + 0xfb0) = 0x65;
    }
  }
  AVar4 = GetAnimationType(0);
  if ((AVar4 == 3) || (*(int *)(this + 0xf68) - *(int *)(this + 0x105c) < *(int *)(this + 0x14c))) {
    AVar4 = GetAnimationType(0);
    if ((AVar4 == 1) && (*(int *)(this + 0x148) <= *(int *)(this + 0xf64) - *(int *)(this + 0x105c))
       ) goto LAB_100b81e5;
    AVar4 = GetAnimationType(0);
    if ((AVar4 == 3) && (100 < *(int *)(this + 0xfb0))) goto LAB_100b81e5;
  }
  else {
LAB_100b81e5:
    *(int *)(this + 0xf64) = *(int *)(this + 0x148) + *(int *)(this + 0x105c);
    *(int *)(this + 0xf68) = *(int *)(this + 0x14c) + *(int *)(this + 0x105c);
    KillTimer(*(HWND *)(this + 0x20),0xec15);
    pcVar1 = *(code **)(*(int *)this_00 + 0x238);
    guard_check_icall(0,0,0,0,0,0x5f,0);
    (*pcVar1)();
    ValidateRect(*(HWND *)(local_8 + 0x20),(RECT *)0x0);
    *(undefined4 *)(this + 0xf74) = 1;
    if (*(int *)(this + 0x105c) != 0) {
      AVar4 = GetAnimationType(0);
      if ((AVar4 != 3) && (*(int *)(this + 0xf30) == 2)) {
        UpdateShadow(this,(tagRECT *)0x0);
      }
    }
  }
  RedrawWindow(*(HWND *)(this + 0x20),(RECT *)0x0,(HRGN)0x0,0x185);
  _DAT_1020f92c = local_10;
LAB_100b8284:
  FUN_100509af();
  return;
}

