// rea decompile_all
// name: CMFCPopupMenu::SetScrollBar
// address: 0x4ce6f0
// body: available
// range: 0x4ce6f0-0x4ce943 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCPopupMenu::SetScrollBar(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCPopupMenu::SetScrollBar(CMFCPopupMenu *this)

{
  CWnd *this_00;
  code *pcVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  UINT wArrows;
  tagSCROLLINFO local_44;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  if ((*(int *)(this + 0xf80) != 0) && (*(int *)(this + 0xf7c) != 0)) {
    pcVar1 = *(code **)(*(int *)this + 0x1c8);
    guard_check_icall();
    piVar2 = (int *)(*pcVar1)();
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    GetClientRect(*(HWND *)(this + 0x20),&local_18);
    if (DAT_00614ed8 == 0) {
      local_18.right = local_18.right - *(int *)(this + 0x105c);
      local_18.bottom = local_18.bottom - *(int *)(this + 0x105c);
    }
    pcVar1 = *(code **)(*(int *)this + 0x20c);
    guard_check_icall();
    iVar3 = (*pcVar1)();
    InflateRect(&local_18,-iVar3,-iVar3);
    iVar3 = *(int *)(this + 0xf60);
    if (iVar3 == 0) {
      local_18.left = local_18.left + *(int *)(this + 0xf58);
    }
    else if (iVar3 == 1) {
      local_18.right = local_18.right - *(int *)(this + 0xf58);
    }
    else if (iVar3 == 2) {
      local_18.top = local_18.top + *(int *)(this + 0xf58);
    }
    else if (iVar3 == 3) {
      local_18.bottom = local_18.bottom - *(int *)(this + 0xf58);
    }
    local_18.top = local_18.top + (*(int *)(this + 0x1088) - *(int *)(this + 0x1080));
    if (*(int *)(this + 0x1138) == 0) {
      local_18.bottom = local_18.bottom + (*(int *)(this + 0x1154) - *(int *)(this + 0x115c));
    }
    else {
      local_18.top = local_18.top + (*(int *)(this + 0x115c) - *(int *)(this + 0x1154));
    }
    local_28 = GetSystemMetrics(2);
    local_28 = local_18.right - local_28;
    local_24 = local_18.top;
    local_20 = local_18.right;
    local_1c = local_18.bottom;
    wArrows = 0;
    local_18.right = local_28;
    _memset(&local_44,0,0x1c);
    local_44.cbSize = 0x1c;
    this_00 = (CWnd *)(this + 0xfb8);
    local_44.fMask = 7;
    if ((this_00 == (CWnd *)0x0) || (*(int *)(this + 0xfd8) == 0)) {
      pcVar1 = *(code **)(*(int *)this_00 + 0x164);
      guard_check_icall(0x50000001,&local_28,this,1);
      (*pcVar1)();
    }
    else {
      CWnd::SetWindowPos(this_00,(CWnd *)0x0,local_28,local_24,local_20 - local_28,
                         local_1c - local_24,0x14);
      CWnd::GetScrollInfo(this_00,2,&local_44,0x17);
    }
    local_44.nMin = 0;
    local_44.nMax = 0;
    local_44.nPage = 0;
    pcVar1 = *(code **)(*piVar2 + 0x354);
    guard_check_icall();
    iVar3 = (*pcVar1)();
    iVar4 = FUN_004531a6();
    if ((iVar4 < 1) || (iVar3 < 1)) {
      piVar2[0x361] = 0;
    }
    else {
      local_44.nPage = 1;
      local_44.nMax = (iVar4 * iVar3 - *(int *)(this + 0xf50)) / iVar3 + 1;
      piVar2[0x361] = *(int *)(this + 0xf50) / iVar3;
    }
    CWnd::SetScrollInfo((CWnd *)(this + 0xfb8),2,&local_44,1);
    if (local_44.nMax < 1) {
      wArrows = 3;
    }
    EnableScrollBar(*(HWND *)(this + 0xfd8),2,wArrows);
    CWnd::EnableWindow((CWnd *)(this + 0xfb8),1);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

