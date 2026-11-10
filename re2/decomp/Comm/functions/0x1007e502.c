// rea decompile_all
// name: CMFCPopupMenu::AdjustScroll
// address: 0x1007e502
// body: available
// range: 0x1007e502-0x1007e815 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: int __thiscall CMFCPopupMenu::AdjustScroll(int)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCPopupMenu::AdjustScroll(CMFCPopupMenu *this,int param_1)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  BOOL BVar5;
  BOOL BVar6;
  undefined4 local_44;
  RECT local_38;
  RECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  pcVar1 = *(code **)(*(int *)this + 0x1c8);
  guard_check_icall();
  piVar2 = (int *)(*pcVar1)();
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  GetClientRect(*(HWND *)(this + 0x20),&local_18);
  if (DAT_101daf90 == 0) {
    local_18.right = local_18.right - *(int *)(this + 0x105c);
    local_18.bottom = local_18.bottom - *(int *)(this + 0x105c);
  }
  pcVar1 = *(code **)(*(int *)this + 0x20c);
  guard_check_icall();
  iVar3 = (*pcVar1)();
  InflateRect(&local_18,-iVar3,-iVar3);
  iVar4 = *(int *)(this + 0xf60);
  if (iVar4 == 0) {
    local_18.left = local_18.left + *(int *)(this + 0xf58);
  }
  else if (iVar4 == 1) {
    local_18.right = local_18.right - *(int *)(this + 0xf58);
  }
  else if (iVar4 == 2) {
    local_18.top = local_18.top + *(int *)(this + 0xf58);
  }
  else if (iVar4 == 3) {
    local_18.bottom = local_18.bottom - *(int *)(this + 0xf58);
  }
  local_18.top = local_18.top + (*(int *)(this + 0x1088) - *(int *)(this + 0x1080));
  if (*(int *)(this + 0x1138) == 0) {
    local_18.bottom = local_18.bottom + (*(int *)(this + 0x1154) - *(int *)(this + 0x115c));
  }
  else {
    local_18.top = local_18.top + (*(int *)(this + 0x115c) - *(int *)(this + 0x1154));
  }
  local_28.left = ((LPRECT)(this + 0xf84))->left;
  local_28.top = *(LONG *)(this + 0xf88);
  local_28.right = *(LONG *)(this + 0xf8c);
  local_28.bottom = *(LONG *)(this + 0xf90);
  local_38.left = *(LONG *)(this + 0xf94);
  local_38.top = *(LONG *)(this + 0xf98);
  local_38.right = *(LONG *)(this + 0xf9c);
  local_38.bottom = *(LONG *)(this + 4000);
  SetRectEmpty((LPRECT)(this + 0xf84));
  SetRectEmpty((LPRECT)(this + 0xf94));
  local_44 = 0x14;
  if (*(int *)(this + 0xf7c) == 0) {
    if (*(int *)(this + 0xf74) == 0) {
      local_44 = 0x1c;
      KillTimer(*(HWND *)(this + 0x20),0xec16);
      *(undefined4 *)(this + 0xfa4) = 0;
    }
  }
  else if (*(int *)(this + 0xf80) == 0) {
    pcVar1 = *(code **)(*(int *)this + 0x1e4);
    guard_check_icall();
    iVar4 = (*pcVar1)();
    if (iVar4 != 0) {
      *(LONG *)(this + 0xf84) = local_18.left;
      *(LONG *)(this + 0xf88) = local_18.top;
      *(LONG *)(this + 0xf8c) = local_18.right;
      *(LONG *)(this + 0xf90) = local_18.bottom;
      *(int *)(this + 0xf88) = *(int *)(this + 0xf88) + iVar3;
      *(int *)(this + 0xf90) = *(int *)(this + 0xf88) + *(int *)(this + 0xfa8);
      local_18.top = local_18.top + *(int *)(this + 0xfa8) + iVar3;
    }
    pcVar1 = *(code **)(*(int *)this + 0x1e8);
    guard_check_icall();
    iVar4 = (*pcVar1)();
    if (iVar4 != 0) {
      *(LONG *)(this + 0xf94) = local_18.left;
      *(LONG *)(this + 0xf98) = local_18.top;
      *(LONG *)(this + 0xf9c) = local_18.right;
      *(LONG *)(this + 4000) = local_18.bottom;
      *(int *)(this + 0xf98) = *(int *)(this + 4000) - *(int *)(this + 0xfa8);
      local_18.bottom = local_18.bottom - (iVar3 + *(int *)(this + 0xfa8));
    }
  }
  else {
    iVar4 = GetSystemMetrics(2);
    local_18.right = local_18.right - iVar4;
  }
  if (param_1 == 0) {
    BVar5 = EqualRect(&local_28,(RECT *)(this + 0xf84));
    if ((BVar5 != 0) && (BVar5 = EqualRect(&local_38,(RECT *)(this + 0xf94)), BVar5 != 0)) {
      pcVar1 = *(code **)(*piVar2 + 0x20c);
      guard_check_icall();
      (*pcVar1)();
      goto LAB_1007e790;
    }
  }
  pcVar1 = *(code **)(*piVar2 + 0x238);
  guard_check_icall(0,local_18.left,local_18.top,local_18.right - local_18.left,
                    local_18.bottom - local_18.top,local_44,0);
  (*pcVar1)();
  *(LONG *)(this + 0xf50) = local_18.bottom - local_18.top;
LAB_1007e790:
  BVar5 = EqualRect(&local_28,(RECT *)(this + 0xf84));
  if (BVar5 == 0) {
    InvalidateRect(*(HWND *)(this + 0x20),&local_28,1);
    InvalidateRect(*(HWND *)(this + 0x20),(RECT *)(this + 0xf84),1);
  }
  BVar6 = EqualRect(&local_38,(RECT *)(this + 0xf94));
  if (BVar6 == 0) {
    InvalidateRect(*(HWND *)(this + 0x20),&local_38,1);
    InvalidateRect(*(HWND *)(this + 0x20),(RECT *)(this + 0xf94),1);
  }
  if (BVar6 == 0 || BVar5 == 0) {
    UpdateWindow(*(HWND *)(this + 0x20));
  }
  iVar4 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar4;
}

